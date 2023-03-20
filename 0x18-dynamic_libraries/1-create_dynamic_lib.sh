#!/bin/bash
gcc -c -fPIC *.c
gcc *.o -o liball.so -shared -fPIC -Wl,-soname,liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
