./meson.py build -Denable-mpp=true --prefix=$PWD/install --reconfigure
./ninja -C build install
mkdir install/lib
cp $MPP_DIRECTORY/install/lib/libmutation__.dylib install/lib/.
