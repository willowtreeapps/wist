# Wist

<p align="center">
    <img width="200px" height="200px" src="https://user-images.githubusercontent.com/2018617/40627339-63aa1270-628c-11e8-8418-5b0eb88d68e1.png"/>
</p>

[![Node version](https://img.shields.io/node/v/@willowtreeapps/wist.svg?style=flat-square)](https://www.npmjs.com/package/@willowtreeapps/wist)
[![Npm version](https://img.shields.io/npm/v/@willowtreeapps/wist.svg?style=flat-square)](https://www.npmjs.com/package/@willowtreeapps/wist)
[![Npm downloads](https://img.shields.io/npm/dt/@willowtreeapps/wist.svg?style=flat-square)](https://www.npmjs.com/package/@willowtreeapps/wist)
[![Travis branch](https://img.shields.io/travis/willowtreeapps/wist.svg?style=flat-square)](https://travis-ci.org/willowtreeapps/wist)


[Website](https://willowtreeapps.github.io/wist/) |
[Configuring](https://willowtreeapps.github.io/wist/user-guide/getting-started) |
[Rules](https://willowtreeapps.github.io/wist/user-guide/rules/) |
[Contributing](https://willowtreeapps.github.io/wist/developer-guide/contributing/) |
[Reporting Bugs](https://willowtreeapps.github.io/wist/developer-guide/contributing/#reporting-bugs) |
[Code of Conduct](https://willowtreeapps.github.io/wist/developer-guide/contributing/code-of-conduct)

Wist is a linter for identifying and reporting errors found in Brightscript code. It helps you identify errors before you upload code to your Roku.

**For full documentation, please see our user and developer guides [here](https://willowtreeapps.github.io/wist/)**

## How does it compare to other tools?

Wist has one of the most accurate and complete implementations of the Brightscript grammar available right now. 
It focuses reporting not just syntax violations, but reporting patterns that are likely to result in errors.

## Questions?

Join us in the #tooling channel on the [Roku Developers Slack](https://join.slack.com/t/rokudevelopers/shared_invite/enQtMzU5Njc5ODM5MzAyLWE2MTIxMWQ5Nzg0Y2E3ODgzYTk4NmQxMDg2YjRjYjdiMzM5ZDU4ZTc0YmM1ZmU0Mzc5MzI3ODU3MmUxOTdlNTE).

## Requirements

* NodeJS

* (Optional) JDK8


## Clients

The easiest and best way to use Wist, is through our editor clients.

* [Atom IDE Brightscript](https://github.com/willowtreeapps/atom-ide-brightscript)
* [VSCode IDE Brightscript](https://github.com/willowtreeapps/vscode-ide-brightscript)

You can install them through their respective package managers and work out of the box with a `.wistrc.json` included in your root directory.

## Standalone installation

We recommend taking this approach if you if you want to include Wist as part of your project's build pipeline. Wist is available via as an NPM package and can be installed like so:

```
$ npm install -g @willowtreeapps/wist
```

It can be invoked directly using the `wist` command

```
$ wist yourfile.brs
```

Wist can also be installed locally to the project

```
$ npm install @willowtreeapps/wist --save-dev
```

After that, you can run Wist in your project's root directory like this:

```
$ ./node_modules/.bin/wist yourfile.brs
```


## Usage

```
wist [options] file.brs [file.brs] [dir]

Basic configuration:
  -i, --init           Initialize Wist
  -c, --config String  Use specified configuration file
  -f, --format String  Output format - either: compact, json, stylish, unix, or visualstudio - default: stylish
  -v, --verbose        Verbose logging
  -h, --help           Show help
```

To get started linting your Brightscript project, you should then setup a wist configuration file:

```
$ wist --init
```

This will generate a `.wistrc.json` file in your directory. In it, you'll see some rules configured like this:

```json
{
    "rules": {
        "no-stop": ["error"],
        "no-print": ["warn"]
    }
}
```

These configures the sort of errors that the [rules engine](https://willowtreeapps.github.io/wist/user-guide/rules-engine) reports back. There are several other rules that can be configured. See the [documentation](https://willowtreeapps.github.io/wist/user-guide/rules/) for the full list.

Once your `.wistrc.json` has been configured to your liking. Invoke wist on your Brightscript file.

```
$ wist yourfile.brs
```

## Wist format

Wist format or `wist-fmt` is an opinionated code formatter built into Wist. It works by traversing your codes abstract syntax tree and reprinting it with the appropriate whitespace after. `wist-fmt` can be run in a pre-commit hook, or in your CI environments to ensure your codebase has a consistent code style.

```
Usage: wist-fmt [options] [file.brs]

  -i, --indent Int  Number of tokens to indent
  --use-tabs        Indent with tabs
  -h, --help        Show help
  -v, --version     Show version information
```

You can invoke the formatter in the terminal using the `wist-fmt` command.

```
wist-fmt yourfile.brs
```

You can specify the number of spaces used to indent your code using the `-i` flag.

```
wist-fmt -i 2 yourfile.brs
```

## Contributing to Wist

Contributions are welcome. Please see the [Contributing guidelines](CONTRIBUTING.md).

Wist has adopted a [Code of Conduct](CODE_OF_CONDUCT.md) defined by the [Contributor Covenant](http://contributor-covenant.org). Please see our [Code of Conduct](/CODE_OF_CONDUCT.md) as well as our [Contributing Guidelines ](/CONTRIBUTING.md) for more information.

## FAQ

1. How do I run wist on directory or path? 
    
    You can use the directory syntax to pass a pattern. For example, if I wanted lint all the `*.brs` files in my sources directory, I can do so with this command.
    
    ```
    $ wist source/*.brs
    ```

2. Wist takes a really long time on large projects

    The reason for this is because Wist currently doesn't run lints in parallel. A work around for this would be to run multiple intances of wist in parallel. For example, 
    
    ```
    $ find source/ -name *.brs | xargs -P 8 wist
    ```
    
## License

```
   Copyright 2018 WillowTree Inc.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
```
