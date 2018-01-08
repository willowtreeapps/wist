---
title: Rules Engine
layout: doc
edit_link: https://github.com/willowtreeapps/wist/edit/master/docs/user-guide/rules-engine.md
sidebar: "user-guide"
grouping: "rules-engine"
---

# Rules Engine

Besides Wist's base linting capabilities focused on ensuring that your Brightscript is syntactically accurate, 
it comes with a rules engine which aims at providing helpful feedback about code quality. 

## Setup

Wist rules are set by providing a `.wistrc.json` file at the root of the project. 
They are flags that enable additional checks in the linter for various code quality enforcements.

> **No rules are enabled by default.**

Here is a sample `.wistrc.json`

```
{
    "rules": {
        "no-stop": ["error"],
        "no-print": ["warn"]
    }
}
```

Here the `no-stop` rule will trigger an error if `stop` is found in your code.

## Error Levels

Wist allows you to set 3 error levels for rules. 

1. `"off"` or `0` - Explicitly turns off a rule. This is the default state for all rules.
2. `"warn"` or `1` - Report violations of this rule as a warning.
3. `"error"` or `2` - Report violations of this rule as an error. Errors will return with an exit code of 1. 

The three error levels allow you fine-grained control over how Wist applies rules (for more configuration options and details, see the [configuration docs](/wist/user-guide/configuring)).