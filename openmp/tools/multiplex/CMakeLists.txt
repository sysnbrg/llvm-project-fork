if(LIBOMP_OMPT_SUPPORT)
  include_directories(${LIBOMP_INCLUDE_DIR})

  add_library(ompt-multiplex INTERFACE)
  target_include_directories(ompt-multiplex INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

  install(FILES ompt-multiplex.h DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}")

  add_subdirectory(tests)
endif()
