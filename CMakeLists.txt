cmake_minimum_required(VERSION 3.29)
project(cli-executor VERSION 1.0.0)

set(VCS_OUTPUT_DIRECTORY_BASE ${PROJECT_SOURCE_DIR}/artefacts/${CMAKE_BUILD_TYPE}-${CMAKE_HOST_SYSTEM_NAME})

add_subdirectory(cli-preprocessor)
