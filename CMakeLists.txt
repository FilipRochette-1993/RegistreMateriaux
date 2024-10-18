cmake_minimum_required(VERSION 3.22)
project(MonProjet)

set(CMAKE_CXX_STANDARD 14)

add_executable(MonProjet main.cpp ContratException.cpp)

include(FetchContent)
FetchContent_Declare(
            googletest
            GIT_REPOSITORY https://github.com/google/googletest.git
            GIT_TAG v1.12.0
)
FetchContent_MakeAvailable(googletest)
enable_testing()
add_subdirectory(tests)