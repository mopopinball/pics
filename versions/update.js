import {readFileSync, writeFileSync} from 'fs';
import {execSync} from 'child_process';
import semver from 'semver';

const updateVersionFile = (typeString) => {
    console.info(`Checking ${typeString}`);
    const swHash = execSync(`sha1sum ../mopo-${typeString}/dist/default/production/mopo-${typeString}.production.hex`).toString().split(' ')[0];

    const versionManifest = JSON.parse(readFileSync(`./${typeString}-version.json`));
    if(swHash !== versionManifest.hash) {
        versionManifest.version = semver.inc(versionManifest.version, 'minor');
        versionManifest.hash = swHash;
        console.info(`Updated ${typeString} to version ${versionManifest.version}`);
        writeFileSync(`./${typeString}-version.json`, JSON.stringify(versionManifest));
    }
};

updateVersionFile('displays');
updateVersionFile('driver');
updateVersionFile('switches');