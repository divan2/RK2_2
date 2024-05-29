# CMake generated Testfile for 
# Source directory: /home/divan/divan2/RK2
# Build directory: /home/divan/divan2/RK2/_build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(check "/home/divan/divan2/RK2/_build/check")
set_tests_properties(check PROPERTIES  _BACKTRACE_TRIPLES "/home/divan/divan2/RK2/CMakeLists.txt;20;add_test;/home/divan/divan2/RK2/CMakeLists.txt;0;")
subdirs("third-party/gtest")
