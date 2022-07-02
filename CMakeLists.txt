cmake_minimum_required(VERSION 3.10) 
include(FetchContent)

project(SmollGameProject)

FetchContent_Declare(
  sfml
  GIT_REPOSITORY "https://github.com/SFML/SFML.git"
  GIT_TAG        "${SFML_VERSION}"
)
FetchContent_GetProperties(sfml)
if(NOT sfml_POPULATED)
    FetchContent_Populate(sfml)
    add_subdirectory(${sfml_SOURCE_DIR} ${sfml_BINARY_DIR})
endif()
add_executable(SmollGameProject main.cpp)
target_link_libraries(SmollGameProject
    PRIVATE
        sfml-audio
        sfml-graphics
        sfml-system
        sfml-window
)

target_compile_options(SmollGameProject PRIVATE -Wall)

