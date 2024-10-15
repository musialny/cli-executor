cmake_minimum_required(VERSION 3.29)
project(cli-preprocessor-tests LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

find_package(GTest CONFIG REQUIRED)

add_executable(cli-preprocessor-tests)
target_sources(cli-preprocessor-tests
        PRIVATE
            CliCommandExecutorTests.cpp
)
target_link_libraries(cli-preprocessor-tests
        PRIVATE
            GTest::gtest_main
            GTest::gmock
            cli-preprocessor
)

include(GoogleTest)
gtest_discover_tests(cli-preprocessor-tests)
