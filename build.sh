#!/bin/bash

# Create a build directory
mkdir build
cd build

# Run CMake to generate makefiles
cmake ..

# Build the project using make
make
