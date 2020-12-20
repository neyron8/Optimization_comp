#!/bin/bash
clang -O3 -S -emit-llvm -mllvm -disable-llvm-optzns false.c 
opt-10 -sroa -inline -gvn -S false.ll -o before_opt.ll
opt-10 -loop-deletion -S before_opt.ll -o after_opt.ll
