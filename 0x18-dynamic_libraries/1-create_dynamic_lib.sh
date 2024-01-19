#!/bin/bash

# Compile all .c files (excluding files with main function) into individual object files and create dynamic library
gcc -c *.c -fpic && gcc *.o -shared -o liball.so
