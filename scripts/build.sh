#!/usr/bin/env bash

cmake -G Ninja -B ./build .
cmake --build ./build --config Debug --target all -- -j 10