---
title: Command Line Interface
layout: doc
edit_link: https://github.com/willowtreeapps/wist/edit/master/docs/user-guide/command-line-interface.md
sidebar: "user-guide"
grouping: "cli"
---

# Command Line Interface

To run Wist on Node.js, you must have npm installed. If npm is not installed, follow the instructions here: https://www.npmjs.com/

Once npm is installed, run the following

    $ npm i -g wist

This installs the Wist CLI from the npm repository. To run Wist, use the following format:

    $ wist [options] [file]*

Such as:

    $ wist file1.js file2.js


## Usage

The command line utility has several options. You can view the options by running `wist -h`.

```text
wist [options] file.js [file.js]

Basic configuration:
  -f, --format String  Output format - default: stylish
  -v, --verbose        Verbose logging
  -h, --help           Show help
```

Example:

```sh
$ wist -f compact file.js
```
When specified, the given format is output to the console. If you'd like to save that output into a file, you can do so on the command line like so:

```
$ wist -f compact file.js > results.txt
```

This saves the output into the `results.txt` file.

`--init`

This option will start config initialization wizard. It's designed to help new users quickly create .wistrc file by answering a few questions, choosing a popular style guide, or inspecting your source files and attempting to automatically generate a suitable configuration.

The resulting configuration file will be created in the current directory.

`-h`, `--help`

This option outputs the help menu, displaying all of the available options. All other options are ignored when this is present.

`-v`, `--verbose`

This option outputs debugging information to the console. This information is useful when you're seeing a problem and having a hard time pinpointing it. The Wist team may ask for this debugging information to help solve bugs.

### Formatting options

`-f`, `--format`

This option specifies the output format for the console. Possible formats are:

* compact
* json
* stylish
* unix
* visualstudio