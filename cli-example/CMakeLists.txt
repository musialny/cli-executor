cmake_minimum_required(VERSION 3.29)
project(cli-example CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${VCS_OUTPUT_DIRECTORY_BASE}/cli-example/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${VCS_OUTPUT_DIRECTORY_BASE}/cli-example/shared)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${VCS_OUTPUT_DIRECTORY_BASE}/cli-example/bin)

add_definitions(-DCLI_EXECUTOR_VERSION="${CMAKE_PROJECT_VERSION}")

add_executable(cli-example)
target_sources(cli-example
        PRIVATE
            src/main.cpp
        PRIVATE FILE_SET CXX_MODULES FILES
            src/commands/Version.cppm
            src/commands/Commands.cppm
)
target_link_libraries(cli-example
        PRIVATE
            cli-preprocessor
)

