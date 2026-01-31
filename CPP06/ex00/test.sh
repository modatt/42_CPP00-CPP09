#!/bin/bash

BIN=./convert

GREEN="\033[0;32m"
RED="\033[0;31m"
NC="\033[0m"

run_test() {
    input="$1"
    expected="$2"

    output=$($BIN "$input")

    if [ "$output" = "$expected" ]; then
        echo -e "${GREEN}PASS${NC} → $input"
    else
        echo -e "${RED}FAIL${NC} → $input"
        echo "Expected:"
        echo "$expected"
        echo "Got:"
        echo "$output"
        echo "---------------------"
    fi
}
