'use strict';

//------------------------------------------------------------------------------
// Requirements
//------------------------------------------------------------------------------

const fs = require('fs'),
    path = require('path'),
    ConfigOps = require('./config-ops'),
    pathIsInside = require('path-is-inside'),
    stripComments = require('strip-json-comments');

//------------------------------------------------------------------------------
// Private
//------------------------------------------------------------------------------

const CONFIG_FILES = [
    '.wisteriarc.yaml',
    '.wisteriarc.yml',
    '.wisteriarc.json'
];

/**
 * Convenience wrapper for synchronously reading file contents.
 * @param {string} filePath The filename to read.
 * @returns {string} The file contents, with the BOM removed.
 * @private
 */
function readFile(filePath) {
    return fs.readFileSync(filePath, 'utf8').replace(/^\ufeff/, '');
}

/**
 * Determines if a given string represents a filepath or not using the same
 * conventions as require(), meaning that the first character must be nonalphanumeric
 * and not the @ sign which is used for scoped packages to be considered a file path.
 * @param {string} filePath The string to check.
 * @returns {boolean} True if it's a filepath, false if not.
 * @private
 */
function isFilePath(filePath) {
    return path.isAbsolute(filePath) || !/\w|@/.test(filePath.charAt(0));
}

/**
 * Loads a YAML configuration from a file.
 * @param {string} filePath The filename to load.
 * @returns {Object} The configuration object from the file.
 * @throws {Error} If the file cannot be read.
 * @private
 */
function loadYAMLConfigFile(filePath) {
    // lazy load YAML to improve performance when not used
    const yaml = require('js-yaml');

    try {

        // empty YAML file can be null, so always use
        return yaml.safeLoad(readFile(filePath)) || {};
    } catch (e) {
        e.message = `Cannot read config file: ${filePath}\nError: ${e.message}`;
        throw e;
    }
}

/**
 * Loads a JSON configuration from a file.
 * @param {string} filePath The filename to load.
 * @returns {Object} The configuration object from the file.
 * @throws {Error} If the file cannot be read.
 * @private
 */
function loadJSONConfigFile(filePath) {
    try {
        return JSON.parse(stripComments(readFile(filePath)));
    }
    catch (e) {
        e.message = `Cannot read config file: ${filePath}\nError: ${e.message}`;
        throw e;
    }
}

/**
 * Creates an error to notify about a missing config to extend from.
 * @param {string} configName The name of the missing config.
 * @returns {Error} The error object to throw
 * @private
 */
function configMissingError(configName) {
    const error = new Error(`Failed to load config '${configName}' to extend from.`);

    error.messageTemplate = 'extend-config-missing';
    error.messageData = {
        configName
    };
    return error;
}

/**
 * Loads a configuration file regardless of the source. Inspects the file path
 * to determine the correctly way to load the config file.
 * @param {Object} file The path to the configuration.
 * @returns {Object} The configuration information.
 * @private
 */
function loadConfigFile(file) {
    const filePath = file.filePath;
    let config;

    switch (path.extname(filePath)) {
        case '.yaml':
        case '.yml':
            config = loadYAMLConfigFile(filePath);
            break;

        default:
            config = loadJSONConfigFile(filePath);
    }

    return ConfigOps.merge(ConfigOps.createEmptyConfig(), config);
}

/**
 * Determines the base directory for node packages referenced in a config file.
 * This does not include node_modules in the path so it can be used for all
 * references relative to a config file.
 * @param {string} configFilePath The config file referencing the file.
 * @returns {string} The base directory for the file path.
 * @private
 */
function getBaseDir(configFilePath) {

    // calculates the path of the project including Wisteria as dependency
    const projectPath = path.resolve(__dirname, '../../../');

    if (configFilePath && pathIsInside(configFilePath, projectPath)) {

        // be careful of https://github.com/substack/node-resolve/issues/78
        return path.join(path.resolve(configFilePath));
    }

    /*
     * default to Wisteria project path since it's unlikely that plugins will be
     * in this directory
     */
    return path.join(projectPath);
}

/**
 * Determines the lookup path, including node_modules, for package
 * references relative to a config file.
 * @param {string} configFilePath The config file referencing the file.
 * @returns {string} The lookup path for the file path.
 * @private
 */
function getLookupPath(configFilePath) {
    const basedir = getBaseDir(configFilePath);

    return path.join(basedir, 'node_modules');
}

/**
 * Resolves a configuration file path into the fully-formed path, whether filename
 * or package name.
 * @param {string} filePath The filepath to resolve.
 * @param {string} [relativeTo] The path to resolve relative to.
 * @returns {Object} An object containing 3 properties:
 * - 'filePath' (required) the resolved path that can be used directly to load the configuration.
 * - 'configName' the name of the configuration inside the plugin.
 * - 'configFullName' (required) the name of the configuration as used in the wisteria config(e.g. 'plugin:node/recommended'),
 *     or the absolute path to a config file. This should uniquely identify a config.
 * @private
 */
function resolve(filePath, relativeTo) {
    const fullPath = path.resolve(relativeTo || '', filePath);
    return { filePath: fullPath, configFullName: fullPath };
}

/**
 * Loads a configuration file from the given file path.
 * @param {Object} resolvedPath The value from calling resolve() on a filename or package name.
 * @param {Config} configContext Plugins context
 * @returns {Object} The configuration information.
 */
function loadFromDisk(resolvedPath, configContext) {
    const dirname = path.dirname(resolvedPath.filePath),
        lookupPath = getLookupPath(dirname),
        config = loadConfigFile(resolvedPath);

    return config;
}

/**
 * Loads a config object from the config cache based on its filename, falling back to the disk if the file is not yet
 * cached.
 * @param {string} filePath the path to the config file
 * @param {Config} configContext Context for the config instance
 * @param {string} [relativeTo] The path to resolve relative to.
 * @returns {Object} the parsed config object (empty object if there was a parse error)
 * @private
 */
function load(filePath, configContext, relativeTo) {
    const resolvedPath = resolve(filePath, relativeTo);
    const cachedConfig = configContext.configCache.getConfig(resolvedPath.configFullName);

    if (cachedConfig) {
        return cachedConfig;
    }

    const config = loadFromDisk(resolvedPath, configContext);

    if (config) {
        config.filePath = resolvedPath.filePath;
        config.baseDirectory = path.dirname(resolvedPath.filePath);
        configContext.configCache.setConfig(resolvedPath.configFullName, config);
    }

    return config;
}


//------------------------------------------------------------------------------
// Public Interface
//------------------------------------------------------------------------------

module.exports = {
    getBaseDir,
    getLookupPath,
    load,
    resolve,
    CONFIG_FILES,

    /**
     * Retrieves the configuration filename for a given directory. It loops over all
     * of the valid configuration filenames in order to find the first one that exists.
     * @param {string} directory The directory to check for a config file.
     * @returns {?string} The filename of the configuration file for the directory
     *      or null if there is no configuration file in the directory.
     */
    getFilenameForDirectory(directory) {
        for (let i = 0, len = CONFIG_FILES.length; i < len; i++) {
            const filename = path.join(directory, CONFIG_FILES[i]);

            if (fs.existsSync(filename) && fs.statSync(filename).isFile()) {
                return filename;
            }
        }

        return null;
    }
};
