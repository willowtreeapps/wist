# Wist

<p align="center">
    <img width="200px" height="200px" src="https://user-images.githubusercontent.com/2018617/40627339-63aa1270-628c-11e8-8418-5b0eb88d68e1.png"/>
</p>

[![node](https://img.shields.io/node/v/@willowtreeapps/wist.svg?style=flat-square)](https://www.npmjs.com/package/@willowtreeapps/wist)
[![npm](https://img.shields.io/npm/v/@willowtreeapps/wist.svg?style=flat-square)](https://www.npmjs.com/package/@willowtreeapps/wist)
[![npm](https://img.shields.io/npm/dt/@willowtreeapps/wist.svg?style=flat-square)](https://www.npmjs.com/package/@willowtreeapps/wist)

Wist is a linter for identifying and reporting errors in Brightscript code. It helps you identify errors before you upload code to your Roku.

**For full documentation, please see our user and developer guides [here](https://willowtreeapps.github.io/wist/)**

## How does it compare to other tools?

Wist has one of the most accurate and complete implementations of the Brightscript grammer available right now. 
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

You can install them through their respective package managers and work out of the box with a `.wistrc.json` in your root directory.

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

These configures the sort of errors that the [rules engine](https://willowtreeapps.github.io/wist/user-guide/rules-engine) reports back. There are several other [rules](https://willowtreeapps.github.io/wist/user-guide/rules/) that can be configured. See the documentation for the full list.

Once your `.wistrc.json` has been configured to your liking. Invoke wist on your Brightscript file.

```
$ wist yourfile.brs
```

## Contributing to Wist

Contributions are welcome. Please see the [Contributing guidelines](CONTRIBUTING.md).

Wist has adopted a [Code of Conduct](CODE_OF_CONDUCT.md) defined by the [Contributor Covenant](http://contributor-covenant.org). Please see our [Code of Conduct](/CODE_OF_CONDUCT.md) as well as our [Contributing Guidelines ](/CONTRIBUTING.md) for more information.
