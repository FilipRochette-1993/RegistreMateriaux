add_executable(mesTests ClasseTesteur.cpp ${PROJECT_SOURCE_DIR}/ContratException.cpp)
target_include_directories(mesTests PRIVATE ${PROJECT_SOURCE_DIR})

if (WIN32)
        target_link_libraries(
                mesTests
                gtest
                gtest_main
                #pthread
        )
else()
        target_link_libraries(
                mesTests
                gtest
                gtest_main
                pthread
        )
endif()

include(GoogleTest)
gtest_discover_tests(mesTests)
