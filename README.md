# Quick Start

## Software Installation

Install necessary packages

```
sudo apt-get install -y module-init-tools
sudo apt-get install -y git
sudo apt-get install -y build-essential
sudo apt-get install -y linux-headers-generic
sudo apt-get install -y libpcap-dev
sudo apt-get install -y yasm
sudo apt-get install -y libssl-dev
sudo apt-get install -y opensc
sudo apt-get install -y libgmp10
sudo apt-get install -y libgmp-dev
sudo apt-get install -y autoconf
sudo apt-get install -y libtool
sudo apt-get install -y gettext
sudo apt-get install -y pkg-config
sudo apt-get install -y bison
sudo apt-get install -y flex
sudo apt-get install -y gperf
sudo apt-get install -y python
```

Compile strongSwan

```
cd strongswan
./autogen.sh
./configure --enable-openssl --enable-lagopus-pfkey
make
sudo make install
```

