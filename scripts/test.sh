#!/usr/bin/env bash

export GTEST_COLOR=1

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

"$SCRIPT_DIR"/build.sh

ctest --test-dir build \
    --verbose -j10 \
    -C Debug \
    -T test \
    --output-on-failure \
    -R ^AllTests$