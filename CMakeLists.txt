cmake_minimum_required(VERSION 3.12.4)

project(coursera)

set(CMAKE_CXX_STANDARD 20)
set(CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(COURSERA_TEST STREQUAL ON)
  add_compile_definitions(_TEST)
endif()

file(GLOB_RECURSE source_files *.cc)

add_executable(solution ${source_files})
