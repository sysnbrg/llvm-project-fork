set(LLVM_LINK_COMPONENTS Core Demangle Object Remarks Support)

add_llvm_tool(llvm-remark-size-diff
  RemarkSizeDiff.cpp
)
