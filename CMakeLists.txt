# Copyright (c) 2024 Klemens D. Morgenstern
#
# Distributed under the Boost Software License, Version 1.0. (See accompanying
# file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

# 3.29 for module support

cmake_minimum_required(VERSION 3.29)

if(BOOST_SUPERPROJECT_VERSION)
    set(BOOST_MODULE_VERSION ${BOOST_SUPERPROJECT_VERSION})
endif()

project(boost_module VERSION "${BOOST_MODULE_VERSION}" LANGUAGES CXX)

if(NOT cxx_std_20 IN_LIST CMAKE_CXX_COMPILE_FEATURES)
    message(STATUS "Boost.module: not building, compiler doesn't support C++20.")
    return()
endif()

function(boost_module_define NAME)
    add_library(boost_module_${NAME})

    file(GLOB SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/src/${NAME}/*.cpp)
    target_sources(boost_module_${NAME} PUBLIC FILE_SET CXX_MODULES FILES ${SRC_FILES})
    target_link_libraries(boost_module_${NAME} PUBLIC Boost::${NAME})

    add_library(Boost::module::${NAME} ALIAS boost_module_${NAME})
endfunction()

boost_module_define(asio)
boost_module_define(beast)
boost_module_define(json)
boost_module_define(url)
boost_module_define(static_string)
boost_module_define(system)


add_library(boost_module)

target_sources(boost_module PUBLIC FILE_SET CXX_MODULES FILES src/module.cpp)
target_link_libraries(boost_module PUBLIC
        Boost::module::asio
        Boost::module::beast
        Boost::module::json
        Boost::module::static_string
        Boost::module::system
        Boost::module::url)

add_library(Boost::module ALIAS boost_module)

add_subdirectory(test)
