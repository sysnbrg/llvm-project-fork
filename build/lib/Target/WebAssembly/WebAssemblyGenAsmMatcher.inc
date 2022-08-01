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
  Feature_HasSIMD128Bit = 8,
  Feature_HasRelaxedSIMDBit = 7,
  Feature_HasAtomicsBit = 0,
  Feature_HasMultivalueBit = 4,
  Feature_HasNontrappingFPToIntBit = 5,
  Feature_NotHasNontrappingFPToIntBit = 11,
  Feature_HasSignExtBit = 9,
  Feature_HasTailCallBit = 10,
  Feature_HasExceptionHandlingBit = 2,
  Feature_HasBulkMemoryBit = 1,
  Feature_HasReferenceTypesBit = 6,
  Feature_HasExtendedConstBit = 3,
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_HasSIMD128Bit: return "simd128";
  case Feature_HasRelaxedSIMDBit: return "relaxed-simd";
  case Feature_HasAtomicsBit: return "atomics";
  case Feature_HasMultivalueBit: return "multivalue";
  case Feature_HasNontrappingFPToIntBit: return "nontrapping-fptoint";
  case Feature_NotHasNontrappingFPToIntBit: return "nontrapping-fptoint";
  case Feature_HasSignExtBit: return "sign-ext";
  case Feature_HasTailCallBit: return "tail-call";
  case Feature_HasExceptionHandlingBit: return "exception-handling";
  case Feature_HasBulkMemoryBit: return "bulk-memory";
  case Feature_HasReferenceTypesBit: return "reference-types";
  case Feature_HasExtendedConstBit: return "extended-const";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

static const uint8_t TiedAsmOperandTable[][3] = { /* empty  */ {0, 0, 0} };

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_imm_95_0,
  CVT_95_addImmOperands,
  CVT_95_addBrListOperands,
  CVT_95_addFPImmf32Operands,
  CVT_95_addFPImmf64Operands,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__imm_95_0,
  Convert__Imm1_0,
  Convert__BrList1_0,
  Convert__Imm1_0__Imm1_1,
  Convert_NoOperands,
  Convert__imm_95_0__imm_95_0,
  Convert__FPImmf321_0,
  Convert__Imm1_1__Imm1_0,
  Convert__FPImmf641_0,
  Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7__Imm1_8__Imm1_9__Imm1_10__Imm1_11__Imm1_12__Imm1_13__Imm1_14__Imm1_15,
  Convert__FPImmf641_0__FPImmf641_1,
  Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3,
  Convert__FPImmf321_0__FPImmf321_1__FPImmf321_2__FPImmf321_3,
  Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7,
  Convert__Imm1_1__Imm1_0__Imm1_2,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][33] = {
  // Convert__imm_95_0
  { CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__BrList1_0
  { CVT_95_addBrListOperands, 1, CVT_Done },
  // Convert__Imm1_0__Imm1_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__imm_95_0__imm_95_0
  { CVT_imm_95_0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__FPImmf321_0
  { CVT_95_addFPImmf32Operands, 1, CVT_Done },
  // Convert__Imm1_1__Imm1_0
  { CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__FPImmf641_0
  { CVT_95_addFPImmf64Operands, 1, CVT_Done },
  // Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7__Imm1_8__Imm1_9__Imm1_10__Imm1_11__Imm1_12__Imm1_13__Imm1_14__Imm1_15
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_95_addImmOperands, 7, CVT_95_addImmOperands, 8, CVT_95_addImmOperands, 9, CVT_95_addImmOperands, 10, CVT_95_addImmOperands, 11, CVT_95_addImmOperands, 12, CVT_95_addImmOperands, 13, CVT_95_addImmOperands, 14, CVT_95_addImmOperands, 15, CVT_95_addImmOperands, 16, CVT_Done },
  // Convert__FPImmf641_0__FPImmf641_1
  { CVT_95_addFPImmf64Operands, 1, CVT_95_addFPImmf64Operands, 2, CVT_Done },
  // Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FPImmf321_0__FPImmf321_1__FPImmf321_2__FPImmf321_3
  { CVT_95_addFPImmf32Operands, 1, CVT_95_addFPImmf32Operands, 2, CVT_95_addFPImmf32Operands, 3, CVT_95_addFPImmf32Operands, 4, CVT_Done },
  // Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_95_addImmOperands, 7, CVT_95_addImmOperands, 8, CVT_Done },
  // Convert__Imm1_1__Imm1_0__Imm1_2
  { CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 3, CVT_Done },
};

void WebAssemblyAsmParser::
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
      static_cast<WebAssemblyOperand &>(*Operands[OpIdx]).addRegOperands(Inst, 1);
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
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_95_addImmOperands:
      static_cast<WebAssemblyOperand &>(*Operands[OpIdx]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addBrListOperands:
      static_cast<WebAssemblyOperand &>(*Operands[OpIdx]).addBrListOperands(Inst, 1);
      break;
    case CVT_95_addFPImmf32Operands:
      static_cast<WebAssemblyOperand &>(*Operands[OpIdx]).addFPImmf32Operands(Inst, 1);
      break;
    case CVT_95_addFPImmf64Operands:
      static_cast<WebAssemblyOperand &>(*Operands[OpIdx]).addFPImmf64Operands(Inst, 1);
      break;
    }
  }
}

void WebAssemblyAsmParser::
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
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBrListOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addFPImmf32Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addFPImmf64Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
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
  MCK_LAST_TOKEN = OptionalMatchClass,
  MCK_EXTERNREF, // register class 'EXTERNREF'
  MCK_F32, // register class 'F32'
  MCK_F64, // register class 'F64'
  MCK_FUNCREF, // register class 'FUNCREF'
  MCK_V128, // register class 'V128'
  MCK_I32, // register class 'I32'
  MCK_I64, // register class 'I64'
  MCK_LAST_REGISTER = MCK_I64,
  MCK_BrList, // user defined class 'BrListAsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_FPImmf32, // user defined class 'anonymous_3906'
  MCK_FPImmf64, // user defined class 'anonymous_3907'
  NumMatchClassKinds
};

} // end anonymous namespace

static unsigned getDiagKindFromRegisterClass(MatchClassKind RegisterClass) {
  return MCTargetAsmParser::Match_InvalidOperand;
}

static MatchClassKind matchTokenString(StringRef Name) {
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  return false;
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  WebAssemblyOperand &Operand = (WebAssemblyOperand &)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken() && Kind <= MCK_LAST_TOKEN)
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  switch (Kind) {
  default: break;
  // 'BrList' class
  case MCK_BrList: {
    DiagnosticPredicate DP(Operand.isBrList());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'Imm' class
  case MCK_Imm: {
    DiagnosticPredicate DP(Operand.isImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'FPImmf32' class
  case MCK_FPImmf32: {
    DiagnosticPredicate DP(Operand.isFPImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'FPImmf64' class
  case MCK_FPImmf64: {
    DiagnosticPredicate DP(Operand.isFPImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  } // end switch (Kind)

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case WebAssembly::FP32: OpKind = MCK_I32; break;
    case WebAssembly::FP64: OpKind = MCK_I64; break;
    case WebAssembly::SP32: OpKind = MCK_I32; break;
    case WebAssembly::SP64: OpKind = MCK_I64; break;
    case WebAssembly::I32_0: OpKind = MCK_I32; break;
    case WebAssembly::I64_0: OpKind = MCK_I64; break;
    case WebAssembly::F32_0: OpKind = MCK_F32; break;
    case WebAssembly::F64_0: OpKind = MCK_F64; break;
    case WebAssembly::V128_0: OpKind = MCK_V128; break;
    case WebAssembly::FUNCREF_0: OpKind = MCK_FUNCREF; break;
    case WebAssembly::EXTERNREF_0: OpKind = MCK_EXTERNREF; break;
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
  case MCK_EXTERNREF: return "MCK_EXTERNREF";
  case MCK_F32: return "MCK_F32";
  case MCK_F64: return "MCK_F64";
  case MCK_FUNCREF: return "MCK_FUNCREF";
  case MCK_V128: return "MCK_V128";
  case MCK_I32: return "MCK_I32";
  case MCK_I64: return "MCK_I64";
  case MCK_BrList: return "MCK_BrList";
  case MCK_Imm: return "MCK_Imm";
  case MCK_FPImmf32: return "MCK_FPImmf32";
  case MCK_FPImmf64: return "MCK_FPImmf64";
  case NumMatchClassKinds: return "NumMatchClassKinds";
  }
  llvm_unreachable("unhandled MatchClassKind!");
}

#endif // NDEBUG
FeatureBitset WebAssemblyAsmParser::
ComputeAvailableFeatures(const FeatureBitset &FB) const {
  FeatureBitset Features;
  if (FB[WebAssembly::FeatureSIMD128])
    Features.set(Feature_HasSIMD128Bit);
  if (FB[WebAssembly::FeatureRelaxedSIMD])
    Features.set(Feature_HasRelaxedSIMDBit);
  if (FB[WebAssembly::FeatureAtomics])
    Features.set(Feature_HasAtomicsBit);
  if (FB[WebAssembly::FeatureMultivalue])
    Features.set(Feature_HasMultivalueBit);
  if (FB[WebAssembly::FeatureNontrappingFPToInt])
    Features.set(Feature_HasNontrappingFPToIntBit);
  if (!FB[WebAssembly::FeatureNontrappingFPToInt])
    Features.set(Feature_NotHasNontrappingFPToIntBit);
  if (FB[WebAssembly::FeatureSignExt])
    Features.set(Feature_HasSignExtBit);
  if (FB[WebAssembly::FeatureTailCall])
    Features.set(Feature_HasTailCallBit);
  if (FB[WebAssembly::FeatureExceptionHandling])
    Features.set(Feature_HasExceptionHandlingBit);
  if (FB[WebAssembly::FeatureBulkMemory])
    Features.set(Feature_HasBulkMemoryBit);
  if (FB[WebAssembly::FeatureReferenceTypes])
    Features.set(Feature_HasReferenceTypesBit);
  if (FB[WebAssembly::FeatureExtendedConst])
    Features.set(Feature_HasExtendedConstBit);
  return Features;
}

static bool checkAsmTiedOperandConstraints(const WebAssemblyAsmParser&AsmParser,
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
    "\014atomic.fence\005block\002br\005br_if\010br_table\004call\015call_in"
    "direct\013call_params\014call_results\005catch\tcatch_all\010catchret\n"
    "cleanupret\016compiler_fence\tdata.drop\010delegate\004drop\004else\003"
    "end\tend_block\014end_function\006end_if\010end_loop\007end_try\020exte"
    "rnref.select\007f32.abs\007f32.add\010f32.ceil\tf32.const\021f32.conver"
    "t_i32_s\021f32.convert_i32_u\021f32.convert_i64_s\021f32.convert_i64_u\014"
    "f32.copysign\016f32.demote_f64\007f32.div\006f32.eq\tf32.floor\006f32.g"
    "e\006f32.gt\006f32.le\010f32.load\006f32.lt\007f32.max\007f32.min\007f3"
    "2.mul\006f32.ne\013f32.nearest\007f32.neg\023f32.reinterpret_i32\nf32.s"
    "elect\010f32.sqrt\tf32.store\007f32.sub\tf32.trunc\tf32x4.abs\tf32x4.ad"
    "d\nf32x4.ceil\025f32x4.convert_i32x4_s\025f32x4.convert_i32x4_u\027f32x"
    "4.demote_f64x2_zero\tf32x4.div\010f32x4.eq\022f32x4.extract_lane\013f32"
    "x4.floor\010f32x4.ge\010f32x4.gt\010f32x4.le\010f32x4.lt\tf32x4.max\tf3"
    "2x4.min\tf32x4.mul\010f32x4.ne\015f32x4.nearest\tf32x4.neg\nf32x4.pmax\n"
    "f32x4.pmin\021f32x4.relaxed_fma\021f32x4.relaxed_fms\021f32x4.relaxed_m"
    "ax\021f32x4.relaxed_min\022f32x4.replace_lane\013f32x4.splat\nf32x4.sqr"
    "t\tf32x4.sub\013f32x4.trunc\007f64.abs\007f64.add\010f64.ceil\tf64.cons"
    "t\021f64.convert_i32_s\021f64.convert_i32_u\021f64.convert_i64_s\021f64"
    ".convert_i64_u\014f64.copysign\007f64.div\006f64.eq\tf64.floor\006f64.g"
    "e\006f64.gt\006f64.le\010f64.load\006f64.lt\007f64.max\007f64.min\007f6"
    "4.mul\006f64.ne\013f64.nearest\007f64.neg\017f64.promote_f32\023f64.rei"
    "nterpret_i64\nf64.select\010f64.sqrt\tf64.store\007f64.sub\tf64.trunc\t"
    "f64x2.abs\tf64x2.add\nf64x2.ceil\031f64x2.convert_low_i32x4_s\031f64x2."
    "convert_low_i32x4_u\tf64x2.div\010f64x2.eq\022f64x2.extract_lane\013f64"
    "x2.floor\010f64x2.ge\010f64x2.gt\010f64x2.le\010f64x2.lt\tf64x2.max\tf6"
    "4x2.min\tf64x2.mul\010f64x2.ne\015f64x2.nearest\tf64x2.neg\nf64x2.pmax\n"
    "f64x2.pmin\027f64x2.promote_low_f32x4\021f64x2.relaxed_fma\021f64x2.rel"
    "axed_fms\021f64x2.relaxed_max\021f64x2.relaxed_min\022f64x2.replace_lan"
    "e\013f64x2.splat\nf64x2.sqrt\tf64x2.sub\013f64x2.trunc\016funcref.selec"
    "t\nglobal.get\nglobal.set\ti16x8.abs\ti16x8.add\017i16x8.add_sat_s\017i"
    "16x8.add_sat_u\016i16x8.all_true\014i16x8.avgr_u\015i16x8.bitmask\027i1"
    "6x8.dot_i8x16_i7x16_s\010i16x8.eq\035i16x8.extadd_pairwise_i8x16_s\035i"
    "16x8.extadd_pairwise_i8x16_u\031i16x8.extend_high_i8x16_s\031i16x8.exte"
    "nd_high_i8x16_u\030i16x8.extend_low_i8x16_s\030i16x8.extend_low_i8x16_u"
    "\031i16x8.extmul_high_i8x16_s\031i16x8.extmul_high_i8x16_u\030i16x8.ext"
    "mul_low_i8x16_s\030i16x8.extmul_low_i8x16_u\024i16x8.extract_lane_s\024"
    "i16x8.extract_lane_u\ni16x8.ge_s\ni16x8.ge_u\ni16x8.gt_s\ni16x8.gt_u\ni"
    "16x8.le_s\ni16x8.le_u\017i16x8.load8x8_s\017i16x8.load8x8_u\ni16x8.lt_s"
    "\ni16x8.lt_u\013i16x8.max_s\013i16x8.max_u\013i16x8.min_s\013i16x8.min_"
    "u\ti16x8.mul\024i16x8.narrow_i32x4_s\024i16x8.narrow_i32x4_u\010i16x8.n"
    "e\ti16x8.neg\023i16x8.q15mulr_sat_s\030i16x8.relaxed_laneselect\027i16x"
    "8.relaxed_q15mulr_s\022i16x8.replace_lane\ti16x8.shl\013i16x8.shr_s\013"
    "i16x8.shr_u\013i16x8.splat\ti16x8.sub\017i16x8.sub_sat_s\017i16x8.sub_s"
    "at_u\007i32.add\007i32.and\017i32.atomic.load\023i32.atomic.load16_u\022"
    "i32.atomic.load8_u\022i32.atomic.rmw.add\022i32.atomic.rmw.and\026i32.a"
    "tomic.rmw.cmpxchg\021i32.atomic.rmw.or\022i32.atomic.rmw.sub\023i32.ato"
    "mic.rmw.xchg\022i32.atomic.rmw.xor\026i32.atomic.rmw16.add_u\026i32.ato"
    "mic.rmw16.and_u\032i32.atomic.rmw16.cmpxchg_u\025i32.atomic.rmw16.or_u\026"
    "i32.atomic.rmw16.sub_u\027i32.atomic.rmw16.xchg_u\026i32.atomic.rmw16.x"
    "or_u\025i32.atomic.rmw8.add_u\025i32.atomic.rmw8.and_u\031i32.atomic.rm"
    "w8.cmpxchg_u\024i32.atomic.rmw8.or_u\025i32.atomic.rmw8.sub_u\026i32.at"
    "omic.rmw8.xchg_u\025i32.atomic.rmw8.xor_u\020i32.atomic.store\022i32.at"
    "omic.store16\021i32.atomic.store8\007i32.clz\ti32.const\007i32.ctz\ti32"
    ".div_s\ti32.div_u\006i32.eq\007i32.eqz\016i32.extend16_s\015i32.extend8"
    "_s\010i32.ge_s\010i32.ge_u\010i32.gt_s\010i32.gt_u\010i32.le_s\010i32.l"
    "e_u\010i32.load\014i32.load16_s\014i32.load16_u\013i32.load8_s\013i32.l"
    "oad8_u\010i32.lt_s\010i32.lt_u\007i32.mul\006i32.ne\006i32.or\ni32.popc"
    "nt\023i32.reinterpret_f32\ti32.rem_s\ti32.rem_u\010i32.rotl\010i32.rotr"
    "\ni32.select\007i32.shl\ti32.shr_s\ti32.shr_u\ti32.store\013i32.store16"
    "\ni32.store8\007i32.sub\017i32.trunc_f32_s\017i32.trunc_f32_u\017i32.tr"
    "unc_f64_s\017i32.trunc_f64_u\023i32.trunc_sat_f32_s\023i32.trunc_sat_f3"
    "2_u\023i32.trunc_sat_f64_s\023i32.trunc_sat_f64_u\014i32.wrap_i64\007i3"
    "2.xor\ti32x4.abs\ti32x4.add\016i32x4.all_true\015i32x4.bitmask\021i32x4"
    ".dot_i16x8_s\033i32x4.dot_i8x16_i7x16_add_s\010i32x4.eq\035i32x4.extadd"
    "_pairwise_i16x8_s\035i32x4.extadd_pairwise_i16x8_u\031i32x4.extend_high"
    "_i16x8_s\031i32x4.extend_high_i16x8_u\030i32x4.extend_low_i16x8_s\030i3"
    "2x4.extend_low_i16x8_u\031i32x4.extmul_high_i16x8_s\031i32x4.extmul_hig"
    "h_i16x8_u\030i32x4.extmul_low_i16x8_s\030i32x4.extmul_low_i16x8_u\022i3"
    "2x4.extract_lane\ni32x4.ge_s\ni32x4.ge_u\ni32x4.gt_s\ni32x4.gt_u\ni32x4"
    ".le_s\ni32x4.le_u\020i32x4.load16x4_s\020i32x4.load16x4_u\ni32x4.lt_s\n"
    "i32x4.lt_u\013i32x4.max_s\013i32x4.max_u\013i32x4.min_s\013i32x4.min_u\t"
    "i32x4.mul\010i32x4.ne\ti32x4.neg\030i32x4.relaxed_laneselect\033i32x4.r"
    "elaxed_trunc_f32x4_s\033i32x4.relaxed_trunc_f32x4_u i32x4.relaxed_trunc"
    "_f64x2_s_zero i32x4.relaxed_trunc_f64x2_u_zero\022i32x4.replace_lane\ti"
    "32x4.shl\013i32x4.shr_s\013i32x4.shr_u\013i32x4.splat\ti32x4.sub\027i32"
    "x4.trunc_sat_f32x4_s\027i32x4.trunc_sat_f32x4_u\034i32x4.trunc_sat_f64x"
    "2_s_zero\034i32x4.trunc_sat_f64x2_u_zero\007i64.add\007i64.and\017i64.a"
    "tomic.load\023i64.atomic.load16_u\023i64.atomic.load32_u\022i64.atomic."
    "load8_u\022i64.atomic.rmw.add\022i64.atomic.rmw.and\026i64.atomic.rmw.c"
    "mpxchg\021i64.atomic.rmw.or\022i64.atomic.rmw.sub\023i64.atomic.rmw.xch"
    "g\022i64.atomic.rmw.xor\026i64.atomic.rmw16.add_u\026i64.atomic.rmw16.a"
    "nd_u\032i64.atomic.rmw16.cmpxchg_u\025i64.atomic.rmw16.or_u\026i64.atom"
    "ic.rmw16.sub_u\027i64.atomic.rmw16.xchg_u\026i64.atomic.rmw16.xor_u\026"
    "i64.atomic.rmw32.add_u\026i64.atomic.rmw32.and_u\032i64.atomic.rmw32.cm"
    "pxchg_u\025i64.atomic.rmw32.or_u\026i64.atomic.rmw32.sub_u\027i64.atomi"
    "c.rmw32.xchg_u\026i64.atomic.rmw32.xor_u\025i64.atomic.rmw8.add_u\025i6"
    "4.atomic.rmw8.and_u\031i64.atomic.rmw8.cmpxchg_u\024i64.atomic.rmw8.or_"
    "u\025i64.atomic.rmw8.sub_u\026i64.atomic.rmw8.xchg_u\025i64.atomic.rmw8"
    ".xor_u\020i64.atomic.store\022i64.atomic.store16\022i64.atomic.store32\021"
    "i64.atomic.store8\007i64.clz\ti64.const\007i64.ctz\ti64.div_s\ti64.div_"
    "u\006i64.eq\007i64.eqz\016i64.extend16_s\016i64.extend32_s\015i64.exten"
    "d8_s\020i64.extend_i32_s\020i64.extend_i32_u\010i64.ge_s\010i64.ge_u\010"
    "i64.gt_s\010i64.gt_u\010i64.le_s\010i64.le_u\010i64.load\014i64.load16_"
    "s\014i64.load16_u\014i64.load32_s\014i64.load32_u\013i64.load8_s\013i64"
    ".load8_u\010i64.lt_s\010i64.lt_u\007i64.mul\006i64.ne\006i64.or\ni64.po"
    "pcnt\023i64.reinterpret_f64\ti64.rem_s\ti64.rem_u\010i64.rotl\010i64.ro"
    "tr\ni64.select\007i64.shl\ti64.shr_s\ti64.shr_u\ti64.store\013i64.store"
    "16\013i64.store32\ni64.store8\007i64.sub\017i64.trunc_f32_s\017i64.trun"
    "c_f32_u\017i64.trunc_f64_s\017i64.trunc_f64_u\023i64.trunc_sat_f32_s\023"
    "i64.trunc_sat_f32_u\023i64.trunc_sat_f64_s\023i64.trunc_sat_f64_u\007i6"
    "4.xor\ti64x2.abs\ti64x2.add\016i64x2.all_true\015i64x2.bitmask\010i64x2"
    ".eq\031i64x2.extend_high_i32x4_s\031i64x2.extend_high_i32x4_u\030i64x2."
    "extend_low_i32x4_s\030i64x2.extend_low_i32x4_u\031i64x2.extmul_high_i32"
    "x4_s\031i64x2.extmul_high_i32x4_u\030i64x2.extmul_low_i32x4_s\030i64x2."
    "extmul_low_i32x4_u\022i64x2.extract_lane\ni64x2.ge_s\ni64x2.gt_s\ni64x2"
    ".le_s\020i64x2.load32x2_s\020i64x2.load32x2_u\ni64x2.lt_s\ti64x2.mul\010"
    "i64x2.ne\ti64x2.neg\030i64x2.relaxed_laneselect\022i64x2.replace_lane\t"
    "i64x2.shl\013i64x2.shr_s\013i64x2.shr_u\013i64x2.splat\ti64x2.sub\ti8x1"
    "6.abs\ti8x16.add\017i8x16.add_sat_s\017i8x16.add_sat_u\016i8x16.all_tru"
    "e\014i8x16.avgr_u\015i8x16.bitmask\010i8x16.eq\024i8x16.extract_lane_s\024"
    "i8x16.extract_lane_u\ni8x16.ge_s\ni8x16.ge_u\ni8x16.gt_s\ni8x16.gt_u\ni"
    "8x16.le_s\ni8x16.le_u\ni8x16.lt_s\ni8x16.lt_u\013i8x16.max_s\013i8x16.m"
    "ax_u\013i8x16.min_s\013i8x16.min_u\024i8x16.narrow_i16x8_s\024i8x16.nar"
    "row_i16x8_u\010i8x16.ne\ti8x16.neg\014i8x16.popcnt\030i8x16.relaxed_lan"
    "eselect\025i8x16.relaxed_swizzle\022i8x16.replace_lane\ti8x16.shl\013i8"
    "x16.shr_s\013i8x16.shr_u\015i8x16.shuffle\013i8x16.splat\ti8x16.sub\017"
    "i8x16.sub_sat_s\017i8x16.sub_sat_u\015i8x16.swizzle\002if\tlocal.get\tl"
    "ocal.set\tlocal.tee\004loop\024memory.atomic.notify\024memory.atomic.wa"
    "it32\024memory.atomic.wait64\013memory.copy\013memory.fill\013memory.gr"
    "ow\013memory.init\013memory.size\003nop\013ref.is_null\017ref.null_exte"
    "rn\015ref.null_func\007rethrow\006return\013return_call\024return_call_"
    "indirect\023return_call_results\ntable.copy\ntable.fill\ttable.get\ntab"
    "le.grow\ttable.set\ntable.size\005throw\003try\013unreachable\010v128.a"
    "nd\013v128.andnot\015v128.any_true\016v128.bitselect\nv128.const\tv128."
    "load\020v128.load16_lane\021v128.load16_splat\020v128.load32_lane\021v1"
    "28.load32_splat\020v128.load32_zero\020v128.load64_lane\021v128.load64_"
    "splat\020v128.load64_zero\017v128.load8_lane\020v128.load8_splat\010v12"
    "8.not\007v128.or\013v128.select\nv128.store\021v128.store16_lane\021v12"
    "8.store32_lane\021v128.store64_lane\020v128.store8_lane\010v128.xor";

// Feature bitsets.
enum : uint8_t {
  AMFBS_None,
  AMFBS_HasAtomics,
  AMFBS_HasBulkMemory,
  AMFBS_HasExceptionHandling,
  AMFBS_HasNontrappingFPToInt,
  AMFBS_HasReferenceTypes,
  AMFBS_HasRelaxedSIMD,
  AMFBS_HasSIMD128,
  AMFBS_HasSignExt,
  AMFBS_HasTailCall,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // AMFBS_None
  {Feature_HasAtomicsBit, },
  {Feature_HasBulkMemoryBit, },
  {Feature_HasExceptionHandlingBit, },
  {Feature_HasNontrappingFPToIntBit, },
  {Feature_HasReferenceTypesBit, },
  {Feature_HasRelaxedSIMDBit, },
  {Feature_HasSIMD128Bit, },
  {Feature_HasSignExtBit, },
  {Feature_HasTailCallBit, },
};

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint8_t ConvertFn;
    uint8_t RequiredFeaturesIdx;
    uint8_t Classes[16];
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
  { 0 /* atomic.fence */, WebAssembly::ATOMIC_FENCE_S, Convert__imm_95_0, AMFBS_HasAtomics, {  }, },
  { 13 /* block */, WebAssembly::BLOCK_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 19 /* br */, WebAssembly::BR_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 22 /* br_if */, WebAssembly::BR_IF_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 28 /* br_table */, WebAssembly::BR_TABLE_I32_S, Convert__BrList1_0, AMFBS_None, { MCK_BrList }, },
  { 28 /* br_table */, WebAssembly::BR_TABLE_I64_S, Convert__BrList1_0, AMFBS_None, { MCK_BrList }, },
  { 37 /* call */, WebAssembly::CALL_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 42 /* call_indirect */, WebAssembly::CALL_INDIRECT_S, Convert__Imm1_0__Imm1_1, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 56 /* call_params */, WebAssembly::CALL_PARAMS_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 68 /* call_results */, WebAssembly::CALL_RESULTS_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 81 /* catch */, WebAssembly::CATCH_S, Convert__Imm1_0, AMFBS_HasExceptionHandling, { MCK_Imm }, },
  { 87 /* catch_all */, WebAssembly::CATCH_ALL_S, Convert_NoOperands, AMFBS_HasExceptionHandling, {  }, },
  { 97 /* catchret */, WebAssembly::CATCHRET_S, Convert__imm_95_0__imm_95_0, AMFBS_HasExceptionHandling, {  }, },
  { 106 /* cleanupret */, WebAssembly::CLEANUPRET_S, Convert_NoOperands, AMFBS_HasExceptionHandling, {  }, },
  { 117 /* compiler_fence */, WebAssembly::COMPILER_FENCE_S, Convert_NoOperands, AMFBS_HasAtomics, {  }, },
  { 132 /* data.drop */, WebAssembly::anonymous_6225DATA_DROP_S, Convert__Imm1_0, AMFBS_HasBulkMemory, { MCK_Imm }, },
  { 132 /* data.drop */, WebAssembly::anonymous_6226DATA_DROP_S, Convert__Imm1_0, AMFBS_HasBulkMemory, { MCK_Imm }, },
  { 142 /* delegate */, WebAssembly::DELEGATE_S, Convert__Imm1_0, AMFBS_HasExceptionHandling, { MCK_Imm }, },
  { 151 /* drop */, WebAssembly::DROP_EXTERNREF_S, Convert_NoOperands, AMFBS_HasReferenceTypes, {  }, },
  { 151 /* drop */, WebAssembly::DROP_FUNCREF_S, Convert_NoOperands, AMFBS_HasReferenceTypes, {  }, },
  { 151 /* drop */, WebAssembly::DROP_V128_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 151 /* drop */, WebAssembly::DROP_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 151 /* drop */, WebAssembly::DROP_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 151 /* drop */, WebAssembly::DROP_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 151 /* drop */, WebAssembly::DROP_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 156 /* else */, WebAssembly::ELSE_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 161 /* end */, WebAssembly::END_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 165 /* end_block */, WebAssembly::END_BLOCK_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 175 /* end_function */, WebAssembly::END_FUNCTION_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 188 /* end_if */, WebAssembly::END_IF_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 195 /* end_loop */, WebAssembly::END_LOOP_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 204 /* end_try */, WebAssembly::END_TRY_S, Convert_NoOperands, AMFBS_HasExceptionHandling, {  }, },
  { 212 /* externref.select */, WebAssembly::SELECT_EXTERNREF_S, Convert_NoOperands, AMFBS_HasReferenceTypes, {  }, },
  { 229 /* f32.abs */, WebAssembly::ABS_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 237 /* f32.add */, WebAssembly::ADD_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 245 /* f32.ceil */, WebAssembly::CEIL_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 254 /* f32.const */, WebAssembly::CONST_F32_S, Convert__FPImmf321_0, AMFBS_None, { MCK_FPImmf32 }, },
  { 264 /* f32.convert_i32_s */, WebAssembly::F32_CONVERT_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 282 /* f32.convert_i32_u */, WebAssembly::F32_CONVERT_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 300 /* f32.convert_i64_s */, WebAssembly::F32_CONVERT_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 318 /* f32.convert_i64_u */, WebAssembly::F32_CONVERT_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 336 /* f32.copysign */, WebAssembly::COPYSIGN_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 349 /* f32.demote_f64 */, WebAssembly::F32_DEMOTE_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 364 /* f32.div */, WebAssembly::DIV_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 372 /* f32.eq */, WebAssembly::EQ_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 379 /* f32.floor */, WebAssembly::FLOOR_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 389 /* f32.ge */, WebAssembly::GE_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 396 /* f32.gt */, WebAssembly::GT_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 403 /* f32.le */, WebAssembly::LE_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 410 /* f32.load */, WebAssembly::LOAD_F32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 410 /* f32.load */, WebAssembly::LOAD_F32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 419 /* f32.lt */, WebAssembly::LT_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 426 /* f32.max */, WebAssembly::MAX_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 434 /* f32.min */, WebAssembly::MIN_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 442 /* f32.mul */, WebAssembly::MUL_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 450 /* f32.ne */, WebAssembly::NE_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 457 /* f32.nearest */, WebAssembly::NEAREST_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 469 /* f32.neg */, WebAssembly::NEG_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 477 /* f32.reinterpret_i32 */, WebAssembly::F32_REINTERPRET_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 497 /* f32.select */, WebAssembly::SELECT_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 508 /* f32.sqrt */, WebAssembly::SQRT_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 517 /* f32.store */, WebAssembly::STORE_F32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 517 /* f32.store */, WebAssembly::STORE_F32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 527 /* f32.sub */, WebAssembly::SUB_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 535 /* f32.trunc */, WebAssembly::TRUNC_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 545 /* f32x4.abs */, WebAssembly::ABS_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 555 /* f32x4.add */, WebAssembly::ADD_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 565 /* f32x4.ceil */, WebAssembly::CEIL_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 576 /* f32x4.convert_i32x4_s */, WebAssembly::sint_to_fp_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 598 /* f32x4.convert_i32x4_u */, WebAssembly::uint_to_fp_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 620 /* f32x4.demote_f64x2_zero */, WebAssembly::demote_zero_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 644 /* f32x4.div */, WebAssembly::DIV_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 654 /* f32x4.eq */, WebAssembly::EQ_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 663 /* f32x4.extract_lane */, WebAssembly::EXTRACT_LANE_F32x4_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 682 /* f32x4.floor */, WebAssembly::FLOOR_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 694 /* f32x4.ge */, WebAssembly::GE_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 703 /* f32x4.gt */, WebAssembly::GT_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 712 /* f32x4.le */, WebAssembly::LE_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 721 /* f32x4.lt */, WebAssembly::LT_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 730 /* f32x4.max */, WebAssembly::MAX_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 740 /* f32x4.min */, WebAssembly::MIN_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 750 /* f32x4.mul */, WebAssembly::MUL_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 760 /* f32x4.ne */, WebAssembly::NE_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 769 /* f32x4.nearest */, WebAssembly::NEAREST_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 783 /* f32x4.neg */, WebAssembly::NEG_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 793 /* f32x4.pmax */, WebAssembly::PMAX_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 804 /* f32x4.pmin */, WebAssembly::PMIN_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 815 /* f32x4.relaxed_fma */, WebAssembly::FMA_F32x4_S, Convert_NoOperands, AMFBS_HasRelaxedSIMD, {  }, },
  { 833 /* f32x4.relaxed_fms */, WebAssembly::FMS_F32x4_S, Convert_NoOperands, AMFBS_HasRelaxedSIMD, {  }, },
  { 851 /* f32x4.relaxed_max */, WebAssembly::SIMD_RELAXED_FMAX_F32x4_S, Convert_NoOperands, AMFBS_HasRelaxedSIMD, {  }, },
  { 869 /* f32x4.relaxed_min */, WebAssembly::SIMD_RELAXED_FMIN_F32x4_S, Convert_NoOperands, AMFBS_HasRelaxedSIMD, {  }, },
  { 887 /* f32x4.replace_lane */, WebAssembly::REPLACE_LANE_F32x4_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 906 /* f32x4.splat */, WebAssembly::SPLAT_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 918 /* f32x4.sqrt */, WebAssembly::SQRT_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 929 /* f32x4.sub */, WebAssembly::SUB_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 939 /* f32x4.trunc */, WebAssembly::TRUNC_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 951 /* f64.abs */, WebAssembly::ABS_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 959 /* f64.add */, WebAssembly::ADD_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 967 /* f64.ceil */, WebAssembly::CEIL_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 976 /* f64.const */, WebAssembly::CONST_F64_S, Convert__FPImmf641_0, AMFBS_None, { MCK_FPImmf64 }, },
  { 986 /* f64.convert_i32_s */, WebAssembly::F64_CONVERT_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1004 /* f64.convert_i32_u */, WebAssembly::F64_CONVERT_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1022 /* f64.convert_i64_s */, WebAssembly::F64_CONVERT_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1040 /* f64.convert_i64_u */, WebAssembly::F64_CONVERT_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1058 /* f64.copysign */, WebAssembly::COPYSIGN_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1071 /* f64.div */, WebAssembly::DIV_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1079 /* f64.eq */, WebAssembly::EQ_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1086 /* f64.floor */, WebAssembly::FLOOR_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1096 /* f64.ge */, WebAssembly::GE_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1103 /* f64.gt */, WebAssembly::GT_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1110 /* f64.le */, WebAssembly::LE_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1117 /* f64.load */, WebAssembly::LOAD_F64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 1117 /* f64.load */, WebAssembly::LOAD_F64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 1126 /* f64.lt */, WebAssembly::LT_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1133 /* f64.max */, WebAssembly::MAX_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1141 /* f64.min */, WebAssembly::MIN_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1149 /* f64.mul */, WebAssembly::MUL_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1157 /* f64.ne */, WebAssembly::NE_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1164 /* f64.nearest */, WebAssembly::NEAREST_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1176 /* f64.neg */, WebAssembly::NEG_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1184 /* f64.promote_f32 */, WebAssembly::F64_PROMOTE_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1200 /* f64.reinterpret_i64 */, WebAssembly::F64_REINTERPRET_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1220 /* f64.select */, WebAssembly::SELECT_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1231 /* f64.sqrt */, WebAssembly::SQRT_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1240 /* f64.store */, WebAssembly::STORE_F64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 1240 /* f64.store */, WebAssembly::STORE_F64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 1250 /* f64.sub */, WebAssembly::SUB_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1258 /* f64.trunc */, WebAssembly::TRUNC_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1268 /* f64x2.abs */, WebAssembly::ABS_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1278 /* f64x2.add */, WebAssembly::ADD_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1288 /* f64x2.ceil */, WebAssembly::CEIL_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1299 /* f64x2.convert_low_i32x4_s */, WebAssembly::convert_low_s_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1325 /* f64x2.convert_low_i32x4_u */, WebAssembly::convert_low_u_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1351 /* f64x2.div */, WebAssembly::DIV_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1361 /* f64x2.eq */, WebAssembly::EQ_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1370 /* f64x2.extract_lane */, WebAssembly::EXTRACT_LANE_F64x2_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 1389 /* f64x2.floor */, WebAssembly::FLOOR_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1401 /* f64x2.ge */, WebAssembly::GE_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1410 /* f64x2.gt */, WebAssembly::GT_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1419 /* f64x2.le */, WebAssembly::LE_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1428 /* f64x2.lt */, WebAssembly::LT_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1437 /* f64x2.max */, WebAssembly::MAX_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1447 /* f64x2.min */, WebAssembly::MIN_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1457 /* f64x2.mul */, WebAssembly::MUL_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1467 /* f64x2.ne */, WebAssembly::NE_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1476 /* f64x2.nearest */, WebAssembly::NEAREST_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1490 /* f64x2.neg */, WebAssembly::NEG_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1500 /* f64x2.pmax */, WebAssembly::PMAX_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1511 /* f64x2.pmin */, WebAssembly::PMIN_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1522 /* f64x2.promote_low_f32x4 */, WebAssembly::promote_low_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1546 /* f64x2.relaxed_fma */, WebAssembly::FMA_F64x2_S, Convert_NoOperands, AMFBS_HasRelaxedSIMD, {  }, },
  { 1564 /* f64x2.relaxed_fms */, WebAssembly::FMS_F64x2_S, Convert_NoOperands, AMFBS_HasRelaxedSIMD, {  }, },
  { 1582 /* f64x2.relaxed_max */, WebAssembly::SIMD_RELAXED_FMAX_F64x2_S, Convert_NoOperands, AMFBS_HasRelaxedSIMD, {  }, },
  { 1600 /* f64x2.relaxed_min */, WebAssembly::SIMD_RELAXED_FMIN_F64x2_S, Convert_NoOperands, AMFBS_HasRelaxedSIMD, {  }, },
  { 1618 /* f64x2.replace_lane */, WebAssembly::REPLACE_LANE_F64x2_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 1637 /* f64x2.splat */, WebAssembly::SPLAT_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1649 /* f64x2.sqrt */, WebAssembly::SQRT_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1660 /* f64x2.sub */, WebAssembly::SUB_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1670 /* f64x2.trunc */, WebAssembly::TRUNC_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1682 /* funcref.select */, WebAssembly::SELECT_FUNCREF_S, Convert_NoOperands, AMFBS_HasReferenceTypes, {  }, },
  { 1697 /* global.get */, WebAssembly::GLOBAL_GET_EXTERNREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 1697 /* global.get */, WebAssembly::GLOBAL_GET_FUNCREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 1697 /* global.get */, WebAssembly::GLOBAL_GET_V128_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 1697 /* global.get */, WebAssembly::GLOBAL_GET_F32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 1697 /* global.get */, WebAssembly::GLOBAL_GET_F64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 1697 /* global.get */, WebAssembly::GLOBAL_GET_I32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 1697 /* global.get */, WebAssembly::GLOBAL_GET_I64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 1708 /* global.set */, WebAssembly::GLOBAL_SET_EXTERNREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 1708 /* global.set */, WebAssembly::GLOBAL_SET_FUNCREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 1708 /* global.set */, WebAssembly::GLOBAL_SET_V128_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 1708 /* global.set */, WebAssembly::GLOBAL_SET_F32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 1708 /* global.set */, WebAssembly::GLOBAL_SET_F64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 1708 /* global.set */, WebAssembly::GLOBAL_SET_I32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 1708 /* global.set */, WebAssembly::GLOBAL_SET_I64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 1719 /* i16x8.abs */, WebAssembly::ABS_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1729 /* i16x8.add */, WebAssembly::ADD_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1739 /* i16x8.add_sat_s */, WebAssembly::ADD_SAT_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1755 /* i16x8.add_sat_u */, WebAssembly::ADD_SAT_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1771 /* i16x8.all_true */, WebAssembly::ALLTRUE_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1786 /* i16x8.avgr_u */, WebAssembly::AVGR_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1799 /* i16x8.bitmask */, WebAssembly::BITMASK_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1813 /* i16x8.dot_i8x16_i7x16_s */, WebAssembly::RELAXED_DOT_S, Convert_NoOperands, AMFBS_HasRelaxedSIMD, {  }, },
  { 1837 /* i16x8.eq */, WebAssembly::EQ_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1846 /* i16x8.extadd_pairwise_i8x16_s */, WebAssembly::int_wasm_extadd_pairwise_signed_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1876 /* i16x8.extadd_pairwise_i8x16_u */, WebAssembly::int_wasm_extadd_pairwise_unsigned_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1906 /* i16x8.extend_high_i8x16_s */, WebAssembly::extend_high_s_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1932 /* i16x8.extend_high_i8x16_u */, WebAssembly::extend_high_u_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1958 /* i16x8.extend_low_i8x16_s */, WebAssembly::extend_low_s_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1983 /* i16x8.extend_low_i8x16_u */, WebAssembly::extend_low_u_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2008 /* i16x8.extmul_high_i8x16_s */, WebAssembly::EXTMUL_HIGH_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2034 /* i16x8.extmul_high_i8x16_u */, WebAssembly::EXTMUL_HIGH_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2060 /* i16x8.extmul_low_i8x16_s */, WebAssembly::EXTMUL_LOW_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2085 /* i16x8.extmul_low_i8x16_u */, WebAssembly::EXTMUL_LOW_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2110 /* i16x8.extract_lane_s */, WebAssembly::EXTRACT_LANE_I16x8_s_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 2131 /* i16x8.extract_lane_u */, WebAssembly::EXTRACT_LANE_I16x8_u_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 2152 /* i16x8.ge_s */, WebAssembly::GE_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2163 /* i16x8.ge_u */, WebAssembly::GE_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2174 /* i16x8.gt_s */, WebAssembly::GT_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2185 /* i16x8.gt_u */, WebAssembly::GT_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2196 /* i16x8.le_s */, WebAssembly::LE_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2207 /* i16x8.le_u */, WebAssembly::LE_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2218 /* i16x8.load8x8_s */, WebAssembly::LOAD_EXTEND_S_I16x8_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 2218 /* i16x8.load8x8_s */, WebAssembly::LOAD_EXTEND_S_I16x8_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 2234 /* i16x8.load8x8_u */, WebAssembly::LOAD_EXTEND_U_I16x8_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 2234 /* i16x8.load8x8_u */, WebAssembly::LOAD_EXTEND_U_I16x8_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 2250 /* i16x8.lt_s */, WebAssembly::LT_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2261 /* i16x8.lt_u */, WebAssembly::LT_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2272 /* i16x8.max_s */, WebAssembly::MAX_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2284 /* i16x8.max_u */, WebAssembly::MAX_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2296 /* i16x8.min_s */, WebAssembly::MIN_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2308 /* i16x8.min_u */, WebAssembly::MIN_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2320 /* i16x8.mul */, WebAssembly::MUL_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2330 /* i16x8.narrow_i32x4_s */, WebAssembly::NARROW_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2351 /* i16x8.narrow_i32x4_u */, WebAssembly::NARROW_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2372 /* i16x8.ne */, WebAssembly::NE_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2381 /* i16x8.neg */, WebAssembly::NEG_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2391 /* i16x8.q15mulr_sat_s */, WebAssembly::Q15MULR_SAT_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2411 /* i16x8.relaxed_laneselect */, WebAssembly::LANESELECT_I16x8_S, Convert_NoOperands, AMFBS_HasRelaxedSIMD, {  }, },
  { 2436 /* i16x8.relaxed_q15mulr_s */, WebAssembly::RELAXED_Q15MULR_S_I16x8_S, Convert_NoOperands, AMFBS_HasRelaxedSIMD, {  }, },
  { 2460 /* i16x8.replace_lane */, WebAssembly::REPLACE_LANE_I16x8_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 2479 /* i16x8.shl */, WebAssembly::SHL_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2489 /* i16x8.shr_s */, WebAssembly::SHR_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2501 /* i16x8.shr_u */, WebAssembly::SHR_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2513 /* i16x8.splat */, WebAssembly::SPLAT_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2525 /* i16x8.sub */, WebAssembly::SUB_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2535 /* i16x8.sub_sat_s */, WebAssembly::SUB_SAT_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2551 /* i16x8.sub_sat_u */, WebAssembly::SUB_SAT_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2567 /* i32.add */, WebAssembly::ADD_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2575 /* i32.and */, WebAssembly::AND_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2583 /* i32.atomic.load */, WebAssembly::ATOMIC_LOAD_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2583 /* i32.atomic.load */, WebAssembly::ATOMIC_LOAD_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2599 /* i32.atomic.load16_u */, WebAssembly::ATOMIC_LOAD16_U_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2599 /* i32.atomic.load16_u */, WebAssembly::ATOMIC_LOAD16_U_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2619 /* i32.atomic.load8_u */, WebAssembly::ATOMIC_LOAD8_U_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2619 /* i32.atomic.load8_u */, WebAssembly::ATOMIC_LOAD8_U_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2638 /* i32.atomic.rmw.add */, WebAssembly::ATOMIC_RMW_ADD_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2638 /* i32.atomic.rmw.add */, WebAssembly::ATOMIC_RMW_ADD_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2657 /* i32.atomic.rmw.and */, WebAssembly::ATOMIC_RMW_AND_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2657 /* i32.atomic.rmw.and */, WebAssembly::ATOMIC_RMW_AND_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2676 /* i32.atomic.rmw.cmpxchg */, WebAssembly::ATOMIC_RMW_CMPXCHG_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2676 /* i32.atomic.rmw.cmpxchg */, WebAssembly::ATOMIC_RMW_CMPXCHG_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2699 /* i32.atomic.rmw.or */, WebAssembly::ATOMIC_RMW_OR_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2699 /* i32.atomic.rmw.or */, WebAssembly::ATOMIC_RMW_OR_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2717 /* i32.atomic.rmw.sub */, WebAssembly::ATOMIC_RMW_SUB_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2717 /* i32.atomic.rmw.sub */, WebAssembly::ATOMIC_RMW_SUB_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2736 /* i32.atomic.rmw.xchg */, WebAssembly::ATOMIC_RMW_XCHG_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2736 /* i32.atomic.rmw.xchg */, WebAssembly::ATOMIC_RMW_XCHG_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2756 /* i32.atomic.rmw.xor */, WebAssembly::ATOMIC_RMW_XOR_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2756 /* i32.atomic.rmw.xor */, WebAssembly::ATOMIC_RMW_XOR_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2775 /* i32.atomic.rmw16.add_u */, WebAssembly::ATOMIC_RMW16_U_ADD_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2775 /* i32.atomic.rmw16.add_u */, WebAssembly::ATOMIC_RMW16_U_ADD_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2798 /* i32.atomic.rmw16.and_u */, WebAssembly::ATOMIC_RMW16_U_AND_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2798 /* i32.atomic.rmw16.and_u */, WebAssembly::ATOMIC_RMW16_U_AND_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2821 /* i32.atomic.rmw16.cmpxchg_u */, WebAssembly::ATOMIC_RMW16_U_CMPXCHG_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2821 /* i32.atomic.rmw16.cmpxchg_u */, WebAssembly::ATOMIC_RMW16_U_CMPXCHG_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2848 /* i32.atomic.rmw16.or_u */, WebAssembly::ATOMIC_RMW16_U_OR_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2848 /* i32.atomic.rmw16.or_u */, WebAssembly::ATOMIC_RMW16_U_OR_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2870 /* i32.atomic.rmw16.sub_u */, WebAssembly::ATOMIC_RMW16_U_SUB_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2870 /* i32.atomic.rmw16.sub_u */, WebAssembly::ATOMIC_RMW16_U_SUB_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2893 /* i32.atomic.rmw16.xchg_u */, WebAssembly::ATOMIC_RMW16_U_XCHG_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2893 /* i32.atomic.rmw16.xchg_u */, WebAssembly::ATOMIC_RMW16_U_XCHG_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2917 /* i32.atomic.rmw16.xor_u */, WebAssembly::ATOMIC_RMW16_U_XOR_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2917 /* i32.atomic.rmw16.xor_u */, WebAssembly::ATOMIC_RMW16_U_XOR_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2940 /* i32.atomic.rmw8.add_u */, WebAssembly::ATOMIC_RMW8_U_ADD_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2940 /* i32.atomic.rmw8.add_u */, WebAssembly::ATOMIC_RMW8_U_ADD_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2962 /* i32.atomic.rmw8.and_u */, WebAssembly::ATOMIC_RMW8_U_AND_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2962 /* i32.atomic.rmw8.and_u */, WebAssembly::ATOMIC_RMW8_U_AND_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2984 /* i32.atomic.rmw8.cmpxchg_u */, WebAssembly::ATOMIC_RMW8_U_CMPXCHG_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2984 /* i32.atomic.rmw8.cmpxchg_u */, WebAssembly::ATOMIC_RMW8_U_CMPXCHG_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3010 /* i32.atomic.rmw8.or_u */, WebAssembly::ATOMIC_RMW8_U_OR_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3010 /* i32.atomic.rmw8.or_u */, WebAssembly::ATOMIC_RMW8_U_OR_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3031 /* i32.atomic.rmw8.sub_u */, WebAssembly::ATOMIC_RMW8_U_SUB_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3031 /* i32.atomic.rmw8.sub_u */, WebAssembly::ATOMIC_RMW8_U_SUB_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3053 /* i32.atomic.rmw8.xchg_u */, WebAssembly::ATOMIC_RMW8_U_XCHG_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3053 /* i32.atomic.rmw8.xchg_u */, WebAssembly::ATOMIC_RMW8_U_XCHG_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3076 /* i32.atomic.rmw8.xor_u */, WebAssembly::ATOMIC_RMW8_U_XOR_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3076 /* i32.atomic.rmw8.xor_u */, WebAssembly::ATOMIC_RMW8_U_XOR_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3098 /* i32.atomic.store */, WebAssembly::ATOMIC_STORE_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3098 /* i32.atomic.store */, WebAssembly::ATOMIC_STORE_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3115 /* i32.atomic.store16 */, WebAssembly::ATOMIC_STORE16_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3115 /* i32.atomic.store16 */, WebAssembly::ATOMIC_STORE16_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3134 /* i32.atomic.store8 */, WebAssembly::ATOMIC_STORE8_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3134 /* i32.atomic.store8 */, WebAssembly::ATOMIC_STORE8_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3152 /* i32.clz */, WebAssembly::CLZ_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3160 /* i32.const */, WebAssembly::CONST_I32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 3170 /* i32.ctz */, WebAssembly::CTZ_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3178 /* i32.div_s */, WebAssembly::DIV_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3188 /* i32.div_u */, WebAssembly::DIV_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3198 /* i32.eq */, WebAssembly::EQ_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3205 /* i32.eqz */, WebAssembly::EQZ_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3213 /* i32.extend16_s */, WebAssembly::I32_EXTEND16_S_I32_S, Convert_NoOperands, AMFBS_HasSignExt, {  }, },
  { 3228 /* i32.extend8_s */, WebAssembly::I32_EXTEND8_S_I32_S, Convert_NoOperands, AMFBS_HasSignExt, {  }, },
  { 3242 /* i32.ge_s */, WebAssembly::GE_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3251 /* i32.ge_u */, WebAssembly::GE_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3260 /* i32.gt_s */, WebAssembly::GT_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3269 /* i32.gt_u */, WebAssembly::GT_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3278 /* i32.le_s */, WebAssembly::LE_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3287 /* i32.le_u */, WebAssembly::LE_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3296 /* i32.load */, WebAssembly::LOAD_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3296 /* i32.load */, WebAssembly::LOAD_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3305 /* i32.load16_s */, WebAssembly::LOAD16_S_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3305 /* i32.load16_s */, WebAssembly::LOAD16_S_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3318 /* i32.load16_u */, WebAssembly::LOAD16_U_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3318 /* i32.load16_u */, WebAssembly::LOAD16_U_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3331 /* i32.load8_s */, WebAssembly::LOAD8_S_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3331 /* i32.load8_s */, WebAssembly::LOAD8_S_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3343 /* i32.load8_u */, WebAssembly::LOAD8_U_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3343 /* i32.load8_u */, WebAssembly::LOAD8_U_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3355 /* i32.lt_s */, WebAssembly::LT_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3364 /* i32.lt_u */, WebAssembly::LT_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3373 /* i32.mul */, WebAssembly::MUL_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3381 /* i32.ne */, WebAssembly::NE_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3388 /* i32.or */, WebAssembly::OR_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3395 /* i32.popcnt */, WebAssembly::POPCNT_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3406 /* i32.reinterpret_f32 */, WebAssembly::I32_REINTERPRET_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3426 /* i32.rem_s */, WebAssembly::REM_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3436 /* i32.rem_u */, WebAssembly::REM_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3446 /* i32.rotl */, WebAssembly::ROTL_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3455 /* i32.rotr */, WebAssembly::ROTR_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3464 /* i32.select */, WebAssembly::SELECT_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3475 /* i32.shl */, WebAssembly::SHL_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3483 /* i32.shr_s */, WebAssembly::SHR_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3493 /* i32.shr_u */, WebAssembly::SHR_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3503 /* i32.store */, WebAssembly::STORE_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3503 /* i32.store */, WebAssembly::STORE_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3513 /* i32.store16 */, WebAssembly::STORE16_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3513 /* i32.store16 */, WebAssembly::STORE16_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3525 /* i32.store8 */, WebAssembly::STORE8_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3525 /* i32.store8 */, WebAssembly::STORE8_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3536 /* i32.sub */, WebAssembly::SUB_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3544 /* i32.trunc_f32_s */, WebAssembly::I32_TRUNC_S_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3560 /* i32.trunc_f32_u */, WebAssembly::I32_TRUNC_U_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3576 /* i32.trunc_f64_s */, WebAssembly::I32_TRUNC_S_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3592 /* i32.trunc_f64_u */, WebAssembly::I32_TRUNC_U_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3608 /* i32.trunc_sat_f32_s */, WebAssembly::I32_TRUNC_S_SAT_F32_S, Convert_NoOperands, AMFBS_HasNontrappingFPToInt, {  }, },
  { 3628 /* i32.trunc_sat_f32_u */, WebAssembly::I32_TRUNC_U_SAT_F32_S, Convert_NoOperands, AMFBS_HasNontrappingFPToInt, {  }, },
  { 3648 /* i32.trunc_sat_f64_s */, WebAssembly::I32_TRUNC_S_SAT_F64_S, Convert_NoOperands, AMFBS_HasNontrappingFPToInt, {  }, },
  { 3668 /* i32.trunc_sat_f64_u */, WebAssembly::I32_TRUNC_U_SAT_F64_S, Convert_NoOperands, AMFBS_HasNontrappingFPToInt, {  }, },
  { 3688 /* i32.wrap_i64 */, WebAssembly::I32_WRAP_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3701 /* i32.xor */, WebAssembly::XOR_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3709 /* i32x4.abs */, WebAssembly::ABS_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3719 /* i32x4.add */, WebAssembly::ADD_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3729 /* i32x4.all_true */, WebAssembly::ALLTRUE_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3744 /* i32x4.bitmask */, WebAssembly::BITMASK_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3758 /* i32x4.dot_i16x8_s */, WebAssembly::DOT_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3776 /* i32x4.dot_i8x16_i7x16_add_s */, WebAssembly::RELAXED_DOT_ADD_S, Convert_NoOperands, AMFBS_HasRelaxedSIMD, {  }, },
  { 3804 /* i32x4.eq */, WebAssembly::EQ_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3813 /* i32x4.extadd_pairwise_i16x8_s */, WebAssembly::int_wasm_extadd_pairwise_signed_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3843 /* i32x4.extadd_pairwise_i16x8_u */, WebAssembly::int_wasm_extadd_pairwise_unsigned_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3873 /* i32x4.extend_high_i16x8_s */, WebAssembly::extend_high_s_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3899 /* i32x4.extend_high_i16x8_u */, WebAssembly::extend_high_u_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3925 /* i32x4.extend_low_i16x8_s */, WebAssembly::extend_low_s_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3950 /* i32x4.extend_low_i16x8_u */, WebAssembly::extend_low_u_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3975 /* i32x4.extmul_high_i16x8_s */, WebAssembly::EXTMUL_HIGH_S_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4001 /* i32x4.extmul_high_i16x8_u */, WebAssembly::EXTMUL_HIGH_U_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4027 /* i32x4.extmul_low_i16x8_s */, WebAssembly::EXTMUL_LOW_S_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4052 /* i32x4.extmul_low_i16x8_u */, WebAssembly::EXTMUL_LOW_U_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4077 /* i32x4.extract_lane */, WebAssembly::EXTRACT_LANE_I32x4_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 4096 /* i32x4.ge_s */, WebAssembly::GE_S_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4107 /* i32x4.ge_u */, WebAssembly::GE_U_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4118 /* i32x4.gt_s */, WebAssembly::GT_S_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4129 /* i32x4.gt_u */, WebAssembly::GT_U_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4140 /* i32x4.le_s */, WebAssembly::LE_S_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4151 /* i32x4.le_u */, WebAssembly::LE_U_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4162 /* i32x4.load16x4_s */, WebAssembly::LOAD_EXTEND_S_I32x4_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 4162 /* i32x4.load16x4_s */, WebAssembly::LOAD_EXTEND_S_I32x4_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 4179 /* i32x4.load16x4_u */, WebAssembly::LOAD_EXTEND_U_I32x4_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 4179 /* i32x4.load16x4_u */, WebAssembly::LOAD_EXTEND_U_I32x4_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 4196 /* i32x4.lt_s */, WebAssembly::LT_S_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4207 /* i32x4.lt_u */, WebAssembly::LT_U_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4218 /* i32x4.max_s */, WebAssembly::MAX_S_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4230 /* i32x4.max_u */, WebAssembly::MAX_U_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4242 /* i32x4.min_s */, WebAssembly::MIN_S_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4254 /* i32x4.min_u */, WebAssembly::MIN_U_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4266 /* i32x4.mul */, WebAssembly::MUL_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4276 /* i32x4.ne */, WebAssembly::NE_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4285 /* i32x4.neg */, WebAssembly::NEG_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4295 /* i32x4.relaxed_laneselect */, WebAssembly::LANESELECT_I32x4_S, Convert_NoOperands, AMFBS_HasRelaxedSIMD, {  }, },
  { 4320 /* i32x4.relaxed_trunc_f32x4_s */, WebAssembly::int_wasm_relaxed_trunc_signed_I32x4_S, Convert_NoOperands, AMFBS_HasRelaxedSIMD, {  }, },
  { 4348 /* i32x4.relaxed_trunc_f32x4_u */, WebAssembly::int_wasm_relaxed_trunc_unsigned_I32x4_S, Convert_NoOperands, AMFBS_HasRelaxedSIMD, {  }, },
  { 4376 /* i32x4.relaxed_trunc_f64x2_s_zero */, WebAssembly::int_wasm_relaxed_trunc_signed_zero_I32x4_S, Convert_NoOperands, AMFBS_HasRelaxedSIMD, {  }, },
  { 4409 /* i32x4.relaxed_trunc_f64x2_u_zero */, WebAssembly::int_wasm_relaxed_trunc_unsigned_zero_I32x4_S, Convert_NoOperands, AMFBS_HasRelaxedSIMD, {  }, },
  { 4442 /* i32x4.replace_lane */, WebAssembly::REPLACE_LANE_I32x4_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 4461 /* i32x4.shl */, WebAssembly::SHL_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4471 /* i32x4.shr_s */, WebAssembly::SHR_S_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4483 /* i32x4.shr_u */, WebAssembly::SHR_U_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4495 /* i32x4.splat */, WebAssembly::SPLAT_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4507 /* i32x4.sub */, WebAssembly::SUB_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4517 /* i32x4.trunc_sat_f32x4_s */, WebAssembly::fp_to_sint_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4541 /* i32x4.trunc_sat_f32x4_u */, WebAssembly::fp_to_uint_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4565 /* i32x4.trunc_sat_f64x2_s_zero */, WebAssembly::trunc_sat_zero_s_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4594 /* i32x4.trunc_sat_f64x2_u_zero */, WebAssembly::trunc_sat_zero_u_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4623 /* i64.add */, WebAssembly::ADD_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4631 /* i64.and */, WebAssembly::AND_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4639 /* i64.atomic.load */, WebAssembly::ATOMIC_LOAD_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4639 /* i64.atomic.load */, WebAssembly::ATOMIC_LOAD_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4655 /* i64.atomic.load16_u */, WebAssembly::ATOMIC_LOAD16_U_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4655 /* i64.atomic.load16_u */, WebAssembly::ATOMIC_LOAD16_U_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4675 /* i64.atomic.load32_u */, WebAssembly::ATOMIC_LOAD32_U_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4675 /* i64.atomic.load32_u */, WebAssembly::ATOMIC_LOAD32_U_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4695 /* i64.atomic.load8_u */, WebAssembly::ATOMIC_LOAD8_U_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4695 /* i64.atomic.load8_u */, WebAssembly::ATOMIC_LOAD8_U_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4714 /* i64.atomic.rmw.add */, WebAssembly::ATOMIC_RMW_ADD_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4714 /* i64.atomic.rmw.add */, WebAssembly::ATOMIC_RMW_ADD_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4733 /* i64.atomic.rmw.and */, WebAssembly::ATOMIC_RMW_AND_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4733 /* i64.atomic.rmw.and */, WebAssembly::ATOMIC_RMW_AND_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4752 /* i64.atomic.rmw.cmpxchg */, WebAssembly::ATOMIC_RMW_CMPXCHG_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4752 /* i64.atomic.rmw.cmpxchg */, WebAssembly::ATOMIC_RMW_CMPXCHG_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4775 /* i64.atomic.rmw.or */, WebAssembly::ATOMIC_RMW_OR_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4775 /* i64.atomic.rmw.or */, WebAssembly::ATOMIC_RMW_OR_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4793 /* i64.atomic.rmw.sub */, WebAssembly::ATOMIC_RMW_SUB_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4793 /* i64.atomic.rmw.sub */, WebAssembly::ATOMIC_RMW_SUB_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4812 /* i64.atomic.rmw.xchg */, WebAssembly::ATOMIC_RMW_XCHG_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4812 /* i64.atomic.rmw.xchg */, WebAssembly::ATOMIC_RMW_XCHG_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4832 /* i64.atomic.rmw.xor */, WebAssembly::ATOMIC_RMW_XOR_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4832 /* i64.atomic.rmw.xor */, WebAssembly::ATOMIC_RMW_XOR_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4851 /* i64.atomic.rmw16.add_u */, WebAssembly::ATOMIC_RMW16_U_ADD_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4851 /* i64.atomic.rmw16.add_u */, WebAssembly::ATOMIC_RMW16_U_ADD_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4874 /* i64.atomic.rmw16.and_u */, WebAssembly::ATOMIC_RMW16_U_AND_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4874 /* i64.atomic.rmw16.and_u */, WebAssembly::ATOMIC_RMW16_U_AND_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4897 /* i64.atomic.rmw16.cmpxchg_u */, WebAssembly::ATOMIC_RMW16_U_CMPXCHG_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4897 /* i64.atomic.rmw16.cmpxchg_u */, WebAssembly::ATOMIC_RMW16_U_CMPXCHG_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4924 /* i64.atomic.rmw16.or_u */, WebAssembly::ATOMIC_RMW16_U_OR_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4924 /* i64.atomic.rmw16.or_u */, WebAssembly::ATOMIC_RMW16_U_OR_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4946 /* i64.atomic.rmw16.sub_u */, WebAssembly::ATOMIC_RMW16_U_SUB_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4946 /* i64.atomic.rmw16.sub_u */, WebAssembly::ATOMIC_RMW16_U_SUB_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4969 /* i64.atomic.rmw16.xchg_u */, WebAssembly::ATOMIC_RMW16_U_XCHG_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4969 /* i64.atomic.rmw16.xchg_u */, WebAssembly::ATOMIC_RMW16_U_XCHG_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4993 /* i64.atomic.rmw16.xor_u */, WebAssembly::ATOMIC_RMW16_U_XOR_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4993 /* i64.atomic.rmw16.xor_u */, WebAssembly::ATOMIC_RMW16_U_XOR_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5016 /* i64.atomic.rmw32.add_u */, WebAssembly::ATOMIC_RMW32_U_ADD_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5016 /* i64.atomic.rmw32.add_u */, WebAssembly::ATOMIC_RMW32_U_ADD_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5039 /* i64.atomic.rmw32.and_u */, WebAssembly::ATOMIC_RMW32_U_AND_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5039 /* i64.atomic.rmw32.and_u */, WebAssembly::ATOMIC_RMW32_U_AND_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5062 /* i64.atomic.rmw32.cmpxchg_u */, WebAssembly::ATOMIC_RMW32_U_CMPXCHG_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5062 /* i64.atomic.rmw32.cmpxchg_u */, WebAssembly::ATOMIC_RMW32_U_CMPXCHG_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5089 /* i64.atomic.rmw32.or_u */, WebAssembly::ATOMIC_RMW32_U_OR_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5089 /* i64.atomic.rmw32.or_u */, WebAssembly::ATOMIC_RMW32_U_OR_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5111 /* i64.atomic.rmw32.sub_u */, WebAssembly::ATOMIC_RMW32_U_SUB_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5111 /* i64.atomic.rmw32.sub_u */, WebAssembly::ATOMIC_RMW32_U_SUB_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5134 /* i64.atomic.rmw32.xchg_u */, WebAssembly::ATOMIC_RMW32_U_XCHG_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5134 /* i64.atomic.rmw32.xchg_u */, WebAssembly::ATOMIC_RMW32_U_XCHG_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5158 /* i64.atomic.rmw32.xor_u */, WebAssembly::ATOMIC_RMW32_U_XOR_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5158 /* i64.atomic.rmw32.xor_u */, WebAssembly::ATOMIC_RMW32_U_XOR_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5181 /* i64.atomic.rmw8.add_u */, WebAssembly::ATOMIC_RMW8_U_ADD_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5181 /* i64.atomic.rmw8.add_u */, WebAssembly::ATOMIC_RMW8_U_ADD_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5203 /* i64.atomic.rmw8.and_u */, WebAssembly::ATOMIC_RMW8_U_AND_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5203 /* i64.atomic.rmw8.and_u */, WebAssembly::ATOMIC_RMW8_U_AND_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5225 /* i64.atomic.rmw8.cmpxchg_u */, WebAssembly::ATOMIC_RMW8_U_CMPXCHG_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5225 /* i64.atomic.rmw8.cmpxchg_u */, WebAssembly::ATOMIC_RMW8_U_CMPXCHG_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5251 /* i64.atomic.rmw8.or_u */, WebAssembly::ATOMIC_RMW8_U_OR_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5251 /* i64.atomic.rmw8.or_u */, WebAssembly::ATOMIC_RMW8_U_OR_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5272 /* i64.atomic.rmw8.sub_u */, WebAssembly::ATOMIC_RMW8_U_SUB_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5272 /* i64.atomic.rmw8.sub_u */, WebAssembly::ATOMIC_RMW8_U_SUB_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5294 /* i64.atomic.rmw8.xchg_u */, WebAssembly::ATOMIC_RMW8_U_XCHG_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5294 /* i64.atomic.rmw8.xchg_u */, WebAssembly::ATOMIC_RMW8_U_XCHG_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5317 /* i64.atomic.rmw8.xor_u */, WebAssembly::ATOMIC_RMW8_U_XOR_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5317 /* i64.atomic.rmw8.xor_u */, WebAssembly::ATOMIC_RMW8_U_XOR_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5339 /* i64.atomic.store */, WebAssembly::ATOMIC_STORE_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5339 /* i64.atomic.store */, WebAssembly::ATOMIC_STORE_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5356 /* i64.atomic.store16 */, WebAssembly::ATOMIC_STORE16_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5356 /* i64.atomic.store16 */, WebAssembly::ATOMIC_STORE16_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5375 /* i64.atomic.store32 */, WebAssembly::ATOMIC_STORE32_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5375 /* i64.atomic.store32 */, WebAssembly::ATOMIC_STORE32_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5394 /* i64.atomic.store8 */, WebAssembly::ATOMIC_STORE8_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5394 /* i64.atomic.store8 */, WebAssembly::ATOMIC_STORE8_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5412 /* i64.clz */, WebAssembly::CLZ_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5420 /* i64.const */, WebAssembly::CONST_I64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 5430 /* i64.ctz */, WebAssembly::CTZ_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5438 /* i64.div_s */, WebAssembly::DIV_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5448 /* i64.div_u */, WebAssembly::DIV_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5458 /* i64.eq */, WebAssembly::EQ_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5465 /* i64.eqz */, WebAssembly::EQZ_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5473 /* i64.extend16_s */, WebAssembly::I64_EXTEND16_S_I64_S, Convert_NoOperands, AMFBS_HasSignExt, {  }, },
  { 5488 /* i64.extend32_s */, WebAssembly::I64_EXTEND32_S_I64_S, Convert_NoOperands, AMFBS_HasSignExt, {  }, },
  { 5503 /* i64.extend8_s */, WebAssembly::I64_EXTEND8_S_I64_S, Convert_NoOperands, AMFBS_HasSignExt, {  }, },
  { 5517 /* i64.extend_i32_s */, WebAssembly::I64_EXTEND_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5534 /* i64.extend_i32_u */, WebAssembly::I64_EXTEND_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5551 /* i64.ge_s */, WebAssembly::GE_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5560 /* i64.ge_u */, WebAssembly::GE_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5569 /* i64.gt_s */, WebAssembly::GT_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5578 /* i64.gt_u */, WebAssembly::GT_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5587 /* i64.le_s */, WebAssembly::LE_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5596 /* i64.le_u */, WebAssembly::LE_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5605 /* i64.load */, WebAssembly::LOAD_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5605 /* i64.load */, WebAssembly::LOAD_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5614 /* i64.load16_s */, WebAssembly::LOAD16_S_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5614 /* i64.load16_s */, WebAssembly::LOAD16_S_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5627 /* i64.load16_u */, WebAssembly::LOAD16_U_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5627 /* i64.load16_u */, WebAssembly::LOAD16_U_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5640 /* i64.load32_s */, WebAssembly::LOAD32_S_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5640 /* i64.load32_s */, WebAssembly::LOAD32_S_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5653 /* i64.load32_u */, WebAssembly::LOAD32_U_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5653 /* i64.load32_u */, WebAssembly::LOAD32_U_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5666 /* i64.load8_s */, WebAssembly::LOAD8_S_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5666 /* i64.load8_s */, WebAssembly::LOAD8_S_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5678 /* i64.load8_u */, WebAssembly::LOAD8_U_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5678 /* i64.load8_u */, WebAssembly::LOAD8_U_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5690 /* i64.lt_s */, WebAssembly::LT_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5699 /* i64.lt_u */, WebAssembly::LT_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5708 /* i64.mul */, WebAssembly::MUL_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5716 /* i64.ne */, WebAssembly::NE_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5723 /* i64.or */, WebAssembly::OR_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5730 /* i64.popcnt */, WebAssembly::POPCNT_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5741 /* i64.reinterpret_f64 */, WebAssembly::I64_REINTERPRET_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5761 /* i64.rem_s */, WebAssembly::REM_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5771 /* i64.rem_u */, WebAssembly::REM_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5781 /* i64.rotl */, WebAssembly::ROTL_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5790 /* i64.rotr */, WebAssembly::ROTR_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5799 /* i64.select */, WebAssembly::SELECT_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5810 /* i64.shl */, WebAssembly::SHL_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5818 /* i64.shr_s */, WebAssembly::SHR_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5828 /* i64.shr_u */, WebAssembly::SHR_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5838 /* i64.store */, WebAssembly::STORE_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5838 /* i64.store */, WebAssembly::STORE_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5848 /* i64.store16 */, WebAssembly::STORE16_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5848 /* i64.store16 */, WebAssembly::STORE16_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5860 /* i64.store32 */, WebAssembly::STORE32_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5860 /* i64.store32 */, WebAssembly::STORE32_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5872 /* i64.store8 */, WebAssembly::STORE8_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5872 /* i64.store8 */, WebAssembly::STORE8_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5883 /* i64.sub */, WebAssembly::SUB_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5891 /* i64.trunc_f32_s */, WebAssembly::I64_TRUNC_S_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5907 /* i64.trunc_f32_u */, WebAssembly::I64_TRUNC_U_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5923 /* i64.trunc_f64_s */, WebAssembly::I64_TRUNC_S_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5939 /* i64.trunc_f64_u */, WebAssembly::I64_TRUNC_U_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5955 /* i64.trunc_sat_f32_s */, WebAssembly::I64_TRUNC_S_SAT_F32_S, Convert_NoOperands, AMFBS_HasNontrappingFPToInt, {  }, },
  { 5975 /* i64.trunc_sat_f32_u */, WebAssembly::I64_TRUNC_U_SAT_F32_S, Convert_NoOperands, AMFBS_HasNontrappingFPToInt, {  }, },
  { 5995 /* i64.trunc_sat_f64_s */, WebAssembly::I64_TRUNC_S_SAT_F64_S, Convert_NoOperands, AMFBS_HasNontrappingFPToInt, {  }, },
  { 6015 /* i64.trunc_sat_f64_u */, WebAssembly::I64_TRUNC_U_SAT_F64_S, Convert_NoOperands, AMFBS_HasNontrappingFPToInt, {  }, },
  { 6035 /* i64.xor */, WebAssembly::XOR_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 6043 /* i64x2.abs */, WebAssembly::ABS_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6053 /* i64x2.add */, WebAssembly::ADD_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6063 /* i64x2.all_true */, WebAssembly::ALLTRUE_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6078 /* i64x2.bitmask */, WebAssembly::BITMASK_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6092 /* i64x2.eq */, WebAssembly::EQ_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6101 /* i64x2.extend_high_i32x4_s */, WebAssembly::extend_high_s_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6127 /* i64x2.extend_high_i32x4_u */, WebAssembly::extend_high_u_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6153 /* i64x2.extend_low_i32x4_s */, WebAssembly::extend_low_s_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6178 /* i64x2.extend_low_i32x4_u */, WebAssembly::extend_low_u_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6203 /* i64x2.extmul_high_i32x4_s */, WebAssembly::EXTMUL_HIGH_S_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6229 /* i64x2.extmul_high_i32x4_u */, WebAssembly::EXTMUL_HIGH_U_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6255 /* i64x2.extmul_low_i32x4_s */, WebAssembly::EXTMUL_LOW_S_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6280 /* i64x2.extmul_low_i32x4_u */, WebAssembly::EXTMUL_LOW_U_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6305 /* i64x2.extract_lane */, WebAssembly::EXTRACT_LANE_I64x2_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 6324 /* i64x2.ge_s */, WebAssembly::GE_S_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6335 /* i64x2.gt_s */, WebAssembly::GT_S_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6346 /* i64x2.le_s */, WebAssembly::LE_S_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6357 /* i64x2.load32x2_s */, WebAssembly::LOAD_EXTEND_S_I64x2_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 6357 /* i64x2.load32x2_s */, WebAssembly::LOAD_EXTEND_S_I64x2_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 6374 /* i64x2.load32x2_u */, WebAssembly::LOAD_EXTEND_U_I64x2_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 6374 /* i64x2.load32x2_u */, WebAssembly::LOAD_EXTEND_U_I64x2_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 6391 /* i64x2.lt_s */, WebAssembly::LT_S_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6402 /* i64x2.mul */, WebAssembly::MUL_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6412 /* i64x2.ne */, WebAssembly::NE_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6421 /* i64x2.neg */, WebAssembly::NEG_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6431 /* i64x2.relaxed_laneselect */, WebAssembly::LANESELECT_I64x2_S, Convert_NoOperands, AMFBS_HasRelaxedSIMD, {  }, },
  { 6456 /* i64x2.replace_lane */, WebAssembly::REPLACE_LANE_I64x2_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 6475 /* i64x2.shl */, WebAssembly::SHL_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6485 /* i64x2.shr_s */, WebAssembly::SHR_S_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6497 /* i64x2.shr_u */, WebAssembly::SHR_U_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6509 /* i64x2.splat */, WebAssembly::SPLAT_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6521 /* i64x2.sub */, WebAssembly::SUB_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6531 /* i8x16.abs */, WebAssembly::ABS_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6541 /* i8x16.add */, WebAssembly::ADD_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6551 /* i8x16.add_sat_s */, WebAssembly::ADD_SAT_S_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6567 /* i8x16.add_sat_u */, WebAssembly::ADD_SAT_U_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6583 /* i8x16.all_true */, WebAssembly::ALLTRUE_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6598 /* i8x16.avgr_u */, WebAssembly::AVGR_U_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6611 /* i8x16.bitmask */, WebAssembly::BITMASK_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6625 /* i8x16.eq */, WebAssembly::EQ_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6634 /* i8x16.extract_lane_s */, WebAssembly::EXTRACT_LANE_I8x16_s_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 6655 /* i8x16.extract_lane_u */, WebAssembly::EXTRACT_LANE_I8x16_u_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 6676 /* i8x16.ge_s */, WebAssembly::GE_S_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6687 /* i8x16.ge_u */, WebAssembly::GE_U_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6698 /* i8x16.gt_s */, WebAssembly::GT_S_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6709 /* i8x16.gt_u */, WebAssembly::GT_U_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6720 /* i8x16.le_s */, WebAssembly::LE_S_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6731 /* i8x16.le_u */, WebAssembly::LE_U_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6742 /* i8x16.lt_s */, WebAssembly::LT_S_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6753 /* i8x16.lt_u */, WebAssembly::LT_U_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6764 /* i8x16.max_s */, WebAssembly::MAX_S_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6776 /* i8x16.max_u */, WebAssembly::MAX_U_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6788 /* i8x16.min_s */, WebAssembly::MIN_S_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6800 /* i8x16.min_u */, WebAssembly::MIN_U_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6812 /* i8x16.narrow_i16x8_s */, WebAssembly::NARROW_S_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6833 /* i8x16.narrow_i16x8_u */, WebAssembly::NARROW_U_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6854 /* i8x16.ne */, WebAssembly::NE_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6863 /* i8x16.neg */, WebAssembly::NEG_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6873 /* i8x16.popcnt */, WebAssembly::POPCNT_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6886 /* i8x16.relaxed_laneselect */, WebAssembly::LANESELECT_I8x16_S, Convert_NoOperands, AMFBS_HasRelaxedSIMD, {  }, },
  { 6911 /* i8x16.relaxed_swizzle */, WebAssembly::RELAXED_SWIZZLE_S, Convert_NoOperands, AMFBS_HasRelaxedSIMD, {  }, },
  { 6933 /* i8x16.replace_lane */, WebAssembly::REPLACE_LANE_I8x16_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 6952 /* i8x16.shl */, WebAssembly::SHL_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6962 /* i8x16.shr_s */, WebAssembly::SHR_S_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6974 /* i8x16.shr_u */, WebAssembly::SHR_U_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6986 /* i8x16.shuffle */, WebAssembly::SHUFFLE_S, Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7__Imm1_8__Imm1_9__Imm1_10__Imm1_11__Imm1_12__Imm1_13__Imm1_14__Imm1_15, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7000 /* i8x16.splat */, WebAssembly::SPLAT_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 7012 /* i8x16.sub */, WebAssembly::SUB_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 7022 /* i8x16.sub_sat_s */, WebAssembly::SUB_SAT_S_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 7038 /* i8x16.sub_sat_u */, WebAssembly::SUB_SAT_U_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 7054 /* i8x16.swizzle */, WebAssembly::SWIZZLE_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 7068 /* if */, WebAssembly::IF_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 7071 /* local.get */, WebAssembly::LOCAL_GET_EXTERNREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 7071 /* local.get */, WebAssembly::LOCAL_GET_FUNCREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 7071 /* local.get */, WebAssembly::LOCAL_GET_V128_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 7071 /* local.get */, WebAssembly::LOCAL_GET_F32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 7071 /* local.get */, WebAssembly::LOCAL_GET_F64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 7071 /* local.get */, WebAssembly::LOCAL_GET_I32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 7071 /* local.get */, WebAssembly::LOCAL_GET_I64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 7081 /* local.set */, WebAssembly::LOCAL_SET_EXTERNREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 7081 /* local.set */, WebAssembly::LOCAL_SET_FUNCREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 7081 /* local.set */, WebAssembly::LOCAL_SET_V128_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 7081 /* local.set */, WebAssembly::LOCAL_SET_F32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 7081 /* local.set */, WebAssembly::LOCAL_SET_F64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 7081 /* local.set */, WebAssembly::LOCAL_SET_I32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 7081 /* local.set */, WebAssembly::LOCAL_SET_I64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 7091 /* local.tee */, WebAssembly::LOCAL_TEE_EXTERNREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 7091 /* local.tee */, WebAssembly::LOCAL_TEE_FUNCREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 7091 /* local.tee */, WebAssembly::LOCAL_TEE_V128_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 7091 /* local.tee */, WebAssembly::LOCAL_TEE_F32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 7091 /* local.tee */, WebAssembly::LOCAL_TEE_F64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 7091 /* local.tee */, WebAssembly::LOCAL_TEE_I32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 7091 /* local.tee */, WebAssembly::LOCAL_TEE_I64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 7101 /* loop */, WebAssembly::LOOP_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 7106 /* memory.atomic.notify */, WebAssembly::MEMORY_ATOMIC_NOTIFY_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 7106 /* memory.atomic.notify */, WebAssembly::MEMORY_ATOMIC_NOTIFY_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 7127 /* memory.atomic.wait32 */, WebAssembly::MEMORY_ATOMIC_WAIT32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 7127 /* memory.atomic.wait32 */, WebAssembly::MEMORY_ATOMIC_WAIT32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 7148 /* memory.atomic.wait64 */, WebAssembly::MEMORY_ATOMIC_WAIT64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 7148 /* memory.atomic.wait64 */, WebAssembly::MEMORY_ATOMIC_WAIT64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 7169 /* memory.copy */, WebAssembly::anonymous_6225MEMORY_COPY_A32_S, Convert__Imm1_0__Imm1_1, AMFBS_HasBulkMemory, { MCK_Imm, MCK_Imm }, },
  { 7169 /* memory.copy */, WebAssembly::anonymous_6226MEMORY_COPY_A64_S, Convert__Imm1_0__Imm1_1, AMFBS_HasBulkMemory, { MCK_Imm, MCK_Imm }, },
  { 7181 /* memory.fill */, WebAssembly::anonymous_6225MEMORY_FILL_A32_S, Convert__Imm1_0, AMFBS_HasBulkMemory, { MCK_Imm }, },
  { 7181 /* memory.fill */, WebAssembly::anonymous_6226MEMORY_FILL_A64_S, Convert__Imm1_0, AMFBS_HasBulkMemory, { MCK_Imm }, },
  { 7193 /* memory.grow */, WebAssembly::anonymous_4392MEMORY_GROW_A32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 7193 /* memory.grow */, WebAssembly::anonymous_4393MEMORY_GROW_A64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 7205 /* memory.init */, WebAssembly::anonymous_6225MEMORY_INIT_A32_S, Convert__Imm1_0__Imm1_1, AMFBS_HasBulkMemory, { MCK_Imm, MCK_Imm }, },
  { 7205 /* memory.init */, WebAssembly::anonymous_6226MEMORY_INIT_A64_S, Convert__Imm1_0__Imm1_1, AMFBS_HasBulkMemory, { MCK_Imm, MCK_Imm }, },
  { 7217 /* memory.size */, WebAssembly::anonymous_4392MEMORY_SIZE_A32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 7217 /* memory.size */, WebAssembly::anonymous_4393MEMORY_SIZE_A64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 7229 /* nop */, WebAssembly::NOP_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 7233 /* ref.is_null */, WebAssembly::REF_IS_NULL_EXTERNREF_S, Convert_NoOperands, AMFBS_HasReferenceTypes, {  }, },
  { 7233 /* ref.is_null */, WebAssembly::REF_IS_NULL_FUNCREF_S, Convert_NoOperands, AMFBS_HasReferenceTypes, {  }, },
  { 7245 /* ref.null_extern */, WebAssembly::REF_NULL_EXTERNREF_S, Convert_NoOperands, AMFBS_HasReferenceTypes, {  }, },
  { 7261 /* ref.null_func */, WebAssembly::REF_NULL_FUNCREF_S, Convert_NoOperands, AMFBS_HasReferenceTypes, {  }, },
  { 7275 /* rethrow */, WebAssembly::RETHROW_S, Convert__Imm1_0, AMFBS_HasExceptionHandling, { MCK_Imm }, },
  { 7283 /* return */, WebAssembly::RETURN_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 7290 /* return_call */, WebAssembly::RET_CALL_S, Convert__Imm1_0, AMFBS_HasTailCall, { MCK_Imm }, },
  { 7302 /* return_call_indirect */, WebAssembly::RET_CALL_INDIRECT_S, Convert__Imm1_0__Imm1_1, AMFBS_HasTailCall, { MCK_Imm, MCK_Imm }, },
  { 7323 /* return_call_results */, WebAssembly::RET_CALL_RESULTS_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 7343 /* table.copy */, WebAssembly::TABLE_COPY_S, Convert__Imm1_0__Imm1_1, AMFBS_HasReferenceTypes, { MCK_Imm, MCK_Imm }, },
  { 7354 /* table.fill */, WebAssembly::TABLE_FILL_EXTERNREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 7354 /* table.fill */, WebAssembly::TABLE_FILL_FUNCREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 7365 /* table.get */, WebAssembly::TABLE_GET_EXTERNREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 7365 /* table.get */, WebAssembly::TABLE_GET_FUNCREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 7375 /* table.grow */, WebAssembly::TABLE_GROW_EXTERNREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 7375 /* table.grow */, WebAssembly::TABLE_GROW_FUNCREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 7386 /* table.set */, WebAssembly::TABLE_SET_EXTERNREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 7386 /* table.set */, WebAssembly::TABLE_SET_FUNCREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 7396 /* table.size */, WebAssembly::TABLE_SIZE_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 7407 /* throw */, WebAssembly::THROW_S, Convert__Imm1_0, AMFBS_HasExceptionHandling, { MCK_Imm }, },
  { 7413 /* try */, WebAssembly::TRY_S, Convert__Imm1_0, AMFBS_HasExceptionHandling, { MCK_Imm }, },
  { 7417 /* unreachable */, WebAssembly::DEBUG_UNREACHABLE_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 7417 /* unreachable */, WebAssembly::UNREACHABLE_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 7429 /* v128.and */, WebAssembly::AND_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 7438 /* v128.andnot */, WebAssembly::ANDNOT_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 7450 /* v128.any_true */, WebAssembly::ANYTRUE_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 7464 /* v128.bitselect */, WebAssembly::BITSELECT_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 7479 /* v128.const */, WebAssembly::CONST_V128_I64x2_S, Convert__Imm1_0__Imm1_1, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7479 /* v128.const */, WebAssembly::CONST_V128_F64x2_S, Convert__FPImmf641_0__FPImmf641_1, AMFBS_HasSIMD128, { MCK_FPImmf64, MCK_FPImmf64 }, },
  { 7479 /* v128.const */, WebAssembly::CONST_V128_I32x4_S, Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7479 /* v128.const */, WebAssembly::CONST_V128_F32x4_S, Convert__FPImmf321_0__FPImmf321_1__FPImmf321_2__FPImmf321_3, AMFBS_HasSIMD128, { MCK_FPImmf32, MCK_FPImmf32, MCK_FPImmf32, MCK_FPImmf32 }, },
  { 7479 /* v128.const */, WebAssembly::CONST_V128_I16x8_S, Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7479 /* v128.const */, WebAssembly::CONST_V128_I8x16_S, Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7__Imm1_8__Imm1_9__Imm1_10__Imm1_11__Imm1_12__Imm1_13__Imm1_14__Imm1_15, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7490 /* v128.load */, WebAssembly::LOAD_V128_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7490 /* v128.load */, WebAssembly::LOAD_V128_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7500 /* v128.load16_lane */, WebAssembly::LOAD_LANE_I16x8_A32_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7500 /* v128.load16_lane */, WebAssembly::LOAD_LANE_I16x8_A64_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7517 /* v128.load16_splat */, WebAssembly::LOAD16_SPLAT_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7517 /* v128.load16_splat */, WebAssembly::LOAD16_SPLAT_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7535 /* v128.load32_lane */, WebAssembly::LOAD_LANE_I32x4_A32_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7535 /* v128.load32_lane */, WebAssembly::LOAD_LANE_I32x4_A64_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7552 /* v128.load32_splat */, WebAssembly::LOAD32_SPLAT_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7552 /* v128.load32_splat */, WebAssembly::LOAD32_SPLAT_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7570 /* v128.load32_zero */, WebAssembly::LOAD_ZERO_I32x4_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7570 /* v128.load32_zero */, WebAssembly::LOAD_ZERO_I32x4_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7587 /* v128.load64_lane */, WebAssembly::LOAD_LANE_I64x2_A32_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7587 /* v128.load64_lane */, WebAssembly::LOAD_LANE_I64x2_A64_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7604 /* v128.load64_splat */, WebAssembly::LOAD64_SPLAT_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7604 /* v128.load64_splat */, WebAssembly::LOAD64_SPLAT_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7622 /* v128.load64_zero */, WebAssembly::LOAD_ZERO_I64x2_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7622 /* v128.load64_zero */, WebAssembly::LOAD_ZERO_I64x2_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7639 /* v128.load8_lane */, WebAssembly::LOAD_LANE_I8x16_A32_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7639 /* v128.load8_lane */, WebAssembly::LOAD_LANE_I8x16_A64_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7655 /* v128.load8_splat */, WebAssembly::LOAD8_SPLAT_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7655 /* v128.load8_splat */, WebAssembly::LOAD8_SPLAT_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7672 /* v128.not */, WebAssembly::NOT_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 7681 /* v128.or */, WebAssembly::OR_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 7689 /* v128.select */, WebAssembly::SELECT_V128_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 7701 /* v128.store */, WebAssembly::STORE_V128_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7701 /* v128.store */, WebAssembly::STORE_V128_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7712 /* v128.store16_lane */, WebAssembly::STORE_LANE_I16x8_A32_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7712 /* v128.store16_lane */, WebAssembly::STORE_LANE_I16x8_A64_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7730 /* v128.store32_lane */, WebAssembly::STORE_LANE_I32x4_A32_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7730 /* v128.store32_lane */, WebAssembly::STORE_LANE_I32x4_A64_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7748 /* v128.store64_lane */, WebAssembly::STORE_LANE_I64x2_A32_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7748 /* v128.store64_lane */, WebAssembly::STORE_LANE_I64x2_A64_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7766 /* v128.store8_lane */, WebAssembly::STORE_LANE_I8x16_A32_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7766 /* v128.store8_lane */, WebAssembly::STORE_LANE_I8x16_A64_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7783 /* v128.xor */, WebAssembly::XOR_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
};

#include "llvm/Support/Debug.h"
#include "llvm/Support/Format.h"

unsigned WebAssemblyAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst,
                     uint64_t &ErrorInfo,
                     FeatureBitset &MissingFeatures,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 17) {
    ErrorInfo = 17;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  const FeatureBitset &AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((WebAssemblyOperand &)*Operands[0]).getToken();

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
    for (unsigned FormalIdx = 0, ActualIdx = 1; FormalIdx != 16; ++FormalIdx) {
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

static std::string WebAssemblyMnemonicSpellCheck(StringRef S, const FeatureBitset &FBS, unsigned VariantID) {
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

static bool WebAssemblyCheckMnemonic(StringRef Mnemonic,
                                const FeatureBitset &AvailableFeatures,
                                unsigned VariantID) {
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

