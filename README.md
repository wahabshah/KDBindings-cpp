
# Motivation

<a href="https://gitpod.io/#https://github.com/wahabshah/KDBindings-cpp" rel="nofollow noopener noreferrer" target="_blank" class="after:hidden"><img src="https://gitpod.io/button/open-in-gitpod.svg" alt="Open in Gitpod"></a>

* This repository contains usage of [KDBindings library](https://docs.kdab.com/kdbindings/latest/)
* This framework is made by the KDAB
* This framework provides Reactive programming & data binding in C++
  * Signals + Slots.
  * Properties templated on the contained type.
  * Property bindings allowing reactive code to be written without having to do all the low-level, error prone plumbing by hand.
  * Lazy evaluation of property bindings.
  * No more broken bindings.
  * Totally stand-alone "header-only" library. No heavy Qt dependency.
  * Can still be used with Qt if you so wish.

## Build Simple Bindings
```sh
rm -rf build && mkdir -p build && \
(cd build && cmake -DCMAKE_BUILD_TYPE=Debug .. && make clean all VERBOSE=1) && \
./build/kdbindings-simple-connection
```

# Links

* https://github.com/KDAB/KDBindings
* https://github.com/KDAB/KDBindings/tree/main/examples
* https://docs.kdab.com/kdbindings/latest/getting-started/