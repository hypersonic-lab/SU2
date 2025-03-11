./meson.py build -Denable-mpp=true --prefix=$PWD/install --reconfigure -Ddebug=true --optimization=0 -Dwith-mpi=disabled
./ninja -C build install
