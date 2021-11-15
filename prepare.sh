#!/bin/bash

pushd versions
npm ci
node update.js
popd

cp versions/switches-version.json mopo-switches/dist/default/production/switches-version.json
cp versions/displays-version.json mopo-displays/dist/default/production/displays-version.json
cp versions/driver-version.json mopo-driver/dist/default/production/driver-version.json

tar cvzf dist.tar.gz mopo-switches/dist/default/production/switches-version.json mopo-displays/dist/default/production/displays-version.json mopo-driver/dist/default/production/driver-version.json mopo-displays/dist/default/production/mopo-displays.production.hex mopo-driver/dist/default/production/mopo-driver.production.hex mopo-switches/dist/default/production/mopo-switches.production.hex