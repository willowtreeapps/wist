# Getting Started with Wisteria

Wisteria is a tool for identifying and reporting on patterns found in BrightScript code, with the goal of making code more consistent and avoiding bugs.

* Wisteria uses [ANTLR](https://www.antlr.org) for BrightScript parsing.
* Wisteria uses an AST to evaluate patterns in code.

## Installation and Usage

There are two ways to install Wisteria: globally and locally.

### Local Installation and Usage

If you want to include Wisteria as part of your project's build system, we recommend installing it locally. You can do so using npm:

```
$ npm install wisteria --save-dev
```

You should then setup a configuration file:

```
$ ./node_modules/.bin/wisteria --init
```

After that, you can run Wisteria in your project's root directory like this:

```
$ ./node_modules/.bin/wisteria yourfile.js
```

### Global Installation and Usage

If you want to make Wisteria available to tools that run across all of your projects, we recommend installing Wisteria globally. You can do so using npm:

```
$ npm install -g wisteria
```

You should then setup a configuration file:

```
$ wisteria --init
```

After that, you can run Wisteria on any file or directory like this:

```
$ wisteria yourfile.js
```

## Configuration

After running `wisteria --init`, you'll have a `.wisteriarc.json` file in your directory. In it, you'll see some rules configured like this:

```json
{
    "rules": {
        "no-stop": ["error"],
        "no-print": ["warn"]
    }
}
```

The names `"no-stop"` and `"no-print"` are the names of [rules](https://willowtreeapps.github.io/wisteria/rules) in Wisteria. The first value is the error level of the rule and can be one of these values:

* `"off"` or `0` - turn the rule off
* `"warn"` or `1` - turn the rule on as a warning (doesn't affect exit code)
* `"error"` or `2` - turn the rule on as an error (exit code will be 1)

The three error levels allow you fine-grained control over how Wisteria applies rules (for more configuration options and details, see the [configuration docs](https://willowtreeapps.github.io/wisteria/user-guide/configuring)).