# FRDM-K64F-baremetal-minimal

Build Host: Linux

Dependencies: GCC-ARM-EMBEDDED
Compiler: https://launchpad.net/gcc-arm-embedded

Steps to Build Project:

1) Download and extract the compiler: 

wget https://launchpad.net/gcc-arm-embedded/4.9/4.9-2015-q3-update/+download/gcc-arm-none-eabi-4_9-2015q3-20150921-linux.tar.bz2
tar -xvf gcc-arm-none-eabi-4_9-2015q3-20150921-linux.tar.bz2
mv gcc-arm-none-eabi-4_9-2015q3 /opt

2) Clone the repository

https://github.com/ferlzc/FRDM-K64F-baremetal-minimal.git

3) Build a basic project

cd FRDM-K64F-baremetal-minimal
make
