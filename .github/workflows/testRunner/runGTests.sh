#!/bin/bash

# Exit immediately if a command exits with a non-zero status.
set -e

# run gtest executables in the output/exe/test directory
for exe in $(find ./output/exe/test -executable -type f); do
    echo "=============================="
    $exe   # run GTest executables
done

# finish up message
echo "=============================="
echo "All executables have been run!"