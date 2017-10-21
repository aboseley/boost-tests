cmake_minimum_required (VERSION 3.5)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_BUILD_TYPE Debug)

set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_STATIC_RUNTIME ON)

find_package(Boost REQUIRED COMPONENTS log_setup log program_options system )
find_package (Threads)

include_directories(${Boost_INCLUDE_DIRS})

add_executable(go main.cpp module1.cpp )
target_link_libraries(go ${Boost_LIBRARIES} Threads::Threads)

