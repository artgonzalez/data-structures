add_executable(ch_01_tests "01_data_abstraction_tests.cpp")
target_link_libraries(ch_01_tests ch_01_05_library)
add_test(NAME ch_01_tests COMMAND ch_01_tests -s)