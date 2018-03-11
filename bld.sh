#!/bin/bash

if [ "$1" == "clean" ]
then
    echo "Cleaning the build folder"
    rm -rf build
else
    pushd build
    cmake ..
    cmake --build .
    popd
fi
