#!/bin/bash

rm bin/ds-start
g++ -Wall -Wextra -Werror src/Main.cpp -o bin/ds-start
# To build for Windows, change the `ds-start` to `ds-start.exe`
# For a UNIX OS (Linux, macOS), just leave it as it is