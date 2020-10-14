#!/usr/bin/env bash

num_for_me=

main() {
    echo "One for "${1:-"you"}", "${num_for_me:-"one"}" for me."
}

main "$1"