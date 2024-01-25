# PeakCan Library
Driver for buiding peak can module on Linux  

## Features
- Support of all CAN 2.0 a/b and CAN FD hardware products made by PEAK-System
- Support of all 2.6.x, 3.x, and 4.x Linux Kernels in 32 and 64-bit environments
- DESTDIR and cross-compilation supported
- Udev system support
- Enhanced sysfs integration
- Optimized character mode device driver interface (chardev) supporting CAN 2.0 as well as CAN
- FD standard and multiple messages transfers between applications and the driver
- SocketCAN device driver interface (netdev) supporting CAN 2.0 as well as CAN FD new features, with enhanced NETLINK integration (ip link support)
- Real-time Linux extensions like Xenomai 3.x and RTAI 4.x and 5.x supported by the driver, as well as by the user space library and the test and examples applications (chardev interface only)
- Full binary compatibility with existing CAN 2.0 chardev applications that run over older versions of the driver (7.x and older)

## Dependencies
 - Linux-based system running a 32 or a 64-bit Kernel
 - PC CAN interface from PEAK-System
 - make, gcc
 - The kernel headers (or Linux headers) package of the running Linux or the sources tree of a cross-compiled Kernel
 - g++ and libstdc++
 - libpopt-dev package

## How to build
### Build non-real time binaries with default configuration
 1. `cd peak-linux-driver-X.Y.Z`
 2. `make clean`
 3. `make`
 4. `sudo make install`
 5. Driver loading `sudo modprobe pcan`
 6. Check pcan driver `cat /proc/pcan`

*------------- PEAK-System CAN interfaces (www.peak-system.com) -------------
*------------- Release_20230330_n (8.16.0) Jan 25 2024 14:25:57 --------------
*---------------------- [mod] [isa] [pci] [pec] [usb] -----------------------
*--------------------- 1 interfaces @ major 506 found -----------------------
*n -type- -ndev- --base-- irq --btr- --read-- --write- --irqs-- -errors- status
32    usb   -NA- ffffffff 000 0x001c 00000000 00000000 00000000 00000000 0x0000
### Other builds (to be updated)



