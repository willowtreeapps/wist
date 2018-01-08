---
title: User Guide
layout: doc
edit_link: https://github.com/willowtreeapps/wist/edit/master/docs/user-guide/getting-started.md
sidebar: "user-guide"
grouping: "getting-started-user"
navigation: true
order: 1
---

# Getting Started with Wist

Wist is a tool for identifying and reporting on patterns found in BrightScript code, with the goal of making code more consistent and avoiding bugs.

* Wist uses [ANTLR](https://www.antlr.org) for BrightScript parsing.
* Wist uses an AST to evaluate patterns in code.

## Installation and Usage

There are two ways to install Wist: globally and locally.

### Local Installation and Usage

If you want to include Wist as part of your project's build system, we recommend installing it locally. You can do so using npm:

```
$ npm install wist --save-dev
```

You should then setup a configuration file:

```
$ ./node_modules/.bin/wist --init
```

After that, you can run Wist in your project's root directory like this:

```
$ ./node_modules/.bin/wist yourfile.js
```

### Global Installation and Usage

If you want to make Wist available to tools that run across all of your projects, we recommend installing Wist globally. You can do so using npm:

```
$ npm install -g wist
```

You should then setup a configuration file:

```
$ wist --init
```

After that, you can run Wist on any file or directory like this:

```
$ wist yourfile.js
```

## Configuration

After running `wist --init`, you'll have a `.wistrc.json` file in your directory. In it, you'll see some rules configured like this:

```json
{
    "rules": {
        "no-stop": ["error"],
        "no-print": ["warn"]
    }
}
```

The names `"no-stop"` and `"no-print"` are the names of [rules](/wist/user-guide/rules) in Wist. The first value is the error level of the rule and can be one of these values:

* `"off"` or `0` - turn the rule off
* `"warn"` or `1` - turn the rule on as a warning (doesn't affect exit code)
* `"error"` or `2` - turn the rule on as an error (exit code will be 1)

The three error levels allow you fine-grained control over how Wist applies rules (for more configuration options and details, see the [configuration docs](/wist/user-guide/configuring)).