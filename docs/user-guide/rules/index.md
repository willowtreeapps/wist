---
title: List of available rules
layout: doc
edit_link: https://github.com/willowtreeapps/wist/edit/master/docs/user-guide/rules/index.md
sidebar: "user-guide"
grouping: "rules"
---

# Rules

Rules in Wist are grouped by category to help you understand their purpose.

No rules are enabled by default.

{% for category in site.data.rules.categories %}

## {{ category.name}}

{{ category.description }}

<table class="table table-striped table-sm table-responsive">
<tbody>
{% assign rules = category.rules | sort: 'name' %}
{% for rule in rules %}
<tr>
<td markdown="1">[{{rule.name}}]({{rule.name}})
</td>
<td markdown="1">{{rule.description}}
</td>
</tr>
{% endfor %}
</tbody>
</table>

{% endfor %}