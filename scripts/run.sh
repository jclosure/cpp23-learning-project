#!/usr/bin/env bash

export GTEST_COLOR=1

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

"$SCRIPT_DIR"/build.sh

./build/cpp23_learning_project