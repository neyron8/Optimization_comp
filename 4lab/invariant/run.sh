#!/bin/bash
clang -O3 -S -emit-llvm -mllvm -disable-llvm-optzns inv.c 
opt-10 -sroa -S inv.ll -o before_opt.ll
opt-10 -loop-deletion -S before_opt.ll -o after_opt.ll