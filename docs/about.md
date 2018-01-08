---
title: About
layout: doc
edit_link: https://github.com/willowtreeapps/wist/edit/master/docs/about.md
grouping: about
navigation: true
order: 3
---

# About

Wist was created at [WillowTree](https://willowtreeapps.com/), the mobile product agency. 
It started in August 2017 as a way to bring the robust linting capabilities of other languages to the larger community of BrightScript developers.


## Philosophy

While not a direct fork, Wist shares themes, principles, and in some cases, code, with [ESLint](https://eslint.org).

Our hope is to strengthen and equip the community of BrightScript developers to make awesome experiences for Roku devices.


## Team

<ul class="list-group list-group-team">
    {% for member in site.data.team %}
        {% assign gh_user = site.github.contributors | where_exp: "item", "item.login == member.github_login" | first %}
        <li class="list-group-item d-flex justify-content-between align-items-center">
            <span>{{ member.name }} (<a href="{{ gh_user.html_url }}" title="@{{ gh_user.login }}">@{{ gh_user.login }}</a>)</span>
            <a href="{{ gh_user.html_url }}" title="@{{ gh_user.login }}"><img src="{{ gh_user.avatar_url }}" alt="@{{ gh_user.login }}"></a>
        </li>
    {% endfor %}
</ul>

## Projects

Here are some projects we’ve built using Wist.

<ul class="list-group mb-3">
    {% for integrator in site.data.integrators %}
        <li class="list-group-item d-flex justify-content-start align-items-center">
            <a class="integrator-logo" href="{{ integrator.url }}" title="{{ integrator.name }}">
                {% include logos/{{integrator.icon}}.svg %}
            </a>

            <div class="pl-4">
                <h4 class="card-title">
                    <a href="{{ integrator.url }}" title="{{ integrator.name }}">{{ integrator.name }}</a>
                </h4>

                <p class="card-text">{{ integrator.description }}</p>
            </div>
        </li>
    {% endfor %}
</ul>

Want to help us create amazing Roku apps? Learn more about working at [WillowTree](https://willowtreeapps.com/careers).