#------------------------------------------------------------------------------
#
#  Copyright (C) 2010-2012 Artem Rodygin
#
#  This file is part of EncMQ.
#
#  EncMQ is free software: you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation, either version 3 of the License, or
#  (at your option) any later version.
#
#  EncMQ is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#
#  You should have received a copy of the GNU General Public License
#  along with EncMQ.  If not, see <http://www.gnu.org/licenses/>.
#
#------------------------------------------------------------------------------

project(test)
cmake_minimum_required(VERSION 2.6)

set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_LIBS   ON)

find_package(Boost 1.29.0 QUIET COMPONENTS date_time thread)

if (NOT Boost_FOUND)
message(STATUS "Target '${PROJECT_NAME}' will not be configured, because Boost libraries are not found")
message("---------------------------------------------")
return()
endif (NOT Boost_FOUND)

find_package(OpenSSL QUIET REQUIRED)

aux_source_directory(src ${PROJECT_NAME}_SRC)
file(GLOB ${PROJECT_NAME}_HDR "hdr/*.h")

if (WIN32)
list(APPEND ${PROJECT_NAME}_SRC ${OPENSSL_INCLUDE_DIR}/openssl/applink.c)
endif (WIN32)

include_directories(${Boost_INCLUDE_DIRS}
                    ${OPENSSL_INCLUDE_DIR}
                    ${PROJECT_SOURCE_DIR}/../vendor/protobuf/include
                    ${PROJECT_SOURCE_DIR}/../encmq/include
                    ${PROJECT_BINARY_DIR}/../include
                    hdr)

link_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY})

add_executable(${PROJECT_NAME} ${${PROJECT_NAME}_SRC} ${${PROJECT_NAME}_HDR})

add_dependencies(${PROJECT_NAME}
                 log4cplus
                 protobuf
                 encmq)

target_link_libraries(${PROJECT_NAME}
                      ${Boost_LIBRARIES}
                      log4cplus
                      protobuf
                      encmq)

if (MSVC)
add_definitions(-W3 -D_CRT_SECURE_NO_WARNINGS)
else (MSVC)
add_definitions(-Wall -Wextra -Wno-sign-compare -ansi)
endif (MSVC)

message(STATUS "Target '${PROJECT_NAME}' is configured")
message("---------------------------------------------")
