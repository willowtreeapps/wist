#!/bin/bash

sed -i "" "s/^current_version:.*/current_version: ${npm_package_version}/" docs/_config.yml