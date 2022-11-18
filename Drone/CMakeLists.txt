cmake_minimum_required(VERSION 3.5)

project(modio)

set (CMAKE_CXX_STANDARD 11)


file(GLOB TEST_SRC_FILES_ONE ${PROJECT_SOURCE_DIR}/src/Main.cpp ${PROJECT_SOURCE_DIR}/library/*.cpp ${PROJECT_SOURCE_DIR}/library/*.h)

add_executable(Uno ${TEST_SRC_FILES_ONE})

file(GLOB TEST_SRC_FILES_PPAL ${PROJECT_SOURCE_DIR}/src/Main.cpp ${PROJECT_SOURCE_DIR}/library/*.cpp ${PROJECT_SOURCE_DIR}/library/*.h)

add_executable(Principal ${TEST_SRC_FILES_PPAL})

message("Testing enabled")


file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/testUnit/Test.cpp ${PROJECT_SOURCE_DIR}/library/*.cpp)


#file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)

add_subdirectory(googletest)

enable_testing()

include_directories(${gtest_SOURCE_DIR}/include${gtest_SOURCE_DIR})

add_executable(runUnitTests ${TEST_SRC_FILES})

target_link_libraries(runUnitTests gtest gtest_main)

add_test(UnitTests runUnitTests)
