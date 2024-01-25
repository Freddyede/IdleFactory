cmake_minimum_required(VERSION 3.27)
project(Game)

set(CMAKE_CXX_STANDARD 17)
set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR "C:/Users/Patouillard/CLionProjects/Game/")
find_package(SFML 2.5.1 COMPONENTS graphics audio REQUIRED)
add_executable(Game main.cpp)
target_link_libraries(Game sfml-graphics sfml-audio)