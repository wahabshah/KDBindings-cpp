cmake_minimum_required(VERSION 3.7.2)

project(kdbindings-project)

set(CMAKE_CXX_STANDARD 17)

find_package(KDBindings)
add_executable(kdbindings-simple-connection kdbindings-simple-connection.cpp)
target_link_libraries(kdbindings-simple-connection KDAB::KDBindings)