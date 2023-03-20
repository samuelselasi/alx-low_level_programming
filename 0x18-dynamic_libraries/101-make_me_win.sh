#!/bin/bash
wget -P /tmp https://github.com/samuelselasi/alx-low_level_programming/raw/master/0x18-dynamic_libraries/gm_crack.so
export LD_PRELOAD=/tmp/gm_crack.so
