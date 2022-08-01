/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Assembly Matcher Source Fragment                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_ASSEMBLER_HEADER
#undef GET_ASSEMBLER_HEADER
  // This should be included into the middle of the declaration of
  // your subclasses implementation of MCTargetAsmParser.
  FeatureBitset ComputeAvailableFeatures(const FeatureBitset &FB) const;
  void convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                       const OperandVector &Operands);
  void convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) override;
  unsigned MatchInstructionImpl(const OperandVector &Operands,
                                MCInst &Inst,
                                uint64_t &ErrorInfo,
                                FeatureBitset &MissingFeatures,
                                bool matchingInlineAsm,
                                unsigned VariantID = 0);
  unsigned MatchInstructionImpl(const OperandVector &Operands,
                                MCInst &Inst,
                                uint64_t &ErrorInfo,
                                bool matchingInlineAsm,
                                unsigned VariantID = 0) {
    FeatureBitset MissingFeatures;
    return MatchInstructionImpl(Operands, Inst, ErrorInfo, MissingFeatures,
                                matchingInlineAsm, VariantID);
  }

#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
  Feature_ModernAsBit = 0,
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_ModernAsBit: return "";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

static void applyMnemonicAliases(StringRef &Mnemonic, const FeatureBitset &Features, unsigned VariantID) {
  switch (VariantID) {
  case 0:
      switch (Mnemonic.size()) {
      default: break;
      case 5:	 // 1 string to match.
        if (memcmp(Mnemonic.data()+0, "cntlz", 5) != 0)
          break;
        Mnemonic = "cntlzw";	 // "cntlz"
        return;
      case 6:	 // 1 string to match.
        if (memcmp(Mnemonic.data()+0, "cntlz.", 6) != 0)
          break;
        Mnemonic = "cntlzw.";	 // "cntlz."
        return;
      }
    break;
  }
  switch (Mnemonic.size()) {
  default: break;
  case 5:	 // 1 string to match.
    if (memcmp(Mnemonic.data()+0, "cntlz", 5) != 0)
      break;
    Mnemonic = "cntlzw";	 // "cntlz"
    return;
  case 6:	 // 1 string to match.
    if (memcmp(Mnemonic.data()+0, "cntlz.", 6) != 0)
      break;
    Mnemonic = "cntlzw.";	 // "cntlz."
    return;
  }
}

enum {
  Tie0_1_1,
};

static const uint8_t TiedAsmOperandTable[][3] = {
  /* Tie0_1_1 */ { 0, 1, 1 },
};

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_addRegG8RCOperands,
  CVT_95_addTLSRegOperands,
  CVT_95_addRegGPRCOperands,
  CVT_95_addImmOperands,
  CVT_95_addRegGPRCNoR0Operands,
  CVT_95_addS16ImmOperands,
  CVT_95_addU16ImmOperands,
  CVT_95_addBranchTargetOperands,
  CVT_95_addRegCRBITRCOperands,
  CVT_imm_95_3,
  CVT_imm_95_2,
  CVT_imm_95_0,
  CVT_95_addRegVRRCOperands,
  CVT_imm_95_8,
  CVT_imm_95_10,
  CVT_imm_95_76,
  CVT_regCR0,
  CVT_95_addRegCRRCOperands,
  CVT_imm_95_79,
  CVT_imm_95_78,
  CVT_imm_95_4,
  CVT_imm_95_7,
  CVT_imm_95_6,
  CVT_imm_95_44,
  CVT_imm_95_47,
  CVT_imm_95_46,
  CVT_imm_95_36,
  CVT_imm_95_39,
  CVT_imm_95_38,
  CVT_imm_95_12,
  CVT_imm_95_15,
  CVT_imm_95_14,
  CVT_imm_95_68,
  CVT_imm_95_71,
  CVT_imm_95_70,
  CVT_imm_95_100,
  CVT_imm_95_103,
  CVT_imm_95_102,
  CVT_imm_95_108,
  CVT_imm_95_111,
  CVT_imm_95_110,
  CVT_imm_95_31,
  CVT_95_addRegGxRCNoR0Operands,
  CVT_95_addRegGxRCOperands,
  CVT_regR0,
  CVT_95_addRegSPERCOperands,
  CVT_95_addRegSPE4RCOperands,
  CVT_95_addRegF4RCOperands,
  CVT_95_addRegF8RCOperands,
  CVT_95_addRegG8RCNoX0Operands,
  CVT_regCR0EQ,
  CVT_regCR0GT,
  CVT_regCR0LT,
  CVT_regZERO8,
  CVT_regZERO,
  CVT_95_addRegG8pRCOperands,
  CVT_imm_95_1,
  CVT_95_addRegVFRCOperands,
  CVT_95_addRegVSFRCOperands,
  CVT_95_addRegVSSRCOperands,
  CVT_95_addRegVSRCOperands,
  CVT_95_addRegVSRpRCOperands,
  CVT_imm_95_29,
  CVT_imm_95_280,
  CVT_imm_95_128,
  CVT_imm_95_129,
  CVT_imm_95_130,
  CVT_imm_95_131,
  CVT_imm_95_132,
  CVT_imm_95_133,
  CVT_imm_95_134,
  CVT_imm_95_135,
  CVT_imm_95_28,
  CVT_imm_95_9,
  CVT_imm_95_19,
  CVT_imm_95_537,
  CVT_imm_95_539,
  CVT_imm_95_541,
  CVT_imm_95_543,
  CVT_imm_95_536,
  CVT_imm_95_538,
  CVT_imm_95_540,
  CVT_imm_95_542,
  CVT_imm_95_1018,
  CVT_imm_95_981,
  CVT_imm_95_22,
  CVT_imm_95_17,
  CVT_imm_95_18,
  CVT_imm_95_980,
  CVT_imm_95_529,
  CVT_imm_95_531,
  CVT_imm_95_533,
  CVT_imm_95_535,
  CVT_imm_95_528,
  CVT_imm_95_530,
  CVT_imm_95_532,
  CVT_imm_95_534,
  CVT_imm_95_1019,
  CVT_95_addCRBitMaskOperands,
  CVT_imm_95_48,
  CVT_imm_95_896,
  CVT_imm_95_287,
  CVT_imm_95_5,
  CVT_imm_95_25,
  CVT_imm_95_512,
  CVT_imm_95_272,
  CVT_imm_95_273,
  CVT_imm_95_274,
  CVT_imm_95_275,
  CVT_imm_95_260,
  CVT_imm_95_261,
  CVT_imm_95_262,
  CVT_imm_95_263,
  CVT_imm_95_26,
  CVT_imm_95_27,
  CVT_imm_95_990,
  CVT_imm_95_991,
  CVT_imm_95_268,
  CVT_imm_95_988,
  CVT_imm_95_989,
  CVT_imm_95_269,
  CVT_imm_95_986,
  CVT_imm_95_13,
  CVT_imm_95_255,
  CVT_imm_95_284,
  CVT_imm_95_285,
  CVT_regX0,
  CVT_95_addRegACCRCOperands,
  CVT_95_addRegVSRpEvenRCOperands,
  CVT_imm_95_20,
  CVT_imm_95_16,
  CVT_imm_95_24,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__RegG8RC1_0__RegG8RC1_1__TLSReg1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U2Imm1_3,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__S16Imm1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__S17Imm1_2,
  Convert__RegGPRC1_0__RegGPRC1_1,
  Convert__RegGPRC1_1__RegGPRC1_2,
  Convert__RegG8RC1_0__Imm1_1,
  Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3,
  Convert_NoOperands,
  Convert__DirectBr1_0,
  Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2,
  Convert__U5Imm1_1__ATBitsAsHint1_0__RegCRBITRC1_2__CondBr1_3,
  Convert__U5Imm1_0__imm_95_3__RegCRBITRC1_1__CondBr1_2,
  Convert__U5Imm1_0__imm_95_2__RegCRBITRC1_1__CondBr1_2,
  Convert__U5Imm1_0__RegCRBITRC1_1__imm_95_0,
  Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2,
  Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3__U1Imm1_4,
  Convert__RegVRRC1_1__RegVRRC1_2__U1Imm1_3,
  Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3,
  Convert__RegVRRC1_1__RegVRRC1_2,
  Convert__CondBr1_0,
  Convert__imm_95_0__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_0__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_8__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_8__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_2__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_2__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_10__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_10__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_76__regCR0__CondBr1_0,
  Convert__imm_95_76__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_79__regCR0__CondBr1_0,
  Convert__imm_95_79__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_78__regCR0__CondBr1_0,
  Convert__imm_95_78__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_76__regCR0,
  Convert__imm_95_76__RegCRRC1_0,
  Convert__imm_95_79__regCR0,
  Convert__imm_95_79__RegCRRC1_0,
  Convert__imm_95_78__regCR0,
  Convert__imm_95_78__RegCRRC1_0,
  Convert__imm_95_4__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_7__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_6__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_4__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_7__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_6__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_4__regCR0__CondBr1_0,
  Convert__imm_95_4__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_7__regCR0__CondBr1_0,
  Convert__imm_95_7__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_6__regCR0__CondBr1_0,
  Convert__imm_95_6__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_4__regCR0,
  Convert__imm_95_4__RegCRRC1_0,
  Convert__imm_95_7__regCR0,
  Convert__imm_95_7__RegCRRC1_0,
  Convert__imm_95_6__regCR0,
  Convert__imm_95_6__RegCRRC1_0,
  Convert__imm_95_44__regCR0__CondBr1_0,
  Convert__imm_95_44__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_47__regCR0__CondBr1_0,
  Convert__imm_95_47__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_46__regCR0__CondBr1_0,
  Convert__imm_95_46__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_44__regCR0,
  Convert__imm_95_44__RegCRRC1_0,
  Convert__imm_95_47__regCR0,
  Convert__imm_95_47__RegCRRC1_0,
  Convert__imm_95_46__regCR0,
  Convert__imm_95_46__RegCRRC1_0,
  Convert__DirectBr1_0__Imm1_1,
  Convert__imm_95_36__regCR0__CondBr1_0,
  Convert__imm_95_36__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_39__regCR0__CondBr1_0,
  Convert__imm_95_39__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_38__regCR0__CondBr1_0,
  Convert__imm_95_38__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_36__regCR0,
  Convert__imm_95_36__RegCRRC1_0,
  Convert__imm_95_39__regCR0,
  Convert__imm_95_39__RegCRRC1_0,
  Convert__imm_95_38__regCR0,
  Convert__imm_95_38__RegCRRC1_0,
  Convert__imm_95_12__regCR0__CondBr1_0,
  Convert__imm_95_12__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_15__regCR0__CondBr1_0,
  Convert__imm_95_15__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_14__regCR0__CondBr1_0,
  Convert__imm_95_14__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_12__regCR0,
  Convert__imm_95_12__RegCRRC1_0,
  Convert__imm_95_15__regCR0,
  Convert__imm_95_15__RegCRRC1_0,
  Convert__imm_95_14__regCR0,
  Convert__imm_95_14__RegCRRC1_0,
  Convert__imm_95_68__regCR0__CondBr1_0,
  Convert__imm_95_68__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_71__regCR0__CondBr1_0,
  Convert__imm_95_71__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_70__regCR0__CondBr1_0,
  Convert__imm_95_70__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_68__regCR0,
  Convert__imm_95_68__RegCRRC1_0,
  Convert__imm_95_71__regCR0,
  Convert__imm_95_71__RegCRRC1_0,
  Convert__imm_95_70__regCR0,
  Convert__imm_95_70__RegCRRC1_0,
  Convert__imm_95_100__regCR0__CondBr1_0,
  Convert__imm_95_100__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_103__regCR0__CondBr1_0,
  Convert__imm_95_103__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_102__regCR0__CondBr1_0,
  Convert__imm_95_102__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_100__regCR0,
  Convert__imm_95_100__RegCRRC1_0,
  Convert__imm_95_103__regCR0,
  Convert__imm_95_103__RegCRRC1_0,
  Convert__imm_95_102__regCR0,
  Convert__imm_95_102__RegCRRC1_0,
  Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2,
  Convert__imm_95_108__regCR0__CondBr1_0,
  Convert__imm_95_108__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_111__regCR0__CondBr1_0,
  Convert__imm_95_111__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_110__regCR0__CondBr1_0,
  Convert__imm_95_110__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_108__regCR0,
  Convert__imm_95_108__RegCRRC1_0,
  Convert__imm_95_111__regCR0,
  Convert__imm_95_111__RegCRRC1_0,
  Convert__imm_95_110__regCR0,
  Convert__imm_95_110__RegCRRC1_0,
  Convert__imm_95_12__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_15__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_14__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_12__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_15__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_14__RegCRBITRC1_0__imm_95_0,
  Convert__RegG8RC1_0__RegG8RC1_1__imm_95_0__U6Imm1_2,
  Convert__RegG8RC1_0__RegGPRC1_1__imm_95_0__U6Imm1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__imm_95_0__U6Imm1_3,
  Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3,
  Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegG8RC1_0__RegG8RC1_1__imm_95_0__U5Imm1_2__imm_95_31,
  Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0__U5Imm1_2__imm_95_31,
  Convert__RegG8RC1_1__RegG8RC1_2__imm_95_0__U5Imm1_3__imm_95_31,
  Convert__RegGPRC1_1__RegGPRC1_2__imm_95_0__U5Imm1_3__imm_95_31,
  Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3,
  Convert__RegCRRC1_0__RegGPRC1_2__RegGPRC1_3,
  Convert__RegCRRC1_0__RegG8RC1_2__RegG8RC1_3,
  Convert__regCR0__RegG8RC1_0__RegG8RC1_1,
  Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2,
  Convert__regCR0__RegG8RC1_0__S16Imm1_1,
  Convert__RegCRRC1_0__RegG8RC1_1__S16Imm1_2,
  Convert__RegCRRC1_0__RegGPRC1_2__S16Imm1_3,
  Convert__RegCRRC1_0__RegG8RC1_2__S16Imm1_3,
  Convert__regCR0__RegG8RC1_0__U16Imm1_1,
  Convert__RegCRRC1_0__RegG8RC1_1__U16Imm1_2,
  Convert__RegCRRC1_0__RegGPRC1_2__U16Imm1_3,
  Convert__RegCRRC1_0__RegG8RC1_2__U16Imm1_3,
  Convert__regCR0__RegGPRC1_0__RegGPRC1_1,
  Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2,
  Convert__regCR0__RegGPRC1_0__U16Imm1_1,
  Convert__RegCRRC1_0__RegGPRC1_1__U16Imm1_2,
  Convert__RegCRRC1_0__U1Imm1_1__RegGPRC1_2__RegGPRC1_3,
  Convert__regCR0__RegGPRC1_0__S16Imm1_1,
  Convert__RegCRRC1_0__RegGPRC1_1__S16Imm1_2,
  Convert__RegG8RC1_0__RegG8RC1_1,
  Convert__RegG8RC1_1__RegG8RC1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0,
  Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2,
  Convert__RegCRBITRC1_0__RegCRBITRC1_0__RegCRBITRC1_0,
  Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_1,
  Convert__RegG8RC1_0__U2Imm1_1,
  Convert__RegGxRCNoR01_0__RegGxRC1_1,
  Convert__U3Imm1_2__RegGxRCNoR01_0__RegGxRC1_1,
  Convert__U5Imm1_2__RegGxRCNoR01_0__RegGxRC1_1,
  Convert__RegGxRCNoR01_0__RegGxRC1_1__U5Imm1_2,
  Convert__RegGxRCNoR01_1__RegGxRC1_2__U5Imm1_0,
  Convert__regR0__regR0,
  Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3,
  Convert__U5Imm1_0,
  Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1,
  Convert__RegSPERC1_0__RegSPERC1_1,
  Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2,
  Convert__RegSPERC1_0__RegSPE4RC1_1,
  Convert__RegSPERC1_0__RegGPRC1_1,
  Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2,
  Convert__RegGPRC1_0__RegSPERC1_1,
  Convert__RegSPE4RC1_0__RegSPE4RC1_1,
  Convert__RegSPE4RC1_0__RegSPE4RC1_1__RegSPE4RC1_2,
  Convert__RegSPE4RC1_0__RegSPERC1_1,
  Convert__RegSPE4RC1_0__RegGPRC1_1,
  Convert__RegCRRC1_0__RegSPE4RC1_1__RegSPE4RC1_2,
  Convert__RegGPRC1_0__RegSPE4RC1_1,
  Convert__RegSPERC1_0__RegSPERC1_2__U5Imm1_1,
  Convert__RegSPERC1_0__DispSPE81_1__RegGxRCNoR01_2,
  Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegSPERC1_0__DispSPE21_1__RegGxRCNoR01_2,
  Convert__RegSPERC1_0__DispSPE41_1__RegGxRCNoR01_2,
  Convert__RegSPERC1_0__RegGPRC1_1__RegGPRC1_2,
  Convert__RegSPERC1_0__RegSPERC1_1__U5Imm1_2,
  Convert__RegSPERC1_1__RegSPERC1_2__RegSPERC1_3__imm_95_0,
  Convert__RegSPERC1_0__S5Imm1_1,
  Convert__RegSPERC1_0__U5Imm1_1__RegSPERC1_2,
  Convert__RegF4RC1_0__RegF4RC1_1,
  Convert__RegF4RC1_1__RegF4RC1_2,
  Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2,
  Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3,
  Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2,
  Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3,
  Convert__RegF8RC1_0__RegF8RC1_1,
  Convert__RegF8RC1_1__RegF8RC1_2,
  Convert__RegF4RC1_0__RegF8RC1_1,
  Convert__RegF4RC1_1__RegF8RC1_2,
  Convert__RegCRRC1_0__RegF4RC1_1__RegF4RC1_2,
  Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3,
  Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4,
  Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3,
  Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4,
  Convert__RegF4RC1_0__RegF8RC1_1__RegF4RC1_2__RegF4RC1_3,
  Convert__RegF4RC1_1__RegF8RC1_2__RegF4RC1_3__RegF4RC1_4,
  Convert__RegCRRC1_0__RegF8RC1_1__RegF8RC1_2,
  Convert__RegCRRC1_0__RegF8RC1_1,
  Convert__RegGPRC1_0__DispRIHash1_1__RegGxRCNoR01_2,
  Convert__imm_95_0,
  Convert__U4Imm1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__U4Imm1_1__RegGxRCNoR01_2__RegGxRC1_3,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__RegCRBITRC1_3,
  Convert__RegG8RC1_0__RegG8RCNoX01_1__RegG8RC1_2__regCR0EQ,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__regCR0EQ,
  Convert__RegG8RC1_0__RegG8RCNoX01_1__RegG8RC1_2__regCR0GT,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__regCR0GT,
  Convert__RegG8RC1_0__RegG8RCNoX01_1__RegG8RC1_2__regCR0LT,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__regCR0LT,
  Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegGPRC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegGPRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_0__RegGxRCNoR01_1__TLSReg1_2,
  Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2,
  Convert__RegG8RC1_0__imm_95_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__RegG8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF8RC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF4RC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF4RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_0__regZERO8__S16Imm1_1,
  Convert__RegGPRC1_0__S16Imm1_1,
  Convert__RegGPRC1_0__regZERO__S16Imm1_1,
  Convert__RegG8RC1_0__regZERO8__S17Imm1_1,
  Convert__RegGPRC1_0__S17Imm1_1,
  Convert__RegGPRC1_0__regZERO__S17Imm1_1,
  Convert__RegG8RC1_0__imm_95_0,
  Convert__RegG8pRC1_0__DispRIX161_1__RegGxRCNoR01_2,
  Convert__RegG8pRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__imm_95_1,
  Convert__RegSPE4RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegSPE4RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegVFRC1_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegVSSRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegVSRC1_0__DispRIX161_1__RegGxRCNoR01_2,
  Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegVSRC1_0__U5Imm1_1,
  Convert__RegVSRC1_0__Imm1_1__RegG8RC1_2,
  Convert__RegVSRpRC1_0__DispRIX161_1__RegGxRCNoR01_2,
  Convert__RegVSRpRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3,
  Convert__RegCRRC1_0__RegCRRC1_1,
  Convert__RegCRRC1_0,
  Convert__RegG8RC1_0__imm_95_29,
  Convert__RegGPRC1_0__imm_95_29,
  Convert__RegG8RC1_0__imm_95_280,
  Convert__RegGPRC1_0__imm_95_280,
  Convert__RegGPRC1_0__U10Imm1_1__imm_95_0,
  Convert__RegGPRC1_0__imm_95_128,
  Convert__RegGPRC1_0__imm_95_129,
  Convert__RegGPRC1_0__imm_95_130,
  Convert__RegGPRC1_0__imm_95_131,
  Convert__RegGPRC1_0__imm_95_132,
  Convert__RegGPRC1_0__imm_95_133,
  Convert__RegGPRC1_0__imm_95_134,
  Convert__RegGPRC1_0__imm_95_135,
  Convert__RegG8RC1_0__imm_95_28,
  Convert__RegGPRC1_0__imm_95_28,
  Convert__RegGPRC1_0,
  Convert__RegG8RC1_0__imm_95_9,
  Convert__RegGPRC1_0__imm_95_9,
  Convert__RegG8RC1_0__imm_95_19,
  Convert__RegGPRC1_0__imm_95_19,
  Convert__RegGPRC1_0__imm_95_537,
  Convert__RegGPRC1_0__imm_95_539,
  Convert__RegGPRC1_0__imm_95_541,
  Convert__RegGPRC1_0__imm_95_543,
  Convert__RegGPRC1_0__imm_95_536,
  Convert__RegGPRC1_0__imm_95_538,
  Convert__RegGPRC1_0__imm_95_540,
  Convert__RegGPRC1_0__imm_95_542,
  Convert__RegGPRC1_0__imm_95_1018,
  Convert__RegGPRC1_0__Imm1_1,
  Convert__RegGPRC1_0__imm_95_981,
  Convert__RegG8RC1_0__imm_95_22,
  Convert__RegGPRC1_0__imm_95_22,
  Convert__RegG8RC1_0__imm_95_17,
  Convert__RegGPRC1_0__imm_95_17,
  Convert__RegG8RC1_0__imm_95_18,
  Convert__RegGPRC1_0__imm_95_18,
  Convert__RegGPRC1_0__imm_95_980,
  Convert__RegG8RC1_0__RegF8RC1_1,
  Convert__RegGPRC1_0__RegF8RC1_1,
  Convert__RegF8RC1_0,
  Convert__RegF8RC1_1,
  Convert__RegF8RC1_0__U3Imm1_1,
  Convert__RegF8RC1_0__U2Imm1_1,
  Convert__RegGPRC1_0__imm_95_529,
  Convert__RegGPRC1_0__imm_95_531,
  Convert__RegGPRC1_0__imm_95_533,
  Convert__RegGPRC1_0__imm_95_535,
  Convert__RegGPRC1_0__imm_95_528,
  Convert__RegGPRC1_0__imm_95_530,
  Convert__RegGPRC1_0__imm_95_532,
  Convert__RegGPRC1_0__imm_95_534,
  Convert__RegGPRC1_0__imm_95_1019,
  Convert__RegG8RC1_0__imm_95_8,
  Convert__RegGPRC1_0__imm_95_8,
  Convert__RegGPRC1_0__CRBitMask1_1,
  Convert__RegGPRC1_0__imm_95_48,
  Convert__RegGPRC1_0__imm_95_896,
  Convert__RegG8RC1_0__imm_95_287,
  Convert__RegGPRC1_0__imm_95_287,
  Convert__RegG8RC1_0__imm_95_5,
  Convert__RegGPRC1_0__imm_95_5,
  Convert__RegG8RC1_0__imm_95_4,
  Convert__RegGPRC1_0__imm_95_4,
  Convert__RegG8RC1_0__imm_95_25,
  Convert__RegGPRC1_0__imm_95_25,
  Convert__RegG8RC1_0__imm_95_512,
  Convert__RegGPRC1_0__imm_95_512,
  Convert__RegG8RC1_0__imm_95_272,
  Convert__RegG8RC1_0__imm_95_273,
  Convert__RegG8RC1_0__imm_95_274,
  Convert__RegG8RC1_0__imm_95_275,
  Convert__RegGPRC1_0__imm_95_272,
  Convert__RegGPRC1_0__imm_95_273,
  Convert__RegGPRC1_0__imm_95_274,
  Convert__RegGPRC1_0__imm_95_275,
  Convert__RegGPRC1_0__imm_95_260,
  Convert__RegGPRC1_0__imm_95_261,
  Convert__RegGPRC1_0__imm_95_262,
  Convert__RegGPRC1_0__imm_95_263,
  Convert__RegGPRC1_0__U4Imm1_1,
  Convert__RegG8RC1_0__imm_95_26,
  Convert__RegGPRC1_0__imm_95_26,
  Convert__RegG8RC1_0__imm_95_27,
  Convert__RegGPRC1_0__imm_95_27,
  Convert__RegGPRC1_0__imm_95_990,
  Convert__RegGPRC1_0__imm_95_991,
  Convert__RegGPRC1_0__imm_95_268,
  Convert__RegGPRC1_0__imm_95_988,
  Convert__RegGPRC1_0__imm_95_989,
  Convert__RegGPRC1_0__imm_95_269,
  Convert__RegGPRC1_0__imm_95_986,
  Convert__RegG8RC1_0__imm_95_13,
  Convert__RegGPRC1_0__imm_95_13,
  Convert__RegG8RC1_0__imm_95_3,
  Convert__RegGPRC1_0__imm_95_3,
  Convert__RegG8RC1_0__RegVRRC1_1,
  Convert__RegGPRC1_0__RegVRRC1_1,
  Convert__RegVRRC1_0,
  Convert__RegG8RC1_0__RegVSFRC1_1,
  Convert__RegG8RC1_0__RegVSRC1_1,
  Convert__RegGPRC1_0__RegVSFRC1_1,
  Convert__RegG8RC1_0__imm_95_1,
  Convert__RegGPRC1_0__imm_95_1,
  Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_1,
  Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_2,
  Convert__imm_95_29__RegG8RC1_0,
  Convert__imm_95_29__RegGPRC1_0,
  Convert__imm_95_280__RegG8RC1_0,
  Convert__imm_95_280__RegGPRC1_0,
  Convert__imm_95_28__RegG8RC1_0,
  Convert__imm_95_28__RegGPRC1_0,
  Convert__imm_95_255__RegG8RC1_0,
  Convert__imm_95_255__RegGPRC1_0,
  Convert__Imm1_0__RegGPRC1_1,
  Convert__imm_95_9__RegG8RC1_0,
  Convert__imm_95_9__RegGPRC1_0,
  Convert__imm_95_19__RegG8RC1_0,
  Convert__imm_95_19__RegGPRC1_0,
  Convert__imm_95_537__RegGPRC1_1,
  Convert__imm_95_539__RegGPRC1_1,
  Convert__imm_95_541__RegGPRC1_1,
  Convert__imm_95_543__RegGPRC1_1,
  Convert__imm_95_536__RegGPRC1_1,
  Convert__imm_95_538__RegGPRC1_1,
  Convert__imm_95_540__RegGPRC1_1,
  Convert__imm_95_542__RegGPRC1_1,
  Convert__imm_95_1018__RegGPRC1_0,
  Convert__RegGPRC1_1__Imm1_0,
  Convert__imm_95_981__RegGPRC1_0,
  Convert__imm_95_22__RegG8RC1_0,
  Convert__imm_95_22__RegGPRC1_0,
  Convert__imm_95_17__RegG8RC1_0,
  Convert__imm_95_17__RegGPRC1_0,
  Convert__imm_95_18__RegG8RC1_0,
  Convert__imm_95_18__RegGPRC1_0,
  Convert__imm_95_980__RegGPRC1_0,
  Convert__RegF8RC1_0__RegG8RC1_1,
  Convert__RegF8RC1_0__RegGPRC1_1,
  Convert__Imm1_0__RegF8RC1_1__imm_95_0__imm_95_0,
  Convert__Imm1_1__RegF8RC1_2__imm_95_0__imm_95_0,
  Convert__Imm1_0__RegF8RC1_1__U1Imm1_2__Imm1_3,
  Convert__Imm1_1__RegF8RC1_2__U1Imm1_3__Imm1_4,
  Convert__U3Imm1_0__U4Imm1_1__imm_95_0,
  Convert__U3Imm1_1__U4Imm1_2__imm_95_0,
  Convert__U3Imm1_0__U4Imm1_1__Imm1_2,
  Convert__U3Imm1_1__U4Imm1_2__U1Imm1_3,
  Convert__imm_95_529__RegGPRC1_1,
  Convert__imm_95_531__RegGPRC1_1,
  Convert__imm_95_533__RegGPRC1_1,
  Convert__imm_95_535__RegGPRC1_1,
  Convert__imm_95_528__RegGPRC1_1,
  Convert__imm_95_530__RegGPRC1_1,
  Convert__imm_95_532__RegGPRC1_1,
  Convert__imm_95_534__RegGPRC1_1,
  Convert__imm_95_1019__RegGPRC1_0,
  Convert__imm_95_8__RegG8RC1_0,
  Convert__imm_95_8__RegGPRC1_0,
  Convert__RegGPRC1_0__imm_95_0,
  Convert__RegGPRC1_0__U1Imm1_1,
  Convert__CRBitMask1_0__RegGPRC1_1,
  Convert__imm_95_48__RegGPRC1_0,
  Convert__imm_95_896__RegGPRC1_0,
  Convert__imm_95_25__RegG8RC1_0,
  Convert__imm_95_25__RegGPRC1_0,
  Convert__imm_95_512__RegG8RC1_0,
  Convert__imm_95_512__RegGPRC1_0,
  Convert__RegGPRC1_1,
  Convert__imm_95_272__RegG8RC1_1,
  Convert__imm_95_272__RegGPRC1_1,
  Convert__imm_95_273__RegG8RC1_1,
  Convert__imm_95_273__RegGPRC1_1,
  Convert__imm_95_274__RegG8RC1_1,
  Convert__imm_95_274__RegGPRC1_1,
  Convert__imm_95_275__RegG8RC1_1,
  Convert__imm_95_275__RegGPRC1_1,
  Convert__imm_95_260__RegGPRC1_1,
  Convert__imm_95_261__RegGPRC1_1,
  Convert__imm_95_262__RegGPRC1_1,
  Convert__imm_95_263__RegGPRC1_1,
  Convert__imm_95_272__RegG8RC1_0,
  Convert__imm_95_272__RegGPRC1_0,
  Convert__imm_95_273__RegG8RC1_0,
  Convert__imm_95_273__RegGPRC1_0,
  Convert__imm_95_274__RegG8RC1_0,
  Convert__imm_95_274__RegGPRC1_0,
  Convert__imm_95_275__RegG8RC1_0,
  Convert__imm_95_275__RegGPRC1_0,
  Convert__imm_95_260__RegGPRC1_0,
  Convert__imm_95_261__RegGPRC1_0,
  Convert__imm_95_262__RegGPRC1_0,
  Convert__imm_95_263__RegGPRC1_0,
  Convert__RegGPRC1_1__U4Imm1_0,
  Convert__imm_95_26__RegG8RC1_0,
  Convert__imm_95_26__RegGPRC1_0,
  Convert__imm_95_27__RegG8RC1_0,
  Convert__imm_95_27__RegGPRC1_0,
  Convert__imm_95_990__RegGPRC1_0,
  Convert__imm_95_991__RegGPRC1_0,
  Convert__imm_95_988__RegGPRC1_0,
  Convert__imm_95_284__RegG8RC1_0,
  Convert__imm_95_284__RegGPRC1_0,
  Convert__imm_95_989__RegGPRC1_0,
  Convert__imm_95_285__RegG8RC1_0,
  Convert__imm_95_285__RegGPRC1_0,
  Convert__imm_95_986__RegGPRC1_0,
  Convert__imm_95_13__RegG8RC1_0,
  Convert__imm_95_13__RegGPRC1_0,
  Convert__imm_95_3__RegG8RC1_0,
  Convert__imm_95_3__RegGPRC1_0,
  Convert__RegVRRC1_0__RegG8RC1_1,
  Convert__RegVRRC1_0__RegGPRC1_1,
  Convert__RegVRRC1_0__U16Imm1_1,
  Convert__RegVSFRC1_0__RegG8RC1_1,
  Convert__RegVSRC1_0__RegG8RCNoX01_1__RegG8RC1_2,
  Convert__RegVSFRC1_0__RegGPRC1_1,
  Convert__RegVSRC1_0__RegGPRC1_1,
  Convert__imm_95_1__RegG8RC1_0,
  Convert__imm_95_1__RegGPRC1_0,
  Convert__regR0__regR0__imm_95_0,
  Convert__regX0__regX0__imm_95_0,
  Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2,
  Convert__RegGPRC1_0__ImmZero1_1__S34Imm1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__S34Imm1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__imm_95_1,
  Convert__RegGPRC1_1__RegGPRC1_2__U1Imm1_3,
  Convert__RegGPRC1_0__DispRI341_1__ImmZero1_2,
  Convert__RegGPRC1_0__DispRI341_1__RegGxRCNoR01_2,
  Convert__RegG8RC1_0__DispRI341_1__ImmZero1_2,
  Convert__RegG8RC1_0__DispRI341_1__RegGxRCNoR01_2,
  Convert__RegF8RC1_0__DispRI341_1__ImmZero1_2,
  Convert__RegF8RC1_0__DispRI341_1__RegGxRCNoR01_2,
  Convert__RegF4RC1_0__DispRI341_1__ImmZero1_2,
  Convert__RegF4RC1_0__DispRI341_1__RegGxRCNoR01_2,
  Convert__RegGPRC1_0__S34Imm1_1,
  Convert__RegVFRC1_0__DispRI341_1__ImmZero1_2,
  Convert__RegVFRC1_0__DispRI341_1__RegGxRCNoR01_2,
  Convert__RegVSRC1_0__DispRI341_1__ImmZero1_2,
  Convert__RegVSRC1_0__DispRI341_1__RegGxRCNoR01_2,
  Convert__RegVSRpRC1_0__DispRI341_1__ImmZero1_2,
  Convert__RegVSRpRC1_0__DispRI341_1__RegGxRCNoR01_2,
  Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5,
  Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5,
  Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4,
  Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4,
  Convert__RegACCRC1_0__RegVSRpEvenRC1_1__RegVSRC1_2__U4Imm1_3__U2Imm1_4,
  Convert__RegACCRC1_0__Tie0_1_1__RegVSRpEvenRC1_1__RegVSRC1_2__U4Imm1_3__U2Imm1_4,
  Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U8Imm1_5,
  Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U8Imm1_5,
  Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U4Imm1_5,
  Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U4Imm1_5,
  Convert__imm_95_2,
  Convert__U1Imm1_0,
  Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3,
  Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4,
  Convert__RegG8RC1_0__Tie0_1_1__RegG8RC1_1__U6Imm1_2__U6Imm1_3,
  Convert__RegG8RC1_1__Tie0_1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4,
  Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__Imm1_3,
  Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__Imm1_4,
  Convert__RegGPRC1_0__Tie0_1_1__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_1__Tie0_1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__U5Imm1_4__U5Imm1_5,
  Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__imm_95_0,
  Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__imm_95_0,
  Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__imm_95_0,
  Convert__RegG8RC1_0__RegGPRC1_1__U6Imm1_2__imm_95_0,
  Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__imm_95_0,
  Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2__imm_95_0__imm_95_31,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__imm_95_0__imm_95_31,
  Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3__imm_95_0__imm_95_31,
  Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__imm_95_0__imm_95_31,
  Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__imm_95_0__imm_95_31,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__imm_95_0__imm_95_31,
  Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__imm_95_0__imm_95_31,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__imm_95_0__imm_95_31,
  Convert__Imm1_0,
  Convert__RegGPRC1_0__RegCRRC1_1,
  Convert__RegGPRC1_0__RegCRBITRC1_1,
  Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3,
  Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3,
  Convert__imm_95_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__imm_95_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_1__RegGxRCNoR01_2__RegGxRC1_3,
  Convert__imm_95_0__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__imm_95_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__imm_95_0__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__imm_95_0__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__imm_95_0__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__imm_95_0__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8pRC1_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__RegG8pRC1_1__RegGxRCNoR01_2__RegGxRC1_3,
  Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_1,
  Convert__RegGPRC1_0__RegGPRC1_2__RegGPRC1_1,
  Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_2,
  Convert__RegGPRC1_1__RegGPRC1_3__RegGPRC1_2,
  Convert__RegG8RC1_0__S16Imm1_1,
  Convert__U2Imm1_0,
  Convert__U5Imm1_1__RegGPRC1_2__RegGPRC1_3,
  Convert__U5Imm1_1__RegGPRC1_2__U5Imm1_3,
  Convert__U1Imm1_1,
  Convert__U5Imm1_0__RegG8RC1_1__RegG8RC1_2,
  Convert__imm_95_4__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_4__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_12__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_12__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_8__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_8__RegG8RC1_0__S16Imm1_1,
  Convert__U5Imm1_0__RegG8RC1_1__S16Imm1_2,
  Convert__imm_95_20__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_20__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_5__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_5__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_1__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_1__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_6__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_6__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_2__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_2__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_16__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_16__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_24__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_24__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_31__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_31__RegG8RC1_0__S16Imm1_1,
  Convert__regR0__RegGPRC1_0,
  Convert__RegGPRC1_1__RegGPRC1_0,
  Convert__RegGPRC1_0__RegGPRC1_1__Imm1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__imm_95_1,
  Convert__imm_95_31__regR0__regR0,
  Convert__U5Imm1_0__RegGPRC1_1__RegGPRC1_2,
  Convert__imm_95_4__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_4__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_12__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_12__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_8__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_8__RegGPRC1_0__S16Imm1_1,
  Convert__U5Imm1_0__RegGPRC1_1__S16Imm1_2,
  Convert__imm_95_20__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_20__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_5__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_5__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_1__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_1__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_6__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_6__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_2__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_2__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_16__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_16__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_24__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_24__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_31__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_31__RegGPRC1_0__S16Imm1_1,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3,
  Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1,
  Convert__RegVRRC1_0__RegVRRC1_1__RegGPRC1_2,
  Convert__RegVRRC1_0__RegVRRC1_1,
  Convert__RegCRRC1_0__RegVRRC1_1__RegVRRC1_2,
  Convert__RegG8RC1_0__RegVRRC1_1__U1Imm1_2,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegGPRC1_3,
  Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1,
  Convert__RegG8RC1_0__RegG8RC1_1__RegVRRC1_2,
  Convert__RegG8RC1_0__RegVRRC1_1__U3Imm1_2,
  Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegGPRC1_2,
  Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegVRRC1_2,
  Convert__RegVRRC1_0__Tie0_1_1__U4Imm1_2__RegG8RC1_1,
  Convert__RegVRRC1_0__Tie0_1_1__RegG8RC1_1__RegG8RC1_2,
  Convert__RegVRRC1_0__Tie0_1_1__U4Imm1_2__RegVRRC1_1,
  Convert__RegVRRC1_0__Tie0_1_1__U4Imm1_2__RegGPRC1_1,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_1,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__Tie0_1_1,
  Convert__RegVRRC1_0__RegVRRC1_1__U1Imm1_2__U4Imm1_3,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U3Imm1_3,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U4Imm1_3,
  Convert__RegVRRC1_0__S5Imm1_1,
  Convert__RegVSFRC1_0__RegVSFRC1_1,
  Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2,
  Convert__RegVSSRC1_0__RegVSSRC1_1__RegVSSRC1_2,
  Convert__RegVSRC1_0__RegVSFRC1_1__RegVSFRC1_2,
  Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2,
  Convert__RegVRRC1_0__RegVFRC1_1,
  Convert__RegVSRC1_0__RegVSSRC1_1,
  Convert__RegVFRC1_0__RegVRRC1_1,
  Convert__RegVSSRC1_0__RegVSRC1_1,
  Convert__RegVSSRC1_0__RegVSFRC1_1,
  Convert__RegVSRC1_0__RegG8RC1_1__RegG8RC1_2,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVSFRC1_2,
  Convert__RegVSFRC1_0__Tie0_1_1__RegVSFRC1_1__RegVSFRC1_2,
  Convert__RegVSSRC1_0__Tie0_1_1__RegVSSRC1_1__RegVSSRC1_2,
  Convert__RegVRRC1_0__Tie0_1_1__RegVRRC1_1__RegVRRC1_2,
  Convert__RegVSSRC1_0__RegVSSRC1_1,
  Convert__RegVRRC1_1__U1Imm1_0__RegVRRC1_2__U2Imm1_3,
  Convert__RegCRRC1_0__RegVSFRC1_1,
  Convert__RegCRRC1_0__U7Imm1_2__RegVSFRC1_1,
  Convert__RegCRRC1_0__U7Imm1_2__RegVRRC1_1,
  Convert__RegVSRC1_0__RegVSRC1_1,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2,
  Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2,
  Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2,
  Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3,
  Convert__RegACCRC1_0__RegVSRpEvenRC1_1__RegVSRC1_2,
  Convert__RegACCRC1_0__Tie0_1_1__RegVSRpEvenRC1_1__RegVSRC1_2,
  Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1,
  Convert__RegCRRC1_0__RegVSRC1_1__RegVSRC1_2,
  Convert__RegCRRC1_0__RegVSRC1_1,
  Convert__RegVSRC1_0__U7Imm1_2__RegVSRC1_1,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3__U8Imm1_4,
  Convert__RegVSFRC1_0__RegVSRC1_1__U4Imm1_2,
  Convert__RegVSRC1_0__RegVRRC1_1__S5Imm1_2,
  Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__U4Imm1_2,
  Convert__RegACCRC1_0__Tie0_1_1,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_95_0,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_95_3,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__U2Imm1_3,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3__U3Imm1_4,
  Convert__RegACCRC1_0,
  Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_0,
  Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_3,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_0,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_3,
  Convert__RegVSRC1_0__Tie0_1_1__U1Imm1_1__Imm1_2,
  Convert__RegVSRC1_0__U8Imm1_1,
  Convert__RegVSRC1_0__Imm1_1,
  Convert__RegVSRC1_0__RegVSRC1_1__U2Imm1_2,
  Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_2,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_2,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][15] = {
  // Convert__RegG8RC1_0__RegG8RC1_1__TLSReg1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addTLSRegOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U2Imm1_3
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__S16Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addS16ImmOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__S17Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__Imm1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addU16ImmOperands, 4, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__DirectBr1_0
  { CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addBranchTargetOperands, 3, CVT_Done },
  // Convert__U5Imm1_1__ATBitsAsHint1_0__RegCRBITRC1_2__CondBr1_3
  { CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 1, CVT_95_addRegCRBITRCOperands, 3, CVT_95_addBranchTargetOperands, 4, CVT_Done },
  // Convert__U5Imm1_0__imm_95_3__RegCRBITRC1_1__CondBr1_2
  { CVT_95_addImmOperands, 1, CVT_imm_95_3, 0, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addBranchTargetOperands, 3, CVT_Done },
  // Convert__U5Imm1_0__imm_95_2__RegCRBITRC1_1__CondBr1_2
  { CVT_95_addImmOperands, 1, CVT_imm_95_2, 0, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addBranchTargetOperands, 3, CVT_Done },
  // Convert__U5Imm1_0__RegCRBITRC1_1__imm_95_0
  { CVT_95_addImmOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3__U1Imm1_4
  { CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addRegVRRCOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegVRRC1_1__RegVRRC1_2__U1Imm1_3
  { CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3
  { CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addRegVRRCOperands, 4, CVT_Done },
  // Convert__RegVRRC1_1__RegVRRC1_2
  { CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_Done },
  // Convert__CondBr1_0
  { CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_0__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_0, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_0__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_0, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_8__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_8, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_8__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_8, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_2__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_2, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_2__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_2, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_10__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_10, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_10__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_10, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_76__regCR0__CondBr1_0
  { CVT_imm_95_76, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_76__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_76, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_79__regCR0__CondBr1_0
  { CVT_imm_95_79, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_79__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_79, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_78__regCR0__CondBr1_0
  { CVT_imm_95_78, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_78__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_78, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_76__regCR0
  { CVT_imm_95_76, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_76__RegCRRC1_0
  { CVT_imm_95_76, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_79__regCR0
  { CVT_imm_95_79, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_79__RegCRRC1_0
  { CVT_imm_95_79, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_78__regCR0
  { CVT_imm_95_78, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_78__RegCRRC1_0
  { CVT_imm_95_78, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_4__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_4, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_7__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_7, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_6__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_6, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_4__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_4, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_7__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_7, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_6__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_6, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_4__regCR0__CondBr1_0
  { CVT_imm_95_4, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_4__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_4, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_7__regCR0__CondBr1_0
  { CVT_imm_95_7, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_7__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_7, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_6__regCR0__CondBr1_0
  { CVT_imm_95_6, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_6__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_6, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_4__regCR0
  { CVT_imm_95_4, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_4__RegCRRC1_0
  { CVT_imm_95_4, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_7__regCR0
  { CVT_imm_95_7, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_7__RegCRRC1_0
  { CVT_imm_95_7, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_6__regCR0
  { CVT_imm_95_6, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_6__RegCRRC1_0
  { CVT_imm_95_6, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_44__regCR0__CondBr1_0
  { CVT_imm_95_44, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_44__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_44, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_47__regCR0__CondBr1_0
  { CVT_imm_95_47, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_47__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_47, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_46__regCR0__CondBr1_0
  { CVT_imm_95_46, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_46__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_46, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_44__regCR0
  { CVT_imm_95_44, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_44__RegCRRC1_0
  { CVT_imm_95_44, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_47__regCR0
  { CVT_imm_95_47, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_47__RegCRRC1_0
  { CVT_imm_95_47, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_46__regCR0
  { CVT_imm_95_46, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_46__RegCRRC1_0
  { CVT_imm_95_46, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__DirectBr1_0__Imm1_1
  { CVT_95_addBranchTargetOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_95_36__regCR0__CondBr1_0
  { CVT_imm_95_36, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_36__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_36, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_39__regCR0__CondBr1_0
  { CVT_imm_95_39, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_39__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_39, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_38__regCR0__CondBr1_0
  { CVT_imm_95_38, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_38__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_38, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_36__regCR0
  { CVT_imm_95_36, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_36__RegCRRC1_0
  { CVT_imm_95_36, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_39__regCR0
  { CVT_imm_95_39, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_39__RegCRRC1_0
  { CVT_imm_95_39, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_38__regCR0
  { CVT_imm_95_38, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_38__RegCRRC1_0
  { CVT_imm_95_38, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_12__regCR0__CondBr1_0
  { CVT_imm_95_12, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_12__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_12, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_15__regCR0__CondBr1_0
  { CVT_imm_95_15, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_15__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_15, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_14__regCR0__CondBr1_0
  { CVT_imm_95_14, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_14__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_14, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_12__regCR0
  { CVT_imm_95_12, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_12__RegCRRC1_0
  { CVT_imm_95_12, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_15__regCR0
  { CVT_imm_95_15, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_15__RegCRRC1_0
  { CVT_imm_95_15, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_14__regCR0
  { CVT_imm_95_14, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_14__RegCRRC1_0
  { CVT_imm_95_14, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_68__regCR0__CondBr1_0
  { CVT_imm_95_68, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_68__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_68, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_71__regCR0__CondBr1_0
  { CVT_imm_95_71, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_71__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_71, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_70__regCR0__CondBr1_0
  { CVT_imm_95_70, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_70__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_70, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_68__regCR0
  { CVT_imm_95_68, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_68__RegCRRC1_0
  { CVT_imm_95_68, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_71__regCR0
  { CVT_imm_95_71, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_71__RegCRRC1_0
  { CVT_imm_95_71, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_70__regCR0
  { CVT_imm_95_70, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_70__RegCRRC1_0
  { CVT_imm_95_70, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_100__regCR0__CondBr1_0
  { CVT_imm_95_100, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_100__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_100, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_103__regCR0__CondBr1_0
  { CVT_imm_95_103, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_103__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_103, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_102__regCR0__CondBr1_0
  { CVT_imm_95_102, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_102__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_102, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_100__regCR0
  { CVT_imm_95_100, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_100__RegCRRC1_0
  { CVT_imm_95_100, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_103__regCR0
  { CVT_imm_95_103, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_103__RegCRRC1_0
  { CVT_imm_95_103, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_102__regCR0
  { CVT_imm_95_102, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_102__RegCRRC1_0
  { CVT_imm_95_102, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__imm_95_108__regCR0__CondBr1_0
  { CVT_imm_95_108, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_108__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_108, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_111__regCR0__CondBr1_0
  { CVT_imm_95_111, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_111__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_111, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_110__regCR0__CondBr1_0
  { CVT_imm_95_110, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_110__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_110, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_108__regCR0
  { CVT_imm_95_108, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_108__RegCRRC1_0
  { CVT_imm_95_108, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_111__regCR0
  { CVT_imm_95_111, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_111__RegCRRC1_0
  { CVT_imm_95_111, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_110__regCR0
  { CVT_imm_95_110, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_110__RegCRRC1_0
  { CVT_imm_95_110, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_12__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_12, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_15__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_15, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_14__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_14, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_12__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_12, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_15__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_15, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_14__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_14, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__imm_95_0__U6Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_imm_95_0, 0, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegGPRC1_1__imm_95_0__U6Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_imm_95_0, 0, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__imm_95_0__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_imm_95_0, 0, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__imm_95_0__U5Imm1_2__imm_95_31
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_imm_95_0, 0, CVT_95_addImmOperands, 3, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0__U5Imm1_2__imm_95_31
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_imm_95_0, 0, CVT_95_addImmOperands, 3, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__imm_95_0__U5Imm1_3__imm_95_31
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_imm_95_0, 0, CVT_95_addImmOperands, 4, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__imm_95_0__U5Imm1_3__imm_95_31
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_imm_95_0, 0, CVT_95_addImmOperands, 4, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_2__RegGPRC1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_2__RegG8RC1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 4, CVT_Done },
  // Convert__regCR0__RegG8RC1_0__RegG8RC1_1
  { CVT_regCR0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__regCR0__RegG8RC1_0__S16Imm1_1
  { CVT_regCR0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_1__S16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_2__S16Imm1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 3, CVT_95_addS16ImmOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_2__S16Imm1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addS16ImmOperands, 4, CVT_Done },
  // Convert__regCR0__RegG8RC1_0__U16Imm1_1
  { CVT_regCR0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addU16ImmOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_1__U16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addU16ImmOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_2__U16Imm1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 3, CVT_95_addU16ImmOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_2__U16Imm1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addU16ImmOperands, 4, CVT_Done },
  // Convert__regCR0__RegGPRC1_0__RegGPRC1_1
  { CVT_regCR0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__regCR0__RegGPRC1_0__U16Imm1_1
  { CVT_regCR0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addU16ImmOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_1__U16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addU16ImmOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__U1Imm1_1__RegGPRC1_2__RegGPRC1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__regCR0__RegGPRC1_0__S16Imm1_1
  { CVT_regCR0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_1__S16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2
  { CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addRegCRBITRCOperands, 3, CVT_Done },
  // Convert__RegCRBITRC1_0__RegCRBITRC1_0__RegCRBITRC1_0
  { CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 1, CVT_Done },
  // Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_1
  { CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addRegCRBITRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_0__U2Imm1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegGxRCNoR01_0__RegGxRC1_1
  { CVT_95_addRegGxRCNoR0Operands, 1, CVT_95_addRegGxRCOperands, 2, CVT_Done },
  // Convert__U3Imm1_2__RegGxRCNoR01_0__RegGxRC1_1
  { CVT_95_addImmOperands, 3, CVT_95_addRegGxRCNoR0Operands, 1, CVT_95_addRegGxRCOperands, 2, CVT_Done },
  // Convert__U5Imm1_2__RegGxRCNoR01_0__RegGxRC1_1
  { CVT_95_addImmOperands, 3, CVT_95_addRegGxRCNoR0Operands, 1, CVT_95_addRegGxRCOperands, 2, CVT_Done },
  // Convert__RegGxRCNoR01_0__RegGxRC1_1__U5Imm1_2
  { CVT_95_addRegGxRCNoR0Operands, 1, CVT_95_addRegGxRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGxRCNoR01_1__RegGxRC1_2__U5Imm1_0
  { CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__regR0__regR0
  { CVT_regR0, 0, CVT_regR0, 0, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 4, CVT_Done },
  // Convert__U5Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1
  { CVT_95_addImmOperands, 3, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegSPERC1_0__RegSPERC1_1
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addRegSPERCOperands, 2, CVT_Done },
  // Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addRegSPERCOperands, 2, CVT_95_addRegSPERCOperands, 3, CVT_Done },
  // Convert__RegSPERC1_0__RegSPE4RC1_1
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addRegSPE4RCOperands, 2, CVT_Done },
  // Convert__RegSPERC1_0__RegGPRC1_1
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegSPERCOperands, 2, CVT_95_addRegSPERCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegSPERC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegSPERCOperands, 2, CVT_Done },
  // Convert__RegSPE4RC1_0__RegSPE4RC1_1
  { CVT_95_addRegSPE4RCOperands, 1, CVT_95_addRegSPE4RCOperands, 2, CVT_Done },
  // Convert__RegSPE4RC1_0__RegSPE4RC1_1__RegSPE4RC1_2
  { CVT_95_addRegSPE4RCOperands, 1, CVT_95_addRegSPE4RCOperands, 2, CVT_95_addRegSPE4RCOperands, 3, CVT_Done },
  // Convert__RegSPE4RC1_0__RegSPERC1_1
  { CVT_95_addRegSPE4RCOperands, 1, CVT_95_addRegSPERCOperands, 2, CVT_Done },
  // Convert__RegSPE4RC1_0__RegGPRC1_1
  { CVT_95_addRegSPE4RCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegSPE4RC1_1__RegSPE4RC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegSPE4RCOperands, 2, CVT_95_addRegSPE4RCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegSPE4RC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegSPE4RCOperands, 2, CVT_Done },
  // Convert__RegSPERC1_0__RegSPERC1_2__U5Imm1_1
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addRegSPERCOperands, 3, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegSPERC1_0__DispSPE81_1__RegGxRCNoR01_2
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegSPERC1_0__DispSPE21_1__RegGxRCNoR01_2
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegSPERC1_0__DispSPE41_1__RegGxRCNoR01_2
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegSPERC1_0__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegSPERC1_0__RegSPERC1_1__U5Imm1_2
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addRegSPERCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegSPERC1_1__RegSPERC1_2__RegSPERC1_3__imm_95_0
  { CVT_95_addRegSPERCOperands, 2, CVT_95_addRegSPERCOperands, 3, CVT_95_addRegSPERCOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegSPERC1_0__S5Imm1_1
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegSPERC1_0__U5Imm1_1__RegSPERC1_2
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegSPERCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__RegF4RC1_1
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_Done },
  // Convert__RegF4RC1_1__RegF4RC1_2
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3
  { CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF8RCOperands, 4, CVT_Done },
  // Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_Done },
  // Convert__RegF8RC1_0__RegF8RC1_1
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegF8RC1_1__RegF8RC1_2
  { CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__RegF8RC1_1
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegF4RC1_1__RegF8RC1_2
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegF4RC1_1__RegF4RC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF8RCOperands, 4, CVT_Done },
  // Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4
  { CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF8RCOperands, 4, CVT_95_addRegF8RCOperands, 5, CVT_Done },
  // Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_Done },
  // Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_95_addRegF4RCOperands, 5, CVT_Done },
  // Convert__RegF4RC1_0__RegF8RC1_1__RegF4RC1_2__RegF4RC1_3
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_Done },
  // Convert__RegF4RC1_1__RegF8RC1_2__RegF4RC1_3__RegF4RC1_4
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_95_addRegF4RCOperands, 5, CVT_Done },
  // Convert__RegCRRC1_0__RegF8RC1_1__RegF8RC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegF8RC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__DispRIHash1_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_95_0
  { CVT_imm_95_0, 0, CVT_Done },
  // Convert__U4Imm1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__U4Imm1_1__RegGxRCNoR01_2__RegGxRC1_3
  { CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_95_addRegGxRCOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__RegCRBITRC1_3
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegCRBITRCOperands, 4, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RCNoX01_1__RegG8RC1_2__regCR0EQ
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCNoX0Operands, 2, CVT_95_addRegG8RCOperands, 3, CVT_regCR0EQ, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__regCR0EQ
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addRegGPRCOperands, 3, CVT_regCR0EQ, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RCNoX01_1__RegG8RC1_2__regCR0GT
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCNoX0Operands, 2, CVT_95_addRegG8RCOperands, 3, CVT_regCR0GT, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__regCR0GT
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addRegGPRCOperands, 3, CVT_regCR0GT, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RCNoX01_1__RegG8RC1_2__regCR0LT
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCNoX0Operands, 2, CVT_95_addRegG8RCOperands, 3, CVT_regCR0LT, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__regCR0LT
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addRegGPRCOperands, 3, CVT_regCR0LT, 0, CVT_Done },
  // Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_0, 0, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegGxRCNoR01_1__TLSReg1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addTLSRegOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_0, 0, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF8RCOperands, 1, CVT_imm_95_0, 0, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF8RCOperands, 1, CVT_imm_95_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF4RC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF4RCOperands, 1, CVT_imm_95_0, 0, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF4RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF4RCOperands, 1, CVT_imm_95_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__regZERO8__S16Imm1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_regZERO8, 0, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__S16Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__regZERO__S16Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_regZERO, 0, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegG8RC1_0__regZERO8__S17Imm1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_regZERO8, 0, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__S17Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__regZERO__S17Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_regZERO, 0, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_0
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegG8pRC1_0__DispRIX161_1__RegGxRCNoR01_2
  { CVT_95_addRegG8pRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegG8pRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegG8pRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__imm_95_1
  { CVT_imm_95_1, 0, CVT_Done },
  // Convert__RegSPE4RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegSPE4RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegSPE4RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegSPE4RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegVFRC1_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_95_addRegVFRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegVSFRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegVSSRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegVSSRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__DispRIX161_1__RegGxRCNoR01_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__U5Imm1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__Imm1_1__RegG8RC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegVSRpRC1_0__DispRIX161_1__RegGxRCNoR01_2
  { CVT_95_addRegVSRpRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegVSRpRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegVSRpRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegCRRC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegCRRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0
  { CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_29
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_29, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_29
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_29, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_280
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_280, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_280
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_280, 0, CVT_Done },
  // Convert__RegGPRC1_0__U10Imm1_1__imm_95_0
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_128
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_128, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_129
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_129, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_130
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_130, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_131
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_131, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_132
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_132, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_133
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_133, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_134
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_134, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_135
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_135, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_28
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_28, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_28
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_28, 0, CVT_Done },
  // Convert__RegGPRC1_0
  { CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_9
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_9, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_9
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_9, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_19
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_19, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_19
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_19, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_537
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_537, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_539
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_539, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_541
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_541, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_543
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_543, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_536
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_536, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_538
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_538, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_540
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_540, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_542
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_542, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_1018
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_1018, 0, CVT_Done },
  // Convert__RegGPRC1_0__Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_981
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_981, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_22
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_22, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_22
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_22, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_17
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_17, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_17
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_17, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_18
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_18, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_18
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_18, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_980
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_980, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegF8RC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__RegF8RC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegF8RC1_0
  { CVT_95_addRegF8RCOperands, 1, CVT_Done },
  // Convert__RegF8RC1_1
  { CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegF8RC1_0__U3Imm1_1
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegF8RC1_0__U2Imm1_1
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_529
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_529, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_531
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_531, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_533
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_533, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_535
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_535, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_528
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_528, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_530
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_530, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_532
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_532, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_534
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_534, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_1019
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_1019, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_8
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_8, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_8
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_8, 0, CVT_Done },
  // Convert__RegGPRC1_0__CRBitMask1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addCRBitMaskOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_48
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_48, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_896
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_896, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_287
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_287, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_287
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_287, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_5
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_5, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_5
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_5, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_4
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_4, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_4
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_4, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_25
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_25, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_25
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_25, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_512
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_512, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_512
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_512, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_272
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_272, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_273
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_273, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_274
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_274, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_275
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_275, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_272
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_272, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_273
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_273, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_274
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_274, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_275
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_275, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_260
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_260, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_261
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_261, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_262
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_262, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_263
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_263, 0, CVT_Done },
  // Convert__RegGPRC1_0__U4Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_26
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_26, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_26
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_26, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_27
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_27, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_27
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_27, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_990
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_990, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_991
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_991, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_268
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_268, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_988
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_988, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_989
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_989, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_269
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_269, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_986
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_986, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_13
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_13, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_13
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_13, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_3
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_3, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_3
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_3, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegVRRC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__RegVRRC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0
  { CVT_95_addRegVRRCOperands, 1, CVT_Done },
  // Convert__RegG8RC1_0__RegVSFRC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_0__RegVSRC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__RegVSFRC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_1
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_1, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_1
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_1, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_2
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__imm_95_29__RegG8RC1_0
  { CVT_imm_95_29, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_29__RegGPRC1_0
  { CVT_imm_95_29, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_280__RegG8RC1_0
  { CVT_imm_95_280, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_280__RegGPRC1_0
  { CVT_imm_95_280, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_28__RegG8RC1_0
  { CVT_imm_95_28, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_28__RegGPRC1_0
  { CVT_imm_95_28, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_255__RegG8RC1_0
  { CVT_imm_95_255, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_255__RegGPRC1_0
  { CVT_imm_95_255, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__Imm1_0__RegGPRC1_1
  { CVT_95_addImmOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_9__RegG8RC1_0
  { CVT_imm_95_9, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_9__RegGPRC1_0
  { CVT_imm_95_9, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_19__RegG8RC1_0
  { CVT_imm_95_19, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_19__RegGPRC1_0
  { CVT_imm_95_19, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_537__RegGPRC1_1
  { CVT_imm_95_537, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_539__RegGPRC1_1
  { CVT_imm_95_539, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_541__RegGPRC1_1
  { CVT_imm_95_541, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_543__RegGPRC1_1
  { CVT_imm_95_543, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_536__RegGPRC1_1
  { CVT_imm_95_536, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_538__RegGPRC1_1
  { CVT_imm_95_538, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_540__RegGPRC1_1
  { CVT_imm_95_540, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_542__RegGPRC1_1
  { CVT_imm_95_542, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_1018__RegGPRC1_0
  { CVT_imm_95_1018, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_1__Imm1_0
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__imm_95_981__RegGPRC1_0
  { CVT_imm_95_981, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_22__RegG8RC1_0
  { CVT_imm_95_22, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_22__RegGPRC1_0
  { CVT_imm_95_22, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_17__RegG8RC1_0
  { CVT_imm_95_17, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_17__RegGPRC1_0
  { CVT_imm_95_17, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_18__RegG8RC1_0
  { CVT_imm_95_18, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_18__RegGPRC1_0
  { CVT_imm_95_18, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_980__RegGPRC1_0
  { CVT_imm_95_980, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegF8RC1_0__RegG8RC1_1
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegF8RC1_0__RegGPRC1_1
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__Imm1_0__RegF8RC1_1__imm_95_0__imm_95_0
  { CVT_95_addImmOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_imm_95_0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_1__RegF8RC1_2__imm_95_0__imm_95_0
  { CVT_95_addImmOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_imm_95_0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_0__RegF8RC1_1__U1Imm1_2__Imm1_3
  { CVT_95_addImmOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Imm1_1__RegF8RC1_2__U1Imm1_3__Imm1_4
  { CVT_95_addImmOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__U3Imm1_0__U4Imm1_1__imm_95_0
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__U3Imm1_1__U4Imm1_2__imm_95_0
  { CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__U3Imm1_0__U4Imm1_1__Imm1_2
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__U3Imm1_1__U4Imm1_2__U1Imm1_3
  { CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__imm_95_529__RegGPRC1_1
  { CVT_imm_95_529, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_531__RegGPRC1_1
  { CVT_imm_95_531, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_533__RegGPRC1_1
  { CVT_imm_95_533, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_535__RegGPRC1_1
  { CVT_imm_95_535, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_528__RegGPRC1_1
  { CVT_imm_95_528, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_530__RegGPRC1_1
  { CVT_imm_95_530, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_532__RegGPRC1_1
  { CVT_imm_95_532, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_534__RegGPRC1_1
  { CVT_imm_95_534, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_1019__RegGPRC1_0
  { CVT_imm_95_1019, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_8__RegG8RC1_0
  { CVT_imm_95_8, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_8__RegGPRC1_0
  { CVT_imm_95_8, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_0
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegGPRC1_0__U1Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__CRBitMask1_0__RegGPRC1_1
  { CVT_95_addCRBitMaskOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_48__RegGPRC1_0
  { CVT_imm_95_48, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_896__RegGPRC1_0
  { CVT_imm_95_896, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_25__RegG8RC1_0
  { CVT_imm_95_25, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_25__RegGPRC1_0
  { CVT_imm_95_25, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_512__RegG8RC1_0
  { CVT_imm_95_512, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_512__RegGPRC1_0
  { CVT_imm_95_512, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_1
  { CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_272__RegG8RC1_1
  { CVT_imm_95_272, 0, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_272__RegGPRC1_1
  { CVT_imm_95_272, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_273__RegG8RC1_1
  { CVT_imm_95_273, 0, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_273__RegGPRC1_1
  { CVT_imm_95_273, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_274__RegG8RC1_1
  { CVT_imm_95_274, 0, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_274__RegGPRC1_1
  { CVT_imm_95_274, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_275__RegG8RC1_1
  { CVT_imm_95_275, 0, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_275__RegGPRC1_1
  { CVT_imm_95_275, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_260__RegGPRC1_1
  { CVT_imm_95_260, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_261__RegGPRC1_1
  { CVT_imm_95_261, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_262__RegGPRC1_1
  { CVT_imm_95_262, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_263__RegGPRC1_1
  { CVT_imm_95_263, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_272__RegG8RC1_0
  { CVT_imm_95_272, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_272__RegGPRC1_0
  { CVT_imm_95_272, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_273__RegG8RC1_0
  { CVT_imm_95_273, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_273__RegGPRC1_0
  { CVT_imm_95_273, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_274__RegG8RC1_0
  { CVT_imm_95_274, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_274__RegGPRC1_0
  { CVT_imm_95_274, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_275__RegG8RC1_0
  { CVT_imm_95_275, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_275__RegGPRC1_0
  { CVT_imm_95_275, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_260__RegGPRC1_0
  { CVT_imm_95_260, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_261__RegGPRC1_0
  { CVT_imm_95_261, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_262__RegGPRC1_0
  { CVT_imm_95_262, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_263__RegGPRC1_0
  { CVT_imm_95_263, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_1__U4Imm1_0
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__imm_95_26__RegG8RC1_0
  { CVT_imm_95_26, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_26__RegGPRC1_0
  { CVT_imm_95_26, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_27__RegG8RC1_0
  { CVT_imm_95_27, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_27__RegGPRC1_0
  { CVT_imm_95_27, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_990__RegGPRC1_0
  { CVT_imm_95_990, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_991__RegGPRC1_0
  { CVT_imm_95_991, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_988__RegGPRC1_0
  { CVT_imm_95_988, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_284__RegG8RC1_0
  { CVT_imm_95_284, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_284__RegGPRC1_0
  { CVT_imm_95_284, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_989__RegGPRC1_0
  { CVT_imm_95_989, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_285__RegG8RC1_0
  { CVT_imm_95_285, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_285__RegGPRC1_0
  { CVT_imm_95_285, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_986__RegGPRC1_0
  { CVT_imm_95_986, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_13__RegG8RC1_0
  { CVT_imm_95_13, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_13__RegGPRC1_0
  { CVT_imm_95_13, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_3__RegG8RC1_0
  { CVT_imm_95_3, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_3__RegGPRC1_0
  { CVT_imm_95_3, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegVRRC1_0__RegG8RC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__RegGPRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__U16Imm1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addU16ImmOperands, 2, CVT_Done },
  // Convert__RegVSFRC1_0__RegG8RC1_1
  { CVT_95_addRegVSFRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegG8RCNoX01_1__RegG8RC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegG8RCNoX0Operands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegVSFRC1_0__RegGPRC1_1
  { CVT_95_addRegVSFRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegGPRC1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_1__RegG8RC1_0
  { CVT_imm_95_1, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_1__RegGPRC1_0
  { CVT_imm_95_1, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__regR0__regR0__imm_95_0
  { CVT_regR0, 0, CVT_regR0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regX0__regX0__imm_95_0
  { CVT_regX0, 0, CVT_regX0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addU16ImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__ImmZero1_1__S34Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__S34Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__imm_95_1
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_imm_95_1, 0, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U1Imm1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__DispRI341_1__ImmZero1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__DispRI341_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegG8RC1_0__DispRI341_1__ImmZero1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__DispRI341_1__RegGxRCNoR01_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF8RC1_0__DispRI341_1__ImmZero1_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__DispRI341_1__RegGxRCNoR01_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF4RC1_0__DispRI341_1__ImmZero1_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__DispRI341_1__RegGxRCNoR01_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegGPRC1_0__S34Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegVFRC1_0__DispRI341_1__ImmZero1_2
  { CVT_95_addRegVFRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVFRC1_0__DispRI341_1__RegGxRCNoR01_2
  { CVT_95_addRegVFRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegVSRC1_0__DispRI341_1__ImmZero1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__DispRI341_1__RegGxRCNoR01_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegVSRpRC1_0__DispRI341_1__ImmZero1_2
  { CVT_95_addRegVSRpRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVSRpRC1_0__DispRI341_1__RegGxRCNoR01_2
  { CVT_95_addRegVSRpRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5
  { CVT_95_addRegACCRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5
  { CVT_95_addRegACCRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4
  { CVT_95_addRegACCRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4
  { CVT_95_addRegACCRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegACCRC1_0__RegVSRpEvenRC1_1__RegVSRC1_2__U4Imm1_3__U2Imm1_4
  { CVT_95_addRegACCRCOperands, 1, CVT_95_addRegVSRpEvenRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegACCRC1_0__Tie0_1_1__RegVSRpEvenRC1_1__RegVSRC1_2__U4Imm1_3__U2Imm1_4
  { CVT_95_addRegACCRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegVSRpEvenRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U8Imm1_5
  { CVT_95_addRegACCRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U8Imm1_5
  { CVT_95_addRegACCRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U4Imm1_5
  { CVT_95_addRegACCRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U4Imm1_5
  { CVT_95_addRegACCRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__imm_95_2
  { CVT_imm_95_2, 0, CVT_Done },
  // Convert__U1Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegG8RC1_0__Tie0_1_1__RegG8RC1_1__U6Imm1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_1__Tie0_1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4
  { CVT_95_addRegG8RCOperands, 2, CVT_Tied, Tie0_1_1, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__Imm1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__Imm1_4
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_0__Tie0_1_1__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_1__Tie0_1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5
  { CVT_95_addRegGPRCOperands, 2, CVT_Tied, Tie0_1_1, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__U5Imm1_4__U5Imm1_5
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__imm_95_0
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__imm_95_0
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__imm_95_0
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegGPRC1_1__U6Imm1_2__imm_95_0
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__imm_95_0
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2__imm_95_0__imm_95_31
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_imm_95_0, 0, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__imm_95_0__imm_95_31
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_imm_95_0, 0, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3__imm_95_0__imm_95_31
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 4, CVT_imm_95_0, 0, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__imm_95_0__imm_95_31
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_imm_95_0, 0, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__imm_95_0__imm_95_31
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__imm_95_0__imm_95_31
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__imm_95_0__imm_95_31
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__imm_95_0__imm_95_31
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_imm_95_31, 0, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0__RegCRRC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegCRRCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__RegCRBITRC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_95_addRegGxRCOperands, 4, CVT_Done },
  // Convert__imm_95_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_imm_95_0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_95_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_95_0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegGxRCNoR01_2__RegGxRC1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_95_addRegGxRCOperands, 4, CVT_Done },
  // Convert__imm_95_0__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_imm_95_0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_95_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_95_0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__imm_95_0__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_imm_95_0, 0, CVT_95_addRegF8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_95_0__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_95_0, 0, CVT_95_addRegF8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__imm_95_0__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_imm_95_0, 0, CVT_95_addRegF4RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_95_0__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_95_0, 0, CVT_95_addRegF4RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8pRC1_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_95_addRegG8pRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegG8pRC1_1__RegGxRCNoR01_2__RegGxRC1_3
  { CVT_95_addRegG8pRCOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_95_addRegGxRCOperands, 4, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_2__RegGPRC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 4, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_3__RegGPRC1_2
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 4, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__S16Imm1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__U2Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__U5Imm1_1__RegGPRC1_2__RegGPRC1_3
  { CVT_95_addImmOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__U5Imm1_1__RegGPRC1_2__U5Imm1_3
  { CVT_95_addImmOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__U1Imm1_1
  { CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__U5Imm1_0__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__imm_95_4__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_4, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_4__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_4, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_12__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_12, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_12__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_12, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_8__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_8, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_8__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_8, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__U5Imm1_0__RegG8RC1_1__S16Imm1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__imm_95_20__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_20, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_20__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_20, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_5__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_5, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_5__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_5, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_1__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_1, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_1__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_1, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_6__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_6, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_6__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_6, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_2__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_2, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_2__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_2, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_16__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_16, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_16__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_16, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_24__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_24, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_24__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_24, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_31__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_31, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_31__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_31, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__regR0__RegGPRC1_0
  { CVT_regR0, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_0
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__imm_95_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_imm_95_1, 0, CVT_Done },
  // Convert__imm_95_31__regR0__regR0
  { CVT_imm_95_31, 0, CVT_regR0, 0, CVT_regR0, 0, CVT_Done },
  // Convert__U5Imm1_0__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__imm_95_4__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_4, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_4__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_4, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_12__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_12, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_12__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_12, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_8__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_8, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_8__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_8, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__U5Imm1_0__RegGPRC1_1__S16Imm1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__imm_95_20__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_20, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_20__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_20, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_5__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_5, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_5__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_5, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_1__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_1, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_1__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_1, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_6__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_6, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_6__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_6, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_2__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_2, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_2__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_2, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_16__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_16, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_16__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_16, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_24__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_24, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_24__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_24, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_31__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_31, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_31__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_31, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addRegVRRCOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addImmOperands, 3, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegGPRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegVRRC1_1__RegVRRC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegVRRC1_1__U1Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegGPRC1_3
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addImmOperands, 3, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegVRRC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegVRRC1_1__U3Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegVRRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__Tie0_1_1__U4Imm1_2__RegG8RC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 3, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__Tie0_1_1__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__Tie0_1_1__U4Imm1_2__RegVRRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 3, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__Tie0_1_1__U4Imm1_2__RegGPRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 3, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__Tie0_1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_Tied, Tie0_1_1, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__U1Imm1_2__U4Imm1_3
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U3Imm1_3
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U4Imm1_3
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__S5Imm1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegVSFRC1_0__RegVSFRC1_1
  { CVT_95_addRegVSFRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_Done },
  // Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2
  { CVT_95_addRegVSFRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_95_addRegVSFRCOperands, 3, CVT_Done },
  // Convert__RegVSSRC1_0__RegVSSRC1_1__RegVSSRC1_2
  { CVT_95_addRegVSSRCOperands, 1, CVT_95_addRegVSSRCOperands, 2, CVT_95_addRegVSSRCOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__RegVSFRC1_1__RegVSFRC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_95_addRegVSFRCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_95_addRegVSFRCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__RegVFRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVFRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegVSSRC1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSSRCOperands, 2, CVT_Done },
  // Convert__RegVFRC1_0__RegVRRC1_1
  { CVT_95_addRegVFRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegVSSRC1_0__RegVSRC1_1
  { CVT_95_addRegVSSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_Done },
  // Convert__RegVSSRC1_0__RegVSFRC1_1
  { CVT_95_addRegVSSRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVSFRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVSFRCOperands, 3, CVT_Done },
  // Convert__RegVSFRC1_0__Tie0_1_1__RegVSFRC1_1__RegVSFRC1_2
  { CVT_95_addRegVSFRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegVSFRCOperands, 2, CVT_95_addRegVSFRCOperands, 3, CVT_Done },
  // Convert__RegVSSRC1_0__Tie0_1_1__RegVSSRC1_1__RegVSSRC1_2
  { CVT_95_addRegVSSRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegVSSRCOperands, 2, CVT_95_addRegVSSRCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__Tie0_1_1__RegVRRC1_1__RegVRRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_Done },
  // Convert__RegVSSRC1_0__RegVSSRC1_1
  { CVT_95_addRegVSSRCOperands, 1, CVT_95_addRegVSSRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_1__U1Imm1_0__RegVRRC1_2__U2Imm1_3
  { CVT_95_addRegVRRCOperands, 2, CVT_95_addImmOperands, 1, CVT_95_addRegVRRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegVSFRC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__U7Imm1_2__RegVSFRC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addImmOperands, 3, CVT_95_addRegVSFRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__U7Imm1_2__RegVRRC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addImmOperands, 3, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_Done },
  // Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2
  { CVT_95_addRegACCRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_Done },
  // Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2
  { CVT_95_addRegACCRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_Done },
  // Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3
  { CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addRegVSRCOperands, 4, CVT_Done },
  // Convert__RegACCRC1_0__RegVSRpEvenRC1_1__RegVSRC1_2
  { CVT_95_addRegACCRCOperands, 1, CVT_95_addRegVSRpEvenRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_Done },
  // Convert__RegACCRC1_0__Tie0_1_1__RegVSRpEvenRC1_1__RegVSRC1_2
  { CVT_95_addRegACCRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegVSRpEvenRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegVSRC1_1__RegVSRC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegVSRC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__U7Imm1_2__RegVSRC1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addImmOperands, 3, CVT_95_addRegVSRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addRegVSRCOperands, 4, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3__U8Imm1_4
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addRegVSRCOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegVSFRC1_0__RegVSRC1_1__U4Imm1_2
  { CVT_95_addRegVSFRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__RegVRRC1_1__S5Imm1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__U4Imm1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegVSRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegACCRC1_0__Tie0_1_1
  { CVT_95_addRegACCRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_95_0
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_95_3
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_imm_95_3, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__U2Imm1_3
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3__U3Imm1_4
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addRegVSRCOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegACCRC1_0
  { CVT_95_addRegACCRCOperands, 1, CVT_Done },
  // Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_0
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_3
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_imm_95_3, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_0
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_3
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 2, CVT_imm_95_3, 0, CVT_Done },
  // Convert__RegVSRC1_0__Tie0_1_1__U1Imm1_1__Imm1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__U8Imm1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__Imm1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__U2Imm1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_imm_95_2, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 2, CVT_imm_95_2, 0, CVT_Done },
};

void PPCAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  unsigned OpIdx;
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p += 2) {
    OpIdx = *(p + 1);
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied: {
      assert(OpIdx < (size_t)(std::end(TiedAsmOperandTable) -
                              std::begin(TiedAsmOperandTable)) &&
             "Tied operand not found");
      unsigned TiedResOpnd = TiedAsmOperandTable[OpIdx][0];
      if (TiedResOpnd != (uint8_t)-1)
        Inst.addOperand(Inst.getOperand(TiedResOpnd));
      break;
    }
    case CVT_95_addRegG8RCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegG8RCOperands(Inst, 1);
      break;
    case CVT_95_addTLSRegOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addTLSRegOperands(Inst, 1);
      break;
    case CVT_95_addRegGPRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegGPRCOperands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addRegGPRCNoR0Operands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegGPRCNoR0Operands(Inst, 1);
      break;
    case CVT_95_addS16ImmOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addS16ImmOperands(Inst, 1);
      break;
    case CVT_95_addU16ImmOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addU16ImmOperands(Inst, 1);
      break;
    case CVT_95_addBranchTargetOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addBranchTargetOperands(Inst, 1);
      break;
    case CVT_95_addRegCRBITRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegCRBITRCOperands(Inst, 1);
      break;
    case CVT_imm_95_3:
      Inst.addOperand(MCOperand::createImm(3));
      break;
    case CVT_imm_95_2:
      Inst.addOperand(MCOperand::createImm(2));
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_95_addRegVRRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegVRRCOperands(Inst, 1);
      break;
    case CVT_imm_95_8:
      Inst.addOperand(MCOperand::createImm(8));
      break;
    case CVT_imm_95_10:
      Inst.addOperand(MCOperand::createImm(10));
      break;
    case CVT_imm_95_76:
      Inst.addOperand(MCOperand::createImm(76));
      break;
    case CVT_regCR0:
      Inst.addOperand(MCOperand::createReg(PPC::CR0));
      break;
    case CVT_95_addRegCRRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegCRRCOperands(Inst, 1);
      break;
    case CVT_imm_95_79:
      Inst.addOperand(MCOperand::createImm(79));
      break;
    case CVT_imm_95_78:
      Inst.addOperand(MCOperand::createImm(78));
      break;
    case CVT_imm_95_4:
      Inst.addOperand(MCOperand::createImm(4));
      break;
    case CVT_imm_95_7:
      Inst.addOperand(MCOperand::createImm(7));
      break;
    case CVT_imm_95_6:
      Inst.addOperand(MCOperand::createImm(6));
      break;
    case CVT_imm_95_44:
      Inst.addOperand(MCOperand::createImm(44));
      break;
    case CVT_imm_95_47:
      Inst.addOperand(MCOperand::createImm(47));
      break;
    case CVT_imm_95_46:
      Inst.addOperand(MCOperand::createImm(46));
      break;
    case CVT_imm_95_36:
      Inst.addOperand(MCOperand::createImm(36));
      break;
    case CVT_imm_95_39:
      Inst.addOperand(MCOperand::createImm(39));
      break;
    case CVT_imm_95_38:
      Inst.addOperand(MCOperand::createImm(38));
      break;
    case CVT_imm_95_12:
      Inst.addOperand(MCOperand::createImm(12));
      break;
    case CVT_imm_95_15:
      Inst.addOperand(MCOperand::createImm(15));
      break;
    case CVT_imm_95_14:
      Inst.addOperand(MCOperand::createImm(14));
      break;
    case CVT_imm_95_68:
      Inst.addOperand(MCOperand::createImm(68));
      break;
    case CVT_imm_95_71:
      Inst.addOperand(MCOperand::createImm(71));
      break;
    case CVT_imm_95_70:
      Inst.addOperand(MCOperand::createImm(70));
      break;
    case CVT_imm_95_100:
      Inst.addOperand(MCOperand::createImm(100));
      break;
    case CVT_imm_95_103:
      Inst.addOperand(MCOperand::createImm(103));
      break;
    case CVT_imm_95_102:
      Inst.addOperand(MCOperand::createImm(102));
      break;
    case CVT_imm_95_108:
      Inst.addOperand(MCOperand::createImm(108));
      break;
    case CVT_imm_95_111:
      Inst.addOperand(MCOperand::createImm(111));
      break;
    case CVT_imm_95_110:
      Inst.addOperand(MCOperand::createImm(110));
      break;
    case CVT_imm_95_31:
      Inst.addOperand(MCOperand::createImm(31));
      break;
    case CVT_95_addRegGxRCNoR0Operands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegGxRCNoR0Operands(Inst, 1);
      break;
    case CVT_95_addRegGxRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegGxRCOperands(Inst, 1);
      break;
    case CVT_regR0:
      Inst.addOperand(MCOperand::createReg(PPC::R0));
      break;
    case CVT_95_addRegSPERCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegSPERCOperands(Inst, 1);
      break;
    case CVT_95_addRegSPE4RCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegSPE4RCOperands(Inst, 1);
      break;
    case CVT_95_addRegF4RCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegF4RCOperands(Inst, 1);
      break;
    case CVT_95_addRegF8RCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegF8RCOperands(Inst, 1);
      break;
    case CVT_95_addRegG8RCNoX0Operands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegG8RCNoX0Operands(Inst, 1);
      break;
    case CVT_regCR0EQ:
      Inst.addOperand(MCOperand::createReg(PPC::CR0EQ));
      break;
    case CVT_regCR0GT:
      Inst.addOperand(MCOperand::createReg(PPC::CR0GT));
      break;
    case CVT_regCR0LT:
      Inst.addOperand(MCOperand::createReg(PPC::CR0LT));
      break;
    case CVT_regZERO8:
      Inst.addOperand(MCOperand::createReg(PPC::ZERO8));
      break;
    case CVT_regZERO:
      Inst.addOperand(MCOperand::createReg(PPC::ZERO));
      break;
    case CVT_95_addRegG8pRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegG8pRCOperands(Inst, 1);
      break;
    case CVT_imm_95_1:
      Inst.addOperand(MCOperand::createImm(1));
      break;
    case CVT_95_addRegVFRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegVFRCOperands(Inst, 1);
      break;
    case CVT_95_addRegVSFRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegVSFRCOperands(Inst, 1);
      break;
    case CVT_95_addRegVSSRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegVSSRCOperands(Inst, 1);
      break;
    case CVT_95_addRegVSRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegVSRCOperands(Inst, 1);
      break;
    case CVT_95_addRegVSRpRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegVSRpRCOperands(Inst, 1);
      break;
    case CVT_imm_95_29:
      Inst.addOperand(MCOperand::createImm(29));
      break;
    case CVT_imm_95_280:
      Inst.addOperand(MCOperand::createImm(280));
      break;
    case CVT_imm_95_128:
      Inst.addOperand(MCOperand::createImm(128));
      break;
    case CVT_imm_95_129:
      Inst.addOperand(MCOperand::createImm(129));
      break;
    case CVT_imm_95_130:
      Inst.addOperand(MCOperand::createImm(130));
      break;
    case CVT_imm_95_131:
      Inst.addOperand(MCOperand::createImm(131));
      break;
    case CVT_imm_95_132:
      Inst.addOperand(MCOperand::createImm(132));
      break;
    case CVT_imm_95_133:
      Inst.addOperand(MCOperand::createImm(133));
      break;
    case CVT_imm_95_134:
      Inst.addOperand(MCOperand::createImm(134));
      break;
    case CVT_imm_95_135:
      Inst.addOperand(MCOperand::createImm(135));
      break;
    case CVT_imm_95_28:
      Inst.addOperand(MCOperand::createImm(28));
      break;
    case CVT_imm_95_9:
      Inst.addOperand(MCOperand::createImm(9));
      break;
    case CVT_imm_95_19:
      Inst.addOperand(MCOperand::createImm(19));
      break;
    case CVT_imm_95_537:
      Inst.addOperand(MCOperand::createImm(537));
      break;
    case CVT_imm_95_539:
      Inst.addOperand(MCOperand::createImm(539));
      break;
    case CVT_imm_95_541:
      Inst.addOperand(MCOperand::createImm(541));
      break;
    case CVT_imm_95_543:
      Inst.addOperand(MCOperand::createImm(543));
      break;
    case CVT_imm_95_536:
      Inst.addOperand(MCOperand::createImm(536));
      break;
    case CVT_imm_95_538:
      Inst.addOperand(MCOperand::createImm(538));
      break;
    case CVT_imm_95_540:
      Inst.addOperand(MCOperand::createImm(540));
      break;
    case CVT_imm_95_542:
      Inst.addOperand(MCOperand::createImm(542));
      break;
    case CVT_imm_95_1018:
      Inst.addOperand(MCOperand::createImm(1018));
      break;
    case CVT_imm_95_981:
      Inst.addOperand(MCOperand::createImm(981));
      break;
    case CVT_imm_95_22:
      Inst.addOperand(MCOperand::createImm(22));
      break;
    case CVT_imm_95_17:
      Inst.addOperand(MCOperand::createImm(17));
      break;
    case CVT_imm_95_18:
      Inst.addOperand(MCOperand::createImm(18));
      break;
    case CVT_imm_95_980:
      Inst.addOperand(MCOperand::createImm(980));
      break;
    case CVT_imm_95_529:
      Inst.addOperand(MCOperand::createImm(529));
      break;
    case CVT_imm_95_531:
      Inst.addOperand(MCOperand::createImm(531));
      break;
    case CVT_imm_95_533:
      Inst.addOperand(MCOperand::createImm(533));
      break;
    case CVT_imm_95_535:
      Inst.addOperand(MCOperand::createImm(535));
      break;
    case CVT_imm_95_528:
      Inst.addOperand(MCOperand::createImm(528));
      break;
    case CVT_imm_95_530:
      Inst.addOperand(MCOperand::createImm(530));
      break;
    case CVT_imm_95_532:
      Inst.addOperand(MCOperand::createImm(532));
      break;
    case CVT_imm_95_534:
      Inst.addOperand(MCOperand::createImm(534));
      break;
    case CVT_imm_95_1019:
      Inst.addOperand(MCOperand::createImm(1019));
      break;
    case CVT_95_addCRBitMaskOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addCRBitMaskOperands(Inst, 1);
      break;
    case CVT_imm_95_48:
      Inst.addOperand(MCOperand::createImm(48));
      break;
    case CVT_imm_95_896:
      Inst.addOperand(MCOperand::createImm(896));
      break;
    case CVT_imm_95_287:
      Inst.addOperand(MCOperand::createImm(287));
      break;
    case CVT_imm_95_5:
      Inst.addOperand(MCOperand::createImm(5));
      break;
    case CVT_imm_95_25:
      Inst.addOperand(MCOperand::createImm(25));
      break;
    case CVT_imm_95_512:
      Inst.addOperand(MCOperand::createImm(512));
      break;
    case CVT_imm_95_272:
      Inst.addOperand(MCOperand::createImm(272));
      break;
    case CVT_imm_95_273:
      Inst.addOperand(MCOperand::createImm(273));
      break;
    case CVT_imm_95_274:
      Inst.addOperand(MCOperand::createImm(274));
      break;
    case CVT_imm_95_275:
      Inst.addOperand(MCOperand::createImm(275));
      break;
    case CVT_imm_95_260:
      Inst.addOperand(MCOperand::createImm(260));
      break;
    case CVT_imm_95_261:
      Inst.addOperand(MCOperand::createImm(261));
      break;
    case CVT_imm_95_262:
      Inst.addOperand(MCOperand::createImm(262));
      break;
    case CVT_imm_95_263:
      Inst.addOperand(MCOperand::createImm(263));
      break;
    case CVT_imm_95_26:
      Inst.addOperand(MCOperand::createImm(26));
      break;
    case CVT_imm_95_27:
      Inst.addOperand(MCOperand::createImm(27));
      break;
    case CVT_imm_95_990:
      Inst.addOperand(MCOperand::createImm(990));
      break;
    case CVT_imm_95_991:
      Inst.addOperand(MCOperand::createImm(991));
      break;
    case CVT_imm_95_268:
      Inst.addOperand(MCOperand::createImm(268));
      break;
    case CVT_imm_95_988:
      Inst.addOperand(MCOperand::createImm(988));
      break;
    case CVT_imm_95_989:
      Inst.addOperand(MCOperand::createImm(989));
      break;
    case CVT_imm_95_269:
      Inst.addOperand(MCOperand::createImm(269));
      break;
    case CVT_imm_95_986:
      Inst.addOperand(MCOperand::createImm(986));
      break;
    case CVT_imm_95_13:
      Inst.addOperand(MCOperand::createImm(13));
      break;
    case CVT_imm_95_255:
      Inst.addOperand(MCOperand::createImm(255));
      break;
    case CVT_imm_95_284:
      Inst.addOperand(MCOperand::createImm(284));
      break;
    case CVT_imm_95_285:
      Inst.addOperand(MCOperand::createImm(285));
      break;
    case CVT_regX0:
      Inst.addOperand(MCOperand::createReg(PPC::X0));
      break;
    case CVT_95_addRegACCRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegACCRCOperands(Inst, 1);
      break;
    case CVT_95_addRegVSRpEvenRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegVSRpEvenRCOperands(Inst, 1);
      break;
    case CVT_imm_95_20:
      Inst.addOperand(MCOperand::createImm(20));
      break;
    case CVT_imm_95_16:
      Inst.addOperand(MCOperand::createImm(16));
      break;
    case CVT_imm_95_24:
      Inst.addOperand(MCOperand::createImm(24));
      break;
    }
  }
}

void PPCAsmParser::
convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  unsigned NumMCOperands = 0;
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p += 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      ++NumMCOperands;
      break;
    case CVT_Tied:
      ++NumMCOperands;
      break;
    case CVT_95_addRegG8RCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addTLSRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegGPRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegGPRCNoR0Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addS16ImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addU16ImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBranchTargetOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegCRBITRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_3:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_2:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addRegVRRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_8:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_10:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_76:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regCR0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addRegCRRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_79:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_78:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_4:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_7:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_6:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_44:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_47:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_46:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_36:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_39:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_38:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_12:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_15:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_14:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_68:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_71:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_70:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_100:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_103:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_102:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_108:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_111:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_110:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_31:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addRegGxRCNoR0Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegGxRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regR0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addRegSPERCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegSPE4RCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegF4RCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegF8RCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegG8RCNoX0Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regCR0EQ:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_regCR0GT:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_regCR0LT:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_regZERO8:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_regZERO:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addRegG8pRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addRegVFRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegVSFRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegVSSRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegVSRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegVSRpRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_29:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_280:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_128:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_129:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_130:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_131:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_132:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_133:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_134:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_135:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_28:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_9:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_19:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_537:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_539:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_541:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_543:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_536:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_538:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_540:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_542:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_1018:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_981:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_22:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_17:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_18:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_980:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_529:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_531:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_533:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_535:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_528:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_530:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_532:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_534:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_1019:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addCRBitMaskOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_48:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_896:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_287:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_5:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_25:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_512:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_272:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_273:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_274:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_275:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_260:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_261:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_262:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_263:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_26:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_27:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_990:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_991:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_268:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_988:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_989:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_269:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_986:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_13:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_255:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_284:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_285:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regX0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addRegACCRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegVSRpEvenRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_20:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_16:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_24:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  OptionalMatchClass = 1,
  MCK__DOT_, // '.'
  MCK_0, // '0'
  MCK_1, // '1'
  MCK_2, // '2'
  MCK_3, // '3'
  MCK_4, // '4'
  MCK_5, // '5'
  MCK_6, // '6'
  MCK_7, // '7'
  MCK_crD, // 'crD'
  MCK_LAST_TOKEN = MCK_crD,
  MCK_CTRRC, // register class 'CTRRC'
  MCK_CTRRC8, // register class 'CTRRC8'
  MCK_LR8RC, // register class 'LR8RC'
  MCK_LRRC, // register class 'LRRC'
  MCK_VRSAVERC, // register class 'VRSAVERC'
  MCK_CARRYRC, // register class 'CARRYRC'
  MCK_Reg40, // derived register class
  MCK_Reg37, // derived register class
  MCK_Reg41, // derived register class
  MCK_Reg38, // derived register class
  MCK_Reg21, // derived register class
  MCK_ACCRC, // register class 'ACCRC'
  MCK_CRRC, // register class 'CRRC'
  MCK_UACCRC, // register class 'UACCRC'
  MCK_Reg25, // derived register class
  MCK_Reg19, // derived register class
  MCK_Reg9, // derived register class
  MCK_Reg28, // derived register class
  MCK_Reg26, // derived register class
  MCK_Reg22, // derived register class
  MCK_G8pRC, // register class 'G8pRC'
  MCK_Reg24, // derived register class
  MCK_Reg15, // derived register class
  MCK_Reg13, // derived register class
  MCK_Reg8, // derived register class
  MCK_CRBITRC, // register class 'CRBITRC'
  MCK_F4RC, // register class 'F4RC,F8RC'
  MCK_SPERC, // register class 'SPERC'
  MCK_VFRC, // register class 'VFRC'
  MCK_VRRC, // register class 'VRRC'
  MCK_VSLRC, // register class 'VSLRC'
  MCK_VSRpRC, // register class 'VSRpRC'
  MCK_Reg6, // derived register class
  MCK_Reg2, // derived register class
  MCK_Reg18, // derived register class
  MCK_Reg12, // derived register class
  MCK_G8RC, // register class 'G8RC'
  MCK_G8RC_NOX0, // register class 'G8RC_NOX0'
  MCK_GPRC, // register class 'GPRC'
  MCK_GPRC_NOR0, // register class 'GPRC_NOR0'
  MCK_VSRC, // register class 'VSRC'
  MCK_VSSRC, // register class 'VSSRC,VSFRC'
  MCK_SPILLTOVSRRC, // register class 'SPILLTOVSRRC'
  MCK_LAST_REGISTER = MCK_SPILLTOVSRRC,
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_ATBitsAsHint, // user defined class 'PPCATBitsAsHintAsmOperand'
  MCK_CRBitMask, // user defined class 'PPCCRBitMaskOperand'
  MCK_CondBr, // user defined class 'PPCCondBrAsmOperand'
  MCK_DirectBr, // user defined class 'PPCDirectBrAsmOperand'
  MCK_DispRI34, // user defined class 'PPCDispRI34Operand'
  MCK_DispRIHash, // user defined class 'PPCDispRIHashOperand'
  MCK_DispRI, // user defined class 'PPCDispRIOperand'
  MCK_DispRIX16, // user defined class 'PPCDispRIX16Operand'
  MCK_DispRIX, // user defined class 'PPCDispRIXOperand'
  MCK_DispSPE2, // user defined class 'PPCDispSPE2Operand'
  MCK_DispSPE4, // user defined class 'PPCDispSPE4Operand'
  MCK_DispSPE8, // user defined class 'PPCDispSPE8Operand'
  MCK_ImmZero, // user defined class 'PPCImmZeroAsmOperand'
  MCK_RegACCRC, // user defined class 'PPCRegACCRCAsmOperand'
  MCK_RegCRBITRC, // user defined class 'PPCRegCRBITRCAsmOperand'
  MCK_RegCRRC, // user defined class 'PPCRegCRRCAsmOperand'
  MCK_RegF4RC, // user defined class 'PPCRegF4RCAsmOperand'
  MCK_RegF8RC, // user defined class 'PPCRegF8RCAsmOperand'
  MCK_RegG8RC, // user defined class 'PPCRegG8RCAsmOperand'
  MCK_RegG8RCNoX0, // user defined class 'PPCRegG8RCNoX0AsmOperand'
  MCK_RegG8pRC, // user defined class 'PPCRegG8pRCAsmOperand'
  MCK_RegGPRC, // user defined class 'PPCRegGPRCAsmOperand'
  MCK_RegGPRCNoR0, // user defined class 'PPCRegGPRCNoR0AsmOperand'
  MCK_RegGxRCNoR0, // user defined class 'PPCRegGxRCNoR0Operand'
  MCK_RegGxRC, // user defined class 'PPCRegGxRCOperand'
  MCK_RegSPE4RC, // user defined class 'PPCRegSPE4RCAsmOperand'
  MCK_RegSPERC, // user defined class 'PPCRegSPERCAsmOperand'
  MCK_RegSPILLTOVSRRC, // user defined class 'PPCRegSPILLTOVSRRCAsmOperand'
  MCK_RegVFRC, // user defined class 'PPCRegVFRCAsmOperand'
  MCK_RegVRRC, // user defined class 'PPCRegVRRCAsmOperand'
  MCK_RegVSFRC, // user defined class 'PPCRegVSFRCAsmOperand'
  MCK_RegVSRC, // user defined class 'PPCRegVSRCAsmOperand'
  MCK_RegVSRpEvenRC, // user defined class 'PPCRegVSRpEvenRCAsmOperand'
  MCK_RegVSRpRC, // user defined class 'PPCRegVSRpRCAsmOperand'
  MCK_RegVSSRC, // user defined class 'PPCRegVSSRCAsmOperand'
  MCK_S16Imm, // user defined class 'PPCS16ImmAsmOperand'
  MCK_S17Imm, // user defined class 'PPCS17ImmAsmOperand'
  MCK_S34Imm, // user defined class 'PPCS34ImmAsmOperand'
  MCK_S5Imm, // user defined class 'PPCS5ImmAsmOperand'
  MCK_TLSReg, // user defined class 'PPCTLSRegOperand'
  MCK_U10Imm, // user defined class 'PPCU10ImmAsmOperand'
  MCK_U12Imm, // user defined class 'PPCU12ImmAsmOperand'
  MCK_U16Imm, // user defined class 'PPCU16ImmAsmOperand'
  MCK_U1Imm, // user defined class 'PPCU1ImmAsmOperand'
  MCK_U2Imm, // user defined class 'PPCU2ImmAsmOperand'
  MCK_U3Imm, // user defined class 'PPCU3ImmAsmOperand'
  MCK_U4Imm, // user defined class 'PPCU4ImmAsmOperand'
  MCK_U5Imm, // user defined class 'PPCU5ImmAsmOperand'
  MCK_U6Imm, // user defined class 'PPCU6ImmAsmOperand'
  MCK_U7Imm, // user defined class 'PPCU7ImmAsmOperand'
  MCK_U8Imm, // user defined class 'PPCU8ImmAsmOperand'
  NumMatchClassKinds
};

} // end anonymous namespace

static unsigned getDiagKindFromRegisterClass(MatchClassKind RegisterClass) {
  return MCTargetAsmParser::Match_InvalidOperand;
}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 9 strings to match.
    switch (Name[0]) {
    default: break;
    case '.':	 // 1 string to match.
      return MCK__DOT_;	 // "."
    case '0':	 // 1 string to match.
      return MCK_0;	 // "0"
    case '1':	 // 1 string to match.
      return MCK_1;	 // "1"
    case '2':	 // 1 string to match.
      return MCK_2;	 // "2"
    case '3':	 // 1 string to match.
      return MCK_3;	 // "3"
    case '4':	 // 1 string to match.
      return MCK_4;	 // "4"
    case '5':	 // 1 string to match.
      return MCK_5;	 // "5"
    case '6':	 // 1 string to match.
      return MCK_6;	 // "6"
    case '7':	 // 1 string to match.
      return MCK_7;	 // "7"
    }
    break;
  case 3:	 // 1 string to match.
    if (memcmp(Name.data()+0, "crD", 3) != 0)
      break;
    return MCK_crD;	 // "crD"
  }
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_Reg40:
    switch (B) {
    default: return false;
    case MCK_Reg41: return true;
    case MCK_UACCRC: return true;
    }

  case MCK_Reg37:
    switch (B) {
    default: return false;
    case MCK_Reg38: return true;
    case MCK_ACCRC: return true;
    }

  case MCK_Reg41:
    return B == MCK_UACCRC;

  case MCK_Reg38:
    return B == MCK_ACCRC;

  case MCK_Reg21:
    switch (B) {
    default: return false;
    case MCK_Reg22: return true;
    case MCK_Reg24: return true;
    case MCK_VSRpRC: return true;
    }

  case MCK_Reg25:
    switch (B) {
    default: return false;
    case MCK_Reg26: return true;
    case MCK_Reg24: return true;
    case MCK_VSRpRC: return true;
    }

  case MCK_Reg19:
    switch (B) {
    default: return false;
    case MCK_VSLRC: return true;
    case MCK_Reg18: return true;
    case MCK_VSRC: return true;
    }

  case MCK_Reg9:
    switch (B) {
    default: return false;
    case MCK_F4RC: return true;
    case MCK_Reg12: return true;
    case MCK_VSSRC: return true;
    case MCK_SPILLTOVSRRC: return true;
    }

  case MCK_Reg28:
    return B == MCK_G8pRC;

  case MCK_Reg26:
    return B == MCK_VSRpRC;

  case MCK_Reg22:
    return B == MCK_VSRpRC;

  case MCK_Reg24:
    return B == MCK_VSRpRC;

  case MCK_Reg15:
    switch (B) {
    default: return false;
    case MCK_VRRC: return true;
    case MCK_Reg18: return true;
    case MCK_VSRC: return true;
    }

  case MCK_Reg13:
    switch (B) {
    default: return false;
    case MCK_VFRC: return true;
    case MCK_Reg12: return true;
    case MCK_VSSRC: return true;
    case MCK_SPILLTOVSRRC: return true;
    }

  case MCK_Reg8:
    return B == MCK_SPERC;

  case MCK_F4RC:
    return B == MCK_VSSRC;

  case MCK_VFRC:
    return B == MCK_VSSRC;

  case MCK_VRRC:
    return B == MCK_VSRC;

  case MCK_VSLRC:
    return B == MCK_VSRC;

  case MCK_Reg6:
    switch (B) {
    default: return false;
    case MCK_G8RC: return true;
    case MCK_G8RC_NOX0: return true;
    case MCK_SPILLTOVSRRC: return true;
    }

  case MCK_Reg2:
    switch (B) {
    default: return false;
    case MCK_GPRC: return true;
    case MCK_GPRC_NOR0: return true;
    }

  case MCK_Reg18:
    return B == MCK_VSRC;

  case MCK_Reg12:
    switch (B) {
    default: return false;
    case MCK_VSSRC: return true;
    case MCK_SPILLTOVSRRC: return true;
    }

  case MCK_G8RC:
    return B == MCK_SPILLTOVSRRC;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  PPCOperand &Operand = (PPCOperand &)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken() && Kind <= MCK_LAST_TOKEN)
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  switch (Kind) {
  default: break;
  // 'Imm' class
  case MCK_Imm: {
    DiagnosticPredicate DP(Operand.isImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'ATBitsAsHint' class
  case MCK_ATBitsAsHint: {
    DiagnosticPredicate DP(Operand.isATBitsAsHint());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'CRBitMask' class
  case MCK_CRBitMask: {
    DiagnosticPredicate DP(Operand.isCRBitMask());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'CondBr' class
  case MCK_CondBr: {
    DiagnosticPredicate DP(Operand.isCondBr());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'DirectBr' class
  case MCK_DirectBr: {
    DiagnosticPredicate DP(Operand.isDirectBr());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'DispRI34' class
  case MCK_DispRI34: {
    DiagnosticPredicate DP(Operand.isS34Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'DispRIHash' class
  case MCK_DispRIHash: {
    DiagnosticPredicate DP(Operand.isHashImmX8());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'DispRI' class
  case MCK_DispRI: {
    DiagnosticPredicate DP(Operand.isS16Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'DispRIX16' class
  case MCK_DispRIX16: {
    DiagnosticPredicate DP(Operand.isS16ImmX16());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'DispRIX' class
  case MCK_DispRIX: {
    DiagnosticPredicate DP(Operand.isS16ImmX4());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'DispSPE2' class
  case MCK_DispSPE2: {
    DiagnosticPredicate DP(Operand.isU6ImmX2());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'DispSPE4' class
  case MCK_DispSPE4: {
    DiagnosticPredicate DP(Operand.isU7ImmX4());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'DispSPE8' class
  case MCK_DispSPE8: {
    DiagnosticPredicate DP(Operand.isU8ImmX8());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'ImmZero' class
  case MCK_ImmZero: {
    DiagnosticPredicate DP(Operand.isImmZero());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegACCRC' class
  case MCK_RegACCRC: {
    DiagnosticPredicate DP(Operand.isACCRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegCRBITRC' class
  case MCK_RegCRBITRC: {
    DiagnosticPredicate DP(Operand.isCRBitNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegCRRC' class
  case MCK_RegCRRC: {
    DiagnosticPredicate DP(Operand.isCCRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegF4RC' class
  case MCK_RegF4RC: {
    DiagnosticPredicate DP(Operand.isRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegF8RC' class
  case MCK_RegF8RC: {
    DiagnosticPredicate DP(Operand.isRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegG8RC' class
  case MCK_RegG8RC: {
    DiagnosticPredicate DP(Operand.isRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegG8RCNoX0' class
  case MCK_RegG8RCNoX0: {
    DiagnosticPredicate DP(Operand.isRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegG8pRC' class
  case MCK_RegG8pRC: {
    DiagnosticPredicate DP(Operand.isEvenRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegGPRC' class
  case MCK_RegGPRC: {
    DiagnosticPredicate DP(Operand.isRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegGPRCNoR0' class
  case MCK_RegGPRCNoR0: {
    DiagnosticPredicate DP(Operand.isRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegGxRCNoR0' class
  case MCK_RegGxRCNoR0: {
    DiagnosticPredicate DP(Operand.isRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegGxRC' class
  case MCK_RegGxRC: {
    DiagnosticPredicate DP(Operand.isRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegSPE4RC' class
  case MCK_RegSPE4RC: {
    DiagnosticPredicate DP(Operand.isRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegSPERC' class
  case MCK_RegSPERC: {
    DiagnosticPredicate DP(Operand.isRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegSPILLTOVSRRC' class
  case MCK_RegSPILLTOVSRRC: {
    DiagnosticPredicate DP(Operand.isVSRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegVFRC' class
  case MCK_RegVFRC: {
    DiagnosticPredicate DP(Operand.isRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegVRRC' class
  case MCK_RegVRRC: {
    DiagnosticPredicate DP(Operand.isRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegVSFRC' class
  case MCK_RegVSFRC: {
    DiagnosticPredicate DP(Operand.isVSRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegVSRC' class
  case MCK_RegVSRC: {
    DiagnosticPredicate DP(Operand.isVSRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegVSRpEvenRC' class
  case MCK_RegVSRpEvenRC: {
    DiagnosticPredicate DP(Operand.isVSRpEvenRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegVSRpRC' class
  case MCK_RegVSRpRC: {
    DiagnosticPredicate DP(Operand.isVSRpEvenRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegVSSRC' class
  case MCK_RegVSSRC: {
    DiagnosticPredicate DP(Operand.isVSRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'S16Imm' class
  case MCK_S16Imm: {
    DiagnosticPredicate DP(Operand.isS16Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'S17Imm' class
  case MCK_S17Imm: {
    DiagnosticPredicate DP(Operand.isS17Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'S34Imm' class
  case MCK_S34Imm: {
    DiagnosticPredicate DP(Operand.isS34Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'S5Imm' class
  case MCK_S5Imm: {
    DiagnosticPredicate DP(Operand.isS5Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'TLSReg' class
  case MCK_TLSReg: {
    DiagnosticPredicate DP(Operand.isTLSReg());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U10Imm' class
  case MCK_U10Imm: {
    DiagnosticPredicate DP(Operand.isU10Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U12Imm' class
  case MCK_U12Imm: {
    DiagnosticPredicate DP(Operand.isU12Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U16Imm' class
  case MCK_U16Imm: {
    DiagnosticPredicate DP(Operand.isU16Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U1Imm' class
  case MCK_U1Imm: {
    DiagnosticPredicate DP(Operand.isU1Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U2Imm' class
  case MCK_U2Imm: {
    DiagnosticPredicate DP(Operand.isU2Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U3Imm' class
  case MCK_U3Imm: {
    DiagnosticPredicate DP(Operand.isU3Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U4Imm' class
  case MCK_U4Imm: {
    DiagnosticPredicate DP(Operand.isU4Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U5Imm' class
  case MCK_U5Imm: {
    DiagnosticPredicate DP(Operand.isU5Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U6Imm' class
  case MCK_U6Imm: {
    DiagnosticPredicate DP(Operand.isU6Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U7Imm' class
  case MCK_U7Imm: {
    DiagnosticPredicate DP(Operand.isU7Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U8Imm' class
  case MCK_U8Imm: {
    DiagnosticPredicate DP(Operand.isU8Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  } // end switch (Kind)

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case PPC::R0: OpKind = MCK_GPRC; break;
    case PPC::R1: OpKind = MCK_Reg2; break;
    case PPC::R2: OpKind = MCK_Reg2; break;
    case PPC::R3: OpKind = MCK_Reg2; break;
    case PPC::R4: OpKind = MCK_Reg2; break;
    case PPC::R5: OpKind = MCK_Reg2; break;
    case PPC::R6: OpKind = MCK_Reg2; break;
    case PPC::R7: OpKind = MCK_Reg2; break;
    case PPC::R8: OpKind = MCK_Reg2; break;
    case PPC::R9: OpKind = MCK_Reg2; break;
    case PPC::R10: OpKind = MCK_Reg2; break;
    case PPC::R11: OpKind = MCK_Reg2; break;
    case PPC::R12: OpKind = MCK_Reg2; break;
    case PPC::R13: OpKind = MCK_Reg2; break;
    case PPC::R14: OpKind = MCK_Reg2; break;
    case PPC::R15: OpKind = MCK_Reg2; break;
    case PPC::R16: OpKind = MCK_Reg2; break;
    case PPC::R17: OpKind = MCK_Reg2; break;
    case PPC::R18: OpKind = MCK_Reg2; break;
    case PPC::R19: OpKind = MCK_Reg2; break;
    case PPC::R20: OpKind = MCK_Reg2; break;
    case PPC::R21: OpKind = MCK_Reg2; break;
    case PPC::R22: OpKind = MCK_Reg2; break;
    case PPC::R23: OpKind = MCK_Reg2; break;
    case PPC::R24: OpKind = MCK_Reg2; break;
    case PPC::R25: OpKind = MCK_Reg2; break;
    case PPC::R26: OpKind = MCK_Reg2; break;
    case PPC::R27: OpKind = MCK_Reg2; break;
    case PPC::R28: OpKind = MCK_Reg2; break;
    case PPC::R29: OpKind = MCK_Reg2; break;
    case PPC::R30: OpKind = MCK_Reg2; break;
    case PPC::R31: OpKind = MCK_Reg2; break;
    case PPC::X0: OpKind = MCK_G8RC; break;
    case PPC::X1: OpKind = MCK_Reg6; break;
    case PPC::X2: OpKind = MCK_Reg6; break;
    case PPC::X3: OpKind = MCK_Reg6; break;
    case PPC::X4: OpKind = MCK_Reg6; break;
    case PPC::X5: OpKind = MCK_Reg6; break;
    case PPC::X6: OpKind = MCK_Reg6; break;
    case PPC::X7: OpKind = MCK_Reg6; break;
    case PPC::X8: OpKind = MCK_Reg6; break;
    case PPC::X9: OpKind = MCK_Reg6; break;
    case PPC::X10: OpKind = MCK_Reg6; break;
    case PPC::X11: OpKind = MCK_Reg6; break;
    case PPC::X12: OpKind = MCK_Reg6; break;
    case PPC::X13: OpKind = MCK_Reg6; break;
    case PPC::X14: OpKind = MCK_Reg6; break;
    case PPC::X15: OpKind = MCK_Reg6; break;
    case PPC::X16: OpKind = MCK_Reg6; break;
    case PPC::X17: OpKind = MCK_Reg6; break;
    case PPC::X18: OpKind = MCK_Reg6; break;
    case PPC::X19: OpKind = MCK_Reg6; break;
    case PPC::X20: OpKind = MCK_Reg6; break;
    case PPC::X21: OpKind = MCK_Reg6; break;
    case PPC::X22: OpKind = MCK_Reg6; break;
    case PPC::X23: OpKind = MCK_Reg6; break;
    case PPC::X24: OpKind = MCK_Reg6; break;
    case PPC::X25: OpKind = MCK_Reg6; break;
    case PPC::X26: OpKind = MCK_Reg6; break;
    case PPC::X27: OpKind = MCK_Reg6; break;
    case PPC::X28: OpKind = MCK_Reg6; break;
    case PPC::X29: OpKind = MCK_Reg6; break;
    case PPC::X30: OpKind = MCK_Reg6; break;
    case PPC::X31: OpKind = MCK_Reg6; break;
    case PPC::S0: OpKind = MCK_SPERC; break;
    case PPC::S1: OpKind = MCK_Reg8; break;
    case PPC::S2: OpKind = MCK_Reg8; break;
    case PPC::S3: OpKind = MCK_Reg8; break;
    case PPC::S4: OpKind = MCK_Reg8; break;
    case PPC::S5: OpKind = MCK_Reg8; break;
    case PPC::S6: OpKind = MCK_Reg8; break;
    case PPC::S7: OpKind = MCK_Reg8; break;
    case PPC::S8: OpKind = MCK_Reg8; break;
    case PPC::S9: OpKind = MCK_Reg8; break;
    case PPC::S10: OpKind = MCK_Reg8; break;
    case PPC::S11: OpKind = MCK_Reg8; break;
    case PPC::S12: OpKind = MCK_Reg8; break;
    case PPC::S13: OpKind = MCK_Reg8; break;
    case PPC::S14: OpKind = MCK_Reg8; break;
    case PPC::S15: OpKind = MCK_Reg8; break;
    case PPC::S16: OpKind = MCK_Reg8; break;
    case PPC::S17: OpKind = MCK_Reg8; break;
    case PPC::S18: OpKind = MCK_Reg8; break;
    case PPC::S19: OpKind = MCK_Reg8; break;
    case PPC::S20: OpKind = MCK_Reg8; break;
    case PPC::S21: OpKind = MCK_Reg8; break;
    case PPC::S22: OpKind = MCK_Reg8; break;
    case PPC::S23: OpKind = MCK_Reg8; break;
    case PPC::S24: OpKind = MCK_Reg8; break;
    case PPC::S25: OpKind = MCK_Reg8; break;
    case PPC::S26: OpKind = MCK_Reg8; break;
    case PPC::S27: OpKind = MCK_Reg8; break;
    case PPC::S28: OpKind = MCK_Reg8; break;
    case PPC::S29: OpKind = MCK_Reg8; break;
    case PPC::S30: OpKind = MCK_Reg8; break;
    case PPC::S31: OpKind = MCK_Reg8; break;
    case PPC::F0: OpKind = MCK_Reg9; break;
    case PPC::F1: OpKind = MCK_Reg9; break;
    case PPC::F2: OpKind = MCK_Reg9; break;
    case PPC::F3: OpKind = MCK_Reg9; break;
    case PPC::F4: OpKind = MCK_Reg9; break;
    case PPC::F5: OpKind = MCK_Reg9; break;
    case PPC::F6: OpKind = MCK_Reg9; break;
    case PPC::F7: OpKind = MCK_Reg9; break;
    case PPC::F8: OpKind = MCK_Reg9; break;
    case PPC::F9: OpKind = MCK_Reg9; break;
    case PPC::F10: OpKind = MCK_Reg9; break;
    case PPC::F11: OpKind = MCK_Reg9; break;
    case PPC::F12: OpKind = MCK_Reg9; break;
    case PPC::F13: OpKind = MCK_Reg9; break;
    case PPC::F14: OpKind = MCK_F4RC; break;
    case PPC::F15: OpKind = MCK_F4RC; break;
    case PPC::F16: OpKind = MCK_F4RC; break;
    case PPC::F17: OpKind = MCK_F4RC; break;
    case PPC::F18: OpKind = MCK_F4RC; break;
    case PPC::F19: OpKind = MCK_F4RC; break;
    case PPC::F20: OpKind = MCK_F4RC; break;
    case PPC::F21: OpKind = MCK_F4RC; break;
    case PPC::F22: OpKind = MCK_F4RC; break;
    case PPC::F23: OpKind = MCK_F4RC; break;
    case PPC::F24: OpKind = MCK_F4RC; break;
    case PPC::F25: OpKind = MCK_F4RC; break;
    case PPC::F26: OpKind = MCK_F4RC; break;
    case PPC::F27: OpKind = MCK_F4RC; break;
    case PPC::F28: OpKind = MCK_F4RC; break;
    case PPC::F29: OpKind = MCK_F4RC; break;
    case PPC::F30: OpKind = MCK_F4RC; break;
    case PPC::F31: OpKind = MCK_F4RC; break;
    case PPC::VF0: OpKind = MCK_Reg13; break;
    case PPC::VF1: OpKind = MCK_Reg13; break;
    case PPC::VF2: OpKind = MCK_Reg13; break;
    case PPC::VF3: OpKind = MCK_Reg13; break;
    case PPC::VF4: OpKind = MCK_Reg13; break;
    case PPC::VF5: OpKind = MCK_Reg13; break;
    case PPC::VF6: OpKind = MCK_Reg13; break;
    case PPC::VF7: OpKind = MCK_Reg13; break;
    case PPC::VF8: OpKind = MCK_Reg13; break;
    case PPC::VF9: OpKind = MCK_Reg13; break;
    case PPC::VF10: OpKind = MCK_Reg13; break;
    case PPC::VF11: OpKind = MCK_Reg13; break;
    case PPC::VF12: OpKind = MCK_Reg13; break;
    case PPC::VF13: OpKind = MCK_Reg13; break;
    case PPC::VF14: OpKind = MCK_Reg13; break;
    case PPC::VF15: OpKind = MCK_Reg13; break;
    case PPC::VF16: OpKind = MCK_Reg13; break;
    case PPC::VF17: OpKind = MCK_Reg13; break;
    case PPC::VF18: OpKind = MCK_Reg13; break;
    case PPC::VF19: OpKind = MCK_Reg13; break;
    case PPC::VF20: OpKind = MCK_VFRC; break;
    case PPC::VF21: OpKind = MCK_VFRC; break;
    case PPC::VF22: OpKind = MCK_VFRC; break;
    case PPC::VF23: OpKind = MCK_VFRC; break;
    case PPC::VF24: OpKind = MCK_VFRC; break;
    case PPC::VF25: OpKind = MCK_VFRC; break;
    case PPC::VF26: OpKind = MCK_VFRC; break;
    case PPC::VF27: OpKind = MCK_VFRC; break;
    case PPC::VF28: OpKind = MCK_VFRC; break;
    case PPC::VF29: OpKind = MCK_VFRC; break;
    case PPC::VF30: OpKind = MCK_VFRC; break;
    case PPC::VF31: OpKind = MCK_VFRC; break;
    case PPC::V0: OpKind = MCK_Reg15; break;
    case PPC::V1: OpKind = MCK_Reg15; break;
    case PPC::V2: OpKind = MCK_Reg15; break;
    case PPC::V3: OpKind = MCK_Reg15; break;
    case PPC::V4: OpKind = MCK_Reg15; break;
    case PPC::V5: OpKind = MCK_Reg15; break;
    case PPC::V6: OpKind = MCK_Reg15; break;
    case PPC::V7: OpKind = MCK_Reg15; break;
    case PPC::V8: OpKind = MCK_Reg15; break;
    case PPC::V9: OpKind = MCK_Reg15; break;
    case PPC::V10: OpKind = MCK_Reg15; break;
    case PPC::V11: OpKind = MCK_Reg15; break;
    case PPC::V12: OpKind = MCK_Reg15; break;
    case PPC::V13: OpKind = MCK_Reg15; break;
    case PPC::V14: OpKind = MCK_Reg15; break;
    case PPC::V15: OpKind = MCK_Reg15; break;
    case PPC::V16: OpKind = MCK_Reg15; break;
    case PPC::V17: OpKind = MCK_Reg15; break;
    case PPC::V18: OpKind = MCK_Reg15; break;
    case PPC::V19: OpKind = MCK_Reg15; break;
    case PPC::V20: OpKind = MCK_VRRC; break;
    case PPC::V21: OpKind = MCK_VRRC; break;
    case PPC::V22: OpKind = MCK_VRRC; break;
    case PPC::V23: OpKind = MCK_VRRC; break;
    case PPC::V24: OpKind = MCK_VRRC; break;
    case PPC::V25: OpKind = MCK_VRRC; break;
    case PPC::V26: OpKind = MCK_VRRC; break;
    case PPC::V27: OpKind = MCK_VRRC; break;
    case PPC::V28: OpKind = MCK_VRRC; break;
    case PPC::V29: OpKind = MCK_VRRC; break;
    case PPC::V30: OpKind = MCK_VRRC; break;
    case PPC::V31: OpKind = MCK_VRRC; break;
    case PPC::VSL0: OpKind = MCK_Reg19; break;
    case PPC::VSL1: OpKind = MCK_Reg19; break;
    case PPC::VSL2: OpKind = MCK_Reg19; break;
    case PPC::VSL3: OpKind = MCK_Reg19; break;
    case PPC::VSL4: OpKind = MCK_Reg19; break;
    case PPC::VSL5: OpKind = MCK_Reg19; break;
    case PPC::VSL6: OpKind = MCK_Reg19; break;
    case PPC::VSL7: OpKind = MCK_Reg19; break;
    case PPC::VSL8: OpKind = MCK_Reg19; break;
    case PPC::VSL9: OpKind = MCK_Reg19; break;
    case PPC::VSL10: OpKind = MCK_Reg19; break;
    case PPC::VSL11: OpKind = MCK_Reg19; break;
    case PPC::VSL12: OpKind = MCK_Reg19; break;
    case PPC::VSL13: OpKind = MCK_Reg19; break;
    case PPC::VSL14: OpKind = MCK_VSLRC; break;
    case PPC::VSL15: OpKind = MCK_VSLRC; break;
    case PPC::VSL16: OpKind = MCK_VSLRC; break;
    case PPC::VSL17: OpKind = MCK_VSLRC; break;
    case PPC::VSL18: OpKind = MCK_VSLRC; break;
    case PPC::VSL19: OpKind = MCK_VSLRC; break;
    case PPC::VSL20: OpKind = MCK_VSLRC; break;
    case PPC::VSL21: OpKind = MCK_VSLRC; break;
    case PPC::VSL22: OpKind = MCK_VSLRC; break;
    case PPC::VSL23: OpKind = MCK_VSLRC; break;
    case PPC::VSL24: OpKind = MCK_VSLRC; break;
    case PPC::VSL25: OpKind = MCK_VSLRC; break;
    case PPC::VSL26: OpKind = MCK_VSLRC; break;
    case PPC::VSL27: OpKind = MCK_VSLRC; break;
    case PPC::VSL28: OpKind = MCK_VSLRC; break;
    case PPC::VSL29: OpKind = MCK_VSLRC; break;
    case PPC::VSL30: OpKind = MCK_VSLRC; break;
    case PPC::VSL31: OpKind = MCK_VSLRC; break;
    case PPC::VSRp0: OpKind = MCK_Reg21; break;
    case PPC::VSRp1: OpKind = MCK_Reg21; break;
    case PPC::VSRp2: OpKind = MCK_Reg21; break;
    case PPC::VSRp3: OpKind = MCK_Reg21; break;
    case PPC::VSRp4: OpKind = MCK_Reg21; break;
    case PPC::VSRp5: OpKind = MCK_Reg21; break;
    case PPC::VSRp6: OpKind = MCK_Reg21; break;
    case PPC::VSRp7: OpKind = MCK_Reg22; break;
    case PPC::VSRp8: OpKind = MCK_Reg22; break;
    case PPC::VSRp9: OpKind = MCK_Reg22; break;
    case PPC::VSRp10: OpKind = MCK_Reg22; break;
    case PPC::VSRp11: OpKind = MCK_Reg22; break;
    case PPC::VSRp12: OpKind = MCK_Reg22; break;
    case PPC::VSRp13: OpKind = MCK_Reg22; break;
    case PPC::VSRp14: OpKind = MCK_Reg22; break;
    case PPC::VSRp15: OpKind = MCK_Reg22; break;
    case PPC::VSRp16: OpKind = MCK_Reg25; break;
    case PPC::VSRp17: OpKind = MCK_Reg25; break;
    case PPC::VSRp18: OpKind = MCK_Reg25; break;
    case PPC::VSRp19: OpKind = MCK_Reg25; break;
    case PPC::VSRp20: OpKind = MCK_Reg25; break;
    case PPC::VSRp21: OpKind = MCK_Reg25; break;
    case PPC::VSRp22: OpKind = MCK_Reg25; break;
    case PPC::VSRp23: OpKind = MCK_Reg25; break;
    case PPC::VSRp24: OpKind = MCK_Reg25; break;
    case PPC::VSRp25: OpKind = MCK_Reg25; break;
    case PPC::VSRp26: OpKind = MCK_Reg26; break;
    case PPC::VSRp27: OpKind = MCK_Reg26; break;
    case PPC::VSRp28: OpKind = MCK_Reg26; break;
    case PPC::VSRp29: OpKind = MCK_Reg26; break;
    case PPC::VSRp30: OpKind = MCK_Reg26; break;
    case PPC::VSRp31: OpKind = MCK_Reg26; break;
    case PPC::G8p0: OpKind = MCK_G8pRC; break;
    case PPC::G8p1: OpKind = MCK_Reg28; break;
    case PPC::G8p2: OpKind = MCK_Reg28; break;
    case PPC::G8p3: OpKind = MCK_Reg28; break;
    case PPC::G8p4: OpKind = MCK_Reg28; break;
    case PPC::G8p5: OpKind = MCK_Reg28; break;
    case PPC::G8p6: OpKind = MCK_Reg28; break;
    case PPC::G8p7: OpKind = MCK_Reg28; break;
    case PPC::G8p8: OpKind = MCK_Reg28; break;
    case PPC::G8p9: OpKind = MCK_Reg28; break;
    case PPC::G8p10: OpKind = MCK_Reg28; break;
    case PPC::G8p11: OpKind = MCK_Reg28; break;
    case PPC::G8p12: OpKind = MCK_Reg28; break;
    case PPC::G8p13: OpKind = MCK_Reg28; break;
    case PPC::G8p14: OpKind = MCK_Reg28; break;
    case PPC::G8p15: OpKind = MCK_Reg28; break;
    case PPC::ZERO: OpKind = MCK_GPRC_NOR0; break;
    case PPC::ZERO8: OpKind = MCK_G8RC_NOX0; break;
    case PPC::FP: OpKind = MCK_Reg2; break;
    case PPC::FP8: OpKind = MCK_Reg6; break;
    case PPC::BP: OpKind = MCK_Reg2; break;
    case PPC::BP8: OpKind = MCK_Reg6; break;
    case PPC::CR0LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR0GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR0EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR0UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR1LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR1GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR1EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR1UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR2LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR2GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR2EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR2UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR3LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR3GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR3EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR3UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR4LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR4GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR4EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR4UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR5LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR5GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR5EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR5UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR6LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR6GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR6EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR6UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR7LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR7GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR7EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR7UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR0: OpKind = MCK_CRRC; break;
    case PPC::CR1: OpKind = MCK_CRRC; break;
    case PPC::CR2: OpKind = MCK_CRRC; break;
    case PPC::CR3: OpKind = MCK_CRRC; break;
    case PPC::CR4: OpKind = MCK_CRRC; break;
    case PPC::CR5: OpKind = MCK_CRRC; break;
    case PPC::CR6: OpKind = MCK_CRRC; break;
    case PPC::CR7: OpKind = MCK_CRRC; break;
    case PPC::LR: OpKind = MCK_LRRC; break;
    case PPC::LR8: OpKind = MCK_LR8RC; break;
    case PPC::CTR: OpKind = MCK_CTRRC; break;
    case PPC::CTR8: OpKind = MCK_CTRRC8; break;
    case PPC::VRSAVE: OpKind = MCK_VRSAVERC; break;
    case PPC::XER: OpKind = MCK_CARRYRC; break;
    case PPC::CARRY: OpKind = MCK_CARRYRC; break;
    case PPC::ACC0: OpKind = MCK_Reg37; break;
    case PPC::ACC1: OpKind = MCK_Reg37; break;
    case PPC::ACC2: OpKind = MCK_Reg37; break;
    case PPC::ACC3: OpKind = MCK_Reg38; break;
    case PPC::ACC4: OpKind = MCK_ACCRC; break;
    case PPC::ACC5: OpKind = MCK_ACCRC; break;
    case PPC::ACC6: OpKind = MCK_ACCRC; break;
    case PPC::ACC7: OpKind = MCK_ACCRC; break;
    case PPC::UACC0: OpKind = MCK_Reg40; break;
    case PPC::UACC1: OpKind = MCK_Reg40; break;
    case PPC::UACC2: OpKind = MCK_Reg40; break;
    case PPC::UACC3: OpKind = MCK_Reg41; break;
    case PPC::UACC4: OpKind = MCK_UACCRC; break;
    case PPC::UACC5: OpKind = MCK_UACCRC; break;
    case PPC::UACC6: OpKind = MCK_UACCRC; break;
    case PPC::UACC7: OpKind = MCK_UACCRC; break;
    }
    return isSubclass(OpKind, Kind) ? (unsigned)MCTargetAsmParser::Match_Success :
                                      getDiagKindFromRegisterClass(Kind);
  }

  if (Kind > MCK_LAST_TOKEN && Kind <= MCK_LAST_REGISTER)
    return getDiagKindFromRegisterClass(Kind);

  return MCTargetAsmParser::Match_InvalidOperand;
}

#ifndef NDEBUG
const char *getMatchClassName(MatchClassKind Kind) {
  switch (Kind) {
  case InvalidMatchClass: return "InvalidMatchClass";
  case OptionalMatchClass: return "OptionalMatchClass";
  case MCK__DOT_: return "MCK__DOT_";
  case MCK_0: return "MCK_0";
  case MCK_1: return "MCK_1";
  case MCK_2: return "MCK_2";
  case MCK_3: return "MCK_3";
  case MCK_4: return "MCK_4";
  case MCK_5: return "MCK_5";
  case MCK_6: return "MCK_6";
  case MCK_7: return "MCK_7";
  case MCK_crD: return "MCK_crD";
  case MCK_CTRRC: return "MCK_CTRRC";
  case MCK_CTRRC8: return "MCK_CTRRC8";
  case MCK_LR8RC: return "MCK_LR8RC";
  case MCK_LRRC: return "MCK_LRRC";
  case MCK_VRSAVERC: return "MCK_VRSAVERC";
  case MCK_CARRYRC: return "MCK_CARRYRC";
  case MCK_Reg40: return "MCK_Reg40";
  case MCK_Reg37: return "MCK_Reg37";
  case MCK_Reg41: return "MCK_Reg41";
  case MCK_Reg38: return "MCK_Reg38";
  case MCK_Reg21: return "MCK_Reg21";
  case MCK_ACCRC: return "MCK_ACCRC";
  case MCK_CRRC: return "MCK_CRRC";
  case MCK_UACCRC: return "MCK_UACCRC";
  case MCK_Reg25: return "MCK_Reg25";
  case MCK_Reg19: return "MCK_Reg19";
  case MCK_Reg9: return "MCK_Reg9";
  case MCK_Reg28: return "MCK_Reg28";
  case MCK_Reg26: return "MCK_Reg26";
  case MCK_Reg22: return "MCK_Reg22";
  case MCK_G8pRC: return "MCK_G8pRC";
  case MCK_Reg24: return "MCK_Reg24";
  case MCK_Reg15: return "MCK_Reg15";
  case MCK_Reg13: return "MCK_Reg13";
  case MCK_Reg8: return "MCK_Reg8";
  case MCK_CRBITRC: return "MCK_CRBITRC";
  case MCK_F4RC: return "MCK_F4RC";
  case MCK_SPERC: return "MCK_SPERC";
  case MCK_VFRC: return "MCK_VFRC";
  case MCK_VRRC: return "MCK_VRRC";
  case MCK_VSLRC: return "MCK_VSLRC";
  case MCK_VSRpRC: return "MCK_VSRpRC";
  case MCK_Reg6: return "MCK_Reg6";
  case MCK_Reg2: return "MCK_Reg2";
  case MCK_Reg18: return "MCK_Reg18";
  case MCK_Reg12: return "MCK_Reg12";
  case MCK_G8RC: return "MCK_G8RC";
  case MCK_G8RC_NOX0: return "MCK_G8RC_NOX0";
  case MCK_GPRC: return "MCK_GPRC";
  case MCK_GPRC_NOR0: return "MCK_GPRC_NOR0";
  case MCK_VSRC: return "MCK_VSRC";
  case MCK_VSSRC: return "MCK_VSSRC";
  case MCK_SPILLTOVSRRC: return "MCK_SPILLTOVSRRC";
  case MCK_Imm: return "MCK_Imm";
  case MCK_ATBitsAsHint: return "MCK_ATBitsAsHint";
  case MCK_CRBitMask: return "MCK_CRBitMask";
  case MCK_CondBr: return "MCK_CondBr";
  case MCK_DirectBr: return "MCK_DirectBr";
  case MCK_DispRI34: return "MCK_DispRI34";
  case MCK_DispRIHash: return "MCK_DispRIHash";
  case MCK_DispRI: return "MCK_DispRI";
  case MCK_DispRIX16: return "MCK_DispRIX16";
  case MCK_DispRIX: return "MCK_DispRIX";
  case MCK_DispSPE2: return "MCK_DispSPE2";
  case MCK_DispSPE4: return "MCK_DispSPE4";
  case MCK_DispSPE8: return "MCK_DispSPE8";
  case MCK_ImmZero: return "MCK_ImmZero";
  case MCK_RegACCRC: return "MCK_RegACCRC";
  case MCK_RegCRBITRC: return "MCK_RegCRBITRC";
  case MCK_RegCRRC: return "MCK_RegCRRC";
  case MCK_RegF4RC: return "MCK_RegF4RC";
  case MCK_RegF8RC: return "MCK_RegF8RC";
  case MCK_RegG8RC: return "MCK_RegG8RC";
  case MCK_RegG8RCNoX0: return "MCK_RegG8RCNoX0";
  case MCK_RegG8pRC: return "MCK_RegG8pRC";
  case MCK_RegGPRC: return "MCK_RegGPRC";
  case MCK_RegGPRCNoR0: return "MCK_RegGPRCNoR0";
  case MCK_RegGxRCNoR0: return "MCK_RegGxRCNoR0";
  case MCK_RegGxRC: return "MCK_RegGxRC";
  case MCK_RegSPE4RC: return "MCK_RegSPE4RC";
  case MCK_RegSPERC: return "MCK_RegSPERC";
  case MCK_RegSPILLTOVSRRC: return "MCK_RegSPILLTOVSRRC";
  case MCK_RegVFRC: return "MCK_RegVFRC";
  case MCK_RegVRRC: return "MCK_RegVRRC";
  case MCK_RegVSFRC: return "MCK_RegVSFRC";
  case MCK_RegVSRC: return "MCK_RegVSRC";
  case MCK_RegVSRpEvenRC: return "MCK_RegVSRpEvenRC";
  case MCK_RegVSRpRC: return "MCK_RegVSRpRC";
  case MCK_RegVSSRC: return "MCK_RegVSSRC";
  case MCK_S16Imm: return "MCK_S16Imm";
  case MCK_S17Imm: return "MCK_S17Imm";
  case MCK_S34Imm: return "MCK_S34Imm";
  case MCK_S5Imm: return "MCK_S5Imm";
  case MCK_TLSReg: return "MCK_TLSReg";
  case MCK_U10Imm: return "MCK_U10Imm";
  case MCK_U12Imm: return "MCK_U12Imm";
  case MCK_U16Imm: return "MCK_U16Imm";
  case MCK_U1Imm: return "MCK_U1Imm";
  case MCK_U2Imm: return "MCK_U2Imm";
  case MCK_U3Imm: return "MCK_U3Imm";
  case MCK_U4Imm: return "MCK_U4Imm";
  case MCK_U5Imm: return "MCK_U5Imm";
  case MCK_U6Imm: return "MCK_U6Imm";
  case MCK_U7Imm: return "MCK_U7Imm";
  case MCK_U8Imm: return "MCK_U8Imm";
  case NumMatchClassKinds: return "NumMatchClassKinds";
  }
  llvm_unreachable("unhandled MatchClassKind!");
}

#endif // NDEBUG
FeatureBitset PPCAsmParser::
ComputeAvailableFeatures(const FeatureBitset &FB) const {
  FeatureBitset Features;
  if (!FB[PPC::AIXOS] || FB[PPC::FeatureModernAIXAs])
    Features.set(Feature_ModernAsBit);
  return Features;
}

static bool checkAsmTiedOperandConstraints(const PPCAsmParser&AsmParser,
                               unsigned Kind,
                               const OperandVector &Operands,
                               uint64_t &ErrorInfo) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p += 2) {
    switch (*p) {
    case CVT_Tied: {
      unsigned OpIdx = *(p + 1);
      assert(OpIdx < (size_t)(std::end(TiedAsmOperandTable) -
                              std::begin(TiedAsmOperandTable)) &&
             "Tied operand not found");
      unsigned OpndNum1 = TiedAsmOperandTable[OpIdx][1];
      unsigned OpndNum2 = TiedAsmOperandTable[OpIdx][2];
      if (OpndNum1 != OpndNum2) {
        auto &SrcOp1 = Operands[OpndNum1];
        auto &SrcOp2 = Operands[OpndNum2];
        if (SrcOp1->isReg() && SrcOp2->isReg()) {
          if (!AsmParser.regsEqual(*SrcOp1, *SrcOp2)) {
            ErrorInfo = OpndNum2;
            return false;
          }
        }
      }
      break;
    }
    default:
      break;
    }
  }
  return true;
}

static const char MnemonicTable[] =
    "\003add\004addc\005addco\004adde\005addeo\005addex\004addi\005addic\005"
    "addis\005addme\006addmeo\004addo\007addpcis\005addze\006addzeo\003and\004"
    "andc\004andi\005andis\004attn\001b\002ba\002bc\003bc+\003bc-\003bca\004"
    "bca+\004bca-\005bcctr\006bcctrl\006bcdadd\006bcdcfn\007bcdcfsq\006bcdcf"
    "z\010bcdcpsgn\006bcdctn\007bcdctsq\006bcdctz\004bcds\tbcdsetsgn\005bcds"
    "r\006bcdsub\010bcdtrunc\005bcdus\tbcdutrunc\003bcl\004bcl+\004bcl-\004b"
    "cla\005bcla+\005bcla-\004bclr\005bclrl\004bctr\005bctrl\004bdnz\005bdnz"
    "+\005bdnz-\005bdnza\006bdnza+\006bdnza-\005bdnzf\006bdnzfa\006bdnzfl\007"
    "bdnzfla\007bdnzflr\010bdnzflrl\005bdnzl\006bdnzl+\006bdnzl-\006bdnzla\007"
    "bdnzla+\007bdnzla-\006bdnzlr\007bdnzlr+\007bdnzlr-\007bdnzlrl\010bdnzlr"
    "l+\010bdnzlrl-\005bdnzt\006bdnzta\006bdnztl\007bdnztla\007bdnztlr\010bd"
    "nztlrl\003bdz\004bdz+\004bdz-\004bdza\005bdza+\005bdza-\004bdzf\005bdzf"
    "a\005bdzfl\006bdzfla\006bdzflr\007bdzflrl\004bdzl\005bdzl+\005bdzl-\005"
    "bdzla\006bdzla+\006bdzla-\005bdzlr\006bdzlr+\006bdzlr-\006bdzlrl\007bdz"
    "lrl+\007bdzlrl-\004bdzt\005bdzta\005bdztl\006bdztla\006bdztlr\007bdztlr"
    "l\003beq\004beq+\004beq-\004beqa\005beqa+\005beqa-\006beqctr\007beqctr+"
    "\007beqctr-\007beqctrl\010beqctrl+\010beqctrl-\004beql\005beql+\005beql"
    "-\005beqla\006beqla+\006beqla-\005beqlr\006beqlr+\006beqlr-\006beqlrl\007"
    "beqlrl+\007beqlrl-\002bf\003bf+\003bf-\003bfa\004bfa+\004bfa-\005bfctr\006"
    "bfctr+\006bfctr-\006bfctrl\007bfctrl+\007bfctrl-\003bfl\004bfl+\004bfl-"
    "\004bfla\005bfla+\005bfla-\004bflr\005bflr+\005bflr-\005bflrl\006bflrl+"
    "\006bflrl-\003bge\004bge+\004bge-\004bgea\005bgea+\005bgea-\006bgectr\007"
    "bgectr+\007bgectr-\007bgectrl\010bgectrl+\010bgectrl-\004bgel\005bgel+\005"
    "bgel-\005bgela\006bgela+\006bgela-\005bgelr\006bgelr+\006bgelr-\006bgel"
    "rl\007bgelrl+\007bgelrl-\003bgt\004bgt+\004bgt-\004bgta\005bgta+\005bgt"
    "a-\006bgtctr\007bgtctr+\007bgtctr-\007bgtctrl\010bgtctrl+\010bgtctrl-\004"
    "bgtl\005bgtl+\005bgtl-\005bgtla\006bgtla+\006bgtla-\005bgtlr\006bgtlr+\006"
    "bgtlr-\006bgtlrl\007bgtlrl+\007bgtlrl-\002bl\003bla\003ble\004ble+\004b"
    "le-\004blea\005blea+\005blea-\006blectr\007blectr+\007blectr-\007blectr"
    "l\010blectrl+\010blectrl-\004blel\005blel+\005blel-\005blela\006blela+\006"
    "blela-\005blelr\006blelr+\006blelr-\006blelrl\007blelrl+\007blelrl-\003"
    "blr\004blrl\003blt\004blt+\004blt-\004blta\005blta+\005blta-\006bltctr\007"
    "bltctr+\007bltctr-\007bltctrl\010bltctrl+\010bltctrl-\004bltl\005bltl+\005"
    "bltl-\005bltla\006bltla+\006bltla-\005bltlr\006bltlr+\006bltlr-\006bltl"
    "rl\007bltlrl+\007bltlrl-\003bne\004bne+\004bne-\004bnea\005bnea+\005bne"
    "a-\006bnectr\007bnectr+\007bnectr-\007bnectrl\010bnectrl+\010bnectrl-\004"
    "bnel\005bnel+\005bnel-\005bnela\006bnela+\006bnela-\005bnelr\006bnelr+\006"
    "bnelr-\006bnelrl\007bnelrl+\007bnelrl-\003bng\004bng+\004bng-\004bnga\005"
    "bnga+\005bnga-\006bngctr\007bngctr+\007bngctr-\007bngctrl\010bngctrl+\010"
    "bngctrl-\004bngl\005bngl+\005bngl-\005bngla\006bngla+\006bngla-\005bngl"
    "r\006bnglr+\006bnglr-\006bnglrl\007bnglrl+\007bnglrl-\003bnl\004bnl+\004"
    "bnl-\004bnla\005bnla+\005bnla-\006bnlctr\007bnlctr+\007bnlctr-\007bnlct"
    "rl\010bnlctrl+\010bnlctrl-\004bnll\005bnll+\005bnll-\005bnlla\006bnlla+"
    "\006bnlla-\005bnllr\006bnllr+\006bnllr-\006bnllrl\007bnllrl+\007bnllrl-"
    "\003bns\004bns+\004bns-\004bnsa\005bnsa+\005bnsa-\006bnsctr\007bnsctr+\007"
    "bnsctr-\007bnsctrl\010bnsctrl+\010bnsctrl-\004bnsl\005bnsl+\005bnsl-\005"
    "bnsla\006bnsla+\006bnsla-\005bnslr\006bnslr+\006bnslr-\006bnslrl\007bns"
    "lrl+\007bnslrl-\003bnu\004bnu+\004bnu-\004bnua\005bnua+\005bnua-\006bnu"
    "ctr\007bnuctr+\007bnuctr-\007bnuctrl\010bnuctrl+\010bnuctrl-\004bnul\005"
    "bnul+\005bnul-\005bnula\006bnula+\006bnula-\005bnulr\006bnulr+\006bnulr"
    "-\006bnulrl\007bnulrl+\007bnulrl-\006bpermd\005brinc\003bso\004bso+\004"
    "bso-\004bsoa\005bsoa+\005bsoa-\006bsoctr\007bsoctr+\007bsoctr-\007bsoct"
    "rl\010bsoctrl+\010bsoctrl-\004bsol\005bsol+\005bsol-\005bsola\006bsola+"
    "\006bsola-\005bsolr\006bsolr+\006bsolr-\006bsolrl\007bsolrl+\007bsolrl-"
    "\002bt\003bt+\003bt-\003bta\004bta+\004bta-\005btctr\006btctr+\006btctr"
    "-\006btctrl\007btctrl+\007btctrl-\003btl\004btl+\004btl-\004btla\005btl"
    "a+\005btla-\004btlr\005btlr+\005btlr-\005btlrl\006btlrl+\006btlrl-\003b"
    "un\004bun+\004bun-\004buna\005buna+\005buna-\006bunctr\007bunctr+\007bu"
    "nctr-\007bunctrl\010bunctrl+\010bunctrl-\004bunl\005bunl+\005bunl-\005b"
    "unla\006bunla+\006bunla-\005bunlr\006bunlr+\006bunlr-\006bunlrl\007bunl"
    "rl+\007bunlrl-\006cfuged\007clrbhrb\006clrldi\010clrlsldi\010clrlslwi\006"
    "clrlwi\006clrrdi\006clrrwi\003cmp\004cmpb\004cmpd\005cmpdi\006cmpeqb\004"
    "cmpi\004cmpl\005cmpld\006cmpldi\005cmpli\005cmplw\006cmplwi\005cmprb\004"
    "cmpw\005cmpwi\006cntlzd\007cntlzdm\006cntlzw\006cnttzd\007cnttzdm\006cn"
    "ttzw\004copy\007cpabort\005crand\006crandc\005crclr\005creqv\006crmove\006"
    "crnand\005crnor\005crnot\004cror\005crorc\005crset\005crxor\004darn\004"
    "dcba\004dcbf\006dcbfep\005dcbfl\006dcbflp\006dcbfps\004dcbi\005dcbst\007"
    "dcbstep\007dcbstps\004dcbt\006dcbtct\006dcbtds\006dcbtep\006dcbtst\010d"
    "cbtstct\010dcbtstds\010dcbtstep\007dcbtstt\005dcbtt\004dcbz\006dcbzep\005"
    "dcbzl\007dcbzlep\005dccci\003dci\004divd\005divde\006divdeo\006divdeu\007"
    "divdeuo\005divdo\005divdu\006divduo\004divw\005divwe\006divweo\006divwe"
    "u\007divweuo\005divwo\005divwu\006divwuo\003dss\006dssall\003dst\005dst"
    "st\006dststt\004dstt\006efdabs\006efdadd\006efdcfs\007efdcfsf\007efdcfs"
    "i\010efdcfsid\007efdcfuf\007efdcfui\010efdcfuid\010efdcmpeq\010efdcmpgt"
    "\010efdcmplt\007efdctsf\007efdctsi\tefdctsidz\010efdctsiz\007efdctuf\007"
    "efdctui\tefdctuidz\010efdctuiz\006efddiv\006efdmul\007efdnabs\006efdneg"
    "\006efdsub\010efdtsteq\010efdtstgt\010efdtstlt\006efsabs\006efsadd\006e"
    "fscfd\007efscfsf\007efscfsi\007efscfuf\007efscfui\010efscmpeq\010efscmp"
    "gt\010efscmplt\007efsctsf\007efsctsi\010efsctsiz\007efsctuf\007efsctui\010"
    "efsctuiz\006efsdiv\006efsmul\007efsnabs\006efsneg\006efssub\010efststeq"
    "\010efststgt\010efststlt\005eieio\003eqv\005evabs\007evaddiw\013evaddsm"
    "iaaw\013evaddssiaaw\013evaddumiaaw\013evaddusiaaw\006evaddw\005evand\006"
    "evandc\007evcmpeq\010evcmpgts\010evcmpgtu\010evcmplts\010evcmpltu\010ev"
    "cntlsw\010evcntlzw\007evdivws\007evdivwu\005eveqv\007evextsb\007evextsh"
    "\007evfsabs\007evfsadd\010evfscfsf\010evfscfsi\010evfscfuf\010evfscfui\t"
    "evfscmpeq\tevfscmpgt\tevfscmplt\010evfsctsf\010evfsctsi\tevfsctsiz\010e"
    "vfsctui\007evfsdiv\007evfsmul\010evfsnabs\007evfsneg\007evfssub\tevfsts"
    "teq\tevfststgt\tevfststlt\005evldd\006evlddx\005evldh\006evldhx\005evld"
    "w\006evldwx\013evlhhesplat\014evlhhesplatx\014evlhhossplat\015evlhhossp"
    "latx\014evlhhousplat\015evlhhousplatx\006evlwhe\007evlwhex\007evlwhos\010"
    "evlwhosx\007evlwhou\010evlwhoux\nevlwhsplat\013evlwhsplatx\nevlwwsplat\013"
    "evlwwsplatx\tevmergehi\013evmergehilo\tevmergelo\013evmergelohi\013evmh"
    "egsmfaa\013evmhegsmfan\013evmhegsmiaa\013evmhegsmian\013evmhegumiaa\013"
    "evmhegumian\010evmhesmf\tevmhesmfa\013evmhesmfaaw\013evmhesmfanw\010evm"
    "hesmi\tevmhesmia\013evmhesmiaaw\013evmhesmianw\010evmhessf\tevmhessfa\013"
    "evmhessfaaw\013evmhessfanw\013evmhessiaaw\013evmhessianw\010evmheumi\te"
    "vmheumia\013evmheumiaaw\013evmheumianw\013evmheusiaaw\013evmheusianw\013"
    "evmhogsmfaa\013evmhogsmfan\013evmhogsmiaa\013evmhogsmian\013evmhogumiaa"
    "\013evmhogumian\010evmhosmf\tevmhosmfa\013evmhosmfaaw\013evmhosmfanw\010"
    "evmhosmi\tevmhosmia\013evmhosmiaaw\013evmhosmianw\010evmhossf\tevmhossf"
    "a\013evmhossfaaw\013evmhossfanw\013evmhossiaaw\013evmhossianw\010evmhou"
    "mi\tevmhoumia\013evmhoumiaaw\013evmhoumianw\013evmhousiaaw\013evmhousia"
    "nw\005evmra\010evmwhsmf\tevmwhsmfa\010evmwhsmi\tevmwhsmia\010evmwhssf\t"
    "evmwhssfa\010evmwhumi\tevmwhumia\013evmwlsmiaaw\013evmwlsmianw\013evmwl"
    "ssiaaw\013evmwlssianw\010evmwlumi\tevmwlumia\013evmwlumiaaw\013evmwlumi"
    "anw\013evmwlusiaaw\013evmwlusianw\007evmwsmf\010evmwsmfa\tevmwsmfaa\tev"
    "mwsmfan\007evmwsmi\010evmwsmia\tevmwsmiaa\tevmwsmian\007evmwssf\010evmw"
    "ssfa\tevmwssfaa\tevmwssfan\007evmwumi\010evmwumia\tevmwumiaa\tevmwumian"
    "\006evnand\005evneg\005evnor\004evor\005evorc\005evrlw\006evrlwi\006evr"
    "ndw\005evsel\005evslw\006evslwi\tevsplatfi\010evsplati\007evsrwis\007ev"
    "srwiu\006evsrws\006evsrwu\006evstdd\007evstddx\006evstdh\007evstdhx\006"
    "evstdw\007evstdwx\007evstwhe\010evstwhex\007evstwho\010evstwhox\007evst"
    "wwe\010evstwwex\007evstwwo\010evstwwox\014evsubfsmiaaw\014evsubfssiaaw\014"
    "evsubfumiaaw\014evsubfusiaaw\007evsubfw\010evsubifw\005evxor\006extldi\006"
    "extlwi\006extrdi\006extrwi\005extsb\005extsh\005extsw\010extswsli\004fa"
    "bs\004fadd\005fadds\005fcfid\006fcfids\006fcfidu\007fcfidus\005fcmpo\005"
    "fcmpu\006fcpsgn\005fctid\006fctidu\007fctiduz\006fctidz\005fctiw\006fct"
    "iwu\007fctiwuz\006fctiwz\004fdiv\005fdivs\005fmadd\006fmadds\003fmr\005"
    "fmsub\006fmsubs\004fmul\005fmuls\005fnabs\004fneg\006fnmadd\007fnmadds\006"
    "fnmsub\007fnmsubs\003fre\004fres\004frim\004frin\004frip\004friz\004frs"
    "p\007frsqrte\010frsqrtes\004fsel\005fsqrt\006fsqrts\004fsub\005fsubs\005"
    "ftdiv\006ftsqrt\007hashchk\010hashchkp\006hashst\007hashstp\005hrfid\006"
    "hwsync\004icbi\006icbiep\005icblc\005icblq\004icbt\006icbtls\005iccci\003"
    "ici\006inslwi\006insrdi\006insrwi\004isel\006iseleq\006iselgt\006isellt"
    "\005isync\002la\005lbarx\005lbepx\003lbz\006lbzcix\004lbzu\005lbzux\004"
    "lbzx\002ld\005ldarx\004ldat\005ldbrx\005ldcix\003ldu\004ldux\003ldx\003"
    "lfd\006lfdepx\004lfdu\005lfdux\004lfdx\006lfiwax\006lfiwzx\003lfs\004lf"
    "su\005lfsux\004lfsx\003lha\005lharx\004lhau\005lhaux\004lhax\005lhbrx\005"
    "lhepx\003lhz\006lhzcix\004lhzu\005lhzux\004lhzx\002li\003lis\003lmw\004"
    "lnia\002lq\005lqarx\004lswi\005lvebx\005lvehx\005lvewx\004lvsl\004lvsr\003"
    "lvx\004lvxl\003lwa\005lwarx\004lwat\005lwaux\004lwax\005lwbrx\005lwepx\006"
    "lwsync\003lwz\006lwzcix\004lwzu\005lwzux\004lwzx\004lxsd\005lxsdx\007lx"
    "sibzx\007lxsihzx\007lxsiwax\007lxsiwzx\005lxssp\006lxsspx\003lxv\007lxv"
    "b16x\006lxvd2x\006lxvdsx\006lxvh8x\005lxvkq\004lxvl\005lxvll\004lxvp\005"
    "lxvpx\006lxvrbx\006lxvrdx\006lxvrhx\006lxvrwx\006lxvw4x\006lxvwsx\004lx"
    "vx\006maddhd\007maddhdu\006maddld\004mbar\004mcrf\005mcrfs\006mcrxrx\005"
    "mfamr\005mfasr\007mfbhrbe\005mfbr0\005mfbr1\005mfbr2\005mfbr3\005mfbr4\005"
    "mfbr5\005mfbr6\005mfbr7\006mfcfar\004mfcr\005mfctr\005mfdar\007mfdbatl\007"
    "mfdbatu\006mfdccr\005mfdcr\006mfdear\005mfdec\006mfdscr\007mfdsisr\005m"
    "fesr\006mffprd\007mffprwz\004mffs\010mffscdrn\tmffscdrni\006mffsce\007m"
    "ffscrn\010mffscrni\005mffsl\007mfibatl\007mfibatu\006mficcr\004mflr\005"
    "mfmsr\006mfocrf\005mfpid\005mfpmr\005mfppr\005mfpvr\006mfrtcl\006mfrtcu"
    "\006mfsdr1\tmfspefscr\005mfspr\006mfsprg\007mfsprg0\007mfsprg1\007mfspr"
    "g2\007mfsprg3\007mfsprg4\007mfsprg5\007mfsprg6\007mfsprg7\004mfsr\006mf"
    "srin\006mfsrr0\006mfsrr1\006mfsrr2\006mfsrr3\004mftb\006mftbhi\005mftbl"
    "\006mftblo\005mftbu\005mftcr\006mfuamr\007mfudscr\005mfvrd\010mfvrsave\006"
    "mfvrwz\006mfvscr\006mfvsrd\007mfvsrld\007mfvsrwz\005mfxer\005modsd\005m"
    "odsw\005modud\005moduw\002mr\007msgsync\005msync\005mtamr\005mtasr\005m"
    "tbr0\005mtbr1\005mtbr2\005mtbr3\005mtbr4\005mtbr5\005mtbr6\005mtbr7\006"
    "mtcfar\004mtcr\005mtcrf\005mtctr\005mtdar\007mtdbatl\007mtdbatu\006mtdc"
    "cr\005mtdcr\006mtdear\005mtdec\006mtdscr\007mtdsisr\005mtesr\006mtfprd\007"
    "mtfprwa\007mtfprwz\006mtfsb0\006mtfsb1\005mtfsf\006mtfsfi\007mtibatl\007"
    "mtibatu\006mticcr\004mtlr\005mtmsr\006mtmsrd\006mtocrf\005mtpid\005mtpm"
    "r\005mtppr\006mtsdr1\tmtspefscr\005mtspr\006mtsprg\007mtsprg0\007mtsprg"
    "1\007mtsprg2\007mtsprg3\007mtsprg4\007mtsprg5\007mtsprg6\007mtsprg7\004"
    "mtsr\006mtsrin\006mtsrr0\006mtsrr1\006mtsrr2\006mtsrr3\006mttbhi\005mtt"
    "bl\006mttblo\005mttbu\005mttcr\006mtuamr\007mtudscr\005mtvrd\010mtvrsav"
    "e\006mtvrwa\006mtvrwz\006mtvscr\007mtvsrbm\010mtvsrbmi\006mtvsrd\007mtv"
    "srdd\007mtvsrdm\007mtvsrhm\007mtvsrqm\007mtvsrwa\007mtvsrwm\007mtvsrws\007"
    "mtvsrwz\005mtxer\005mulhd\006mulhdu\005mulhw\006mulhwu\005mulld\006mull"
    "do\005mulli\005mullw\006mullwo\004nand\003nap\003neg\004nego\003nop\003"
    "nor\003not\002or\003orc\003ori\004oris\005paddi\005paste\005pdepd\005pe"
    "xtd\004plbz\003pld\004plfd\004plfs\004plha\004plhz\003pli\004plwa\004pl"
    "wz\005plxsd\006plxssp\004plxv\005plxvp\014pmxvbf16ger2\016pmxvbf16ger2n"
    "n\016pmxvbf16ger2np\016pmxvbf16ger2pn\016pmxvbf16ger2pp\013pmxvf16ger2\015"
    "pmxvf16ger2nn\015pmxvf16ger2np\015pmxvf16ger2pn\015pmxvf16ger2pp\npmxvf"
    "32ger\014pmxvf32gernn\014pmxvf32gernp\014pmxvf32gerpn\014pmxvf32gerpp\n"
    "pmxvf64ger\014pmxvf64gernn\014pmxvf64gernp\014pmxvf64gerpn\014pmxvf64ge"
    "rpp\013pmxvi16ger2\015pmxvi16ger2pp\014pmxvi16ger2s\016pmxvi16ger2spp\n"
    "pmxvi4ger8\014pmxvi4ger8pp\npmxvi8ger4\014pmxvi8ger4pp\015pmxvi8ger4spp"
    "\007popcntb\007popcntd\007popcntw\004pstb\004pstd\005pstfd\005pstfs\004"
    "psth\004pstw\006pstxsd\007pstxssp\005pstxv\006pstxvp\007ptesync\004rfci"
    "\004rfdi\005rfebb\003rfi\004rfid\005rfmci\005rldcl\005rldcr\005rldic\006"
    "rldicl\006rldicr\006rldimi\006rlwimi\006rlwinm\005rlwnm\005rotld\006rot"
    "ldi\005rotlw\006rotlwi\006rotrdi\006rotrwi\002sc\004setb\005setbc\006se"
    "tbcr\006setnbc\007setnbcr\006slbfee\005slbia\005slbie\006slbieg\007slbm"
    "fee\007slbmfev\006slbmte\007slbsync\003sld\004sldi\003slw\004slwi\004sr"
    "ad\005sradi\004sraw\005srawi\003srd\004srdi\003srw\004srwi\003stb\006st"
    "bcix\005stbcx\006stbepx\004stbu\005stbux\004stbx\003std\005stdat\006std"
    "brx\006stdcix\005stdcx\004stdu\005stdux\004stdx\004stfd\007stfdepx\005s"
    "tfdu\006stfdux\005stfdx\006stfiwx\004stfs\005stfsu\006stfsux\005stfsx\003"
    "sth\006sthbrx\006sthcix\005sthcx\006sthepx\004sthu\005sthux\004sthx\004"
    "stmw\004stop\003stq\005stqcx\005stswi\006stvebx\006stvehx\006stvewx\004"
    "stvx\005stvxl\003stw\005stwat\006stwbrx\006stwcix\005stwcx\006stwepx\004"
    "stwu\005stwux\004stwx\005stxsd\006stxsdx\007stxsibx\007stxsihx\007stxsi"
    "wx\006stxssp\007stxsspx\004stxv\010stxvb16x\007stxvd2x\007stxvh8x\005st"
    "xvl\006stxvll\005stxvp\006stxvpx\007stxvrbx\007stxvrdx\007stxvrhx\007st"
    "xvrwx\007stxvw4x\005stxvx\003sub\004subc\004subf\005subfc\006subfco\005"
    "subfe\006subfeo\006subfic\006subfme\007subfmeo\005subfo\006subfze\007su"
    "bfzeo\004subi\005subic\005subis\007subpcis\004sync\006tabort\010tabortd"
    "c\ttabortdci\010tabortwc\ttabortwci\006tbegin\006tcheck\002td\004tdeq\005"
    "tdeqi\004tdge\005tdgei\004tdgt\005tdgti\003tdi\004tdle\005tdlei\005tdlg"
    "e\006tdlgei\005tdlgt\006tdlgti\005tdlle\006tdllei\005tdllt\006tdllti\005"
    "tdlng\006tdlngi\005tdlnl\006tdlnli\004tdlt\005tdlti\004tdne\005tdnei\004"
    "tdng\005tdngi\004tdnl\005tdnli\003tdu\004tdui\004tend\007tendall\005tlb"
    "ia\005tlbie\006tlbiel\007tlbivax\005tlbld\005tlbli\005tlbre\007tlbrehi\007"
    "tlbrelo\005tlbsx\007tlbsync\005tlbwe\007tlbwehi\007tlbwelo\004trap\010t"
    "rechkpt\010treclaim\007tresume\003tsr\010tsuspend\002tw\004tweq\005tweq"
    "i\004twge\005twgei\004twgt\005twgti\003twi\004twle\005twlei\005twlge\006"
    "twlgei\005twlgt\006twlgti\005twlle\006twllei\005twllt\006twllti\005twln"
    "g\006twlngi\005twlnl\006twlnli\004twlt\005twlti\004twne\005twnei\004twn"
    "g\005twngi\004twnl\005twnli\003twu\004twui\007vabsdub\007vabsduh\007vab"
    "sduw\007vaddcuq\007vaddcuw\010vaddecuq\010vaddeuqm\006vaddfp\007vaddsbs"
    "\007vaddshs\007vaddsws\007vaddubm\007vaddubs\007vaddudm\007vadduhm\007v"
    "adduhs\007vadduqm\007vadduwm\007vadduws\004vand\005vandc\006vavgsb\006v"
    "avgsh\006vavgsw\006vavgub\006vavguh\006vavguw\007vbpermd\007vbpermq\005"
    "vcfsx\007vcfuged\005vcfux\007vcipher\013vcipherlast\006vclrlb\006vclrrb"
    "\005vclzb\005vclzd\006vclzdm\005vclzh\010vclzlsbb\005vclzw\007vcmpbfp\010"
    "vcmpeqfp\010vcmpequb\010vcmpequd\010vcmpequh\010vcmpequq\010vcmpequw\010"
    "vcmpgefp\010vcmpgtfp\010vcmpgtsb\010vcmpgtsd\010vcmpgtsh\010vcmpgtsq\010"
    "vcmpgtsw\010vcmpgtub\010vcmpgtud\010vcmpgtuh\010vcmpgtuq\010vcmpgtuw\007"
    "vcmpneb\007vcmpneh\007vcmpnew\010vcmpnezb\010vcmpnezh\010vcmpnezw\006vc"
    "mpsq\006vcmpuq\007vcntmbb\007vcntmbd\007vcntmbh\007vcntmbw\006vctsxs\006"
    "vctuxs\005vctzb\005vctzd\006vctzdm\005vctzh\010vctzlsbb\005vctzw\007vdi"
    "vesd\007vdivesq\007vdivesw\007vdiveud\007vdiveuq\007vdiveuw\006vdivsd\006"
    "vdivsq\006vdivsw\006vdivud\006vdivuq\006vdivuw\004veqv\tvexpandbm\tvexp"
    "anddm\tvexpandhm\tvexpandqm\tvexpandwm\010vexptefp\tvextddvlx\tvextddvr"
    "x\nvextdubvlx\nvextdubvrx\nvextduhvlx\nvextduhvrx\nvextduwvlx\nvextduwv"
    "rx\nvextractbm\tvextractd\nvextractdm\nvextracthm\nvextractqm\nvextract"
    "ub\nvextractuh\nvextractuw\nvextractwm\010vextsb2d\010vextsb2w\010vexts"
    "d2q\010vextsh2d\010vextsh2w\010vextsw2d\010vextublx\010vextubrx\010vext"
    "uhlx\010vextuhrx\010vextuwlx\010vextuwrx\005vgbbd\004vgnb\007vinsblx\007"
    "vinsbrx\010vinsbvlx\010vinsbvrx\005vinsd\007vinsdlx\007vinsdrx\010vinse"
    "rtb\010vinsertd\010vinserth\010vinsertw\007vinshlx\007vinshrx\010vinshv"
    "lx\010vinshvrx\005vinsw\007vinswlx\007vinswrx\010vinswvlx\010vinswvrx\007"
    "vlogefp\007vmaddfp\006vmaxfp\006vmaxsb\006vmaxsd\006vmaxsh\006vmaxsw\006"
    "vmaxub\006vmaxud\006vmaxuh\006vmaxuw\tvmhaddshs\nvmhraddshs\006vminfp\006"
    "vminsb\006vminsd\006vminsh\006vminsw\006vminub\006vminud\006vminuh\006v"
    "minuw\tvmladduhm\006vmodsd\006vmodsq\006vmodsw\006vmodud\006vmoduq\006v"
    "moduw\003vmr\006vmrgew\006vmrghb\006vmrghh\006vmrghw\006vmrglb\006vmrgl"
    "h\006vmrglw\006vmrgow\010vmsumcud\010vmsummbm\010vmsumshm\010vmsumshs\010"
    "vmsumubm\010vmsumudm\010vmsumuhm\010vmsumuhs\tvmul10cuq\nvmul10ecuq\tvm"
    "ul10euq\010vmul10uq\007vmulesb\007vmulesd\007vmulesh\007vmulesw\007vmul"
    "eub\007vmuleud\007vmuleuh\007vmuleuw\007vmulhsd\007vmulhsw\007vmulhud\007"
    "vmulhuw\006vmulld\007vmulosb\007vmulosd\007vmulosh\007vmulosw\007vmulou"
    "b\007vmuloud\007vmulouh\007vmulouw\007vmuluwm\005vnand\010vncipher\014v"
    "ncipherlast\005vnegd\005vnegw\010vnmsubfp\004vnor\004vnot\003vor\004vor"
    "c\006vpdepd\005vperm\006vpermr\010vpermxor\006vpextd\005vpkpx\007vpksds"
    "s\007vpksdus\007vpkshss\007vpkshus\007vpkswss\007vpkswus\007vpkudum\007"
    "vpkudus\007vpkuhum\007vpkuhus\007vpkuwum\007vpkuwus\007vpmsumb\007vpmsu"
    "md\007vpmsumh\007vpmsumw\010vpopcntb\010vpopcntd\010vpopcnth\010vpopcnt"
    "w\007vprtybd\007vprtybq\007vprtybw\005vrefp\005vrfim\005vrfin\005vrfip\005"
    "vrfiz\004vrlb\004vrld\006vrldmi\006vrldnm\004vrlh\004vrlq\006vrlqmi\006"
    "vrlqnm\004vrlw\006vrlwmi\006vrlwnm\tvrsqrtefp\005vsbox\004vsel\nvshasig"
    "mad\nvshasigmaw\003vsl\004vslb\004vsld\006vsldbi\006vsldoi\004vslh\004v"
    "slo\004vslq\004vslv\004vslw\006vspltb\006vsplth\010vspltisb\010vspltish"
    "\010vspltisw\006vspltw\003vsr\005vsrab\005vsrad\005vsrah\005vsraq\005vs"
    "raw\004vsrb\004vsrd\006vsrdbi\004vsrh\004vsro\004vsrq\004vsrv\004vsrw\007"
    "vstribl\007vstribr\007vstrihl\007vstrihr\007vsubcuq\007vsubcuw\010vsube"
    "cuq\010vsubeuqm\006vsubfp\007vsubsbs\007vsubshs\007vsubsws\007vsububm\007"
    "vsububs\007vsubudm\007vsubuhm\007vsubuhs\007vsubuqm\007vsubuwm\007vsubu"
    "ws\010vsum2sws\010vsum4sbs\010vsum4shs\010vsum4ubs\007vsumsws\007vupkhp"
    "x\007vupkhsb\007vupkhsh\007vupkhsw\007vupklpx\007vupklsb\007vupklsh\007"
    "vupklsw\004vxor\004wait\010waitimpl\007waitrsv\005wrtee\006wrteei\004xn"
    "op\003xor\004xori\005xoris\007xsabsdp\007xsabsqp\007xsadddp\007xsaddqp\010"
    "xsaddqpo\007xsaddsp\txscmpeqdp\nxscmpexpdp\nxscmpexpqp\txscmpgedp\txscm"
    "pgtdp\010xscmpodp\010xscmpoqp\010xscmpudp\010xscmpuqp\txscpsgndp\txscps"
    "gnqp\010xscvdphp\010xscvdpqp\010xscvdpsp\txscvdpspn\nxscvdpsxds\nxscvdp"
    "sxws\nxscvdpuxds\nxscvdpuxws\010xscvhpdp\010xscvqpdp\txscvqpdpo\txscvqp"
    "sdz\txscvqpsqz\txscvqpswz\txscvqpudz\txscvqpuqz\txscvqpuwz\010xscvsdqp\010"
    "xscvspdp\txscvspdpn\010xscvsqqp\txscvsxddp\txscvsxdsp\010xscvudqp\010xs"
    "cvuqqp\txscvuxddp\txscvuxdsp\007xsdivdp\007xsdivqp\010xsdivqpo\007xsdiv"
    "sp\010xsiexpdp\010xsiexpqp\txsmaddadp\txsmaddasp\txsmaddmdp\txsmaddmsp\010"
    "xsmaddqp\txsmaddqpo\010xsmaxcdp\010xsmaxcqp\007xsmaxdp\010xsmaxjdp\010x"
    "smincdp\010xsmincqp\007xsmindp\010xsminjdp\txsmsubadp\txsmsubasp\txsmsu"
    "bmdp\txsmsubmsp\010xsmsubqp\txsmsubqpo\007xsmuldp\007xsmulqp\010xsmulqp"
    "o\007xsmulsp\010xsnabsdp\010xsnabsqp\007xsnegdp\007xsnegqp\nxsnmaddadp\n"
    "xsnmaddasp\nxsnmaddmdp\nxsnmaddmsp\txsnmaddqp\nxsnmaddqpo\nxsnmsubadp\n"
    "xsnmsubasp\nxsnmsubmdp\nxsnmsubmsp\txsnmsubqp\nxsnmsubqpo\006xsrdpi\007"
    "xsrdpic\007xsrdpim\007xsrdpip\007xsrdpiz\006xsredp\006xsresp\006xsrqpi\007"
    "xsrqpix\007xsrqpxp\005xsrsp\nxsrsqrtedp\nxsrsqrtesp\010xssqrtdp\010xssq"
    "rtqp\txssqrtqpo\010xssqrtsp\007xssubdp\007xssubqp\010xssubqpo\007xssubs"
    "p\010xstdivdp\txstsqrtdp\txststdcdp\txststdcqp\txststdcsp\010xsxexpdp\010"
    "xsxexpqp\010xsxsigdp\010xsxsigqp\007xvabsdp\007xvabssp\007xvadddp\007xv"
    "addsp\nxvbf16ger2\014xvbf16ger2nn\014xvbf16ger2np\014xvbf16ger2pn\014xv"
    "bf16ger2pp\txvcmpeqdp\txvcmpeqsp\txvcmpgedp\txvcmpgesp\txvcmpgtdp\txvcm"
    "pgtsp\txvcpsgndp\txvcpsgnsp\013xvcvbf16spn\010xvcvdpsp\nxvcvdpsxds\nxvc"
    "vdpsxws\nxvcvdpuxds\nxvcvdpuxws\010xvcvhpsp\nxvcvspbf16\010xvcvspdp\010"
    "xvcvsphp\nxvcvspsxds\nxvcvspsxws\nxvcvspuxds\nxvcvspuxws\txvcvsxddp\txv"
    "cvsxdsp\txvcvsxwdp\txvcvsxwsp\txvcvuxddp\txvcvuxdsp\txvcvuxwdp\txvcvuxw"
    "sp\007xvdivdp\007xvdivsp\txvf16ger2\013xvf16ger2nn\013xvf16ger2np\013xv"
    "f16ger2pn\013xvf16ger2pp\010xvf32ger\nxvf32gernn\nxvf32gernp\nxvf32gerp"
    "n\nxvf32gerpp\010xvf64ger\nxvf64gernn\nxvf64gernp\nxvf64gerpn\nxvf64ger"
    "pp\txvi16ger2\013xvi16ger2pp\nxvi16ger2s\014xvi16ger2spp\010xvi4ger8\nx"
    "vi4ger8pp\010xvi8ger4\nxvi8ger4pp\013xvi8ger4spp\010xviexpdp\010xviexps"
    "p\txvmaddadp\txvmaddasp\txvmaddmdp\txvmaddmsp\007xvmaxdp\007xvmaxsp\007"
    "xvmindp\007xvminsp\007xvmovdp\007xvmovsp\txvmsubadp\txvmsubasp\txvmsubm"
    "dp\txvmsubmsp\007xvmuldp\007xvmulsp\010xvnabsdp\010xvnabssp\007xvnegdp\007"
    "xvnegsp\nxvnmaddadp\nxvnmaddasp\nxvnmaddmdp\nxvnmaddmsp\nxvnmsubadp\nxv"
    "nmsubasp\nxvnmsubmdp\nxvnmsubmsp\006xvrdpi\007xvrdpic\007xvrdpim\007xvr"
    "dpip\007xvrdpiz\006xvredp\006xvresp\006xvrspi\007xvrspic\007xvrspim\007"
    "xvrspip\007xvrspiz\nxvrsqrtedp\nxvrsqrtesp\010xvsqrtdp\010xvsqrtsp\007x"
    "vsubdp\007xvsubsp\010xvtdivdp\010xvtdivsp\007xvtlsbb\txvtsqrtdp\txvtsqr"
    "tsp\txvtstdcdp\txvtstdcsp\010xvxexpdp\010xvxexpsp\010xvxsigdp\010xvxsig"
    "sp\txxblendvb\txxblendvd\txxblendvh\txxblendvw\005xxbrd\005xxbrh\005xxb"
    "rq\005xxbrw\006xxeval\013xxextractuw\nxxgenpcvbm\nxxgenpcvdm\nxxgenpcvh"
    "m\nxxgenpcvwm\txxinsertw\006xxland\007xxlandc\006xxleqv\007xxlnand\006x"
    "xlnor\005xxlor\006xxlorc\006xxlxor\007xxmfacc\007xxmrghd\007xxmrghw\007"
    "xxmrgld\007xxmrglw\007xxmtacc\006xxperm\010xxpermdi\007xxpermr\007xxper"
    "mx\005xxsel\txxsetaccz\007xxsldwi\007xxspltd\013xxsplti32dx\010xxspltib"
    "\txxspltidp\010xxspltiw\007xxspltw\007xxswapd";

// Feature bitsets.
enum : uint8_t {
  AMFBS_None,
  AMFBS_ModernAs,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // AMFBS_None
  {Feature_ModernAsBit, },
};

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint8_t RequiredFeaturesIdx;
    uint8_t Classes[6];
    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcode {
    bool operator()(const MatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic() < RHS;
    }
    bool operator()(StringRef LHS, const MatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const MatchEntry &LHS, const MatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace

static const MatchEntry MatchTable0[] = {
  { 0 /* add */, PPC::ADD8TLS_, Convert__RegG8RC1_0__RegG8RC1_1__TLSReg1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_TLSReg }, },
  { 0 /* add */, PPC::ADD4, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 0 /* add */, PPC::ADD4_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4 /* addc */, PPC::ADDC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4 /* addc */, PPC::ADDC_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9 /* addco */, PPC::ADDCO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9 /* addco */, PPC::ADDCO_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 15 /* adde */, PPC::ADDE, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 15 /* adde */, PPC::ADDE_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 20 /* addeo */, PPC::ADDEO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 20 /* addeo */, PPC::ADDEO_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 26 /* addex */, PPC::ADDEX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U2Imm1_3, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC, MCK_U2Imm }, },
  { 32 /* addi */, PPC::ADDI, Convert__RegGPRC1_0__RegGPRCNoR01_1__S16Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_S16Imm }, },
  { 37 /* addic */, PPC::ADDIC, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 37 /* addic */, PPC::ADDIC_rec, Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 43 /* addis */, PPC::ADDIS, Convert__RegGPRC1_0__RegGPRCNoR01_1__S17Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_S17Imm }, },
  { 49 /* addme */, PPC::ADDME, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 49 /* addme */, PPC::ADDME_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 55 /* addmeo */, PPC::ADDMEO, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 55 /* addmeo */, PPC::ADDMEO_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 62 /* addo */, PPC::ADD4O, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 62 /* addo */, PPC::ADD4O_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 67 /* addpcis */, PPC::ADDPCIS, Convert__RegG8RC1_0__Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_Imm }, },
  { 75 /* addze */, PPC::ADDZE, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 75 /* addze */, PPC::ADDZE_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 81 /* addzeo */, PPC::ADDZEO, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 81 /* addzeo */, PPC::ADDZEO_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 88 /* and */, PPC::AND, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 88 /* and */, PPC::AND_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 92 /* andc */, PPC::ANDC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 92 /* andc */, PPC::ANDC_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 97 /* andi */, PPC::ANDI_rec, Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 102 /* andis */, PPC::ANDIS_rec, Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 108 /* attn */, PPC::ATTN, Convert_NoOperands, AMFBS_None, {  }, },
  { 113 /* b */, PPC::B, Convert__DirectBr1_0, AMFBS_None, { MCK_DirectBr }, },
  { 115 /* ba */, PPC::BA, Convert__DirectBr1_0, AMFBS_None, { MCK_DirectBr }, },
  { 118 /* bc */, PPC::gBC, Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 118 /* bc */, PPC::gBCat, Convert__U5Imm1_1__ATBitsAsHint1_0__RegCRBITRC1_2__CondBr1_3, AMFBS_None, { MCK_ATBitsAsHint, MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 121 /* bc+ */, PPC::gBCat, Convert__U5Imm1_0__imm_95_3__RegCRBITRC1_1__CondBr1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 125 /* bc- */, PPC::gBCat, Convert__U5Imm1_0__imm_95_2__RegCRBITRC1_1__CondBr1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 129 /* bca */, PPC::gBCA, Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 129 /* bca */, PPC::gBCAat, Convert__U5Imm1_1__ATBitsAsHint1_0__RegCRBITRC1_2__CondBr1_3, AMFBS_None, { MCK_ATBitsAsHint, MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 133 /* bca+ */, PPC::gBCAat, Convert__U5Imm1_0__imm_95_3__RegCRBITRC1_1__CondBr1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 138 /* bca- */, PPC::gBCAat, Convert__U5Imm1_0__imm_95_2__RegCRBITRC1_1__CondBr1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 143 /* bcctr */, PPC::gBCCTR, Convert__U5Imm1_0__RegCRBITRC1_1__imm_95_0, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC }, },
  { 143 /* bcctr */, PPC::gBCCTR, Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_Imm }, },
  { 149 /* bcctrl */, PPC::gBCCTRL, Convert__U5Imm1_0__RegCRBITRC1_1__imm_95_0, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC }, },
  { 149 /* bcctrl */, PPC::gBCCTRL, Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_Imm }, },
  { 156 /* bcdadd */, PPC::BCDADD_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3__U1Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 163 /* bcdcfn */, PPC::BCDCFN_rec, Convert__RegVRRC1_1__RegVRRC1_2__U1Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 170 /* bcdcfsq */, PPC::BCDCFSQ_rec, Convert__RegVRRC1_1__RegVRRC1_2__U1Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 178 /* bcdcfz */, PPC::BCDCFZ_rec, Convert__RegVRRC1_1__RegVRRC1_2__U1Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 185 /* bcdcpsgn */, PPC::BCDCPSGN_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 194 /* bcdctn */, PPC::BCDCTN_rec, Convert__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC }, },
  { 201 /* bcdctsq */, PPC::BCDCTSQ_rec, Convert__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC }, },
  { 209 /* bcdctz */, PPC::BCDCTZ_rec, Convert__RegVRRC1_1__RegVRRC1_2__U1Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 216 /* bcds */, PPC::BCDS_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3__U1Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 221 /* bcdsetsgn */, PPC::BCDSETSGN_rec, Convert__RegVRRC1_1__RegVRRC1_2__U1Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 231 /* bcdsr */, PPC::BCDSR_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3__U1Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 237 /* bcdsub */, PPC::BCDSUB_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3__U1Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 244 /* bcdtrunc */, PPC::BCDTRUNC_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3__U1Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 253 /* bcdus */, PPC::BCDUS_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 259 /* bcdutrunc */, PPC::BCDUTRUNC_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 269 /* bcl */, PPC::gBCL, Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 269 /* bcl */, PPC::gBCLat, Convert__U5Imm1_1__ATBitsAsHint1_0__RegCRBITRC1_2__CondBr1_3, AMFBS_None, { MCK_ATBitsAsHint, MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 273 /* bcl+ */, PPC::gBCLat, Convert__U5Imm1_0__imm_95_3__RegCRBITRC1_1__CondBr1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 278 /* bcl- */, PPC::gBCLat, Convert__U5Imm1_0__imm_95_2__RegCRBITRC1_1__CondBr1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 283 /* bcla */, PPC::gBCLA, Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 283 /* bcla */, PPC::gBCLAat, Convert__U5Imm1_1__ATBitsAsHint1_0__RegCRBITRC1_2__CondBr1_3, AMFBS_None, { MCK_ATBitsAsHint, MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 288 /* bcla+ */, PPC::gBCLAat, Convert__U5Imm1_0__imm_95_3__RegCRBITRC1_1__CondBr1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 294 /* bcla- */, PPC::gBCLAat, Convert__U5Imm1_0__imm_95_2__RegCRBITRC1_1__CondBr1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 300 /* bclr */, PPC::gBCLR, Convert__U5Imm1_0__RegCRBITRC1_1__imm_95_0, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC }, },
  { 300 /* bclr */, PPC::gBCLR, Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_Imm }, },
  { 305 /* bclrl */, PPC::gBCLRL, Convert__U5Imm1_0__RegCRBITRC1_1__imm_95_0, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC }, },
  { 305 /* bclrl */, PPC::gBCLRL, Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_Imm }, },
  { 311 /* bctr */, PPC::BCTR, Convert_NoOperands, AMFBS_None, {  }, },
  { 316 /* bctrl */, PPC::BCTRL, Convert_NoOperands, AMFBS_None, {  }, },
  { 322 /* bdnz */, PPC::BDNZ, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 327 /* bdnz+ */, PPC::BDNZp, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 333 /* bdnz- */, PPC::BDNZm, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 339 /* bdnza */, PPC::BDNZA, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 345 /* bdnza+ */, PPC::BDNZAp, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 352 /* bdnza- */, PPC::BDNZAm, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 359 /* bdnzf */, PPC::gBC, Convert__imm_95_0__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 365 /* bdnzfa */, PPC::gBCA, Convert__imm_95_0__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 372 /* bdnzfl */, PPC::gBCL, Convert__imm_95_0__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 379 /* bdnzfla */, PPC::gBCLA, Convert__imm_95_0__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 387 /* bdnzflr */, PPC::gBCLR, Convert__imm_95_0__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 395 /* bdnzflrl */, PPC::gBCLRL, Convert__imm_95_0__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 404 /* bdnzl */, PPC::BDNZL, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 410 /* bdnzl+ */, PPC::BDNZLp, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 417 /* bdnzl- */, PPC::BDNZLm, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 424 /* bdnzla */, PPC::BDNZLA, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 431 /* bdnzla+ */, PPC::BDNZLAp, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 439 /* bdnzla- */, PPC::BDNZLAm, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 447 /* bdnzlr */, PPC::BDNZLR, Convert_NoOperands, AMFBS_None, {  }, },
  { 454 /* bdnzlr+ */, PPC::BDNZLRp, Convert_NoOperands, AMFBS_None, {  }, },
  { 462 /* bdnzlr- */, PPC::BDNZLRm, Convert_NoOperands, AMFBS_None, {  }, },
  { 470 /* bdnzlrl */, PPC::BDNZLRL, Convert_NoOperands, AMFBS_None, {  }, },
  { 478 /* bdnzlrl+ */, PPC::BDNZLRLp, Convert_NoOperands, AMFBS_None, {  }, },
  { 487 /* bdnzlrl- */, PPC::BDNZLRLm, Convert_NoOperands, AMFBS_None, {  }, },
  { 496 /* bdnzt */, PPC::gBC, Convert__imm_95_8__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 502 /* bdnzta */, PPC::gBCA, Convert__imm_95_8__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 509 /* bdnztl */, PPC::gBCL, Convert__imm_95_8__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 516 /* bdnztla */, PPC::gBCLA, Convert__imm_95_8__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 524 /* bdnztlr */, PPC::gBCLR, Convert__imm_95_8__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 532 /* bdnztlrl */, PPC::gBCLRL, Convert__imm_95_8__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 541 /* bdz */, PPC::BDZ, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 545 /* bdz+ */, PPC::BDZp, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 550 /* bdz- */, PPC::BDZm, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 555 /* bdza */, PPC::BDZA, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 560 /* bdza+ */, PPC::BDZAp, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 566 /* bdza- */, PPC::BDZAm, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 572 /* bdzf */, PPC::gBC, Convert__imm_95_2__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 577 /* bdzfa */, PPC::gBCA, Convert__imm_95_2__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 583 /* bdzfl */, PPC::gBCL, Convert__imm_95_2__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 589 /* bdzfla */, PPC::gBCLA, Convert__imm_95_2__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 596 /* bdzflr */, PPC::gBCLR, Convert__imm_95_2__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 603 /* bdzflrl */, PPC::gBCLRL, Convert__imm_95_2__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 611 /* bdzl */, PPC::BDZL, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 616 /* bdzl+ */, PPC::BDZLp, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 622 /* bdzl- */, PPC::BDZLm, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 628 /* bdzla */, PPC::BDZLA, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 634 /* bdzla+ */, PPC::BDZLAp, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 641 /* bdzla- */, PPC::BDZLAm, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 648 /* bdzlr */, PPC::BDZLR, Convert_NoOperands, AMFBS_None, {  }, },
  { 654 /* bdzlr+ */, PPC::BDZLRp, Convert_NoOperands, AMFBS_None, {  }, },
  { 661 /* bdzlr- */, PPC::BDZLRm, Convert_NoOperands, AMFBS_None, {  }, },
  { 668 /* bdzlrl */, PPC::BDZLRL, Convert_NoOperands, AMFBS_None, {  }, },
  { 675 /* bdzlrl+ */, PPC::BDZLRLp, Convert_NoOperands, AMFBS_None, {  }, },
  { 683 /* bdzlrl- */, PPC::BDZLRLm, Convert_NoOperands, AMFBS_None, {  }, },
  { 691 /* bdzt */, PPC::gBC, Convert__imm_95_10__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 696 /* bdzta */, PPC::gBCA, Convert__imm_95_10__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 702 /* bdztl */, PPC::gBCL, Convert__imm_95_10__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 708 /* bdztla */, PPC::gBCLA, Convert__imm_95_10__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 715 /* bdztlr */, PPC::gBCLR, Convert__imm_95_10__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 722 /* bdztlrl */, PPC::gBCLRL, Convert__imm_95_10__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 730 /* beq */, PPC::BCC, Convert__imm_95_76__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 730 /* beq */, PPC::BCC, Convert__imm_95_76__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 734 /* beq+ */, PPC::BCC, Convert__imm_95_79__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 734 /* beq+ */, PPC::BCC, Convert__imm_95_79__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 739 /* beq- */, PPC::BCC, Convert__imm_95_78__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 739 /* beq- */, PPC::BCC, Convert__imm_95_78__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 744 /* beqa */, PPC::BCCA, Convert__imm_95_76__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 744 /* beqa */, PPC::BCCA, Convert__imm_95_76__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 749 /* beqa+ */, PPC::BCCA, Convert__imm_95_79__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 749 /* beqa+ */, PPC::BCCA, Convert__imm_95_79__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 755 /* beqa- */, PPC::BCCA, Convert__imm_95_78__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 755 /* beqa- */, PPC::BCCA, Convert__imm_95_78__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 761 /* beqctr */, PPC::BCCCTR, Convert__imm_95_76__regCR0, AMFBS_None, {  }, },
  { 761 /* beqctr */, PPC::BCCCTR, Convert__imm_95_76__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 768 /* beqctr+ */, PPC::BCCCTR, Convert__imm_95_79__regCR0, AMFBS_None, {  }, },
  { 768 /* beqctr+ */, PPC::BCCCTR, Convert__imm_95_79__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 776 /* beqctr- */, PPC::BCCCTR, Convert__imm_95_78__regCR0, AMFBS_None, {  }, },
  { 776 /* beqctr- */, PPC::BCCCTR, Convert__imm_95_78__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 784 /* beqctrl */, PPC::BCCCTRL, Convert__imm_95_76__regCR0, AMFBS_None, {  }, },
  { 784 /* beqctrl */, PPC::BCCCTRL, Convert__imm_95_76__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 792 /* beqctrl+ */, PPC::BCCCTRL, Convert__imm_95_79__regCR0, AMFBS_None, {  }, },
  { 792 /* beqctrl+ */, PPC::BCCCTRL, Convert__imm_95_79__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 801 /* beqctrl- */, PPC::BCCCTRL, Convert__imm_95_78__regCR0, AMFBS_None, {  }, },
  { 801 /* beqctrl- */, PPC::BCCCTRL, Convert__imm_95_78__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 810 /* beql */, PPC::BCCL, Convert__imm_95_76__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 810 /* beql */, PPC::BCCL, Convert__imm_95_76__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 815 /* beql+ */, PPC::BCCL, Convert__imm_95_79__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 815 /* beql+ */, PPC::BCCL, Convert__imm_95_79__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 821 /* beql- */, PPC::BCCL, Convert__imm_95_78__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 821 /* beql- */, PPC::BCCL, Convert__imm_95_78__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 827 /* beqla */, PPC::BCCLA, Convert__imm_95_76__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 827 /* beqla */, PPC::BCCLA, Convert__imm_95_76__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 833 /* beqla+ */, PPC::BCCLA, Convert__imm_95_79__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 833 /* beqla+ */, PPC::BCCLA, Convert__imm_95_79__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 840 /* beqla- */, PPC::BCCLA, Convert__imm_95_78__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 840 /* beqla- */, PPC::BCCLA, Convert__imm_95_78__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 847 /* beqlr */, PPC::BCCLR, Convert__imm_95_76__regCR0, AMFBS_None, {  }, },
  { 847 /* beqlr */, PPC::BCCLR, Convert__imm_95_76__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 853 /* beqlr+ */, PPC::BCCLR, Convert__imm_95_79__regCR0, AMFBS_None, {  }, },
  { 853 /* beqlr+ */, PPC::BCCLR, Convert__imm_95_79__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 860 /* beqlr- */, PPC::BCCLR, Convert__imm_95_78__regCR0, AMFBS_None, {  }, },
  { 860 /* beqlr- */, PPC::BCCLR, Convert__imm_95_78__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 867 /* beqlrl */, PPC::BCCLRL, Convert__imm_95_76__regCR0, AMFBS_None, {  }, },
  { 867 /* beqlrl */, PPC::BCCLRL, Convert__imm_95_76__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 874 /* beqlrl+ */, PPC::BCCLRL, Convert__imm_95_79__regCR0, AMFBS_None, {  }, },
  { 874 /* beqlrl+ */, PPC::BCCLRL, Convert__imm_95_79__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 882 /* beqlrl- */, PPC::BCCLRL, Convert__imm_95_78__regCR0, AMFBS_None, {  }, },
  { 882 /* beqlrl- */, PPC::BCCLRL, Convert__imm_95_78__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 890 /* bf */, PPC::gBC, Convert__imm_95_4__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 893 /* bf+ */, PPC::gBC, Convert__imm_95_7__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 897 /* bf- */, PPC::gBC, Convert__imm_95_6__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 901 /* bfa */, PPC::gBCA, Convert__imm_95_4__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 905 /* bfa+ */, PPC::gBCA, Convert__imm_95_7__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 910 /* bfa- */, PPC::gBCA, Convert__imm_95_6__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 915 /* bfctr */, PPC::gBCCTR, Convert__imm_95_4__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 921 /* bfctr+ */, PPC::gBCCTR, Convert__imm_95_7__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 928 /* bfctr- */, PPC::gBCCTR, Convert__imm_95_6__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 935 /* bfctrl */, PPC::gBCCTRL, Convert__imm_95_4__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 942 /* bfctrl+ */, PPC::gBCCTRL, Convert__imm_95_7__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 950 /* bfctrl- */, PPC::gBCCTRL, Convert__imm_95_6__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 958 /* bfl */, PPC::gBCL, Convert__imm_95_4__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 962 /* bfl+ */, PPC::gBCL, Convert__imm_95_7__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 967 /* bfl- */, PPC::gBCL, Convert__imm_95_6__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 972 /* bfla */, PPC::gBCLA, Convert__imm_95_4__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 977 /* bfla+ */, PPC::gBCLA, Convert__imm_95_7__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 983 /* bfla- */, PPC::gBCLA, Convert__imm_95_6__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 989 /* bflr */, PPC::gBCLR, Convert__imm_95_4__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 994 /* bflr+ */, PPC::gBCLR, Convert__imm_95_7__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 1000 /* bflr- */, PPC::gBCLR, Convert__imm_95_6__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 1006 /* bflrl */, PPC::gBCLRL, Convert__imm_95_4__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 1012 /* bflrl+ */, PPC::gBCLRL, Convert__imm_95_7__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 1019 /* bflrl- */, PPC::gBCLRL, Convert__imm_95_6__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 1026 /* bge */, PPC::BCC, Convert__imm_95_4__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1026 /* bge */, PPC::BCC, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1030 /* bge+ */, PPC::BCC, Convert__imm_95_7__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1030 /* bge+ */, PPC::BCC, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1035 /* bge- */, PPC::BCC, Convert__imm_95_6__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1035 /* bge- */, PPC::BCC, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1040 /* bgea */, PPC::BCCA, Convert__imm_95_4__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1040 /* bgea */, PPC::BCCA, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1045 /* bgea+ */, PPC::BCCA, Convert__imm_95_7__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1045 /* bgea+ */, PPC::BCCA, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1051 /* bgea- */, PPC::BCCA, Convert__imm_95_6__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1051 /* bgea- */, PPC::BCCA, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1057 /* bgectr */, PPC::BCCCTR, Convert__imm_95_4__regCR0, AMFBS_None, {  }, },
  { 1057 /* bgectr */, PPC::BCCCTR, Convert__imm_95_4__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1064 /* bgectr+ */, PPC::BCCCTR, Convert__imm_95_7__regCR0, AMFBS_None, {  }, },
  { 1064 /* bgectr+ */, PPC::BCCCTR, Convert__imm_95_7__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1072 /* bgectr- */, PPC::BCCCTR, Convert__imm_95_6__regCR0, AMFBS_None, {  }, },
  { 1072 /* bgectr- */, PPC::BCCCTR, Convert__imm_95_6__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1080 /* bgectrl */, PPC::BCCCTRL, Convert__imm_95_4__regCR0, AMFBS_None, {  }, },
  { 1080 /* bgectrl */, PPC::BCCCTRL, Convert__imm_95_4__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1088 /* bgectrl+ */, PPC::BCCCTRL, Convert__imm_95_7__regCR0, AMFBS_None, {  }, },
  { 1088 /* bgectrl+ */, PPC::BCCCTRL, Convert__imm_95_7__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1097 /* bgectrl- */, PPC::BCCCTRL, Convert__imm_95_6__regCR0, AMFBS_None, {  }, },
  { 1097 /* bgectrl- */, PPC::BCCCTRL, Convert__imm_95_6__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1106 /* bgel */, PPC::BCCL, Convert__imm_95_4__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1106 /* bgel */, PPC::BCCL, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1111 /* bgel+ */, PPC::BCCL, Convert__imm_95_7__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1111 /* bgel+ */, PPC::BCCL, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1117 /* bgel- */, PPC::BCCL, Convert__imm_95_6__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1117 /* bgel- */, PPC::BCCL, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1123 /* bgela */, PPC::BCCLA, Convert__imm_95_4__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1123 /* bgela */, PPC::BCCLA, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1129 /* bgela+ */, PPC::BCCLA, Convert__imm_95_7__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1129 /* bgela+ */, PPC::BCCLA, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1136 /* bgela- */, PPC::BCCLA, Convert__imm_95_6__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1136 /* bgela- */, PPC::BCCLA, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1143 /* bgelr */, PPC::BCCLR, Convert__imm_95_4__regCR0, AMFBS_None, {  }, },
  { 1143 /* bgelr */, PPC::BCCLR, Convert__imm_95_4__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1149 /* bgelr+ */, PPC::BCCLR, Convert__imm_95_7__regCR0, AMFBS_None, {  }, },
  { 1149 /* bgelr+ */, PPC::BCCLR, Convert__imm_95_7__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1156 /* bgelr- */, PPC::BCCLR, Convert__imm_95_6__regCR0, AMFBS_None, {  }, },
  { 1156 /* bgelr- */, PPC::BCCLR, Convert__imm_95_6__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1163 /* bgelrl */, PPC::BCCLRL, Convert__imm_95_4__regCR0, AMFBS_None, {  }, },
  { 1163 /* bgelrl */, PPC::BCCLRL, Convert__imm_95_4__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1170 /* bgelrl+ */, PPC::BCCLRL, Convert__imm_95_7__regCR0, AMFBS_None, {  }, },
  { 1170 /* bgelrl+ */, PPC::BCCLRL, Convert__imm_95_7__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1178 /* bgelrl- */, PPC::BCCLRL, Convert__imm_95_6__regCR0, AMFBS_None, {  }, },
  { 1178 /* bgelrl- */, PPC::BCCLRL, Convert__imm_95_6__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1186 /* bgt */, PPC::BCC, Convert__imm_95_44__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1186 /* bgt */, PPC::BCC, Convert__imm_95_44__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1190 /* bgt+ */, PPC::BCC, Convert__imm_95_47__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1190 /* bgt+ */, PPC::BCC, Convert__imm_95_47__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1195 /* bgt- */, PPC::BCC, Convert__imm_95_46__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1195 /* bgt- */, PPC::BCC, Convert__imm_95_46__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1200 /* bgta */, PPC::BCCA, Convert__imm_95_44__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1200 /* bgta */, PPC::BCCA, Convert__imm_95_44__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1205 /* bgta+ */, PPC::BCCA, Convert__imm_95_47__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1205 /* bgta+ */, PPC::BCCA, Convert__imm_95_47__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1211 /* bgta- */, PPC::BCCA, Convert__imm_95_46__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1211 /* bgta- */, PPC::BCCA, Convert__imm_95_46__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1217 /* bgtctr */, PPC::BCCCTR, Convert__imm_95_44__regCR0, AMFBS_None, {  }, },
  { 1217 /* bgtctr */, PPC::BCCCTR, Convert__imm_95_44__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1224 /* bgtctr+ */, PPC::BCCCTR, Convert__imm_95_47__regCR0, AMFBS_None, {  }, },
  { 1224 /* bgtctr+ */, PPC::BCCCTR, Convert__imm_95_47__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1232 /* bgtctr- */, PPC::BCCCTR, Convert__imm_95_46__regCR0, AMFBS_None, {  }, },
  { 1232 /* bgtctr- */, PPC::BCCCTR, Convert__imm_95_46__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1240 /* bgtctrl */, PPC::BCCCTRL, Convert__imm_95_44__regCR0, AMFBS_None, {  }, },
  { 1240 /* bgtctrl */, PPC::BCCCTRL, Convert__imm_95_44__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1248 /* bgtctrl+ */, PPC::BCCCTRL, Convert__imm_95_47__regCR0, AMFBS_None, {  }, },
  { 1248 /* bgtctrl+ */, PPC::BCCCTRL, Convert__imm_95_47__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1257 /* bgtctrl- */, PPC::BCCCTRL, Convert__imm_95_46__regCR0, AMFBS_None, {  }, },
  { 1257 /* bgtctrl- */, PPC::BCCCTRL, Convert__imm_95_46__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1266 /* bgtl */, PPC::BCCL, Convert__imm_95_44__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1266 /* bgtl */, PPC::BCCL, Convert__imm_95_44__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1271 /* bgtl+ */, PPC::BCCL, Convert__imm_95_47__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1271 /* bgtl+ */, PPC::BCCL, Convert__imm_95_47__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1277 /* bgtl- */, PPC::BCCL, Convert__imm_95_46__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1277 /* bgtl- */, PPC::BCCL, Convert__imm_95_46__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1283 /* bgtla */, PPC::BCCLA, Convert__imm_95_44__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1283 /* bgtla */, PPC::BCCLA, Convert__imm_95_44__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1289 /* bgtla+ */, PPC::BCCLA, Convert__imm_95_47__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1289 /* bgtla+ */, PPC::BCCLA, Convert__imm_95_47__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1296 /* bgtla- */, PPC::BCCLA, Convert__imm_95_46__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1296 /* bgtla- */, PPC::BCCLA, Convert__imm_95_46__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1303 /* bgtlr */, PPC::BCCLR, Convert__imm_95_44__regCR0, AMFBS_None, {  }, },
  { 1303 /* bgtlr */, PPC::BCCLR, Convert__imm_95_44__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1309 /* bgtlr+ */, PPC::BCCLR, Convert__imm_95_47__regCR0, AMFBS_None, {  }, },
  { 1309 /* bgtlr+ */, PPC::BCCLR, Convert__imm_95_47__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1316 /* bgtlr- */, PPC::BCCLR, Convert__imm_95_46__regCR0, AMFBS_None, {  }, },
  { 1316 /* bgtlr- */, PPC::BCCLR, Convert__imm_95_46__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1323 /* bgtlrl */, PPC::BCCLRL, Convert__imm_95_44__regCR0, AMFBS_None, {  }, },
  { 1323 /* bgtlrl */, PPC::BCCLRL, Convert__imm_95_44__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1330 /* bgtlrl+ */, PPC::BCCLRL, Convert__imm_95_47__regCR0, AMFBS_None, {  }, },
  { 1330 /* bgtlrl+ */, PPC::BCCLRL, Convert__imm_95_47__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1338 /* bgtlrl- */, PPC::BCCLRL, Convert__imm_95_46__regCR0, AMFBS_None, {  }, },
  { 1338 /* bgtlrl- */, PPC::BCCLRL, Convert__imm_95_46__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1346 /* bl */, PPC::BL, Convert__DirectBr1_0, AMFBS_None, { MCK_DirectBr }, },
  { 1346 /* bl */, PPC::BL8_TLS_, Convert__DirectBr1_0__Imm1_1, AMFBS_None, { MCK_DirectBr, MCK_Imm }, },
  { 1349 /* bla */, PPC::BLA, Convert__DirectBr1_0, AMFBS_None, { MCK_DirectBr }, },
  { 1353 /* ble */, PPC::BCC, Convert__imm_95_36__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1353 /* ble */, PPC::BCC, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1357 /* ble+ */, PPC::BCC, Convert__imm_95_39__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1357 /* ble+ */, PPC::BCC, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1362 /* ble- */, PPC::BCC, Convert__imm_95_38__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1362 /* ble- */, PPC::BCC, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1367 /* blea */, PPC::BCCA, Convert__imm_95_36__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1367 /* blea */, PPC::BCCA, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1372 /* blea+ */, PPC::BCCA, Convert__imm_95_39__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1372 /* blea+ */, PPC::BCCA, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1378 /* blea- */, PPC::BCCA, Convert__imm_95_38__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1378 /* blea- */, PPC::BCCA, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1384 /* blectr */, PPC::BCCCTR, Convert__imm_95_36__regCR0, AMFBS_None, {  }, },
  { 1384 /* blectr */, PPC::BCCCTR, Convert__imm_95_36__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1391 /* blectr+ */, PPC::BCCCTR, Convert__imm_95_39__regCR0, AMFBS_None, {  }, },
  { 1391 /* blectr+ */, PPC::BCCCTR, Convert__imm_95_39__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1399 /* blectr- */, PPC::BCCCTR, Convert__imm_95_38__regCR0, AMFBS_None, {  }, },
  { 1399 /* blectr- */, PPC::BCCCTR, Convert__imm_95_38__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1407 /* blectrl */, PPC::BCCCTRL, Convert__imm_95_36__regCR0, AMFBS_None, {  }, },
  { 1407 /* blectrl */, PPC::BCCCTRL, Convert__imm_95_36__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1415 /* blectrl+ */, PPC::BCCCTRL, Convert__imm_95_39__regCR0, AMFBS_None, {  }, },
  { 1415 /* blectrl+ */, PPC::BCCCTRL, Convert__imm_95_39__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1424 /* blectrl- */, PPC::BCCCTRL, Convert__imm_95_38__regCR0, AMFBS_None, {  }, },
  { 1424 /* blectrl- */, PPC::BCCCTRL, Convert__imm_95_38__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1433 /* blel */, PPC::BCCL, Convert__imm_95_36__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1433 /* blel */, PPC::BCCL, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1438 /* blel+ */, PPC::BCCL, Convert__imm_95_39__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1438 /* blel+ */, PPC::BCCL, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1444 /* blel- */, PPC::BCCL, Convert__imm_95_38__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1444 /* blel- */, PPC::BCCL, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1450 /* blela */, PPC::BCCLA, Convert__imm_95_36__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1450 /* blela */, PPC::BCCLA, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1456 /* blela+ */, PPC::BCCLA, Convert__imm_95_39__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1456 /* blela+ */, PPC::BCCLA, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1463 /* blela- */, PPC::BCCLA, Convert__imm_95_38__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1463 /* blela- */, PPC::BCCLA, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1470 /* blelr */, PPC::BCCLR, Convert__imm_95_36__regCR0, AMFBS_None, {  }, },
  { 1470 /* blelr */, PPC::BCCLR, Convert__imm_95_36__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1476 /* blelr+ */, PPC::BCCLR, Convert__imm_95_39__regCR0, AMFBS_None, {  }, },
  { 1476 /* blelr+ */, PPC::BCCLR, Convert__imm_95_39__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1483 /* blelr- */, PPC::BCCLR, Convert__imm_95_38__regCR0, AMFBS_None, {  }, },
  { 1483 /* blelr- */, PPC::BCCLR, Convert__imm_95_38__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1490 /* blelrl */, PPC::BCCLRL, Convert__imm_95_36__regCR0, AMFBS_None, {  }, },
  { 1490 /* blelrl */, PPC::BCCLRL, Convert__imm_95_36__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1497 /* blelrl+ */, PPC::BCCLRL, Convert__imm_95_39__regCR0, AMFBS_None, {  }, },
  { 1497 /* blelrl+ */, PPC::BCCLRL, Convert__imm_95_39__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1505 /* blelrl- */, PPC::BCCLRL, Convert__imm_95_38__regCR0, AMFBS_None, {  }, },
  { 1505 /* blelrl- */, PPC::BCCLRL, Convert__imm_95_38__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1513 /* blr */, PPC::BLR, Convert_NoOperands, AMFBS_None, {  }, },
  { 1517 /* blrl */, PPC::BLRL, Convert_NoOperands, AMFBS_None, {  }, },
  { 1522 /* blt */, PPC::BCC, Convert__imm_95_12__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1522 /* blt */, PPC::BCC, Convert__imm_95_12__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1526 /* blt+ */, PPC::BCC, Convert__imm_95_15__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1526 /* blt+ */, PPC::BCC, Convert__imm_95_15__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1531 /* blt- */, PPC::BCC, Convert__imm_95_14__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1531 /* blt- */, PPC::BCC, Convert__imm_95_14__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1536 /* blta */, PPC::BCCA, Convert__imm_95_12__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1536 /* blta */, PPC::BCCA, Convert__imm_95_12__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1541 /* blta+ */, PPC::BCCA, Convert__imm_95_15__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1541 /* blta+ */, PPC::BCCA, Convert__imm_95_15__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1547 /* blta- */, PPC::BCCA, Convert__imm_95_14__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1547 /* blta- */, PPC::BCCA, Convert__imm_95_14__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1553 /* bltctr */, PPC::BCCCTR, Convert__imm_95_12__regCR0, AMFBS_None, {  }, },
  { 1553 /* bltctr */, PPC::BCCCTR, Convert__imm_95_12__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1560 /* bltctr+ */, PPC::BCCCTR, Convert__imm_95_15__regCR0, AMFBS_None, {  }, },
  { 1560 /* bltctr+ */, PPC::BCCCTR, Convert__imm_95_15__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1568 /* bltctr- */, PPC::BCCCTR, Convert__imm_95_14__regCR0, AMFBS_None, {  }, },
  { 1568 /* bltctr- */, PPC::BCCCTR, Convert__imm_95_14__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1576 /* bltctrl */, PPC::BCCCTRL, Convert__imm_95_12__regCR0, AMFBS_None, {  }, },
  { 1576 /* bltctrl */, PPC::BCCCTRL, Convert__imm_95_12__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1584 /* bltctrl+ */, PPC::BCCCTRL, Convert__imm_95_15__regCR0, AMFBS_None, {  }, },
  { 1584 /* bltctrl+ */, PPC::BCCCTRL, Convert__imm_95_15__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1593 /* bltctrl- */, PPC::BCCCTRL, Convert__imm_95_14__regCR0, AMFBS_None, {  }, },
  { 1593 /* bltctrl- */, PPC::BCCCTRL, Convert__imm_95_14__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1602 /* bltl */, PPC::BCCL, Convert__imm_95_12__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1602 /* bltl */, PPC::BCCL, Convert__imm_95_12__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1607 /* bltl+ */, PPC::BCCL, Convert__imm_95_15__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1607 /* bltl+ */, PPC::BCCL, Convert__imm_95_15__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1613 /* bltl- */, PPC::BCCL, Convert__imm_95_14__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1613 /* bltl- */, PPC::BCCL, Convert__imm_95_14__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1619 /* bltla */, PPC::BCCLA, Convert__imm_95_12__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1619 /* bltla */, PPC::BCCLA, Convert__imm_95_12__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1625 /* bltla+ */, PPC::BCCLA, Convert__imm_95_15__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1625 /* bltla+ */, PPC::BCCLA, Convert__imm_95_15__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1632 /* bltla- */, PPC::BCCLA, Convert__imm_95_14__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1632 /* bltla- */, PPC::BCCLA, Convert__imm_95_14__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1639 /* bltlr */, PPC::BCCLR, Convert__imm_95_12__regCR0, AMFBS_None, {  }, },
  { 1639 /* bltlr */, PPC::BCCLR, Convert__imm_95_12__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1645 /* bltlr+ */, PPC::BCCLR, Convert__imm_95_15__regCR0, AMFBS_None, {  }, },
  { 1645 /* bltlr+ */, PPC::BCCLR, Convert__imm_95_15__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1652 /* bltlr- */, PPC::BCCLR, Convert__imm_95_14__regCR0, AMFBS_None, {  }, },
  { 1652 /* bltlr- */, PPC::BCCLR, Convert__imm_95_14__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1659 /* bltlrl */, PPC::BCCLRL, Convert__imm_95_12__regCR0, AMFBS_None, {  }, },
  { 1659 /* bltlrl */, PPC::BCCLRL, Convert__imm_95_12__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1666 /* bltlrl+ */, PPC::BCCLRL, Convert__imm_95_15__regCR0, AMFBS_None, {  }, },
  { 1666 /* bltlrl+ */, PPC::BCCLRL, Convert__imm_95_15__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1674 /* bltlrl- */, PPC::BCCLRL, Convert__imm_95_14__regCR0, AMFBS_None, {  }, },
  { 1674 /* bltlrl- */, PPC::BCCLRL, Convert__imm_95_14__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1682 /* bne */, PPC::BCC, Convert__imm_95_68__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1682 /* bne */, PPC::BCC, Convert__imm_95_68__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1686 /* bne+ */, PPC::BCC, Convert__imm_95_71__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1686 /* bne+ */, PPC::BCC, Convert__imm_95_71__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1691 /* bne- */, PPC::BCC, Convert__imm_95_70__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1691 /* bne- */, PPC::BCC, Convert__imm_95_70__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1696 /* bnea */, PPC::BCCA, Convert__imm_95_68__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1696 /* bnea */, PPC::BCCA, Convert__imm_95_68__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1701 /* bnea+ */, PPC::BCCA, Convert__imm_95_71__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1701 /* bnea+ */, PPC::BCCA, Convert__imm_95_71__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1707 /* bnea- */, PPC::BCCA, Convert__imm_95_70__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1707 /* bnea- */, PPC::BCCA, Convert__imm_95_70__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1713 /* bnectr */, PPC::BCCCTR, Convert__imm_95_68__regCR0, AMFBS_None, {  }, },
  { 1713 /* bnectr */, PPC::BCCCTR, Convert__imm_95_68__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1720 /* bnectr+ */, PPC::BCCCTR, Convert__imm_95_71__regCR0, AMFBS_None, {  }, },
  { 1720 /* bnectr+ */, PPC::BCCCTR, Convert__imm_95_71__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1728 /* bnectr- */, PPC::BCCCTR, Convert__imm_95_70__regCR0, AMFBS_None, {  }, },
  { 1728 /* bnectr- */, PPC::BCCCTR, Convert__imm_95_70__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1736 /* bnectrl */, PPC::BCCCTRL, Convert__imm_95_68__regCR0, AMFBS_None, {  }, },
  { 1736 /* bnectrl */, PPC::BCCCTRL, Convert__imm_95_68__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1744 /* bnectrl+ */, PPC::BCCCTRL, Convert__imm_95_71__regCR0, AMFBS_None, {  }, },
  { 1744 /* bnectrl+ */, PPC::BCCCTRL, Convert__imm_95_71__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1753 /* bnectrl- */, PPC::BCCCTRL, Convert__imm_95_70__regCR0, AMFBS_None, {  }, },
  { 1753 /* bnectrl- */, PPC::BCCCTRL, Convert__imm_95_70__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1762 /* bnel */, PPC::BCCL, Convert__imm_95_68__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1762 /* bnel */, PPC::BCCL, Convert__imm_95_68__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1767 /* bnel+ */, PPC::BCCL, Convert__imm_95_71__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1767 /* bnel+ */, PPC::BCCL, Convert__imm_95_71__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1773 /* bnel- */, PPC::BCCL, Convert__imm_95_70__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1773 /* bnel- */, PPC::BCCL, Convert__imm_95_70__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1779 /* bnela */, PPC::BCCLA, Convert__imm_95_68__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1779 /* bnela */, PPC::BCCLA, Convert__imm_95_68__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1785 /* bnela+ */, PPC::BCCLA, Convert__imm_95_71__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1785 /* bnela+ */, PPC::BCCLA, Convert__imm_95_71__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1792 /* bnela- */, PPC::BCCLA, Convert__imm_95_70__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1792 /* bnela- */, PPC::BCCLA, Convert__imm_95_70__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1799 /* bnelr */, PPC::BCCLR, Convert__imm_95_68__regCR0, AMFBS_None, {  }, },
  { 1799 /* bnelr */, PPC::BCCLR, Convert__imm_95_68__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1805 /* bnelr+ */, PPC::BCCLR, Convert__imm_95_71__regCR0, AMFBS_None, {  }, },
  { 1805 /* bnelr+ */, PPC::BCCLR, Convert__imm_95_71__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1812 /* bnelr- */, PPC::BCCLR, Convert__imm_95_70__regCR0, AMFBS_None, {  }, },
  { 1812 /* bnelr- */, PPC::BCCLR, Convert__imm_95_70__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1819 /* bnelrl */, PPC::BCCLRL, Convert__imm_95_68__regCR0, AMFBS_None, {  }, },
  { 1819 /* bnelrl */, PPC::BCCLRL, Convert__imm_95_68__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1826 /* bnelrl+ */, PPC::BCCLRL, Convert__imm_95_71__regCR0, AMFBS_None, {  }, },
  { 1826 /* bnelrl+ */, PPC::BCCLRL, Convert__imm_95_71__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1834 /* bnelrl- */, PPC::BCCLRL, Convert__imm_95_70__regCR0, AMFBS_None, {  }, },
  { 1834 /* bnelrl- */, PPC::BCCLRL, Convert__imm_95_70__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1842 /* bng */, PPC::BCC, Convert__imm_95_36__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1842 /* bng */, PPC::BCC, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1846 /* bng+ */, PPC::BCC, Convert__imm_95_39__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1846 /* bng+ */, PPC::BCC, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1851 /* bng- */, PPC::BCC, Convert__imm_95_38__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1851 /* bng- */, PPC::BCC, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1856 /* bnga */, PPC::BCCA, Convert__imm_95_36__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1856 /* bnga */, PPC::BCCA, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1861 /* bnga+ */, PPC::BCCA, Convert__imm_95_39__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1861 /* bnga+ */, PPC::BCCA, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1867 /* bnga- */, PPC::BCCA, Convert__imm_95_38__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1867 /* bnga- */, PPC::BCCA, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1873 /* bngctr */, PPC::BCCCTR, Convert__imm_95_36__regCR0, AMFBS_None, {  }, },
  { 1873 /* bngctr */, PPC::BCCCTR, Convert__imm_95_36__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1880 /* bngctr+ */, PPC::BCCCTR, Convert__imm_95_39__regCR0, AMFBS_None, {  }, },
  { 1880 /* bngctr+ */, PPC::BCCCTR, Convert__imm_95_39__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1888 /* bngctr- */, PPC::BCCCTR, Convert__imm_95_38__regCR0, AMFBS_None, {  }, },
  { 1888 /* bngctr- */, PPC::BCCCTR, Convert__imm_95_38__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1896 /* bngctrl */, PPC::BCCCTRL, Convert__imm_95_36__regCR0, AMFBS_None, {  }, },
  { 1896 /* bngctrl */, PPC::BCCCTRL, Convert__imm_95_36__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1904 /* bngctrl+ */, PPC::BCCCTRL, Convert__imm_95_39__regCR0, AMFBS_None, {  }, },
  { 1904 /* bngctrl+ */, PPC::BCCCTRL, Convert__imm_95_39__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1913 /* bngctrl- */, PPC::BCCCTRL, Convert__imm_95_38__regCR0, AMFBS_None, {  }, },
  { 1913 /* bngctrl- */, PPC::BCCCTRL, Convert__imm_95_38__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1922 /* bngl */, PPC::BCCL, Convert__imm_95_36__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1922 /* bngl */, PPC::BCCL, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1927 /* bngl+ */, PPC::BCCL, Convert__imm_95_39__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1927 /* bngl+ */, PPC::BCCL, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1933 /* bngl- */, PPC::BCCL, Convert__imm_95_38__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1933 /* bngl- */, PPC::BCCL, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1939 /* bngla */, PPC::BCCLA, Convert__imm_95_36__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1939 /* bngla */, PPC::BCCLA, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1945 /* bngla+ */, PPC::BCCLA, Convert__imm_95_39__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1945 /* bngla+ */, PPC::BCCLA, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1952 /* bngla- */, PPC::BCCLA, Convert__imm_95_38__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1952 /* bngla- */, PPC::BCCLA, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1959 /* bnglr */, PPC::BCCLR, Convert__imm_95_36__regCR0, AMFBS_None, {  }, },
  { 1959 /* bnglr */, PPC::BCCLR, Convert__imm_95_36__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1965 /* bnglr+ */, PPC::BCCLR, Convert__imm_95_39__regCR0, AMFBS_None, {  }, },
  { 1965 /* bnglr+ */, PPC::BCCLR, Convert__imm_95_39__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1972 /* bnglr- */, PPC::BCCLR, Convert__imm_95_38__regCR0, AMFBS_None, {  }, },
  { 1972 /* bnglr- */, PPC::BCCLR, Convert__imm_95_38__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1979 /* bnglrl */, PPC::BCCLRL, Convert__imm_95_36__regCR0, AMFBS_None, {  }, },
  { 1979 /* bnglrl */, PPC::BCCLRL, Convert__imm_95_36__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1986 /* bnglrl+ */, PPC::BCCLRL, Convert__imm_95_39__regCR0, AMFBS_None, {  }, },
  { 1986 /* bnglrl+ */, PPC::BCCLRL, Convert__imm_95_39__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1994 /* bnglrl- */, PPC::BCCLRL, Convert__imm_95_38__regCR0, AMFBS_None, {  }, },
  { 1994 /* bnglrl- */, PPC::BCCLRL, Convert__imm_95_38__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2002 /* bnl */, PPC::BCC, Convert__imm_95_4__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2002 /* bnl */, PPC::BCC, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2006 /* bnl+ */, PPC::BCC, Convert__imm_95_7__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2006 /* bnl+ */, PPC::BCC, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2011 /* bnl- */, PPC::BCC, Convert__imm_95_6__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2011 /* bnl- */, PPC::BCC, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2016 /* bnla */, PPC::BCCA, Convert__imm_95_4__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2016 /* bnla */, PPC::BCCA, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2021 /* bnla+ */, PPC::BCCA, Convert__imm_95_7__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2021 /* bnla+ */, PPC::BCCA, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2027 /* bnla- */, PPC::BCCA, Convert__imm_95_6__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2027 /* bnla- */, PPC::BCCA, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2033 /* bnlctr */, PPC::BCCCTR, Convert__imm_95_4__regCR0, AMFBS_None, {  }, },
  { 2033 /* bnlctr */, PPC::BCCCTR, Convert__imm_95_4__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2040 /* bnlctr+ */, PPC::BCCCTR, Convert__imm_95_7__regCR0, AMFBS_None, {  }, },
  { 2040 /* bnlctr+ */, PPC::BCCCTR, Convert__imm_95_7__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2048 /* bnlctr- */, PPC::BCCCTR, Convert__imm_95_6__regCR0, AMFBS_None, {  }, },
  { 2048 /* bnlctr- */, PPC::BCCCTR, Convert__imm_95_6__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2056 /* bnlctrl */, PPC::BCCCTRL, Convert__imm_95_4__regCR0, AMFBS_None, {  }, },
  { 2056 /* bnlctrl */, PPC::BCCCTRL, Convert__imm_95_4__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2064 /* bnlctrl+ */, PPC::BCCCTRL, Convert__imm_95_7__regCR0, AMFBS_None, {  }, },
  { 2064 /* bnlctrl+ */, PPC::BCCCTRL, Convert__imm_95_7__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2073 /* bnlctrl- */, PPC::BCCCTRL, Convert__imm_95_6__regCR0, AMFBS_None, {  }, },
  { 2073 /* bnlctrl- */, PPC::BCCCTRL, Convert__imm_95_6__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2082 /* bnll */, PPC::BCCL, Convert__imm_95_4__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2082 /* bnll */, PPC::BCCL, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2087 /* bnll+ */, PPC::BCCL, Convert__imm_95_7__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2087 /* bnll+ */, PPC::BCCL, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2093 /* bnll- */, PPC::BCCL, Convert__imm_95_6__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2093 /* bnll- */, PPC::BCCL, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2099 /* bnlla */, PPC::BCCLA, Convert__imm_95_4__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2099 /* bnlla */, PPC::BCCLA, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2105 /* bnlla+ */, PPC::BCCLA, Convert__imm_95_7__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2105 /* bnlla+ */, PPC::BCCLA, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2112 /* bnlla- */, PPC::BCCLA, Convert__imm_95_6__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2112 /* bnlla- */, PPC::BCCLA, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2119 /* bnllr */, PPC::BCCLR, Convert__imm_95_4__regCR0, AMFBS_None, {  }, },
  { 2119 /* bnllr */, PPC::BCCLR, Convert__imm_95_4__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2125 /* bnllr+ */, PPC::BCCLR, Convert__imm_95_7__regCR0, AMFBS_None, {  }, },
  { 2125 /* bnllr+ */, PPC::BCCLR, Convert__imm_95_7__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2132 /* bnllr- */, PPC::BCCLR, Convert__imm_95_6__regCR0, AMFBS_None, {  }, },
  { 2132 /* bnllr- */, PPC::BCCLR, Convert__imm_95_6__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2139 /* bnllrl */, PPC::BCCLRL, Convert__imm_95_4__regCR0, AMFBS_None, {  }, },
  { 2139 /* bnllrl */, PPC::BCCLRL, Convert__imm_95_4__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2146 /* bnllrl+ */, PPC::BCCLRL, Convert__imm_95_7__regCR0, AMFBS_None, {  }, },
  { 2146 /* bnllrl+ */, PPC::BCCLRL, Convert__imm_95_7__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2154 /* bnllrl- */, PPC::BCCLRL, Convert__imm_95_6__regCR0, AMFBS_None, {  }, },
  { 2154 /* bnllrl- */, PPC::BCCLRL, Convert__imm_95_6__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2162 /* bns */, PPC::BCC, Convert__imm_95_100__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2162 /* bns */, PPC::BCC, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2166 /* bns+ */, PPC::BCC, Convert__imm_95_103__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2166 /* bns+ */, PPC::BCC, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2171 /* bns- */, PPC::BCC, Convert__imm_95_102__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2171 /* bns- */, PPC::BCC, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2176 /* bnsa */, PPC::BCCA, Convert__imm_95_100__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2176 /* bnsa */, PPC::BCCA, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2181 /* bnsa+ */, PPC::BCCA, Convert__imm_95_103__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2181 /* bnsa+ */, PPC::BCCA, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2187 /* bnsa- */, PPC::BCCA, Convert__imm_95_102__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2187 /* bnsa- */, PPC::BCCA, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2193 /* bnsctr */, PPC::BCCCTR, Convert__imm_95_100__regCR0, AMFBS_None, {  }, },
  { 2193 /* bnsctr */, PPC::BCCCTR, Convert__imm_95_100__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2200 /* bnsctr+ */, PPC::BCCCTR, Convert__imm_95_103__regCR0, AMFBS_None, {  }, },
  { 2200 /* bnsctr+ */, PPC::BCCCTR, Convert__imm_95_103__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2208 /* bnsctr- */, PPC::BCCCTR, Convert__imm_95_102__regCR0, AMFBS_None, {  }, },
  { 2208 /* bnsctr- */, PPC::BCCCTR, Convert__imm_95_102__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2216 /* bnsctrl */, PPC::BCCCTRL, Convert__imm_95_100__regCR0, AMFBS_None, {  }, },
  { 2216 /* bnsctrl */, PPC::BCCCTRL, Convert__imm_95_100__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2224 /* bnsctrl+ */, PPC::BCCCTRL, Convert__imm_95_103__regCR0, AMFBS_None, {  }, },
  { 2224 /* bnsctrl+ */, PPC::BCCCTRL, Convert__imm_95_103__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2233 /* bnsctrl- */, PPC::BCCCTRL, Convert__imm_95_102__regCR0, AMFBS_None, {  }, },
  { 2233 /* bnsctrl- */, PPC::BCCCTRL, Convert__imm_95_102__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2242 /* bnsl */, PPC::BCCL, Convert__imm_95_100__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2242 /* bnsl */, PPC::BCCL, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2247 /* bnsl+ */, PPC::BCCL, Convert__imm_95_103__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2247 /* bnsl+ */, PPC::BCCL, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2253 /* bnsl- */, PPC::BCCL, Convert__imm_95_102__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2253 /* bnsl- */, PPC::BCCL, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2259 /* bnsla */, PPC::BCCLA, Convert__imm_95_100__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2259 /* bnsla */, PPC::BCCLA, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2265 /* bnsla+ */, PPC::BCCLA, Convert__imm_95_103__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2265 /* bnsla+ */, PPC::BCCLA, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2272 /* bnsla- */, PPC::BCCLA, Convert__imm_95_102__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2272 /* bnsla- */, PPC::BCCLA, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2279 /* bnslr */, PPC::BCCLR, Convert__imm_95_100__regCR0, AMFBS_None, {  }, },
  { 2279 /* bnslr */, PPC::BCCLR, Convert__imm_95_100__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2285 /* bnslr+ */, PPC::BCCLR, Convert__imm_95_103__regCR0, AMFBS_None, {  }, },
  { 2285 /* bnslr+ */, PPC::BCCLR, Convert__imm_95_103__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2292 /* bnslr- */, PPC::BCCLR, Convert__imm_95_102__regCR0, AMFBS_None, {  }, },
  { 2292 /* bnslr- */, PPC::BCCLR, Convert__imm_95_102__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2299 /* bnslrl */, PPC::BCCLRL, Convert__imm_95_100__regCR0, AMFBS_None, {  }, },
  { 2299 /* bnslrl */, PPC::BCCLRL, Convert__imm_95_100__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2306 /* bnslrl+ */, PPC::BCCLRL, Convert__imm_95_103__regCR0, AMFBS_None, {  }, },
  { 2306 /* bnslrl+ */, PPC::BCCLRL, Convert__imm_95_103__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2314 /* bnslrl- */, PPC::BCCLRL, Convert__imm_95_102__regCR0, AMFBS_None, {  }, },
  { 2314 /* bnslrl- */, PPC::BCCLRL, Convert__imm_95_102__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2322 /* bnu */, PPC::BCC, Convert__imm_95_100__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2322 /* bnu */, PPC::BCC, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2326 /* bnu+ */, PPC::BCC, Convert__imm_95_103__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2326 /* bnu+ */, PPC::BCC, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2331 /* bnu- */, PPC::BCC, Convert__imm_95_102__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2331 /* bnu- */, PPC::BCC, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2336 /* bnua */, PPC::BCCA, Convert__imm_95_100__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2336 /* bnua */, PPC::BCCA, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2341 /* bnua+ */, PPC::BCCA, Convert__imm_95_103__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2341 /* bnua+ */, PPC::BCCA, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2347 /* bnua- */, PPC::BCCA, Convert__imm_95_102__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2347 /* bnua- */, PPC::BCCA, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2353 /* bnuctr */, PPC::BCCCTR, Convert__imm_95_100__regCR0, AMFBS_None, {  }, },
  { 2353 /* bnuctr */, PPC::BCCCTR, Convert__imm_95_100__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2360 /* bnuctr+ */, PPC::BCCCTR, Convert__imm_95_103__regCR0, AMFBS_None, {  }, },
  { 2360 /* bnuctr+ */, PPC::BCCCTR, Convert__imm_95_103__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2368 /* bnuctr- */, PPC::BCCCTR, Convert__imm_95_102__regCR0, AMFBS_None, {  }, },
  { 2368 /* bnuctr- */, PPC::BCCCTR, Convert__imm_95_102__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2376 /* bnuctrl */, PPC::BCCCTRL, Convert__imm_95_100__regCR0, AMFBS_None, {  }, },
  { 2376 /* bnuctrl */, PPC::BCCCTRL, Convert__imm_95_100__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2384 /* bnuctrl+ */, PPC::BCCCTRL, Convert__imm_95_103__regCR0, AMFBS_None, {  }, },
  { 2384 /* bnuctrl+ */, PPC::BCCCTRL, Convert__imm_95_103__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2393 /* bnuctrl- */, PPC::BCCCTRL, Convert__imm_95_102__regCR0, AMFBS_None, {  }, },
  { 2393 /* bnuctrl- */, PPC::BCCCTRL, Convert__imm_95_102__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2402 /* bnul */, PPC::BCCL, Convert__imm_95_100__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2402 /* bnul */, PPC::BCCL, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2407 /* bnul+ */, PPC::BCCL, Convert__imm_95_103__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2407 /* bnul+ */, PPC::BCCL, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2413 /* bnul- */, PPC::BCCL, Convert__imm_95_102__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2413 /* bnul- */, PPC::BCCL, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2419 /* bnula */, PPC::BCCLA, Convert__imm_95_100__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2419 /* bnula */, PPC::BCCLA, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2425 /* bnula+ */, PPC::BCCLA, Convert__imm_95_103__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2425 /* bnula+ */, PPC::BCCLA, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2432 /* bnula- */, PPC::BCCLA, Convert__imm_95_102__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2432 /* bnula- */, PPC::BCCLA, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2439 /* bnulr */, PPC::BCCLR, Convert__imm_95_100__regCR0, AMFBS_None, {  }, },
  { 2439 /* bnulr */, PPC::BCCLR, Convert__imm_95_100__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2445 /* bnulr+ */, PPC::BCCLR, Convert__imm_95_103__regCR0, AMFBS_None, {  }, },
  { 2445 /* bnulr+ */, PPC::BCCLR, Convert__imm_95_103__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2452 /* bnulr- */, PPC::BCCLR, Convert__imm_95_102__regCR0, AMFBS_None, {  }, },
  { 2452 /* bnulr- */, PPC::BCCLR, Convert__imm_95_102__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2459 /* bnulrl */, PPC::BCCLRL, Convert__imm_95_100__regCR0, AMFBS_None, {  }, },
  { 2459 /* bnulrl */, PPC::BCCLRL, Convert__imm_95_100__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2466 /* bnulrl+ */, PPC::BCCLRL, Convert__imm_95_103__regCR0, AMFBS_None, {  }, },
  { 2466 /* bnulrl+ */, PPC::BCCLRL, Convert__imm_95_103__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2474 /* bnulrl- */, PPC::BCCLRL, Convert__imm_95_102__regCR0, AMFBS_None, {  }, },
  { 2474 /* bnulrl- */, PPC::BCCLRL, Convert__imm_95_102__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2482 /* bpermd */, PPC::BPERMD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2489 /* brinc */, PPC::BRINC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2495 /* bso */, PPC::BCC, Convert__imm_95_108__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2495 /* bso */, PPC::BCC, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2499 /* bso+ */, PPC::BCC, Convert__imm_95_111__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2499 /* bso+ */, PPC::BCC, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2504 /* bso- */, PPC::BCC, Convert__imm_95_110__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2504 /* bso- */, PPC::BCC, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2509 /* bsoa */, PPC::BCCA, Convert__imm_95_108__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2509 /* bsoa */, PPC::BCCA, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2514 /* bsoa+ */, PPC::BCCA, Convert__imm_95_111__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2514 /* bsoa+ */, PPC::BCCA, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2520 /* bsoa- */, PPC::BCCA, Convert__imm_95_110__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2520 /* bsoa- */, PPC::BCCA, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2526 /* bsoctr */, PPC::BCCCTR, Convert__imm_95_108__regCR0, AMFBS_None, {  }, },
  { 2526 /* bsoctr */, PPC::BCCCTR, Convert__imm_95_108__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2533 /* bsoctr+ */, PPC::BCCCTR, Convert__imm_95_111__regCR0, AMFBS_None, {  }, },
  { 2533 /* bsoctr+ */, PPC::BCCCTR, Convert__imm_95_111__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2541 /* bsoctr- */, PPC::BCCCTR, Convert__imm_95_110__regCR0, AMFBS_None, {  }, },
  { 2541 /* bsoctr- */, PPC::BCCCTR, Convert__imm_95_110__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2549 /* bsoctrl */, PPC::BCCCTRL, Convert__imm_95_108__regCR0, AMFBS_None, {  }, },
  { 2549 /* bsoctrl */, PPC::BCCCTRL, Convert__imm_95_108__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2557 /* bsoctrl+ */, PPC::BCCCTRL, Convert__imm_95_111__regCR0, AMFBS_None, {  }, },
  { 2557 /* bsoctrl+ */, PPC::BCCCTRL, Convert__imm_95_111__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2566 /* bsoctrl- */, PPC::BCCCTRL, Convert__imm_95_110__regCR0, AMFBS_None, {  }, },
  { 2566 /* bsoctrl- */, PPC::BCCCTRL, Convert__imm_95_110__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2575 /* bsol */, PPC::BCCL, Convert__imm_95_108__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2575 /* bsol */, PPC::BCCL, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2580 /* bsol+ */, PPC::BCCL, Convert__imm_95_111__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2580 /* bsol+ */, PPC::BCCL, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2586 /* bsol- */, PPC::BCCL, Convert__imm_95_110__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2586 /* bsol- */, PPC::BCCL, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2592 /* bsola */, PPC::BCCLA, Convert__imm_95_108__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2592 /* bsola */, PPC::BCCLA, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2598 /* bsola+ */, PPC::BCCLA, Convert__imm_95_111__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2598 /* bsola+ */, PPC::BCCLA, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2605 /* bsola- */, PPC::BCCLA, Convert__imm_95_110__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2605 /* bsola- */, PPC::BCCLA, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2612 /* bsolr */, PPC::BCCLR, Convert__imm_95_108__regCR0, AMFBS_None, {  }, },
  { 2612 /* bsolr */, PPC::BCCLR, Convert__imm_95_108__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2618 /* bsolr+ */, PPC::BCCLR, Convert__imm_95_111__regCR0, AMFBS_None, {  }, },
  { 2618 /* bsolr+ */, PPC::BCCLR, Convert__imm_95_111__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2625 /* bsolr- */, PPC::BCCLR, Convert__imm_95_110__regCR0, AMFBS_None, {  }, },
  { 2625 /* bsolr- */, PPC::BCCLR, Convert__imm_95_110__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2632 /* bsolrl */, PPC::BCCLRL, Convert__imm_95_108__regCR0, AMFBS_None, {  }, },
  { 2632 /* bsolrl */, PPC::BCCLRL, Convert__imm_95_108__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2639 /* bsolrl+ */, PPC::BCCLRL, Convert__imm_95_111__regCR0, AMFBS_None, {  }, },
  { 2639 /* bsolrl+ */, PPC::BCCLRL, Convert__imm_95_111__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2647 /* bsolrl- */, PPC::BCCLRL, Convert__imm_95_110__regCR0, AMFBS_None, {  }, },
  { 2647 /* bsolrl- */, PPC::BCCLRL, Convert__imm_95_110__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2655 /* bt */, PPC::gBC, Convert__imm_95_12__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2658 /* bt+ */, PPC::gBC, Convert__imm_95_15__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2662 /* bt- */, PPC::gBC, Convert__imm_95_14__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2666 /* bta */, PPC::gBCA, Convert__imm_95_12__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2670 /* bta+ */, PPC::gBCA, Convert__imm_95_15__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2675 /* bta- */, PPC::gBCA, Convert__imm_95_14__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2680 /* btctr */, PPC::gBCCTR, Convert__imm_95_12__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 2686 /* btctr+ */, PPC::gBCCTR, Convert__imm_95_15__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 2693 /* btctr- */, PPC::gBCCTR, Convert__imm_95_14__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 2700 /* btctrl */, PPC::gBCCTRL, Convert__imm_95_12__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 2707 /* btctrl+ */, PPC::gBCCTRL, Convert__imm_95_15__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 2715 /* btctrl- */, PPC::gBCCTRL, Convert__imm_95_14__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 2723 /* btl */, PPC::gBCL, Convert__imm_95_12__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2727 /* btl+ */, PPC::gBCL, Convert__imm_95_15__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2732 /* btl- */, PPC::gBCL, Convert__imm_95_14__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2737 /* btla */, PPC::gBCLA, Convert__imm_95_12__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2742 /* btla+ */, PPC::gBCLA, Convert__imm_95_15__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2748 /* btla- */, PPC::gBCLA, Convert__imm_95_14__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2754 /* btlr */, PPC::gBCLR, Convert__imm_95_12__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 2759 /* btlr+ */, PPC::gBCLR, Convert__imm_95_15__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 2765 /* btlr- */, PPC::gBCLR, Convert__imm_95_14__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 2771 /* btlrl */, PPC::gBCLRL, Convert__imm_95_12__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 2777 /* btlrl+ */, PPC::gBCLRL, Convert__imm_95_15__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 2784 /* btlrl- */, PPC::gBCLRL, Convert__imm_95_14__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 2791 /* bun */, PPC::BCC, Convert__imm_95_108__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2791 /* bun */, PPC::BCC, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2795 /* bun+ */, PPC::BCC, Convert__imm_95_111__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2795 /* bun+ */, PPC::BCC, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2800 /* bun- */, PPC::BCC, Convert__imm_95_110__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2800 /* bun- */, PPC::BCC, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2805 /* buna */, PPC::BCCA, Convert__imm_95_108__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2805 /* buna */, PPC::BCCA, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2810 /* buna+ */, PPC::BCCA, Convert__imm_95_111__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2810 /* buna+ */, PPC::BCCA, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2816 /* buna- */, PPC::BCCA, Convert__imm_95_110__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2816 /* buna- */, PPC::BCCA, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2822 /* bunctr */, PPC::BCCCTR, Convert__imm_95_108__regCR0, AMFBS_None, {  }, },
  { 2822 /* bunctr */, PPC::BCCCTR, Convert__imm_95_108__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2829 /* bunctr+ */, PPC::BCCCTR, Convert__imm_95_111__regCR0, AMFBS_None, {  }, },
  { 2829 /* bunctr+ */, PPC::BCCCTR, Convert__imm_95_111__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2837 /* bunctr- */, PPC::BCCCTR, Convert__imm_95_110__regCR0, AMFBS_None, {  }, },
  { 2837 /* bunctr- */, PPC::BCCCTR, Convert__imm_95_110__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2845 /* bunctrl */, PPC::BCCCTRL, Convert__imm_95_108__regCR0, AMFBS_None, {  }, },
  { 2845 /* bunctrl */, PPC::BCCCTRL, Convert__imm_95_108__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2853 /* bunctrl+ */, PPC::BCCCTRL, Convert__imm_95_111__regCR0, AMFBS_None, {  }, },
  { 2853 /* bunctrl+ */, PPC::BCCCTRL, Convert__imm_95_111__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2862 /* bunctrl- */, PPC::BCCCTRL, Convert__imm_95_110__regCR0, AMFBS_None, {  }, },
  { 2862 /* bunctrl- */, PPC::BCCCTRL, Convert__imm_95_110__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2871 /* bunl */, PPC::BCCL, Convert__imm_95_108__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2871 /* bunl */, PPC::BCCL, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2876 /* bunl+ */, PPC::BCCL, Convert__imm_95_111__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2876 /* bunl+ */, PPC::BCCL, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2882 /* bunl- */, PPC::BCCL, Convert__imm_95_110__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2882 /* bunl- */, PPC::BCCL, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2888 /* bunla */, PPC::BCCLA, Convert__imm_95_108__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2888 /* bunla */, PPC::BCCLA, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2894 /* bunla+ */, PPC::BCCLA, Convert__imm_95_111__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2894 /* bunla+ */, PPC::BCCLA, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2901 /* bunla- */, PPC::BCCLA, Convert__imm_95_110__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2901 /* bunla- */, PPC::BCCLA, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2908 /* bunlr */, PPC::BCCLR, Convert__imm_95_108__regCR0, AMFBS_None, {  }, },
  { 2908 /* bunlr */, PPC::BCCLR, Convert__imm_95_108__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2914 /* bunlr+ */, PPC::BCCLR, Convert__imm_95_111__regCR0, AMFBS_None, {  }, },
  { 2914 /* bunlr+ */, PPC::BCCLR, Convert__imm_95_111__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2921 /* bunlr- */, PPC::BCCLR, Convert__imm_95_110__regCR0, AMFBS_None, {  }, },
  { 2921 /* bunlr- */, PPC::BCCLR, Convert__imm_95_110__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2928 /* bunlrl */, PPC::BCCLRL, Convert__imm_95_108__regCR0, AMFBS_None, {  }, },
  { 2928 /* bunlrl */, PPC::BCCLRL, Convert__imm_95_108__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2935 /* bunlrl+ */, PPC::BCCLRL, Convert__imm_95_111__regCR0, AMFBS_None, {  }, },
  { 2935 /* bunlrl+ */, PPC::BCCLRL, Convert__imm_95_111__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2943 /* bunlrl- */, PPC::BCCLRL, Convert__imm_95_110__regCR0, AMFBS_None, {  }, },
  { 2943 /* bunlrl- */, PPC::BCCLRL, Convert__imm_95_110__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2951 /* cfuged */, PPC::CFUGED, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2958 /* clrbhrb */, PPC::CLRBHRB, Convert_NoOperands, AMFBS_None, {  }, },
  { 2966 /* clrldi */, PPC::RLDICL, Convert__RegG8RC1_0__RegG8RC1_1__imm_95_0__U6Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 2966 /* clrldi */, PPC::RLDICL_32_64, Convert__RegG8RC1_0__RegGPRC1_1__imm_95_0__U6Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 2966 /* clrldi */, PPC::RLDICL_rec, Convert__RegG8RC1_1__RegG8RC1_2__imm_95_0__U6Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 2973 /* clrlsldi */, PPC::CLRLSLDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 2973 /* clrlsldi */, PPC::CLRLSLDI_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 2982 /* clrlslwi */, PPC::CLRLSLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 2982 /* clrlslwi */, PPC::CLRLSLWI_rec, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 2991 /* clrlwi */, PPC::RLWINM8, Convert__RegG8RC1_0__RegG8RC1_1__imm_95_0__U5Imm1_2__imm_95_31, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm }, },
  { 2991 /* clrlwi */, PPC::RLWINM, Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0__U5Imm1_2__imm_95_31, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 2991 /* clrlwi */, PPC::RLWINM8_rec, Convert__RegG8RC1_1__RegG8RC1_2__imm_95_0__U5Imm1_3__imm_95_31, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm }, },
  { 2991 /* clrlwi */, PPC::RLWINM_rec, Convert__RegGPRC1_1__RegGPRC1_2__imm_95_0__U5Imm1_3__imm_95_31, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 2998 /* clrrdi */, PPC::CLRRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 2998 /* clrrdi */, PPC::CLRRDI_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 3005 /* clrrwi */, PPC::CLRRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3005 /* clrrwi */, PPC::CLRRWI_rec, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3012 /* cmp */, PPC::CMPW, Convert__RegCRRC1_0__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK_RegCRRC, MCK_0, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3012 /* cmp */, PPC::CMPD, Convert__RegCRRC1_0__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK_RegCRRC, MCK_1, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3016 /* cmpb */, PPC::CMPB, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3021 /* cmpd */, PPC::CMPD, Convert__regCR0__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 3021 /* cmpd */, PPC::CMPD, Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3026 /* cmpdi */, PPC::CMPDI, Convert__regCR0__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 3026 /* cmpdi */, PPC::CMPDI, Convert__RegCRRC1_0__RegG8RC1_1__S16Imm1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegG8RC, MCK_S16Imm }, },
  { 3032 /* cmpeqb */, PPC::CMPEQB, Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3039 /* cmpi */, PPC::CMPWI, Convert__RegCRRC1_0__RegGPRC1_2__S16Imm1_3, AMFBS_None, { MCK_RegCRRC, MCK_0, MCK_RegGPRC, MCK_S16Imm }, },
  { 3039 /* cmpi */, PPC::CMPDI, Convert__RegCRRC1_0__RegG8RC1_2__S16Imm1_3, AMFBS_None, { MCK_RegCRRC, MCK_1, MCK_RegG8RC, MCK_S16Imm }, },
  { 3044 /* cmpl */, PPC::CMPLW, Convert__RegCRRC1_0__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK_RegCRRC, MCK_0, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3044 /* cmpl */, PPC::CMPLD, Convert__RegCRRC1_0__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK_RegCRRC, MCK_1, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3049 /* cmpld */, PPC::CMPLD, Convert__regCR0__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 3049 /* cmpld */, PPC::CMPLD, Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3055 /* cmpldi */, PPC::CMPLDI, Convert__regCR0__RegG8RC1_0__U16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_U16Imm }, },
  { 3055 /* cmpldi */, PPC::CMPLDI, Convert__RegCRRC1_0__RegG8RC1_1__U16Imm1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegG8RC, MCK_U16Imm }, },
  { 3062 /* cmpli */, PPC::CMPLWI, Convert__RegCRRC1_0__RegGPRC1_2__U16Imm1_3, AMFBS_None, { MCK_RegCRRC, MCK_0, MCK_RegGPRC, MCK_U16Imm }, },
  { 3062 /* cmpli */, PPC::CMPLDI, Convert__RegCRRC1_0__RegG8RC1_2__U16Imm1_3, AMFBS_None, { MCK_RegCRRC, MCK_1, MCK_RegG8RC, MCK_U16Imm }, },
  { 3068 /* cmplw */, PPC::CMPLW, Convert__regCR0__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3068 /* cmplw */, PPC::CMPLW, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3074 /* cmplwi */, PPC::CMPLWI, Convert__regCR0__RegGPRC1_0__U16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_U16Imm }, },
  { 3074 /* cmplwi */, PPC::CMPLWI, Convert__RegCRRC1_0__RegGPRC1_1__U16Imm1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 3081 /* cmprb */, PPC::CMPRB, Convert__RegCRRC1_0__U1Imm1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK_RegCRRC, MCK_U1Imm, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3087 /* cmpw */, PPC::CMPW, Convert__regCR0__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3087 /* cmpw */, PPC::CMPW, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3092 /* cmpwi */, PPC::CMPWI, Convert__regCR0__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 3092 /* cmpwi */, PPC::CMPWI, Convert__RegCRRC1_0__RegGPRC1_1__S16Imm1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 3098 /* cntlzd */, PPC::CNTLZD, Convert__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 3098 /* cntlzd */, PPC::CNTLZD_rec, Convert__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3105 /* cntlzdm */, PPC::CNTLZDM, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3113 /* cntlzw */, PPC::CNTLZW8, Convert__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 3113 /* cntlzw */, PPC::CNTLZW, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3113 /* cntlzw */, PPC::CNTLZW, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3113 /* cntlzw */, PPC::CNTLZW8_rec, Convert__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3113 /* cntlzw */, PPC::CNTLZW_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3113 /* cntlzw */, PPC::CNTLZW_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3120 /* cnttzd */, PPC::CNTTZD, Convert__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 3120 /* cnttzd */, PPC::CNTTZD_rec, Convert__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3127 /* cnttzdm */, PPC::CNTTZDM, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3135 /* cnttzw */, PPC::CNTTZW, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3135 /* cnttzw */, PPC::CNTTZW_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3142 /* copy */, PPC::CP_COPY, Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3147 /* cpabort */, PPC::CP_ABORT, Convert_NoOperands, AMFBS_None, {  }, },
  { 3155 /* crand */, PPC::CRAND, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, AMFBS_None, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3161 /* crandc */, PPC::CRANDC, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, AMFBS_None, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3168 /* crclr */, PPC::CRXOR, Convert__RegCRBITRC1_0__RegCRBITRC1_0__RegCRBITRC1_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 3174 /* creqv */, PPC::CREQV, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, AMFBS_None, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3180 /* crmove */, PPC::CROR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3187 /* crnand */, PPC::CRNAND, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, AMFBS_None, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3194 /* crnor */, PPC::CRNOR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, AMFBS_None, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3200 /* crnot */, PPC::CRNOR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3206 /* cror */, PPC::CROR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, AMFBS_None, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3211 /* crorc */, PPC::CRORC, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, AMFBS_None, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3217 /* crset */, PPC::CREQV, Convert__RegCRBITRC1_0__RegCRBITRC1_0__RegCRBITRC1_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 3223 /* crxor */, PPC::CRXOR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, AMFBS_None, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3229 /* darn */, PPC::DARN, Convert__RegG8RC1_0__U2Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_U2Imm }, },
  { 3234 /* dcba */, PPC::DCBA, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3239 /* dcbf */, PPC::DCBFx, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3239 /* dcbf */, PPC::DCBF, Convert__U3Imm1_2__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_U3Imm }, },
  { 3244 /* dcbfep */, PPC::DCBFEP, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3251 /* dcbfl */, PPC::DCBFL, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3257 /* dcbflp */, PPC::DCBFLP, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3264 /* dcbfps */, PPC::DCBFPS, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3271 /* dcbi */, PPC::DCBI, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3276 /* dcbst */, PPC::DCBST, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3282 /* dcbstep */, PPC::DCBSTEP, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3290 /* dcbstps */, PPC::DCBSTPS, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3298 /* dcbt */, PPC::DCBTx, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3298 /* dcbt */, PPC::DCBT, Convert__U5Imm1_2__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_U5Imm }, },
  { 3303 /* dcbtct */, PPC::DCBTCT, Convert__RegGxRCNoR01_0__RegGxRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_U5Imm }, },
  { 3310 /* dcbtds */, PPC::DCBTDS, Convert__RegGxRCNoR01_0__RegGxRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_U5Imm }, },
  { 3317 /* dcbtep */, PPC::DCBTEP, Convert__RegGxRCNoR01_1__RegGxRC1_2__U5Imm1_0, AMFBS_None, { MCK_U5Imm, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3324 /* dcbtst */, PPC::DCBTSTx, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3324 /* dcbtst */, PPC::DCBTST, Convert__U5Imm1_2__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_U5Imm }, },
  { 3331 /* dcbtstct */, PPC::DCBTSTCT, Convert__RegGxRCNoR01_0__RegGxRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_U5Imm }, },
  { 3340 /* dcbtstds */, PPC::DCBTSTDS, Convert__RegGxRCNoR01_0__RegGxRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_U5Imm }, },
  { 3349 /* dcbtstep */, PPC::DCBTSTEP, Convert__RegGxRCNoR01_1__RegGxRC1_2__U5Imm1_0, AMFBS_None, { MCK_U5Imm, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3358 /* dcbtstt */, PPC::DCBTSTT, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3366 /* dcbtt */, PPC::DCBTT, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3372 /* dcbz */, PPC::DCBZ, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3377 /* dcbzep */, PPC::DCBZEP, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3384 /* dcbzl */, PPC::DCBZL, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3390 /* dcbzlep */, PPC::DCBZLEP, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3398 /* dccci */, PPC::DCCCI, Convert__regR0__regR0, AMFBS_None, {  }, },
  { 3398 /* dccci */, PPC::DCCCI, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3404 /* dci */, PPC::DCCCI, Convert__regR0__regR0, AMFBS_None, { MCK_0 }, },
  { 3408 /* divd */, PPC::DIVD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3408 /* divd */, PPC::DIVD_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3413 /* divde */, PPC::DIVDE, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3413 /* divde */, PPC::DIVDE_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3419 /* divdeo */, PPC::DIVDEO, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3419 /* divdeo */, PPC::DIVDEO_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3426 /* divdeu */, PPC::DIVDEU, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3426 /* divdeu */, PPC::DIVDEU_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3433 /* divdeuo */, PPC::DIVDEUO, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3433 /* divdeuo */, PPC::DIVDEUO_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3441 /* divdo */, PPC::DIVDO, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3441 /* divdo */, PPC::DIVDO_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3447 /* divdu */, PPC::DIVDU, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3447 /* divdu */, PPC::DIVDU_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3453 /* divduo */, PPC::DIVDUO, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3453 /* divduo */, PPC::DIVDUO_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3460 /* divw */, PPC::DIVW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3460 /* divw */, PPC::DIVW_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3465 /* divwe */, PPC::DIVWE, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3465 /* divwe */, PPC::DIVWE_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3471 /* divweo */, PPC::DIVWEO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3471 /* divweo */, PPC::DIVWEO_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3478 /* divweu */, PPC::DIVWEU, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3478 /* divweu */, PPC::DIVWEU_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3485 /* divweuo */, PPC::DIVWEUO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3485 /* divweuo */, PPC::DIVWEUO_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3493 /* divwo */, PPC::DIVWO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3493 /* divwo */, PPC::DIVWO_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3499 /* divwu */, PPC::DIVWU, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3499 /* divwu */, PPC::DIVWU_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3505 /* divwuo */, PPC::DIVWUO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3505 /* divwuo */, PPC::DIVWUO_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3512 /* dss */, PPC::DSS, Convert__U5Imm1_0, AMFBS_None, { MCK_U5Imm }, },
  { 3516 /* dssall */, PPC::DSSALL, Convert_NoOperands, AMFBS_None, {  }, },
  { 3523 /* dst */, PPC::DST, Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3527 /* dstst */, PPC::DSTST, Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3533 /* dststt */, PPC::DSTSTT, Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3540 /* dstt */, PPC::DSTT, Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3545 /* efdabs */, PPC::EFDABS, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 3552 /* efdadd */, PPC::EFDADD, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 3559 /* efdcfs */, PPC::EFDCFS, Convert__RegSPERC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPE4RC }, },
  { 3566 /* efdcfsf */, PPC::EFDCFSF, Convert__RegSPERC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPE4RC }, },
  { 3574 /* efdcfsi */, PPC::EFDCFSI, Convert__RegSPERC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegGPRC }, },
  { 3582 /* efdcfsid */, PPC::EFDCFSID, Convert__RegSPERC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegGPRC }, },
  { 3591 /* efdcfuf */, PPC::EFDCFUF, Convert__RegSPERC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPE4RC }, },
  { 3599 /* efdcfui */, PPC::EFDCFUI, Convert__RegSPERC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegGPRC }, },
  { 3607 /* efdcfuid */, PPC::EFDCFUID, Convert__RegSPERC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegGPRC }, },
  { 3616 /* efdcmpeq */, PPC::EFDCMPEQ, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 3625 /* efdcmpgt */, PPC::EFDCMPGT, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 3634 /* efdcmplt */, PPC::EFDCMPLT, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 3643 /* efdctsf */, PPC::EFDCTSF, Convert__RegSPERC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPE4RC }, },
  { 3651 /* efdctsi */, PPC::EFDCTSI, Convert__RegGPRC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegSPERC }, },
  { 3659 /* efdctsidz */, PPC::EFDCTSIDZ, Convert__RegGPRC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegSPERC }, },
  { 3669 /* efdctsiz */, PPC::EFDCTSIZ, Convert__RegGPRC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegSPERC }, },
  { 3678 /* efdctuf */, PPC::EFDCTUF, Convert__RegSPERC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPE4RC }, },
  { 3686 /* efdctui */, PPC::EFDCTUI, Convert__RegGPRC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegSPERC }, },
  { 3694 /* efdctuidz */, PPC::EFDCTUIDZ, Convert__RegGPRC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegSPERC }, },
  { 3704 /* efdctuiz */, PPC::EFDCTUIZ, Convert__RegGPRC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegSPERC }, },
  { 3713 /* efddiv */, PPC::EFDDIV, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 3720 /* efdmul */, PPC::EFDMUL, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 3727 /* efdnabs */, PPC::EFDNABS, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 3735 /* efdneg */, PPC::EFDNEG, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 3742 /* efdsub */, PPC::EFDSUB, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 3749 /* efdtsteq */, PPC::EFDTSTEQ, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 3758 /* efdtstgt */, PPC::EFDTSTGT, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 3767 /* efdtstlt */, PPC::EFDTSTLT, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 3776 /* efsabs */, PPC::EFSABS, Convert__RegSPE4RC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 3783 /* efsadd */, PPC::EFSADD, Convert__RegSPE4RC1_0__RegSPE4RC1_1__RegSPE4RC1_2, AMFBS_None, { MCK_RegSPE4RC, MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 3790 /* efscfd */, PPC::EFSCFD, Convert__RegSPE4RC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPE4RC, MCK_RegSPERC }, },
  { 3797 /* efscfsf */, PPC::EFSCFSF, Convert__RegSPE4RC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 3805 /* efscfsi */, PPC::EFSCFSI, Convert__RegSPE4RC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegSPE4RC, MCK_RegGPRC }, },
  { 3813 /* efscfuf */, PPC::EFSCFUF, Convert__RegSPE4RC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 3821 /* efscfui */, PPC::EFSCFUI, Convert__RegSPE4RC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegSPE4RC, MCK_RegGPRC }, },
  { 3829 /* efscmpeq */, PPC::EFSCMPEQ, Convert__RegCRRC1_0__RegSPE4RC1_1__RegSPE4RC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 3838 /* efscmpgt */, PPC::EFSCMPGT, Convert__RegCRRC1_0__RegSPE4RC1_1__RegSPE4RC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 3847 /* efscmplt */, PPC::EFSCMPLT, Convert__RegCRRC1_0__RegSPE4RC1_1__RegSPE4RC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 3856 /* efsctsf */, PPC::EFSCTSF, Convert__RegSPE4RC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 3864 /* efsctsi */, PPC::EFSCTSI, Convert__RegGPRC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegSPE4RC }, },
  { 3872 /* efsctsiz */, PPC::EFSCTSIZ, Convert__RegGPRC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegSPE4RC }, },
  { 3881 /* efsctuf */, PPC::EFSCTUF, Convert__RegSPERC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPE4RC }, },
  { 3889 /* efsctui */, PPC::EFSCTUI, Convert__RegGPRC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegSPE4RC }, },
  { 3897 /* efsctuiz */, PPC::EFSCTUIZ, Convert__RegGPRC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegSPE4RC }, },
  { 3906 /* efsdiv */, PPC::EFSDIV, Convert__RegSPE4RC1_0__RegSPE4RC1_1__RegSPE4RC1_2, AMFBS_None, { MCK_RegSPE4RC, MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 3913 /* efsmul */, PPC::EFSMUL, Convert__RegSPE4RC1_0__RegSPE4RC1_1__RegSPE4RC1_2, AMFBS_None, { MCK_RegSPE4RC, MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 3920 /* efsnabs */, PPC::EFSNABS, Convert__RegSPE4RC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 3928 /* efsneg */, PPC::EFSNEG, Convert__RegSPE4RC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 3935 /* efssub */, PPC::EFSSUB, Convert__RegSPE4RC1_0__RegSPE4RC1_1__RegSPE4RC1_2, AMFBS_None, { MCK_RegSPE4RC, MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 3942 /* efststeq */, PPC::EFSTSTEQ, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 3951 /* efststgt */, PPC::EFSTSTGT, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 3960 /* efststlt */, PPC::EFSTSTLT, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 3969 /* eieio */, PPC::EnforceIEIO, Convert_NoOperands, AMFBS_None, {  }, },
  { 3975 /* eqv */, PPC::EQV, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3975 /* eqv */, PPC::EQV_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3979 /* evabs */, PPC::EVABS, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 3985 /* evaddiw */, PPC::EVADDIW, Convert__RegSPERC1_0__RegSPERC1_2__U5Imm1_1, AMFBS_None, { MCK_RegSPERC, MCK_U5Imm, MCK_RegSPERC }, },
  { 3993 /* evaddsmiaaw */, PPC::EVADDSMIAAW, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4005 /* evaddssiaaw */, PPC::EVADDSSIAAW, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4017 /* evaddumiaaw */, PPC::EVADDUMIAAW, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4029 /* evaddusiaaw */, PPC::EVADDUSIAAW, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4041 /* evaddw */, PPC::EVADDW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4048 /* evand */, PPC::EVAND, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4054 /* evandc */, PPC::EVANDC, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4061 /* evcmpeq */, PPC::EVCMPEQ, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4069 /* evcmpgts */, PPC::EVCMPGTS, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4078 /* evcmpgtu */, PPC::EVCMPGTU, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4087 /* evcmplts */, PPC::EVCMPLTS, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4096 /* evcmpltu */, PPC::EVCMPLTU, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4105 /* evcntlsw */, PPC::EVCNTLSW, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4114 /* evcntlzw */, PPC::EVCNTLZW, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4123 /* evdivws */, PPC::EVDIVWS, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4131 /* evdivwu */, PPC::EVDIVWU, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4139 /* eveqv */, PPC::EVEQV, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4145 /* evextsb */, PPC::EVEXTSB, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4153 /* evextsh */, PPC::EVEXTSH, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4161 /* evfsabs */, PPC::EVFSABS, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4169 /* evfsadd */, PPC::EVFSADD, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4177 /* evfscfsf */, PPC::EVFSCFSF, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4186 /* evfscfsi */, PPC::EVFSCFSI, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4195 /* evfscfuf */, PPC::EVFSCFUF, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4204 /* evfscfui */, PPC::EVFSCFUI, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4213 /* evfscmpeq */, PPC::EVFSCMPEQ, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4223 /* evfscmpgt */, PPC::EVFSCMPGT, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4233 /* evfscmplt */, PPC::EVFSCMPLT, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4243 /* evfsctsf */, PPC::EVFSCTSF, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4243 /* evfsctsf */, PPC::EVFSCTUF, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4252 /* evfsctsi */, PPC::EVFSCTSI, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4261 /* evfsctsiz */, PPC::EVFSCTSIZ, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4261 /* evfsctsiz */, PPC::EVFSCTUIZ, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4271 /* evfsctui */, PPC::EVFSCTUI, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4280 /* evfsdiv */, PPC::EVFSDIV, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4288 /* evfsmul */, PPC::EVFSMUL, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4296 /* evfsnabs */, PPC::EVFSNABS, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4305 /* evfsneg */, PPC::EVFSNEG, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4313 /* evfssub */, PPC::EVFSSUB, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4321 /* evfststeq */, PPC::EVFSTSTEQ, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4331 /* evfststgt */, PPC::EVFSTSTGT, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4341 /* evfststlt */, PPC::EVFSTSTLT, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4351 /* evldd */, PPC::EVLDD, Convert__RegSPERC1_0__DispSPE81_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 4357 /* evlddx */, PPC::EVLDDX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4364 /* evldh */, PPC::EVLDH, Convert__RegSPERC1_0__DispSPE81_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 4370 /* evldhx */, PPC::EVLDHX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4377 /* evldw */, PPC::EVLDW, Convert__RegSPERC1_0__DispSPE81_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 4383 /* evldwx */, PPC::EVLDWX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4390 /* evlhhesplat */, PPC::EVLHHESPLAT, Convert__RegSPERC1_0__DispSPE21_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE2, MCK_RegGxRCNoR0 }, },
  { 4402 /* evlhhesplatx */, PPC::EVLHHESPLATX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4415 /* evlhhossplat */, PPC::EVLHHOSSPLAT, Convert__RegSPERC1_0__DispSPE21_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE2, MCK_RegGxRCNoR0 }, },
  { 4428 /* evlhhossplatx */, PPC::EVLHHOSSPLATX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4442 /* evlhhousplat */, PPC::EVLHHOUSPLAT, Convert__RegSPERC1_0__DispSPE21_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE2, MCK_RegGxRCNoR0 }, },
  { 4455 /* evlhhousplatx */, PPC::EVLHHOUSPLATX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4469 /* evlwhe */, PPC::EVLWHE, Convert__RegSPERC1_0__DispSPE41_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 4476 /* evlwhex */, PPC::EVLWHEX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4484 /* evlwhos */, PPC::EVLWHOS, Convert__RegSPERC1_0__DispSPE41_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 4492 /* evlwhosx */, PPC::EVLWHOSX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4501 /* evlwhou */, PPC::EVLWHOU, Convert__RegSPERC1_0__DispSPE41_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 4509 /* evlwhoux */, PPC::EVLWHOUX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4518 /* evlwhsplat */, PPC::EVLWHSPLAT, Convert__RegSPERC1_0__DispSPE41_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 4529 /* evlwhsplatx */, PPC::EVLWHSPLATX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4541 /* evlwwsplat */, PPC::EVLWWSPLAT, Convert__RegSPERC1_0__DispSPE41_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 4552 /* evlwwsplatx */, PPC::EVLWWSPLATX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4564 /* evmergehi */, PPC::EVMERGEHI, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4574 /* evmergehilo */, PPC::EVMERGEHILO, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4586 /* evmergelo */, PPC::EVMERGELO, Convert__RegSPERC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4596 /* evmergelohi */, PPC::EVMERGELOHI, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4608 /* evmhegsmfaa */, PPC::EVMHEGSMFAA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4620 /* evmhegsmfan */, PPC::EVMHEGSMFAN, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4632 /* evmhegsmiaa */, PPC::EVMHEGSMIAA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4644 /* evmhegsmian */, PPC::EVMHEGSMIAN, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4656 /* evmhegumiaa */, PPC::EVMHEGUMIAA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4668 /* evmhegumian */, PPC::EVMHEGUMIAN, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4680 /* evmhesmf */, PPC::EVMHESMF, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4689 /* evmhesmfa */, PPC::EVMHESMFA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4699 /* evmhesmfaaw */, PPC::EVMHESMFAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4711 /* evmhesmfanw */, PPC::EVMHESMFANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4723 /* evmhesmi */, PPC::EVMHESMI, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4732 /* evmhesmia */, PPC::EVMHESMIA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4742 /* evmhesmiaaw */, PPC::EVMHESMIAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4754 /* evmhesmianw */, PPC::EVMHESMIANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4766 /* evmhessf */, PPC::EVMHESSF, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4775 /* evmhessfa */, PPC::EVMHESSFA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4785 /* evmhessfaaw */, PPC::EVMHESSFAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4797 /* evmhessfanw */, PPC::EVMHESSFANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4809 /* evmhessiaaw */, PPC::EVMHESSIAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4821 /* evmhessianw */, PPC::EVMHESSIANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4833 /* evmheumi */, PPC::EVMHEUMI, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4842 /* evmheumia */, PPC::EVMHEUMIA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4852 /* evmheumiaaw */, PPC::EVMHEUMIAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4864 /* evmheumianw */, PPC::EVMHEUMIANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4876 /* evmheusiaaw */, PPC::EVMHEUSIAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4888 /* evmheusianw */, PPC::EVMHEUSIANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4900 /* evmhogsmfaa */, PPC::EVMHOGSMFAA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4912 /* evmhogsmfan */, PPC::EVMHOGSMFAN, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4924 /* evmhogsmiaa */, PPC::EVMHOGSMIAA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4936 /* evmhogsmian */, PPC::EVMHOGSMIAN, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4948 /* evmhogumiaa */, PPC::EVMHOGUMIAA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4960 /* evmhogumian */, PPC::EVMHOGUMIAN, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4972 /* evmhosmf */, PPC::EVMHOSMF, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4981 /* evmhosmfa */, PPC::EVMHOSMFA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4991 /* evmhosmfaaw */, PPC::EVMHOSMFAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5003 /* evmhosmfanw */, PPC::EVMHOSMFANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5015 /* evmhosmi */, PPC::EVMHOSMI, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5024 /* evmhosmia */, PPC::EVMHOSMIA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5034 /* evmhosmiaaw */, PPC::EVMHOSMIAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5046 /* evmhosmianw */, PPC::EVMHOSMIANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5058 /* evmhossf */, PPC::EVMHOSSF, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5067 /* evmhossfa */, PPC::EVMHOSSFA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5077 /* evmhossfaaw */, PPC::EVMHOSSFAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5089 /* evmhossfanw */, PPC::EVMHOSSFANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5101 /* evmhossiaaw */, PPC::EVMHOSSIAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5113 /* evmhossianw */, PPC::EVMHOSSIANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5125 /* evmhoumi */, PPC::EVMHOUMI, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5134 /* evmhoumia */, PPC::EVMHOUMIA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5144 /* evmhoumiaaw */, PPC::EVMHOUMIAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5156 /* evmhoumianw */, PPC::EVMHOUMIANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5168 /* evmhousiaaw */, PPC::EVMHOUSIAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5180 /* evmhousianw */, PPC::EVMHOUSIANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5192 /* evmra */, PPC::EVMRA, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 5198 /* evmwhsmf */, PPC::EVMWHSMF, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5207 /* evmwhsmfa */, PPC::EVMWHSMFA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5217 /* evmwhsmi */, PPC::EVMWHSMI, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5226 /* evmwhsmia */, PPC::EVMWHSMIA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5236 /* evmwhssf */, PPC::EVMWHSSF, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5245 /* evmwhssfa */, PPC::EVMWHSSFA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5255 /* evmwhumi */, PPC::EVMWHUMI, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5264 /* evmwhumia */, PPC::EVMWHUMIA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5274 /* evmwlsmiaaw */, PPC::EVMWLSMIAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5286 /* evmwlsmianw */, PPC::EVMWLSMIANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5298 /* evmwlssiaaw */, PPC::EVMWLSSIAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5310 /* evmwlssianw */, PPC::EVMWLSSIANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5322 /* evmwlumi */, PPC::EVMWLUMI, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5331 /* evmwlumia */, PPC::EVMWLUMIA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5341 /* evmwlumiaaw */, PPC::EVMWLUMIAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5353 /* evmwlumianw */, PPC::EVMWLUMIANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5365 /* evmwlusiaaw */, PPC::EVMWLUSIAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5377 /* evmwlusianw */, PPC::EVMWLUSIANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5389 /* evmwsmf */, PPC::EVMWSMF, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5397 /* evmwsmfa */, PPC::EVMWSMFA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5406 /* evmwsmfaa */, PPC::EVMWSMFAA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5416 /* evmwsmfan */, PPC::EVMWSMFAN, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5426 /* evmwsmi */, PPC::EVMWSMI, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5434 /* evmwsmia */, PPC::EVMWSMIA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5443 /* evmwsmiaa */, PPC::EVMWSMIAA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5453 /* evmwsmian */, PPC::EVMWSMIAN, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5463 /* evmwssf */, PPC::EVMWSSF, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5471 /* evmwssfa */, PPC::EVMWSSFA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5480 /* evmwssfaa */, PPC::EVMWSSFAA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5490 /* evmwssfan */, PPC::EVMWSSFAN, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5500 /* evmwumi */, PPC::EVMWUMI, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5508 /* evmwumia */, PPC::EVMWUMIA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5517 /* evmwumiaa */, PPC::EVMWUMIAA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5527 /* evmwumian */, PPC::EVMWUMIAN, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5537 /* evnand */, PPC::EVNAND, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5544 /* evneg */, PPC::EVNEG, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 5550 /* evnor */, PPC::EVNOR, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5556 /* evor */, PPC::EVOR, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5561 /* evorc */, PPC::EVORC, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5567 /* evrlw */, PPC::EVRLW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5573 /* evrlwi */, PPC::EVRLWI, Convert__RegSPERC1_0__RegSPERC1_1__U5Imm1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_U5Imm }, },
  { 5580 /* evrndw */, PPC::EVRNDW, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 5587 /* evsel */, PPC::EVSEL, Convert__RegSPERC1_1__RegSPERC1_2__RegSPERC1_3__imm_95_0, AMFBS_None, { MCK_crD, MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5593 /* evslw */, PPC::EVSLW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5599 /* evslwi */, PPC::EVSLWI, Convert__RegSPERC1_0__RegSPERC1_1__U5Imm1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_U5Imm }, },
  { 5606 /* evsplatfi */, PPC::EVSPLATFI, Convert__RegSPERC1_0__S5Imm1_1, AMFBS_None, { MCK_RegSPERC, MCK_S5Imm }, },
  { 5616 /* evsplati */, PPC::EVSPLATI, Convert__RegSPERC1_0__S5Imm1_1, AMFBS_None, { MCK_RegSPERC, MCK_S5Imm }, },
  { 5625 /* evsrwis */, PPC::EVSRWIS, Convert__RegSPERC1_0__RegSPERC1_1__U5Imm1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_U5Imm }, },
  { 5633 /* evsrwiu */, PPC::EVSRWIU, Convert__RegSPERC1_0__RegSPERC1_1__U5Imm1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_U5Imm }, },
  { 5641 /* evsrws */, PPC::EVSRWS, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5648 /* evsrwu */, PPC::EVSRWU, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5655 /* evstdd */, PPC::EVSTDD, Convert__RegSPERC1_0__DispSPE81_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 5662 /* evstddx */, PPC::EVSTDDX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5670 /* evstdh */, PPC::EVSTDH, Convert__RegSPERC1_0__DispSPE81_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 5677 /* evstdhx */, PPC::EVSTDHX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5685 /* evstdw */, PPC::EVSTDW, Convert__RegSPERC1_0__DispSPE81_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 5692 /* evstdwx */, PPC::EVSTDWX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5700 /* evstwhe */, PPC::EVSTWHE, Convert__RegSPERC1_0__DispSPE41_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 5708 /* evstwhex */, PPC::EVSTWHEX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5717 /* evstwho */, PPC::EVSTWHO, Convert__RegSPERC1_0__DispSPE41_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 5725 /* evstwhox */, PPC::EVSTWHOX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5734 /* evstwwe */, PPC::EVSTWWE, Convert__RegSPERC1_0__DispSPE41_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 5742 /* evstwwex */, PPC::EVSTWWEX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5751 /* evstwwo */, PPC::EVSTWWO, Convert__RegSPERC1_0__DispSPE41_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 5759 /* evstwwox */, PPC::EVSTWWOX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5768 /* evsubfsmiaaw */, PPC::EVSUBFSMIAAW, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 5781 /* evsubfssiaaw */, PPC::EVSUBFSSIAAW, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 5794 /* evsubfumiaaw */, PPC::EVSUBFUMIAAW, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 5807 /* evsubfusiaaw */, PPC::EVSUBFUSIAAW, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 5820 /* evsubfw */, PPC::EVSUBFW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5828 /* evsubifw */, PPC::EVSUBIFW, Convert__RegSPERC1_0__U5Imm1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_U5Imm, MCK_RegSPERC }, },
  { 5837 /* evxor */, PPC::EVXOR, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5843 /* extldi */, PPC::EXTLDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 5843 /* extldi */, PPC::EXTLDI_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 5850 /* extlwi */, PPC::EXTLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 5850 /* extlwi */, PPC::EXTLWI_rec, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 5857 /* extrdi */, PPC::EXTRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 5857 /* extrdi */, PPC::EXTRDI_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 5864 /* extrwi */, PPC::EXTRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 5864 /* extrwi */, PPC::EXTRWI_rec, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 5871 /* extsb */, PPC::EXTSB, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 5871 /* extsb */, PPC::EXTSB_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 5877 /* extsh */, PPC::EXTSH, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 5877 /* extsh */, PPC::EXTSH_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 5883 /* extsw */, PPC::EXTSW, Convert__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 5883 /* extsw */, PPC::EXTSW_rec, Convert__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 5889 /* extswsli */, PPC::EXTSWSLI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 5889 /* extswsli */, PPC::EXTSWSLI_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 5898 /* fabs */, PPC::FABSS, Convert__RegF4RC1_0__RegF4RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 5898 /* fabs */, PPC::FABSS_rec, Convert__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5903 /* fadd */, PPC::FADD, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5903 /* fadd */, PPC::FADD_rec, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5908 /* fadds */, PPC::FADDS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5908 /* fadds */, PPC::FADDS_rec, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5914 /* fcfid */, PPC::FCFID, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 5914 /* fcfid */, PPC::FCFID_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5920 /* fcfids */, PPC::FCFIDS, Convert__RegF4RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF8RC }, },
  { 5920 /* fcfids */, PPC::FCFIDS_rec, Convert__RegF4RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC }, },
  { 5927 /* fcfidu */, PPC::FCFIDU, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 5927 /* fcfidu */, PPC::FCFIDU_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5934 /* fcfidus */, PPC::FCFIDUS, Convert__RegF4RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF8RC }, },
  { 5934 /* fcfidus */, PPC::FCFIDUS_rec, Convert__RegF4RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC }, },
  { 5942 /* fcmpo */, PPC::FCMPOS, Convert__RegCRRC1_0__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5948 /* fcmpu */, PPC::FCMPUS, Convert__RegCRRC1_0__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5954 /* fcpsgn */, PPC::FCPSGNS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5954 /* fcpsgn */, PPC::FCPSGNS_rec, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5961 /* fctid */, PPC::FCTID, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 5961 /* fctid */, PPC::FCTID_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5967 /* fctidu */, PPC::FCTIDU, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 5967 /* fctidu */, PPC::FCTIDU_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5974 /* fctiduz */, PPC::FCTIDUZ, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 5974 /* fctiduz */, PPC::FCTIDUZ_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5982 /* fctidz */, PPC::FCTIDZ, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 5982 /* fctidz */, PPC::FCTIDZ_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5989 /* fctiw */, PPC::FCTIW, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 5989 /* fctiw */, PPC::FCTIW_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5995 /* fctiwu */, PPC::FCTIWU, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 5995 /* fctiwu */, PPC::FCTIWU_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6002 /* fctiwuz */, PPC::FCTIWUZ, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 6002 /* fctiwuz */, PPC::FCTIWUZ_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6010 /* fctiwz */, PPC::FCTIWZ, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 6010 /* fctiwz */, PPC::FCTIWZ_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6017 /* fdiv */, PPC::FDIV, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6017 /* fdiv */, PPC::FDIV_rec, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6022 /* fdivs */, PPC::FDIVS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6022 /* fdivs */, PPC::FDIVS_rec, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6028 /* fmadd */, PPC::FMADD, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6028 /* fmadd */, PPC::FMADD_rec, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6034 /* fmadds */, PPC::FMADDS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6034 /* fmadds */, PPC::FMADDS_rec, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6041 /* fmr */, PPC::FMR, Convert__RegF4RC1_0__RegF4RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 6041 /* fmr */, PPC::FMR_rec, Convert__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6045 /* fmsub */, PPC::FMSUB, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6045 /* fmsub */, PPC::FMSUB_rec, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6051 /* fmsubs */, PPC::FMSUBS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6051 /* fmsubs */, PPC::FMSUBS_rec, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6058 /* fmul */, PPC::FMUL, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6058 /* fmul */, PPC::FMUL_rec, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6063 /* fmuls */, PPC::FMULS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6063 /* fmuls */, PPC::FMULS_rec, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6069 /* fnabs */, PPC::FNABSS, Convert__RegF4RC1_0__RegF4RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 6069 /* fnabs */, PPC::FNABSS_rec, Convert__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6075 /* fneg */, PPC::FNEGS, Convert__RegF4RC1_0__RegF4RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 6075 /* fneg */, PPC::FNEGS_rec, Convert__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6080 /* fnmadd */, PPC::FNMADD, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6080 /* fnmadd */, PPC::FNMADD_rec, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6087 /* fnmadds */, PPC::FNMADDS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6087 /* fnmadds */, PPC::FNMADDS_rec, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6095 /* fnmsub */, PPC::FNMSUB, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6095 /* fnmsub */, PPC::FNMSUB_rec, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6102 /* fnmsubs */, PPC::FNMSUBS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6102 /* fnmsubs */, PPC::FNMSUBS_rec, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6110 /* fre */, PPC::FRE, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 6110 /* fre */, PPC::FRE_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6114 /* fres */, PPC::FRES, Convert__RegF4RC1_0__RegF4RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 6114 /* fres */, PPC::FRES_rec, Convert__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6119 /* frim */, PPC::FRIMS, Convert__RegF4RC1_0__RegF4RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 6119 /* frim */, PPC::FRIMS_rec, Convert__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6124 /* frin */, PPC::FRINS, Convert__RegF4RC1_0__RegF4RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 6124 /* frin */, PPC::FRINS_rec, Convert__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6129 /* frip */, PPC::FRIPS, Convert__RegF4RC1_0__RegF4RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 6129 /* frip */, PPC::FRIPS_rec, Convert__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6134 /* friz */, PPC::FRIZS, Convert__RegF4RC1_0__RegF4RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 6134 /* friz */, PPC::FRIZS_rec, Convert__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6139 /* frsp */, PPC::FRSP, Convert__RegF4RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF8RC }, },
  { 6139 /* frsp */, PPC::FRSP_rec, Convert__RegF4RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC }, },
  { 6144 /* frsqrte */, PPC::FRSQRTE, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 6144 /* frsqrte */, PPC::FRSQRTE_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6152 /* frsqrtes */, PPC::FRSQRTES, Convert__RegF4RC1_0__RegF4RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 6152 /* frsqrtes */, PPC::FRSQRTES_rec, Convert__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6161 /* fsel */, PPC::FSELS, Convert__RegF4RC1_0__RegF8RC1_1__RegF4RC1_2__RegF4RC1_3, AMFBS_None, { MCK_RegF4RC, MCK_RegF8RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6161 /* fsel */, PPC::FSELS_rec, Convert__RegF4RC1_1__RegF8RC1_2__RegF4RC1_3__RegF4RC1_4, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6166 /* fsqrt */, PPC::FSQRT, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 6166 /* fsqrt */, PPC::FSQRT_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6172 /* fsqrts */, PPC::FSQRTS, Convert__RegF4RC1_0__RegF4RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 6172 /* fsqrts */, PPC::FSQRTS_rec, Convert__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6179 /* fsub */, PPC::FSUB, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6179 /* fsub */, PPC::FSUB_rec, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6184 /* fsubs */, PPC::FSUBS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6184 /* fsubs */, PPC::FSUBS_rec, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6190 /* ftdiv */, PPC::FTDIV, Convert__RegCRRC1_0__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6196 /* ftsqrt */, PPC::FTSQRT, Convert__RegCRRC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegCRRC, MCK_RegF8RC }, },
  { 6203 /* hashchk */, PPC::HASHCHK, Convert__RegGPRC1_0__DispRIHash1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRIHash, MCK_RegGxRCNoR0 }, },
  { 6211 /* hashchkp */, PPC::HASHCHKP, Convert__RegGPRC1_0__DispRIHash1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRIHash, MCK_RegGxRCNoR0 }, },
  { 6220 /* hashst */, PPC::HASHST, Convert__RegGPRC1_0__DispRIHash1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRIHash, MCK_RegGxRCNoR0 }, },
  { 6227 /* hashstp */, PPC::HASHSTP, Convert__RegGPRC1_0__DispRIHash1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRIHash, MCK_RegGxRCNoR0 }, },
  { 6235 /* hrfid */, PPC::HRFID, Convert_NoOperands, AMFBS_None, {  }, },
  { 6241 /* hwsync */, PPC::SYNC, Convert__imm_95_0, AMFBS_None, {  }, },
  { 6248 /* icbi */, PPC::ICBI, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6253 /* icbiep */, PPC::ICBIEP, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6260 /* icblc */, PPC::ICBLC, Convert__U4Imm1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_U4Imm, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6266 /* icblq */, PPC::ICBLQ, Convert__U4Imm1_1__RegGxRCNoR01_2__RegGxRC1_3, AMFBS_None, { MCK__DOT_, MCK_U4Imm, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6272 /* icbt */, PPC::ICBT, Convert__U4Imm1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_U4Imm, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6277 /* icbtls */, PPC::ICBTLS, Convert__U4Imm1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_U4Imm, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6284 /* iccci */, PPC::ICCCI, Convert__regR0__regR0, AMFBS_None, {  }, },
  { 6284 /* iccci */, PPC::ICCCI, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 6290 /* ici */, PPC::ICCCI, Convert__regR0__regR0, AMFBS_None, { MCK_0 }, },
  { 6294 /* inslwi */, PPC::INSLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 6294 /* inslwi */, PPC::INSLWI_rec, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 6301 /* insrdi */, PPC::INSRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 6301 /* insrdi */, PPC::INSRDI_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 6308 /* insrwi */, PPC::INSRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 6308 /* insrwi */, PPC::INSRWI_rec, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 6315 /* isel */, PPC::ISEL, Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__RegCRBITRC1_3, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_RegGPRC, MCK_RegCRBITRC }, },
  { 6320 /* iseleq */, PPC::ISEL8, Convert__RegG8RC1_0__RegG8RCNoX01_1__RegG8RC1_2__regCR0EQ, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RCNoX0, MCK_RegG8RC }, },
  { 6320 /* iseleq */, PPC::ISEL, Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__regCR0EQ, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_RegGPRC }, },
  { 6327 /* iselgt */, PPC::ISEL8, Convert__RegG8RC1_0__RegG8RCNoX01_1__RegG8RC1_2__regCR0GT, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RCNoX0, MCK_RegG8RC }, },
  { 6327 /* iselgt */, PPC::ISEL, Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__regCR0GT, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_RegGPRC }, },
  { 6334 /* isellt */, PPC::ISEL8, Convert__RegG8RC1_0__RegG8RCNoX01_1__RegG8RC1_2__regCR0LT, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RCNoX0, MCK_RegG8RC }, },
  { 6334 /* isellt */, PPC::ISEL, Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__regCR0LT, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_RegGPRC }, },
  { 6341 /* isync */, PPC::ISYNC, Convert_NoOperands, AMFBS_None, {  }, },
  { 6347 /* la */, PPC::LAx, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6350 /* lbarx */, PPC::LBARX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6350 /* lbarx */, PPC::LBARXL, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_1 }, },
  { 6356 /* lbepx */, PPC::LBEPX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6362 /* lbz */, PPC::LBZ, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6366 /* lbzcix */, PPC::LBZCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6373 /* lbzu */, PPC::LBZU, Convert__RegGPRC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6378 /* lbzux */, PPC::LBZUX, Convert__RegGPRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6384 /* lbzx */, PPC::LBZXTLS_, Convert__RegG8RC1_0__RegGxRCNoR01_1__TLSReg1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_TLSReg }, },
  { 6384 /* lbzx */, PPC::LBZX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6389 /* ld */, PPC::LD, Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 6392 /* ldarx */, PPC::LDARX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6392 /* ldarx */, PPC::LDARXL, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_1 }, },
  { 6398 /* ldat */, PPC::LDAT, Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm }, },
  { 6403 /* ldbrx */, PPC::LDBRX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6409 /* ldcix */, PPC::LDCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6415 /* ldu */, PPC::LDU, Convert__RegG8RC1_0__imm_95_0__DispRIX1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 6419 /* ldux */, PPC::LDUX, Convert__RegG8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6424 /* ldx */, PPC::LDX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6424 /* ldx */, PPC::LDXTLS_, Convert__RegG8RC1_0__RegGxRCNoR01_1__TLSReg1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_TLSReg }, },
  { 6428 /* lfd */, PPC::LFD, Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6432 /* lfdepx */, PPC::LFDEPX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6439 /* lfdu */, PPC::LFDU, Convert__RegF8RC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6444 /* lfdux */, PPC::LFDUX, Convert__RegF8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6450 /* lfdx */, PPC::LFDX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6455 /* lfiwax */, PPC::LFIWAX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6462 /* lfiwzx */, PPC::LFIWZX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6469 /* lfs */, PPC::LFS, Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6473 /* lfsu */, PPC::LFSU, Convert__RegF4RC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6478 /* lfsux */, PPC::LFSUX, Convert__RegF4RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6484 /* lfsx */, PPC::LFSX, Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6489 /* lha */, PPC::LHA, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6493 /* lharx */, PPC::LHARX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6493 /* lharx */, PPC::LHARXL, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_1 }, },
  { 6499 /* lhau */, PPC::LHAU, Convert__RegGPRC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6504 /* lhaux */, PPC::LHAUX, Convert__RegGPRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6510 /* lhax */, PPC::LHAX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6515 /* lhbrx */, PPC::LHBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6521 /* lhepx */, PPC::LHEPX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6527 /* lhz */, PPC::LHZ, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6531 /* lhzcix */, PPC::LHZCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6538 /* lhzu */, PPC::LHZU, Convert__RegGPRC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6543 /* lhzux */, PPC::LHZUX, Convert__RegGPRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6549 /* lhzx */, PPC::LHZXTLS_, Convert__RegG8RC1_0__RegGxRCNoR01_1__TLSReg1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_TLSReg }, },
  { 6549 /* lhzx */, PPC::LHZX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6554 /* li */, PPC::ADDI8, Convert__RegG8RC1_0__regZERO8__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 6554 /* li */, PPC::LI, Convert__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 6554 /* li */, PPC::ADDI, Convert__RegGPRC1_0__regZERO__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 6557 /* lis */, PPC::ADDIS8, Convert__RegG8RC1_0__regZERO8__S17Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S17Imm }, },
  { 6557 /* lis */, PPC::LIS, Convert__RegGPRC1_0__S17Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S17Imm }, },
  { 6557 /* lis */, PPC::ADDIS, Convert__RegGPRC1_0__regZERO__S17Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S17Imm }, },
  { 6561 /* lmw */, PPC::LMW, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6565 /* lnia */, PPC::ADDPCIS, Convert__RegG8RC1_0__imm_95_0, AMFBS_None, { MCK_RegG8RC }, },
  { 6570 /* lq */, PPC::LQ, Convert__RegG8pRC1_0__DispRIX161_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegG8pRC, MCK_DispRIX16, MCK_RegGxRCNoR0 }, },
  { 6573 /* lqarx */, PPC::LQARX, Convert__RegG8pRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegG8pRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6573 /* lqarx */, PPC::LQARXL, Convert__RegG8pRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegG8pRC, MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_1 }, },
  { 6579 /* lswi */, PPC::LSWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6584 /* lvebx */, PPC::LVEBX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6590 /* lvehx */, PPC::LVEHX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6596 /* lvewx */, PPC::LVEWX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6602 /* lvsl */, PPC::LVSL, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6607 /* lvsr */, PPC::LVSR, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6612 /* lvx */, PPC::LVX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6616 /* lvxl */, PPC::LVXL, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6621 /* lwa */, PPC::LWA, Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 6625 /* lwarx */, PPC::LWARX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6625 /* lwarx */, PPC::LWARXL, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_1 }, },
  { 6631 /* lwat */, PPC::LWAT, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6636 /* lwaux */, PPC::LWAUX, Convert__RegG8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6642 /* lwax */, PPC::LWAX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6647 /* lwbrx */, PPC::LWBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6653 /* lwepx */, PPC::LWEPX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6659 /* lwsync */, PPC::SYNC, Convert__imm_95_1, AMFBS_None, {  }, },
  { 6666 /* lwz */, PPC::LWZ, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6666 /* lwz */, PPC::SPELWZ, Convert__RegSPE4RC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPE4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6670 /* lwzcix */, PPC::LWZCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6677 /* lwzu */, PPC::LWZU, Convert__RegGPRC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6682 /* lwzux */, PPC::LWZUX, Convert__RegGPRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6688 /* lwzx */, PPC::LWZXTLS_, Convert__RegG8RC1_0__RegGxRCNoR01_1__TLSReg1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_TLSReg }, },
  { 6688 /* lwzx */, PPC::LWZX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6688 /* lwzx */, PPC::SPELWZX, Convert__RegSPE4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPE4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6693 /* lxsd */, PPC::LXSD, Convert__RegVFRC1_0__DispRIX1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVFRC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 6698 /* lxsdx */, PPC::LXSDX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6704 /* lxsibzx */, PPC::LXSIBZX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6712 /* lxsihzx */, PPC::LXSIHZX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6720 /* lxsiwax */, PPC::LXSIWAX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6728 /* lxsiwzx */, PPC::LXSIWZX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6736 /* lxssp */, PPC::LXSSP, Convert__RegVFRC1_0__DispRIX1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVFRC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 6742 /* lxsspx */, PPC::LXSSPX, Convert__RegVSSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6749 /* lxv */, PPC::LXV, Convert__RegVSRC1_0__DispRIX161_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVSRC, MCK_DispRIX16, MCK_RegGxRCNoR0 }, },
  { 6753 /* lxvb16x */, PPC::LXVB16X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6761 /* lxvd2x */, PPC::LXVD2X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6768 /* lxvdsx */, PPC::LXVDSX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6775 /* lxvh8x */, PPC::LXVH8X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6782 /* lxvkq */, PPC::LXVKQ, Convert__RegVSRC1_0__U5Imm1_1, AMFBS_None, { MCK_RegVSRC, MCK_U5Imm }, },
  { 6788 /* lxvl */, PPC::LXVL, Convert__RegVSRC1_0__Imm1_1__RegG8RC1_2, AMFBS_None, { MCK_RegVSRC, MCK_Imm, MCK_RegG8RC }, },
  { 6793 /* lxvll */, PPC::LXVLL, Convert__RegVSRC1_0__Imm1_1__RegG8RC1_2, AMFBS_None, { MCK_RegVSRC, MCK_Imm, MCK_RegG8RC }, },
  { 6799 /* lxvp */, PPC::LXVP, Convert__RegVSRpRC1_0__DispRIX161_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVSRpRC, MCK_DispRIX16, MCK_RegGxRCNoR0 }, },
  { 6804 /* lxvpx */, PPC::LXVPX, Convert__RegVSRpRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRpRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6810 /* lxvrbx */, PPC::LXVRBX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6817 /* lxvrdx */, PPC::LXVRDX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6824 /* lxvrhx */, PPC::LXVRHX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6831 /* lxvrwx */, PPC::LXVRWX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6838 /* lxvw4x */, PPC::LXVW4X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6845 /* lxvwsx */, PPC::LXVWSX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6852 /* lxvx */, PPC::LXVX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6857 /* maddhd */, PPC::MADDHD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6864 /* maddhdu */, PPC::MADDHDU, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6872 /* maddld */, PPC::MADDLD, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6879 /* mbar */, PPC::MBAR, Convert__imm_95_0, AMFBS_None, {  }, },
  { 6879 /* mbar */, PPC::MBAR, Convert__U5Imm1_0, AMFBS_None, { MCK_U5Imm }, },
  { 6884 /* mcrf */, PPC::MCRF, Convert__RegCRRC1_0__RegCRRC1_1, AMFBS_None, { MCK_RegCRRC, MCK_RegCRRC }, },
  { 6889 /* mcrfs */, PPC::MCRFS, Convert__RegCRRC1_0__RegCRRC1_1, AMFBS_None, { MCK_RegCRRC, MCK_RegCRRC }, },
  { 6895 /* mcrxrx */, PPC::MCRXRX, Convert__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 6902 /* mfamr */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_29, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 6902 /* mfamr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_29, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 6908 /* mfasr */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_280, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 6908 /* mfasr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_280, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 6914 /* mfbhrbe */, PPC::MFBHRBE, Convert__RegGPRC1_0__U10Imm1_1__imm_95_0, AMFBS_None, { MCK_RegGPRC, MCK_U10Imm }, },
  { 6922 /* mfbr0 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_128, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 6928 /* mfbr1 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_129, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 6934 /* mfbr2 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_130, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 6940 /* mfbr3 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_131, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 6946 /* mfbr4 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_132, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 6952 /* mfbr5 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_133, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 6958 /* mfbr6 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_134, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 6964 /* mfbr7 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_135, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 6970 /* mfcfar */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_28, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 6970 /* mfcfar */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_28, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 6977 /* mfcr */, PPC::MFCR, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 6982 /* mfctr */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_9, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 6982 /* mfctr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_9, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 6982 /* mfctr */, PPC::MFCTR, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 6988 /* mfdar */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_19, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 6988 /* mfdar */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_19, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 6994 /* mfdbatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_537, AMFBS_ModernAs, { MCK_RegGPRC, MCK_0 }, },
  { 6994 /* mfdbatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_539, AMFBS_ModernAs, { MCK_RegGPRC, MCK_1 }, },
  { 6994 /* mfdbatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_541, AMFBS_ModernAs, { MCK_RegGPRC, MCK_2 }, },
  { 6994 /* mfdbatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_543, AMFBS_ModernAs, { MCK_RegGPRC, MCK_3 }, },
  { 7002 /* mfdbatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_536, AMFBS_ModernAs, { MCK_RegGPRC, MCK_0 }, },
  { 7002 /* mfdbatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_538, AMFBS_ModernAs, { MCK_RegGPRC, MCK_1 }, },
  { 7002 /* mfdbatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_540, AMFBS_ModernAs, { MCK_RegGPRC, MCK_2 }, },
  { 7002 /* mfdbatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_542, AMFBS_ModernAs, { MCK_RegGPRC, MCK_3 }, },
  { 7010 /* mfdccr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_1018, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7017 /* mfdcr */, PPC::MFDCR, Convert__RegGPRC1_0__Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_Imm }, },
  { 7023 /* mfdear */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_981, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7030 /* mfdec */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_22, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7030 /* mfdec */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_22, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7036 /* mfdscr */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_17, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7036 /* mfdscr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_17, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7043 /* mfdsisr */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_18, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7043 /* mfdsisr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_18, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7051 /* mfesr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_980, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7057 /* mffprd */, PPC::MFVSRD, Convert__RegG8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegF8RC }, },
  { 7064 /* mffprwz */, PPC::MFVSRWZ, Convert__RegGPRC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegF8RC }, },
  { 7072 /* mffs */, PPC::MFFS, Convert__RegF8RC1_0, AMFBS_None, { MCK_RegF8RC }, },
  { 7072 /* mffs */, PPC::MFFS_rec, Convert__RegF8RC1_1, AMFBS_None, { MCK__DOT_, MCK_RegF8RC }, },
  { 7077 /* mffscdrn */, PPC::MFFSCDRN, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 7086 /* mffscdrni */, PPC::MFFSCDRNI, Convert__RegF8RC1_0__U3Imm1_1, AMFBS_None, { MCK_RegF8RC, MCK_U3Imm }, },
  { 7096 /* mffsce */, PPC::MFFSCE, Convert__RegF8RC1_0, AMFBS_None, { MCK_RegF8RC }, },
  { 7103 /* mffscrn */, PPC::MFFSCRN, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 7111 /* mffscrni */, PPC::MFFSCRNI, Convert__RegF8RC1_0__U2Imm1_1, AMFBS_None, { MCK_RegF8RC, MCK_U2Imm }, },
  { 7120 /* mffsl */, PPC::MFFSL, Convert__RegF8RC1_0, AMFBS_None, { MCK_RegF8RC }, },
  { 7126 /* mfibatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_529, AMFBS_ModernAs, { MCK_RegGPRC, MCK_0 }, },
  { 7126 /* mfibatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_531, AMFBS_ModernAs, { MCK_RegGPRC, MCK_1 }, },
  { 7126 /* mfibatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_533, AMFBS_ModernAs, { MCK_RegGPRC, MCK_2 }, },
  { 7126 /* mfibatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_535, AMFBS_ModernAs, { MCK_RegGPRC, MCK_3 }, },
  { 7134 /* mfibatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_528, AMFBS_ModernAs, { MCK_RegGPRC, MCK_0 }, },
  { 7134 /* mfibatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_530, AMFBS_ModernAs, { MCK_RegGPRC, MCK_1 }, },
  { 7134 /* mfibatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_532, AMFBS_ModernAs, { MCK_RegGPRC, MCK_2 }, },
  { 7134 /* mfibatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_534, AMFBS_ModernAs, { MCK_RegGPRC, MCK_3 }, },
  { 7142 /* mficcr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_1019, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7149 /* mflr */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_8, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7149 /* mflr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_8, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7149 /* mflr */, PPC::MFLR, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 7154 /* mfmsr */, PPC::MFMSR, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 7160 /* mfocrf */, PPC::MFOCRF, Convert__RegGPRC1_0__CRBitMask1_1, AMFBS_None, { MCK_RegGPRC, MCK_CRBitMask }, },
  { 7167 /* mfpid */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_48, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7173 /* mfpmr */, PPC::MFPMR, Convert__RegGPRC1_0__Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_Imm }, },
  { 7179 /* mfppr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_896, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7185 /* mfpvr */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_287, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7185 /* mfpvr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_287, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7191 /* mfrtcl */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_5, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7191 /* mfrtcl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_5, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7198 /* mfrtcu */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_4, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7198 /* mfrtcu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_4, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7205 /* mfsdr1 */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_25, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7205 /* mfsdr1 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_25, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7212 /* mfspefscr */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_512, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7212 /* mfspefscr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_512, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7222 /* mfspr */, PPC::MFUDSCR, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC, MCK_3 }, },
  { 7222 /* mfspr */, PPC::MFSPR, Convert__RegGPRC1_0__Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_Imm }, },
  { 7228 /* mfsprg */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_272, AMFBS_ModernAs, { MCK_RegG8RC, MCK_0 }, },
  { 7228 /* mfsprg */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_273, AMFBS_ModernAs, { MCK_RegG8RC, MCK_1 }, },
  { 7228 /* mfsprg */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_274, AMFBS_ModernAs, { MCK_RegG8RC, MCK_2 }, },
  { 7228 /* mfsprg */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_275, AMFBS_ModernAs, { MCK_RegG8RC, MCK_3 }, },
  { 7228 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_272, AMFBS_ModernAs, { MCK_RegGPRC, MCK_0 }, },
  { 7228 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_273, AMFBS_ModernAs, { MCK_RegGPRC, MCK_1 }, },
  { 7228 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_274, AMFBS_ModernAs, { MCK_RegGPRC, MCK_2 }, },
  { 7228 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_275, AMFBS_ModernAs, { MCK_RegGPRC, MCK_3 }, },
  { 7228 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_260, AMFBS_ModernAs, { MCK_RegGPRC, MCK_4 }, },
  { 7228 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_261, AMFBS_ModernAs, { MCK_RegGPRC, MCK_5 }, },
  { 7228 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_262, AMFBS_ModernAs, { MCK_RegGPRC, MCK_6 }, },
  { 7228 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_263, AMFBS_ModernAs, { MCK_RegGPRC, MCK_7 }, },
  { 7235 /* mfsprg0 */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_272, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7235 /* mfsprg0 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_272, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7243 /* mfsprg1 */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_273, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7243 /* mfsprg1 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_273, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7251 /* mfsprg2 */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_274, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7251 /* mfsprg2 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_274, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7259 /* mfsprg3 */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_275, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7259 /* mfsprg3 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_275, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7267 /* mfsprg4 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_260, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7275 /* mfsprg5 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_261, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7283 /* mfsprg6 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_262, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7291 /* mfsprg7 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_263, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7299 /* mfsr */, PPC::MFSR, Convert__RegGPRC1_0__U4Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_U4Imm }, },
  { 7304 /* mfsrin */, PPC::MFSRIN, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7311 /* mfsrr0 */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_26, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7311 /* mfsrr0 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_26, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7318 /* mfsrr1 */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_27, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7318 /* mfsrr1 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_27, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7325 /* mfsrr2 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_990, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7332 /* mfsrr3 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_991, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7339 /* mftb */, PPC::MFTB, Convert__RegGPRC1_0__imm_95_268, AMFBS_None, { MCK_RegGPRC }, },
  { 7339 /* mftb */, PPC::MFTB, Convert__RegGPRC1_0__Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_Imm }, },
  { 7344 /* mftbhi */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_988, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7351 /* mftbl */, PPC::MFTB, Convert__RegGPRC1_0__imm_95_268, AMFBS_None, { MCK_RegGPRC }, },
  { 7357 /* mftblo */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_989, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7364 /* mftbu */, PPC::MFTB, Convert__RegGPRC1_0__imm_95_269, AMFBS_None, { MCK_RegGPRC }, },
  { 7370 /* mftcr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_986, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7376 /* mfuamr */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_13, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7376 /* mfuamr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_13, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7383 /* mfudscr */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_3, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7383 /* mfudscr */, PPC::MFUDSCR, Convert__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7383 /* mfudscr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_3, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7391 /* mfvrd */, PPC::MFVRD, Convert__RegG8RC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegVRRC }, },
  { 7397 /* mfvrsave */, PPC::MFVRSAVE, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 7406 /* mfvrwz */, PPC::MFVRWZ, Convert__RegGPRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegVRRC }, },
  { 7413 /* mfvscr */, PPC::MFVSCR, Convert__RegVRRC1_0, AMFBS_None, { MCK_RegVRRC }, },
  { 7420 /* mfvsrd */, PPC::MFVSRD, Convert__RegG8RC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegVSFRC }, },
  { 7427 /* mfvsrld */, PPC::MFVSRLD, Convert__RegG8RC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegVSRC }, },
  { 7435 /* mfvsrwz */, PPC::MFVSRWZ, Convert__RegGPRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegVSFRC }, },
  { 7443 /* mfxer */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_1, AMFBS_None, { MCK_RegG8RC }, },
  { 7443 /* mfxer */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_1, AMFBS_None, { MCK_RegGPRC }, },
  { 7449 /* modsd */, PPC::MODSD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 7455 /* modsw */, PPC::MODSW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 7461 /* modud */, PPC::MODUD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 7467 /* moduw */, PPC::MODUW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 7473 /* mr */, PPC::OR8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 7473 /* mr */, PPC::OR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7473 /* mr */, PPC::OR8_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 7473 /* mr */, PPC::OR_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 7476 /* msgsync */, PPC::MSGSYNC, Convert_NoOperands, AMFBS_None, {  }, },
  { 7484 /* msync */, PPC::SYNC, Convert__imm_95_0, AMFBS_None, {  }, },
  { 7490 /* mtamr */, PPC::MTSPR8, Convert__imm_95_29__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7490 /* mtamr */, PPC::MTSPR, Convert__imm_95_29__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7496 /* mtasr */, PPC::MTSPR8, Convert__imm_95_280__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7496 /* mtasr */, PPC::MTSPR, Convert__imm_95_280__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7502 /* mtbr0 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_128, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7508 /* mtbr1 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_129, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7514 /* mtbr2 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_130, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7520 /* mtbr3 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_131, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7526 /* mtbr4 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_132, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7532 /* mtbr5 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_133, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7538 /* mtbr6 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_134, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7544 /* mtbr7 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_135, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7550 /* mtcfar */, PPC::MTSPR8, Convert__imm_95_28__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7550 /* mtcfar */, PPC::MTSPR, Convert__imm_95_28__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7557 /* mtcr */, PPC::MTCRF8, Convert__imm_95_255__RegG8RC1_0, AMFBS_None, { MCK_RegG8RC }, },
  { 7557 /* mtcr */, PPC::MTCRF, Convert__imm_95_255__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 7562 /* mtcrf */, PPC::MTCRF, Convert__Imm1_0__RegGPRC1_1, AMFBS_None, { MCK_Imm, MCK_RegGPRC }, },
  { 7568 /* mtctr */, PPC::MTSPR8, Convert__imm_95_9__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7568 /* mtctr */, PPC::MTSPR, Convert__imm_95_9__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7568 /* mtctr */, PPC::MTCTR, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 7574 /* mtdar */, PPC::MTSPR8, Convert__imm_95_19__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7574 /* mtdar */, PPC::MTSPR, Convert__imm_95_19__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7580 /* mtdbatl */, PPC::MTSPR, Convert__imm_95_537__RegGPRC1_1, AMFBS_ModernAs, { MCK_0, MCK_RegGPRC }, },
  { 7580 /* mtdbatl */, PPC::MTSPR, Convert__imm_95_539__RegGPRC1_1, AMFBS_ModernAs, { MCK_1, MCK_RegGPRC }, },
  { 7580 /* mtdbatl */, PPC::MTSPR, Convert__imm_95_541__RegGPRC1_1, AMFBS_ModernAs, { MCK_2, MCK_RegGPRC }, },
  { 7580 /* mtdbatl */, PPC::MTSPR, Convert__imm_95_543__RegGPRC1_1, AMFBS_ModernAs, { MCK_3, MCK_RegGPRC }, },
  { 7588 /* mtdbatu */, PPC::MTSPR, Convert__imm_95_536__RegGPRC1_1, AMFBS_ModernAs, { MCK_0, MCK_RegGPRC }, },
  { 7588 /* mtdbatu */, PPC::MTSPR, Convert__imm_95_538__RegGPRC1_1, AMFBS_ModernAs, { MCK_1, MCK_RegGPRC }, },
  { 7588 /* mtdbatu */, PPC::MTSPR, Convert__imm_95_540__RegGPRC1_1, AMFBS_ModernAs, { MCK_2, MCK_RegGPRC }, },
  { 7588 /* mtdbatu */, PPC::MTSPR, Convert__imm_95_542__RegGPRC1_1, AMFBS_ModernAs, { MCK_3, MCK_RegGPRC }, },
  { 7596 /* mtdccr */, PPC::MTSPR, Convert__imm_95_1018__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7603 /* mtdcr */, PPC::MTDCR, Convert__RegGPRC1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_RegGPRC }, },
  { 7609 /* mtdear */, PPC::MTSPR, Convert__imm_95_981__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7616 /* mtdec */, PPC::MTSPR8, Convert__imm_95_22__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7616 /* mtdec */, PPC::MTSPR, Convert__imm_95_22__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7622 /* mtdscr */, PPC::MTSPR8, Convert__imm_95_17__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7622 /* mtdscr */, PPC::MTSPR, Convert__imm_95_17__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7629 /* mtdsisr */, PPC::MTSPR8, Convert__imm_95_18__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7629 /* mtdsisr */, PPC::MTSPR, Convert__imm_95_18__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7637 /* mtesr */, PPC::MTSPR, Convert__imm_95_980__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7643 /* mtfprd */, PPC::MTVSRD, Convert__RegF8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegG8RC }, },
  { 7650 /* mtfprwa */, PPC::MTVSRWA, Convert__RegF8RC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegGPRC }, },
  { 7658 /* mtfprwz */, PPC::MTVSRWZ, Convert__RegF8RC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegGPRC }, },
  { 7666 /* mtfsb0 */, PPC::MTFSB0, Convert__U5Imm1_0, AMFBS_None, { MCK_U5Imm }, },
  { 7673 /* mtfsb1 */, PPC::MTFSB1, Convert__U5Imm1_0, AMFBS_None, { MCK_U5Imm }, },
  { 7680 /* mtfsf */, PPC::MTFSF, Convert__Imm1_0__RegF8RC1_1__imm_95_0__imm_95_0, AMFBS_None, { MCK_Imm, MCK_RegF8RC }, },
  { 7680 /* mtfsf */, PPC::MTFSF_rec, Convert__Imm1_1__RegF8RC1_2__imm_95_0__imm_95_0, AMFBS_None, { MCK__DOT_, MCK_Imm, MCK_RegF8RC }, },
  { 7680 /* mtfsf */, PPC::MTFSF, Convert__Imm1_0__RegF8RC1_1__U1Imm1_2__Imm1_3, AMFBS_None, { MCK_Imm, MCK_RegF8RC, MCK_U1Imm, MCK_Imm }, },
  { 7680 /* mtfsf */, PPC::MTFSF_rec, Convert__Imm1_1__RegF8RC1_2__U1Imm1_3__Imm1_4, AMFBS_None, { MCK__DOT_, MCK_Imm, MCK_RegF8RC, MCK_U1Imm, MCK_Imm }, },
  { 7686 /* mtfsfi */, PPC::MTFSFI, Convert__U3Imm1_0__U4Imm1_1__imm_95_0, AMFBS_None, { MCK_U3Imm, MCK_U4Imm }, },
  { 7686 /* mtfsfi */, PPC::MTFSFI_rec, Convert__U3Imm1_1__U4Imm1_2__imm_95_0, AMFBS_None, { MCK__DOT_, MCK_U3Imm, MCK_U4Imm }, },
  { 7686 /* mtfsfi */, PPC::MTFSFI, Convert__U3Imm1_0__U4Imm1_1__Imm1_2, AMFBS_None, { MCK_U3Imm, MCK_U4Imm, MCK_Imm }, },
  { 7686 /* mtfsfi */, PPC::MTFSFI_rec, Convert__U3Imm1_1__U4Imm1_2__U1Imm1_3, AMFBS_None, { MCK__DOT_, MCK_U3Imm, MCK_U4Imm, MCK_U1Imm }, },
  { 7693 /* mtibatl */, PPC::MTSPR, Convert__imm_95_529__RegGPRC1_1, AMFBS_ModernAs, { MCK_0, MCK_RegGPRC }, },
  { 7693 /* mtibatl */, PPC::MTSPR, Convert__imm_95_531__RegGPRC1_1, AMFBS_ModernAs, { MCK_1, MCK_RegGPRC }, },
  { 7693 /* mtibatl */, PPC::MTSPR, Convert__imm_95_533__RegGPRC1_1, AMFBS_ModernAs, { MCK_2, MCK_RegGPRC }, },
  { 7693 /* mtibatl */, PPC::MTSPR, Convert__imm_95_535__RegGPRC1_1, AMFBS_ModernAs, { MCK_3, MCK_RegGPRC }, },
  { 7701 /* mtibatu */, PPC::MTSPR, Convert__imm_95_528__RegGPRC1_1, AMFBS_ModernAs, { MCK_0, MCK_RegGPRC }, },
  { 7701 /* mtibatu */, PPC::MTSPR, Convert__imm_95_530__RegGPRC1_1, AMFBS_ModernAs, { MCK_1, MCK_RegGPRC }, },
  { 7701 /* mtibatu */, PPC::MTSPR, Convert__imm_95_532__RegGPRC1_1, AMFBS_ModernAs, { MCK_2, MCK_RegGPRC }, },
  { 7701 /* mtibatu */, PPC::MTSPR, Convert__imm_95_534__RegGPRC1_1, AMFBS_ModernAs, { MCK_3, MCK_RegGPRC }, },
  { 7709 /* mticcr */, PPC::MTSPR, Convert__imm_95_1019__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7716 /* mtlr */, PPC::MTSPR8, Convert__imm_95_8__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7716 /* mtlr */, PPC::MTSPR, Convert__imm_95_8__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7716 /* mtlr */, PPC::MTLR, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 7721 /* mtmsr */, PPC::MTMSR, Convert__RegGPRC1_0__imm_95_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7721 /* mtmsr */, PPC::MTMSR, Convert__RegGPRC1_0__U1Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_U1Imm }, },
  { 7727 /* mtmsrd */, PPC::MTMSRD, Convert__RegGPRC1_0__imm_95_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7727 /* mtmsrd */, PPC::MTMSRD, Convert__RegGPRC1_0__U1Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_U1Imm }, },
  { 7734 /* mtocrf */, PPC::MTOCRF, Convert__CRBitMask1_0__RegGPRC1_1, AMFBS_None, { MCK_CRBitMask, MCK_RegGPRC }, },
  { 7741 /* mtpid */, PPC::MTSPR, Convert__imm_95_48__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7747 /* mtpmr */, PPC::MTPMR, Convert__Imm1_0__RegGPRC1_1, AMFBS_None, { MCK_Imm, MCK_RegGPRC }, },
  { 7753 /* mtppr */, PPC::MTSPR, Convert__imm_95_896__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7759 /* mtsdr1 */, PPC::MTSPR8, Convert__imm_95_25__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7759 /* mtsdr1 */, PPC::MTSPR, Convert__imm_95_25__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7766 /* mtspefscr */, PPC::MTSPR8, Convert__imm_95_512__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7766 /* mtspefscr */, PPC::MTSPR, Convert__imm_95_512__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7776 /* mtspr */, PPC::MTUDSCR, Convert__RegGPRC1_1, AMFBS_None, { MCK_3, MCK_RegGPRC }, },
  { 7776 /* mtspr */, PPC::MTSPR, Convert__Imm1_0__RegGPRC1_1, AMFBS_None, { MCK_Imm, MCK_RegGPRC }, },
  { 7782 /* mtsprg */, PPC::MTSPR8, Convert__imm_95_272__RegG8RC1_1, AMFBS_ModernAs, { MCK_0, MCK_RegG8RC }, },
  { 7782 /* mtsprg */, PPC::MTSPR, Convert__imm_95_272__RegGPRC1_1, AMFBS_ModernAs, { MCK_0, MCK_RegGPRC }, },
  { 7782 /* mtsprg */, PPC::MTSPR8, Convert__imm_95_273__RegG8RC1_1, AMFBS_ModernAs, { MCK_1, MCK_RegG8RC }, },
  { 7782 /* mtsprg */, PPC::MTSPR, Convert__imm_95_273__RegGPRC1_1, AMFBS_ModernAs, { MCK_1, MCK_RegGPRC }, },
  { 7782 /* mtsprg */, PPC::MTSPR8, Convert__imm_95_274__RegG8RC1_1, AMFBS_ModernAs, { MCK_2, MCK_RegG8RC }, },
  { 7782 /* mtsprg */, PPC::MTSPR, Convert__imm_95_274__RegGPRC1_1, AMFBS_ModernAs, { MCK_2, MCK_RegGPRC }, },
  { 7782 /* mtsprg */, PPC::MTSPR8, Convert__imm_95_275__RegG8RC1_1, AMFBS_ModernAs, { MCK_3, MCK_RegG8RC }, },
  { 7782 /* mtsprg */, PPC::MTSPR, Convert__imm_95_275__RegGPRC1_1, AMFBS_ModernAs, { MCK_3, MCK_RegGPRC }, },
  { 7782 /* mtsprg */, PPC::MTSPR, Convert__imm_95_260__RegGPRC1_1, AMFBS_ModernAs, { MCK_4, MCK_RegGPRC }, },
  { 7782 /* mtsprg */, PPC::MTSPR, Convert__imm_95_261__RegGPRC1_1, AMFBS_ModernAs, { MCK_5, MCK_RegGPRC }, },
  { 7782 /* mtsprg */, PPC::MTSPR, Convert__imm_95_262__RegGPRC1_1, AMFBS_ModernAs, { MCK_6, MCK_RegGPRC }, },
  { 7782 /* mtsprg */, PPC::MTSPR, Convert__imm_95_263__RegGPRC1_1, AMFBS_ModernAs, { MCK_7, MCK_RegGPRC }, },
  { 7789 /* mtsprg0 */, PPC::MTSPR8, Convert__imm_95_272__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7789 /* mtsprg0 */, PPC::MTSPR, Convert__imm_95_272__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7797 /* mtsprg1 */, PPC::MTSPR8, Convert__imm_95_273__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7797 /* mtsprg1 */, PPC::MTSPR, Convert__imm_95_273__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7805 /* mtsprg2 */, PPC::MTSPR8, Convert__imm_95_274__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7805 /* mtsprg2 */, PPC::MTSPR, Convert__imm_95_274__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7813 /* mtsprg3 */, PPC::MTSPR8, Convert__imm_95_275__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7813 /* mtsprg3 */, PPC::MTSPR, Convert__imm_95_275__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7821 /* mtsprg4 */, PPC::MTSPR, Convert__imm_95_260__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7829 /* mtsprg5 */, PPC::MTSPR, Convert__imm_95_261__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7837 /* mtsprg6 */, PPC::MTSPR, Convert__imm_95_262__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7845 /* mtsprg7 */, PPC::MTSPR, Convert__imm_95_263__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7853 /* mtsr */, PPC::MTSR, Convert__RegGPRC1_1__U4Imm1_0, AMFBS_None, { MCK_U4Imm, MCK_RegGPRC }, },
  { 7858 /* mtsrin */, PPC::MTSRIN, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7865 /* mtsrr0 */, PPC::MTSPR8, Convert__imm_95_26__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7865 /* mtsrr0 */, PPC::MTSPR, Convert__imm_95_26__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7872 /* mtsrr1 */, PPC::MTSPR8, Convert__imm_95_27__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7872 /* mtsrr1 */, PPC::MTSPR, Convert__imm_95_27__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7879 /* mtsrr2 */, PPC::MTSPR, Convert__imm_95_990__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7886 /* mtsrr3 */, PPC::MTSPR, Convert__imm_95_991__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7893 /* mttbhi */, PPC::MTSPR, Convert__imm_95_988__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7900 /* mttbl */, PPC::MTSPR8, Convert__imm_95_284__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7900 /* mttbl */, PPC::MTSPR, Convert__imm_95_284__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7906 /* mttblo */, PPC::MTSPR, Convert__imm_95_989__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7913 /* mttbu */, PPC::MTSPR8, Convert__imm_95_285__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7913 /* mttbu */, PPC::MTSPR, Convert__imm_95_285__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7919 /* mttcr */, PPC::MTSPR, Convert__imm_95_986__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7925 /* mtuamr */, PPC::MTSPR8, Convert__imm_95_13__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7925 /* mtuamr */, PPC::MTSPR, Convert__imm_95_13__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7932 /* mtudscr */, PPC::MTSPR8, Convert__imm_95_3__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7932 /* mtudscr */, PPC::MTUDSCR, Convert__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7932 /* mtudscr */, PPC::MTSPR, Convert__imm_95_3__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7940 /* mtvrd */, PPC::MTVRD, Convert__RegVRRC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegG8RC }, },
  { 7946 /* mtvrsave */, PPC::MTVRSAVE, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 7955 /* mtvrwa */, PPC::MTVRWA, Convert__RegVRRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC }, },
  { 7962 /* mtvrwz */, PPC::MTVRWZ, Convert__RegVRRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC }, },
  { 7969 /* mtvscr */, PPC::MTVSCR, Convert__RegVRRC1_0, AMFBS_None, { MCK_RegVRRC }, },
  { 7976 /* mtvsrbm */, PPC::MTVSRBM, Convert__RegVRRC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegG8RC }, },
  { 7984 /* mtvsrbmi */, PPC::MTVSRBMI, Convert__RegVRRC1_0__U16Imm1_1, AMFBS_None, { MCK_RegVRRC, MCK_U16Imm }, },
  { 7993 /* mtvsrd */, PPC::MTVSRD, Convert__RegVSFRC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegG8RC }, },
  { 8000 /* mtvsrdd */, PPC::MTVSRDD, Convert__RegVSRC1_0__RegG8RCNoX01_1__RegG8RC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegG8RCNoX0, MCK_RegG8RC }, },
  { 8008 /* mtvsrdm */, PPC::MTVSRDM, Convert__RegVRRC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegG8RC }, },
  { 8016 /* mtvsrhm */, PPC::MTVSRHM, Convert__RegVRRC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegG8RC }, },
  { 8024 /* mtvsrqm */, PPC::MTVSRQM, Convert__RegVRRC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegG8RC }, },
  { 8032 /* mtvsrwa */, PPC::MTVSRWA, Convert__RegVSFRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegGPRC }, },
  { 8040 /* mtvsrwm */, PPC::MTVSRWM, Convert__RegVRRC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegG8RC }, },
  { 8048 /* mtvsrws */, PPC::MTVSRWS, Convert__RegVSRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegGPRC }, },
  { 8056 /* mtvsrwz */, PPC::MTVSRWZ, Convert__RegVSFRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegGPRC }, },
  { 8064 /* mtxer */, PPC::MTSPR8, Convert__imm_95_1__RegG8RC1_0, AMFBS_None, { MCK_RegG8RC }, },
  { 8064 /* mtxer */, PPC::MTSPR, Convert__imm_95_1__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 8070 /* mulhd */, PPC::MULHD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8070 /* mulhd */, PPC::MULHD_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8076 /* mulhdu */, PPC::MULHDU, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8076 /* mulhdu */, PPC::MULHDU_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8083 /* mulhw */, PPC::MULHW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8083 /* mulhw */, PPC::MULHW_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8089 /* mulhwu */, PPC::MULHWU, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8089 /* mulhwu */, PPC::MULHWU_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8096 /* mulld */, PPC::MULLD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8096 /* mulld */, PPC::MULLD_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8102 /* mulldo */, PPC::MULLDO, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8102 /* mulldo */, PPC::MULLDO_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8109 /* mulli */, PPC::MULLI, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 8115 /* mullw */, PPC::MULLW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8115 /* mullw */, PPC::MULLW_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8121 /* mullwo */, PPC::MULLWO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8121 /* mullwo */, PPC::MULLWO_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8128 /* nand */, PPC::NAND, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8128 /* nand */, PPC::NAND_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8133 /* nap */, PPC::NAP, Convert_NoOperands, AMFBS_None, {  }, },
  { 8137 /* neg */, PPC::NEG, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 8137 /* neg */, PPC::NEG_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8141 /* nego */, PPC::NEGO, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 8141 /* nego */, PPC::NEGO_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8146 /* nop */, PPC::NOP, Convert_NoOperands, AMFBS_None, {  }, },
  { 8146 /* nop */, PPC::ORI, Convert__regR0__regR0__imm_95_0, AMFBS_None, {  }, },
  { 8146 /* nop */, PPC::ORI8, Convert__regX0__regX0__imm_95_0, AMFBS_None, {  }, },
  { 8150 /* nor */, PPC::NOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8150 /* nor */, PPC::NOR_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8154 /* not */, PPC::NOR8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 8154 /* not */, PPC::NOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 8154 /* not */, PPC::NOR8_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8154 /* not */, PPC::NOR_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8158 /* or */, PPC::OR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8158 /* or */, PPC::OR_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8161 /* orc */, PPC::ORC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8161 /* orc */, PPC::ORC_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8165 /* ori */, PPC::ORI, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 8169 /* oris */, PPC::ORIS, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 8174 /* paddi */, PPC::PADDIpc, Convert__RegGPRC1_0__ImmZero1_1__S34Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_ImmZero, MCK_S34Imm, MCK_1 }, },
  { 8174 /* paddi */, PPC::PADDI, Convert__RegGPRC1_0__RegGPRC1_1__S34Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_S34Imm, MCK_0 }, },
  { 8180 /* paste */, PPC::CP_PASTE_rec, Convert__RegGPRC1_1__RegGPRC1_2__imm_95_1, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8180 /* paste */, PPC::CP_PASTE_rec, Convert__RegGPRC1_1__RegGPRC1_2__U1Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U1Imm }, },
  { 8186 /* pdepd */, PPC::PDEPD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8192 /* pextd */, PPC::PEXTD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8198 /* plbz */, PPC::PLBZpc, Convert__RegGPRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8198 /* plbz */, PPC::PLBZ, Convert__RegGPRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8203 /* pld */, PPC::PLDpc, Convert__RegG8RC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegG8RC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8203 /* pld */, PPC::PLD, Convert__RegG8RC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegG8RC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8207 /* plfd */, PPC::PLFDpc, Convert__RegF8RC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegF8RC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8207 /* plfd */, PPC::PLFD, Convert__RegF8RC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegF8RC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8212 /* plfs */, PPC::PLFSpc, Convert__RegF4RC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegF4RC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8212 /* plfs */, PPC::PLFS, Convert__RegF4RC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegF4RC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8217 /* plha */, PPC::PLHApc, Convert__RegGPRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8217 /* plha */, PPC::PLHA, Convert__RegGPRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8222 /* plhz */, PPC::PLHZpc, Convert__RegGPRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8222 /* plhz */, PPC::PLHZ, Convert__RegGPRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8227 /* pli */, PPC::PLI, Convert__RegGPRC1_0__S34Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S34Imm }, },
  { 8231 /* plwa */, PPC::PLWApc, Convert__RegGPRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8231 /* plwa */, PPC::PLWA, Convert__RegGPRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8236 /* plwz */, PPC::PLWZpc, Convert__RegGPRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8236 /* plwz */, PPC::PLWZ, Convert__RegGPRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8241 /* plxsd */, PPC::PLXSDpc, Convert__RegVFRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegVFRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8241 /* plxsd */, PPC::PLXSD, Convert__RegVFRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVFRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8247 /* plxssp */, PPC::PLXSSPpc, Convert__RegVFRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegVFRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8247 /* plxssp */, PPC::PLXSSP, Convert__RegVFRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVFRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8254 /* plxv */, PPC::PLXVpc, Convert__RegVSRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegVSRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8254 /* plxv */, PPC::PLXV, Convert__RegVSRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVSRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8259 /* plxvp */, PPC::PLXVPpc, Convert__RegVSRpRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegVSRpRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8259 /* plxvp */, PPC::PLXVP, Convert__RegVSRpRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVSRpRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8265 /* pmxvbf16ger2 */, PPC::PMXVBF16GER2, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8278 /* pmxvbf16ger2nn */, PPC::PMXVBF16GER2NN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8293 /* pmxvbf16ger2np */, PPC::PMXVBF16GER2NP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8308 /* pmxvbf16ger2pn */, PPC::PMXVBF16GER2PN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8323 /* pmxvbf16ger2pp */, PPC::PMXVBF16GER2PP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8338 /* pmxvf16ger2 */, PPC::PMXVF16GER2, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8350 /* pmxvf16ger2nn */, PPC::PMXVF16GER2NN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8364 /* pmxvf16ger2np */, PPC::PMXVF16GER2NP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8378 /* pmxvf16ger2pn */, PPC::PMXVF16GER2PN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8392 /* pmxvf16ger2pp */, PPC::PMXVF16GER2PP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8406 /* pmxvf32ger */, PPC::PMXVF32GER, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm }, },
  { 8417 /* pmxvf32gernn */, PPC::PMXVF32GERNN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm }, },
  { 8430 /* pmxvf32gernp */, PPC::PMXVF32GERNP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm }, },
  { 8443 /* pmxvf32gerpn */, PPC::PMXVF32GERPN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm }, },
  { 8456 /* pmxvf32gerpp */, PPC::PMXVF32GERPP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm }, },
  { 8469 /* pmxvf64ger */, PPC::PMXVF64GER, Convert__RegACCRC1_0__RegVSRpEvenRC1_1__RegVSRC1_2__U4Imm1_3__U2Imm1_4, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRpEvenRC, MCK_RegVSRC, MCK_U4Imm, MCK_U2Imm }, },
  { 8480 /* pmxvf64gernn */, PPC::PMXVF64GERNN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRpEvenRC1_1__RegVSRC1_2__U4Imm1_3__U2Imm1_4, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRpEvenRC, MCK_RegVSRC, MCK_U4Imm, MCK_U2Imm }, },
  { 8493 /* pmxvf64gernp */, PPC::PMXVF64GERNP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRpEvenRC1_1__RegVSRC1_2__U4Imm1_3__U2Imm1_4, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRpEvenRC, MCK_RegVSRC, MCK_U4Imm, MCK_U2Imm }, },
  { 8506 /* pmxvf64gerpn */, PPC::PMXVF64GERPN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRpEvenRC1_1__RegVSRC1_2__U4Imm1_3__U2Imm1_4, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRpEvenRC, MCK_RegVSRC, MCK_U4Imm, MCK_U2Imm }, },
  { 8519 /* pmxvf64gerpp */, PPC::PMXVF64GERPP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRpEvenRC1_1__RegVSRC1_2__U4Imm1_3__U2Imm1_4, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRpEvenRC, MCK_RegVSRC, MCK_U4Imm, MCK_U2Imm }, },
  { 8532 /* pmxvi16ger2 */, PPC::PMXVI16GER2, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8544 /* pmxvi16ger2pp */, PPC::PMXVI16GER2PP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8558 /* pmxvi16ger2s */, PPC::PMXVI16GER2S, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8571 /* pmxvi16ger2spp */, PPC::PMXVI16GER2SPP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8586 /* pmxvi4ger8 */, PPC::PMXVI4GER8, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U8Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U8Imm }, },
  { 8597 /* pmxvi4ger8pp */, PPC::PMXVI4GER8PP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U8Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U8Imm }, },
  { 8610 /* pmxvi8ger4 */, PPC::PMXVI8GER4, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 8621 /* pmxvi8ger4pp */, PPC::PMXVI8GER4PP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 8634 /* pmxvi8ger4spp */, PPC::PMXVI8GER4SPP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 8648 /* popcntb */, PPC::POPCNTB, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 8656 /* popcntd */, PPC::POPCNTD, Convert__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 8664 /* popcntw */, PPC::POPCNTW, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 8672 /* pstb */, PPC::PSTBpc, Convert__RegGPRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8672 /* pstb */, PPC::PSTB, Convert__RegGPRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8677 /* pstd */, PPC::PSTDpc, Convert__RegG8RC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegG8RC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8677 /* pstd */, PPC::PSTD, Convert__RegG8RC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegG8RC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8682 /* pstfd */, PPC::PSTFDpc, Convert__RegF8RC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegF8RC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8682 /* pstfd */, PPC::PSTFD, Convert__RegF8RC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegF8RC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8688 /* pstfs */, PPC::PSTFSpc, Convert__RegF4RC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegF4RC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8688 /* pstfs */, PPC::PSTFS, Convert__RegF4RC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegF4RC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8694 /* psth */, PPC::PSTHpc, Convert__RegGPRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8694 /* psth */, PPC::PSTH, Convert__RegGPRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8699 /* pstw */, PPC::PSTWpc, Convert__RegGPRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8699 /* pstw */, PPC::PSTW, Convert__RegGPRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8704 /* pstxsd */, PPC::PSTXSDpc, Convert__RegVFRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegVFRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8704 /* pstxsd */, PPC::PSTXSD, Convert__RegVFRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVFRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8711 /* pstxssp */, PPC::PSTXSSPpc, Convert__RegVFRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegVFRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8711 /* pstxssp */, PPC::PSTXSSP, Convert__RegVFRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVFRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8719 /* pstxv */, PPC::PSTXVpc, Convert__RegVSRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegVSRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8719 /* pstxv */, PPC::PSTXV, Convert__RegVSRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVSRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8725 /* pstxvp */, PPC::PSTXVPpc, Convert__RegVSRpRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegVSRpRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8725 /* pstxvp */, PPC::PSTXVP, Convert__RegVSRpRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVSRpRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8732 /* ptesync */, PPC::SYNC, Convert__imm_95_2, AMFBS_None, {  }, },
  { 8740 /* rfci */, PPC::RFCI, Convert_NoOperands, AMFBS_None, {  }, },
  { 8745 /* rfdi */, PPC::RFDI, Convert_NoOperands, AMFBS_None, {  }, },
  { 8750 /* rfebb */, PPC::RFEBB, Convert__imm_95_1, AMFBS_None, {  }, },
  { 8750 /* rfebb */, PPC::RFEBB, Convert__U1Imm1_0, AMFBS_None, { MCK_U1Imm }, },
  { 8756 /* rfi */, PPC::RFI, Convert_NoOperands, AMFBS_None, {  }, },
  { 8760 /* rfid */, PPC::RFID, Convert_NoOperands, AMFBS_None, {  }, },
  { 8765 /* rfmci */, PPC::RFMCI, Convert_NoOperands, AMFBS_None, {  }, },
  { 8771 /* rldcl */, PPC::RLDCL, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 8771 /* rldcl */, PPC::RLDCL_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 8777 /* rldcr */, PPC::RLDCR, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 8777 /* rldcr */, PPC::RLDCR_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 8783 /* rldic */, PPC::RLDIC, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 8783 /* rldic */, PPC::RLDIC_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 8789 /* rldicl */, PPC::RLDICL, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 8789 /* rldicl */, PPC::RLDICL_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 8796 /* rldicr */, PPC::RLDICR, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 8796 /* rldicr */, PPC::RLDICR_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 8803 /* rldimi */, PPC::RLDIMI, Convert__RegG8RC1_0__Tie0_1_1__RegG8RC1_1__U6Imm1_2__U6Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 8803 /* rldimi */, PPC::RLDIMI_rec, Convert__RegG8RC1_1__Tie0_1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 8810 /* rlwimi */, PPC::RLWIMIbm, Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm, MCK_Imm }, },
  { 8810 /* rlwimi */, PPC::RLWIMIbm_rec, Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm, MCK_Imm }, },
  { 8810 /* rlwimi */, PPC::RLWIMI, Convert__RegGPRC1_0__Tie0_1_1__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 8810 /* rlwimi */, PPC::RLWIMI_rec, Convert__RegGPRC1_1__Tie0_1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 8817 /* rlwinm */, PPC::RLWINMbm, Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm, MCK_Imm }, },
  { 8817 /* rlwinm */, PPC::RLWINMbm_rec, Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm, MCK_Imm }, },
  { 8817 /* rlwinm */, PPC::RLWINM, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 8817 /* rlwinm */, PPC::RLWINM_rec, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 8824 /* rlwnm */, PPC::RLWNMbm, Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm, MCK_Imm }, },
  { 8824 /* rlwnm */, PPC::RLWNMbm_rec, Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm, MCK_Imm }, },
  { 8824 /* rlwnm */, PPC::RLWNM, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 8824 /* rlwnm */, PPC::RLWNM_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__U5Imm1_4__U5Imm1_5, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 8830 /* rotld */, PPC::RLDCL, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__imm_95_0, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 8830 /* rotld */, PPC::RLDCL_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__imm_95_0, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 8836 /* rotldi */, PPC::RLDICL, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__imm_95_0, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 8836 /* rotldi */, PPC::RLDICL_32_64, Convert__RegG8RC1_0__RegGPRC1_1__U6Imm1_2__imm_95_0, AMFBS_None, { MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 8836 /* rotldi */, PPC::RLDICL_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__imm_95_0, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 8843 /* rotlw */, PPC::RLWNM8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2__imm_95_0__imm_95_31, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8843 /* rotlw */, PPC::RLWNM, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__imm_95_0__imm_95_31, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8843 /* rotlw */, PPC::RLWNM8_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3__imm_95_0__imm_95_31, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8843 /* rotlw */, PPC::RLWNM_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__imm_95_0__imm_95_31, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8849 /* rotlwi */, PPC::RLWINM8, Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__imm_95_0__imm_95_31, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm }, },
  { 8849 /* rotlwi */, PPC::RLWINM, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__imm_95_0__imm_95_31, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 8849 /* rotlwi */, PPC::RLWINM8_rec, Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__imm_95_0__imm_95_31, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm }, },
  { 8849 /* rotlwi */, PPC::RLWINM_rec, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__imm_95_0__imm_95_31, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 8856 /* rotrdi */, PPC::ROTRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 8856 /* rotrdi */, PPC::ROTRDI_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 8863 /* rotrwi */, PPC::ROTRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 8863 /* rotrwi */, PPC::ROTRWI_rec, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 8870 /* sc */, PPC::SC, Convert__imm_95_0, AMFBS_None, {  }, },
  { 8870 /* sc */, PPC::SC, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 8873 /* setb */, PPC::SETB, Convert__RegGPRC1_0__RegCRRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegCRRC }, },
  { 8878 /* setbc */, PPC::SETBC, Convert__RegGPRC1_0__RegCRBITRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegCRBITRC }, },
  { 8884 /* setbcr */, PPC::SETBCR, Convert__RegGPRC1_0__RegCRBITRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegCRBITRC }, },
  { 8891 /* setnbc */, PPC::SETNBC, Convert__RegGPRC1_0__RegCRBITRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegCRBITRC }, },
  { 8898 /* setnbcr */, PPC::SETNBCR, Convert__RegGPRC1_0__RegCRBITRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegCRBITRC }, },
  { 8906 /* slbfee */, PPC::SLBFEE_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8913 /* slbia */, PPC::SLBIA, Convert_NoOperands, AMFBS_None, {  }, },
  { 8919 /* slbie */, PPC::SLBIE, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 8925 /* slbieg */, PPC::SLBIEG, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 8932 /* slbmfee */, PPC::SLBMFEE, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 8940 /* slbmfev */, PPC::SLBMFEV, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 8948 /* slbmte */, PPC::SLBMTE, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 8955 /* slbsync */, PPC::SLBSYNC, Convert_NoOperands, AMFBS_None, {  }, },
  { 8963 /* sld */, PPC::SLD, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 8963 /* sld */, PPC::SLD_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 8967 /* sldi */, PPC::SLDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 8967 /* sldi */, PPC::SLDI_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 8972 /* slw */, PPC::SLW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8972 /* slw */, PPC::SLW_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8976 /* slwi */, PPC::SLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 8976 /* slwi */, PPC::SLWI_rec, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 8981 /* srad */, PPC::SRAD, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 8981 /* srad */, PPC::SRAD_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 8986 /* sradi */, PPC::SRADI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 8986 /* sradi */, PPC::SRADI_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 8992 /* sraw */, PPC::SRAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8992 /* sraw */, PPC::SRAW_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8997 /* srawi */, PPC::SRAWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 8997 /* srawi */, PPC::SRAWI_rec, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 9003 /* srd */, PPC::SRD, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 9003 /* srd */, PPC::SRD_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 9007 /* srdi */, PPC::SRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 9007 /* srdi */, PPC::SRDI_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 9012 /* srw */, PPC::SRW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9012 /* srw */, PPC::SRW_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9016 /* srwi */, PPC::SRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 9016 /* srwi */, PPC::SRWI_rec, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 9021 /* stb */, PPC::STB, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 9025 /* stbcix */, PPC::STBCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9032 /* stbcx */, PPC::STBCX, Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9038 /* stbepx */, PPC::STBEPX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9045 /* stbu */, PPC::STBU, Convert__imm_95_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 9050 /* stbux */, PPC::STBUX, Convert__imm_95_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9056 /* stbx */, PPC::STBXTLS_, Convert__RegG8RC1_0__RegGxRCNoR01_1__TLSReg1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_TLSReg }, },
  { 9056 /* stbx */, PPC::STBX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9061 /* std */, PPC::STD, Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 9065 /* stdat */, PPC::STDAT, Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm }, },
  { 9071 /* stdbrx */, PPC::STDBRX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9078 /* stdcix */, PPC::STDCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9085 /* stdcx */, PPC::STDCX, Convert__RegG8RC1_1__RegGxRCNoR01_2__RegGxRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9091 /* stdu */, PPC::STDU, Convert__imm_95_0__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 9096 /* stdux */, PPC::STDUX, Convert__imm_95_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9102 /* stdx */, PPC::STDX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9102 /* stdx */, PPC::STDXTLS_, Convert__RegG8RC1_0__RegGxRCNoR01_1__TLSReg1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_TLSReg }, },
  { 9107 /* stfd */, PPC::STFD, Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 9112 /* stfdepx */, PPC::STFDEPX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9120 /* stfdu */, PPC::STFDU, Convert__imm_95_0__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 9126 /* stfdux */, PPC::STFDUX, Convert__imm_95_0__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9133 /* stfdx */, PPC::STFDX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9139 /* stfiwx */, PPC::STFIWX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9146 /* stfs */, PPC::STFS, Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 9151 /* stfsu */, PPC::STFSU, Convert__imm_95_0__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 9157 /* stfsux */, PPC::STFSUX, Convert__imm_95_0__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9164 /* stfsx */, PPC::STFSX, Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9170 /* sth */, PPC::STH, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 9174 /* sthbrx */, PPC::STHBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9181 /* sthcix */, PPC::STHCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9188 /* sthcx */, PPC::STHCX, Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9194 /* sthepx */, PPC::STHEPX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9201 /* sthu */, PPC::STHU, Convert__imm_95_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 9206 /* sthux */, PPC::STHUX, Convert__imm_95_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9212 /* sthx */, PPC::STHXTLS_, Convert__RegG8RC1_0__RegGxRCNoR01_1__TLSReg1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_TLSReg }, },
  { 9212 /* sthx */, PPC::STHX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9217 /* stmw */, PPC::STMW, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 9222 /* stop */, PPC::STOP, Convert_NoOperands, AMFBS_None, {  }, },
  { 9227 /* stq */, PPC::STQ, Convert__RegG8pRC1_0__DispRIX1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegG8pRC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 9231 /* stqcx */, PPC::STQCX, Convert__RegG8pRC1_1__RegGxRCNoR01_2__RegGxRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8pRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9237 /* stswi */, PPC::STSWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 9243 /* stvebx */, PPC::STVEBX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9250 /* stvehx */, PPC::STVEHX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9257 /* stvewx */, PPC::STVEWX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9264 /* stvx */, PPC::STVX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9269 /* stvxl */, PPC::STVXL, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9275 /* stw */, PPC::STW, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 9275 /* stw */, PPC::SPESTW, Convert__RegSPE4RC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPE4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 9279 /* stwat */, PPC::STWAT, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 9285 /* stwbrx */, PPC::STWBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9292 /* stwcix */, PPC::STWCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9299 /* stwcx */, PPC::STWCX, Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9305 /* stwepx */, PPC::STWEPX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9312 /* stwu */, PPC::STWU, Convert__imm_95_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 9317 /* stwux */, PPC::STWUX, Convert__imm_95_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9323 /* stwx */, PPC::STWXTLS_, Convert__RegG8RC1_0__RegGxRCNoR01_1__TLSReg1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_TLSReg }, },
  { 9323 /* stwx */, PPC::STWX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9323 /* stwx */, PPC::SPESTWX, Convert__RegSPE4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPE4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9328 /* stxsd */, PPC::STXSD, Convert__RegVFRC1_0__DispRIX1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVFRC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 9334 /* stxsdx */, PPC::STXSDX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9341 /* stxsibx */, PPC::STXSIBX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9349 /* stxsihx */, PPC::STXSIHX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9357 /* stxsiwx */, PPC::STXSIWX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9365 /* stxssp */, PPC::STXSSP, Convert__RegVFRC1_0__DispRIX1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVFRC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 9372 /* stxsspx */, PPC::STXSSPX, Convert__RegVSSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9380 /* stxv */, PPC::STXV, Convert__RegVSRC1_0__DispRIX161_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVSRC, MCK_DispRIX16, MCK_RegGxRCNoR0 }, },
  { 9385 /* stxvb16x */, PPC::STXVB16X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9394 /* stxvd2x */, PPC::STXVD2X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9402 /* stxvh8x */, PPC::STXVH8X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9410 /* stxvl */, PPC::STXVL, Convert__RegVSRC1_0__Imm1_1__RegG8RC1_2, AMFBS_None, { MCK_RegVSRC, MCK_Imm, MCK_RegG8RC }, },
  { 9416 /* stxvll */, PPC::STXVLL, Convert__RegVSRC1_0__Imm1_1__RegG8RC1_2, AMFBS_None, { MCK_RegVSRC, MCK_Imm, MCK_RegG8RC }, },
  { 9423 /* stxvp */, PPC::STXVP, Convert__RegVSRpRC1_0__DispRIX161_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVSRpRC, MCK_DispRIX16, MCK_RegGxRCNoR0 }, },
  { 9429 /* stxvpx */, PPC::STXVPX, Convert__RegVSRpRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRpRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9436 /* stxvrbx */, PPC::STXVRBX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9444 /* stxvrdx */, PPC::STXVRDX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9452 /* stxvrhx */, PPC::STXVRHX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9460 /* stxvrwx */, PPC::STXVRWX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9468 /* stxvw4x */, PPC::STXVW4X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9476 /* stxvx */, PPC::STXVX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9482 /* sub */, PPC::SUBF8, Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 9482 /* sub */, PPC::SUBF, Convert__RegGPRC1_0__RegGPRC1_2__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9482 /* sub */, PPC::SUBF8_rec, Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 9482 /* sub */, PPC::SUBF_rec, Convert__RegGPRC1_1__RegGPRC1_3__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9486 /* subc */, PPC::SUBFC8, Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 9486 /* subc */, PPC::SUBFC, Convert__RegGPRC1_0__RegGPRC1_2__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9486 /* subc */, PPC::SUBFC8_rec, Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 9486 /* subc */, PPC::SUBFC_rec, Convert__RegGPRC1_1__RegGPRC1_3__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9491 /* subf */, PPC::SUBF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9491 /* subf */, PPC::SUBF_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9496 /* subfc */, PPC::SUBFC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9496 /* subfc */, PPC::SUBFC_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9502 /* subfco */, PPC::SUBFCO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9502 /* subfco */, PPC::SUBFCO_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9509 /* subfe */, PPC::SUBFE, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9509 /* subfe */, PPC::SUBFE_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9515 /* subfeo */, PPC::SUBFEO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9515 /* subfeo */, PPC::SUBFEO_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9522 /* subfic */, PPC::SUBFIC, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 9529 /* subfme */, PPC::SUBFME, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9529 /* subfme */, PPC::SUBFME_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9536 /* subfmeo */, PPC::SUBFMEO, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9536 /* subfmeo */, PPC::SUBFMEO_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9544 /* subfo */, PPC::SUBFO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9544 /* subfo */, PPC::SUBFO_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9550 /* subfze */, PPC::SUBFZE, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9550 /* subfze */, PPC::SUBFZE_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9557 /* subfzeo */, PPC::SUBFZEO, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9557 /* subfzeo */, PPC::SUBFZEO_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9565 /* subi */, PPC::SUBI, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 9570 /* subic */, PPC::SUBIC, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 9570 /* subic */, PPC::SUBIC_rec, Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 9576 /* subis */, PPC::SUBIS, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 9582 /* subpcis */, PPC::SUBPCIS, Convert__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9590 /* sync */, PPC::SYNC, Convert__imm_95_0, AMFBS_None, {  }, },
  { 9590 /* sync */, PPC::SYNC, Convert__U2Imm1_0, AMFBS_None, { MCK_U2Imm }, },
  { 9595 /* tabort */, PPC::TABORT, Convert__RegGPRC1_1, AMFBS_None, { MCK__DOT_, MCK_RegGPRC }, },
  { 9602 /* tabortdc */, PPC::TABORTDC, Convert__U5Imm1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_U5Imm, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9611 /* tabortdci */, PPC::TABORTDCI, Convert__U5Imm1_1__RegGPRC1_2__U5Imm1_3, AMFBS_None, { MCK__DOT_, MCK_U5Imm, MCK_RegGPRC, MCK_U5Imm }, },
  { 9621 /* tabortwc */, PPC::TABORTWC, Convert__U5Imm1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_U5Imm, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9630 /* tabortwci */, PPC::TABORTWCI, Convert__U5Imm1_1__RegGPRC1_2__U5Imm1_3, AMFBS_None, { MCK__DOT_, MCK_U5Imm, MCK_RegGPRC, MCK_U5Imm }, },
  { 9640 /* tbegin */, PPC::TBEGIN, Convert__U1Imm1_1, AMFBS_None, { MCK__DOT_, MCK_U1Imm }, },
  { 9647 /* tcheck */, PPC::TCHECK, Convert__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 9654 /* td */, PPC::TD, Convert__U5Imm1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_U5Imm, MCK_RegG8RC, MCK_RegG8RC }, },
  { 9657 /* tdeq */, PPC::TD, Convert__imm_95_4__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9662 /* tdeqi */, PPC::TDI, Convert__imm_95_4__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9668 /* tdge */, PPC::TD, Convert__imm_95_12__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9673 /* tdgei */, PPC::TDI, Convert__imm_95_12__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9679 /* tdgt */, PPC::TD, Convert__imm_95_8__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9684 /* tdgti */, PPC::TDI, Convert__imm_95_8__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9690 /* tdi */, PPC::TDI, Convert__U5Imm1_0__RegG8RC1_1__S16Imm1_2, AMFBS_None, { MCK_U5Imm, MCK_RegG8RC, MCK_S16Imm }, },
  { 9694 /* tdle */, PPC::TD, Convert__imm_95_20__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9699 /* tdlei */, PPC::TDI, Convert__imm_95_20__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9705 /* tdlge */, PPC::TD, Convert__imm_95_5__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9711 /* tdlgei */, PPC::TDI, Convert__imm_95_5__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9718 /* tdlgt */, PPC::TD, Convert__imm_95_1__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9724 /* tdlgti */, PPC::TDI, Convert__imm_95_1__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9731 /* tdlle */, PPC::TD, Convert__imm_95_6__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9737 /* tdllei */, PPC::TDI, Convert__imm_95_6__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9744 /* tdllt */, PPC::TD, Convert__imm_95_2__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9750 /* tdllti */, PPC::TDI, Convert__imm_95_2__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9757 /* tdlng */, PPC::TD, Convert__imm_95_6__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9763 /* tdlngi */, PPC::TDI, Convert__imm_95_6__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9770 /* tdlnl */, PPC::TD, Convert__imm_95_5__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9776 /* tdlnli */, PPC::TDI, Convert__imm_95_5__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9783 /* tdlt */, PPC::TD, Convert__imm_95_16__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9788 /* tdlti */, PPC::TDI, Convert__imm_95_16__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9794 /* tdne */, PPC::TD, Convert__imm_95_24__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9799 /* tdnei */, PPC::TDI, Convert__imm_95_24__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9805 /* tdng */, PPC::TD, Convert__imm_95_20__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9810 /* tdngi */, PPC::TDI, Convert__imm_95_20__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9816 /* tdnl */, PPC::TD, Convert__imm_95_12__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9821 /* tdnli */, PPC::TDI, Convert__imm_95_12__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9827 /* tdu */, PPC::TD, Convert__imm_95_31__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9831 /* tdui */, PPC::TDI, Convert__imm_95_31__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9836 /* tend */, PPC::TEND, Convert__imm_95_0, AMFBS_None, { MCK__DOT_ }, },
  { 9836 /* tend */, PPC::TEND, Convert__U1Imm1_1, AMFBS_None, { MCK__DOT_, MCK_U1Imm }, },
  { 9841 /* tendall */, PPC::TEND, Convert__imm_95_1, AMFBS_None, { MCK__DOT_ }, },
  { 9849 /* tlbia */, PPC::TLBIA, Convert_NoOperands, AMFBS_None, {  }, },
  { 9855 /* tlbie */, PPC::TLBIE, Convert__regR0__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 9855 /* tlbie */, PPC::TLBIE, Convert__RegGPRC1_1__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9861 /* tlbiel */, PPC::TLBIEL, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 9868 /* tlbivax */, PPC::TLBIVAX, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9876 /* tlbld */, PPC::TLBLD, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 9882 /* tlbli */, PPC::TLBLI, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 9888 /* tlbre */, PPC::TLBRE, Convert_NoOperands, AMFBS_None, {  }, },
  { 9888 /* tlbre */, PPC::TLBRE2, Convert__RegGPRC1_0__RegGPRC1_1__Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_Imm }, },
  { 9894 /* tlbrehi */, PPC::TLBRE2, Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9902 /* tlbrelo */, PPC::TLBRE2, Convert__RegGPRC1_0__RegGPRC1_1__imm_95_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9910 /* tlbsx */, PPC::TLBSX, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9910 /* tlbsx */, PPC::TLBSX2, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9910 /* tlbsx */, PPC::TLBSX2D, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9916 /* tlbsync */, PPC::TLBSYNC, Convert_NoOperands, AMFBS_None, {  }, },
  { 9924 /* tlbwe */, PPC::TLBWE, Convert_NoOperands, AMFBS_None, {  }, },
  { 9924 /* tlbwe */, PPC::TLBWE2, Convert__RegGPRC1_0__RegGPRC1_1__Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_Imm }, },
  { 9930 /* tlbwehi */, PPC::TLBWE2, Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9938 /* tlbwelo */, PPC::TLBWE2, Convert__RegGPRC1_0__RegGPRC1_1__imm_95_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9946 /* trap */, PPC::TRAP, Convert_NoOperands, AMFBS_None, {  }, },
  { 9946 /* trap */, PPC::TW, Convert__imm_95_31__regR0__regR0, AMFBS_None, {  }, },
  { 9951 /* trechkpt */, PPC::TRECHKPT, Convert_NoOperands, AMFBS_None, { MCK__DOT_ }, },
  { 9960 /* treclaim */, PPC::TRECLAIM, Convert__RegGPRC1_1, AMFBS_None, { MCK__DOT_, MCK_RegGPRC }, },
  { 9969 /* tresume */, PPC::TSR, Convert__imm_95_1, AMFBS_None, { MCK__DOT_ }, },
  { 9977 /* tsr */, PPC::TSR, Convert__U1Imm1_1, AMFBS_None, { MCK__DOT_, MCK_U1Imm }, },
  { 9981 /* tsuspend */, PPC::TSR, Convert__imm_95_0, AMFBS_None, { MCK__DOT_ }, },
  { 9990 /* tw */, PPC::TW, Convert__U5Imm1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_U5Imm, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9993 /* tweq */, PPC::TW, Convert__imm_95_4__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9998 /* tweqi */, PPC::TWI, Convert__imm_95_4__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10004 /* twge */, PPC::TW, Convert__imm_95_12__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10009 /* twgei */, PPC::TWI, Convert__imm_95_12__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10015 /* twgt */, PPC::TW, Convert__imm_95_8__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10020 /* twgti */, PPC::TWI, Convert__imm_95_8__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10026 /* twi */, PPC::TWI, Convert__U5Imm1_0__RegGPRC1_1__S16Imm1_2, AMFBS_None, { MCK_U5Imm, MCK_RegGPRC, MCK_S16Imm }, },
  { 10030 /* twle */, PPC::TW, Convert__imm_95_20__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10035 /* twlei */, PPC::TWI, Convert__imm_95_20__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10041 /* twlge */, PPC::TW, Convert__imm_95_5__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10047 /* twlgei */, PPC::TWI, Convert__imm_95_5__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10054 /* twlgt */, PPC::TW, Convert__imm_95_1__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10060 /* twlgti */, PPC::TWI, Convert__imm_95_1__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10067 /* twlle */, PPC::TW, Convert__imm_95_6__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10073 /* twllei */, PPC::TWI, Convert__imm_95_6__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10080 /* twllt */, PPC::TW, Convert__imm_95_2__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10086 /* twllti */, PPC::TWI, Convert__imm_95_2__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10093 /* twlng */, PPC::TW, Convert__imm_95_6__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10099 /* twlngi */, PPC::TWI, Convert__imm_95_6__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10106 /* twlnl */, PPC::TW, Convert__imm_95_5__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10112 /* twlnli */, PPC::TWI, Convert__imm_95_5__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10119 /* twlt */, PPC::TW, Convert__imm_95_16__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10124 /* twlti */, PPC::TWI, Convert__imm_95_16__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10130 /* twne */, PPC::TW, Convert__imm_95_24__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10135 /* twnei */, PPC::TWI, Convert__imm_95_24__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10141 /* twng */, PPC::TW, Convert__imm_95_20__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10146 /* twngi */, PPC::TWI, Convert__imm_95_20__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10152 /* twnl */, PPC::TW, Convert__imm_95_12__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10157 /* twnli */, PPC::TWI, Convert__imm_95_12__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10163 /* twu */, PPC::TW, Convert__imm_95_31__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10167 /* twui */, PPC::TWI, Convert__imm_95_31__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10172 /* vabsdub */, PPC::VABSDUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10180 /* vabsduh */, PPC::VABSDUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10188 /* vabsduw */, PPC::VABSDUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10196 /* vaddcuq */, PPC::VADDCUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10204 /* vaddcuw */, PPC::VADDCUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10212 /* vaddecuq */, PPC::VADDECUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10221 /* vaddeuqm */, PPC::VADDEUQM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10230 /* vaddfp */, PPC::VADDFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10237 /* vaddsbs */, PPC::VADDSBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10245 /* vaddshs */, PPC::VADDSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10253 /* vaddsws */, PPC::VADDSWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10261 /* vaddubm */, PPC::VADDUBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10269 /* vaddubs */, PPC::VADDUBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10277 /* vaddudm */, PPC::VADDUDM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10285 /* vadduhm */, PPC::VADDUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10293 /* vadduhs */, PPC::VADDUHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10301 /* vadduqm */, PPC::VADDUQM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10309 /* vadduwm */, PPC::VADDUWM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10317 /* vadduws */, PPC::VADDUWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10325 /* vand */, PPC::VAND, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10330 /* vandc */, PPC::VANDC, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10336 /* vavgsb */, PPC::VAVGSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10343 /* vavgsh */, PPC::VAVGSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10350 /* vavgsw */, PPC::VAVGSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10357 /* vavgub */, PPC::VAVGUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10364 /* vavguh */, PPC::VAVGUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10371 /* vavguw */, PPC::VAVGUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10378 /* vbpermd */, PPC::VBPERMD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10386 /* vbpermq */, PPC::VBPERMQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10394 /* vcfsx */, PPC::VCFSX, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 10400 /* vcfuged */, PPC::VCFUGED, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10408 /* vcfux */, PPC::VCFUX, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 10414 /* vcipher */, PPC::VCIPHER, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10422 /* vcipherlast */, PPC::VCIPHERLAST, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10434 /* vclrlb */, PPC::VCLRLB, Convert__RegVRRC1_0__RegVRRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegGPRC }, },
  { 10441 /* vclrrb */, PPC::VCLRRB, Convert__RegVRRC1_0__RegVRRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegGPRC }, },
  { 10448 /* vclzb */, PPC::VCLZB, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10454 /* vclzd */, PPC::VCLZD, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10460 /* vclzdm */, PPC::VCLZDM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10467 /* vclzh */, PPC::VCLZH, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10473 /* vclzlsbb */, PPC::VCLZLSBB, Convert__RegGPRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegVRRC }, },
  { 10482 /* vclzw */, PPC::VCLZW, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10488 /* vcmpbfp */, PPC::VCMPBFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10488 /* vcmpbfp */, PPC::VCMPBFP_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10496 /* vcmpeqfp */, PPC::VCMPEQFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10496 /* vcmpeqfp */, PPC::VCMPEQFP_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10505 /* vcmpequb */, PPC::VCMPEQUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10505 /* vcmpequb */, PPC::VCMPEQUB_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10514 /* vcmpequd */, PPC::VCMPEQUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10514 /* vcmpequd */, PPC::VCMPEQUD_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10523 /* vcmpequh */, PPC::VCMPEQUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10523 /* vcmpequh */, PPC::VCMPEQUH_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10532 /* vcmpequq */, PPC::VCMPEQUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10532 /* vcmpequq */, PPC::VCMPEQUQ_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10541 /* vcmpequw */, PPC::VCMPEQUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10541 /* vcmpequw */, PPC::VCMPEQUW_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10550 /* vcmpgefp */, PPC::VCMPGEFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10550 /* vcmpgefp */, PPC::VCMPGEFP_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10559 /* vcmpgtfp */, PPC::VCMPGTFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10559 /* vcmpgtfp */, PPC::VCMPGTFP_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10568 /* vcmpgtsb */, PPC::VCMPGTSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10568 /* vcmpgtsb */, PPC::VCMPGTSB_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10577 /* vcmpgtsd */, PPC::VCMPGTSD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10577 /* vcmpgtsd */, PPC::VCMPGTSD_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10586 /* vcmpgtsh */, PPC::VCMPGTSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10586 /* vcmpgtsh */, PPC::VCMPGTSH_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10595 /* vcmpgtsq */, PPC::VCMPGTSQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10595 /* vcmpgtsq */, PPC::VCMPGTSQ_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10604 /* vcmpgtsw */, PPC::VCMPGTSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10604 /* vcmpgtsw */, PPC::VCMPGTSW_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10613 /* vcmpgtub */, PPC::VCMPGTUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10613 /* vcmpgtub */, PPC::VCMPGTUB_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10622 /* vcmpgtud */, PPC::VCMPGTUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10622 /* vcmpgtud */, PPC::VCMPGTUD_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10631 /* vcmpgtuh */, PPC::VCMPGTUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10631 /* vcmpgtuh */, PPC::VCMPGTUH_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10640 /* vcmpgtuq */, PPC::VCMPGTUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10640 /* vcmpgtuq */, PPC::VCMPGTUQ_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10649 /* vcmpgtuw */, PPC::VCMPGTUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10649 /* vcmpgtuw */, PPC::VCMPGTUW_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10658 /* vcmpneb */, PPC::VCMPNEB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10658 /* vcmpneb */, PPC::VCMPNEB_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10666 /* vcmpneh */, PPC::VCMPNEH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10666 /* vcmpneh */, PPC::VCMPNEH_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10674 /* vcmpnew */, PPC::VCMPNEW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10674 /* vcmpnew */, PPC::VCMPNEW_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10682 /* vcmpnezb */, PPC::VCMPNEZB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10682 /* vcmpnezb */, PPC::VCMPNEZB_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10691 /* vcmpnezh */, PPC::VCMPNEZH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10691 /* vcmpnezh */, PPC::VCMPNEZH_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10700 /* vcmpnezw */, PPC::VCMPNEZW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10700 /* vcmpnezw */, PPC::VCMPNEZW_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10709 /* vcmpsq */, PPC::VCMPSQ, Convert__RegCRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10716 /* vcmpuq */, PPC::VCMPUQ, Convert__RegCRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10723 /* vcntmbb */, PPC::VCNTMBB, Convert__RegG8RC1_0__RegVRRC1_1__U1Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegVRRC, MCK_U1Imm }, },
  { 10731 /* vcntmbd */, PPC::VCNTMBD, Convert__RegG8RC1_0__RegVRRC1_1__U1Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegVRRC, MCK_U1Imm }, },
  { 10739 /* vcntmbh */, PPC::VCNTMBH, Convert__RegG8RC1_0__RegVRRC1_1__U1Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegVRRC, MCK_U1Imm }, },
  { 10747 /* vcntmbw */, PPC::VCNTMBW, Convert__RegG8RC1_0__RegVRRC1_1__U1Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegVRRC, MCK_U1Imm }, },
  { 10755 /* vctsxs */, PPC::VCTSXS, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 10762 /* vctuxs */, PPC::VCTUXS, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 10769 /* vctzb */, PPC::VCTZB, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10775 /* vctzd */, PPC::VCTZD, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10781 /* vctzdm */, PPC::VCTZDM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10788 /* vctzh */, PPC::VCTZH, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10794 /* vctzlsbb */, PPC::VCTZLSBB, Convert__RegGPRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegVRRC }, },
  { 10803 /* vctzw */, PPC::VCTZW, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10809 /* vdivesd */, PPC::VDIVESD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10817 /* vdivesq */, PPC::VDIVESQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10825 /* vdivesw */, PPC::VDIVESW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10833 /* vdiveud */, PPC::VDIVEUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10841 /* vdiveuq */, PPC::VDIVEUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10849 /* vdiveuw */, PPC::VDIVEUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10857 /* vdivsd */, PPC::VDIVSD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10864 /* vdivsq */, PPC::VDIVSQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10871 /* vdivsw */, PPC::VDIVSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10878 /* vdivud */, PPC::VDIVUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10885 /* vdivuq */, PPC::VDIVUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10892 /* vdivuw */, PPC::VDIVUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10899 /* veqv */, PPC::VEQV, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10904 /* vexpandbm */, PPC::VEXPANDBM, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10914 /* vexpanddm */, PPC::VEXPANDDM, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10924 /* vexpandhm */, PPC::VEXPANDHM, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10934 /* vexpandqm */, PPC::VEXPANDQM, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10944 /* vexpandwm */, PPC::VEXPANDWM, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10954 /* vexptefp */, PPC::VEXPTEFP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10963 /* vextddvlx */, PPC::VEXTDDVLX, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegGPRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegGPRC }, },
  { 10973 /* vextddvrx */, PPC::VEXTDDVRX, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegGPRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegGPRC }, },
  { 10983 /* vextdubvlx */, PPC::VEXTDUBVLX, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegGPRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegGPRC }, },
  { 10994 /* vextdubvrx */, PPC::VEXTDUBVRX, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegGPRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegGPRC }, },
  { 11005 /* vextduhvlx */, PPC::VEXTDUHVLX, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegGPRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegGPRC }, },
  { 11016 /* vextduhvrx */, PPC::VEXTDUHVRX, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegGPRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegGPRC }, },
  { 11027 /* vextduwvlx */, PPC::VEXTDUWVLX, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegGPRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegGPRC }, },
  { 11038 /* vextduwvrx */, PPC::VEXTDUWVRX, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegGPRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegGPRC }, },
  { 11049 /* vextractbm */, PPC::VEXTRACTBM, Convert__RegGPRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegVRRC }, },
  { 11060 /* vextractd */, PPC::VEXTRACTD, Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 11070 /* vextractdm */, PPC::VEXTRACTDM, Convert__RegGPRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegVRRC }, },
  { 11081 /* vextracthm */, PPC::VEXTRACTHM, Convert__RegGPRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegVRRC }, },
  { 11092 /* vextractqm */, PPC::VEXTRACTQM, Convert__RegGPRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegVRRC }, },
  { 11103 /* vextractub */, PPC::VEXTRACTUB, Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 11114 /* vextractuh */, PPC::VEXTRACTUH, Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 11125 /* vextractuw */, PPC::VEXTRACTUW, Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 11136 /* vextractwm */, PPC::VEXTRACTWM, Convert__RegGPRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegVRRC }, },
  { 11147 /* vextsb2d */, PPC::VEXTSB2D, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11156 /* vextsb2w */, PPC::VEXTSB2W, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11165 /* vextsd2q */, PPC::VEXTSD2Q, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11174 /* vextsh2d */, PPC::VEXTSH2D, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11183 /* vextsh2w */, PPC::VEXTSH2W, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11192 /* vextsw2d */, PPC::VEXTSW2D, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11201 /* vextublx */, PPC::VEXTUBLX, Convert__RegG8RC1_0__RegG8RC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegVRRC }, },
  { 11210 /* vextubrx */, PPC::VEXTUBRX, Convert__RegG8RC1_0__RegG8RC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegVRRC }, },
  { 11219 /* vextuhlx */, PPC::VEXTUHLX, Convert__RegG8RC1_0__RegG8RC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegVRRC }, },
  { 11228 /* vextuhrx */, PPC::VEXTUHRX, Convert__RegG8RC1_0__RegG8RC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegVRRC }, },
  { 11237 /* vextuwlx */, PPC::VEXTUWLX, Convert__RegG8RC1_0__RegG8RC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegVRRC }, },
  { 11246 /* vextuwrx */, PPC::VEXTUWRX, Convert__RegG8RC1_0__RegG8RC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegVRRC }, },
  { 11255 /* vgbbd */, PPC::VGBBD, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11261 /* vgnb */, PPC::VGNB, Convert__RegG8RC1_0__RegVRRC1_1__U3Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegVRRC, MCK_U3Imm }, },
  { 11266 /* vinsblx */, PPC::VINSBLX, Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 11274 /* vinsbrx */, PPC::VINSBRX, Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 11282 /* vinsbvlx */, PPC::VINSBVLX, Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_RegVRRC }, },
  { 11291 /* vinsbvrx */, PPC::VINSBVRX, Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_RegVRRC }, },
  { 11300 /* vinsd */, PPC::VINSD, Convert__RegVRRC1_0__Tie0_1_1__U4Imm1_2__RegG8RC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegG8RC, MCK_U4Imm }, },
  { 11306 /* vinsdlx */, PPC::VINSDLX, Convert__RegVRRC1_0__Tie0_1_1__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 11314 /* vinsdrx */, PPC::VINSDRX, Convert__RegVRRC1_0__Tie0_1_1__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 11322 /* vinsertb */, PPC::VINSERTB, Convert__RegVRRC1_0__Tie0_1_1__U4Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 11331 /* vinsertd */, PPC::VINSERTD, Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 11340 /* vinserth */, PPC::VINSERTH, Convert__RegVRRC1_0__Tie0_1_1__U4Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 11349 /* vinsertw */, PPC::VINSERTW, Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 11358 /* vinshlx */, PPC::VINSHLX, Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 11366 /* vinshrx */, PPC::VINSHRX, Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 11374 /* vinshvlx */, PPC::VINSHVLX, Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_RegVRRC }, },
  { 11383 /* vinshvrx */, PPC::VINSHVRX, Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_RegVRRC }, },
  { 11392 /* vinsw */, PPC::VINSW, Convert__RegVRRC1_0__Tie0_1_1__U4Imm1_2__RegGPRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_U4Imm }, },
  { 11398 /* vinswlx */, PPC::VINSWLX, Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 11406 /* vinswrx */, PPC::VINSWRX, Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 11414 /* vinswvlx */, PPC::VINSWVLX, Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_RegVRRC }, },
  { 11423 /* vinswvrx */, PPC::VINSWVRX, Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_RegVRRC }, },
  { 11432 /* vlogefp */, PPC::VLOGEFP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11440 /* vmaddfp */, PPC::VMADDFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11448 /* vmaxfp */, PPC::VMAXFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11455 /* vmaxsb */, PPC::VMAXSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11462 /* vmaxsd */, PPC::VMAXSD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11469 /* vmaxsh */, PPC::VMAXSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11476 /* vmaxsw */, PPC::VMAXSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11483 /* vmaxub */, PPC::VMAXUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11490 /* vmaxud */, PPC::VMAXUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11497 /* vmaxuh */, PPC::VMAXUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11504 /* vmaxuw */, PPC::VMAXUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11511 /* vmhaddshs */, PPC::VMHADDSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11521 /* vmhraddshs */, PPC::VMHRADDSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11532 /* vminfp */, PPC::VMINFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11539 /* vminsb */, PPC::VMINSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11546 /* vminsd */, PPC::VMINSD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11553 /* vminsh */, PPC::VMINSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11560 /* vminsw */, PPC::VMINSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11567 /* vminub */, PPC::VMINUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11574 /* vminud */, PPC::VMINUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11581 /* vminuh */, PPC::VMINUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11588 /* vminuw */, PPC::VMINUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11595 /* vmladduhm */, PPC::VMLADDUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11605 /* vmodsd */, PPC::VMODSD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11612 /* vmodsq */, PPC::VMODSQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11619 /* vmodsw */, PPC::VMODSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11626 /* vmodud */, PPC::VMODUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11633 /* vmoduq */, PPC::VMODUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11640 /* vmoduw */, PPC::VMODUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11647 /* vmr */, PPC::VOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11651 /* vmrgew */, PPC::VMRGEW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11658 /* vmrghb */, PPC::VMRGHB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11665 /* vmrghh */, PPC::VMRGHH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11672 /* vmrghw */, PPC::VMRGHW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11679 /* vmrglb */, PPC::VMRGLB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11686 /* vmrglh */, PPC::VMRGLH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11693 /* vmrglw */, PPC::VMRGLW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11700 /* vmrgow */, PPC::VMRGOW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11707 /* vmsumcud */, PPC::VMSUMCUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11716 /* vmsummbm */, PPC::VMSUMMBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11725 /* vmsumshm */, PPC::VMSUMSHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11734 /* vmsumshs */, PPC::VMSUMSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11743 /* vmsumubm */, PPC::VMSUMUBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11752 /* vmsumudm */, PPC::VMSUMUDM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11761 /* vmsumuhm */, PPC::VMSUMUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11770 /* vmsumuhs */, PPC::VMSUMUHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11779 /* vmul10cuq */, PPC::VMUL10CUQ, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11789 /* vmul10ecuq */, PPC::VMUL10ECUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11800 /* vmul10euq */, PPC::VMUL10EUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11810 /* vmul10uq */, PPC::VMUL10UQ, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11819 /* vmulesb */, PPC::VMULESB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11827 /* vmulesd */, PPC::VMULESD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11835 /* vmulesh */, PPC::VMULESH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11843 /* vmulesw */, PPC::VMULESW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11851 /* vmuleub */, PPC::VMULEUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11859 /* vmuleud */, PPC::VMULEUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11867 /* vmuleuh */, PPC::VMULEUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11875 /* vmuleuw */, PPC::VMULEUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11883 /* vmulhsd */, PPC::VMULHSD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11891 /* vmulhsw */, PPC::VMULHSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11899 /* vmulhud */, PPC::VMULHUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11907 /* vmulhuw */, PPC::VMULHUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11915 /* vmulld */, PPC::VMULLD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11922 /* vmulosb */, PPC::VMULOSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11930 /* vmulosd */, PPC::VMULOSD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11938 /* vmulosh */, PPC::VMULOSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11946 /* vmulosw */, PPC::VMULOSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11954 /* vmuloub */, PPC::VMULOUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11962 /* vmuloud */, PPC::VMULOUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11970 /* vmulouh */, PPC::VMULOUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11978 /* vmulouw */, PPC::VMULOUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11986 /* vmuluwm */, PPC::VMULUWM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11994 /* vnand */, PPC::VNAND, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12000 /* vncipher */, PPC::VNCIPHER, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12009 /* vncipherlast */, PPC::VNCIPHERLAST, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12022 /* vnegd */, PPC::VNEGD, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12028 /* vnegw */, PPC::VNEGW, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12034 /* vnmsubfp */, PPC::VNMSUBFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12043 /* vnor */, PPC::VNOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12048 /* vnot */, PPC::VNOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12053 /* vor */, PPC::VOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12057 /* vorc */, PPC::VORC, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12062 /* vpdepd */, PPC::VPDEPD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12069 /* vperm */, PPC::VPERM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12075 /* vpermr */, PPC::VPERMR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12082 /* vpermxor */, PPC::VPERMXOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12091 /* vpextd */, PPC::VPEXTD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12098 /* vpkpx */, PPC::VPKPX, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12104 /* vpksdss */, PPC::VPKSDSS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12112 /* vpksdus */, PPC::VPKSDUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12120 /* vpkshss */, PPC::VPKSHSS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12128 /* vpkshus */, PPC::VPKSHUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12136 /* vpkswss */, PPC::VPKSWSS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12144 /* vpkswus */, PPC::VPKSWUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12152 /* vpkudum */, PPC::VPKUDUM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12160 /* vpkudus */, PPC::VPKUDUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12168 /* vpkuhum */, PPC::VPKUHUM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12176 /* vpkuhus */, PPC::VPKUHUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12184 /* vpkuwum */, PPC::VPKUWUM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12192 /* vpkuwus */, PPC::VPKUWUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12200 /* vpmsumb */, PPC::VPMSUMB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12208 /* vpmsumd */, PPC::VPMSUMD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12216 /* vpmsumh */, PPC::VPMSUMH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12224 /* vpmsumw */, PPC::VPMSUMW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12232 /* vpopcntb */, PPC::VPOPCNTB, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12241 /* vpopcntd */, PPC::VPOPCNTD, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12250 /* vpopcnth */, PPC::VPOPCNTH, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12259 /* vpopcntw */, PPC::VPOPCNTW, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12268 /* vprtybd */, PPC::VPRTYBD, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12276 /* vprtybq */, PPC::VPRTYBQ, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12284 /* vprtybw */, PPC::VPRTYBW, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12292 /* vrefp */, PPC::VREFP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12298 /* vrfim */, PPC::VRFIM, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12304 /* vrfin */, PPC::VRFIN, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12310 /* vrfip */, PPC::VRFIP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12316 /* vrfiz */, PPC::VRFIZ, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12322 /* vrlb */, PPC::VRLB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12327 /* vrld */, PPC::VRLD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12332 /* vrldmi */, PPC::VRLDMI, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__Tie0_1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12339 /* vrldnm */, PPC::VRLDNM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12346 /* vrlh */, PPC::VRLH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12351 /* vrlq */, PPC::VRLQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12356 /* vrlqmi */, PPC::VRLQMI, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__Tie0_1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12363 /* vrlqnm */, PPC::VRLQNM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12370 /* vrlw */, PPC::VRLW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12375 /* vrlwmi */, PPC::VRLWMI, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__Tie0_1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12382 /* vrlwnm */, PPC::VRLWNM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12389 /* vrsqrtefp */, PPC::VRSQRTEFP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12399 /* vsbox */, PPC::VSBOX, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12405 /* vsel */, PPC::VSEL, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12410 /* vshasigmad */, PPC::VSHASIGMAD, Convert__RegVRRC1_0__RegVRRC1_1__U1Imm1_2__U4Imm1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm, MCK_U4Imm }, },
  { 12421 /* vshasigmaw */, PPC::VSHASIGMAW, Convert__RegVRRC1_0__RegVRRC1_1__U1Imm1_2__U4Imm1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm, MCK_U4Imm }, },
  { 12432 /* vsl */, PPC::VSL, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12436 /* vslb */, PPC::VSLB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12441 /* vsld */, PPC::VSLD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12446 /* vsldbi */, PPC::VSLDBI, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U3Imm1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_U3Imm }, },
  { 12453 /* vsldoi */, PPC::VSLDOI, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U4Imm1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 12460 /* vslh */, PPC::VSLH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12465 /* vslo */, PPC::VSLO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12470 /* vslq */, PPC::VSLQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12475 /* vslv */, PPC::VSLV, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12480 /* vslw */, PPC::VSLW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12485 /* vspltb */, PPC::VSPLTB, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 12492 /* vsplth */, PPC::VSPLTH, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 12499 /* vspltisb */, PPC::VSPLTISB, Convert__RegVRRC1_0__S5Imm1_1, AMFBS_None, { MCK_RegVRRC, MCK_S5Imm }, },
  { 12508 /* vspltish */, PPC::VSPLTISH, Convert__RegVRRC1_0__S5Imm1_1, AMFBS_None, { MCK_RegVRRC, MCK_S5Imm }, },
  { 12517 /* vspltisw */, PPC::VSPLTISW, Convert__RegVRRC1_0__S5Imm1_1, AMFBS_None, { MCK_RegVRRC, MCK_S5Imm }, },
  { 12526 /* vspltw */, PPC::VSPLTW, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 12533 /* vsr */, PPC::VSR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12537 /* vsrab */, PPC::VSRAB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12543 /* vsrad */, PPC::VSRAD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12549 /* vsrah */, PPC::VSRAH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12555 /* vsraq */, PPC::VSRAQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12561 /* vsraw */, PPC::VSRAW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12567 /* vsrb */, PPC::VSRB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12572 /* vsrd */, PPC::VSRD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12577 /* vsrdbi */, PPC::VSRDBI, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U3Imm1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_U3Imm }, },
  { 12584 /* vsrh */, PPC::VSRH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12589 /* vsro */, PPC::VSRO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12594 /* vsrq */, PPC::VSRQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12599 /* vsrv */, PPC::VSRV, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12604 /* vsrw */, PPC::VSRW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12609 /* vstribl */, PPC::VSTRIBL, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12609 /* vstribl */, PPC::VSTRIBL_rec, Convert__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12617 /* vstribr */, PPC::VSTRIBR, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12617 /* vstribr */, PPC::VSTRIBR_rec, Convert__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12625 /* vstrihl */, PPC::VSTRIHL, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12625 /* vstrihl */, PPC::VSTRIHL_rec, Convert__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12633 /* vstrihr */, PPC::VSTRIHR, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12633 /* vstrihr */, PPC::VSTRIHR_rec, Convert__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12641 /* vsubcuq */, PPC::VSUBCUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12649 /* vsubcuw */, PPC::VSUBCUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12657 /* vsubecuq */, PPC::VSUBECUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12666 /* vsubeuqm */, PPC::VSUBEUQM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12675 /* vsubfp */, PPC::VSUBFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12682 /* vsubsbs */, PPC::VSUBSBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12690 /* vsubshs */, PPC::VSUBSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12698 /* vsubsws */, PPC::VSUBSWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12706 /* vsububm */, PPC::VSUBUBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12714 /* vsububs */, PPC::VSUBUBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12722 /* vsubudm */, PPC::VSUBUDM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12730 /* vsubuhm */, PPC::VSUBUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12738 /* vsubuhs */, PPC::VSUBUHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12746 /* vsubuqm */, PPC::VSUBUQM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12754 /* vsubuwm */, PPC::VSUBUWM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12762 /* vsubuws */, PPC::VSUBUWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12770 /* vsum2sws */, PPC::VSUM2SWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12779 /* vsum4sbs */, PPC::VSUM4SBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12788 /* vsum4shs */, PPC::VSUM4SHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12797 /* vsum4ubs */, PPC::VSUM4UBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12806 /* vsumsws */, PPC::VSUMSWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12814 /* vupkhpx */, PPC::VUPKHPX, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12822 /* vupkhsb */, PPC::VUPKHSB, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12830 /* vupkhsh */, PPC::VUPKHSH, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12838 /* vupkhsw */, PPC::VUPKHSW, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12846 /* vupklpx */, PPC::VUPKLPX, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12854 /* vupklsb */, PPC::VUPKLSB, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12862 /* vupklsh */, PPC::VUPKLSH, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12870 /* vupklsw */, PPC::VUPKLSW, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12878 /* vxor */, PPC::VXOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12883 /* wait */, PPC::WAIT, Convert__imm_95_0, AMFBS_None, {  }, },
  { 12883 /* wait */, PPC::WAIT, Convert__U2Imm1_0, AMFBS_None, { MCK_U2Imm }, },
  { 12888 /* waitimpl */, PPC::WAIT, Convert__imm_95_2, AMFBS_None, {  }, },
  { 12897 /* waitrsv */, PPC::WAIT, Convert__imm_95_1, AMFBS_None, {  }, },
  { 12905 /* wrtee */, PPC::WRTEE, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 12911 /* wrteei */, PPC::WRTEEI, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 12918 /* xnop */, PPC::XORI8, Convert__regX0__regX0__imm_95_0, AMFBS_None, {  }, },
  { 12918 /* xnop */, PPC::XORI, Convert__regR0__regR0__imm_95_0, AMFBS_None, {  }, },
  { 12923 /* xor */, PPC::XOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 12923 /* xor */, PPC::XOR_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 12927 /* xori */, PPC::XORI, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 12932 /* xoris */, PPC::XORIS, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 12938 /* xsabsdp */, PPC::XSABSDP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 12946 /* xsabsqp */, PPC::XSABSQP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12954 /* xsadddp */, PPC::XSADDDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 12962 /* xsaddqp */, PPC::XSADDQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12970 /* xsaddqpo */, PPC::XSADDQPO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12979 /* xsaddsp */, PPC::XSADDSP, Convert__RegVSSRC1_0__RegVSSRC1_1__RegVSSRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 12987 /* xscmpeqdp */, PPC::XSCMPEQDP, Convert__RegVSRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 12997 /* xscmpexpdp */, PPC::XSCMPEXPDP, Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13008 /* xscmpexpqp */, PPC::XSCMPEXPQP, Convert__RegCRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13019 /* xscmpgedp */, PPC::XSCMPGEDP, Convert__RegVSRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13029 /* xscmpgtdp */, PPC::XSCMPGTDP, Convert__RegVSRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13039 /* xscmpodp */, PPC::XSCMPODP, Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13048 /* xscmpoqp */, PPC::XSCMPOQP, Convert__RegCRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13057 /* xscmpudp */, PPC::XSCMPUDP, Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13066 /* xscmpuqp */, PPC::XSCMPUQP, Convert__RegCRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13075 /* xscpsgndp */, PPC::XSCPSGNDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13085 /* xscpsgnqp */, PPC::XSCPSGNQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13095 /* xscvdphp */, PPC::XSCVDPHP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13104 /* xscvdpqp */, PPC::XSCVDPQP, Convert__RegVRRC1_0__RegVFRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVFRC }, },
  { 13113 /* xscvdpsp */, PPC::XSCVDPSP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13122 /* xscvdpspn */, PPC::XSCVDPSPN, Convert__RegVSRC1_0__RegVSSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSSRC }, },
  { 13132 /* xscvdpsxds */, PPC::XSCVDPSXDS, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13143 /* xscvdpsxws */, PPC::XSCVDPSXWS, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13154 /* xscvdpuxds */, PPC::XSCVDPUXDS, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13165 /* xscvdpuxws */, PPC::XSCVDPUXWS, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13176 /* xscvhpdp */, PPC::XSCVHPDP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13185 /* xscvqpdp */, PPC::XSCVQPDP, Convert__RegVFRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVFRC, MCK_RegVRRC }, },
  { 13194 /* xscvqpdpo */, PPC::XSCVQPDPO, Convert__RegVFRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVFRC, MCK_RegVRRC }, },
  { 13204 /* xscvqpsdz */, PPC::XSCVQPSDZ, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13214 /* xscvqpsqz */, PPC::XSCVQPSQZ, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13224 /* xscvqpswz */, PPC::XSCVQPSWZ, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13234 /* xscvqpudz */, PPC::XSCVQPUDZ, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13244 /* xscvqpuqz */, PPC::XSCVQPUQZ, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13254 /* xscvqpuwz */, PPC::XSCVQPUWZ, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13264 /* xscvsdqp */, PPC::XSCVSDQP, Convert__RegVRRC1_0__RegVFRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVFRC }, },
  { 13273 /* xscvspdp */, PPC::XSCVSPDP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13282 /* xscvspdpn */, PPC::XSCVSPDPN, Convert__RegVSSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSRC }, },
  { 13292 /* xscvsqqp */, PPC::XSCVSQQP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13301 /* xscvsxddp */, PPC::XSCVSXDDP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13311 /* xscvsxdsp */, PPC::XSCVSXDSP, Convert__RegVSSRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSFRC }, },
  { 13321 /* xscvudqp */, PPC::XSCVUDQP, Convert__RegVRRC1_0__RegVFRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVFRC }, },
  { 13330 /* xscvuqqp */, PPC::XSCVUQQP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13339 /* xscvuxddp */, PPC::XSCVUXDDP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13349 /* xscvuxdsp */, PPC::XSCVUXDSP, Convert__RegVSSRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSFRC }, },
  { 13359 /* xsdivdp */, PPC::XSDIVDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13367 /* xsdivqp */, PPC::XSDIVQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13375 /* xsdivqpo */, PPC::XSDIVQPO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13384 /* xsdivsp */, PPC::XSDIVSP, Convert__RegVSSRC1_0__RegVSSRC1_1__RegVSSRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13392 /* xsiexpdp */, PPC::XSIEXPDP, Convert__RegVSRC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 13401 /* xsiexpqp */, PPC::XSIEXPQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVSFRC }, },
  { 13410 /* xsmaddadp */, PPC::XSMADDADP, Convert__RegVSFRC1_0__Tie0_1_1__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13420 /* xsmaddasp */, PPC::XSMADDASP, Convert__RegVSSRC1_0__Tie0_1_1__RegVSSRC1_1__RegVSSRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13430 /* xsmaddmdp */, PPC::XSMADDMDP, Convert__RegVSFRC1_0__Tie0_1_1__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13440 /* xsmaddmsp */, PPC::XSMADDMSP, Convert__RegVSSRC1_0__Tie0_1_1__RegVSSRC1_1__RegVSSRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13450 /* xsmaddqp */, PPC::XSMADDQP, Convert__RegVRRC1_0__Tie0_1_1__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13459 /* xsmaddqpo */, PPC::XSMADDQPO, Convert__RegVRRC1_0__Tie0_1_1__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13469 /* xsmaxcdp */, PPC::XSMAXCDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13478 /* xsmaxcqp */, PPC::XSMAXCQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13487 /* xsmaxdp */, PPC::XSMAXDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13495 /* xsmaxjdp */, PPC::XSMAXJDP, Convert__RegVSRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13504 /* xsmincdp */, PPC::XSMINCDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13513 /* xsmincqp */, PPC::XSMINCQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13522 /* xsmindp */, PPC::XSMINDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13530 /* xsminjdp */, PPC::XSMINJDP, Convert__RegVSRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13539 /* xsmsubadp */, PPC::XSMSUBADP, Convert__RegVSFRC1_0__Tie0_1_1__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13549 /* xsmsubasp */, PPC::XSMSUBASP, Convert__RegVSSRC1_0__Tie0_1_1__RegVSSRC1_1__RegVSSRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13559 /* xsmsubmdp */, PPC::XSMSUBMDP, Convert__RegVSFRC1_0__Tie0_1_1__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13569 /* xsmsubmsp */, PPC::XSMSUBMSP, Convert__RegVSSRC1_0__Tie0_1_1__RegVSSRC1_1__RegVSSRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13579 /* xsmsubqp */, PPC::XSMSUBQP, Convert__RegVRRC1_0__Tie0_1_1__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13588 /* xsmsubqpo */, PPC::XSMSUBQPO, Convert__RegVRRC1_0__Tie0_1_1__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13598 /* xsmuldp */, PPC::XSMULDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13606 /* xsmulqp */, PPC::XSMULQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13614 /* xsmulqpo */, PPC::XSMULQPO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13623 /* xsmulsp */, PPC::XSMULSP, Convert__RegVSSRC1_0__RegVSSRC1_1__RegVSSRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13631 /* xsnabsdp */, PPC::XSNABSDP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13640 /* xsnabsqp */, PPC::XSNABSQP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13649 /* xsnegdp */, PPC::XSNEGDP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13657 /* xsnegqp */, PPC::XSNEGQP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13665 /* xsnmaddadp */, PPC::XSNMADDADP, Convert__RegVSFRC1_0__Tie0_1_1__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13676 /* xsnmaddasp */, PPC::XSNMADDASP, Convert__RegVSSRC1_0__Tie0_1_1__RegVSSRC1_1__RegVSSRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13687 /* xsnmaddmdp */, PPC::XSNMADDMDP, Convert__RegVSFRC1_0__Tie0_1_1__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13698 /* xsnmaddmsp */, PPC::XSNMADDMSP, Convert__RegVSSRC1_0__Tie0_1_1__RegVSSRC1_1__RegVSSRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13709 /* xsnmaddqp */, PPC::XSNMADDQP, Convert__RegVRRC1_0__Tie0_1_1__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13719 /* xsnmaddqpo */, PPC::XSNMADDQPO, Convert__RegVRRC1_0__Tie0_1_1__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13730 /* xsnmsubadp */, PPC::XSNMSUBADP, Convert__RegVSFRC1_0__Tie0_1_1__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13741 /* xsnmsubasp */, PPC::XSNMSUBASP, Convert__RegVSSRC1_0__Tie0_1_1__RegVSSRC1_1__RegVSSRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13752 /* xsnmsubmdp */, PPC::XSNMSUBMDP, Convert__RegVSFRC1_0__Tie0_1_1__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13763 /* xsnmsubmsp */, PPC::XSNMSUBMSP, Convert__RegVSSRC1_0__Tie0_1_1__RegVSSRC1_1__RegVSSRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13774 /* xsnmsubqp */, PPC::XSNMSUBQP, Convert__RegVRRC1_0__Tie0_1_1__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13784 /* xsnmsubqpo */, PPC::XSNMSUBQPO, Convert__RegVRRC1_0__Tie0_1_1__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13795 /* xsrdpi */, PPC::XSRDPI, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13802 /* xsrdpic */, PPC::XSRDPIC, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13810 /* xsrdpim */, PPC::XSRDPIM, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13818 /* xsrdpip */, PPC::XSRDPIP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13826 /* xsrdpiz */, PPC::XSRDPIZ, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13834 /* xsredp */, PPC::XSREDP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13841 /* xsresp */, PPC::XSRESP, Convert__RegVSSRC1_0__RegVSSRC1_1, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13848 /* xsrqpi */, PPC::XSRQPI, Convert__RegVRRC1_1__U1Imm1_0__RegVRRC1_2__U2Imm1_3, AMFBS_None, { MCK_U1Imm, MCK_RegVRRC, MCK_RegVRRC, MCK_U2Imm }, },
  { 13855 /* xsrqpix */, PPC::XSRQPIX, Convert__RegVRRC1_1__U1Imm1_0__RegVRRC1_2__U2Imm1_3, AMFBS_None, { MCK_U1Imm, MCK_RegVRRC, MCK_RegVRRC, MCK_U2Imm }, },
  { 13863 /* xsrqpxp */, PPC::XSRQPXP, Convert__RegVRRC1_1__U1Imm1_0__RegVRRC1_2__U2Imm1_3, AMFBS_None, { MCK_U1Imm, MCK_RegVRRC, MCK_RegVRRC, MCK_U2Imm }, },
  { 13871 /* xsrsp */, PPC::XSRSP, Convert__RegVSSRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSFRC }, },
  { 13877 /* xsrsqrtedp */, PPC::XSRSQRTEDP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13888 /* xsrsqrtesp */, PPC::XSRSQRTESP, Convert__RegVSSRC1_0__RegVSSRC1_1, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13899 /* xssqrtdp */, PPC::XSSQRTDP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13908 /* xssqrtqp */, PPC::XSSQRTQP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13917 /* xssqrtqpo */, PPC::XSSQRTQPO, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13927 /* xssqrtsp */, PPC::XSSQRTSP, Convert__RegVSSRC1_0__RegVSSRC1_1, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13936 /* xssubdp */, PPC::XSSUBDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13944 /* xssubqp */, PPC::XSSUBQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13952 /* xssubqpo */, PPC::XSSUBQPO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13961 /* xssubsp */, PPC::XSSUBSP, Convert__RegVSSRC1_0__RegVSSRC1_1__RegVSSRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13969 /* xstdivdp */, PPC::XSTDIVDP, Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13978 /* xstsqrtdp */, PPC::XSTSQRTDP, Convert__RegCRRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegCRRC, MCK_RegVSFRC }, },
  { 13988 /* xststdcdp */, PPC::XSTSTDCDP, Convert__RegCRRC1_0__U7Imm1_2__RegVSFRC1_1, AMFBS_None, { MCK_RegCRRC, MCK_RegVSFRC, MCK_U7Imm }, },
  { 13998 /* xststdcqp */, PPC::XSTSTDCQP, Convert__RegCRRC1_0__U7Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegCRRC, MCK_RegVRRC, MCK_U7Imm }, },
  { 14008 /* xststdcsp */, PPC::XSTSTDCSP, Convert__RegCRRC1_0__U7Imm1_2__RegVSFRC1_1, AMFBS_None, { MCK_RegCRRC, MCK_RegVSFRC, MCK_U7Imm }, },
  { 14018 /* xsxexpdp */, PPC::XSXEXPDP, Convert__RegG8RC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegVSFRC }, },
  { 14027 /* xsxexpqp */, PPC::XSXEXPQP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 14036 /* xsxsigdp */, PPC::XSXSIGDP, Convert__RegG8RC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegVSFRC }, },
  { 14045 /* xsxsigqp */, PPC::XSXSIGQP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 14054 /* xvabsdp */, PPC::XVABSDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14062 /* xvabssp */, PPC::XVABSSP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14070 /* xvadddp */, PPC::XVADDDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14078 /* xvaddsp */, PPC::XVADDSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14086 /* xvbf16ger2 */, PPC::XVBF16GER2, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14097 /* xvbf16ger2nn */, PPC::XVBF16GER2NN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14110 /* xvbf16ger2np */, PPC::XVBF16GER2NP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14123 /* xvbf16ger2pn */, PPC::XVBF16GER2PN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14136 /* xvbf16ger2pp */, PPC::XVBF16GER2PP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14149 /* xvcmpeqdp */, PPC::XVCMPEQDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14149 /* xvcmpeqdp */, PPC::XVCMPEQDP_rec, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14159 /* xvcmpeqsp */, PPC::XVCMPEQSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14159 /* xvcmpeqsp */, PPC::XVCMPEQSP_rec, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14169 /* xvcmpgedp */, PPC::XVCMPGEDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14169 /* xvcmpgedp */, PPC::XVCMPGEDP_rec, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14179 /* xvcmpgesp */, PPC::XVCMPGESP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14179 /* xvcmpgesp */, PPC::XVCMPGESP_rec, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14189 /* xvcmpgtdp */, PPC::XVCMPGTDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14189 /* xvcmpgtdp */, PPC::XVCMPGTDP_rec, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14199 /* xvcmpgtsp */, PPC::XVCMPGTSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14199 /* xvcmpgtsp */, PPC::XVCMPGTSP_rec, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14209 /* xvcpsgndp */, PPC::XVCPSGNDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14219 /* xvcpsgnsp */, PPC::XVCPSGNSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14229 /* xvcvbf16spn */, PPC::XVCVBF16SPN, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14241 /* xvcvdpsp */, PPC::XVCVDPSP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14250 /* xvcvdpsxds */, PPC::XVCVDPSXDS, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14261 /* xvcvdpsxws */, PPC::XVCVDPSXWS, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14272 /* xvcvdpuxds */, PPC::XVCVDPUXDS, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14283 /* xvcvdpuxws */, PPC::XVCVDPUXWS, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14294 /* xvcvhpsp */, PPC::XVCVHPSP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14303 /* xvcvspbf16 */, PPC::XVCVSPBF16, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14314 /* xvcvspdp */, PPC::XVCVSPDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14323 /* xvcvsphp */, PPC::XVCVSPHP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14332 /* xvcvspsxds */, PPC::XVCVSPSXDS, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14343 /* xvcvspsxws */, PPC::XVCVSPSXWS, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14354 /* xvcvspuxds */, PPC::XVCVSPUXDS, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14365 /* xvcvspuxws */, PPC::XVCVSPUXWS, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14376 /* xvcvsxddp */, PPC::XVCVSXDDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14386 /* xvcvsxdsp */, PPC::XVCVSXDSP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14396 /* xvcvsxwdp */, PPC::XVCVSXWDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14406 /* xvcvsxwsp */, PPC::XVCVSXWSP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14416 /* xvcvuxddp */, PPC::XVCVUXDDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14426 /* xvcvuxdsp */, PPC::XVCVUXDSP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14436 /* xvcvuxwdp */, PPC::XVCVUXWDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14446 /* xvcvuxwsp */, PPC::XVCVUXWSP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14456 /* xvdivdp */, PPC::XVDIVDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14464 /* xvdivsp */, PPC::XVDIVSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14472 /* xvf16ger2 */, PPC::XVF16GER2, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14482 /* xvf16ger2nn */, PPC::XVF16GER2NN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14494 /* xvf16ger2np */, PPC::XVF16GER2NP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14506 /* xvf16ger2pn */, PPC::XVF16GER2PN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14518 /* xvf16ger2pp */, PPC::XVF16GER2PP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14530 /* xvf32ger */, PPC::XVF32GER, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14539 /* xvf32gernn */, PPC::XVF32GERNN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14550 /* xvf32gernp */, PPC::XVF32GERNP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14561 /* xvf32gerpn */, PPC::XVF32GERPN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14572 /* xvf32gerpp */, PPC::XVF32GERPP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14583 /* xvf64ger */, PPC::XVF64GER, Convert__RegACCRC1_0__RegVSRpEvenRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRpEvenRC, MCK_RegVSRC }, },
  { 14592 /* xvf64gernn */, PPC::XVF64GERNN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRpEvenRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRpEvenRC, MCK_RegVSRC }, },
  { 14603 /* xvf64gernp */, PPC::XVF64GERNP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRpEvenRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRpEvenRC, MCK_RegVSRC }, },
  { 14614 /* xvf64gerpn */, PPC::XVF64GERPN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRpEvenRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRpEvenRC, MCK_RegVSRC }, },
  { 14625 /* xvf64gerpp */, PPC::XVF64GERPP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRpEvenRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRpEvenRC, MCK_RegVSRC }, },
  { 14636 /* xvi16ger2 */, PPC::XVI16GER2, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14646 /* xvi16ger2pp */, PPC::XVI16GER2PP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14658 /* xvi16ger2s */, PPC::XVI16GER2S, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14669 /* xvi16ger2spp */, PPC::XVI16GER2SPP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14682 /* xvi4ger8 */, PPC::XVI4GER8, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14691 /* xvi4ger8pp */, PPC::XVI4GER8PP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14702 /* xvi8ger4 */, PPC::XVI8GER4, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14711 /* xvi8ger4pp */, PPC::XVI8GER4PP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14722 /* xvi8ger4spp */, PPC::XVI8GER4SPP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14734 /* xviexpdp */, PPC::XVIEXPDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14743 /* xviexpsp */, PPC::XVIEXPSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14752 /* xvmaddadp */, PPC::XVMADDADP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14762 /* xvmaddasp */, PPC::XVMADDASP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14772 /* xvmaddmdp */, PPC::XVMADDMDP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14782 /* xvmaddmsp */, PPC::XVMADDMSP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14792 /* xvmaxdp */, PPC::XVMAXDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14800 /* xvmaxsp */, PPC::XVMAXSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14808 /* xvmindp */, PPC::XVMINDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14816 /* xvminsp */, PPC::XVMINSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14824 /* xvmovdp */, PPC::XVCPSGNDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14832 /* xvmovsp */, PPC::XVCPSGNSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14840 /* xvmsubadp */, PPC::XVMSUBADP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14850 /* xvmsubasp */, PPC::XVMSUBASP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14860 /* xvmsubmdp */, PPC::XVMSUBMDP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14870 /* xvmsubmsp */, PPC::XVMSUBMSP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14880 /* xvmuldp */, PPC::XVMULDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14888 /* xvmulsp */, PPC::XVMULSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14896 /* xvnabsdp */, PPC::XVNABSDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14905 /* xvnabssp */, PPC::XVNABSSP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14914 /* xvnegdp */, PPC::XVNEGDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14922 /* xvnegsp */, PPC::XVNEGSP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14930 /* xvnmaddadp */, PPC::XVNMADDADP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14941 /* xvnmaddasp */, PPC::XVNMADDASP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14952 /* xvnmaddmdp */, PPC::XVNMADDMDP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14963 /* xvnmaddmsp */, PPC::XVNMADDMSP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14974 /* xvnmsubadp */, PPC::XVNMSUBADP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14985 /* xvnmsubasp */, PPC::XVNMSUBASP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14996 /* xvnmsubmdp */, PPC::XVNMSUBMDP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15007 /* xvnmsubmsp */, PPC::XVNMSUBMSP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15018 /* xvrdpi */, PPC::XVRDPI, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15025 /* xvrdpic */, PPC::XVRDPIC, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15033 /* xvrdpim */, PPC::XVRDPIM, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15041 /* xvrdpip */, PPC::XVRDPIP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15049 /* xvrdpiz */, PPC::XVRDPIZ, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15057 /* xvredp */, PPC::XVREDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15064 /* xvresp */, PPC::XVRESP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15071 /* xvrspi */, PPC::XVRSPI, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15078 /* xvrspic */, PPC::XVRSPIC, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15086 /* xvrspim */, PPC::XVRSPIM, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15094 /* xvrspip */, PPC::XVRSPIP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15102 /* xvrspiz */, PPC::XVRSPIZ, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15110 /* xvrsqrtedp */, PPC::XVRSQRTEDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15121 /* xvrsqrtesp */, PPC::XVRSQRTESP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15132 /* xvsqrtdp */, PPC::XVSQRTDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15141 /* xvsqrtsp */, PPC::XVSQRTSP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15150 /* xvsubdp */, PPC::XVSUBDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15158 /* xvsubsp */, PPC::XVSUBSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15166 /* xvtdivdp */, PPC::XVTDIVDP, Convert__RegCRRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15175 /* xvtdivsp */, PPC::XVTDIVSP, Convert__RegCRRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15184 /* xvtlsbb */, PPC::XVTLSBB, Convert__RegCRRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegCRRC, MCK_RegVSRC }, },
  { 15192 /* xvtsqrtdp */, PPC::XVTSQRTDP, Convert__RegCRRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegCRRC, MCK_RegVSRC }, },
  { 15202 /* xvtsqrtsp */, PPC::XVTSQRTSP, Convert__RegCRRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegCRRC, MCK_RegVSRC }, },
  { 15212 /* xvtstdcdp */, PPC::XVTSTDCDP, Convert__RegVSRC1_0__U7Imm1_2__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_U7Imm }, },
  { 15222 /* xvtstdcsp */, PPC::XVTSTDCSP, Convert__RegVSRC1_0__U7Imm1_2__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_U7Imm }, },
  { 15232 /* xvxexpdp */, PPC::XVXEXPDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15241 /* xvxexpsp */, PPC::XVXEXPSP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15250 /* xvxsigdp */, PPC::XVXSIGDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15259 /* xvxsigsp */, PPC::XVXSIGSP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15268 /* xxblendvb */, PPC::XXBLENDVB, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15278 /* xxblendvd */, PPC::XXBLENDVD, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15288 /* xxblendvh */, PPC::XXBLENDVH, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15298 /* xxblendvw */, PPC::XXBLENDVW, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15308 /* xxbrd */, PPC::XXBRD, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15314 /* xxbrh */, PPC::XXBRH, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15320 /* xxbrq */, PPC::XXBRQ, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15326 /* xxbrw */, PPC::XXBRW, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15332 /* xxeval */, PPC::XXEVAL, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3__U8Imm1_4, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U8Imm }, },
  { 15339 /* xxextractuw */, PPC::XXEXTRACTUW, Convert__RegVSFRC1_0__RegVSRC1_1__U4Imm1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSRC, MCK_U4Imm }, },
  { 15351 /* xxgenpcvbm */, PPC::XXGENPCVBM, Convert__RegVSRC1_0__RegVRRC1_1__S5Imm1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVRRC, MCK_S5Imm }, },
  { 15362 /* xxgenpcvdm */, PPC::XXGENPCVDM, Convert__RegVSRC1_0__RegVRRC1_1__S5Imm1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVRRC, MCK_S5Imm }, },
  { 15373 /* xxgenpcvhm */, PPC::XXGENPCVHM, Convert__RegVSRC1_0__RegVRRC1_1__S5Imm1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVRRC, MCK_S5Imm }, },
  { 15384 /* xxgenpcvwm */, PPC::XXGENPCVWM, Convert__RegVSRC1_0__RegVRRC1_1__S5Imm1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVRRC, MCK_S5Imm }, },
  { 15395 /* xxinsertw */, PPC::XXINSERTW, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__U4Imm1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm }, },
  { 15405 /* xxland */, PPC::XXLAND, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15412 /* xxlandc */, PPC::XXLANDC, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15420 /* xxleqv */, PPC::XXLEQV, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15427 /* xxlnand */, PPC::XXLNAND, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15435 /* xxlnor */, PPC::XXLNOR, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15442 /* xxlor */, PPC::XXLOR, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15448 /* xxlorc */, PPC::XXLORC, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15455 /* xxlxor */, PPC::XXLXOR, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15462 /* xxmfacc */, PPC::XXMFACC, Convert__RegACCRC1_0__Tie0_1_1, AMFBS_None, { MCK_RegACCRC }, },
  { 15470 /* xxmrghd */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_95_0, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15478 /* xxmrghw */, PPC::XXMRGHW, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15486 /* xxmrgld */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_95_3, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15494 /* xxmrglw */, PPC::XXMRGLW, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15502 /* xxmtacc */, PPC::XXMTACC, Convert__RegACCRC1_0__Tie0_1_1, AMFBS_None, { MCK_RegACCRC }, },
  { 15510 /* xxperm */, PPC::XXPERM, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15517 /* xxpermdi */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__U2Imm1_3, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U2Imm }, },
  { 15526 /* xxpermr */, PPC::XXPERMR, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15534 /* xxpermx */, PPC::XXPERMX, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3__U3Imm1_4, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U3Imm }, },
  { 15542 /* xxsel */, PPC::XXSEL, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15548 /* xxsetaccz */, PPC::XXSETACCZ, Convert__RegACCRC1_0, AMFBS_None, { MCK_RegACCRC }, },
  { 15558 /* xxsldwi */, PPC::XXSLDWI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__U2Imm1_3, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U2Imm }, },
  { 15566 /* xxspltd */, PPC::XXPERMDIs, Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_0, AMFBS_ModernAs, { MCK_RegVSRC, MCK_RegVSFRC, MCK_0 }, },
  { 15566 /* xxspltd */, PPC::XXPERMDIs, Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_3, AMFBS_ModernAs, { MCK_RegVSRC, MCK_RegVSFRC, MCK_1 }, },
  { 15566 /* xxspltd */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_0, AMFBS_ModernAs, { MCK_RegVSRC, MCK_RegVSRC, MCK_0 }, },
  { 15566 /* xxspltd */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_3, AMFBS_ModernAs, { MCK_RegVSRC, MCK_RegVSRC, MCK_1 }, },
  { 15574 /* xxsplti32dx */, PPC::XXSPLTI32DX, Convert__RegVSRC1_0__Tie0_1_1__U1Imm1_1__Imm1_2, AMFBS_None, { MCK_RegVSRC, MCK_U1Imm, MCK_Imm }, },
  { 15586 /* xxspltib */, PPC::XXSPLTIB, Convert__RegVSRC1_0__U8Imm1_1, AMFBS_None, { MCK_RegVSRC, MCK_U8Imm }, },
  { 15595 /* xxspltidp */, PPC::XXSPLTIDP, Convert__RegVSRC1_0__Imm1_1, AMFBS_None, { MCK_RegVSRC, MCK_Imm }, },
  { 15605 /* xxspltiw */, PPC::XXSPLTIW, Convert__RegVSRC1_0__Imm1_1, AMFBS_None, { MCK_RegVSRC, MCK_Imm }, },
  { 15614 /* xxspltw */, PPC::XXSPLTW, Convert__RegVSRC1_0__RegVSRC1_1__U2Imm1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_U2Imm }, },
  { 15622 /* xxswapd */, PPC::XXPERMDIs, Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSFRC }, },
  { 15622 /* xxswapd */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
};

#include "llvm/Support/Debug.h"
#include "llvm/Support/Format.h"

unsigned PPCAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst,
                     uint64_t &ErrorInfo,
                     FeatureBitset &MissingFeatures,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 7) {
    ErrorInfo = 7;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  const FeatureBitset &AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((PPCOperand &)*Operands[0]).getToken();

  // Process all MnemonicAliases to remap the mnemonic.
  applyMnemonicAliases(Mnemonic, AvailableFeatures, VariantID);

  // Some state to try to produce better error messages.
  bool HadMatchOtherThanFeatures = false;
  bool HadMatchOtherThanPredicate = false;
  unsigned RetCode = Match_InvalidOperand;
  MissingFeatures.set();
  // Set ErrorInfo to the operand that mismatches if it is
  // wrong for all instances of the instruction.
  ErrorInfo = ~0ULL;
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  auto MnemonicRange = std::equal_range(Start, End, Mnemonic, LessOpcode());

  DEBUG_WITH_TYPE("asm-matcher", dbgs() << "AsmMatcher: found " <<
  std::distance(MnemonicRange.first, MnemonicRange.second) <<
  " encodings with mnemonic '" << Mnemonic << "'\n");

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    const FeatureBitset &RequiredFeatures = FeatureBitsets[it->RequiredFeaturesIdx];
    bool HasRequiredFeatures =
      (AvailableFeatures & RequiredFeatures) == RequiredFeatures;
    DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Trying to match opcode "
                                          << MII.getName(it->Opcode) << "\n");
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    bool OperandsValid = true;
    for (unsigned FormalIdx = 0, ActualIdx = 1; FormalIdx != 6; ++FormalIdx) {
      auto Formal = static_cast<MatchClassKind>(it->Classes[FormalIdx]);
      DEBUG_WITH_TYPE("asm-matcher",
                      dbgs() << "  Matching formal operand class " << getMatchClassName(Formal)
                             << " against actual operand at index " << ActualIdx);
      if (ActualIdx < Operands.size())
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << " (";
                        Operands[ActualIdx]->print(dbgs()); dbgs() << "): ");
      else
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << ": ");
      if (ActualIdx >= Operands.size()) {
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << "actual operand index out of range ");
        OperandsValid = (Formal == InvalidMatchClass) || isSubclass(Formal, OptionalMatchClass);
        if (!OperandsValid) ErrorInfo = ActualIdx;
        break;
      }
      MCParsedAsmOperand &Actual = *Operands[ActualIdx];
      unsigned Diag = validateOperandClass(Actual, Formal);
      if (Diag == Match_Success) {
        DEBUG_WITH_TYPE("asm-matcher",
                        dbgs() << "match success using generic matcher\n");
        ++ActualIdx;
        continue;
      }
      // If the generic handler indicates an invalid operand
      // failure, check for a special case.
      if (Diag != Match_Success) {
        unsigned TargetDiag = validateTargetOperandClass(Actual, Formal);
        if (TargetDiag == Match_Success) {
          DEBUG_WITH_TYPE("asm-matcher",
                          dbgs() << "match success using target matcher\n");
          ++ActualIdx;
          continue;
        }
        // If the target matcher returned a specific error code use
        // that, else use the one from the generic matcher.
        if (TargetDiag != Match_InvalidOperand && HasRequiredFeatures)
          Diag = TargetDiag;
      }
      // If current formal operand wasn't matched and it is optional
      // then try to match next formal operand
      if (Diag == Match_InvalidOperand && isSubclass(Formal, OptionalMatchClass)) {
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << "ignoring optional operand\n");
        continue;
      }
      // If this operand is broken for all of the instances of this
      // mnemonic, keep track of it so we can report loc info.
      // If we already had a match that only failed due to a
      // target predicate, that diagnostic is preferred.
      if (!HadMatchOtherThanPredicate &&
          (it == MnemonicRange.first || ErrorInfo <= ActualIdx)) {
        if (HasRequiredFeatures && (ErrorInfo != ActualIdx || Diag != Match_InvalidOperand))
          RetCode = Diag;
        ErrorInfo = ActualIdx;
      }
      // Otherwise, just reject this instance of the mnemonic.
      OperandsValid = false;
      break;
    }

    if (!OperandsValid) {
      DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Opcode result: multiple "
                                               "operand mismatches, ignoring "
                                               "this opcode\n");
      continue;
    }
    if (!HasRequiredFeatures) {
      HadMatchOtherThanFeatures = true;
      FeatureBitset NewMissingFeatures = RequiredFeatures & ~AvailableFeatures;
      DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Missing target features:";
                      for (unsigned I = 0, E = NewMissingFeatures.size(); I != E; ++I)
                        if (NewMissingFeatures[I])
                          dbgs() << ' ' << I;
                      dbgs() << "\n");
      if (NewMissingFeatures.count() <=
          MissingFeatures.count())
        MissingFeatures = NewMissingFeatures;
      continue;
    }

    Inst.clear();

    Inst.setOpcode(it->Opcode);
    // We have a potential match but have not rendered the operands.
    // Check the target predicate to handle any context sensitive
    // constraints.
    // For example, Ties that are referenced multiple times must be
    // checked here to ensure the input is the same for each match
    // constraints. If we leave it any later the ties will have been
    // canonicalized
    unsigned MatchResult;
    if ((MatchResult = checkEarlyTargetMatchPredicate(Inst, Operands)) != Match_Success) {
      Inst.clear();
      DEBUG_WITH_TYPE(
          "asm-matcher",
          dbgs() << "Early target match predicate failed with diag code "
                 << MatchResult << "\n");
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    if (matchingInlineAsm) {
      convertToMapAndConstraints(it->ConvertFn, Operands);
      if (!checkAsmTiedOperandConstraints(*this, it->ConvertFn, Operands, ErrorInfo))
        return Match_InvalidTiedOperand;

      return Match_Success;
    }

    // We have selected a definite instruction, convert the parsed
    // operands into the appropriate MCInst.
    convertToMCInst(it->ConvertFn, Inst, it->Opcode, Operands);

    // We have a potential match. Check the target predicate to
    // handle any context sensitive constraints.
    if ((MatchResult = checkTargetMatchPredicate(Inst)) != Match_Success) {
      DEBUG_WITH_TYPE("asm-matcher",
                      dbgs() << "Target match predicate failed with diag code "
                             << MatchResult << "\n");
      Inst.clear();
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    std::string Info;
    if (!getParser().getTargetParser().getTargetOptions().MCNoDeprecatedWarn &&
        MII.getDeprecatedInfo(Inst, getSTI(), Info)) {
      SMLoc Loc = ((PPCOperand &)*Operands[0]).getStartLoc();
      getParser().Warning(Loc, Info, None);
    }
    if (!checkAsmTiedOperandConstraints(*this, it->ConvertFn, Operands, ErrorInfo))
      return Match_InvalidTiedOperand;

    DEBUG_WITH_TYPE(
        "asm-matcher",
        dbgs() << "Opcode result: complete match, selecting this opcode\n");
    return Match_Success;
  }

  // Okay, we had no match.  Try to return a useful error code.
  if (HadMatchOtherThanPredicate || !HadMatchOtherThanFeatures)
    return RetCode;

  ErrorInfo = 0;
  return Match_MissingFeature;
}

#endif // GET_MATCHER_IMPLEMENTATION


#ifdef GET_MNEMONIC_SPELL_CHECKER
#undef GET_MNEMONIC_SPELL_CHECKER

static std::string PPCMnemonicSpellCheck(StringRef S, const FeatureBitset &FBS, unsigned VariantID) {
  const unsigned MaxEditDist = 2;
  std::vector<StringRef> Candidates;
  StringRef Prev = "";

  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }

  for (auto I = Start; I < End; I++) {
    // Ignore unsupported instructions.
    const FeatureBitset &RequiredFeatures = FeatureBitsets[I->RequiredFeaturesIdx];
    if ((FBS & RequiredFeatures) != RequiredFeatures)
      continue;

    StringRef T = I->getMnemonic();
    // Avoid recomputing the edit distance for the same string.
    if (T.equals(Prev))
      continue;

    Prev = T;
    unsigned Dist = S.edit_distance(T, false, MaxEditDist);
    if (Dist <= MaxEditDist)
      Candidates.push_back(T);
  }

  if (Candidates.empty())
    return "";

  std::string Res = ", did you mean: ";
  unsigned i = 0;
  for (; i < Candidates.size() - 1; i++)
    Res += Candidates[i].str() + ", ";
  return Res + Candidates[i].str() + "?";
}

#endif // GET_MNEMONIC_SPELL_CHECKER


#ifdef GET_MNEMONIC_CHECKER
#undef GET_MNEMONIC_CHECKER

static bool PPCCheckMnemonic(StringRef Mnemonic,
                                const FeatureBitset &AvailableFeatures,
                                unsigned VariantID) {
  // Process all MnemonicAliases to remap the mnemonic.
  applyMnemonicAliases(Mnemonic, AvailableFeatures, VariantID);

  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }

  // Search the table.
  auto MnemonicRange = std::equal_range(Start, End, Mnemonic, LessOpcode());

  if (MnemonicRange.first == MnemonicRange.second)
    return false;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    const FeatureBitset &RequiredFeatures =
      FeatureBitsets[it->RequiredFeaturesIdx];
    if ((AvailableFeatures & RequiredFeatures) == RequiredFeatures)
      return true;
  }
  return false;
}

#endif // GET_MNEMONIC_CHECKER

