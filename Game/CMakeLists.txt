cmake_minimum_required(VERSION 3.16)
project(Game)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXE_LINKER_FLAGS "-static -static-libgcc")

add_executable(Game WIN32 "Source Files/First_game.cpp")



set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/SFML/lib/cmake/SFML)

find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(C:/SFML/include)

target_link_libraries(Game sfml-system sfml-window sfml-graphics sfml-audio sfml-network)