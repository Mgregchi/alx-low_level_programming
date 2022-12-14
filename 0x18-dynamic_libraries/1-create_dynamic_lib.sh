#!/bin/bash
gcc -g -fPIC *.c
gcc -shared -o liball.so *.o
