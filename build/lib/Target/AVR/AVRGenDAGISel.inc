/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the AVR target                                *|
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
 OPC_SwitchOpcode , 117|128,3, TARGET_VAL(ISD::STORE),
  OPC_RecordMemRef,
  OPC_RecordNode,
  OPC_Scope, 125, 
   OPC_MoveChild1,
   OPC_SwitchOpcode , 58, TARGET_VAL(ISD::OR),
    OPC_MoveChild0,
    OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
    OPC_RecordMemRef,
    OPC_RecordNode,
    OPC_CheckFoldableChainNode,
    OPC_RecordChild1,
    OPC_MoveChild1,
    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
    OPC_CheckPredicate, 0,
    OPC_MoveParent,
    OPC_CheckPredicate, 1,
    OPC_CheckPredicate, 2,
    OPC_MoveParent,
    OPC_RecordChild1,
    OPC_MoveChild1,
    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
    OPC_CheckPredicate, 3,
    OPC_MoveParent,
    OPC_CheckType, MVT::i8,
    OPC_MoveParent,
    OPC_CheckChild2Same, 2,
    OPC_CheckPredicate, 4,
    OPC_CheckPredicate, 5,
    OPC_EmitMergeInputChains, 2, 0, 1, 
    OPC_EmitConvertToTarget, 2,
    OPC_EmitNodeXForm, 0, 4,
    OPC_EmitConvertToTarget, 3,
    OPC_EmitNodeXForm, 1, 6,
    OPC_MorphNodeTo0, TARGET_VAL(AVR::SBIAb), 0|OPFL_Chain|OPFL_MemRefs,
                  2, 5, 7, 
   58, TARGET_VAL(ISD::AND),
    OPC_MoveChild0,
    OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
    OPC_RecordMemRef,
    OPC_RecordNode,
    OPC_CheckFoldableChainNode,
    OPC_RecordChild1,
    OPC_MoveChild1,
    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
    OPC_CheckPredicate, 0,
    OPC_MoveParent,
    OPC_CheckPredicate, 1,
    OPC_CheckPredicate, 2,
    OPC_MoveParent,
    OPC_RecordChild1,
    OPC_MoveChild1,
    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
    OPC_CheckPredicate, 6,
    OPC_MoveParent,
    OPC_CheckType, MVT::i8,
    OPC_MoveParent,
    OPC_CheckChild2Same, 2,
    OPC_CheckPredicate, 4,
    OPC_CheckPredicate, 5,
    OPC_EmitMergeInputChains, 2, 0, 1, 
    OPC_EmitConvertToTarget, 2,
    OPC_EmitNodeXForm, 0, 4,
    OPC_EmitConvertToTarget, 3,
    OPC_EmitNodeXForm, 2, 6,
    OPC_MorphNodeTo0, TARGET_VAL(AVR::CBIAb), 0|OPFL_Chain|OPFL_MemRefs,
                  2, 5, 7, 
   0,
  113|128,2, 
   OPC_RecordChild1,
   OPC_Scope, 53|128,1, 
    OPC_CheckChild1Type, MVT::i8,
    OPC_Scope, 36, 
     OPC_RecordChild2,
     OPC_CheckPredicate, 4,
     OPC_CheckPredicate, 5,
     OPC_Scope, 14, 
      OPC_CheckPatternPredicate, 0,
      OPC_CheckComplexPat, /*CP*/0, /*#*/2,
      OPC_EmitMergeInputChains1_0,
      OPC_MorphNodeTo0, TARGET_VAL(AVR::STDPtrQRr), 0|OPFL_Chain|OPFL_MemRefs,
                    3, 3, 4, 1, 
     13, 
      OPC_CheckComplexPat, /*CP*/0, /*#*/2,
      OPC_EmitMergeInputChains1_0,
      OPC_MorphNodeTo1, TARGET_VAL(AVR::STDSPQRr), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i16, 3, 3, 4, 1, 
     0, 
    25, 
     OPC_MoveChild2,
     OPC_CheckOpcode, TARGET_VAL(AVRISD::WRAPPER),
     OPC_RecordChild0,
     OPC_MoveChild0,
     OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
     OPC_MoveParent,
     OPC_CheckType, MVT::i16,
     OPC_MoveParent,
     OPC_CheckPredicate, 4,
     OPC_CheckPredicate, 5,
     OPC_EmitMergeInputChains1_0,
     OPC_MorphNodeTo0, TARGET_VAL(AVR::STSKRr), 0|OPFL_Chain|OPFL_MemRefs,
                   2, 2, 1, 
    113, 
     OPC_RecordChild2,
     OPC_Scope, 45, 
      OPC_MoveChild2,
      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
      OPC_Scope, 20, 
       OPC_CheckPredicate, 7,
       OPC_MoveParent,
       OPC_CheckPredicate, 4,
       OPC_CheckPredicate, 5,
       OPC_EmitMergeInputChains1_0,
       OPC_EmitConvertToTarget, 2,
       OPC_EmitNodeXForm, 0, 3,
       OPC_MorphNodeTo0, TARGET_VAL(AVR::OUTARr), 0|OPFL_Chain|OPFL_MemRefs,
                     2, 4, 1, 
      17, 
       OPC_MoveParent,
       OPC_CheckPredicate, 4,
       OPC_CheckPredicate, 5,
       OPC_CheckPatternPredicate, 0,
       OPC_EmitMergeInputChains1_0,
       OPC_EmitConvertToTarget, 2,
       OPC_MorphNodeTo0, TARGET_VAL(AVR::STSKRr), 0|OPFL_Chain|OPFL_MemRefs,
                     2, 3, 1, 
      0, 
     46, 
      OPC_RecordChild3,
      OPC_MoveChild3,
      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
      OPC_MoveParent,
      OPC_CheckPredicate, 5,
      OPC_CheckType, MVT::i16,
      OPC_Scope, 16, 
       OPC_CheckPredicate, 8,
       OPC_CheckPatternPredicate, 0,
       OPC_EmitMergeInputChains1_0,
       OPC_EmitConvertToTarget, 3,
       OPC_MorphNodeTo1, TARGET_VAL(AVR::STPtrPiRr), 0|OPFL_Chain|OPFL_MemRefs,
                     MVT::i16, 3, 2, 1, 4, 
      16, 
       OPC_CheckPredicate, 9,
       OPC_CheckPatternPredicate, 0,
       OPC_EmitMergeInputChains1_0,
       OPC_EmitConvertToTarget, 3,
       OPC_MorphNodeTo1, TARGET_VAL(AVR::STPtrPdRr), 0|OPFL_Chain|OPFL_MemRefs,
                     MVT::i16, 3, 2, 1, 4, 
      0, 
     16, 
      OPC_CheckChild2Type, MVT::i16,
      OPC_CheckPredicate, 4,
      OPC_CheckPredicate, 5,
      OPC_CheckPatternPredicate, 0,
      OPC_EmitMergeInputChains1_0,
      OPC_MorphNodeTo0, TARGET_VAL(AVR::STPtrRr), 0|OPFL_Chain|OPFL_MemRefs,
                    2, 2, 1, 
     0, 
    0, 
   53|128,1, 
    OPC_CheckChild1Type, MVT::i16,
    OPC_Scope, 36, 
     OPC_RecordChild2,
     OPC_CheckPredicate, 4,
     OPC_CheckPredicate, 5,
     OPC_Scope, 14, 
      OPC_CheckPatternPredicate, 0,
      OPC_CheckComplexPat, /*CP*/0, /*#*/2,
      OPC_EmitMergeInputChains1_0,
      OPC_MorphNodeTo0, TARGET_VAL(AVR::STDWPtrQRr), 0|OPFL_Chain|OPFL_MemRefs,
                    3, 3, 4, 1, 
     13, 
      OPC_CheckComplexPat, /*CP*/0, /*#*/2,
      OPC_EmitMergeInputChains1_0,
      OPC_MorphNodeTo1, TARGET_VAL(AVR::STDWSPQRr), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i16, 3, 3, 4, 1, 
     0, 
    25, 
     OPC_MoveChild2,
     OPC_CheckOpcode, TARGET_VAL(AVRISD::WRAPPER),
     OPC_RecordChild0,
     OPC_MoveChild0,
     OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
     OPC_MoveParent,
     OPC_CheckType, MVT::i16,
     OPC_MoveParent,
     OPC_CheckPredicate, 4,
     OPC_CheckPredicate, 5,
     OPC_EmitMergeInputChains1_0,
     OPC_MorphNodeTo0, TARGET_VAL(AVR::STSWKRr), 0|OPFL_Chain|OPFL_MemRefs,
                   2, 2, 1, 
    113, 
     OPC_RecordChild2,
     OPC_Scope, 45, 
      OPC_MoveChild2,
      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
      OPC_Scope, 20, 
       OPC_CheckPredicate, 10,
       OPC_MoveParent,
       OPC_CheckPredicate, 4,
       OPC_CheckPredicate, 5,
       OPC_EmitMergeInputChains1_0,
       OPC_EmitConvertToTarget, 2,
       OPC_EmitNodeXForm, 0, 3,
       OPC_MorphNodeTo0, TARGET_VAL(AVR::OUTWARr), 0|OPFL_Chain|OPFL_MemRefs,
                     2, 4, 1, 
      17, 
       OPC_MoveParent,
       OPC_CheckPredicate, 4,
       OPC_CheckPredicate, 5,
       OPC_CheckPatternPredicate, 0,
       OPC_EmitMergeInputChains1_0,
       OPC_EmitConvertToTarget, 2,
       OPC_MorphNodeTo0, TARGET_VAL(AVR::STSWKRr), 0|OPFL_Chain|OPFL_MemRefs,
                     2, 3, 1, 
      0, 
     46, 
      OPC_RecordChild3,
      OPC_MoveChild3,
      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
      OPC_MoveParent,
      OPC_CheckPredicate, 5,
      OPC_CheckType, MVT::i16,
      OPC_Scope, 16, 
       OPC_CheckPredicate, 8,
       OPC_CheckPatternPredicate, 0,
       OPC_EmitMergeInputChains1_0,
       OPC_EmitConvertToTarget, 3,
       OPC_MorphNodeTo1, TARGET_VAL(AVR::STWPtrPiRr), 0|OPFL_Chain|OPFL_MemRefs,
                     MVT::i16, 3, 2, 1, 4, 
      16, 
       OPC_CheckPredicate, 9,
       OPC_CheckPatternPredicate, 0,
       OPC_EmitMergeInputChains1_0,
       OPC_EmitConvertToTarget, 3,
       OPC_MorphNodeTo1, TARGET_VAL(AVR::STWPtrPdRr), 0|OPFL_Chain|OPFL_MemRefs,
                     MVT::i16, 3, 2, 1, 4, 
      0, 
     16, 
      OPC_CheckChild2Type, MVT::i16,
      OPC_CheckPredicate, 4,
      OPC_CheckPredicate, 5,
      OPC_CheckPatternPredicate, 0,
      OPC_EmitMergeInputChains1_0,
      OPC_MorphNodeTo0, TARGET_VAL(AVR::STWPtrRr), 0|OPFL_Chain|OPFL_MemRefs,
                    2, 2, 1, 
     0, 
    0, 
   0, 
  0, 
 80|128,1, TARGET_VAL(ISD::LOAD),
  OPC_RecordMemRef,
  OPC_RecordNode,
  OPC_Scope, 39, 
   OPC_RecordChild1,
   OPC_CheckPredicate, 1,
   OPC_CheckPredicate, 2,
   OPC_SwitchType , 14, MVT::i8,
    OPC_CheckPatternPredicate, 0,
    OPC_CheckComplexPat, /*CP*/0, /*#*/1,
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo1, TARGET_VAL(AVR::LDDRdPtrQ), 0|OPFL_Chain|OPFL_MemRefs,
                  MVT::i8, 2, 2, 3, 
   14, MVT::i16,
    OPC_CheckPatternPredicate, 0,
    OPC_CheckComplexPat, /*CP*/0, /*#*/1,
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo1, TARGET_VAL(AVR::LDDWRdPtrQ), 0|OPFL_Chain|OPFL_MemRefs,
                  MVT::i16, 2, 2, 3, 
   0,
  37, 
   OPC_MoveChild1,
   OPC_CheckOpcode, TARGET_VAL(AVRISD::WRAPPER),
   OPC_RecordChild0,
   OPC_MoveChild0,
   OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
   OPC_MoveParent,
   OPC_MoveParent,
   OPC_CheckPredicate, 1,
   OPC_CheckPredicate, 2,
   OPC_SwitchType , 8, MVT::i8,
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo1, TARGET_VAL(AVR::LDSRdK), 0|OPFL_Chain|OPFL_MemRefs,
                  MVT::i8, 1, 1, 
   8, MVT::i16,
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo1, TARGET_VAL(AVR::LDSWRdK), 0|OPFL_Chain|OPFL_MemRefs,
                  MVT::i16, 1, 1, 
   0,
  125, 
   OPC_RecordChild1,
   OPC_Scope, 88, 
    OPC_MoveChild1,
    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
    OPC_Scope, 22, 
     OPC_CheckPredicate, 7,
     OPC_MoveParent,
     OPC_CheckPredicate, 1,
     OPC_CheckPredicate, 2,
     OPC_CheckType, MVT::i8,
     OPC_EmitMergeInputChains1_0,
     OPC_EmitConvertToTarget, 1,
     OPC_EmitNodeXForm, 0, 2,
     OPC_MorphNodeTo1, TARGET_VAL(AVR::INRdA), 0|OPFL_Chain|OPFL_MemRefs,
                   MVT::i8, 1, 3, 
    22, 
     OPC_CheckPredicate, 10,
     OPC_MoveParent,
     OPC_CheckPredicate, 1,
     OPC_CheckPredicate, 2,
     OPC_CheckType, MVT::i16,
     OPC_EmitMergeInputChains1_0,
     OPC_EmitConvertToTarget, 1,
     OPC_EmitNodeXForm, 0, 2,
     OPC_MorphNodeTo1, TARGET_VAL(AVR::INWRdA), 0|OPFL_Chain|OPFL_MemRefs,
                   MVT::i16, 1, 3, 
    35, 
     OPC_MoveParent,
     OPC_CheckPredicate, 1,
     OPC_CheckPredicate, 2,
     OPC_SwitchType , 12, MVT::i8,
      OPC_CheckPatternPredicate, 0,
      OPC_EmitMergeInputChains1_0,
      OPC_EmitConvertToTarget, 1,
      OPC_MorphNodeTo1, TARGET_VAL(AVR::LDSRdK), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i8, 1, 2, 
     12, MVT::i16,
      OPC_CheckPatternPredicate, 0,
      OPC_EmitMergeInputChains1_0,
      OPC_EmitConvertToTarget, 1,
      OPC_MorphNodeTo1, TARGET_VAL(AVR::LDSWRdK), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i16, 1, 2, 
     0,
    0, 
   32, 
    OPC_CheckChild1Type, MVT::i16,
    OPC_CheckPredicate, 1,
    OPC_CheckPredicate, 2,
    OPC_SwitchType , 10, MVT::i8,
     OPC_CheckPatternPredicate, 0,
     OPC_EmitMergeInputChains1_0,
     OPC_MorphNodeTo1, TARGET_VAL(AVR::LDRdPtr), 0|OPFL_Chain|OPFL_MemRefs,
                   MVT::i8, 1, 1, 
    10, MVT::i16,
     OPC_CheckPatternPredicate, 0,
     OPC_EmitMergeInputChains1_0,
     OPC_MorphNodeTo1, TARGET_VAL(AVR::LDWRdPtr), 0|OPFL_Chain|OPFL_MemRefs,
                   MVT::i16, 1, 1, 
    0,
   0, 
  0, 
 35, TARGET_VAL(ISD::TRUNCATE),
  OPC_Scope, 19, 
   OPC_MoveChild0,
   OPC_CheckOpcode, TARGET_VAL(AVRISD::LSRWN),
   OPC_RecordChild0,
   OPC_CheckChild1Integer, 16, 
   OPC_MoveParent,
   OPC_EmitStringInteger, MVT::i32, AVR::sub_hi,
   OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                 MVT::i8, 2, 0, 1, 
  12, 
   OPC_RecordChild0,
   OPC_EmitStringInteger, MVT::i32, AVR::sub_lo,
   OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                 MVT::i8, 2, 0, 1, 
  0, 
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
  OPC_MorphNodeTo1, TARGET_VAL(AVR::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                MVT::i16, 2, 1, 2, 
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
  OPC_MorphNodeTo1, TARGET_VAL(AVR::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                MVT::i16, 2, 1, 2, 
 17, TARGET_VAL(ISD::ATOMIC_FENCE),
  OPC_RecordNode,
  OPC_MoveChild1,
  OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
  OPC_MoveParent,
  OPC_MoveChild2,
  OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
  OPC_MoveParent,
  OPC_EmitMergeInputChains1_0,
  OPC_MorphNodeTo0, TARGET_VAL(AVR::AtomicFence), 0|OPFL_Chain,
                0, 
 63|128,1, TARGET_VAL(ISD::ADD),
  OPC_Scope, 23, 
   OPC_RecordChild0,
   OPC_MoveChild1,
   OPC_CheckOpcode, TARGET_VAL(AVRISD::WRAPPER),
   OPC_RecordChild0,
   OPC_MoveChild0,
   OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
   OPC_MoveParent,
   OPC_MoveParent,
   OPC_CheckType, MVT::i16,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::SUBIWRdK), 0,
                 MVT::i16, MVT::i8, 2, 0, 1, 
  23, 
   OPC_MoveChild0,
   OPC_CheckOpcode, TARGET_VAL(AVRISD::WRAPPER),
   OPC_RecordChild0,
   OPC_MoveChild0,
   OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
   OPC_MoveParent,
   OPC_MoveParent,
   OPC_RecordChild1,
   OPC_CheckType, MVT::i16,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::SUBIWRdK), 0,
                 MVT::i16, MVT::i8, 2, 1, 0, 
  11|128,1, 
   OPC_RecordChild0,
   OPC_Scope, 12, 
    OPC_CheckChild1Integer, 2, 
    OPC_CheckType, MVT::i8,
    OPC_MorphNodeTo2, TARGET_VAL(AVR::INCRd), 0,
                  MVT::i8, MVT::i8, 1, 0, 
   12, 
    OPC_CheckChild1Integer, 3, 
    OPC_CheckType, MVT::i8,
    OPC_MorphNodeTo2, TARGET_VAL(AVR::DECRd), 0,
                  MVT::i8, MVT::i8, 1, 0, 
   109, 
    OPC_RecordChild1,
    OPC_Scope, 81, 
     OPC_MoveChild1,
     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
     OPC_Scope, 18, 
      OPC_CheckPredicate, 11,
      OPC_MoveParent,
      OPC_CheckType, MVT::i16,
      OPC_CheckPatternPredicate, 1,
      OPC_EmitConvertToTarget, 1,
      OPC_MorphNodeTo2, TARGET_VAL(AVR::ADIWRdK), 0,
                    MVT::i16, MVT::i8, 2, 0, 2, 
     19, 
      OPC_CheckPredicate, 12,
      OPC_MoveParent,
      OPC_CheckType, MVT::i16,
      OPC_EmitConvertToTarget, 1,
      OPC_EmitNodeXForm, 3, 2,
      OPC_MorphNodeTo2, TARGET_VAL(AVR::SBIWRdK), 0,
                    MVT::i16, MVT::i8, 2, 0, 3, 
     35, 
      OPC_MoveParent,
      OPC_SwitchType , 14, MVT::i16,
       OPC_EmitConvertToTarget, 1,
       OPC_EmitNodeXForm, 3, 2,
       OPC_MorphNodeTo2, TARGET_VAL(AVR::SUBIWRdK), 0,
                     MVT::i16, MVT::i8, 2, 0, 3, 
      14, MVT::i8,
       OPC_EmitConvertToTarget, 1,
       OPC_EmitNodeXForm, 4, 2,
       OPC_MorphNodeTo2, TARGET_VAL(AVR::SUBIRdK), 0,
                     MVT::i8, MVT::i8, 2, 0, 3, 
      0,
     0, 
    11, 
     OPC_CheckType, MVT::i8,
     OPC_MorphNodeTo2, TARGET_VAL(AVR::ADDRdRr), 0,
                   MVT::i8, MVT::i8, 2, 0, 1, 
    11, 
     OPC_CheckType, MVT::i16,
     OPC_MorphNodeTo2, TARGET_VAL(AVR::ADDWRdRr), 0,
                   MVT::i16, MVT::i8, 2, 0, 1, 
    0, 
   0, 
  0, 
 54, TARGET_VAL(ISD::XOR),
  OPC_RecordChild0,
  OPC_Scope, 24, 
   OPC_CheckChild1Integer, 3, 
   OPC_SwitchType , 8, MVT::i8,
    OPC_MorphNodeTo2, TARGET_VAL(AVR::COMRd), 0,
                  MVT::i8, MVT::i8, 1, 0, 
   8, MVT::i16,
    OPC_MorphNodeTo2, TARGET_VAL(AVR::COMWRd), 0,
                  MVT::i16, MVT::i8, 1, 0, 
   0,
  25, 
   OPC_RecordChild1,
   OPC_SwitchType , 9, MVT::i8,
    OPC_MorphNodeTo2, TARGET_VAL(AVR::EORRdRr), 0,
                  MVT::i8, MVT::i8, 2, 0, 1, 
   9, MVT::i16,
    OPC_MorphNodeTo2, TARGET_VAL(AVR::EORWRdRr), 0,
                  MVT::i16, MVT::i8, 2, 0, 1, 
   0,
  0, 
 113, TARGET_VAL(ISD::SUB),
  OPC_Scope, 25, 
   OPC_CheckChild0Integer, 0, 
   OPC_RecordChild1,
   OPC_SwitchType , 8, MVT::i8,
    OPC_MorphNodeTo2, TARGET_VAL(AVR::NEGRd), 0,
                  MVT::i8, MVT::i8, 1, 0, 
   8, MVT::i16,
    OPC_MorphNodeTo2, TARGET_VAL(AVR::NEGWRd), 0,
                  MVT::i16, MVT::i8, 1, 0, 
   0,
  84, 
   OPC_RecordChild0,
   OPC_RecordChild1,
   OPC_Scope, 55, 
    OPC_MoveChild1,
    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
    OPC_Scope, 18, 
     OPC_CheckPredicate, 11,
     OPC_MoveParent,
     OPC_CheckType, MVT::i16,
     OPC_CheckPatternPredicate, 1,
     OPC_EmitConvertToTarget, 1,
     OPC_MorphNodeTo2, TARGET_VAL(AVR::SBIWRdK), 0,
                   MVT::i16, MVT::i8, 2, 0, 2, 
    29, 
     OPC_MoveParent,
     OPC_SwitchType , 11, MVT::i8,
      OPC_EmitConvertToTarget, 1,
      OPC_MorphNodeTo2, TARGET_VAL(AVR::SUBIRdK), 0,
                    MVT::i8, MVT::i8, 2, 0, 2, 
     11, MVT::i16,
      OPC_EmitConvertToTarget, 1,
      OPC_MorphNodeTo2, TARGET_VAL(AVR::SUBIWRdK), 0,
                    MVT::i16, MVT::i8, 2, 0, 2, 
     0,
    0, 
   11, 
    OPC_CheckType, MVT::i8,
    OPC_MorphNodeTo2, TARGET_VAL(AVR::SUBRdRr), 0,
                  MVT::i8, MVT::i8, 2, 0, 1, 
   11, 
    OPC_CheckType, MVT::i16,
    OPC_MorphNodeTo2, TARGET_VAL(AVR::SUBWRdRr), 0,
                  MVT::i16, MVT::i8, 2, 0, 1, 
   0, 
  0, 
 90, TARGET_VAL(AVRISD::BRCOND),
  OPC_RecordNode,
  OPC_CaptureGlueInput,
  OPC_RecordChild1,
  OPC_MoveChild1,
  OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
  OPC_MoveParent,
  OPC_Scope, 9, 
   OPC_CheckChild2Integer, 0, 
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo0, TARGET_VAL(AVR::BREQk), 0|OPFL_Chain|OPFL_GlueInput,
                 1, 1, 
  9, 
   OPC_CheckChild2Integer, 2, 
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo0, TARGET_VAL(AVR::BRNEk), 0|OPFL_Chain|OPFL_GlueInput,
                 1, 1, 
  9, 
   OPC_CheckChild2Integer, 8, 
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo0, TARGET_VAL(AVR::BRSHk), 0|OPFL_Chain|OPFL_GlueInput,
                 1, 1, 
  9, 
   OPC_CheckChild2Integer, 10, 
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo0, TARGET_VAL(AVR::BRLOk), 0|OPFL_Chain|OPFL_GlueInput,
                 1, 1, 
  9, 
   OPC_CheckChild2Integer, 12, 
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo0, TARGET_VAL(AVR::BRMIk), 0|OPFL_Chain|OPFL_GlueInput,
                 1, 1, 
  9, 
   OPC_CheckChild2Integer, 14, 
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo0, TARGET_VAL(AVR::BRPLk), 0|OPFL_Chain|OPFL_GlueInput,
                 1, 1, 
  9, 
   OPC_CheckChild2Integer, 4, 
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo0, TARGET_VAL(AVR::BRGEk), 0|OPFL_Chain|OPFL_GlueInput,
                 1, 1, 
  9, 
   OPC_CheckChild2Integer, 6, 
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo0, TARGET_VAL(AVR::BRLTk), 0|OPFL_Chain|OPFL_GlueInput,
                 1, 1, 
  0, 
 15, TARGET_VAL(ISD::SHL),
  OPC_RecordChild0,
  OPC_CheckChild1Integer, 2, 
  OPC_CheckChild1Type, MVT::i8,
  OPC_CheckType, MVT::i16,
  OPC_MorphNodeTo2, TARGET_VAL(AVR::LSLWRd), 0,
                MVT::i16, MVT::i8, 1, 0, 
 63, TARGET_VAL(ISD::SUBE),
  OPC_CaptureGlueInput,
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_Scope, 33, 
   OPC_MoveChild1,
   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
   OPC_MoveParent,
   OPC_SwitchType , 11, MVT::i8,
    OPC_EmitConvertToTarget, 1,
    OPC_MorphNodeTo2, TARGET_VAL(AVR::SBCIRdK), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  MVT::i8, MVT::i8, 2, 0, 2, 
   11, MVT::i16,
    OPC_EmitConvertToTarget, 1,
    OPC_MorphNodeTo2, TARGET_VAL(AVR::SBCIWRdK), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  MVT::i16, MVT::i8, 2, 0, 2, 
   0,
  11, 
   OPC_CheckType, MVT::i8,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::SBCRdRr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                 MVT::i8, MVT::i8, 2, 0, 1, 
  11, 
   OPC_CheckType, MVT::i16,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::SBCWRdRr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                 MVT::i16, MVT::i8, 2, 0, 1, 
  0, 
 62, TARGET_VAL(ISD::AND),
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_Scope, 33, 
   OPC_MoveChild1,
   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
   OPC_MoveParent,
   OPC_SwitchType , 11, MVT::i8,
    OPC_EmitConvertToTarget, 1,
    OPC_MorphNodeTo2, TARGET_VAL(AVR::ANDIRdK), 0,
                  MVT::i8, MVT::i8, 2, 0, 2, 
   11, MVT::i16,
    OPC_EmitConvertToTarget, 1,
    OPC_MorphNodeTo2, TARGET_VAL(AVR::ANDIWRdK), 0,
                  MVT::i16, MVT::i8, 2, 0, 2, 
   0,
  11, 
   OPC_CheckType, MVT::i8,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::ANDRdRr), 0,
                 MVT::i8, MVT::i8, 2, 0, 1, 
  11, 
   OPC_CheckType, MVT::i16,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::ANDWRdRr), 0,
                 MVT::i16, MVT::i8, 2, 0, 1, 
  0, 
 62, TARGET_VAL(ISD::OR),
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_Scope, 33, 
   OPC_MoveChild1,
   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
   OPC_MoveParent,
   OPC_SwitchType , 11, MVT::i8,
    OPC_EmitConvertToTarget, 1,
    OPC_MorphNodeTo2, TARGET_VAL(AVR::ORIRdK), 0,
                  MVT::i8, MVT::i8, 2, 0, 2, 
   11, MVT::i16,
    OPC_EmitConvertToTarget, 1,
    OPC_MorphNodeTo2, TARGET_VAL(AVR::ORIWRdK), 0,
                  MVT::i16, MVT::i8, 2, 0, 2, 
   0,
  11, 
   OPC_CheckType, MVT::i8,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::ORRdRr), 0,
                 MVT::i8, MVT::i8, 2, 0, 1, 
  11, 
   OPC_CheckType, MVT::i16,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::ORWRdRr), 0,
                 MVT::i16, MVT::i8, 2, 0, 1, 
  0, 
 86, TARGET_VAL(AVRISD::CALL),
  OPC_RecordNode,
  OPC_CaptureGlueInput,
  OPC_RecordChild1,
  OPC_MoveChild1,
  OPC_SwitchOpcode , 25, TARGET_VAL(ISD::Constant),
   OPC_MoveParent,
   OPC_Scope, 9, 
    OPC_EmitMergeInputChains1_0,
    OPC_EmitConvertToTarget, 1,
    OPC_MorphNodeTo0, TARGET_VAL(AVR::RCALLk), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1, 2, 
   11, 
    OPC_CheckPatternPredicate, 2,
    OPC_EmitMergeInputChains1_0,
    OPC_EmitConvertToTarget, 1,
    OPC_MorphNodeTo0, TARGET_VAL(AVR::CALLk), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1, 2, 
   0, 
  23, TARGET_VAL(ISD::TargetGlobalAddress),
   OPC_CheckType, MVT::i16,
   OPC_MoveParent,
   OPC_Scope, 9, 
    OPC_CheckPatternPredicate, 2,
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo0, TARGET_VAL(AVR::CALLk), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1, 1, 
   7, 
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo0, TARGET_VAL(AVR::RCALLk), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1, 1, 
   0, 
  23, TARGET_VAL(ISD::TargetExternalSymbol),
   OPC_CheckType, MVT::i16,
   OPC_MoveParent,
   OPC_Scope, 9, 
    OPC_CheckPatternPredicate, 2,
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo0, TARGET_VAL(AVR::CALLk), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1, 1, 
   7, 
    OPC_EmitMergeInputChains1_0,
    OPC_MorphNodeTo0, TARGET_VAL(AVR::RCALLk), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1, 1, 
   0, 
  0,
 46, TARGET_VAL(AVRISD::CMP),
  OPC_RecordChild0,
  OPC_Scope, 30, 
   OPC_CheckChild0Type, MVT::i8,
   OPC_RecordChild1,
   OPC_Scope, 15, 
    OPC_MoveChild1,
    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
    OPC_MoveParent,
    OPC_EmitConvertToTarget, 1,
    OPC_MorphNodeTo1, TARGET_VAL(AVR::CPIRdK), 0|OPFL_GlueOutput,
                  MVT::i8, 2, 0, 2, 
   8, 
    OPC_MorphNodeTo1, TARGET_VAL(AVR::CPRdRr), 0|OPFL_GlueOutput,
                  MVT::i8, 2, 0, 1, 
   0, 
  11, 
   OPC_CheckChild0Type, MVT::i16,
   OPC_RecordChild1,
   OPC_MorphNodeTo1, TARGET_VAL(AVR::CPWRdRr), 0|OPFL_GlueOutput,
                 MVT::i8, 2, 0, 1, 
  0, 
 20, TARGET_VAL(AVRISD::LSLWN),
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_MoveChild1,
  OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
  OPC_MoveParent,
  OPC_CheckType, MVT::i16,
  OPC_EmitConvertToTarget, 1,
  OPC_MorphNodeTo2, TARGET_VAL(AVR::LSLWNRd), 0,
                MVT::i16, MVT::i8, 2, 0, 2, 
 20, TARGET_VAL(AVRISD::LSLBN),
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_MoveChild1,
  OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
  OPC_MoveParent,
  OPC_CheckType, MVT::i8,
  OPC_EmitConvertToTarget, 1,
  OPC_MorphNodeTo2, TARGET_VAL(AVR::LSLBNRd), 0,
                MVT::i8, MVT::i8, 2, 0, 2, 
 20, TARGET_VAL(AVRISD::LSRWN),
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_MoveChild1,
  OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
  OPC_MoveParent,
  OPC_CheckType, MVT::i16,
  OPC_EmitConvertToTarget, 1,
  OPC_MorphNodeTo2, TARGET_VAL(AVR::LSRWNRd), 0,
                MVT::i16, MVT::i8, 2, 0, 2, 
 20, TARGET_VAL(AVRISD::LSRBN),
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_MoveChild1,
  OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
  OPC_MoveParent,
  OPC_CheckType, MVT::i8,
  OPC_EmitConvertToTarget, 1,
  OPC_MorphNodeTo2, TARGET_VAL(AVR::LSRBNRd), 0,
                MVT::i8, MVT::i8, 2, 0, 2, 
 20, TARGET_VAL(AVRISD::ASRWN),
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_MoveChild1,
  OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
  OPC_MoveParent,
  OPC_CheckType, MVT::i16,
  OPC_EmitConvertToTarget, 1,
  OPC_MorphNodeTo2, TARGET_VAL(AVR::ASRWNRd), 0,
                MVT::i16, MVT::i8, 2, 0, 2, 
 20, TARGET_VAL(AVRISD::ASRBN),
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_MoveChild1,
  OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
  OPC_MoveParent,
  OPC_CheckType, MVT::i8,
  OPC_EmitConvertToTarget, 1,
  OPC_MorphNodeTo2, TARGET_VAL(AVR::ASRBNRd), 0,
                MVT::i8, MVT::i8, 2, 0, 2, 
 62, TARGET_VAL(ISD::SUBC),
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_Scope, 33, 
   OPC_MoveChild1,
   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
   OPC_MoveParent,
   OPC_SwitchType , 11, MVT::i8,
    OPC_EmitConvertToTarget, 1,
    OPC_MorphNodeTo2, TARGET_VAL(AVR::SUBIRdK), 0|OPFL_GlueOutput,
                  MVT::i8, MVT::i8, 2, 0, 2, 
   11, MVT::i16,
    OPC_EmitConvertToTarget, 1,
    OPC_MorphNodeTo2, TARGET_VAL(AVR::SUBIWRdK), 0|OPFL_GlueOutput,
                  MVT::i16, MVT::i8, 2, 0, 2, 
   0,
  11, 
   OPC_CheckType, MVT::i8,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::SUBRdRr), 0|OPFL_GlueOutput,
                 MVT::i8, MVT::i8, 2, 0, 1, 
  11, 
   OPC_CheckType, MVT::i16,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::SUBWRdRr), 0|OPFL_GlueOutput,
                 MVT::i16, MVT::i8, 2, 0, 1, 
  0, 
 68, TARGET_VAL(ISD::ADDC),
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_Scope, 39, 
   OPC_MoveChild1,
   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
   OPC_MoveParent,
   OPC_SwitchType , 14, MVT::i16,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 3, 2,
    OPC_MorphNodeTo2, TARGET_VAL(AVR::SUBIWRdK), 0|OPFL_GlueOutput,
                  MVT::i16, MVT::i8, 2, 0, 3, 
   14, MVT::i8,
    OPC_EmitConvertToTarget, 1,
    OPC_EmitNodeXForm, 4, 2,
    OPC_MorphNodeTo2, TARGET_VAL(AVR::SUBIRdK), 0|OPFL_GlueOutput,
                  MVT::i8, MVT::i8, 2, 0, 3, 
   0,
  11, 
   OPC_CheckType, MVT::i8,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::ADDRdRr), 0|OPFL_GlueOutput,
                 MVT::i8, MVT::i8, 2, 0, 1, 
  11, 
   OPC_CheckType, MVT::i16,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::ADDWRdRr), 0|OPFL_GlueOutput,
                 MVT::i16, MVT::i8, 2, 0, 1, 
  0, 
 51, TARGET_VAL(ISD::ADDE),
  OPC_CaptureGlueInput,
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_Scope, 21, 
   OPC_MoveChild1,
   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
   OPC_MoveParent,
   OPC_CheckType, MVT::i8,
   OPC_EmitConvertToTarget, 1,
   OPC_EmitNodeXForm, 4, 2,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::SBCIRdK), 0|OPFL_GlueInput|OPFL_GlueOutput,
                 MVT::i8, MVT::i8, 2, 0, 3, 
  11, 
   OPC_CheckType, MVT::i8,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::ADCRdRr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                 MVT::i8, MVT::i8, 2, 0, 1, 
  11, 
   OPC_CheckType, MVT::i16,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::ADCWRdRr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                 MVT::i16, MVT::i8, 2, 0, 1, 
  0, 
 30, TARGET_VAL(AVRISD::WRAPPER),
  OPC_RecordChild0,
  OPC_MoveChild0,
  OPC_SwitchOpcode , 10, TARGET_VAL(ISD::TargetGlobalAddress),
   OPC_MoveParent,
   OPC_CheckType, MVT::i16,
   OPC_MorphNodeTo1, TARGET_VAL(AVR::LDIWRdK), 0,
                 MVT::i16, 1, 0, 
  10, TARGET_VAL(ISD::TargetBlockAddress),
   OPC_MoveParent,
   OPC_CheckType, MVT::i16,
   OPC_MorphNodeTo1, TARGET_VAL(AVR::LDIWRdK), 0,
                 MVT::i16, 1, 0, 
  0,
 37, TARGET_VAL(AVRISD::SELECT_CC),
  OPC_CaptureGlueInput,
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_RecordChild2,
  OPC_MoveChild2,
  OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
  OPC_MoveParent,
  OPC_SwitchType , 11, MVT::i8,
   OPC_EmitConvertToTarget, 2,
   OPC_MorphNodeTo1, TARGET_VAL(AVR::Select8), 0|OPFL_GlueInput,
                 MVT::i8, 3, 0, 1, 3, 
  11, MVT::i16,
   OPC_EmitConvertToTarget, 2,
   OPC_MorphNodeTo1, TARGET_VAL(AVR::Select16), 0|OPFL_GlueInput,
                 MVT::i16, 3, 0, 1, 3, 
  0,
 39, TARGET_VAL(ISD::Constant),
  OPC_Scope, 10, 
   OPC_CheckInteger, 0, 
   OPC_CheckType, MVT::i8,
   OPC_MorphNodeTo1, TARGET_VAL(AVR::CopyR1), 0,
                 MVT::i8, 0, 
  25, 
   OPC_RecordNode,
   OPC_SwitchType , 9, MVT::i8,
    OPC_EmitConvertToTarget, 0,
    OPC_MorphNodeTo1, TARGET_VAL(AVR::LDIRdK), 0,
                  MVT::i8, 1, 1, 
   9, MVT::i16,
    OPC_EmitConvertToTarget, 0,
    OPC_MorphNodeTo1, TARGET_VAL(AVR::LDIWRdK), 0,
                  MVT::i16, 1, 1, 
   0,
  0, 
 31, TARGET_VAL(ISD::ATOMIC_LOAD),
  OPC_RecordMemRef,
  OPC_RecordNode,
  OPC_RecordChild1,
  OPC_CheckChild1Type, MVT::i16,
  OPC_SwitchType , 10, MVT::i8,
   OPC_CheckPredicate, 13,
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo1, TARGET_VAL(AVR::AtomicLoad8), 0|OPFL_Chain|OPFL_MemRefs,
                 MVT::i8, 1, 1, 
  10, MVT::i16,
   OPC_CheckPredicate, 14,
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo1, TARGET_VAL(AVR::AtomicLoad16), 0|OPFL_Chain|OPFL_MemRefs,
                 MVT::i16, 1, 1, 
  0,
 34, TARGET_VAL(ISD::ATOMIC_STORE),
  OPC_RecordMemRef,
  OPC_RecordNode,
  OPC_RecordChild1,
  OPC_CheckChild1Type, MVT::i16,
  OPC_RecordChild2,
  OPC_Scope, 12, 
   OPC_CheckChild2Type, MVT::i8,
   OPC_CheckPredicate, 13,
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo0, TARGET_VAL(AVR::AtomicStore8), 0|OPFL_Chain|OPFL_MemRefs,
                 2, 1, 2, 
  12, 
   OPC_CheckChild2Type, MVT::i16,
   OPC_CheckPredicate, 14,
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo0, TARGET_VAL(AVR::AtomicStore16), 0|OPFL_Chain|OPFL_MemRefs,
                 2, 1, 2, 
  0, 
 34, TARGET_VAL(ISD::ATOMIC_LOAD_ADD),
  OPC_RecordMemRef,
  OPC_RecordNode,
  OPC_RecordChild1,
  OPC_CheckChild1Type, MVT::i16,
  OPC_RecordChild2,
  OPC_SwitchType , 11, MVT::i8,
   OPC_CheckPredicate, 13,
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo1, TARGET_VAL(AVR::AtomicLoadAdd8), 0|OPFL_Chain|OPFL_MemRefs,
                 MVT::i8, 2, 1, 2, 
  11, MVT::i16,
   OPC_CheckPredicate, 14,
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo1, TARGET_VAL(AVR::AtomicLoadAdd16), 0|OPFL_Chain|OPFL_MemRefs,
                 MVT::i16, 2, 1, 2, 
  0,
 34, TARGET_VAL(ISD::ATOMIC_LOAD_SUB),
  OPC_RecordMemRef,
  OPC_RecordNode,
  OPC_RecordChild1,
  OPC_CheckChild1Type, MVT::i16,
  OPC_RecordChild2,
  OPC_SwitchType , 11, MVT::i8,
   OPC_CheckPredicate, 13,
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo1, TARGET_VAL(AVR::AtomicLoadSub8), 0|OPFL_Chain|OPFL_MemRefs,
                 MVT::i8, 2, 1, 2, 
  11, MVT::i16,
   OPC_CheckPredicate, 14,
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo1, TARGET_VAL(AVR::AtomicLoadSub16), 0|OPFL_Chain|OPFL_MemRefs,
                 MVT::i16, 2, 1, 2, 
  0,
 34, TARGET_VAL(ISD::ATOMIC_LOAD_AND),
  OPC_RecordMemRef,
  OPC_RecordNode,
  OPC_RecordChild1,
  OPC_CheckChild1Type, MVT::i16,
  OPC_RecordChild2,
  OPC_SwitchType , 11, MVT::i8,
   OPC_CheckPredicate, 13,
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo1, TARGET_VAL(AVR::AtomicLoadAnd8), 0|OPFL_Chain|OPFL_MemRefs,
                 MVT::i8, 2, 1, 2, 
  11, MVT::i16,
   OPC_CheckPredicate, 14,
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo1, TARGET_VAL(AVR::AtomicLoadAnd16), 0|OPFL_Chain|OPFL_MemRefs,
                 MVT::i16, 2, 1, 2, 
  0,
 34, TARGET_VAL(ISD::ATOMIC_LOAD_OR),
  OPC_RecordMemRef,
  OPC_RecordNode,
  OPC_RecordChild1,
  OPC_CheckChild1Type, MVT::i16,
  OPC_RecordChild2,
  OPC_SwitchType , 11, MVT::i8,
   OPC_CheckPredicate, 13,
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo1, TARGET_VAL(AVR::AtomicLoadOr8), 0|OPFL_Chain|OPFL_MemRefs,
                 MVT::i8, 2, 1, 2, 
  11, MVT::i16,
   OPC_CheckPredicate, 14,
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo1, TARGET_VAL(AVR::AtomicLoadOr16), 0|OPFL_Chain|OPFL_MemRefs,
                 MVT::i16, 2, 1, 2, 
  0,
 34, TARGET_VAL(ISD::ATOMIC_LOAD_XOR),
  OPC_RecordMemRef,
  OPC_RecordNode,
  OPC_RecordChild1,
  OPC_CheckChild1Type, MVT::i16,
  OPC_RecordChild2,
  OPC_SwitchType , 11, MVT::i8,
   OPC_CheckPredicate, 13,
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo1, TARGET_VAL(AVR::AtomicLoadXor8), 0|OPFL_Chain|OPFL_MemRefs,
                 MVT::i8, 2, 1, 2, 
  11, MVT::i16,
   OPC_CheckPredicate, 14,
   OPC_EmitMergeInputChains1_0,
   OPC_MorphNodeTo1, TARGET_VAL(AVR::AtomicLoadXor16), 0|OPFL_Chain|OPFL_MemRefs,
                 MVT::i16, 2, 1, 2, 
  0,
 14, TARGET_VAL(ISD::BR),
  OPC_RecordNode,
  OPC_RecordChild1,
  OPC_MoveChild1,
  OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
  OPC_MoveParent,
  OPC_EmitMergeInputChains1_0,
  OPC_MorphNodeTo0, TARGET_VAL(AVR::RJMPk), 0|OPFL_Chain,
                1, 1, 
 8, TARGET_VAL(AVRISD::RET_FLAG),
  OPC_RecordNode,
  OPC_CaptureGlueInput,
  OPC_EmitMergeInputChains1_0,
  OPC_MorphNodeTo0, TARGET_VAL(AVR::RET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                0, 
 8, TARGET_VAL(AVRISD::RETI_FLAG),
  OPC_RecordNode,
  OPC_CaptureGlueInput,
  OPC_EmitMergeInputChains1_0,
  OPC_MorphNodeTo0, TARGET_VAL(AVR::RETI), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                0, 
 28, TARGET_VAL(AVRISD::CMPC),
  OPC_CaptureGlueInput,
  OPC_RecordChild0,
  OPC_Scope, 11, 
   OPC_CheckChild0Type, MVT::i8,
   OPC_RecordChild1,
   OPC_MorphNodeTo1, TARGET_VAL(AVR::CPCRdRr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                 MVT::i8, 2, 0, 1, 
  11, 
   OPC_CheckChild0Type, MVT::i16,
   OPC_RecordChild1,
   OPC_MorphNodeTo1, TARGET_VAL(AVR::CPCWRdRr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                 MVT::i8, 2, 0, 1, 
  0, 
 24, TARGET_VAL(AVRISD::LSL),
  OPC_RecordChild0,
  OPC_SwitchType , 8, MVT::i16,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::LSLWRd), 0,
                 MVT::i16, MVT::i8, 1, 0, 
  9, MVT::i8,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::ADDRdRr), 0,
                 MVT::i8, MVT::i8, 2, 0, 0, 
  0,
 11, TARGET_VAL(AVRISD::LSLHI),
  OPC_RecordChild0,
  OPC_CheckType, MVT::i16,
  OPC_MorphNodeTo2, TARGET_VAL(AVR::LSLWHiRd), 0,
                MVT::i16, MVT::i8, 1, 0, 
 23, TARGET_VAL(AVRISD::LSR),
  OPC_RecordChild0,
  OPC_SwitchType , 8, MVT::i8,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::LSRRd), 0,
                 MVT::i8, MVT::i8, 1, 0, 
  8, MVT::i16,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::LSRWRd), 0,
                 MVT::i16, MVT::i8, 1, 0, 
  0,
 11, TARGET_VAL(AVRISD::LSRLO),
  OPC_RecordChild0,
  OPC_CheckType, MVT::i16,
  OPC_MorphNodeTo2, TARGET_VAL(AVR::LSRWLoRd), 0,
                MVT::i16, MVT::i8, 1, 0, 
 23, TARGET_VAL(AVRISD::ASR),
  OPC_RecordChild0,
  OPC_SwitchType , 8, MVT::i8,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::ASRRd), 0,
                 MVT::i8, MVT::i8, 1, 0, 
  8, MVT::i16,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::ASRWRd), 0,
                 MVT::i16, MVT::i8, 1, 0, 
  0,
 11, TARGET_VAL(AVRISD::ASRLO),
  OPC_RecordChild0,
  OPC_CheckType, MVT::i16,
  OPC_MorphNodeTo2, TARGET_VAL(AVR::ASRWLoRd), 0,
                MVT::i16, MVT::i8, 1, 0, 
 23, TARGET_VAL(AVRISD::ROL),
  OPC_RecordChild0,
  OPC_SwitchType , 8, MVT::i8,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::ROLBRd), 0,
                 MVT::i8, MVT::i8, 1, 0, 
  8, MVT::i16,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::ROLWRd), 0,
                 MVT::i16, MVT::i8, 1, 0, 
  0,
 23, TARGET_VAL(AVRISD::ROR),
  OPC_RecordChild0,
  OPC_SwitchType , 8, MVT::i8,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::RORBRd), 0,
                 MVT::i8, MVT::i8, 1, 0, 
  8, MVT::i16,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::RORWRd), 0,
                 MVT::i16, MVT::i8, 1, 0, 
  0,
 10, TARGET_VAL(AVRISD::SWAP),
  OPC_RecordChild0,
  OPC_CheckType, MVT::i8,
  OPC_MorphNodeTo1, TARGET_VAL(AVR::SWAPRd), 0,
                MVT::i8, 1, 0, 
 9, TARGET_VAL(ISD::SIGN_EXTEND),
  OPC_RecordChild0,
  OPC_MorphNodeTo2, TARGET_VAL(AVR::SEXT), 0,
                MVT::i16, MVT::i8, 1, 0, 
 9, TARGET_VAL(ISD::ZERO_EXTEND),
  OPC_RecordChild0,
  OPC_MorphNodeTo2, TARGET_VAL(AVR::ZEXT), 0,
                MVT::i16, MVT::i8, 1, 0, 
 12, TARGET_VAL(AVRISD::TST),
  OPC_RecordChild0,
  OPC_CheckChild0Type, MVT::i8,
  OPC_MorphNodeTo2, TARGET_VAL(AVR::ANDRdRr), 0|OPFL_GlueOutput,
                MVT::i8, MVT::i8, 2, 0, 0, 
 19, TARGET_VAL(ISD::ANY_EXTEND),
  OPC_RecordChild0,
  OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                MVT::i16, 0, 
  OPC_EmitStringInteger, MVT::i32, AVR::sub_lo,
  OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                MVT::i16, 3, 1, 0, 2, 
 24, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
  OPC_RecordChild0,
  OPC_MoveChild1,
  OPC_CheckValueType, MVT::i8,
  OPC_MoveParent,
  OPC_EmitStringInteger, MVT::i32, AVR::sub_lo,
  OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                MVT::i8, 2, 0, 1, 
  OPC_MorphNodeTo2, TARGET_VAL(AVR::SEXT), 0,
                MVT::i16, MVT::i8, 1, 2, 
 28, TARGET_VAL(AVRISD::LSLLOOP),
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_CheckChild1Type, MVT::i8,
  OPC_SwitchType , 9, MVT::i8,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::Lsl8), 0,
                 MVT::i8, MVT::i8, 2, 0, 1, 
  9, MVT::i16,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::Lsl16), 0,
                 MVT::i16, MVT::i8, 2, 0, 1, 
  0,
 28, TARGET_VAL(AVRISD::LSRLOOP),
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_CheckChild1Type, MVT::i8,
  OPC_SwitchType , 9, MVT::i8,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::Lsr8), 0,
                 MVT::i8, MVT::i8, 2, 0, 1, 
  9, MVT::i16,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::Lsr16), 0,
                 MVT::i16, MVT::i8, 2, 0, 1, 
  0,
 28, TARGET_VAL(AVRISD::ROLLOOP),
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_CheckChild1Type, MVT::i8,
  OPC_SwitchType , 9, MVT::i8,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::Rol8), 0,
                 MVT::i8, MVT::i8, 2, 0, 1, 
  9, MVT::i16,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::Rol16), 0,
                 MVT::i16, MVT::i8, 2, 0, 1, 
  0,
 28, TARGET_VAL(AVRISD::RORLOOP),
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_CheckChild1Type, MVT::i8,
  OPC_SwitchType , 9, MVT::i8,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::Ror8), 0,
                 MVT::i8, MVT::i8, 2, 0, 1, 
  9, MVT::i16,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::Ror16), 0,
                 MVT::i16, MVT::i8, 2, 0, 1, 
  0,
 28, TARGET_VAL(AVRISD::ASRLOOP),
  OPC_RecordChild0,
  OPC_RecordChild1,
  OPC_CheckChild1Type, MVT::i8,
  OPC_SwitchType , 9, MVT::i8,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::Asr8), 0,
                 MVT::i8, MVT::i8, 2, 0, 1, 
  9, MVT::i16,
   OPC_MorphNodeTo2, TARGET_VAL(AVR::Asr16), 0,
                 MVT::i16, MVT::i8, 2, 0, 1, 
  0,
 0,
    0
  }; // Total Array size is 2840 bytes

  #undef TARGET_VAL
  SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
bool CheckPatternPredicate(unsigned PredNo) const override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
bool DAGISEL_CLASS_COLONCOLON CheckPatternPredicate(unsigned PredNo) const
#if DAGISEL_INLINE
  override
#endif
{
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (Subtarget->hasSRAM());
  case 1: return (Subtarget->hasADDSUBIW());
  case 2: return (Subtarget->hasJMPCALL());
  }
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
    // Predicate_lowioaddr8
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;

                           uint8_t offset = Subtarget->getIORegisterOffset();
                           uint64_t val = N->getZExtValue() - offset;
                           return val < 0x20;
                         
  }
  case 1: {
    // Predicate_unindexedload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 2: {
    // Predicate_load
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::NON_EXTLOAD) return false;
return true;

  }
  case 3: {
    // Predicate_iobitpos8
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
 return isPowerOf2_32(uint8_t(N->getZExtValue())); 
  }
  case 4: {
    // Predicate_unindexedstore
    SDNode *N = Node;
    (void)N;
if (cast<StoreSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 5: {
    // Predicate_store
    // Predicate_istore
    SDNode *N = Node;
    (void)N;
 if (cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 6: {
    // Predicate_iobitposn8
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
 return isPowerOf2_32(uint8_t(~N->getZExtValue())); 
  }
  case 7: {
    // Predicate_ioaddr8
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;

                        uint8_t offset = Subtarget->getIORegisterOffset();
                        uint64_t val = N->getZExtValue() - offset;
                        return val < 0x40;
                      
  }
  case 8: {
    // Predicate_post_store
    SDNode *N = Node;
    (void)N;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::POST_INC || AM == ISD::POST_DEC;

  }
  case 9: {
    // Predicate_pre_store
    SDNode *N = Node;
    (void)N;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 10: {
    // Predicate_ioaddr16
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;

                         uint8_t offset = Subtarget->getIORegisterOffset();
                         uint64_t val = N->getZExtValue() - offset;
                         return val < 0x3f;
                       
  }
  case 11: {
    // Predicate_uimm6
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
 return isUInt<6>(N->getZExtValue()); 
  }
  case 12: {
    // Predicate_imm0_63_neg
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;

                            int64_t val = -N->getSExtValue();
                            return val >= 0 && val < 64;
                          
  }
  case 13: {
    // Predicate_atomic_load_8
    // Predicate_atomic_store_8
    // Predicate_atomic_load_add_8
    // Predicate_atomic_load_sub_8
    // Predicate_atomic_load_and_8
    // Predicate_atomic_load_or_8
    // Predicate_atomic_load_xor_8
    SDNode *N = Node;
    (void)N;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i8) return false;
return true;

  }
  case 14: {
    // Predicate_atomic_load_16
    // Predicate_atomic_store_16
    // Predicate_atomic_load_add_16
    // Predicate_atomic_load_sub_16
    // Predicate_atomic_load_and_16
    // Predicate_atomic_load_or_16
    // Predicate_atomic_load_xor_16
    SDNode *N = Node;
    (void)N;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i16) return false;
return true;

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
    Result.resize(NextRes+2);
  return SelectAddr(Root, N, Result[NextRes+0].first, Result[NextRes+1].first);
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

                    uint8_t offset = Subtarget->getIORegisterOffset();
                    return CurDAG->getTargetConstant(
                        uint8_t(N->getZExtValue()) - offset, SDLoc(N), MVT::i8);
                  
  }
  case 1: {  
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

                    return CurDAG->getTargetConstant(
                        Log2_32(uint8_t(N->getZExtValue())), SDLoc(N), MVT::i8);
                  
  }
  case 2: {  
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

                                     return CurDAG->getTargetConstant(
                                         Log2_32(uint8_t(~N->getZExtValue())),
                                         SDLoc(N), MVT::i8);
                                   
  }
  case 3: {  
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

                    return CurDAG->getTargetConstant(-N->getAPIntValue(),
                                                     SDLoc(N), MVT::i16);
                  
  }
  case 4: {  
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

                                   return CurDAG->getTargetConstant(
                                       -N->getAPIntValue(), SDLoc(N), MVT::i8);
                                 
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
