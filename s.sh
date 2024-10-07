#!/bin/bash
echo "Enter file name : "
input $DIR
mkdir -p $DIR/src $DIR/inc
touch main.c
cp ../Makefile .