# CMake generated Testfile for 
# Source directory: C:/Users/mateo/OneDrive/Documentos/mateo/ANALISTA DE SISTEMAS/SISTEMAS-2do/AYEDII/repositorios/tps_ayed/Drone
# Build directory: C:/Users/mateo/OneDrive/Documentos/mateo/ANALISTA DE SISTEMAS/SISTEMAS-2do/AYEDII/repositorios/tps_ayed/Drone/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(UnitTests "runUnitTests")
set_tests_properties(UnitTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/mateo/OneDrive/Documentos/mateo/ANALISTA DE SISTEMAS/SISTEMAS-2do/AYEDII/repositorios/tps_ayed/Drone/CMakeLists.txt;34;add_test;C:/Users/mateo/OneDrive/Documentos/mateo/ANALISTA DE SISTEMAS/SISTEMAS-2do/AYEDII/repositorios/tps_ayed/Drone/CMakeLists.txt;0;")
subdirs("googletest")
