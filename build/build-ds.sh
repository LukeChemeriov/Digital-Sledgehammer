#!/bin/bash

cd ../
g++ -c -Wall -Wextra -Werror -src/Main.cpp -o build/intermediates/Main.o 
# To build for Windows, change the `ds-start` to `ds-start.exe`
# For a UNIX OS (Linux, macOS), just leave it as it is
g++ -o bin/ds-start build/intermediates/Main.o