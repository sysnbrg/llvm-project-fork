/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the Lanai target                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// If GET_DAGISEL_DECL is #defined with any value, only function
// declarations will be included when this file is included.
// If GET_DAGISEL_BODY is #defined, its value should be the name of
// the instruction selector class. Function bodies will be emitted
// and each function's name will be qualified with the name of the
// class.
//
// When neither of the GET_DAGISEL* macros is defined, the functions
// are emitted inline.

#if defined(GET_DAGISEL_DECL) && defined(GET_DAGISEL_BODY)
#error GET_DAGISEL_DECL and GET_DAGISEL_BODY cannot be both defined, undef both for inline definitions
#endif

#ifdef GET_DAGISEL_BODY
#define LOCAL_DAGISEL_STRINGIZE(X) LOCAL_DAGISEL_STRINGIZE_(X)
#define LOCAL_DAGISEL_STRINGIZE_(X) #X
static_assert(sizeof(LOCAL_DAGISEL_STRINGIZE(GET_DAGISEL_BODY)) > 1,
   "GET_DAGISEL_BODY is empty: it should be defined with the class name");
#undef LOCAL_DAGISEL_STRINGIZE_
#undef LOCAL_DAGISEL_STRINGIZE
#endif

#if !defined(GET_DAGISEL_DECL) && !defined(GET_DAGISEL_BODY)
#define DAGISEL_INLINE 1
#else
#define DAGISEL_INLINE 0
#endif

#if !DAGISEL_INLINE
#define DAGISEL_CLASS_COLONCOLON GET_DAGISEL_BODY ::
#else
#define DAGISEL_CLASS_COLONCOLON
#endif

#ifdef GET_DAGISEL_DECL
void SelectCode(SDNode *N);
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
void DAGISEL_CLASS_COLONCOLON SelectCode(SDNode *N)
{
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
 OPC_SwitchOpcode , 1|128,2, TARGET_VAL(ISD::LOAD),
  OPC_RecordMemRef,
  OPC_RecordNode,
  OPC_RecordChild1,
  OPC_CheckChild1Type, MVT::i32,
  OPC_CheckPredicate, 0,
  OPC_CheckType, MVT::i32,
  OPC_Scope, 32, 
   OPC_CheckPredicate, 1,
   OPC_Scope, 13, 
    OPC_CheckComplexPat, /*CP*/0, /*#*/1,
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDW_RI), 0|OPFL_Chain|OPFL_MemRefs,
                  MVT::i32, 3, 2, 3, 4, 
   13, 
    OPC_CheckComplexPat, /*CP*/1, /*#*/1,
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDW_RR), 0|OPFL_Chain|OPFL_MemRefs,
                  MVT::i32, 3, 2, 3, 4, 
   0, 
  52, 
   OPC_CheckPredicate, 2,
   OPC_Scope, 15, 
    OPC_CheckPredicate, 3,
    OPC_CheckComplexPat, /*CP*/1, /*#*/1,
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDWz_RR), 0|OPFL_Chain|OPFL_MemRefs,
                  MVT::i32, 3, 2, 3, 4, 
   15, 
    OPC_CheckPredicate, 4,
    OPC_CheckComplexPat, /*CP*/1, /*#*/1,
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHz_RR), 0|OPFL_Chain|OPFL_MemRefs,
                  MVT::i32, 3, 2, 3, 4, 
   15, 
    OPC_CheckPredicate, 5,
    OPC_CheckComplexPat, /*CP*/1, /*#*/1,
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBz_RR), 0|OPFL_Chain|OPFL_MemRefs,
                  MVT::i32, 3, 2, 3, 4, 
   0, 
  36, 
   OPC_CheckPredicate, 6,
   OPC_Scope, 15, 
    OPC_CheckPredicate, 4,
    OPC_CheckComplexPat, /*CP*/1, /*#*/1,
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHs_RR), 0|OPFL_Chain|OPFL_MemRefs,
                  MVT::i32, 3, 2, 3, 4, 
   15, 
    OPC_CheckPredicate, 5,
    OPC_CheckComplexPat, /*CP*/1, /*#*/1,
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBs_RR), 0|OPFL_Chain|OPFL_MemRefs,
                  MVT::i32, 3, 2, 3, 4, 
   0, 
  17, 
   OPC_CheckPredicate, 2,
   OPC_CheckPredicate, 4,
   OPC_CheckComplexPat, /*CP*/2, /*#*/1,
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHz_RI), 0|OPFL_Chain|OPFL_MemRefs,
                 MVT::i32, 3, 2, 3, 4, 
  17, 
   OPC_CheckPredicate, 6,
   OPC_CheckPredicate, 4,
   OPC_CheckComplexPat, /*CP*/2, /*#*/1,
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHs_RI), 0|OPFL_Chain|OPFL_MemRefs,
                 MVT::i32, 3, 2, 3, 4, 
  17, 
   OPC_CheckPredicate, 2,
   OPC_CheckPredicate, 5,
   OPC_CheckComplexPat, /*CP*/2, /*#*/1,
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBz_RI), 0|OPFL_Chain|OPFL_MemRefs,
                 MVT::i32, 3, 2, 3, 4, 
  17, 
   OPC_CheckPredicate, 6,
   OPC_CheckPredicate, 5,
   OPC_CheckComplexPat, /*CP*/2, /*#*/1,
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBs_RI), 0|OPFL_Chain|OPFL_MemRefs,
                 MVT::i32, 3, 2, 3, 4, 
  36, 
   OPC_CheckPredicate, 7,
   OPC_Scope, 15, 
    OPC_CheckPredicate, 5,
    OPC_CheckComplexPat, /*CP*/2, /*#*/1,
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBz_RI), 0|OPFL_Chain|OPFL_MemRefs,
                  MVT::i32, 3, 2, 3, 4, 
   15, 
    OPC_CheckPredicate, 4,
    OPC_CheckComplexPat, /*CP*/2, /*#*/1,
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHz_RI), 0|OPFL_Chain|OPFL_MemRefs,
                  MVT::i32, 3, 2, 3, 4, 
   0, 
  13, 
   OPC_CheckPredicate, 1,
   OPC_CheckComplexPat, /*CP*/3, /*#*/1,
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDADDR), 0|OPFL_Chain|OPFL_MemRefs,
                 MVT::i32, 1, 2, 
  0, 
 0|128,1, TARGET_VAL(ISD::STORE),
  OPC_RecordMemRef,
  OPC_RecordNode,
  OPC_RecordChild1,
  OPC_CheckChild1Type, MVT::i32,
  OPC_RecordChild2,
  OPC_CheckChild2Type, MVT::i32,
  OPC_CheckPredicate, 8,
  OPC_Scope, 32, 
   OPC_CheckPredicate, 9,
   OPC_Scope, 13, 
    OPC_CheckComplexPat, /*CP*/1, /*#*/2,
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo0, TARGET_VAL(Lanai::SW_RR), 0|OPFL_Chain|OPFL_MemRefs,
                  4, 1, 3, 4, 5, 
   13, 
    OPC_CheckComplexPat, /*CP*/0, /*#*/2,
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo0, TARGET_VAL(Lanai::SW_RI), 0|OPFL_Chain|OPFL_MemRefs,
                  4, 1, 3, 4, 5, 
   0, 
  68, 
   OPC_CheckPredicate, 10,
   OPC_Scope, 15, 
    OPC_CheckPredicate, 11,
    OPC_CheckComplexPat, /*CP*/1, /*#*/2,
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo0, TARGET_VAL(Lanai::STH_RR), 0|OPFL_Chain|OPFL_MemRefs,
                  4, 1, 3, 4, 5, 
   15, 
    OPC_CheckPredicate, 12,
    OPC_CheckComplexPat, /*CP*/1, /*#*/2,
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo0, TARGET_VAL(Lanai::STB_RR), 0|OPFL_Chain|OPFL_MemRefs,
                  4, 1, 3, 4, 5, 
   15, 
    OPC_CheckPredicate, 11,
    OPC_CheckComplexPat, /*CP*/2, /*#*/2,
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo0, TARGET_VAL(Lanai::STH_RI), 0|OPFL_Chain|OPFL_MemRefs,
                  4, 1, 3, 4, 5, 
   15, 
    OPC_CheckPredicate, 12,
    OPC_CheckComplexPat, /*CP*/2, /*#*/2,
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo0, TARGET_VAL(Lanai::STB_RI), 0|OPFL_Chain|OPFL_MemRefs,
                  4, 1, 3, 4, 5, 
   0, 
  13, 
   OPC_CheckPredicate, 9,
   OPC_CheckComplexPat, /*CP*/3, /*#*/2,
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo0, TARGET_VAL(Lanai::STADDR), 0|OPFL_Chain|OPFL_MemRefs,
                 2, 1, 3, 
  0, 
 20, TARGET_VAL(ISD::ATOMIC_LOAD),
  OPC_RecordMemRef,
  OPC_RecordNode,
  OPC_RecordChild1,
  OPC_CheckChild1Type, MVT::i32,
  OPC_CheckPredicate, 5,
  OPC_CheckComplexPat, /*CP*/2, /*#*/1,
  OPC_EmitMergeInputChains1_0,
  OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBz_RI), 0|OPFL_Chain|OPFL_MemRefs,
                MVT::i32, 3, 2, 3, 4, 
 22, TARGET_VAL(ISD::CALLSEQ_START),
  OPC_RecordNode,
  OPC_RecordChild1,
  OPC_MoveChild1,
  OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
  OPC_MoveParent,
  OPC_RecordChild2,
  OPC_MoveChild2,
  OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
  OPC_MoveParent,
  OPC_EmitMergeInputChains1_0,
  OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                MVT::i32, 2, 1, 2, 
 23, TARGET_VAL(ISD::CALLSEQ_END),
  OPC_RecordNode,
  OPC_CaptureGlueInput,
  OPC_RecordChild1,
  OPC_MoveChild1,
  OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
  OPC_MoveParent,
  OPC_RecordChild2,
  OPC_MoveChild2,
  OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
  OPC_MoveParent,
  OPC_EmitMergeInputChains1_0,
  OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                MVT::i32, 2, 1, 2, 
 124|128,2, TARGET_VAL(ISD::OR),
  OPC_Scope, 50|128,1, 
   OPC_RecordChild0,
   OPC_MoveChild1,
   OPC_SwitchOpcode , 79, TARGET_VAL(LanaiISD::LO),
    OPC_RecordChild0,
    OPC_MoveChild0,
    OPC_SwitchOpcode , 12, TARGET_VAL(ISD::TargetGlobalAddress),
     OPC_MoveParent,
     OPC_MoveParent,
     OPC_CheckType, MVT::i32,
     OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                   MVT::i32, 2, 0, 1, 
    12, TARGET_VAL(ISD::TargetExternalSymbol),
     OPC_MoveParent,
     OPC_MoveParent,
     OPC_CheckType, MVT::i32,
     OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                   MVT::i32, 2, 0, 1, 
    12, TARGET_VAL(ISD::TargetBlockAddress),
     OPC_MoveParent,
     OPC_MoveParent,
     OPC_CheckType, MVT::i32,
     OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                   MVT::i32, 2, 0, 1, 
    12, TARGET_VAL(ISD::TargetJumpTable),
     OPC_MoveParent,
     OPC_MoveParent,
     OPC_CheckType, MVT::i32,
     OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                   MVT::i32, 2, 0, 1, 
    12, TARGET_VAL(ISD::TargetConstantPool),
     OPC_MoveParent,
     OPC_MoveParent,
     OPC_CheckType, MVT::i32,
     OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                   MVT::i32, 2, 0, 1, 
    0,
   89, TARGET_VAL(LanaiISD::SMALL),
    OPC_RecordChild0,
    OPC_MoveChild0,
    OPC_SwitchOpcode , 14, TARGET_VAL(ISD::TargetGlobalAddress),
     OPC_MoveParent,
     OPC_MoveParent,
     OPC_CheckType, MVT::i32,
     OPC_EmitCopyToReg, 0, Lanai::R0,
     OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                   MVT::i32, 1, 1, 
    14, TARGET_VAL(ISD::TargetExternalSymbol),
     OPC_MoveParent,
     OPC_MoveParent,
     OPC_CheckType, MVT::i32,
     OPC_EmitCopyToReg, 0, Lanai::R0,
     OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                   MVT::i32, 1, 1, 
    14, TARGET_VAL(ISD::TargetBlockAddress),
     OPC_MoveParent,
     OPC_MoveParent,
     OPC_CheckType, MVT::i32,
     OPC_EmitCopyToReg, 0, Lanai::R0,
     OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                   MVT::i32, 1, 1, 
    14, TARGET_VAL(ISD::TargetJumpTable),
     OPC_MoveParent,
     OPC_MoveParent,
     OPC_CheckType, MVT::i32,
     OPC_EmitCopyToReg, 0, Lanai::R0,
     OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                   MVT::i32, 1, 1, 
    14, TARGET_VAL(ISD::TargetConstantPool),
     OPC_MoveParent,
     OPC_MoveParent,
     OPC_CheckType, MVT::i32,
     OPC_EmitCopyToReg, 0, Lanai::R0,
     OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                   MVT::i32, 1, 1, 
    0,
   0,
  88, 
   OPC_MoveChild0,
   OPC_CheckOpcode, TARGET_VAL(LanaiISD::LO),
   OPC_RecordChild0,
   OPC_MoveChild0,
   OPC_SwitchOpcode , 13, TARGET_VAL(ISD::TargetGlobalAddress),
    OPC_MoveParent,
    OPC_MoveParent,
    OPC_RecordChild1,
    OPC_CheckType, MVT::i32,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                  MVT::i32, 2, 1, 0, 
   13, TARGET_VAL(ISD::TargetExternalSymbol),
    OPC_MoveParent,
    OPC_MoveParent,
    OPC_RecordChild1,
    OPC_CheckType, MVT::i32,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                  MVT::i32, 2, 1, 0, 
   13, TARGET_VAL(ISD::TargetBlockAddress),
    OPC_MoveParent,
    OPC_MoveParent,
    OPC_RecordChild1,
    OPC_CheckType, MVT::i32,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                  MVT::i32, 2, 1, 0, 
   13, TARGET_VAL(ISD::TargetJumpTable),
    OPC_MoveParent,
    OPC_MoveParent,
    OPC_RecordChild1,
    OPC_CheckType, MVT::i32,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                  MVT::i32, 2, 1, 0, 
   13, TARGET_VAL(ISD::TargetConstantPool),
    OPC_MoveParent,
    OPC_MoveParent,
    OPC_RecordChild1,
    OPC_CheckType, MVT::i32,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                  MVT::i32, 2, 1, 0, 
   0,
  108, 
   OPC_RecordChild0,
   OPC_RecordChild1,
   OPC_Scope, 76, 
    OPC_MoveChild1,
    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
    OPC_Scope, 16, 
     OPC_CheckPredicate, 13,
     OPC_MoveParent,
     OPC_EmitConvertToTarget, 1,
     OPC_EmitNodeXForm, 0, 2,
     OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                   MVT::i32, 2, 0, 3, 
    16, 
     OPC_CheckPredicate, 14,
     OPC_MoveParent,
     OPC_EmitConvertToTarget, 1,
     OPC_EmitNodeXForm, 1, 2,
     OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_HI), 0,
                   MVT::i32, 2, 0, 3, 
    17, 
     OPC_CheckPredicate, 13,
     OPC_MoveParent,
     OPC_EmitConvertToTarget, 1,
     OPC_EmitNodeXForm, 0, 2,
     OPC_MorphNodeTo2, TARGET_VAL(Lanai::OR_F_I_LO), 0,
                   MVT::i32, MVT::i32, 2, 0, 3, 
    17, 
     OPC_CheckPredicate, 14,
     OPC_MoveParent,
     OPC_EmitConvertToTarget, 1,
     OPC_EmitNodeXForm, 1, 2,
     OPC_MorphNodeTo2, TARGET_VAL(Lanai::OR_F_I_HI), 0,
                   MVT::i32, MVT::i32, 2, 0, 3, 
    0, 
   26, 
    OPC_EmitInteger, MVT::i32, 0, 
    OPC_Scope, 9, 
     OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_R), 0,
                   MVT::i32, 3, 0, 1, 2, 
    10, 
     OPC_MorphNodeTo2, TARGET_VAL(Lanai::OR_F_R), 0,
                   MVT::i32, MVT::i32, 3, 0, 1, 2, 
    0, 
   0, 
  0, 
 108, TARGET_VAL(ISD::AND),
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_Scope, 76, 
   OPC_MoveChild1,
   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
   OPC_Scope, 16, 
    OPC_CheckPredicate, 15,
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 0, 2,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_I_LO), 0,
                  MVT::i32, 2, 0, 3, 
   16, 
    OPC_CheckPredicate, 16,
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 1, 2,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_I_HI), 0,
                  MVT::i32, 2, 0, 3, 
   17, 
    OPC_CheckPredicate, 15,
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 0, 2,
    OPC_MorphNodeTo2, TARGET_VAL(Lanai::AND_F_I_LO), 0,
                  MVT::i32, MVT::i32, 2, 0, 3, 
   17, 
    OPC_CheckPredicate, 16,
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 1, 2,
    OPC_MorphNodeTo2, TARGET_VAL(Lanai::AND_F_I_HI), 0,
                  MVT::i32, MVT::i32, 2, 0, 3, 
   0, 
  26, 
   OPC_EmitInteger, MVT::i32, 0, 
   OPC_Scope, 9, 
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_R), 0,
                  MVT::i32, 3, 0, 1, 2, 
   10, 
    OPC_MorphNodeTo2, TARGET_VAL(Lanai::AND_F_R), 0,
                  MVT::i32, MVT::i32, 3, 0, 1, 2, 
   0, 
  0, 
 108, TARGET_VAL(ISD::XOR),
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_Scope, 76, 
   OPC_MoveChild1,
   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
   OPC_Scope, 16, 
    OPC_CheckPredicate, 13,
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 0, 2,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::XOR_I_LO), 0,
                  MVT::i32, 2, 0, 3, 
   16, 
    OPC_CheckPredicate, 14,
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 1, 2,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::XOR_I_HI), 0,
                  MVT::i32, 2, 0, 3, 
   17, 
    OPC_CheckPredicate, 13,
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 0, 2,
    OPC_MorphNodeTo2, TARGET_VAL(Lanai::XOR_F_I_LO), 0,
                  MVT::i32, MVT::i32, 2, 0, 3, 
   17, 
    OPC_CheckPredicate, 14,
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 1, 2,
    OPC_MorphNodeTo2, TARGET_VAL(Lanai::XOR_F_I_HI), 0,
                  MVT::i32, MVT::i32, 2, 0, 3, 
   0, 
  26, 
   OPC_EmitInteger, MVT::i32, 0, 
   OPC_Scope, 9, 
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::XOR_R), 0,
                  MVT::i32, 3, 0, 1, 2, 
   10, 
    OPC_MorphNodeTo2, TARGET_VAL(Lanai::XOR_F_R), 0,
                  MVT::i32, MVT::i32, 3, 0, 1, 2, 
   0, 
  0, 
 73, TARGET_VAL(ISD::ADD),
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_Scope, 55, 
   OPC_MoveChild1,
   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
   OPC_Scope, 16, 
    OPC_CheckPredicate, 13,
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 0, 2,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADD_I_LO), 0,
                  MVT::i32, 2, 0, 3, 
   16, 
    OPC_CheckPredicate, 14,
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 1, 2,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADD_I_HI), 0,
                  MVT::i32, 2, 0, 3, 
   14, 
    OPC_CheckPredicate, 17,
    OPC_MoveParent,
    OPC_EmitNodeXForm, 2, 1,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUB_I_LO), 0,
                  MVT::i32, 2, 0, 2, 
   0, 
  12, 
   OPC_EmitInteger, MVT::i32, 0, 
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADD_R), 0,
                 MVT::i32, 3, 0, 1, 2, 
  0, 
 73, TARGET_VAL(ISD::SUB),
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_Scope, 55, 
   OPC_MoveChild1,
   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
   OPC_Scope, 16, 
    OPC_CheckPredicate, 13,
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 0, 2,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUB_I_LO), 0,
                  MVT::i32, 2, 0, 3, 
   16, 
    OPC_CheckPredicate, 14,
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 1, 2,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUB_I_HI), 0,
                  MVT::i32, 2, 0, 3, 
   14, 
    OPC_CheckPredicate, 17,
    OPC_MoveParent,
    OPC_EmitNodeXForm, 2, 1,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADD_I_LO), 0,
                  MVT::i32, 2, 0, 2, 
   0, 
  12, 
   OPC_EmitInteger, MVT::i32, 0, 
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUB_R), 0,
                 MVT::i32, 3, 0, 1, 2, 
  0, 
 61, TARGET_VAL(ISD::ADDC),
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_Scope, 42, 
   OPC_MoveChild1,
   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
   OPC_Scope, 17, 
    OPC_CheckPredicate, 13,
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 0, 2,
    OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADD_F_I_LO), 0|OPFL_GlueOutput,
                  MVT::i32, MVT::i32, 2, 0, 3, 
   17, 
    OPC_CheckPredicate, 14,
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 1, 2,
    OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADD_F_I_HI), 0|OPFL_GlueOutput,
                  MVT::i32, MVT::i32, 2, 0, 3, 
   0, 
  13, 
   OPC_EmitInteger, MVT::i32, 0, 
   OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADD_F_R), 0|OPFL_GlueOutput,
                 MVT::i32, MVT::i32, 3, 0, 1, 2, 
  0, 
 61, TARGET_VAL(ISD::SUBC),
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_Scope, 42, 
   OPC_MoveChild1,
   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
   OPC_Scope, 17, 
    OPC_CheckPredicate, 13,
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 0, 2,
    OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUB_F_I_LO), 0|OPFL_GlueOutput,
                  MVT::i32, MVT::i32, 2, 0, 3, 
   17, 
    OPC_CheckPredicate, 14,
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 1, 2,
    OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUB_F_I_HI), 0|OPFL_GlueOutput,
                  MVT::i32, MVT::i32, 2, 0, 3, 
   0, 
  13, 
   OPC_EmitInteger, MVT::i32, 0, 
   OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUB_F_R), 0|OPFL_GlueOutput,
                 MVT::i32, MVT::i32, 3, 0, 1, 2, 
  0, 
 73, TARGET_VAL(ISD::ADDE),
  OPC_CaptureGlueInput,
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_Scope, 40, 
   OPC_MoveChild1,
   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
   OPC_Scope, 16, 
    OPC_CheckPredicate, 13,
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 0, 2,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADDC_I_LO), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  MVT::i32, 2, 0, 3, 
   16, 
    OPC_CheckPredicate, 14,
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 1, 2,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADDC_I_HI), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  MVT::i32, 2, 0, 3, 
   0, 
  26, 
   OPC_EmitInteger, MVT::i32, 0, 
   OPC_Scope, 9, 
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADDC_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  MVT::i32, 3, 0, 1, 2, 
   10, 
    OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADDC_F_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  MVT::i32, MVT::i32, 3, 0, 1, 2, 
   0, 
  0, 
 73, TARGET_VAL(ISD::SUBE),
  OPC_CaptureGlueInput,
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_Scope, 40, 
   OPC_MoveChild1,
   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
   OPC_Scope, 16, 
    OPC_CheckPredicate, 13,
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 0, 2,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUBB_I_LO), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  MVT::i32, 2, 0, 3, 
   16, 
    OPC_CheckPredicate, 14,
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 1, 2,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUBB_I_HI), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  MVT::i32, 2, 0, 3, 
   0, 
  26, 
   OPC_EmitInteger, MVT::i32, 0, 
   OPC_Scope, 9, 
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUBB_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  MVT::i32, 3, 0, 1, 2, 
   10, 
    OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUBB_F_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  MVT::i32, MVT::i32, 3, 0, 1, 2, 
   0, 
  0, 
 65, TARGET_VAL(LanaiISD::SUBBF),
  OPC_CaptureGlueInput,
  OPC_RecordChild0,
  OPC_Scope, 43, 
   OPC_RecordChild1,
   OPC_MoveChild1,
   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
   OPC_Scope, 17, 
    OPC_CheckPredicate, 13,
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 0, 2,
    OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUBB_F_I_LO), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  MVT::i32, MVT::i32, 2, 0, 3, 
   17, 
    OPC_CheckPredicate, 14,
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 1, 2,
    OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUBB_F_I_HI), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  MVT::i32, MVT::i32, 2, 0, 3, 
   0, 
  16, 
   OPC_CheckChild0Type, MVT::i32,
   OPC_RecordChild1,
   OPC_EmitInteger, MVT::i32, 0, 
   OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUBB_F_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                 MVT::i32, MVT::i32, 3, 0, 1, 2, 
  0, 
 35, TARGET_VAL(ISD::SHL),
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_Scope, 17, 
   OPC_MoveChild1,
   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
   OPC_CheckPredicate, 18,
   OPC_MoveParent,
   OPC_EmitConvertToTarget, 1,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::SL_I), 0,
                 MVT::i32, 2, 0, 2, 
  12, 
   OPC_EmitInteger, MVT::i32, 0, 
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::SHL_R), 0,
                 MVT::i32, 3, 0, 1, 2, 
  0, 
 51, TARGET_VAL(ISD::SRL),
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_Scope, 18, 
   OPC_MoveChild1,
   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
   OPC_CheckPredicate, 18,
   OPC_MoveParent,
   OPC_EmitNodeXForm, 2, 1,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::SL_I), 0,
                 MVT::i32, 2, 0, 2, 
  27, 
   OPC_EmitRegister, MVT::i32, Lanai::R0,
   OPC_EmitInteger, MVT::i32, 0, 
   OPC_EmitNode1, TARGET_VAL(Lanai::SUB_R), 0,
                 MVT::i32, 3, 2, 1, 3, 
   OPC_EmitInteger, MVT::i32, 0, 
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::SRL_R), 0,
                 MVT::i32, 3, 0, 4, 5, 
  0, 
 51, TARGET_VAL(ISD::SRA),
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_Scope, 18, 
   OPC_MoveChild1,
   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
   OPC_CheckPredicate, 18,
   OPC_MoveParent,
   OPC_EmitNodeXForm, 2, 1,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::SA_I), 0,
                 MVT::i32, 2, 0, 2, 
  27, 
   OPC_EmitRegister, MVT::i32, Lanai::R0,
   OPC_EmitInteger, MVT::i32, 0, 
   OPC_EmitNode1, TARGET_VAL(Lanai::SUB_R), 0,
                 MVT::i32, 3, 2, 1, 3, 
   OPC_EmitInteger, MVT::i32, 0, 
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::SRA_R), 0,
                 MVT::i32, 3, 0, 4, 5, 
  0, 
 57, TARGET_VAL(LanaiISD::SET_FLAG),
  OPC_RecordChild0,
  OPC_Scope, 41, 
   OPC_RecordChild1,
   OPC_MoveChild1,
   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
   OPC_Scope, 16, 
    OPC_CheckPredicate, 13,
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 0, 2,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::SFSUB_F_RI_LO), 0|OPFL_GlueOutput,
                  MVT::i32, 2, 0, 3, 
   16, 
    OPC_CheckPredicate, 14,
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 1, 2,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::SFSUB_F_RI_HI), 0|OPFL_GlueOutput,
                  MVT::i32, 2, 0, 3, 
   0, 
  11, 
   OPC_CheckChild0Type, MVT::i32,
   OPC_RecordChild1,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::SFSUB_F_RR), 0|OPFL_GlueOutput,
                 MVT::i32, 2, 0, 1, 
  0, 
 24, TARGET_VAL(LanaiISD::BR_CC),
  OPC_RecordNode,
  OPC_CaptureGlueInput,
  OPC_RecordChild1,
  OPC_MoveChild1,
  OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
  OPC_MoveParent,
  OPC_RecordChild2,
  OPC_MoveChild2,
  OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
  OPC_MoveParent,
  OPC_EmitMergeInputChains1_0,
  OPC_EmitConvertToTarget, 2,
  OPC_MorphNodeTo0, TARGET_VAL(Lanai::BRCC), 0|OPFL_Chain|OPFL_GlueInput,
                2, 1, 3, 
 16, TARGET_VAL(LanaiISD::SETCC),
  OPC_CaptureGlueInput,
  OPC_RecordChild0,
  OPC_MoveChild0,
  OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
  OPC_MoveParent,
  OPC_EmitConvertToTarget, 0,
  OPC_MorphNodeTo1, TARGET_VAL(Lanai::SCC), 0|OPFL_GlueInput,
                MVT::i32, 1, 1, 
 22, TARGET_VAL(LanaiISD::SELECT_CC),
  OPC_CaptureGlueInput,
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_RecordChild2,
  OPC_MoveChild2,
  OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
  OPC_MoveParent,
  OPC_CheckType, MVT::i32,
  OPC_EmitConvertToTarget, 2,
  OPC_MorphNodeTo1, TARGET_VAL(Lanai::SELECT), 0|OPFL_GlueInput,
                MVT::i32, 3, 0, 1, 3, 
 42, TARGET_VAL(LanaiISD::CALL),
  OPC_RecordNode,
  OPC_CaptureGlueInput,
  OPC_RecordChild1,
  OPC_Scope, 27, 
   OPC_MoveChild1,
   OPC_SwitchOpcode , 9, TARGET_VAL(ISD::TargetGlobalAddress),
    OPC_MoveParent,
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  MVT::i32, 1, 1, 
   9, TARGET_VAL(ISD::TargetExternalSymbol),
    OPC_MoveParent,
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo1, TARGET_VAL(Lanai::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  MVT::i32, 1, 1, 
   0,
  8, 
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::CALLR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                 MVT::i32, 1, 1, 
  0, 
 69, TARGET_VAL(LanaiISD::HI),
  OPC_RecordChild0,
  OPC_MoveChild0,
  OPC_SwitchOpcode , 10, TARGET_VAL(ISD::TargetGlobalAddress),
   OPC_MoveParent,
   OPC_CheckType, MVT::i32,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                 MVT::i32, 1, 0, 
  10, TARGET_VAL(ISD::TargetExternalSymbol),
   OPC_MoveParent,
   OPC_CheckType, MVT::i32,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                 MVT::i32, 1, 0, 
  10, TARGET_VAL(ISD::TargetBlockAddress),
   OPC_MoveParent,
   OPC_CheckType, MVT::i32,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                 MVT::i32, 1, 0, 
  10, TARGET_VAL(ISD::TargetJumpTable),
   OPC_MoveParent,
   OPC_CheckType, MVT::i32,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                 MVT::i32, 1, 0, 
  10, TARGET_VAL(ISD::TargetConstantPool),
   OPC_MoveParent,
   OPC_CheckType, MVT::i32,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                 MVT::i32, 1, 0, 
  0,
 89, TARGET_VAL(LanaiISD::LO),
  OPC_RecordChild0,
  OPC_MoveChild0,
  OPC_SwitchOpcode , 14, TARGET_VAL(ISD::TargetGlobalAddress),
   OPC_MoveParent,
   OPC_CheckType, MVT::i32,
   OPC_EmitRegister, MVT::i32, Lanai::R0,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                 MVT::i32, 2, 1, 0, 
  14, TARGET_VAL(ISD::TargetExternalSymbol),
   OPC_MoveParent,
   OPC_CheckType, MVT::i32,
   OPC_EmitRegister, MVT::i32, Lanai::R0,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                 MVT::i32, 2, 1, 0, 
  14, TARGET_VAL(ISD::TargetBlockAddress),
   OPC_MoveParent,
   OPC_CheckType, MVT::i32,
   OPC_EmitRegister, MVT::i32, Lanai::R0,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                 MVT::i32, 2, 1, 0, 
  14, TARGET_VAL(ISD::TargetJumpTable),
   OPC_MoveParent,
   OPC_CheckType, MVT::i32,
   OPC_EmitRegister, MVT::i32, Lanai::R0,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                 MVT::i32, 2, 1, 0, 
  14, TARGET_VAL(ISD::TargetConstantPool),
   OPC_MoveParent,
   OPC_CheckType, MVT::i32,
   OPC_EmitRegister, MVT::i32, Lanai::R0,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                 MVT::i32, 2, 1, 0, 
  0,
 69, TARGET_VAL(LanaiISD::SMALL),
  OPC_RecordChild0,
  OPC_MoveChild0,
  OPC_SwitchOpcode , 10, TARGET_VAL(ISD::TargetGlobalAddress),
   OPC_MoveParent,
   OPC_CheckType, MVT::i32,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                 MVT::i32, 1, 0, 
  10, TARGET_VAL(ISD::TargetExternalSymbol),
   OPC_MoveParent,
   OPC_CheckType, MVT::i32,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                 MVT::i32, 1, 0, 
  10, TARGET_VAL(ISD::TargetBlockAddress),
   OPC_MoveParent,
   OPC_CheckType, MVT::i32,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                 MVT::i32, 1, 0, 
  10, TARGET_VAL(ISD::TargetJumpTable),
   OPC_MoveParent,
   OPC_CheckType, MVT::i32,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                 MVT::i32, 1, 0, 
  10, TARGET_VAL(ISD::TargetConstantPool),
   OPC_MoveParent,
   OPC_CheckType, MVT::i32,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                 MVT::i32, 1, 0, 
  0,
 113, TARGET_VAL(ISD::Constant),
  OPC_RecordNode,
  OPC_Scope, 18, 
   OPC_CheckPredicate, 15,
   OPC_EmitRegister, MVT::i32, Lanai::R1,
   OPC_EmitConvertToTarget, 0,
   OPC_EmitNodeXForm, 0, 2,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_I_LO), 0,
                 MVT::i32, 2, 1, 3, 
  18, 
   OPC_CheckPredicate, 16,
   OPC_EmitRegister, MVT::i32, Lanai::R1,
   OPC_EmitConvertToTarget, 0,
   OPC_EmitNodeXForm, 1, 2,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_I_HI), 0,
                 MVT::i32, 2, 1, 3, 
  14, 
   OPC_CheckPredicate, 14,
   OPC_EmitConvertToTarget, 0,
   OPC_EmitNodeXForm, 1, 1,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                 MVT::i32, 1, 2, 
  14, 
   OPC_CheckPredicate, 19,
   OPC_EmitConvertToTarget, 0,
   OPC_EmitNodeXForm, 3, 1,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                 MVT::i32, 1, 2, 
  15, 
   OPC_CheckPredicate, 13,
   OPC_EmitRegister, MVT::i32, Lanai::R0,
   OPC_EmitConvertToTarget, 0,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                 MVT::i32, 2, 1, 2, 
  25, 
   OPC_EmitConvertToTarget, 0,
   OPC_EmitNodeXForm, 1, 1,
   OPC_EmitNode1, TARGET_VAL(Lanai::MOVHI), 0,
                 MVT::i32, 1, 2, 
   OPC_EmitConvertToTarget, 0,
   OPC_EmitNodeXForm, 0, 4,
   OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                 MVT::i32, 2, 3, 5, 
  0, 
 14, TARGET_VAL(ISD::BR),
  OPC_RecordNode,
  OPC_RecordChild1,
  OPC_MoveChild1,
  OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
  OPC_MoveParent,
  OPC_EmitMergeInputChains1_0,
  OPC_MorphNodeTo0, TARGET_VAL(Lanai::BT), 0|OPFL_Chain,
                1, 1, 
 11, TARGET_VAL(ISD::BRIND),
  OPC_RecordNode,
  OPC_RecordChild1,
  OPC_CheckChild1Type, MVT::i32,
  OPC_EmitMergeInputChains1_0,
  OPC_MorphNodeTo0, TARGET_VAL(Lanai::JR), 0|OPFL_Chain,
                1, 1, 
 8, TARGET_VAL(LanaiISD::RET_FLAG),
  OPC_RecordNode,
  OPC_CaptureGlueInput,
  OPC_EmitMergeInputChains1_0,
  OPC_MorphNodeTo0, TARGET_VAL(Lanai::RET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                0, 
 9, TARGET_VAL(LanaiISD::ADJDYNALLOC),
  OPC_RecordChild0,
  OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADJDYNALLOC), 0,
                MVT::i32, MVT::i32, 1, 0, 
 8, TARGET_VAL(ISD::CTPOP),
  OPC_RecordChild0,
  OPC_MorphNodeTo1, TARGET_VAL(Lanai::POPC), 0,
                MVT::i32, 1, 0, 
 8, TARGET_VAL(ISD::CTLZ),
  OPC_RecordChild0,
  OPC_MorphNodeTo1, TARGET_VAL(Lanai::LEADZ), 0,
                MVT::i32, 1, 0, 
 8, TARGET_VAL(ISD::CTTZ),
  OPC_RecordChild0,
  OPC_MorphNodeTo1, TARGET_VAL(Lanai::TRAILZ), 0,
                MVT::i32, 1, 0, 
 0,
    0
  }; // Total Array size is 2337 bytes

  #undef TARGET_VAL
  SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
bool CheckNodePredicate(SDNode *Node, unsigned PredNo) const override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
bool DAGISEL_CLASS_COLONCOLON CheckNodePredicate(SDNode *Node, unsigned PredNo) const
#if DAGISEL_INLINE
  override
#endif
{
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: {
    // Predicate_unindexedload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 1: {
    // Predicate_load
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::NON_EXTLOAD) return false;
return true;

  }
  case 2: {
    // Predicate_zextload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::ZEXTLOAD) return false;
return true;

  }
  case 3: {
    // Predicate_zextloadi32
    SDNode *N = Node;
    (void)N;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i32) return false;
return true;

  }
  case 4: {
    // Predicate_zextloadi16
    // Predicate_sextloadi16
    // Predicate_extloadi16
    SDNode *N = Node;
    (void)N;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i16) return false;
return true;

  }
  case 5: {
    // Predicate_zextloadi8
    // Predicate_sextloadi8
    // Predicate_extloadi8
    // Predicate_atomic_load_8
    SDNode *N = Node;
    (void)N;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i8) return false;
return true;

  }
  case 6: {
    // Predicate_sextload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::SEXTLOAD) return false;
return true;

  }
  case 7: {
    // Predicate_extload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::EXTLOAD) return false;
return true;

  }
  case 8: {
    // Predicate_unindexedstore
    SDNode *N = Node;
    (void)N;
if (cast<StoreSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 9: {
    // Predicate_store
    SDNode *N = Node;
    (void)N;
 if (cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 10: {
    // Predicate_truncstore
    SDNode *N = Node;
    (void)N;
 if (!cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 11: {
    // Predicate_truncstorei16
    SDNode *N = Node;
    (void)N;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i16) return false;
 if (!cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 12: {
    // Predicate_truncstorei8
    SDNode *N = Node;
    (void)N;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i8) return false;
 if (!cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 13: {
    // Predicate_i32lo16z
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;

    // i32lo16 predicate - true if the 32-bit immediate has only rightmost 16
    // bits set.
    return ((N->getZExtValue() & 0xFFFFUL) == N->getZExtValue());
  }
  case 14: {
    // Predicate_i32hi16
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;

    // i32hi16 predicate - true if the 32-bit immediate has only leftmost 16
    // bits set.
    return ((N->getZExtValue() & 0xFFFF0000UL) == N->getZExtValue());
  }
  case 15: {
    // Predicate_i32lo16and
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;

    // i32lo16 predicate - true if the 32-bit immediate has the rightmost 16
    // bits set and the leftmost 16 bits 1's.
    return (N->getZExtValue() >= 0xFFFF0000UL);
  }
  case 16: {
    // Predicate_i32hi16and
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;

    // i32lo16 predicate - true if the 32-bit immediate has the leftmost 16
    // bits set and the rightmost 16 bits 1's.
    return ((N->getZExtValue() & 0xFFFFUL) == 0xFFFFUL);
  }
  case 17: {
    // Predicate_i32neg16
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;

    // i32neg16 predicate - true if the 32-bit immediate is negative and can
    // be represented by a 16 bit integer.
    int Imm = N->getSExtValue();
    return (Imm < 0) && (isInt<16>(Imm));
  }
  case 18: {
    // Predicate_immShift
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;

    int Imm = N->getSExtValue();
    return Imm >= -31 && Imm <= 31;
  }
  case 19: {
    // Predicate_i32lo21
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;

    // i32lo21 predicate - true if the 32-bit immediate has only rightmost 21
    // bits set.
    return ((N->getZExtValue() & 0x1FFFFFUL) == N->getZExtValue());
  }
  }
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
bool CheckComplexPattern(SDNode *Root, SDNode *Parent,
      SDValue N, unsigned PatternNo,
      SmallVectorImpl<std::pair<SDValue, SDNode *>> &Result) override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
bool DAGISEL_CLASS_COLONCOLON CheckComplexPattern(SDNode *Root, SDNode *Parent,
      SDValue N, unsigned PatternNo,
      SmallVectorImpl<std::pair<SDValue, SDNode *>> &Result)
#if DAGISEL_INLINE
  override
#endif
{
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: llvm_unreachable("Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+3);
  return selectAddrRi(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 1:
    Result.resize(NextRes+3);
  return selectAddrRr(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 2:
    Result.resize(NextRes+3);
  return selectAddrSpls(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 3:
    Result.resize(NextRes+1);
  return selectAddrSls(N, Result[NextRes+0].first);
  }
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
SDValue DAGISEL_CLASS_COLONCOLON RunSDNodeXForm(SDValue V, unsigned XFormNo)
#if DAGISEL_INLINE
  override
#endif
{
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant((uint64_t)N->getZExtValue() & 0xffff,
                                   SDLoc(N), MVT::i32);

  }
  case 1: {  
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant((uint64_t)N->getZExtValue() >> 16, SDLoc(N),
                                   MVT::i32);

  }
  case 2: {  
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(-N->getSExtValue(), SDLoc(N), MVT::i32);

  }
  case 3: {  
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant((uint64_t)N->getZExtValue() & 0x1fffff,
                                   SDLoc(N), MVT::i32);

  }
  }
}
#endif // GET_DAGISEL_BODY


#ifdef DAGISEL_INLINE
#undef DAGISEL_INLINE
#endif
#ifdef DAGISEL_CLASS_COLONCOLON
#undef DAGISEL_CLASS_COLONCOLON
#endif
#ifdef GET_DAGISEL_DECL
#undef GET_DAGISEL_DECL
#endif
#ifdef GET_DAGISEL_BODY
#undef GET_DAGISEL_BODY
#endif
