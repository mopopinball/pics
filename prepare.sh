#!/bin/bash

pushd versions
npm ci
node update.js
popd

tar cvzf dist.tar.gz versions/switches-version.json versions/displays-version.json versions/driver-version.json mopo-displays/dist/default/production/mopo-displays.production.hex mopo-driver/dist/default/production/mopo-driver.production.hex mopo-switches/dist/default/production/mopo-switches.production.hex