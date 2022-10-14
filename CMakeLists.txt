cmake_minimum_required(VERSION 3.23)
project(DataStructuresInCpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(DataStructuresInCpp main.cpp simplearray/simplearray.cpp simplearray/simplearray.h linkedlist/linkedlist.cpp linkedlist/linkedlist.h stackcollection/stackcollection.h stackcollection/stackcollection.cpp queuecollection/queuecollection.h queuecollection/queuecollection.cpp mapcollection/mapcollection.cpp mapcollection/mapcollection.h doublylinkedlist/doublylinkedlist.h doublylinkedlist/doublylinkedlist.cpp)
