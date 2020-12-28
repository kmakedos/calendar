cmake_minimum_required(VERSION 3.17)
set(CMAKE_CXX_STANDARD 14)
project(Calendar)

set (Boost_USE_STATIC_LIBS OFF)
find_package (Boost REQUIRED COMPONENTS unit_test_framework system filesystem date_time)
include_directories (${Boost_INCLUDE_DIRS})

include_directories(.)
add_executable(Calendar main.cpp Calendar.cpp)
target_link_libraries(Calendar ${Boost_LIBRARIES})
add_subdirectory(test)