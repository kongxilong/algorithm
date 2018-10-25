#! /usr/bin/env bash

DIR=$(cd $( dirname "${BASH_SOURCE[0]}" ) && pwd )
echo "DIR = ${DIR}"

function build(){
  bazel build "//main:solution"  --compilation_mode=dbg --cxxopt=-g  --cxxopt=-O0 
}

function run(){
 BIN="${DIR}/bazel-bin/main/solution"
 if [ ! -e "$BIN" ];then
   echo "error.please build target $BIN before run."
   exit 0
 fi
 eval "$BIN"
}


function main(){
  local cmd=$1
  case $cmd in
    run)
      run
      ;;
    build)
      build
      ;;
    *)
      echo "please input cmd."
      exit 0
  esac
}

main $@
