add_executable(ch_02_tests "02_recursion_tests.cpp")
target_link_libraries(ch_02_tests ch_02_02_library ch_02_03_library ch_02_04_library
                                  ch_02_05_library ch_02_06_library)
add_test(NAME ch_02_tests COMMAND ch_02_tests -s)