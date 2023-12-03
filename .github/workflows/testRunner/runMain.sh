#!/bin/bash

# Exit immediately if a command exits with a non-zero status.
set -e

# run executables in the output/exe/main directory
for exe in $(find ./output/exe/main -executable -type f); do
    echo "=============================="
    $exe   # run executables
done

# finish up message
echo "=============================="
echo "All executables have been run!"