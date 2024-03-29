# reinventing-the-wheel

[![Build Status](https://travis-ci.org/8igMac/reinventing-the-wheel.svg?branch=master)](https://travis-ci.org/8igMac/reinventing-the-wheel)
[![codecov](https://codecov.io/gh/8igMac/reinventing-the-wheel/branch/master/graph/badge.svg)](https://codecov.io/gh/8igMac/reinventing-the-wheel)


People say "Don't reinvent the wheel." But sometimes you can learn
a lot by implementing the algorithm and data structures itself.
This repository contains a collection of data structures and 
algorithms implementated in C++ to serve as educational purpose.

## Dependencies
- gcc-7
- cmake >= 3.12
- googletest 

## Setup
- `git submodule init`
- `git submodule update`

## Build and run
- `mkdir -p build`
- `cmake .. -DCMAKE_BUILD_TYPE=Debug -DBUILD_TESTS=ON`
- `cmake --build .`
- `ctest`
