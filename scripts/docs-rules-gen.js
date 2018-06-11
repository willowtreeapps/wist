const fs = require('fs');
const path = require('path');
const doctrine = require('doctrine');
const yaml = require('write-yaml');
const rules = require('../src/js/load-rules')();

const markdownTemplate = `---
title: {{title}}
layout: doc
edit_link: https://github.com/willowtreeapps/wist/edit/master/docs/user-guide/rules/{{title}}
sidebar: "user-guide"
grouping: "rules"
---

# {{title}}

{{description}}

## Version
This rule was introduced in Wist {{version}}.
`

const commentPatten = '(\\/\\*[\\d\\D]*?\\*\\/)';

let rulesMeta = Object.keys(rules).map(ruleId => {
    let path = rules[ruleId];
    let content = fs.readFileSync(path, 'utf8');
    let matches = new RegExp(commentPatten, ['i']).exec(content);

    let description = ''
    let since = ''
    if (matches != null) {
        let meta = matches[1];
        let parsedComment = doctrine.parse(meta, { unwrap: true });
        description = parsedComment.tags[0].description;
        since = parsedComment.tags[1].description
    }

    return {
        name: ruleId,
        description: description,
        since: since
    }
});

rulesMeta.forEach(element => {
    let content = markdownTemplate.replace(new RegExp('{{title}}', 'g'), element.name)
        .replace(new RegExp('{{version}}', 'g'), element.since)
        .replace(new RegExp('{{description}}', 'g'), element.description);

    fs.writeFileSync(path.resolve(__dirname, `../docs/user-guide/rules/${element.name}.md`), content);
});


const meta = {
    categories: [{
        name: 'Best Practices',
        description: 'Better ways of doing things to help you avoid common problems',
        rules: rulesMeta
    }]
}

yaml.sync(path.resolve(__dirname, '../docs/_data/rules.yml'), meta);



