#!/bin/bash

set -e

mkdir build
cd build
cmake ..
make
./run_tests
