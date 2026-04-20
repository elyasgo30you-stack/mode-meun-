cmake_minimum_required(VERSION 3.24)

project(Modmeun)

find_package(Geode CONFIG REQUIRED)

add_geode_mod(
    elyas.mod_menu
    RESOURCES
    mod.json
)

target_sources(elyas.mod_menu PRIVATE main.cpp)

