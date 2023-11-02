#!/bin/bash

rm -rf ./bindings
rm -rf ./src/tree_sitter
rm -rf ./src/grammar.json
rm -rf ./src/node-types.json
rm -rf ./src/parser.c
rm -rf ./binding.gyp
rm -rf ./package.json
rm -rf ./Cargo.toml

tree-sitter generate