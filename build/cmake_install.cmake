# Install script for directory: D:/a/llvm-project-fork/llvm-project-fork/llvm

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/LLVM")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xllvm-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES
    "D:/a/llvm-project-fork/llvm-project-fork/llvm/include/llvm"
    "D:/a/llvm-project-fork/llvm-project-fork/llvm/include/llvm-c"
    FILES_MATCHING REGEX "/[^/]*\\.def$" REGEX "/[^/]*\\.h$" REGEX "/[^/]*\\.td$" REGEX "/[^/]*\\.inc$" REGEX "/license\\.txt$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xllvm-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES
    "D:/a/llvm-project-fork/llvm-project-fork/build/include/llvm"
    "D:/a/llvm-project-fork/llvm-project-fork/build/include/llvm-c"
    FILES_MATCHING REGEX "/[^/]*\\.def$" REGEX "/[^/]*\\.h$" REGEX "/[^/]*\\.gen$" REGEX "/[^/]*\\.inc$" REGEX "/cmakefiles$" EXCLUDE REGEX "/config\\.h$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcmake-exportsx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/llvm" TYPE FILE FILES "D:/a/llvm-project-fork/llvm-project-fork/build/lib/cmake/llvm/LLVMConfigExtensions.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("D:/a/llvm-project-fork/llvm-project-fork/build/lib/Demangle/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/lib/Support/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/lib/TableGen/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/utils/TableGen/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/include/llvm/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/lib/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/utils/FileCheck/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/utils/PerfectShuffle/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/utils/count/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/utils/not/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/utils/UnicodeData/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/utils/yaml-bench/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/utils/LLVMVisualizers/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/projects/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/tools/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/runtimes/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/examples/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/utils/lit/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/test/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/unittests/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/utils/unittest/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/utils/KillTheDoctor/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/docs/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/cmake/modules/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/utils/llvm-lit/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/third-party/benchmark/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/benchmarks/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/utils/llvm-locstats/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "D:/a/llvm-project-fork/llvm-project-fork/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
