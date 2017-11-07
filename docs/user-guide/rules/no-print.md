---
title: no-print
layout: doc
edit_link: https://github.com/willowtreeapps/wisteria/edit/master/docs/user-guide/rules/no-print.md
sidebar: "user-guide"
---

# Disallow use of print and ? statements. (no-print)
Developers often add `print` statements to code which is not complete or is being debugged. Most likely you want to fix or review the code, and then remove the `print` statement, before you consider the code to be production ready.

## Rule Details
This rule aims to eliminate the possibility of `print` statements being accidentally commited to production code.

## Version
This rule was introduced in Wisteria 1.0.0.