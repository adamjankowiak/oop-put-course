cmake_minimum_required(VERSION 3.24)
project(oop_Project)

set(CMAKE_CXX_STANDARD 23)

add_executable(oop_Project src/main.cpp include/Product/Products.h include/ShoppingCart/Cart.h src/ShoppingCart/Cart.cpp include/Fake/Fake.h src/Fake/Fake.cpp src/Fake/Fakemain.cpp)
