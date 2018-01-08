---
title: List of available rules
layout: doc
edit_link: https://github.com/willowtreeapps/wist/edit/master/docs/user-guide/rules/index.md
sidebar: "user-guide"
grouping: "rules"
---
# Rules

Configurable rules available in Wist.
{% for category in site.data.rules.categories %}

<table class="table table-striped table-sm table-responsive">
<tr>
<th>Name</th>
<th>Description</th>
<th>Since</th>
</tr>
<tbody>
{% assign rules = category.rules | sort: 'name' %}
{% for rule in rules %}
<tr>
<td markdown="1">[{{rule.name}}]({{rule.name}})
</td>
<td markdown="1">{{rule.description}}
</td>
<td markdown="1">{{rule.since}}
</td>
</tr>
{% endfor %}
</tbody>
</table>

{% endfor %}