@echo off

mkdir ..\build
pushd ..\build
cl -FC -Zi w:\clox_interpreted\src\main.cpp
cl -FC -Zi w:\clox_interpreted\src\token.cpp
popd