---
title: Getting Started Developing with BSLint
layout: doc
edit_link: https://github.com/willowtreeapps/bslint/edit/master/docs/developer-guide/getting-started.md
sidebar: "developer-guide"
---

# Getting Started Developing with BSLint

BSLint is hosted at [GitHub](https://github.com/willowtreeapps/bslint) and uses [Git](http://git-scm.com/) for source control. In order to obtain the source code, you must first install Git on your system. Instructions for installing and setting up Git can be found at [http://help.github.com/set-up-git-redirect](http://help.github.com/set-up-git-redirect).

If you simply want to create a local copy of the source to play with, you can clone the main repository using this command:

    git clone git://github.com/willowtreeapps/bslint.git

If you're planning on contributing to BSLint, then it's a good idea to fork the repository. You can find instructions for forking a repository at [http://help.github.com/fork-a-repo/](http://help.github.com/fork-a-repo/). After forking the BSLint repository, you'll want to create a local copy of your fork.

## Prerequisites

Before you can get started developing, you'll need to have a couple of things installed:

* [Node.JS](http://nodejs.org)
* [npm](http://npmjs.org)

Once you have a local copy and have Node.JS and npm installed, you'll need to install the BSLint dependencies:

    cd bslint
    npm install

Now when you run `bslint`, it will be running your local copy and showing your changes.

**Note:** It's a good idea to re-rerun `npm install` whenever you pull from the main repository to ensure you have the latest development dependencies.

## Running the Docs

`npm run docs`

This command launches an instance of Jekyll that allows you to view a local copy of the docs, found at [http://localhost:4000/bslint/](http://localhost:4000/bslint/).

## Directory Structure

The BSLint directory and file structure is as follows:

* `bin` - executable files that are available when BSLint is installed
* `build` - build scripts that help with various parts of development
* `docs` - documentation for the project
* `lib` - contains the source code
    * `formatters` - all source files defining formatters
    * `rules` - all source files defining rules
* `test` - the main unit test folder
    * `lib` - tests for the source code
        * `formatters` - tests for the formatters
        * `rules` - tests for the rules