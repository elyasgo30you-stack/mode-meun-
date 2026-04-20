cmake_minimum_required(VERSION 3.13)

project(Modmeun)

include(FetchContent)

FetchContent_Declare(
    Geode
    GIT_REPOSITORY https://github.com/geode-sdk/geode
    GIT_TAG v3.3.0
)

FetchContent_MakeAvailable(Geode)

add_geode_mod(
    elyas.mod_menu
    v1.0.0
    main.cpp
)

