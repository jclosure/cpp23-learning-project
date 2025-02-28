#!/usr/bin/env bash

rm -rf build
mkdir build
cmake -G Ninja -B ./build .
cmake --build ./build --config Debug --target all -- -j 10