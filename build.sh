#!/bin/bash

DRUSH=d7
SCOPE=local

$DRUSH -y -q make gdg.make
$DRUSH -y en master features
$DRUSH -y master-execute --scope=$SCOPE
$DRUSH -y fra
$DRUSH -y updb
$DRUSH cc all
