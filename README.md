## BOOST
This project was created to learn about the BOOST library.

## Folder Tree :
Your Project Folder
<br />
|--- boost<br />
|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|<br />
| &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|---boost_1_68_0<br />
|<br />
|---Examples-BOOST_Cpp


## Install
```bash 
git clone https://github.com/KMACEL/Examples-BOOST_Cpp.git
```

```bash 
mkdir boost
```

```bash 
cd boost
```

```bash 
wget https://dl.bintray.com/boostorg/release/1.68.0/source/boost_1_68_0.tar.bz2
```
```bash 
tar --bzip2 -xf boost_1_68_0.tar.bz2
```

```bash 
cd boost_1_68_0/
```

```bash 
./bootstrap.sh --prefix=.
```

```bash 
./b2 install
```

## System Env Settings

Add : ~/.profile

```bash
BOOST_ROOT=~/boost/boost_1_68_0
export LD_LIBRARY_PATH=LD_LIBRARY_PATH:/$BOOST_ROOT/lib
```
## Referance : 
> https://www.boost.org/doc/libs/1_67_0/

> Boost.Asio C++ Network Programming Cookbook

> https://www.gamedev.net/blogs/entry/2249317-a-guide-to-getting-started-with-boostasio/

> https://theboostcpplibraries.com/

> http://think-async.com/Asio/WebHome

> http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n2054.pdf

> https://github.com/wyrover/book-code

