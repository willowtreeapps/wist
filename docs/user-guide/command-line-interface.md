---
title: Command Line Interface
layout: doc
edit_link: https://github.com/willowtreeapps/bslint/edit/master/docs/user-guide/command-line-interface.md
---

# Command Line Interface

To run BSLint on Node.js, you must have npm installed. If npm is not installed, follow the instructions here: https://www.npmjs.com/

Once npm is installed, run the following

    npm i -g bslint

This installs the BSLint CLI from the npm repository. To run BSLint, use the following format:

    bslint [options] [file]*

Such as:

    bslint file1.js file2.js

## Options

The command line utility has several options. You can view the options by running `bslint -h`.

```text
bslint [options] file.js [file.js]

Basic configuration:
  -f, --format String  Output format - default: stylish
  -v, --verbose        Verbose logging
  -h, --help           Show help
```

### Basic configuration

#### `-f`, `--format`

This option specifies the output format for the console. Possible formats are:

* [compact](formatters/#compact)
* [json](formatters/#json)
* [stylish](formatters/#stylish) (the default)
* [unix](formatters/#unix)
* [visualstudio](formatters/#visualstudio)

Example:

    bslint -f compact file.js

When specified, the given format is output to the console. If you'd like to save that output into a file, you can do so on the command line like so:

    bslint -f compact file.js > results.txt

This saves the output into the `results.txt` file.

### Miscellaneous

#### `--init`

This option will start config initialization wizard. It's designed to help new users quickly create .bslintrc file by answering a few questions, choosing a popular style guide, or inspecting your source files and attempting to automatically generate a suitable configuration.

The resulting configuration file will be created in the current directory.

#### `-h`, `--help`

This option outputs the help menu, displaying all of the available options. All other options are ignored when this is present.

#### `-v`, `--verbose`

This option outputs debugging information to the console. This information is useful when you're seeing a problem and having a hard time pinpointing it. The BSLint team may ask for this debugging information to help solve bugs.