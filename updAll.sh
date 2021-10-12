#!/bin/sh
git submodule update --init && git submodule foreach "git submodule update --init 2> /dev/null"
