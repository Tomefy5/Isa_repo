#!/bin/bash

g++ -c ./fonction/ratio.cpp -o ./compiled/ratio.o
g++ -c ./fonction/complexe.cpp -o ./compiled/complexe.o
g++ -c ./fonction/complexeRatio.cpp -o ./compiled/complexeRatio.o
g++ -c ./main.cpp -o ./compiled/main.o
g++ ./compiled/ratio.o ./compiled/main.o ./compiled/complexeRatio.o ./compiled/complexe.o -o ./compiled/prog_isa