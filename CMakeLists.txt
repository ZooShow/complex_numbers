cmake_minimum_required(VERSION 3.15)
project(Complex_numbers)

add_executable(Complex_numbers main.cpp lib.cpp lib.h tests.cpp)


enable_testing()

add_definitions(-std=gnu++17 -U__STRICT_ANSI__)

set(LINKER_FLAGS1 -lcygwin)
set(LINKER_FLAGS2 -lSDL2main)
set(LINKER_FLAGS3 -lSDL2)
set(LINKER_FLAGS4 -mwindows)

add_subdirectory(googletest)

include_directories(googletest/googletest/include)

set(SOURCE_FILES lib.cpp)

add_executable(main main.cpp ${SOURCE_FILES})
add_executable(tests tests.cpp ${SOURCE_FILES})

target_link_libraries(tests gtest)


set(CMAKE_CXX_STANDARD 20)

