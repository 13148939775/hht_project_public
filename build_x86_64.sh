#!/bin/bash
BUILD_PATH="build"
if [ -d "$BUILD_PATH" ]; then
    echo "$BUILD_PATH exist"
    rm -rf "$BUILD_PATH"/*
else
    mkdir -p $BUILD_PATH
fi
(cd $BUILD_PATH && cmake .. -DCMAKE_VERBOSE_MAKEFILE=OFF && make -j8 -l8)