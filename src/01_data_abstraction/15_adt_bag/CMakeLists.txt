add_library(ch_01_05_library "bag_interface.cpp" "bag_interface.h" "bag.h" "bag.cpp")
add_executable(ch_01_05_exe "main.cpp" "bag_interface.cpp" "bag.cpp")
