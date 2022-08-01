# Install script for directory: D:/a/llvm-project-fork/llvm-project-fork/llvm/lib/Target

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xLLVMTargetx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "D:/a/llvm-project-fork/llvm-project-fork/build/Debug/lib/LLVMTarget.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "D:/a/llvm-project-fork/llvm-project-fork/build/Release/lib/LLVMTarget.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "D:/a/llvm-project-fork/llvm-project-fork/build/MinSizeRel/lib/LLVMTarget.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "D:/a/llvm-project-fork/llvm-project-fork/build/RelWithDebInfo/lib/LLVMTarget.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("D:/a/llvm-project-fork/llvm-project-fork/build/lib/Target/AArch64/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/lib/Target/AMDGPU/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/lib/Target/ARM/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/lib/Target/AVR/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/lib/Target/BPF/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/lib/Target/Hexagon/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/lib/Target/Lanai/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/lib/Target/Mips/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/lib/Target/MSP430/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/lib/Target/NVPTX/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/lib/Target/PowerPC/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/lib/Target/RISCV/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/lib/Target/Sparc/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/lib/Target/SystemZ/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/lib/Target/VE/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/lib/Target/WebAssembly/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/lib/Target/X86/cmake_install.cmake")
  include("D:/a/llvm-project-fork/llvm-project-fork/build/lib/Target/XCore/cmake_install.cmake")

endif()

