# Getting Started with BSLint

BSLint is a tool for identifying and reporting on patterns found in BrightScript code, with the goal of making code more consistent and avoiding bugs.

* BSLint uses [ANTLR](https://www.antlr.org) for BrightScript parsing.
* BSLint uses an AST to evaluate patterns in code.

## Installation and Usage

There are two ways to install BSLint: globally and locally.

### Local Installation and Usage

If you want to include BSLint as part of your project's build system, we recommend installing it locally. You can do so using npm:

```
$ npm install bslint --save-dev
```

You should then setup a configuration file:

```
$ ./node_modules/.bin/bslint --init
```

After that, you can run BSLint in your project's root directory like this:

```
$ ./node_modules/.bin/bslint yourfile.js
```

### Global Installation and Usage

If you want to make BSLint available to tools that run across all of your projects, we recommend installing BSLint globally. You can do so using npm:

```
$ npm install -g bslint
```

You should then setup a configuration file:

```
$ bslint --init
```

After that, you can run BSLint on any file or directory like this:

```
$ bslint yourfile.js
```

## Configuration

After running `bslint --init`, you'll have a `.bslintrc.json` file in your directory. In it, you'll see some rules configured like this:

```json
{
    "rules": {
        "no-stop": ["error"],
        "no-print": ["warn"]
    }
}
```

The names `"no-stop"` and `"no-print"` are the names of [rules](https://willowtreeapps.github.io/bslint/rules) in BSLint. The first value is the error level of the rule and can be one of these values:

* `"off"` or `0` - turn the rule off
* `"warn"` or `1` - turn the rule on as a warning (doesn't affect exit code)
* `"error"` or `2` - turn the rule on as an error (exit code will be 1)

The three error levels allow you fine-grained control over how BSLint applies rules (for more configuration options and details, see the [configuration docs](https://willowtreeapps.github.io/bslint/user-guide/configuring)).