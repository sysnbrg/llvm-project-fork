add_mlir_unittest(MLIRIRTests
  AttributeTest.cpp
  DialectTest.cpp
  InterfaceTest.cpp
  InterfaceAttachmentTest.cpp
  OperationSupportTest.cpp
  PatternMatchTest.cpp
  ShapedTypeTest.cpp
  SubElementInterfaceTest.cpp

  DEPENDS
  MLIRTestInterfaceIncGen
)
target_include_directories(MLIRIRTests PRIVATE "${MLIR_BINARY_DIR}/test/lib/Dialect/Test")
target_link_libraries(MLIRIRTests
  PRIVATE
  MLIRIR
  MLIRTestDialect)
