#! /bin/zsh
cd /users/ulysses/Desktop/source/projects/coding
rm -rf build/
mkdir build
cd build
cmake ..
make install
cd ../bin
./solution
