# CMake generated Testfile for 
# Source directory: C:/Users/pilzm/CPPProjects/RayGame3/build/_deps/raylib-src/src
# Build directory: C:/Users/pilzm/CPPProjects/RayGame3/build/_deps/raylib-build/src
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(pkg-config--static "C:/Users/pilzm/CPPProjects/RayGame3/build/_deps/raylib-src/src/../cmake/test-pkgconfig.sh" "--static")
set_tests_properties(pkg-config--static PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/pilzm/CPPProjects/RayGame3/build/_deps/raylib-src/src/CMakeLists.txt;212;add_test;C:/Users/pilzm/CPPProjects/RayGame3/build/_deps/raylib-src/src/CMakeLists.txt;0;")
subdirs("external/glfw")
