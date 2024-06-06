./meson.py build -Denable-mpp=true --prefix=$PWD/SU2_Install --reconfigure
./ninja -C build install
