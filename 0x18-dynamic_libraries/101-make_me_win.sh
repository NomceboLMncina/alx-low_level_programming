#!/bin/bash
wget -P .. https://githubusercontent.com/NomceboLMncina/alx-low_level_programming/master/0x18-dynamic_libraries/libstep.so
export LD_PRELOAD="$PWD/../libstep.so"
