#!/bin/bash
gcc -c -fPIC *.c
gcc *.o -o liball.so -shared -fPIC -Wl,-soname,liball.so
