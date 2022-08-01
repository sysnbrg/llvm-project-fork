/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Global Instruction Selector for the PPC target                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_GLOBALISEL_PREDICATE_BITSET
const unsigned MAX_SUBTARGET_PREDICATES = 37;
using PredicateBitset = llvm::PredicateBitsetImpl<MAX_SUBTARGET_PREDICATES>;
#endif // ifdef GET_GLOBALISEL_PREDICATE_BITSET

#ifdef GET_GLOBALISEL_TEMPORARIES_DECL
  mutable MatcherState State;
  typedef ComplexRendererFns(PPCInstructionSelector::*ComplexMatcherMemFn)(MachineOperand &) const;
  typedef void(PPCInstructionSelector::*CustomRendererFn)(MachineInstrBuilder &, const MachineInstr &, int) const;
  const ISelInfoTy<PredicateBitset, ComplexMatcherMemFn, CustomRendererFn> ISelInfo;
  static PPCInstructionSelector::ComplexMatcherMemFn ComplexPredicateFns[];
  static PPCInstructionSelector::CustomRendererFn CustomRenderers[];
  bool testImmPredicate_I64(unsigned PredicateID, int64_t Imm) const override;
  bool testImmPredicate_APInt(unsigned PredicateID, const APInt &Imm) const override;
  bool testImmPredicate_APFloat(unsigned PredicateID, const APFloat &Imm) const override;
  const int64_t *getMatchTable() const override;
  bool testMIPredicate_MI(unsigned PredicateID, const MachineInstr &MI, const std::array<const MachineOperand *, 3> &Operands) const override;
#endif // ifdef GET_GLOBALISEL_TEMPORARIES_DECL

#ifdef GET_GLOBALISEL_TEMPORARIES_INIT
, State(0),
ISelInfo(TypeObjects, NumTypeObjects, FeatureBitsets, ComplexPredicateFns, CustomRenderers)
#endif // ifdef GET_GLOBALISEL_TEMPORARIES_INIT

#ifdef GET_GLOBALISEL_IMPL
// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
  Feature_In32BitModeBit = 1,
  Feature_In64BitModeBit = 9,
  Feature_HasOnlyMSYNCBit = 21,
  Feature_HasSYNCBit = 20,
  Feature_HasSPEBit = 8,
  Feature_HasICBTBit = 19,
  Feature_HasBPERMDBit = 10,
  Feature_HasExtDivBit = 3,
  Feature_IsISA2_06Bit = 11,
  Feature_IsISA2_07Bit = 36,
  Feature_IsISA3_0Bit = 2,
  Feature_HasFPUBit = 0,
  Feature_PCRelativeMemopsBit = 33,
  Feature_IsNotISA3_1Bit = 35,
  Feature_IsAIXBit = 22,
  Feature_NotAIXBit = 23,
  Feature_HasAltivecBit = 4,
  Feature_HasP8AltivecBit = 5,
  Feature_HasP8CryptoBit = 6,
  Feature_HasP9AltivecBit = 7,
  Feature_HasVSXBit = 12,
  Feature_IsLittleEndianBit = 24,
  Feature_IsBigEndianBit = 25,
  Feature_IsPPC64Bit = 28,
  Feature_HasOnlySwappingMemOpsBit = 27,
  Feature_HasP8VectorBit = 13,
  Feature_HasDirectMoveBit = 14,
  Feature_NoP9VectorBit = 26,
  Feature_HasP9VectorBit = 15,
  Feature_NoP9AltivecBit = 29,
  Feature_NoP10VectorBit = 30,
  Feature_HasHTMBit = 31,
  Feature_IsPPC32Bit = 34,
  Feature_PrefixInstrsBit = 16,
  Feature_IsISA3_1Bit = 17,
  Feature_PairedVectorMemopsBit = 32,
  Feature_MMABit = 18,
};

PredicateBitset PPCInstructionSelector::
computeAvailableModuleFeatures(const PPCSubtarget *Subtarget) const {
  PredicateBitset Features;
  if (!Subtarget->isPPC64())
    Features.set(Feature_In32BitModeBit);
  if (Subtarget->isPPC64())
    Features.set(Feature_In64BitModeBit);
  if (Subtarget->hasOnlyMSYNC())
    Features.set(Feature_HasOnlyMSYNCBit);
  if (!Subtarget->hasOnlyMSYNC())
    Features.set(Feature_HasSYNCBit);
  if (Subtarget->hasSPE())
    Features.set(Feature_HasSPEBit);
  if (Subtarget->hasICBT())
    Features.set(Feature_HasICBTBit);
  if (Subtarget->hasBPERMD())
    Features.set(Feature_HasBPERMDBit);
  if (Subtarget->hasExtDiv())
    Features.set(Feature_HasExtDivBit);
  if (Subtarget->isISA2_06())
    Features.set(Feature_IsISA2_06Bit);
  if (Subtarget->isISA2_07())
    Features.set(Feature_IsISA2_07Bit);
  if (Subtarget->isISA3_0())
    Features.set(Feature_IsISA3_0Bit);
  if (Subtarget->hasFPU())
    Features.set(Feature_HasFPUBit);
  if (Subtarget->hasPCRelativeMemops())
    Features.set(Feature_PCRelativeMemopsBit);
  if (!Subtarget->isISA3_1())
    Features.set(Feature_IsNotISA3_1Bit);
  if (Subtarget->isAIXABI())
    Features.set(Feature_IsAIXBit);
  if (!Subtarget->isAIXABI())
    Features.set(Feature_NotAIXBit);
  if (Subtarget->hasAltivec())
    Features.set(Feature_HasAltivecBit);
  if (Subtarget->hasP8Altivec())
    Features.set(Feature_HasP8AltivecBit);
  if (Subtarget->hasP8Crypto())
    Features.set(Feature_HasP8CryptoBit);
  if (Subtarget->hasP9Altivec())
    Features.set(Feature_HasP9AltivecBit);
  if (Subtarget->hasVSX())
    Features.set(Feature_HasVSXBit);
  if (Subtarget->isLittleEndian())
    Features.set(Feature_IsLittleEndianBit);
  if (!Subtarget->isLittleEndian())
    Features.set(Feature_IsBigEndianBit);
  if (Subtarget->isPPC64())
    Features.set(Feature_IsPPC64Bit);
  if (!Subtarget->hasP9Vector())
    Features.set(Feature_HasOnlySwappingMemOpsBit);
  if (Subtarget->hasP8Vector())
    Features.set(Feature_HasP8VectorBit);
  if (Subtarget->hasDirectMove())
    Features.set(Feature_HasDirectMoveBit);
  if (!Subtarget->hasP9Vector())
    Features.set(Feature_NoP9VectorBit);
  if (Subtarget->hasP9Vector())
    Features.set(Feature_HasP9VectorBit);
  if (!Subtarget->hasP9Altivec())
    Features.set(Feature_NoP9AltivecBit);
  if (!Subtarget->hasP10Vector())
    Features.set(Feature_NoP10VectorBit);
  if (Subtarget->hasHTM())
    Features.set(Feature_HasHTMBit);
  if (!Subtarget->isPPC64())
    Features.set(Feature_IsPPC32Bit);
  if (Subtarget->hasPrefixInstrs())
    Features.set(Feature_PrefixInstrsBit);
  if (Subtarget->isISA3_1())
    Features.set(Feature_IsISA3_1Bit);
  if (Subtarget->pairedVectorMemops())
    Features.set(Feature_PairedVectorMemopsBit);
  if (Subtarget->hasMMA())
    Features.set(Feature_MMABit);
  return Features;
}

void PPCInstructionSelector::setupGeneratedPerFunctionState(MachineFunction &MF) {
  AvailableFunctionFeatures = computeAvailableFunctionFeatures((const PPCSubtarget *)&MF.getSubtarget(), &MF);
}
PredicateBitset PPCInstructionSelector::
computeAvailableFunctionFeatures(const PPCSubtarget *Subtarget, const MachineFunction *MF) const {
  PredicateBitset Features;
  return Features;
}

// LLT Objects.
enum {
  GILLT_s1,
  GILLT_s32,
  GILLT_s64,
  GILLT_s128,
  GILLT_v2s64,
  GILLT_v4s32,
  GILLT_v8s16,
  GILLT_v16s8,
  GILLT_v256s1,
  GILLT_v512s1,
};
const static size_t NumTypeObjects = 10;
const static LLT TypeObjects[] = {
  LLT::scalar(1),
  LLT::scalar(32),
  LLT::scalar(64),
  LLT::scalar(128),
  LLT::vector(ElementCount::getFixed(2), 64),
  LLT::vector(ElementCount::getFixed(4), 32),
  LLT::vector(ElementCount::getFixed(8), 16),
  LLT::vector(ElementCount::getFixed(16), 8),
  LLT::vector(ElementCount::getFixed(256), 1),
  LLT::vector(ElementCount::getFixed(512), 1),
};

// Feature bitsets.
enum {
  GIFBS_Invalid,
  GIFBS_HasAltivec,
  GIFBS_HasBPERMD,
  GIFBS_HasExtDiv,
  GIFBS_HasFPU,
  GIFBS_HasHTM,
  GIFBS_HasOnlyMSYNC,
  GIFBS_HasP8Altivec,
  GIFBS_HasP8Crypto,
  GIFBS_HasP9Altivec,
  GIFBS_HasSPE,
  GIFBS_HasSYNC,
  GIFBS_HasVSX,
  GIFBS_IsAIX,
  GIFBS_IsISA3_0,
  GIFBS_IsISA3_1,
  GIFBS_MMA,
  GIFBS_NotAIX,
  GIFBS_PrefixInstrs,
  GIFBS_HasDirectMove_HasVSX,
  GIFBS_HasP8Vector_HasVSX,
  GIFBS_HasP9Vector_HasVSX,
};
const static PredicateBitset FeatureBitsets[] {
  {}, // GIFBS_Invalid
  {Feature_HasAltivecBit, },
  {Feature_HasBPERMDBit, },
  {Feature_HasExtDivBit, },
  {Feature_HasFPUBit, },
  {Feature_HasHTMBit, },
  {Feature_HasOnlyMSYNCBit, },
  {Feature_HasP8AltivecBit, },
  {Feature_HasP8CryptoBit, },
  {Feature_HasP9AltivecBit, },
  {Feature_HasSPEBit, },
  {Feature_HasSYNCBit, },
  {Feature_HasVSXBit, },
  {Feature_IsAIXBit, },
  {Feature_IsISA3_0Bit, },
  {Feature_IsISA3_1Bit, },
  {Feature_MMABit, },
  {Feature_NotAIXBit, },
  {Feature_PrefixInstrsBit, },
  {Feature_HasDirectMoveBit, Feature_HasVSXBit, },
  {Feature_HasP8VectorBit, Feature_HasVSXBit, },
  {Feature_HasP9VectorBit, Feature_HasVSXBit, },
};

// ComplexPattern predicates.
enum {
  GICP_Invalid,
};
// See constructor for table contents

// PatFrag predicates.
enum {
  GIPFP_I64_Predicate_Msk2Imm = GIPFP_I64_Invalid + 1,
  GIPFP_I64_Predicate_Msk4Imm,
  GIPFP_I64_Predicate_Msk8Imm,
  GIPFP_I64_Predicate_i32immNonAllOneNonZero,
  GIPFP_I64_Predicate_imm32SExt16,
  GIPFP_I64_Predicate_imm64SExt16,
  GIPFP_I64_Predicate_imm64ZExt32,
  GIPFP_I64_Predicate_immNonAllOneAnyExt8,
  GIPFP_I64_Predicate_immSExt5NonZero,
};
bool PPCInstructionSelector::testImmPredicate_I64(unsigned PredicateID, int64_t Imm) const {
  switch (PredicateID) {
  case GIPFP_I64_Predicate_Msk2Imm: {
     return isUInt<2>(Imm); 
    llvm_unreachable("ImmediateCode should have returned");
    return false;
  }
  case GIPFP_I64_Predicate_Msk4Imm: {
     return isUInt<4>(Imm); 
    llvm_unreachable("ImmediateCode should have returned");
    return false;
  }
  case GIPFP_I64_Predicate_Msk8Imm: {
     return isUInt<8>(Imm); 
    llvm_unreachable("ImmediateCode should have returned");
    return false;
  }
  case GIPFP_I64_Predicate_i32immNonAllOneNonZero: {
     return Imm && (Imm != -1); 
    llvm_unreachable("ImmediateCode should have returned");
    return false;
  }
  case GIPFP_I64_Predicate_imm32SExt16: {
    
  // imm32SExt16 predicate - True if the i32 immediate fits in a 16-bit
  // sign extended field.  Used by instructions like 'addi'.
  return (int32_t)Imm == (short)Imm;

    llvm_unreachable("ImmediateCode should have returned");
    return false;
  }
  case GIPFP_I64_Predicate_imm64SExt16: {
    
  // imm64SExt16 predicate - True if the i64 immediate fits in a 16-bit
  // sign extended field.  Used by instructions like 'addi'.
  return (int64_t)Imm == (short)Imm;

    llvm_unreachable("ImmediateCode should have returned");
    return false;
  }
  case GIPFP_I64_Predicate_imm64ZExt32: {
    
  // imm64ZExt32 predicate - True if the i64 immediate fits in a 32-bit
  // zero extended field.
  return isUInt<32>(Imm);

    llvm_unreachable("ImmediateCode should have returned");
    return false;
  }
  case GIPFP_I64_Predicate_immNonAllOneAnyExt8: {
    
  return (isInt<8>(Imm) && (Imm != -1)) || (isUInt<8>(Imm) && (Imm != 0xFF));

    llvm_unreachable("ImmediateCode should have returned");
    return false;
  }
  case GIPFP_I64_Predicate_immSExt5NonZero: {
     return Imm && isInt<5>(Imm); 
    llvm_unreachable("ImmediateCode should have returned");
    return false;
  }
  }
  llvm_unreachable("Unknown predicate");
  return false;
}
bool PPCInstructionSelector::testImmPredicate_APFloat(unsigned PredicateID, const APFloat & Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool PPCInstructionSelector::testImmPredicate_APInt(unsigned PredicateID, const APInt & Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool PPCInstructionSelector::testMIPredicate_MI(unsigned PredicateID, const MachineInstr & MI, const std::array<const MachineOperand *, 3> &Operands) const {
  const MachineFunction &MF = *MI.getParent()->getParent();
  const MachineRegisterInfo &MRI = MF.getRegInfo();
  (void)MRI;
  llvm_unreachable("Unknown predicate");
  return false;
}

PPCInstructionSelector::ComplexMatcherMemFn
PPCInstructionSelector::ComplexPredicateFns[] = {
  nullptr, // GICP_Invalid
};

// Custom renderers.
enum {
  GICR_Invalid,
};
PPCInstructionSelector::CustomRendererFn
PPCInstructionSelector::CustomRenderers[] = {
  nullptr, // GICR_Invalid
};

bool PPCInstructionSelector::selectImpl(MachineInstr &I, CodeGenCoverage &CoverageInfo) const {
  MachineFunction &MF = *I.getParent()->getParent();
  MachineRegisterInfo &MRI = MF.getRegInfo();
  const PredicateBitset AvailableFeatures = getAvailableFeatures();
  NewMIVector OutMIs;
  State.MIs.clear();
  State.MIs.push_back(&I);

  if (executeMatchTable(*this, OutMIs, State, ISelInfo, getMatchTable(), TII, MRI, TRI, RBI, AvailableFeatures, CoverageInfo)) {
    return true;
  }

  return false;
}

const int64_t *PPCInstructionSelector::getMatchTable() const {
  constexpr static int64_t MatchTable0[] = {
    GIM_SwitchOpcode, /*MI*/0, /*[*/45, 223, /*)*//*default:*//*Label 54*/ 28404,
    /*TargetOpcode::G_ADD*//*Label 0*/ 183,
    /*TargetOpcode::G_SUB*//*Label 1*/ 433,
    /*TargetOpcode::G_MUL*//*Label 2*/ 757,
    /*TargetOpcode::G_SDIV*//*Label 3*/ 933,
    /*TargetOpcode::G_UDIV*//*Label 4*/ 1061,
    /*TargetOpcode::G_SREM*//*Label 5*/ 1189,
    /*TargetOpcode::G_UREM*//*Label 6*/ 1321, 0, 0,
    /*TargetOpcode::G_AND*//*Label 7*/ 1453,
    /*TargetOpcode::G_OR*//*Label 8*/ 2069,
    /*TargetOpcode::G_XOR*//*Label 9*/ 2685, 0, 0, 0, 0, 0, 0, 0, 0,
    /*TargetOpcode::G_BUILD_VECTOR*//*Label 10*/ 4030, 0, 0, 0, 0,
    /*TargetOpcode::G_BITCAST*//*Label 11*/ 4422, 0, 0,
    /*TargetOpcode::G_INTRINSIC_TRUNC*//*Label 12*/ 5997,
    /*TargetOpcode::G_INTRINSIC_ROUND*//*Label 13*/ 6107, 0, 0,
    /*TargetOpcode::G_READCYCLECOUNTER*//*Label 14*/ 6217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /*TargetOpcode::G_FENCE*//*Label 15*/ 6235, 0, 0,
    /*TargetOpcode::G_INTRINSIC*//*Label 16*/ 6342,
    /*TargetOpcode::G_INTRINSIC_W_SIDE_EFFECTS*//*Label 17*/ 18006, 0,
    /*TargetOpcode::G_TRUNC*//*Label 18*/ 20323,
    /*TargetOpcode::G_CONSTANT*//*Label 19*/ 20463, 0, 0, 0,
    /*TargetOpcode::G_SEXT*//*Label 20*/ 20585, 0, 0, 0, 0,
    /*TargetOpcode::G_ASHR*//*Label 21*/ 20607, 0, 0, 0,
    /*TargetOpcode::G_ROTL*//*Label 22*/ 20702, 0, 0,
    /*TargetOpcode::G_SELECT*//*Label 23*/ 20834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /*TargetOpcode::G_UMULH*//*Label 24*/ 21076,
    /*TargetOpcode::G_SMULH*//*Label 25*/ 21180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /*TargetOpcode::G_FADD*//*Label 26*/ 21284,
    /*TargetOpcode::G_FSUB*//*Label 27*/ 21515,
    /*TargetOpcode::G_FMUL*//*Label 28*/ 21746,
    /*TargetOpcode::G_FMA*//*Label 29*/ 21959, 0,
    /*TargetOpcode::G_FDIV*//*Label 30*/ 22569, 0, 0, 0, 0, 0, 0, 0, 0,
    /*TargetOpcode::G_FNEG*//*Label 31*/ 22782,
    /*TargetOpcode::G_FPEXT*//*Label 32*/ 25060,
    /*TargetOpcode::G_FPTRUNC*//*Label 33*/ 25109,
    /*TargetOpcode::G_FPTOSI*//*Label 34*/ 25169,
    /*TargetOpcode::G_FPTOUI*//*Label 35*/ 25266,
    /*TargetOpcode::G_SITOFP*//*Label 36*/ 25363,
    /*TargetOpcode::G_UITOFP*//*Label 37*/ 25461,
    /*TargetOpcode::G_FABS*//*Label 38*/ 25559,
    /*TargetOpcode::G_FCOPYSIGN*//*Label 39*/ 25731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /*TargetOpcode::G_BR*//*Label 40*/ 25959, 0, 0, 0, 0,
    /*TargetOpcode::G_CTTZ*//*Label 41*/ 25972, 0,
    /*TargetOpcode::G_CTLZ*//*Label 42*/ 26106, 0,
    /*TargetOpcode::G_CTPOP*//*Label 43*/ 26236,
    /*TargetOpcode::G_BSWAP*//*Label 44*/ 26366, 0,
    /*TargetOpcode::G_FCEIL*//*Label 45*/ 26415, 0, 0,
    /*TargetOpcode::G_FSQRT*//*Label 46*/ 26525,
    /*TargetOpcode::G_FFLOOR*//*Label 47*/ 26688, 0, 0, 0, 0, 0, 0,
    /*TargetOpcode::G_STRICT_FADD*//*Label 48*/ 26798,
    /*TargetOpcode::G_STRICT_FSUB*//*Label 49*/ 27011,
    /*TargetOpcode::G_STRICT_FMUL*//*Label 50*/ 27224,
    /*TargetOpcode::G_STRICT_FDIV*//*Label 51*/ 27437, 0,
    /*TargetOpcode::G_STRICT_FMA*//*Label 52*/ 27650,
    /*TargetOpcode::G_STRICT_FSQRT*//*Label 53*/ 28241,
    // Label 0: @183
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 8, /*)*//*default:*//*Label 62*/ 432,
    /*GILLT_s32*//*Label 55*/ 196,
    /*GILLT_s64*//*Label 56*/ 254,
    /*GILLT_s128*//*Label 57*/ 312,
    /*GILLT_v2s64*//*Label 58*/ 336,
    /*GILLT_v4s32*//*Label 59*/ 360,
    /*GILLT_v8s16*//*Label 60*/ 384,
    /*GILLT_v16s8*//*Label 61*/ 408,
    // Label 55: @196
    GIM_Try, /*On fail goto*//*Label 63*/ 253,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 64*/ 243, // Rule ID 104 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        GIM_CheckI64ImmPredicate, /*MI*/1, /*Predicate*/GIPFP_I64_Predicate_imm32SExt16,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (add:{ *:[i32] } i32:{ *:[i32] }:$rA, (imm:{ *:[i32] })<<P:Predicate_imm32SExt16>>:$imm)  =>  (ADDI:{ *:[i32] } i32:{ *:[i32] }:$rA, (imm:{ *:[i32] }):$imm)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ADDI,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rA
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // imm
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 104,
        GIR_Done,
      // Label 64: @243
      GIM_Try, /*On fail goto*//*Label 65*/ 252, // Rule ID 194 //
        // (add:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (ADD4:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::ADD4,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 194,
        GIR_Done,
      // Label 65: @252
      GIM_Reject,
    // Label 63: @253
    GIM_Reject,
    // Label 56: @254
    GIM_Try, /*On fail goto*//*Label 66*/ 311,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      GIM_Try, /*On fail goto*//*Label 67*/ 301, // Rule ID 652 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        GIM_CheckI64ImmPredicate, /*MI*/1, /*Predicate*/GIPFP_I64_Predicate_imm64SExt16,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (add:{ *:[i64] } i64:{ *:[i64] }:$rA, (imm:{ *:[i64] })<<P:Predicate_imm64SExt16>>:$imm)  =>  (ADDI8:{ *:[i64] } i64:{ *:[i64] }:$rA, (imm:{ *:[i64] }):$imm)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ADDI8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rA
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // imm
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 652,
        GIR_Done,
      // Label 67: @301
      GIM_Try, /*On fail goto*//*Label 68*/ 310, // Rule ID 648 //
        // (add:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)  =>  (ADD8:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::ADD8,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 648,
        GIR_Done,
      // Label 68: @310
      GIM_Reject,
    // Label 66: @311
    GIM_Reject,
    // Label 57: @312
    GIM_Try, /*On fail goto*//*Label 69*/ 335, // Rule ID 464 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (add:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)  =>  (VADDUQM:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VADDUQM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 464,
      GIR_Done,
    // Label 69: @335
    GIM_Reject,
    // Label 58: @336
    GIM_Try, /*On fail goto*//*Label 70*/ 359, // Rule ID 463 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (add:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VADDUDM:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VADDUDM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 463,
      GIR_Done,
    // Label 70: @359
    GIM_Reject,
    // Label 59: @360
    GIM_Try, /*On fail goto*//*Label 71*/ 383, // Rule ID 297 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (add:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VADDUWM:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VADDUWM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 297,
      GIR_Done,
    // Label 71: @383
    GIM_Reject,
    // Label 60: @384
    GIM_Try, /*On fail goto*//*Label 72*/ 407, // Rule ID 296 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (add:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VADDUHM:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VADDUHM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 296,
      GIR_Done,
    // Label 72: @407
    GIM_Reject,
    // Label 61: @408
    GIM_Try, /*On fail goto*//*Label 73*/ 431, // Rule ID 295 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (add:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VADDUBM:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VADDUBM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 295,
      GIR_Done,
    // Label 73: @431
    GIM_Reject,
    // Label 62: @432
    GIM_Reject,
    // Label 1: @433
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 8, /*)*//*default:*//*Label 81*/ 756,
    /*GILLT_s32*//*Label 74*/ 446,
    /*GILLT_s64*//*Label 75*/ 506,
    /*GILLT_s128*//*Label 76*/ 566,
    /*GILLT_v2s64*//*Label 77*/ 590,
    /*GILLT_v4s32*//*Label 78*/ 649,
    /*GILLT_v8s16*//*Label 79*/ 708,
    /*GILLT_v16s8*//*Label 80*/ 732,
    // Label 74: @446
    GIM_Try, /*On fail goto*//*Label 82*/ 505,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 83*/ 482, // Rule ID 206 //
        GIM_CheckConstantInt, /*MI*/0, /*Op*/1, 0,
        // (sub:{ *:[i32] } 0:{ *:[i32] }, i32:{ *:[i32] }:$rA)  =>  (NEG:{ *:[i32] } i32:{ *:[i32] }:$rA)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::NEG,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rA
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 206,
        GIR_Done,
      // Label 83: @482
      GIM_Try, /*On fail goto*//*Label 84*/ 504, // Rule ID 204 //
        // (sub:{ *:[i32] } i32:{ *:[i32] }:$rB, i32:{ *:[i32] }:$rA)  =>  (SUBF:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SUBF,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 204,
        GIR_Done,
      // Label 84: @504
      GIM_Reject,
    // Label 82: @505
    GIM_Reject,
    // Label 75: @506
    GIM_Try, /*On fail goto*//*Label 85*/ 565,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      GIM_Try, /*On fail goto*//*Label 86*/ 542, // Rule ID 658 //
        GIM_CheckConstantInt, /*MI*/0, /*Op*/1, 0,
        // (sub:{ *:[i64] } 0:{ *:[i64] }, i64:{ *:[i64] }:$rA)  =>  (NEG8:{ *:[i64] } i64:{ *:[i64] }:$rA)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::NEG8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rA
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 658,
        GIR_Done,
      // Label 86: @542
      GIM_Try, /*On fail goto*//*Label 87*/ 564, // Rule ID 657 //
        // (sub:{ *:[i64] } i64:{ *:[i64] }:$rB, i64:{ *:[i64] }:$rA)  =>  (SUBF8:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SUBF8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 657,
        GIR_Done,
      // Label 87: @564
      GIM_Reject,
    // Label 85: @565
    GIM_Reject,
    // Label 76: @566
    GIM_Try, /*On fail goto*//*Label 88*/ 589, // Rule ID 469 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (sub:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)  =>  (VSUBUQM:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VSUBUQM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 469,
      GIR_Done,
    // Label 88: @589
    GIM_Reject,
    // Label 77: @590
    GIM_Try, /*On fail goto*//*Label 89*/ 648,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 90*/ 636, // Rule ID 536 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcodeIsEither, /*MI*/1, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllZeros, /*MI*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (sub:{ *:[v2i64] } immAllZerosV:{ *:[v2i64] }, v2i64:{ *:[v2i64] }:$vB)  =>  (VNEGD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VNEGD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 536,
        GIR_Done,
      // Label 90: @636
      GIM_Try, /*On fail goto*//*Label 91*/ 647, // Rule ID 468 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        // (sub:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VSUBUDM:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VSUBUDM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 468,
        GIR_Done,
      // Label 91: @647
      GIM_Reject,
    // Label 89: @648
    GIM_Reject,
    // Label 78: @649
    GIM_Try, /*On fail goto*//*Label 92*/ 707,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 93*/ 695, // Rule ID 535 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcodeIsEither, /*MI*/1, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllZeros, /*MI*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (sub:{ *:[v4i32] } immAllZerosV:{ *:[v4i32] }, v4i32:{ *:[v4i32] }:$vB)  =>  (VNEGW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VNEGW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 535,
        GIR_Done,
      // Label 93: @695
      GIM_Try, /*On fail goto*//*Label 94*/ 706, // Rule ID 367 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        // (sub:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSUBUWM:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VSUBUWM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 367,
        GIR_Done,
      // Label 94: @706
      GIM_Reject,
    // Label 92: @707
    GIM_Reject,
    // Label 79: @708
    GIM_Try, /*On fail goto*//*Label 95*/ 731, // Rule ID 366 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (sub:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VSUBUHM:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VSUBUHM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 366,
      GIR_Done,
    // Label 95: @731
    GIM_Reject,
    // Label 80: @732
    GIM_Try, /*On fail goto*//*Label 96*/ 755, // Rule ID 365 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (sub:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VSUBUBM:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VSUBUBM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 365,
      GIR_Done,
    // Label 96: @755
    GIM_Reject,
    // Label 81: @756
    GIM_Reject,
    // Label 2: @757
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 101*/ 932,
    /*GILLT_s32*//*Label 97*/ 768,
    /*GILLT_s64*//*Label 98*/ 826, 0,
    /*GILLT_v2s64*//*Label 99*/ 884,
    /*GILLT_v4s32*//*Label 100*/ 908,
    // Label 97: @768
    GIM_Try, /*On fail goto*//*Label 102*/ 825,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 103*/ 815, // Rule ID 108 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        GIM_CheckI64ImmPredicate, /*MI*/1, /*Predicate*/GIPFP_I64_Predicate_imm32SExt16,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (mul:{ *:[i32] } i32:{ *:[i32] }:$rA, (imm:{ *:[i32] })<<P:Predicate_imm32SExt16>>:$imm)  =>  (MULLI:{ *:[i32] } i32:{ *:[i32] }:$rA, (imm:{ *:[i32] }):$imm)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MULLI,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rA
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // imm
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 108,
        GIR_Done,
      // Label 103: @815
      GIM_Try, /*On fail goto*//*Label 104*/ 824, // Rule ID 203 //
        // (mul:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (MULLW:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::MULLW,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 203,
        GIR_Done,
      // Label 104: @824
      GIM_Reject,
    // Label 102: @825
    GIM_Reject,
    // Label 98: @826
    GIM_Try, /*On fail goto*//*Label 105*/ 883,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      GIM_Try, /*On fail goto*//*Label 106*/ 873, // Rule ID 692 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        GIM_CheckI64ImmPredicate, /*MI*/1, /*Predicate*/GIPFP_I64_Predicate_imm64SExt16,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (mul:{ *:[i64] } i64:{ *:[i64] }:$rA, (imm:{ *:[i64] })<<P:Predicate_imm64SExt16>>:$imm)  =>  (MULLI8:{ *:[i64] } i64:{ *:[i64] }:$rA, (imm:{ *:[i64] }):$imm)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MULLI8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rA
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // imm
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 692,
        GIR_Done,
      // Label 106: @873
      GIM_Try, /*On fail goto*//*Label 107*/ 882, // Rule ID 691 //
        // (mul:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)  =>  (MULLD:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::MULLD,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 691,
        GIR_Done,
      // Label 107: @882
      GIM_Reject,
    // Label 105: @883
    GIM_Reject,
    // Label 99: @884
    GIM_Try, /*On fail goto*//*Label 108*/ 907, // Rule ID 1099 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (mul:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMULLD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMULLD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1099,
      GIR_Done,
    // Label 108: @907
    GIM_Reject,
    // Label 100: @908
    GIM_Try, /*On fail goto*//*Label 109*/ 931, // Rule ID 455 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (mul:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMULUWM:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMULUWM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 455,
      GIR_Done,
    // Label 109: @931
    GIM_Reject,
    // Label 101: @932
    GIM_Reject,
    // Label 3: @933
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 115*/ 1060,
    /*GILLT_s32*//*Label 110*/ 944,
    /*GILLT_s64*//*Label 111*/ 966,
    /*GILLT_s128*//*Label 112*/ 988,
    /*GILLT_v2s64*//*Label 113*/ 1012,
    /*GILLT_v4s32*//*Label 114*/ 1036,
    // Label 110: @944
    GIM_Try, /*On fail goto*//*Label 116*/ 965, // Rule ID 197 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (sdiv:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (DIVW:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::DIVW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 197,
      GIR_Done,
    // Label 116: @965
    GIM_Reject,
    // Label 111: @966
    GIM_Try, /*On fail goto*//*Label 117*/ 987, // Rule ID 683 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      // (sdiv:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)  =>  (DIVD:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::DIVD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 683,
      GIR_Done,
    // Label 117: @987
    GIM_Reject,
    // Label 112: @988
    GIM_Try, /*On fail goto*//*Label 118*/ 1011, // Rule ID 1121 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (sdiv:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)  =>  (VDIVSQ:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VDIVSQ,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1121,
      GIR_Done,
    // Label 118: @1011
    GIM_Reject,
    // Label 113: @1012
    GIM_Try, /*On fail goto*//*Label 119*/ 1035, // Rule ID 1110 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (sdiv:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VDIVSD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VDIVSD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1110,
      GIR_Done,
    // Label 119: @1035
    GIM_Reject,
    // Label 114: @1036
    GIM_Try, /*On fail goto*//*Label 120*/ 1059, // Rule ID 1108 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (sdiv:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VDIVSW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VDIVSW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1108,
      GIR_Done,
    // Label 120: @1059
    GIM_Reject,
    // Label 115: @1060
    GIM_Reject,
    // Label 4: @1061
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 126*/ 1188,
    /*GILLT_s32*//*Label 121*/ 1072,
    /*GILLT_s64*//*Label 122*/ 1094,
    /*GILLT_s128*//*Label 123*/ 1116,
    /*GILLT_v2s64*//*Label 124*/ 1140,
    /*GILLT_v4s32*//*Label 125*/ 1164,
    // Label 121: @1072
    GIM_Try, /*On fail goto*//*Label 127*/ 1093, // Rule ID 198 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (udiv:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (DIVWU:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::DIVWU,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 198,
      GIR_Done,
    // Label 127: @1093
    GIM_Reject,
    // Label 122: @1094
    GIM_Try, /*On fail goto*//*Label 128*/ 1115, // Rule ID 684 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      // (udiv:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)  =>  (DIVDU:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::DIVDU,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 684,
      GIR_Done,
    // Label 128: @1115
    GIM_Reject,
    // Label 123: @1116
    GIM_Try, /*On fail goto*//*Label 129*/ 1139, // Rule ID 1122 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (udiv:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)  =>  (VDIVUQ:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VDIVUQ,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1122,
      GIR_Done,
    // Label 129: @1139
    GIM_Reject,
    // Label 124: @1140
    GIM_Try, /*On fail goto*//*Label 130*/ 1163, // Rule ID 1111 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (udiv:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VDIVUD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VDIVUD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1111,
      GIR_Done,
    // Label 130: @1163
    GIM_Reject,
    // Label 125: @1164
    GIM_Try, /*On fail goto*//*Label 131*/ 1187, // Rule ID 1109 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (udiv:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VDIVUW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VDIVUW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1109,
      GIR_Done,
    // Label 131: @1187
    GIM_Reject,
    // Label 126: @1188
    GIM_Reject,
    // Label 5: @1189
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 137*/ 1320,
    /*GILLT_s32*//*Label 132*/ 1200,
    /*GILLT_s64*//*Label 133*/ 1224,
    /*GILLT_s128*//*Label 134*/ 1248,
    /*GILLT_v2s64*//*Label 135*/ 1272,
    /*GILLT_v4s32*//*Label 136*/ 1296,
    // Label 132: @1200
    GIM_Try, /*On fail goto*//*Label 138*/ 1223, // Rule ID 192 //
      GIM_CheckFeatures, GIFBS_IsISA3_0,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (srem:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (MODSW:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::MODSW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 192,
      GIR_Done,
    // Label 138: @1223
    GIM_Reject,
    // Label 133: @1224
    GIM_Try, /*On fail goto*//*Label 139*/ 1247, // Rule ID 688 //
      GIM_CheckFeatures, GIFBS_IsISA3_0,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      // (srem:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)  =>  (MODSD:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::MODSD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 688,
      GIR_Done,
    // Label 139: @1247
    GIM_Reject,
    // Label 134: @1248
    GIM_Try, /*On fail goto*//*Label 140*/ 1271, // Rule ID 1131 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (srem:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)  =>  (VMODSQ:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMODSQ,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1131,
      GIR_Done,
    // Label 140: @1271
    GIM_Reject,
    // Label 135: @1272
    GIM_Try, /*On fail goto*//*Label 141*/ 1295, // Rule ID 1106 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (srem:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMODSD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMODSD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1106,
      GIR_Done,
    // Label 141: @1295
    GIM_Reject,
    // Label 136: @1296
    GIM_Try, /*On fail goto*//*Label 142*/ 1319, // Rule ID 1104 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (srem:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMODSW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMODSW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1104,
      GIR_Done,
    // Label 142: @1319
    GIM_Reject,
    // Label 137: @1320
    GIM_Reject,
    // Label 6: @1321
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 148*/ 1452,
    /*GILLT_s32*//*Label 143*/ 1332,
    /*GILLT_s64*//*Label 144*/ 1356,
    /*GILLT_s128*//*Label 145*/ 1380,
    /*GILLT_v2s64*//*Label 146*/ 1404,
    /*GILLT_v4s32*//*Label 147*/ 1428,
    // Label 143: @1332
    GIM_Try, /*On fail goto*//*Label 149*/ 1355, // Rule ID 193 //
      GIM_CheckFeatures, GIFBS_IsISA3_0,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (urem:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (MODUW:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::MODUW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 193,
      GIR_Done,
    // Label 149: @1355
    GIM_Reject,
    // Label 144: @1356
    GIM_Try, /*On fail goto*//*Label 150*/ 1379, // Rule ID 689 //
      GIM_CheckFeatures, GIFBS_IsISA3_0,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      // (urem:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)  =>  (MODUD:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::MODUD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 689,
      GIR_Done,
    // Label 150: @1379
    GIM_Reject,
    // Label 145: @1380
    GIM_Try, /*On fail goto*//*Label 151*/ 1403, // Rule ID 1132 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (urem:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)  =>  (VMODUQ:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMODUQ,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1132,
      GIR_Done,
    // Label 151: @1403
    GIM_Reject,
    // Label 146: @1404
    GIM_Try, /*On fail goto*//*Label 152*/ 1427, // Rule ID 1107 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (urem:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMODUD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMODUD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1107,
      GIR_Done,
    // Label 152: @1427
    GIM_Reject,
    // Label 147: @1428
    GIM_Try, /*On fail goto*//*Label 153*/ 1451, // Rule ID 1105 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (urem:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMODUW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMODUW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1105,
      GIR_Done,
    // Label 153: @1451
    GIM_Reject,
    // Label 148: @1452
    GIM_Reject,
    // Label 7: @1453
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/0, 6, /*)*//*default:*//*Label 158*/ 2068,
    /*GILLT_s1*//*Label 154*/ 1465,
    /*GILLT_s32*//*Label 155*/ 1576,
    /*GILLT_s64*//*Label 156*/ 1687, 0, 0,
    /*GILLT_v4s32*//*Label 157*/ 1798,
    // Label 154: @1465
    GIM_Try, /*On fail goto*//*Label 159*/ 1575,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s1,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::CRBITRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 160*/ 1522, // Rule ID 4760 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s1,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s1,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (and:{ *:[i1] } (xor:{ *:[i1] } i1:{ *:[i1] }:$CRB, -1:{ *:[i1] }), i1:{ *:[i1] }:$CRA)  =>  (CRANDC:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CRANDC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // CRD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // CRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // CRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4760,
        GIR_Done,
      // Label 160: @1522
      GIM_Try, /*On fail goto*//*Label 161*/ 1565, // Rule ID 178 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s1,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s1,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (and:{ *:[i1] } i1:{ *:[i1] }:$CRA, (xor:{ *:[i1] } i1:{ *:[i1] }:$CRB, -1:{ *:[i1] }))  =>  (CRANDC:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CRANDC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // CRD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // CRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // CRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 178,
        GIR_Done,
      // Label 161: @1565
      GIM_Try, /*On fail goto*//*Label 162*/ 1574, // Rule ID 172 //
        // (and:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)  =>  (CRAND:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::CRAND,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 172,
        GIR_Done,
      // Label 162: @1574
      GIM_Reject,
    // Label 159: @1575
    GIM_Reject,
    // Label 155: @1576
    GIM_Try, /*On fail goto*//*Label 163*/ 1686,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 164*/ 1633, // Rule ID 4754 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$rB, -1:{ *:[i32] }), i32:{ *:[i32] }:$rS)  =>  (ANDC:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ANDC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4754,
        GIR_Done,
      // Label 164: @1633
      GIM_Try, /*On fail goto*//*Label 165*/ 1676, // Rule ID 120 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (and:{ *:[i32] } i32:{ *:[i32] }:$rS, (xor:{ *:[i32] } i32:{ *:[i32] }:$rB, -1:{ *:[i32] }))  =>  (ANDC:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ANDC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 120,
        GIR_Done,
      // Label 165: @1676
      GIM_Try, /*On fail goto*//*Label 166*/ 1685, // Rule ID 119 //
        // (and:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)  =>  (AND:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::AND,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 119,
        GIR_Done,
      // Label 166: @1685
      GIM_Reject,
    // Label 163: @1686
    GIM_Reject,
    // Label 156: @1687
    GIM_Try, /*On fail goto*//*Label 167*/ 1797,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      GIM_Try, /*On fail goto*//*Label 168*/ 1744, // Rule ID 4767 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$rB, -1:{ *:[i64] }), i64:{ *:[i64] }:$rS)  =>  (ANDC8:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ANDC8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4767,
        GIR_Done,
      // Label 168: @1744
      GIM_Try, /*On fail goto*//*Label 169*/ 1787, // Rule ID 636 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (and:{ *:[i64] } i64:{ *:[i64] }:$rS, (xor:{ *:[i64] } i64:{ *:[i64] }:$rB, -1:{ *:[i64] }))  =>  (ANDC8:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ANDC8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 636,
        GIR_Done,
      // Label 169: @1787
      GIM_Try, /*On fail goto*//*Label 170*/ 1796, // Rule ID 635 //
        // (and:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)  =>  (AND8:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::AND8,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 635,
        GIR_Done,
      // Label 170: @1796
      GIM_Reject,
    // Label 167: @1797
    GIM_Reject,
    // Label 157: @1798
    GIM_Try, /*On fail goto*//*Label 171*/ 2067,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_Try, /*On fail goto*//*Label 172*/ 1865, // Rule ID 4775 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (and:{ *:[v4i32] } (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XB, immAllOnesV:{ *:[v4i32] }), v4i32:{ *:[v4i32] }:$XA)  =>  (XXLANDC:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXLANDC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4775,
        GIR_Done,
      // Label 172: @1865
      GIM_Try, /*On fail goto*//*Label 173*/ 1922, // Rule ID 918 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (and:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XB, immAllOnesV:{ *:[v4i32] }))  =>  (XXLANDC:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXLANDC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 918,
        GIR_Done,
      // Label 173: @1922
      GIM_Try, /*On fail goto*//*Label 174*/ 1937, // Rule ID 917 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (and:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)  =>  (XXLAND:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XXLAND,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 917,
        GIR_Done,
      // Label 174: @1937
      GIM_Try, /*On fail goto*//*Label 175*/ 1994, // Rule ID 4763 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (and:{ *:[v4i32] } (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB, immAllOnesV:{ *:[v4i32] }), v4i32:{ *:[v4i32] }:$vA)  =>  (VANDC:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VANDC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4763,
        GIR_Done,
      // Label 175: @1994
      GIM_Try, /*On fail goto*//*Label 176*/ 2051, // Rule ID 306 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (and:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB, immAllOnesV:{ *:[v4i32] }))  =>  (VANDC:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VANDC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 306,
        GIR_Done,
      // Label 176: @2051
      GIM_Try, /*On fail goto*//*Label 177*/ 2066, // Rule ID 305 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (and:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VAND:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VAND,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 305,
        GIR_Done,
      // Label 177: @2066
      GIM_Reject,
    // Label 171: @2067
    GIM_Reject,
    // Label 158: @2068
    GIM_Reject,
    // Label 8: @2069
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/0, 6, /*)*//*default:*//*Label 182*/ 2684,
    /*GILLT_s1*//*Label 178*/ 2081,
    /*GILLT_s32*//*Label 179*/ 2192,
    /*GILLT_s64*//*Label 180*/ 2303, 0, 0,
    /*GILLT_v4s32*//*Label 181*/ 2414,
    // Label 178: @2081
    GIM_Try, /*On fail goto*//*Label 183*/ 2191,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s1,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::CRBITRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 184*/ 2138, // Rule ID 4761 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s1,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s1,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (or:{ *:[i1] } (xor:{ *:[i1] } i1:{ *:[i1] }:$CRB, -1:{ *:[i1] }), i1:{ *:[i1] }:$CRA)  =>  (CRORC:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CRORC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // CRD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // CRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // CRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4761,
        GIR_Done,
      // Label 184: @2138
      GIM_Try, /*On fail goto*//*Label 185*/ 2181, // Rule ID 179 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s1,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s1,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (or:{ *:[i1] } i1:{ *:[i1] }:$CRA, (xor:{ *:[i1] } i1:{ *:[i1] }:$CRB, -1:{ *:[i1] }))  =>  (CRORC:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CRORC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // CRD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // CRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // CRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 179,
        GIR_Done,
      // Label 185: @2181
      GIM_Try, /*On fail goto*//*Label 186*/ 2190, // Rule ID 174 //
        // (or:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)  =>  (CROR:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::CROR,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 174,
        GIR_Done,
      // Label 186: @2190
      GIM_Reject,
    // Label 183: @2191
    GIM_Reject,
    // Label 179: @2192
    GIM_Try, /*On fail goto*//*Label 187*/ 2302,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 188*/ 2249, // Rule ID 4755 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (or:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$rB, -1:{ *:[i32] }), i32:{ *:[i32] }:$rS)  =>  (ORC:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ORC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4755,
        GIR_Done,
      // Label 188: @2249
      GIM_Try, /*On fail goto*//*Label 189*/ 2292, // Rule ID 123 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (or:{ *:[i32] } i32:{ *:[i32] }:$rS, (xor:{ *:[i32] } i32:{ *:[i32] }:$rB, -1:{ *:[i32] }))  =>  (ORC:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ORC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 123,
        GIR_Done,
      // Label 189: @2292
      GIM_Try, /*On fail goto*//*Label 190*/ 2301, // Rule ID 121 //
        // (or:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)  =>  (OR:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::OR,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 121,
        GIR_Done,
      // Label 190: @2301
      GIM_Reject,
    // Label 187: @2302
    GIM_Reject,
    // Label 180: @2303
    GIM_Try, /*On fail goto*//*Label 191*/ 2413,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      GIM_Try, /*On fail goto*//*Label 192*/ 2360, // Rule ID 4768 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (or:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$rB, -1:{ *:[i64] }), i64:{ *:[i64] }:$rS)  =>  (ORC8:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ORC8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4768,
        GIR_Done,
      // Label 192: @2360
      GIM_Try, /*On fail goto*//*Label 193*/ 2403, // Rule ID 639 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (or:{ *:[i64] } i64:{ *:[i64] }:$rS, (xor:{ *:[i64] } i64:{ *:[i64] }:$rB, -1:{ *:[i64] }))  =>  (ORC8:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ORC8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 639,
        GIR_Done,
      // Label 193: @2403
      GIM_Try, /*On fail goto*//*Label 194*/ 2412, // Rule ID 637 //
        // (or:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)  =>  (OR8:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::OR8,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 637,
        GIR_Done,
      // Label 194: @2412
      GIM_Reject,
    // Label 191: @2413
    GIM_Reject,
    // Label 181: @2414
    GIM_Try, /*On fail goto*//*Label 195*/ 2683,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_Try, /*On fail goto*//*Label 196*/ 2481, // Rule ID 4778 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (or:{ *:[v4i32] } (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XB, immAllOnesV:{ *:[v4i32] }), v4i32:{ *:[v4i32] }:$XA)  =>  (XXLORC:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXLORC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4778,
        GIR_Done,
      // Label 196: @2481
      GIM_Try, /*On fail goto*//*Label 197*/ 2538, // Rule ID 931 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (or:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XB, immAllOnesV:{ *:[v4i32] }))  =>  (XXLORC:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXLORC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 931,
        GIR_Done,
      // Label 197: @2538
      GIM_Try, /*On fail goto*//*Label 198*/ 2553, // Rule ID 920 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (or:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)  =>  (XXLOR:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XXLOR,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 920,
        GIR_Done,
      // Label 198: @2553
      GIM_Try, /*On fail goto*//*Label 199*/ 2610, // Rule ID 4766 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (or:{ *:[v4i32] } (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB, immAllOnesV:{ *:[v4i32] }), v4i32:{ *:[v4i32] }:$vA)  =>  (VORC:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VORC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4766,
        GIR_Done,
      // Label 199: @2610
      GIM_Try, /*On fail goto*//*Label 200*/ 2667, // Rule ID 483 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (or:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB, immAllOnesV:{ *:[v4i32] }))  =>  (VORC:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VORC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 483,
        GIR_Done,
      // Label 200: @2667
      GIM_Try, /*On fail goto*//*Label 201*/ 2682, // Rule ID 380 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (or:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VOR:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VOR,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 380,
        GIR_Done,
      // Label 201: @2682
      GIM_Reject,
    // Label 195: @2683
    GIM_Reject,
    // Label 182: @2684
    GIM_Reject,
    // Label 9: @2685
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/0, 6, /*)*//*default:*//*Label 206*/ 4029,
    /*GILLT_s1*//*Label 202*/ 2697,
    /*GILLT_s32*//*Label 203*/ 2937,
    /*GILLT_s64*//*Label 204*/ 3177, 0, 0,
    /*GILLT_v4s32*//*Label 205*/ 3417,
    // Label 202: @2697
    GIM_Try, /*On fail goto*//*Label 207*/ 2936,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s1,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::CRBITRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 208*/ 2754, // Rule ID 173 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s1,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s1,
        GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i1] } (and:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB), -1:{ *:[i1] })  =>  (CRNAND:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CRNAND,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // CRD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // CRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // CRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 173,
        GIR_Done,
      // Label 208: @2754
      GIM_Try, /*On fail goto*//*Label 209*/ 2797, // Rule ID 176 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_OR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s1,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s1,
        GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i1] } (or:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB), -1:{ *:[i1] })  =>  (CRNOR:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CRNOR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // CRD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // CRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // CRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 176,
        GIR_Done,
      // Label 209: @2797
      GIM_Try, /*On fail goto*//*Label 210*/ 2840, // Rule ID 4758 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s1,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s1,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i1] } (xor:{ *:[i1] } i1:{ *:[i1] }:$CRA, -1:{ *:[i1] }), i1:{ *:[i1] }:$CRB)  =>  (CREQV:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CREQV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // CRD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // CRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // CRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4758,
        GIR_Done,
      // Label 210: @2840
      GIM_Try, /*On fail goto*//*Label 211*/ 2883, // Rule ID 177 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s1,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s1,
        GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i1] } (xor:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB), -1:{ *:[i1] })  =>  (CREQV:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CREQV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // CRD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // CRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // CRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 177,
        GIR_Done,
      // Label 211: @2883
      GIM_Try, /*On fail goto*//*Label 212*/ 2926, // Rule ID 4759 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s1,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s1,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i1] } i1:{ *:[i1] }:$CRB, (xor:{ *:[i1] } i1:{ *:[i1] }:$CRA, -1:{ *:[i1] }))  =>  (CREQV:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CREQV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // CRD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // CRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // CRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4759,
        GIR_Done,
      // Label 212: @2926
      GIM_Try, /*On fail goto*//*Label 213*/ 2935, // Rule ID 175 //
        // (xor:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)  =>  (CRXOR:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::CRXOR,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 175,
        GIR_Done,
      // Label 213: @2935
      GIM_Reject,
    // Label 207: @2936
    GIM_Reject,
    // Label 203: @2937
    GIM_Try, /*On fail goto*//*Label 214*/ 3176,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 215*/ 2994, // Rule ID 118 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB), -1:{ *:[i32] })  =>  (NAND:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::NAND,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 118,
        GIR_Done,
      // Label 215: @2994
      GIM_Try, /*On fail goto*//*Label 216*/ 3037, // Rule ID 122 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_OR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB), -1:{ *:[i32] })  =>  (NOR:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::NOR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 122,
        GIR_Done,
      // Label 216: @3037
      GIM_Try, /*On fail goto*//*Label 217*/ 3080, // Rule ID 4756 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$rS, -1:{ *:[i32] }), i32:{ *:[i32] }:$rB)  =>  (EQV:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::EQV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4756,
        GIR_Done,
      // Label 217: @3080
      GIM_Try, /*On fail goto*//*Label 218*/ 3123, // Rule ID 124 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB), -1:{ *:[i32] })  =>  (EQV:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::EQV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 124,
        GIR_Done,
      // Label 218: @3123
      GIM_Try, /*On fail goto*//*Label 219*/ 3166, // Rule ID 4757 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i32] } i32:{ *:[i32] }:$rB, (xor:{ *:[i32] } i32:{ *:[i32] }:$rS, -1:{ *:[i32] }))  =>  (EQV:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::EQV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4757,
        GIR_Done,
      // Label 219: @3166
      GIM_Try, /*On fail goto*//*Label 220*/ 3175, // Rule ID 125 //
        // (xor:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)  =>  (XOR:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XOR,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 125,
        GIR_Done,
      // Label 220: @3175
      GIM_Reject,
    // Label 214: @3176
    GIM_Reject,
    // Label 204: @3177
    GIM_Try, /*On fail goto*//*Label 221*/ 3416,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      GIM_Try, /*On fail goto*//*Label 222*/ 3234, // Rule ID 634 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB), -1:{ *:[i64] })  =>  (NAND8:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::NAND8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 634,
        GIR_Done,
      // Label 222: @3234
      GIM_Try, /*On fail goto*//*Label 223*/ 3277, // Rule ID 638 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_OR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB), -1:{ *:[i64] })  =>  (NOR8:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::NOR8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 638,
        GIR_Done,
      // Label 223: @3277
      GIM_Try, /*On fail goto*//*Label 224*/ 3320, // Rule ID 4769 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$rS, -1:{ *:[i64] }), i64:{ *:[i64] }:$rB)  =>  (EQV8:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::EQV8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4769,
        GIR_Done,
      // Label 224: @3320
      GIM_Try, /*On fail goto*//*Label 225*/ 3363, // Rule ID 640 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB), -1:{ *:[i64] })  =>  (EQV8:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::EQV8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 640,
        GIR_Done,
      // Label 225: @3363
      GIM_Try, /*On fail goto*//*Label 226*/ 3406, // Rule ID 4770 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i64] } i64:{ *:[i64] }:$rB, (xor:{ *:[i64] } i64:{ *:[i64] }:$rS, -1:{ *:[i64] }))  =>  (EQV8:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::EQV8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4770,
        GIR_Done,
      // Label 226: @3406
      GIM_Try, /*On fail goto*//*Label 227*/ 3415, // Rule ID 641 //
        // (xor:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)  =>  (XOR8:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XOR8,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 641,
        GIR_Done,
      // Label 227: @3415
      GIM_Reject,
    // Label 221: @3416
    GIM_Reject,
    // Label 205: @3417
    GIM_Try, /*On fail goto*//*Label 228*/ 4028,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_Try, /*On fail goto*//*Label 229*/ 3484, // Rule ID 929 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (xor:{ *:[v4i32] } (and:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB), immAllOnesV:{ *:[v4i32] })  =>  (XXLNAND:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXLNAND,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 929,
        GIR_Done,
      // Label 229: @3484
      GIM_Try, /*On fail goto*//*Label 230*/ 3541, // Rule ID 919 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_OR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (xor:{ *:[v4i32] } (or:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB), immAllOnesV:{ *:[v4i32] })  =>  (XXLNOR:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXLNOR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 919,
        GIR_Done,
      // Label 230: @3541
      GIM_Try, /*On fail goto*//*Label 231*/ 3598, // Rule ID 4776 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (xor:{ *:[v4i32] } (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, immAllOnesV:{ *:[v4i32] }), v4i32:{ *:[v4i32] }:$XB)  =>  (XXLEQV:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXLEQV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4776,
        GIR_Done,
      // Label 231: @3598
      GIM_Try, /*On fail goto*//*Label 232*/ 3655, // Rule ID 928 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (xor:{ *:[v4i32] } (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB), immAllOnesV:{ *:[v4i32] })  =>  (XXLEQV:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXLEQV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 928,
        GIR_Done,
      // Label 232: @3655
      GIM_Try, /*On fail goto*//*Label 233*/ 3712, // Rule ID 4777 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XB, (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, immAllOnesV:{ *:[v4i32] }))  =>  (XXLEQV:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXLEQV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4777,
        GIR_Done,
      // Label 233: @3712
      GIM_Try, /*On fail goto*//*Label 234*/ 3727, // Rule ID 921 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)  =>  (XXLXOR:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XXLXOR,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 921,
        GIR_Done,
      // Label 234: @3727
      GIM_Try, /*On fail goto*//*Label 235*/ 3784, // Rule ID 482 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (xor:{ *:[v4i32] } (and:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB), immAllOnesV:{ *:[v4i32] })  =>  (VNAND:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VNAND,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 482,
        GIR_Done,
      // Label 235: @3784
      GIM_Try, /*On fail goto*//*Label 236*/ 3841, // Rule ID 379 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_OR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (xor:{ *:[v4i32] } (or:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB), immAllOnesV:{ *:[v4i32] })  =>  (VNOR:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VNOR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 379,
        GIR_Done,
      // Label 236: @3841
      GIM_Try, /*On fail goto*//*Label 237*/ 3898, // Rule ID 4764 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (xor:{ *:[v4i32] } (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, immAllOnesV:{ *:[v4i32] }), v4i32:{ *:[v4i32] }:$vB)  =>  (VEQV:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEQV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4764,
        GIR_Done,
      // Label 237: @3898
      GIM_Try, /*On fail goto*//*Label 238*/ 3955, // Rule ID 481 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (xor:{ *:[v4i32] } (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB), immAllOnesV:{ *:[v4i32] })  =>  (VEQV:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEQV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 481,
        GIR_Done,
      // Label 238: @3955
      GIM_Try, /*On fail goto*//*Label 239*/ 4012, // Rule ID 4765 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB, (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, immAllOnesV:{ *:[v4i32] }))  =>  (VEQV:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEQV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4765,
        GIR_Done,
      // Label 239: @4012
      GIM_Try, /*On fail goto*//*Label 240*/ 4027, // Rule ID 381 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VXOR:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VXOR,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 381,
        GIR_Done,
      // Label 240: @4027
      GIM_Reject,
    // Label 228: @4028
    GIM_Reject,
    // Label 206: @4029
    GIM_Reject,
    // Label 10: @4030
    GIM_Try, /*On fail goto*//*Label 241*/ 4282,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 242*/ 4093, // Rule ID 1991 //
        GIM_CheckFeatures, GIFBS_HasDirectMove_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        GIM_CheckI64ImmPredicate, /*MI*/1, /*Predicate*/GIPFP_I64_Predicate_immSExt5NonZero,
        // MIs[1] Operand 1
        // No operand predicates
        // MIs[0] A
        GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
        // MIs[0] A
        GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/3, /*OtherMI*/0, /*OtherOpIdx*/1,
        // MIs[0] A
        GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/4, /*OtherMI*/0, /*OtherOpIdx*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (build_vector:{ *:[v4i32] } (imm:{ *:[i32] })<<P:Predicate_immSExt5NonZero>>:$A, (imm:{ *:[i32] })<<P:Predicate_immSExt5NonZero>>:$A, (imm:{ *:[i32] })<<P:Predicate_immSExt5NonZero>>:$A, (imm:{ *:[i32] })<<P:Predicate_immSExt5NonZero>>:$A)  =>  (VSPLTISW:{ *:[v4i32] } (imm:{ *:[i32] }):$A)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSPLTISW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // A
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1991,
        GIR_Done,
      // Label 242: @4093
      GIM_Try, /*On fail goto*//*Label 243*/ 4143, // Rule ID 3333 //
        GIM_CheckFeatures, GIFBS_PrefixInstrs,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        GIM_CheckI64ImmPredicate, /*MI*/1, /*Predicate*/GIPFP_I64_Predicate_i32immNonAllOneNonZero,
        // MIs[1] Operand 1
        // No operand predicates
        // MIs[0] A
        GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
        // MIs[0] A
        GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/3, /*OtherMI*/0, /*OtherOpIdx*/1,
        // MIs[0] A
        GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/4, /*OtherMI*/0, /*OtherOpIdx*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (build_vector:{ *:[v4i32] } (imm:{ *:[i32] })<<P:Predicate_i32immNonAllOneNonZero>>:$A, (imm:{ *:[i32] })<<P:Predicate_i32immNonAllOneNonZero>>:$A, (imm:{ *:[i32] })<<P:Predicate_i32immNonAllOneNonZero>>:$A, (imm:{ *:[i32] })<<P:Predicate_i32immNonAllOneNonZero>>:$A)  =>  (XXSPLTIW:{ *:[v4i32] } (imm:{ *:[i32] }):$A)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXSPLTIW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // A
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 3333,
        GIR_Done,
      // Label 243: @4143
      GIM_Try, /*On fail goto*//*Label 244*/ 4281, // Rule ID 1690 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FPTRUNC,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FPTRUNC,
        // MIs[2] A
        GIM_CheckIsSameOperand, /*MI*/2, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/1,
        GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/3, // MIs[3]
        GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_FPTRUNC,
        // MIs[3] A
        GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/1,
        GIM_RecordInsn, /*DefineMI*/4, /*MI*/0, /*OpIdx*/4, // MIs[4]
        GIM_CheckOpcode, /*MI*/4, TargetOpcode::G_FPTRUNC,
        // MIs[4] A
        GIM_CheckIsSameOperand, /*MI*/4, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/3,
        GIM_CheckIsSafeToFold, /*InsnID*/4,
        // (build_vector:{ *:[v4f32] } (fpround:{ *:[f32] } f64:{ *:[f64] }:$A), (fpround:{ *:[f32] } f64:{ *:[f64] }:$A), (fpround:{ *:[f32] } f64:{ *:[f64] }:$A), (fpround:{ *:[f32] } f64:{ *:[f64] }:$A))  =>  (XXSPLTW:{ *:[v4f32] } (SUBREG_TO_REG:{ *:[v4i32] } 1:{ *:[i64] }, (XSCVDPSP:{ *:[f64] } f64:{ *:[f64] }:$A), sub_64:{ *:[i32] }), 0:{ *:[i32] })
        GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_v4s32,
        GIR_MakeTempReg, /*TempRegID*/1, /*TypeID*/GILLT_s64,
        GIR_BuildMI, /*InsnID*/2, /*Opcode*/PPC::XSCVDPSP,
        GIR_AddTempRegister, /*InsnID*/2, /*TempRegID*/1, /*TempRegFlags*/RegState::Define,
        GIR_Copy, /*NewInsnID*/2, /*OldInsnID*/1, /*OpIdx*/1, // A
        GIR_ConstrainSelectedInstOperands, /*InsnID*/2,
        GIR_BuildMI, /*InsnID*/1, /*Opcode*/TargetOpcode::SUBREG_TO_REG,
        GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
        GIR_AddImm, /*InsnID*/1, /*Imm*/1,
        GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/1, /*TempRegFlags*/0,
        GIR_AddImm, /*InsnID*/1, /*Imm*/2,
        GIR_ConstrainOperandRC, /*InsnID*/1, /*Op*/0, PPC::VSRCRegClassID,
        GIR_ConstrainOperandRC, /*InsnID*/1, /*Op*/2, PPC::VSFRCRegClassID,
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXSPLTW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1690,
        GIR_Done,
      // Label 244: @4281
      GIM_Reject,
    // Label 241: @4282
    GIM_Try, /*On fail goto*//*Label 245*/ 4421, // Rule ID 2226 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/17,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      GIM_CheckI64ImmPredicate, /*MI*/1, /*Predicate*/GIPFP_I64_Predicate_immNonAllOneAnyExt8,
      // MIs[1] Operand 1
      // No operand predicates
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/3, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/4, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/5, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/6, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/7, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/8, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/9, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/10, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/11, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/12, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/13, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/14, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/15, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/16, /*OtherMI*/0, /*OtherOpIdx*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (build_vector:{ *:[v16i8] } (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A)  =>  (COPY_TO_REGCLASS:{ *:[v16i8] } (XXSPLTIB:{ *:[v4i32] } (imm:{ *:[i32] }):$A), VSRC:{ *:[i32] })
      GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_v4s32,
      GIR_BuildMI, /*InsnID*/1, /*Opcode*/PPC::XXSPLTIB,
      GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
      GIR_CopyConstantAsSImm, /*NewInsnID*/1, /*OldInsnID*/1, // A
      GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VSRCRegClassID,
      // GIR_Coverage, 2226,
      GIR_Done,
    // Label 245: @4421
    GIM_Reject,
    // Label 11: @4422
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/3, 8, /*)*//*default:*//*Label 251*/ 5996,
    /*GILLT_s128*//*Label 246*/ 4433,
    /*GILLT_v2s64*//*Label 247*/ 4828,
    /*GILLT_v4s32*//*Label 248*/ 5087,
    /*GILLT_v8s16*//*Label 249*/ 5532,
    /*GILLT_v16s8*//*Label 250*/ 5791,
    // Label 246: @4433
    GIM_Try, /*On fail goto*//*Label 252*/ 4487, // Rule ID 1883 //
      GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcodeIsEither, /*MI*/1, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
      GIM_CheckIsBuildVectorAllOnes, /*MI*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (bitconvert:{ *:[v1i128] } immAllOnesV:{ *:[v16i8] })  =>  (COPY_TO_REGCLASS:{ *:[v1i128] } (XXLEQVOnes:{ *:[v4i32] }), VSRC:{ *:[i32] })
      GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_v4s32,
      GIR_BuildMI, /*InsnID*/1, /*Opcode*/PPC::XXLEQVOnes,
      GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VSRCRegClassID,
      // GIR_Coverage, 1883,
      GIR_Done,
    // Label 252: @4487
    GIM_Try, /*On fail goto*//*Label 253*/ 4521, // Rule ID 1299 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v1i128] } VRRC:{ *:[v16i8] }:$src)  =>  VRRC:{ *:[v1i128] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1299,
      GIR_Done,
    // Label 253: @4521
    GIM_Try, /*On fail goto*//*Label 254*/ 4555, // Rule ID 1300 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v1i128] } VRRC:{ *:[v8i16] }:$src)  =>  VRRC:{ *:[v1i128] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1300,
      GIR_Done,
    // Label 254: @4555
    GIM_Try, /*On fail goto*//*Label 255*/ 4589, // Rule ID 1301 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v1i128] } VRRC:{ *:[v4i32] }:$src)  =>  VRRC:{ *:[v1i128] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1301,
      GIR_Done,
    // Label 255: @4589
    GIM_Try, /*On fail goto*//*Label 256*/ 4623, // Rule ID 1302 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v1i128] } VRRC:{ *:[v4f32] }:$src)  =>  VRRC:{ *:[v1i128] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1302,
      GIR_Done,
    // Label 256: @4623
    GIM_Try, /*On fail goto*//*Label 257*/ 4657, // Rule ID 1303 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v1i128] } VRRC:{ *:[v2i64] }:$src)  =>  VRRC:{ *:[v1i128] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1303,
      GIR_Done,
    // Label 257: @4657
    GIM_Try, /*On fail goto*//*Label 258*/ 4691, // Rule ID 1304 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[f128] } VRRC:{ *:[v16i8] }:$src)  =>  VRRC:{ *:[f128] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1304,
      GIR_Done,
    // Label 258: @4691
    GIM_Try, /*On fail goto*//*Label 259*/ 4725, // Rule ID 1305 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[f128] } VRRC:{ *:[v8i16] }:$src)  =>  VRRC:{ *:[f128] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1305,
      GIR_Done,
    // Label 259: @4725
    GIM_Try, /*On fail goto*//*Label 260*/ 4759, // Rule ID 1306 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[f128] } VRRC:{ *:[v4i32] }:$src)  =>  VRRC:{ *:[f128] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1306,
      GIR_Done,
    // Label 260: @4759
    GIM_Try, /*On fail goto*//*Label 261*/ 4793, // Rule ID 1307 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[f128] } VRRC:{ *:[v4f32] }:$src)  =>  VRRC:{ *:[f128] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1307,
      GIR_Done,
    // Label 261: @4793
    GIM_Try, /*On fail goto*//*Label 262*/ 4827, // Rule ID 1308 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[f128] } VRRC:{ *:[v2f64] }:$src)  =>  VRRC:{ *:[f128] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1308,
      GIR_Done,
    // Label 262: @4827
    GIM_Reject,
    // Label 247: @4828
    GIM_Try, /*On fail goto*//*Label 263*/ 4882, // Rule ID 1884 //
      GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcodeIsEither, /*MI*/1, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
      GIM_CheckIsBuildVectorAllOnes, /*MI*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (bitconvert:{ *:[v2i64] } immAllOnesV:{ *:[v16i8] })  =>  (COPY_TO_REGCLASS:{ *:[v2i64] } (XXLEQVOnes:{ *:[v4i32] }), VSRC:{ *:[i32] })
      GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_v4s32,
      GIR_BuildMI, /*InsnID*/1, /*Opcode*/PPC::XXLEQVOnes,
      GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VSRCRegClassID,
      // GIR_Coverage, 1884,
      GIR_Done,
    // Label 263: @4882
    GIM_Try, /*On fail goto*//*Label 264*/ 4916, // Rule ID 1294 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v2i64] } VRRC:{ *:[v16i8] }:$src)  =>  VRRC:{ *:[v2i64] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1294,
      GIR_Done,
    // Label 264: @4916
    GIM_Try, /*On fail goto*//*Label 265*/ 4950, // Rule ID 1295 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v2i64] } VRRC:{ *:[v8i16] }:$src)  =>  VRRC:{ *:[v2i64] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1295,
      GIR_Done,
    // Label 265: @4950
    GIM_Try, /*On fail goto*//*Label 266*/ 4984, // Rule ID 1296 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v2i64] } VRRC:{ *:[v4i32] }:$src)  =>  VRRC:{ *:[v2i64] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1296,
      GIR_Done,
    // Label 266: @4984
    GIM_Try, /*On fail goto*//*Label 267*/ 5018, // Rule ID 1297 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v2i64] } VRRC:{ *:[v4f32] }:$src)  =>  VRRC:{ *:[v2i64] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1297,
      GIR_Done,
    // Label 267: @5018
    GIM_Try, /*On fail goto*//*Label 268*/ 5052, // Rule ID 1298 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v2i64] } VRRC:{ *:[v1i128] }:$src)  =>  VRRC:{ *:[v2i64] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1298,
      GIR_Done,
    // Label 268: @5052
    GIM_Try, /*On fail goto*//*Label 269*/ 5086, // Rule ID 1313 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v2f64] } VRRC:{ *:[f128] }:$src)  =>  VRRC:{ *:[v2f64] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1313,
      GIR_Done,
    // Label 269: @5086
    GIM_Reject,
    // Label 248: @5087
    GIM_Try, /*On fail goto*//*Label 270*/ 5123, // Rule ID 930 //
      GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcodeIsEither, /*MI*/1, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
      GIM_CheckIsBuildVectorAllOnes, /*MI*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (bitconvert:{ *:[v4i32] } immAllOnesV:{ *:[v16i8] })  =>  (XXLEQVOnes:{ *:[v4i32] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXLEQVOnes,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 930,
      GIR_Done,
    // Label 270: @5123
    GIM_Try, /*On fail goto*//*Label 271*/ 5157, // Rule ID 1284 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v4i32] } VRRC:{ *:[v16i8] }:$src)  =>  VRRC:{ *:[v4i32] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1284,
      GIR_Done,
    // Label 271: @5157
    GIM_Try, /*On fail goto*//*Label 272*/ 5191, // Rule ID 1285 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v4i32] } VRRC:{ *:[v8i16] }:$src)  =>  VRRC:{ *:[v4i32] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1285,
      GIR_Done,
    // Label 272: @5191
    GIM_Try, /*On fail goto*//*Label 273*/ 5225, // Rule ID 1286 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v4i32] } VRRC:{ *:[v4f32] }:$src)  =>  VRRC:{ *:[v4i32] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1286,
      GIR_Done,
    // Label 273: @5225
    GIM_Try, /*On fail goto*//*Label 274*/ 5259, // Rule ID 1287 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v4i32] } VRRC:{ *:[v2i64] }:$src)  =>  VRRC:{ *:[v4i32] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1287,
      GIR_Done,
    // Label 274: @5259
    GIM_Try, /*On fail goto*//*Label 275*/ 5293, // Rule ID 1288 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v4i32] } VRRC:{ *:[v1i128] }:$src)  =>  VRRC:{ *:[v4i32] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1288,
      GIR_Done,
    // Label 275: @5293
    GIM_Try, /*On fail goto*//*Label 276*/ 5327, // Rule ID 1289 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v4f32] } VRRC:{ *:[v16i8] }:$src)  =>  VRRC:{ *:[v4f32] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1289,
      GIR_Done,
    // Label 276: @5327
    GIM_Try, /*On fail goto*//*Label 277*/ 5361, // Rule ID 1290 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v4f32] } VRRC:{ *:[v8i16] }:$src)  =>  VRRC:{ *:[v4f32] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1290,
      GIR_Done,
    // Label 277: @5361
    GIM_Try, /*On fail goto*//*Label 278*/ 5395, // Rule ID 1291 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v4f32] } VRRC:{ *:[v4i32] }:$src)  =>  VRRC:{ *:[v4f32] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1291,
      GIR_Done,
    // Label 278: @5395
    GIM_Try, /*On fail goto*//*Label 279*/ 5429, // Rule ID 1292 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v4f32] } VRRC:{ *:[v2i64] }:$src)  =>  VRRC:{ *:[v4f32] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1292,
      GIR_Done,
    // Label 279: @5429
    GIM_Try, /*On fail goto*//*Label 280*/ 5463, // Rule ID 1293 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v4f32] } VRRC:{ *:[v1i128] }:$src)  =>  VRRC:{ *:[v4f32] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1293,
      GIR_Done,
    // Label 280: @5463
    GIM_Try, /*On fail goto*//*Label 281*/ 5497, // Rule ID 1311 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v4i32] } VRRC:{ *:[f128] }:$src)  =>  VRRC:{ *:[v4i32] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1311,
      GIR_Done,
    // Label 281: @5497
    GIM_Try, /*On fail goto*//*Label 282*/ 5531, // Rule ID 1312 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v4f32] } VRRC:{ *:[f128] }:$src)  =>  VRRC:{ *:[v4f32] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1312,
      GIR_Done,
    // Label 282: @5531
    GIM_Reject,
    // Label 249: @5532
    GIM_Try, /*On fail goto*//*Label 283*/ 5586, // Rule ID 1885 //
      GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcodeIsEither, /*MI*/1, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
      GIM_CheckIsBuildVectorAllOnes, /*MI*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (bitconvert:{ *:[v8i16] } immAllOnesV:{ *:[v16i8] })  =>  (COPY_TO_REGCLASS:{ *:[v8i16] } (XXLEQVOnes:{ *:[v4i32] }), VSRC:{ *:[i32] })
      GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_v4s32,
      GIR_BuildMI, /*InsnID*/1, /*Opcode*/PPC::XXLEQVOnes,
      GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VSRCRegClassID,
      // GIR_Coverage, 1885,
      GIR_Done,
    // Label 283: @5586
    GIM_Try, /*On fail goto*//*Label 284*/ 5620, // Rule ID 1279 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v8i16] } VRRC:{ *:[v16i8] }:$src)  =>  VRRC:{ *:[v8i16] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1279,
      GIR_Done,
    // Label 284: @5620
    GIM_Try, /*On fail goto*//*Label 285*/ 5654, // Rule ID 1280 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v8i16] } VRRC:{ *:[v4i32] }:$src)  =>  VRRC:{ *:[v8i16] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1280,
      GIR_Done,
    // Label 285: @5654
    GIM_Try, /*On fail goto*//*Label 286*/ 5688, // Rule ID 1281 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v8i16] } VRRC:{ *:[v4f32] }:$src)  =>  VRRC:{ *:[v8i16] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1281,
      GIR_Done,
    // Label 286: @5688
    GIM_Try, /*On fail goto*//*Label 287*/ 5722, // Rule ID 1282 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v8i16] } VRRC:{ *:[v2i64] }:$src)  =>  VRRC:{ *:[v8i16] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1282,
      GIR_Done,
    // Label 287: @5722
    GIM_Try, /*On fail goto*//*Label 288*/ 5756, // Rule ID 1283 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v8i16] } VRRC:{ *:[v1i128] }:$src)  =>  VRRC:{ *:[v8i16] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1283,
      GIR_Done,
    // Label 288: @5756
    GIM_Try, /*On fail goto*//*Label 289*/ 5790, // Rule ID 1310 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v8i16] } VRRC:{ *:[f128] }:$src)  =>  VRRC:{ *:[v8i16] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1310,
      GIR_Done,
    // Label 289: @5790
    GIM_Reject,
    // Label 250: @5791
    GIM_Try, /*On fail goto*//*Label 290*/ 5825, // Rule ID 1274 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v16i8] } VRRC:{ *:[v8i16] }:$src)  =>  VRRC:{ *:[v16i8] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1274,
      GIR_Done,
    // Label 290: @5825
    GIM_Try, /*On fail goto*//*Label 291*/ 5859, // Rule ID 1275 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v16i8] } VRRC:{ *:[v4i32] }:$src)  =>  VRRC:{ *:[v16i8] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1275,
      GIR_Done,
    // Label 291: @5859
    GIM_Try, /*On fail goto*//*Label 292*/ 5893, // Rule ID 1276 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v16i8] } VRRC:{ *:[v4f32] }:$src)  =>  VRRC:{ *:[v16i8] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1276,
      GIR_Done,
    // Label 292: @5893
    GIM_Try, /*On fail goto*//*Label 293*/ 5927, // Rule ID 1277 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v16i8] } VRRC:{ *:[v2i64] }:$src)  =>  VRRC:{ *:[v16i8] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1277,
      GIR_Done,
    // Label 293: @5927
    GIM_Try, /*On fail goto*//*Label 294*/ 5961, // Rule ID 1278 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v16i8] } VRRC:{ *:[v1i128] }:$src)  =>  VRRC:{ *:[v16i8] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1278,
      GIR_Done,
    // Label 294: @5961
    GIM_Try, /*On fail goto*//*Label 295*/ 5995, // Rule ID 1309 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v16i8] } VRRC:{ *:[f128] }:$src)  =>  VRRC:{ *:[v16i8] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1309,
      GIR_Done,
    // Label 295: @5995
    GIM_Reject,
    // Label 251: @5996
    GIM_Reject,
    // Label 12: @5997
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 300*/ 6106,
    /*GILLT_s32*//*Label 296*/ 6008,
    /*GILLT_s64*//*Label 297*/ 6028, 0,
    /*GILLT_v2s64*//*Label 298*/ 6066,
    /*GILLT_v4s32*//*Label 299*/ 6086,
    // Label 296: @6008
    GIM_Try, /*On fail goto*//*Label 301*/ 6027, // Rule ID 147 //
      GIM_CheckFeatures, GIFBS_HasFPU,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
      // (ftrunc:{ *:[f32] } f32:{ *:[f32] }:$frB)  =>  (FRIZS:{ *:[f32] } f32:{ *:[f32] }:$frB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FRIZS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 147,
      GIR_Done,
    // Label 301: @6027
    GIM_Reject,
    // Label 297: @6028
    GIM_Try, /*On fail goto*//*Label 302*/ 6065,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 303*/ 6049, // Rule ID 900 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (ftrunc:{ *:[f64] } f64:{ *:[f64] }:$XB)  =>  (XSRDPIZ:{ *:[f64] } f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSRDPIZ,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 900,
        GIR_Done,
      // Label 303: @6049
      GIM_Try, /*On fail goto*//*Label 304*/ 6064, // Rule ID 145 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (ftrunc:{ *:[f64] } f64:{ *:[f64] }:$frB)  =>  (FRIZD:{ *:[f64] } f64:{ *:[f64] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FRIZD,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 145,
        GIR_Done,
      // Label 304: @6064
      GIM_Reject,
    // Label 302: @6065
    GIM_Reject,
    // Label 298: @6066
    GIM_Try, /*On fail goto*//*Label 305*/ 6085, // Rule ID 908 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (ftrunc:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)  =>  (XVRDPIZ:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVRDPIZ,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 908,
      GIR_Done,
    // Label 305: @6085
    GIM_Reject,
    // Label 299: @6086
    GIM_Try, /*On fail goto*//*Label 306*/ 6105, // Rule ID 916 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (ftrunc:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)  =>  (XVRSPIZ:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVRSPIZ,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 916,
      GIR_Done,
    // Label 306: @6105
    GIM_Reject,
    // Label 300: @6106
    GIM_Reject,
    // Label 13: @6107
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 311*/ 6216,
    /*GILLT_s32*//*Label 307*/ 6118,
    /*GILLT_s64*//*Label 308*/ 6138, 0,
    /*GILLT_v2s64*//*Label 309*/ 6176,
    /*GILLT_v4s32*//*Label 310*/ 6196,
    // Label 307: @6118
    GIM_Try, /*On fail goto*//*Label 312*/ 6137, // Rule ID 139 //
      GIM_CheckFeatures, GIFBS_HasFPU,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
      // (fround:{ *:[f32] } f32:{ *:[f32] }:$frB)  =>  (FRINS:{ *:[f32] } f32:{ *:[f32] }:$frB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FRINS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 139,
      GIR_Done,
    // Label 312: @6137
    GIM_Reject,
    // Label 308: @6138
    GIM_Try, /*On fail goto*//*Label 313*/ 6175,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 314*/ 6159, // Rule ID 894 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (fround:{ *:[f64] } f64:{ *:[f64] }:$XB)  =>  (XSRDPI:{ *:[f64] } f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSRDPI,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 894,
        GIR_Done,
      // Label 314: @6159
      GIM_Try, /*On fail goto*//*Label 315*/ 6174, // Rule ID 137 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (fround:{ *:[f64] } f64:{ *:[f64] }:$frB)  =>  (FRIND:{ *:[f64] } f64:{ *:[f64] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FRIND,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 137,
        GIR_Done,
      // Label 315: @6174
      GIM_Reject,
    // Label 313: @6175
    GIM_Reject,
    // Label 309: @6176
    GIM_Try, /*On fail goto*//*Label 316*/ 6195, // Rule ID 902 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fround:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)  =>  (XVRDPI:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVRDPI,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 902,
      GIR_Done,
    // Label 316: @6195
    GIM_Reject,
    // Label 310: @6196
    GIM_Try, /*On fail goto*//*Label 317*/ 6215, // Rule ID 910 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fround:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)  =>  (XVRSPI:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVRSPI,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 910,
      GIR_Done,
    // Label 317: @6215
    GIM_Reject,
    // Label 311: @6216
    GIM_Reject,
    // Label 14: @6217
    GIM_Try, /*On fail goto*//*Label 318*/ 6234, // Rule ID 628 //
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      // (readcyclecounter:{ *:[i64] })  =>  (MFTB8:{ *:[i64] })
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::MFTB8,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 628,
      GIR_Done,
    // Label 318: @6234
    GIM_Reject,
    // Label 15: @6235
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 3, /*)*//*default:*//*Label 321*/ 6297,
    /*GILLT_s32*//*Label 319*/ 6243,
    /*GILLT_s64*//*Label 320*/ 6270,
    // Label 319: @6243
    GIM_Try, /*On fail goto*//*Label 322*/ 6269, // Rule ID 1234 //
      GIM_CheckFeatures, GIFBS_HasSYNC,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/0, 7,
      // MIs[0] Operand 1
      GIM_CheckIsImm, /*MI*/0, /*Op*/1,
      // (atomic_fence 7:{ *:[i32] }, (timm:{ *:[i32] }))  =>  (SYNC 0:{ *:[i32] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SYNC,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1234,
      GIR_Done,
    // Label 322: @6269
    GIM_Reject,
    // Label 320: @6270
    GIM_Try, /*On fail goto*//*Label 323*/ 6296, // Rule ID 1233 //
      GIM_CheckFeatures, GIFBS_HasSYNC,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/0, 7,
      // MIs[0] Operand 1
      GIM_CheckIsImm, /*MI*/0, /*Op*/1,
      // (atomic_fence 7:{ *:[i64] }, (timm:{ *:[i64] }))  =>  (SYNC 0:{ *:[i32] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SYNC,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1233,
      GIR_Done,
    // Label 323: @6296
    GIM_Reject,
    // Label 321: @6297
    GIM_Try, /*On fail goto*//*Label 324*/ 6341,
      GIM_CheckIsImm, /*MI*/0, /*Op*/0,
      GIM_CheckIsImm, /*MI*/0, /*Op*/1,
      GIM_Try, /*On fail goto*//*Label 325*/ 6324, // Rule ID 1235 //
        GIM_CheckFeatures, GIFBS_HasSYNC,
        // (atomic_fence (timm:{ *:[iPTR] }), (timm:{ *:[iPTR] }))  =>  (SYNC 1:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SYNC,
        GIR_AddImm, /*InsnID*/0, /*Imm*/1,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1235,
        GIR_Done,
      // Label 325: @6324
      GIM_Try, /*On fail goto*//*Label 326*/ 6340, // Rule ID 1236 //
        GIM_CheckFeatures, GIFBS_HasOnlyMSYNC,
        // (atomic_fence (timm:{ *:[iPTR] }), (timm:{ *:[iPTR] }))  =>  (MSYNC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MSYNC,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1236,
        GIR_Done,
      // Label 326: @6340
      GIM_Reject,
    // Label 324: @6341
    GIM_Reject,
    // Label 16: @6342
    GIM_Try, /*On fail goto*//*Label 327*/ 6431,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_Try, /*On fail goto*//*Label 328*/ 6375, // Rule ID 1140 //
        GIM_CheckFeatures, GIFBS_MMA,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_mma_xxsetaccz,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v512s1,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::ACCRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v512i1] } 7325:{ *:[iPTR] })  =>  (XXSETACCZ:{ *:[v512i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXSETACCZ,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // AT
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1140,
        GIR_Done,
      // Label 328: @6375
      GIM_Try, /*On fail goto*//*Label 329*/ 6401, // Rule ID 4744 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_mfmsr,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 7257:{ *:[iPTR] })  =>  (MFMSR:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MFMSR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // RT
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4744,
        GIR_Done,
      // Label 329: @6401
      GIM_Try, /*On fail goto*//*Label 330*/ 6430, // Rule ID 4745 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_mftbu,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 7259:{ *:[iPTR] })  =>  (MFTB:{ *:[i32] } 269:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MFTB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // RT
        GIR_AddImm, /*InsnID*/0, /*Imm*/269,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4745,
        GIR_Done,
      // Label 330: @6430
      GIM_Reject,
    // Label 327: @6431
    GIM_Try, /*On fail goto*//*Label 331*/ 8961,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_Try, /*On fail goto*//*Label 332*/ 6472, // Rule ID 861 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcvdpsp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 7416:{ *:[iPTR] }, v2f64:{ *:[v2f64] }:$XB)  =>  (XVCVDPSP:{ *:[v4f32] } v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCVDPSP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 861,
        GIR_Done,
      // Label 332: @6472
      GIM_Try, /*On fail goto*//*Label 333*/ 6508, // Rule ID 864 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcvdpsxws,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7417:{ *:[iPTR] }, v2f64:{ *:[v2f64] }:$XB)  =>  (XVCVDPSXWS:{ *:[v4i32] } v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCVDPSXWS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 864,
        GIR_Done,
      // Label 333: @6508
      GIM_Try, /*On fail goto*//*Label 334*/ 6544, // Rule ID 867 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcvdpuxws,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7418:{ *:[iPTR] }, v2f64:{ *:[v2f64] }:$XB)  =>  (XVCVDPUXWS:{ *:[v4i32] } v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCVDPUXWS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 867,
        GIR_Done,
      // Label 334: @6544
      GIM_Try, /*On fail goto*//*Label 335*/ 6580, // Rule ID 868 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcvspdp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2f64] } 7421:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$XB)  =>  (XVCVSPDP:{ *:[v2f64] } v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCVSPDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 868,
        GIR_Done,
      // Label 335: @6580
      GIM_Try, /*On fail goto*//*Label 336*/ 6616, // Rule ID 869 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcvspsxds,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7423:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$XB)  =>  (XVCVSPSXDS:{ *:[v2i64] } v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCVSPSXDS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 869,
        GIR_Done,
      // Label 336: @6616
      GIM_Try, /*On fail goto*//*Label 337*/ 6652, // Rule ID 872 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcvspuxds,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7424:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$XB)  =>  (XVCVSPUXDS:{ *:[v2i64] } v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCVSPUXDS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 872,
        GIR_Done,
      // Label 337: @6652
      GIM_Try, /*On fail goto*//*Label 338*/ 6688, // Rule ID 877 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcvsxdsp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 7425:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$XB)  =>  (XVCVSXDSP:{ *:[v4f32] } v2i64:{ *:[v2i64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCVSXDSP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 877,
        GIR_Done,
      // Label 338: @6688
      GIM_Try, /*On fail goto*//*Label 339*/ 6724, // Rule ID 882 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcvuxdsp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 7427:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$XB)  =>  (XVCVUXDSP:{ *:[v4f32] } v2i64:{ *:[v2i64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCVUXDSP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 882,
        GIR_Done,
      // Label 339: @6724
      GIM_Try, /*On fail goto*//*Label 340*/ 6760, // Rule ID 885 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcvsxwdp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2f64] } 7426:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$XB)  =>  (XVCVSXWDP:{ *:[v2f64] } v4i32:{ *:[v4i32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCVSXWDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 885,
        GIR_Done,
      // Label 340: @6760
      GIM_Try, /*On fail goto*//*Label 341*/ 6796, // Rule ID 886 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcvuxwdp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2f64] } 7428:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$XB)  =>  (XVCVUXWDP:{ *:[v2f64] } v4i32:{ *:[v4i32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCVUXWDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 886,
        GIR_Done,
      // Label 341: @6796
      GIM_Try, /*On fail goto*//*Label 342*/ 6832, // Rule ID 994 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_sqrtf128_round_to_odd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[f128] } 7351:{ *:[iPTR] }, f128:{ *:[f128] }:$vB)  =>  (XSSQRTQPO:{ *:[f128] } f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSSQRTQPO,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 994,
        GIR_Done,
      // Label 342: @6832
      GIM_Try, /*On fail goto*//*Label 343*/ 6868, // Rule ID 1001 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_truncf128_round_to_odd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VFRCRegClassID,
        // (intrinsic_wo_chain:{ *:[f64] } 7379:{ *:[iPTR] }, f128:{ *:[f128] }:$vB)  =>  (XSCVQPDPO:{ *:[f64] } f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSCVQPDPO,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1001,
        GIR_Done,
      // Label 343: @6868
      GIM_Try, /*On fail goto*//*Label 344*/ 6904, // Rule ID 1002 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcvsphp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 7422:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$XB)  =>  (XVCVSPHP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCVSPHP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1002,
        GIR_Done,
      // Label 344: @6904
      GIM_Try, /*On fail goto*//*Label 345*/ 6940, // Rule ID 1006 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvxexpdp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7450:{ *:[iPTR] }, v2f64:{ *:[v2f64] }:$XB)  =>  (XVXEXPDP:{ *:[v2i64] } v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVXEXPDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1006,
        GIR_Done,
      // Label 345: @6940
      GIM_Try, /*On fail goto*//*Label 346*/ 6976, // Rule ID 1007 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvxexpsp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7451:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$XB)  =>  (XVXEXPSP:{ *:[v4i32] } v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVXEXPSP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1007,
        GIR_Done,
      // Label 346: @6976
      GIM_Try, /*On fail goto*//*Label 347*/ 7012, // Rule ID 1008 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvxsigdp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7452:{ *:[iPTR] }, v2f64:{ *:[v2f64] }:$XB)  =>  (XVXSIGDP:{ *:[v2i64] } v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVXSIGDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1008,
        GIR_Done,
      // Label 347: @7012
      GIM_Try, /*On fail goto*//*Label 348*/ 7048, // Rule ID 1009 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvxsigsp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7453:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$XB)  =>  (XVXSIGSP:{ *:[v4i32] } v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVXSIGSP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1009,
        GIR_Done,
      // Label 348: @7048
      GIM_Try, /*On fail goto*//*Label 349*/ 7092, // Rule ID 1072 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_mtvsrbm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6882:{ *:[iPTR] }, (imm:{ *:[i64] }):$D)  =>  (MTVSRBMI:{ *:[v16i8] } (imm:{ *:[i64] }):$D)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MTVSRBMI,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // D
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1072,
        GIR_Done,
      // Label 349: @7092
      GIM_Try, /*On fail goto*//*Label 350*/ 7126, // Rule ID 73 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_popcntb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 7340:{ *:[iPTR] }, i32:{ *:[i32] }:$rS)  =>  (POPCNTB:{ *:[i32] } i32:{ *:[i32] }:$rS)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::POPCNTB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rS
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 73,
        GIR_Done,
      // Label 350: @7126
      GIM_Try, /*On fail goto*//*Label 351*/ 7162, // Rule ID 315 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vexptefp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6989:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vB)  =>  (VEXPTEFP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXPTEFP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 315,
        GIR_Done,
      // Label 351: @7162
      GIM_Try, /*On fail goto*//*Label 352*/ 7198, // Rule ID 316 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vlogefp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 7027:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vB)  =>  (VLOGEFP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VLOGEFP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 316,
        GIR_Done,
      // Label 352: @7198
      GIM_Try, /*On fail goto*//*Label 353*/ 7234, // Rule ID 357 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrefp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 7095:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vB)  =>  (VREFP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VREFP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 357,
        GIR_Done,
      // Label 353: @7234
      GIM_Try, /*On fail goto*//*Label 354*/ 7270, // Rule ID 358 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrfim,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 7096:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vB)  =>  (VRFIM:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRFIM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 358,
        GIR_Done,
      // Label 354: @7270
      GIM_Try, /*On fail goto*//*Label 355*/ 7306, // Rule ID 359 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrfin,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 7097:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vB)  =>  (VRFIN:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRFIN,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 359,
        GIR_Done,
      // Label 355: @7306
      GIM_Try, /*On fail goto*//*Label 356*/ 7342, // Rule ID 360 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrfip,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 7098:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vB)  =>  (VRFIP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRFIP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 360,
        GIR_Done,
      // Label 356: @7342
      GIM_Try, /*On fail goto*//*Label 357*/ 7378, // Rule ID 361 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrfiz,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 7099:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vB)  =>  (VRFIZ:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRFIZ,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 361,
        GIR_Done,
      // Label 357: @7378
      GIM_Try, /*On fail goto*//*Label 358*/ 7414, // Rule ID 362 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrsqrtefp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 7110:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vB)  =>  (VRSQRTEFP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRSQRTEFP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 362,
        GIR_Done,
      // Label 358: @7414
      GIM_Try, /*On fail goto*//*Label 359*/ 7450, // Rule ID 413 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vupkhpx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7152:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vB)  =>  (VUPKHPX:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VUPKHPX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 413,
        GIR_Done,
      // Label 359: @7450
      GIM_Try, /*On fail goto*//*Label 360*/ 7486, // Rule ID 414 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vupkhsb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 7153:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vB)  =>  (VUPKHSB:{ *:[v8i16] } v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VUPKHSB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 414,
        GIR_Done,
      // Label 360: @7486
      GIM_Try, /*On fail goto*//*Label 361*/ 7522, // Rule ID 415 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vupkhsh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7154:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vB)  =>  (VUPKHSH:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VUPKHSH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 415,
        GIR_Done,
      // Label 361: @7522
      GIM_Try, /*On fail goto*//*Label 362*/ 7558, // Rule ID 416 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vupklpx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7156:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vB)  =>  (VUPKLPX:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VUPKLPX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 416,
        GIR_Done,
      // Label 362: @7558
      GIM_Try, /*On fail goto*//*Label 363*/ 7594, // Rule ID 417 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vupklsb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 7157:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vB)  =>  (VUPKLSB:{ *:[v8i16] } v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VUPKLSB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 417,
        GIR_Done,
      // Label 363: @7594
      GIM_Try, /*On fail goto*//*Label 364*/ 7630, // Rule ID 418 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vupklsh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7158:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vB)  =>  (VUPKLSH:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VUPKLSH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 418,
        GIR_Done,
      // Label 364: @7630
      GIM_Try, /*On fail goto*//*Label 365*/ 7666, // Rule ID 498 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vupkhsw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7155:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vB)  =>  (VUPKHSW:{ *:[v2i64] } v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VUPKHSW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 498,
        GIR_Done,
      // Label 365: @7666
      GIM_Try, /*On fail goto*//*Label 366*/ 7702, // Rule ID 499 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vupklsw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7159:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vB)  =>  (VUPKLSW:{ *:[v2i64] } v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VUPKLSW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 499,
        GIR_Done,
      // Label 366: @7702
      GIM_Try, /*On fail goto*//*Label 367*/ 7738, // Rule ID 500 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vgbbd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 7009:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vB)  =>  (VGBBD:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VGBBD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 500,
        GIR_Done,
      // Label 367: @7738
      GIM_Try, /*On fail goto*//*Label 368*/ 7774, // Rule ID 508 //
        GIM_CheckFeatures, GIFBS_HasP8Crypto,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_crypto_vsbox,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6864:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA)  =>  (VSBOX:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSBOX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 508,
        GIR_Done,
      // Label 368: @7774
      GIM_Try, /*On fail goto*//*Label 369*/ 7810, // Rule ID 524 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vclzlsbb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 6919:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vB)  =>  (VCLZLSBB:{ *:[i32] } v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCLZLSBB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 524,
        GIR_Done,
      // Label 369: @7810
      GIM_Try, /*On fail goto*//*Label 370*/ 7846, // Rule ID 525 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vctzlsbb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 6977:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vB)  =>  (VCTZLSBB:{ *:[i32] } v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCTZLSBB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 525,
        GIR_Done,
      // Label 370: @7846
      GIM_Try, /*On fail goto*//*Label 371*/ 7882, // Rule ID 530 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextsb2w,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7004:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vB)  =>  (VEXTSB2W:{ *:[v4i32] } v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTSB2W,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 530,
        GIR_Done,
      // Label 371: @7882
      GIM_Try, /*On fail goto*//*Label 372*/ 7918, // Rule ID 531 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextsh2w,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7007:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vB)  =>  (VEXTSH2W:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTSH2W,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 531,
        GIR_Done,
      // Label 372: @7918
      GIM_Try, /*On fail goto*//*Label 373*/ 7954, // Rule ID 532 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextsb2d,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7003:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vB)  =>  (VEXTSB2D:{ *:[v2i64] } v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTSB2D,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 532,
        GIR_Done,
      // Label 373: @7954
      GIM_Try, /*On fail goto*//*Label 374*/ 7990, // Rule ID 533 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextsh2d,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7006:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vB)  =>  (VEXTSH2D:{ *:[v2i64] } v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTSH2D,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 533,
        GIR_Done,
      // Label 374: @7990
      GIM_Try, /*On fail goto*//*Label 375*/ 8026, // Rule ID 534 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextsw2d,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7008:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vB)  =>  (VEXTSW2D:{ *:[v2i64] } v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTSW2D,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 534,
        GIR_Done,
      // Label 375: @8026
      GIM_Try, /*On fail goto*//*Label 376*/ 8062, // Rule ID 537 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vprtybw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7094:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vB)  =>  (VPRTYBW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPRTYBW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 537,
        GIR_Done,
      // Label 376: @8062
      GIM_Try, /*On fail goto*//*Label 377*/ 8098, // Rule ID 538 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vprtybd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7092:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vB)  =>  (VPRTYBD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPRTYBD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 538,
        GIR_Done,
      // Label 377: @8098
      GIM_Try, /*On fail goto*//*Label 378*/ 8134, // Rule ID 539 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vprtybq,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 7093:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vB)  =>  (VPRTYBQ:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPRTYBQ,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 539,
        GIR_Done,
      // Label 378: @8134
      GIM_Try, /*On fail goto*//*Label 379*/ 8168, // Rule ID 682 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_popcntb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 7340:{ *:[iPTR] }, i64:{ *:[i64] }:$rS)  =>  (POPCNTB8:{ *:[i64] } i64:{ *:[i64] }:$rS)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::POPCNTB8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rS
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 682,
        GIR_Done,
      // Label 379: @8168
      GIM_Try, /*On fail goto*//*Label 380*/ 8204, // Rule ID 1037 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vstribr,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 7131:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vB)  =>  (VSTRIBR:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSTRIBR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1037,
        GIR_Done,
      // Label 380: @8204
      GIM_Try, /*On fail goto*//*Label 381*/ 8240, // Rule ID 1038 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vstribl,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 7129:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vB)  =>  (VSTRIBL:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSTRIBL,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1038,
        GIR_Done,
      // Label 381: @8240
      GIM_Try, /*On fail goto*//*Label 382*/ 8276, // Rule ID 1039 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vstrihr,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 7135:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vB)  =>  (VSTRIHR:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSTRIHR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1039,
        GIR_Done,
      // Label 382: @8276
      GIM_Try, /*On fail goto*//*Label 383*/ 8312, // Rule ID 1040 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vstrihl,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 7133:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vB)  =>  (VSTRIHL:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSTRIHL,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1040,
        GIR_Done,
      // Label 383: @8312
      GIM_Try, /*On fail goto*//*Label 384*/ 8348, // Rule ID 1057 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextractbm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 6998:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vB)  =>  (VEXTRACTBM:{ *:[i32] } v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTRACTBM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1057,
        GIR_Done,
      // Label 384: @8348
      GIM_Try, /*On fail goto*//*Label 385*/ 8384, // Rule ID 1058 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextracthm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 7000:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vB)  =>  (VEXTRACTHM:{ *:[i32] } v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTRACTHM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1058,
        GIR_Done,
      // Label 385: @8384
      GIM_Try, /*On fail goto*//*Label 386*/ 8420, // Rule ID 1059 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextractwm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 7002:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vB)  =>  (VEXTRACTWM:{ *:[i32] } v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTRACTWM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1059,
        GIR_Done,
      // Label 386: @8420
      GIM_Try, /*On fail goto*//*Label 387*/ 8456, // Rule ID 1060 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextractdm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 6999:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vB)  =>  (VEXTRACTDM:{ *:[i32] } v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTRACTDM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1060,
        GIR_Done,
      // Label 387: @8456
      GIM_Try, /*On fail goto*//*Label 388*/ 8492, // Rule ID 1061 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextractqm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 7001:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vB)  =>  (VEXTRACTQM:{ *:[i32] } v1i128:{ *:[v1i128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTRACTQM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1061,
        GIR_Done,
      // Label 388: @8492
      GIM_Try, /*On fail goto*//*Label 389*/ 8528, // Rule ID 1062 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vexpandbm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6984:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vB)  =>  (VEXPANDBM:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXPANDBM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1062,
        GIR_Done,
      // Label 389: @8528
      GIM_Try, /*On fail goto*//*Label 390*/ 8564, // Rule ID 1063 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vexpandhm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6986:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vB)  =>  (VEXPANDHM:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXPANDHM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1063,
        GIR_Done,
      // Label 390: @8564
      GIM_Try, /*On fail goto*//*Label 391*/ 8600, // Rule ID 1064 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vexpandwm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6988:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vB)  =>  (VEXPANDWM:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXPANDWM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1064,
        GIR_Done,
      // Label 391: @8600
      GIM_Try, /*On fail goto*//*Label 392*/ 8636, // Rule ID 1065 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vexpanddm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6985:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vB)  =>  (VEXPANDDM:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXPANDDM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1065,
        GIR_Done,
      // Label 392: @8636
      GIM_Try, /*On fail goto*//*Label 393*/ 8672, // Rule ID 1066 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vexpandqm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6987:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vB)  =>  (VEXPANDQM:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXPANDQM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1066,
        GIR_Done,
      // Label 393: @8672
      GIM_Try, /*On fail goto*//*Label 394*/ 8708, // Rule ID 1067 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_mtvsrbm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6882:{ *:[iPTR] }, i64:{ *:[i64] }:$rB)  =>  (MTVSRBM:{ *:[v16i8] } i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MTVSRBM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1067,
        GIR_Done,
      // Label 394: @8708
      GIM_Try, /*On fail goto*//*Label 395*/ 8744, // Rule ID 1068 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_mtvsrhm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6884:{ *:[iPTR] }, i64:{ *:[i64] }:$rB)  =>  (MTVSRHM:{ *:[v8i16] } i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MTVSRHM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1068,
        GIR_Done,
      // Label 395: @8744
      GIM_Try, /*On fail goto*//*Label 396*/ 8780, // Rule ID 1069 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_mtvsrwm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6886:{ *:[iPTR] }, i64:{ *:[i64] }:$rB)  =>  (MTVSRWM:{ *:[v4i32] } i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MTVSRWM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1069,
        GIR_Done,
      // Label 396: @8780
      GIM_Try, /*On fail goto*//*Label 397*/ 8816, // Rule ID 1070 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_mtvsrdm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6883:{ *:[iPTR] }, i64:{ *:[i64] }:$rB)  =>  (MTVSRDM:{ *:[v2i64] } i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MTVSRDM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1070,
        GIR_Done,
      // Label 397: @8816
      GIM_Try, /*On fail goto*//*Label 398*/ 8852, // Rule ID 1071 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_mtvsrqm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6885:{ *:[iPTR] }, i64:{ *:[i64] }:$rB)  =>  (MTVSRQM:{ *:[v1i128] } i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MTVSRQM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1071,
        GIR_Done,
      // Label 398: @8852
      GIM_Try, /*On fail goto*//*Label 399*/ 8888, // Rule ID 1133 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextsd2q,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 7005:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vB)  =>  (VEXTSD2Q:{ *:[v1i128] } v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTSD2Q,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1133,
        GIR_Done,
      // Label 399: @8888
      GIM_Try, /*On fail goto*//*Label 400*/ 8924, // Rule ID 1138 //
        GIM_CheckFeatures, GIFBS_MMA,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_mma_xxmfacc,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v512s1,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v512s1,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::ACCRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v512i1] } 7323:{ *:[iPTR] }, v512i1:{ *:[v512i1] }:$AS)  =>  (XXMFACC:{ *:[v512i1] } v512i1:{ *:[v512i1] }:$AS)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXMFACC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // ASo
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // AS
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1138,
        GIR_Done,
      // Label 400: @8924
      GIM_Try, /*On fail goto*//*Label 401*/ 8960, // Rule ID 1139 //
        GIM_CheckFeatures, GIFBS_MMA,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_mma_xxmtacc,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v512s1,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v512s1,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::ACCRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v512i1] } 7324:{ *:[iPTR] }, v512i1:{ *:[v512i1] }:$ATi)  =>  (XXMTACC:{ *:[v512i1] } v512i1:{ *:[v512i1] }:$ATi)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXMTACC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // AT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // ATi
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1139,
        GIR_Done,
      // Label 401: @8960
      GIM_Reject,
    // Label 331: @8961
    GIM_Try, /*On fail goto*//*Label 402*/ 15540,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_Try, /*On fail goto*//*Label 403*/ 9009, // Rule ID 1010 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvtstdcsp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // MIs[0] DCMX
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7449:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$XB, (timm:{ *:[i32] }):$DCMX)  =>  (XVTSTDCSP:{ *:[v4i32] } (timm:{ *:[i32] }):$DCMX, v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVTSTDCSP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // DCMX
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1010,
        GIR_Done,
      // Label 403: @9009
      GIM_Try, /*On fail goto*//*Label 404*/ 9052, // Rule ID 1011 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvtstdcdp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // MIs[0] DCMX
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7448:{ *:[iPTR] }, v2f64:{ *:[v2f64] }:$XB, (timm:{ *:[i32] }):$DCMX)  =>  (XVTSTDCDP:{ *:[v2i64] } (timm:{ *:[i32] }):$DCMX, v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVTSTDCDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // DCMX
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1011,
        GIR_Done,
      // Label 404: @9052
      GIM_Try, /*On fail goto*//*Label 405*/ 9104, // Rule ID 887 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xsmaxdp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::VSFRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/PPC::VSFRCRegClassID,
        // (intrinsic_wo_chain:{ *:[f64] } 7401:{ *:[iPTR] }, vsfrc:{ *:[f64] }:$XA, vsfrc:{ *:[f64] }:$XB)  =>  (XSMAXDP:{ *:[f64] } vsfrc:{ *:[f64] }:$XA, vsfrc:{ *:[f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMAXDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 887,
        GIR_Done,
      // Label 405: @9104
      GIM_Try, /*On fail goto*//*Label 406*/ 9156, // Rule ID 888 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xsmindp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::VSFRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/PPC::VSFRCRegClassID,
        // (intrinsic_wo_chain:{ *:[f64] } 7402:{ *:[iPTR] }, vsfrc:{ *:[f64] }:$XA, vsfrc:{ *:[f64] }:$XB)  =>  (XSMINDP:{ *:[f64] } vsfrc:{ *:[f64] }:$XA, vsfrc:{ *:[f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMINDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 888,
        GIR_Done,
      // Label 406: @9156
      GIM_Try, /*On fail goto*//*Label 407*/ 9208, // Rule ID 889 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvmaxdp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::VSRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2f64] } 7433:{ *:[iPTR] }, vsrc:{ *:[v2f64] }:$XA, vsrc:{ *:[v2f64] }:$XB)  =>  (XVMAXDP:{ *:[v2f64] } vsrc:{ *:[v2f64] }:$XA, vsrc:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVMAXDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 889,
        GIR_Done,
      // Label 407: @9208
      GIM_Try, /*On fail goto*//*Label 408*/ 9260, // Rule ID 890 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvmindp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::VSRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2f64] } 7435:{ *:[iPTR] }, vsrc:{ *:[v2f64] }:$XA, vsrc:{ *:[v2f64] }:$XB)  =>  (XVMINDP:{ *:[v2f64] } vsrc:{ *:[v2f64] }:$XA, vsrc:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVMINDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 890,
        GIR_Done,
      // Label 408: @9260
      GIM_Try, /*On fail goto*//*Label 409*/ 9312, // Rule ID 891 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvmaxsp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::VSRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 7434:{ *:[iPTR] }, vsrc:{ *:[v4f32] }:$XA, vsrc:{ *:[v4f32] }:$XB)  =>  (XVMAXSP:{ *:[v4f32] } vsrc:{ *:[v4f32] }:$XA, vsrc:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVMAXSP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 891,
        GIR_Done,
      // Label 409: @9312
      GIM_Try, /*On fail goto*//*Label 410*/ 9364, // Rule ID 892 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvminsp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::VSRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 7436:{ *:[iPTR] }, vsrc:{ *:[v4f32] }:$XA, vsrc:{ *:[v4f32] }:$XB)  =>  (XVMINSP:{ *:[v4f32] } vsrc:{ *:[v4f32] }:$XA, vsrc:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVMINSP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 892,
        GIR_Done,
      // Label 410: @9364
      GIM_Try, /*On fail goto*//*Label 411*/ 9408, // Rule ID 816 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcmpeqdp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7403:{ *:[iPTR] }, v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)  =>  (XVCMPEQDP:{ *:[v2i64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCMPEQDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 816,
        GIR_Done,
      // Label 411: @9408
      GIM_Try, /*On fail goto*//*Label 412*/ 9452, // Rule ID 818 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcmpeqsp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7405:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)  =>  (XVCMPEQSP:{ *:[v4i32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCMPEQSP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 818,
        GIR_Done,
      // Label 412: @9452
      GIM_Try, /*On fail goto*//*Label 413*/ 9496, // Rule ID 820 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcmpgedp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7407:{ *:[iPTR] }, v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)  =>  (XVCMPGEDP:{ *:[v2i64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCMPGEDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 820,
        GIR_Done,
      // Label 413: @9496
      GIM_Try, /*On fail goto*//*Label 414*/ 9540, // Rule ID 822 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcmpgesp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7409:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)  =>  (XVCMPGESP:{ *:[v4i32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCMPGESP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 822,
        GIR_Done,
      // Label 414: @9540
      GIM_Try, /*On fail goto*//*Label 415*/ 9584, // Rule ID 824 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcmpgtdp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7411:{ *:[iPTR] }, v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)  =>  (XVCMPGTDP:{ *:[v2i64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCMPGTDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 824,
        GIR_Done,
      // Label 415: @9584
      GIM_Try, /*On fail goto*//*Label 416*/ 9628, // Rule ID 826 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcmpgtsp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7413:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)  =>  (XVCMPGTSP:{ *:[v4i32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCMPGTSP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 826,
        GIR_Done,
      // Label 416: @9628
      GIM_Try, /*On fail goto*//*Label 417*/ 9672, // Rule ID 990 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_addf128_round_to_odd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[f128] } 6853:{ *:[iPTR] }, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)  =>  (XSADDQPO:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSADDQPO,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 990,
        GIR_Done,
      // Label 417: @9672
      GIM_Try, /*On fail goto*//*Label 418*/ 9716, // Rule ID 991 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_mulf128_round_to_odd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[f128] } 7332:{ *:[iPTR] }, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)  =>  (XSMULQPO:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMULQPO,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 991,
        GIR_Done,
      // Label 418: @9716
      GIM_Try, /*On fail goto*//*Label 419*/ 9760, // Rule ID 992 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_subf128_round_to_odd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[f128] } 7360:{ *:[iPTR] }, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)  =>  (XSSUBQPO:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSSUBQPO,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 992,
        GIR_Done,
      // Label 419: @9760
      GIM_Try, /*On fail goto*//*Label 420*/ 9804, // Rule ID 993 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_divf128_round_to_odd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[f128] } 7209:{ *:[iPTR] }, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)  =>  (XSDIVQPO:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSDIVQPO,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 993,
        GIR_Done,
      // Label 420: @9804
      GIM_Try, /*On fail goto*//*Label 421*/ 9848, // Rule ID 1004 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xviexpdp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2f64] } 7431:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$XA, v2i64:{ *:[v2i64] }:$XB)  =>  (XVIEXPDP:{ *:[v2f64] } v2i64:{ *:[v2i64] }:$XA, v2i64:{ *:[v2i64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVIEXPDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1004,
        GIR_Done,
      // Label 421: @9848
      GIM_Try, /*On fail goto*//*Label 422*/ 9892, // Rule ID 1005 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xviexpsp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 7432:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)  =>  (XVIEXPSP:{ *:[v4f32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVIEXPSP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1005,
        GIR_Done,
      // Label 422: @9892
      GIM_Try, /*On fail goto*//*Label 423*/ 9932, // Rule ID 311 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vcfsx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] Operand 3
        GIM_CheckLiteralInt, /*MI*/0, /*Op*/3, 0,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6913:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vB, 0:{ *:[i32] })  =>  (VCFSX_0:{ *:[v4f32] } v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCFSX_0,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 311,
        GIR_Done,
      // Label 423: @9932
      GIM_Try, /*On fail goto*//*Label 424*/ 9972, // Rule ID 312 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vctuxs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] Operand 3
        GIM_CheckLiteralInt, /*MI*/0, /*Op*/3, 0,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6975:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vB, 0:{ *:[i32] })  =>  (VCTUXS_0:{ *:[v4i32] } v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCTUXS_0,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 312,
        GIR_Done,
      // Label 424: @9972
      GIM_Try, /*On fail goto*//*Label 425*/ 10012, // Rule ID 313 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vcfux,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] Operand 3
        GIM_CheckLiteralInt, /*MI*/0, /*Op*/3, 0,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6915:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vB, 0:{ *:[i32] })  =>  (VCFUX_0:{ *:[v4f32] } v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCFUX_0,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 313,
        GIR_Done,
      // Label 425: @10012
      GIM_Try, /*On fail goto*//*Label 426*/ 10052, // Rule ID 314 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vctsxs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] Operand 3
        GIM_CheckLiteralInt, /*MI*/0, /*Op*/3, 0,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6974:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vB, 0:{ *:[i32] })  =>  (VCTSXS_0:{ *:[v4i32] } v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCTSXS_0,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 314,
        GIR_Done,
      // Label 426: @10052
      GIM_Try, /*On fail goto*//*Label 427*/ 10095, // Rule ID 307 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vcfsx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] UIMM
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6913:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vB, (timm:{ *:[i32] }):$UIMM)  =>  (VCFSX:{ *:[v4f32] } (timm:{ *:[i32] }):$UIMM, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCFSX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // UIMM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 307,
        GIR_Done,
      // Label 427: @10095
      GIM_Try, /*On fail goto*//*Label 428*/ 10138, // Rule ID 308 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vcfux,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] UIMM
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6915:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vB, (timm:{ *:[i32] }):$UIMM)  =>  (VCFUX:{ *:[v4f32] } (timm:{ *:[i32] }):$UIMM, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCFUX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // UIMM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 308,
        GIR_Done,
      // Label 428: @10138
      GIM_Try, /*On fail goto*//*Label 429*/ 10181, // Rule ID 309 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vctsxs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] UIMM
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6974:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vB, (timm:{ *:[i32] }):$UIMM)  =>  (VCTSXS:{ *:[v4i32] } (timm:{ *:[i32] }):$UIMM, v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCTSXS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // UIMM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 309,
        GIR_Done,
      // Label 429: @10181
      GIM_Try, /*On fail goto*//*Label 430*/ 10224, // Rule ID 310 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vctuxs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] UIMM
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6975:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vB, (timm:{ *:[i32] }):$UIMM)  =>  (VCTUXS:{ *:[v4i32] } (timm:{ *:[i32] }):$UIMM, v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCTUXS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // UIMM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 310,
        GIR_Done,
      // Label 430: @10224
      GIM_Try, /*On fail goto*//*Label 431*/ 10267, // Rule ID 1073 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vcntmbb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // MIs[0] MP
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // (intrinsic_wo_chain:{ *:[i64] } 6970:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vB, (timm:{ *:[i32] }):$MP)  =>  (VCNTMBB:{ *:[i64] } v16i8:{ *:[v16i8] }:$vB, (timm:{ *:[i32] }):$MP)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCNTMBB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // MP
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1073,
        GIR_Done,
      // Label 431: @10267
      GIM_Try, /*On fail goto*//*Label 432*/ 10310, // Rule ID 1074 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vcntmbh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // MIs[0] MP
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // (intrinsic_wo_chain:{ *:[i64] } 6972:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vB, (timm:{ *:[i32] }):$MP)  =>  (VCNTMBH:{ *:[i64] } v8i16:{ *:[v8i16] }:$vB, (timm:{ *:[i32] }):$MP)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCNTMBH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // MP
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1074,
        GIR_Done,
      // Label 432: @10310
      GIM_Try, /*On fail goto*//*Label 433*/ 10353, // Rule ID 1075 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vcntmbw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // MIs[0] MP
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // (intrinsic_wo_chain:{ *:[i64] } 6973:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vB, (timm:{ *:[i32] }):$MP)  =>  (VCNTMBW:{ *:[i64] } v4i32:{ *:[v4i32] }:$vB, (timm:{ *:[i32] }):$MP)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCNTMBW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // MP
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1075,
        GIR_Done,
      // Label 433: @10353
      GIM_Try, /*On fail goto*//*Label 434*/ 10396, // Rule ID 1076 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vcntmbd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // MIs[0] MP
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // (intrinsic_wo_chain:{ *:[i64] } 6971:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vB, (timm:{ *:[i32] }):$MP)  =>  (VCNTMBD:{ *:[i64] } v2i64:{ *:[v2i64] }:$vB, (timm:{ *:[i32] }):$MP)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCNTMBD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // MP
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1076,
        GIR_Done,
      // Label 434: @10396
      GIM_Try, /*On fail goto*//*Label 435*/ 10439, // Rule ID 1090 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vgnb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // MIs[0] N
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // (intrinsic_wo_chain:{ *:[i64] } 7010:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vB, (timm:{ *:[i32] }):$N)  =>  (VGNB:{ *:[i64] } v1i128:{ *:[v1i128] }:$vB, (timm:{ *:[i32] }):$N)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VGNB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // N
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1090,
        GIR_Done,
      // Label 435: @10439
      GIM_Try, /*On fail goto*//*Label 436*/ 10491, // Rule ID 199 //
        GIM_CheckFeatures, GIFBS_HasExtDiv,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_divwe,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::GPRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 7210:{ *:[iPTR] }, gprc:{ *:[i32] }:$rA, gprc:{ *:[i32] }:$rB)  =>  (DIVWE:{ *:[i32] } gprc:{ *:[i32] }:$rA, gprc:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DIVWE,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 199,
        GIR_Done,
      // Label 436: @10491
      GIM_Try, /*On fail goto*//*Label 437*/ 10543, // Rule ID 200 //
        GIM_CheckFeatures, GIFBS_HasExtDiv,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_divweu,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::GPRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 7211:{ *:[iPTR] }, gprc:{ *:[i32] }:$rA, gprc:{ *:[i32] }:$rB)  =>  (DIVWEU:{ *:[i32] } gprc:{ *:[i32] }:$rA, gprc:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DIVWEU,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 200,
        GIR_Done,
      // Label 437: @10543
      GIM_Try, /*On fail goto*//*Label 438*/ 10595, // Rule ID 679 //
        GIM_CheckFeatures, GIFBS_HasBPERMD,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_bpermd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::G8RCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 7173:{ *:[iPTR] }, g8rc:{ *:[i64] }:$rS, g8rc:{ *:[i64] }:$rB)  =>  (BPERMD:{ *:[i64] } g8rc:{ *:[i64] }:$rS, g8rc:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::BPERMD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 679,
        GIR_Done,
      // Label 438: @10595
      GIM_Try, /*On fail goto*//*Label 439*/ 10647, // Rule ID 685 //
        GIM_CheckFeatures, GIFBS_HasExtDiv,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_divde,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::G8RCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 7207:{ *:[iPTR] }, g8rc:{ *:[i64] }:$rA, g8rc:{ *:[i64] }:$rB)  =>  (DIVDE:{ *:[i64] } g8rc:{ *:[i64] }:$rA, g8rc:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DIVDE,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 685,
        GIR_Done,
      // Label 439: @10647
      GIM_Try, /*On fail goto*//*Label 440*/ 10699, // Rule ID 690 //
        GIM_CheckFeatures, GIFBS_HasExtDiv,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_divdeu,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::G8RCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 7208:{ *:[iPTR] }, g8rc:{ *:[i64] }:$rA, g8rc:{ *:[i64] }:$rB)  =>  (DIVDEU:{ *:[i64] } g8rc:{ *:[i64] }:$rA, g8rc:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DIVDEU,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 690,
        GIR_Done,
      // Label 440: @10699
      GIM_Try, /*On fail goto*//*Label 441*/ 10743, // Rule ID 298 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vaddcuw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6896:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VADDCUW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VADDCUW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 298,
        GIR_Done,
      // Label 441: @10743
      GIM_Try, /*On fail goto*//*Label 442*/ 10787, // Rule ID 299 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vaddsbs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6899:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VADDSBS:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VADDSBS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 299,
        GIR_Done,
      // Label 442: @10787
      GIM_Try, /*On fail goto*//*Label 443*/ 10831, // Rule ID 300 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vaddshs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6900:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VADDSHS:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VADDSHS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 300,
        GIR_Done,
      // Label 443: @10831
      GIM_Try, /*On fail goto*//*Label 444*/ 10875, // Rule ID 301 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vaddsws,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6901:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VADDSWS:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VADDSWS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 301,
        GIR_Done,
      // Label 444: @10875
      GIM_Try, /*On fail goto*//*Label 445*/ 10919, // Rule ID 302 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vaddubs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6902:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VADDUBS:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VADDUBS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 302,
        GIR_Done,
      // Label 445: @10919
      GIM_Try, /*On fail goto*//*Label 446*/ 10963, // Rule ID 303 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vadduhs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6903:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VADDUHS:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VADDUHS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 303,
        GIR_Done,
      // Label 446: @10963
      GIM_Try, /*On fail goto*//*Label 447*/ 11007, // Rule ID 304 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vadduws,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6904:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VADDUWS:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VADDUWS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 304,
        GIR_Done,
      // Label 447: @11007
      GIM_Try, /*On fail goto*//*Label 448*/ 11051, // Rule ID 317 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vavgsb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6905:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VAVGSB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VAVGSB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 317,
        GIR_Done,
      // Label 448: @11051
      GIM_Try, /*On fail goto*//*Label 449*/ 11095, // Rule ID 318 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vavgsh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6906:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VAVGSH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VAVGSH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 318,
        GIR_Done,
      // Label 449: @11095
      GIM_Try, /*On fail goto*//*Label 450*/ 11139, // Rule ID 319 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vavgsw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6907:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VAVGSW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VAVGSW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 319,
        GIR_Done,
      // Label 450: @11139
      GIM_Try, /*On fail goto*//*Label 451*/ 11183, // Rule ID 320 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vavgub,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6908:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VAVGUB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VAVGUB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 320,
        GIR_Done,
      // Label 451: @11183
      GIM_Try, /*On fail goto*//*Label 452*/ 11227, // Rule ID 321 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vavguh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6909:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VAVGUH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VAVGUH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 321,
        GIR_Done,
      // Label 452: @11227
      GIM_Try, /*On fail goto*//*Label 453*/ 11271, // Rule ID 322 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vavguw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6910:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VAVGUW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VAVGUW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 322,
        GIR_Done,
      // Label 453: @11271
      GIM_Try, /*On fail goto*//*Label 454*/ 11315, // Rule ID 323 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmaxfp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 7029:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vA, v4f32:{ *:[v4f32] }:$vB)  =>  (VMAXFP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vA, v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMAXFP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 323,
        GIR_Done,
      // Label 454: @11315
      GIM_Try, /*On fail goto*//*Label 455*/ 11359, // Rule ID 324 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmaxsb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 7030:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VMAXSB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMAXSB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 324,
        GIR_Done,
      // Label 455: @11359
      GIM_Try, /*On fail goto*//*Label 456*/ 11403, // Rule ID 325 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmaxsh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 7032:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VMAXSH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMAXSH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 325,
        GIR_Done,
      // Label 456: @11403
      GIM_Try, /*On fail goto*//*Label 457*/ 11447, // Rule ID 326 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmaxsw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7033:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMAXSW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMAXSW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 326,
        GIR_Done,
      // Label 457: @11447
      GIM_Try, /*On fail goto*//*Label 458*/ 11491, // Rule ID 327 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmaxub,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 7034:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VMAXUB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMAXUB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 327,
        GIR_Done,
      // Label 458: @11491
      GIM_Try, /*On fail goto*//*Label 459*/ 11535, // Rule ID 328 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmaxuh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 7036:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VMAXUH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMAXUH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 328,
        GIR_Done,
      // Label 459: @11535
      GIM_Try, /*On fail goto*//*Label 460*/ 11579, // Rule ID 329 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmaxuw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7037:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMAXUW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMAXUW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 329,
        GIR_Done,
      // Label 460: @11579
      GIM_Try, /*On fail goto*//*Label 461*/ 11623, // Rule ID 330 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vminfp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 7040:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vA, v4f32:{ *:[v4f32] }:$vB)  =>  (VMINFP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vA, v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMINFP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 330,
        GIR_Done,
      // Label 461: @11623
      GIM_Try, /*On fail goto*//*Label 462*/ 11667, // Rule ID 331 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vminsb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 7041:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VMINSB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMINSB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 331,
        GIR_Done,
      // Label 462: @11667
      GIM_Try, /*On fail goto*//*Label 463*/ 11711, // Rule ID 332 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vminsh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 7043:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VMINSH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMINSH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 332,
        GIR_Done,
      // Label 463: @11711
      GIM_Try, /*On fail goto*//*Label 464*/ 11755, // Rule ID 333 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vminsw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7044:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMINSW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMINSW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 333,
        GIR_Done,
      // Label 464: @11755
      GIM_Try, /*On fail goto*//*Label 465*/ 11799, // Rule ID 334 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vminub,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 7045:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VMINUB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMINUB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 334,
        GIR_Done,
      // Label 465: @11799
      GIM_Try, /*On fail goto*//*Label 466*/ 11843, // Rule ID 335 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vminuh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 7047:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VMINUH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMINUH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 335,
        GIR_Done,
      // Label 466: @11843
      GIM_Try, /*On fail goto*//*Label 467*/ 11887, // Rule ID 336 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vminuw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7048:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMINUW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMINUW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 336,
        GIR_Done,
      // Label 467: @11887
      GIM_Try, /*On fail goto*//*Label 468*/ 11931, // Rule ID 349 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmulesb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 7058:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VMULESB:{ *:[v8i16] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULESB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 349,
        GIR_Done,
      // Label 468: @11931
      GIM_Try, /*On fail goto*//*Label 469*/ 11975, // Rule ID 350 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmulesh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7060:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VMULESH:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULESH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 350,
        GIR_Done,
      // Label 469: @11975
      GIM_Try, /*On fail goto*//*Label 470*/ 12019, // Rule ID 351 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmuleub,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 7062:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VMULEUB:{ *:[v8i16] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULEUB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 351,
        GIR_Done,
      // Label 470: @12019
      GIM_Try, /*On fail goto*//*Label 471*/ 12063, // Rule ID 352 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmuleuh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7064:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VMULEUH:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULEUH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 352,
        GIR_Done,
      // Label 471: @12063
      GIM_Try, /*On fail goto*//*Label 472*/ 12107, // Rule ID 353 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmulosb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 7070:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VMULOSB:{ *:[v8i16] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULOSB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 353,
        GIR_Done,
      // Label 472: @12107
      GIM_Try, /*On fail goto*//*Label 473*/ 12151, // Rule ID 354 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmulosh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7072:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VMULOSH:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULOSH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 354,
        GIR_Done,
      // Label 473: @12151
      GIM_Try, /*On fail goto*//*Label 474*/ 12195, // Rule ID 355 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmuloub,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 7074:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VMULOUB:{ *:[v8i16] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULOUB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 355,
        GIR_Done,
      // Label 474: @12195
      GIM_Try, /*On fail goto*//*Label 475*/ 12239, // Rule ID 356 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmulouh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7076:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VMULOUH:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULOUH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 356,
        GIR_Done,
      // Label 475: @12239
      GIM_Try, /*On fail goto*//*Label 476*/ 12283, // Rule ID 363 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsubcuw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7138:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSUBCUW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUBCUW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 363,
        GIR_Done,
      // Label 476: @12283
      GIM_Try, /*On fail goto*//*Label 477*/ 12327, // Rule ID 368 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsubsbs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 7141:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VSUBSBS:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUBSBS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 368,
        GIR_Done,
      // Label 477: @12327
      GIM_Try, /*On fail goto*//*Label 478*/ 12371, // Rule ID 369 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsubshs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 7142:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VSUBSHS:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUBSHS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 369,
        GIR_Done,
      // Label 478: @12371
      GIM_Try, /*On fail goto*//*Label 479*/ 12415, // Rule ID 370 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsubsws,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7143:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSUBSWS:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUBSWS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 370,
        GIR_Done,
      // Label 479: @12415
      GIM_Try, /*On fail goto*//*Label 480*/ 12459, // Rule ID 371 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsububs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 7144:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VSUBUBS:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUBUBS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 371,
        GIR_Done,
      // Label 480: @12459
      GIM_Try, /*On fail goto*//*Label 481*/ 12503, // Rule ID 372 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsubuhs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 7145:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VSUBUHS:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUBUHS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 372,
        GIR_Done,
      // Label 481: @12503
      GIM_Try, /*On fail goto*//*Label 482*/ 12547, // Rule ID 373 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsubuws,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7146:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSUBUWS:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUBUWS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 373,
        GIR_Done,
      // Label 482: @12547
      GIM_Try, /*On fail goto*//*Label 483*/ 12591, // Rule ID 382 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrlb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 7100:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VRLB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRLB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 382,
        GIR_Done,
      // Label 483: @12591
      GIM_Try, /*On fail goto*//*Label 484*/ 12635, // Rule ID 383 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrlh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 7104:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VRLH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRLH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 383,
        GIR_Done,
      // Label 484: @12635
      GIM_Try, /*On fail goto*//*Label 485*/ 12679, // Rule ID 384 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrlw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7107:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VRLW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRLW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 384,
        GIR_Done,
      // Label 485: @12679
      GIM_Try, /*On fail goto*//*Label 486*/ 12723, // Rule ID 385 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsl,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7112:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSL:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSL,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 385,
        GIR_Done,
      // Label 486: @12723
      GIM_Try, /*On fail goto*//*Label 487*/ 12767, // Rule ID 386 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vslo,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7116:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSLO:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSLO,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 386,
        GIR_Done,
      // Label 487: @12767
      GIM_Try, /*On fail goto*//*Label 488*/ 12811, // Rule ID 387 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vslb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 7113:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VSLB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSLB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 387,
        GIR_Done,
      // Label 488: @12811
      GIM_Try, /*On fail goto*//*Label 489*/ 12855, // Rule ID 388 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vslh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 7115:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VSLH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSLH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 388,
        GIR_Done,
      // Label 489: @12855
      GIM_Try, /*On fail goto*//*Label 490*/ 12899, // Rule ID 389 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vslw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7118:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSLW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSLW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 389,
        GIR_Done,
      // Label 490: @12899
      GIM_Try, /*On fail goto*//*Label 491*/ 12943, // Rule ID 393 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsr,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7119:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSR:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 393,
        GIR_Done,
      // Label 491: @12943
      GIM_Try, /*On fail goto*//*Label 492*/ 12987, // Rule ID 394 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsro,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7126:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSRO:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSRO,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 394,
        GIR_Done,
      // Label 492: @12987
      GIM_Try, /*On fail goto*//*Label 493*/ 13031, // Rule ID 395 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsrab,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 7120:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VSRAB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSRAB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 395,
        GIR_Done,
      // Label 493: @13031
      GIM_Try, /*On fail goto*//*Label 494*/ 13075, // Rule ID 396 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsrah,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 7121:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VSRAH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSRAH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 396,
        GIR_Done,
      // Label 494: @13075
      GIM_Try, /*On fail goto*//*Label 495*/ 13119, // Rule ID 397 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsraw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7122:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSRAW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSRAW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 397,
        GIR_Done,
      // Label 495: @13119
      GIM_Try, /*On fail goto*//*Label 496*/ 13163, // Rule ID 398 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsrb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 7123:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VSRB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSRB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 398,
        GIR_Done,
      // Label 496: @13163
      GIM_Try, /*On fail goto*//*Label 497*/ 13207, // Rule ID 399 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsrh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 7125:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VSRH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSRH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 399,
        GIR_Done,
      // Label 497: @13207
      GIM_Try, /*On fail goto*//*Label 498*/ 13251, // Rule ID 400 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsrw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7128:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSRW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSRW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 400,
        GIR_Done,
      // Label 498: @13251
      GIM_Try, /*On fail goto*//*Label 499*/ 13295, // Rule ID 404 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vpkpx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 7082:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VPKPX:{ *:[v8i16] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPKPX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 404,
        GIR_Done,
      // Label 499: @13295
      GIM_Try, /*On fail goto*//*Label 500*/ 13339, // Rule ID 451 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmulesw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7061:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMULESW:{ *:[v2i64] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULESW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 451,
        GIR_Done,
      // Label 500: @13339
      GIM_Try, /*On fail goto*//*Label 501*/ 13383, // Rule ID 452 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmuleuw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7065:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMULEUW:{ *:[v2i64] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULEUW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 452,
        GIR_Done,
      // Label 501: @13383
      GIM_Try, /*On fail goto*//*Label 502*/ 13427, // Rule ID 453 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmulosw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7073:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMULOSW:{ *:[v2i64] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULOSW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 453,
        GIR_Done,
      // Label 502: @13427
      GIM_Try, /*On fail goto*//*Label 503*/ 13471, // Rule ID 454 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmulouw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7077:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMULOUW:{ *:[v2i64] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULOUW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 454,
        GIR_Done,
      // Label 503: @13471
      GIM_Try, /*On fail goto*//*Label 504*/ 13515, // Rule ID 456 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmaxsd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7031:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMAXSD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMAXSD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 456,
        GIR_Done,
      // Label 504: @13515
      GIM_Try, /*On fail goto*//*Label 505*/ 13559, // Rule ID 457 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmaxud,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7035:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMAXUD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMAXUD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 457,
        GIR_Done,
      // Label 505: @13559
      GIM_Try, /*On fail goto*//*Label 506*/ 13603, // Rule ID 458 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vminsd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7042:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMINSD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMINSD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 458,
        GIR_Done,
      // Label 506: @13603
      GIM_Try, /*On fail goto*//*Label 507*/ 13647, // Rule ID 459 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vminud,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7046:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMINUD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMINUD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 459,
        GIR_Done,
      // Label 507: @13647
      GIM_Try, /*On fail goto*//*Label 508*/ 13691, // Rule ID 462 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrld,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7101:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VRLD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRLD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 462,
        GIR_Done,
      // Label 508: @13691
      GIM_Try, /*On fail goto*//*Label 509*/ 13735, // Rule ID 466 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vaddcuq,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6895:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)  =>  (VADDCUQ:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VADDCUQ,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 466,
        GIR_Done,
      // Label 509: @13735
      GIM_Try, /*On fail goto*//*Label 510*/ 13779, // Rule ID 471 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsubcuq,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 7137:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)  =>  (VSUBCUQ:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUBCUQ,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 471,
        GIR_Done,
      // Label 510: @13779
      GIM_Try, /*On fail goto*//*Label 511*/ 13823, // Rule ID 490 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_crypto_vpmsumb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6860:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VPMSUMB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPMSUMB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 490,
        GIR_Done,
      // Label 511: @13823
      GIM_Try, /*On fail goto*//*Label 512*/ 13867, // Rule ID 491 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_crypto_vpmsumh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6862:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VPMSUMH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPMSUMH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 491,
        GIR_Done,
      // Label 512: @13867
      GIM_Try, /*On fail goto*//*Label 513*/ 13911, // Rule ID 492 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_crypto_vpmsumw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6863:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VPMSUMW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPMSUMW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 492,
        GIR_Done,
      // Label 513: @13911
      GIM_Try, /*On fail goto*//*Label 514*/ 13955, // Rule ID 493 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_crypto_vpmsumd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6861:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VPMSUMD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPMSUMD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 493,
        GIR_Done,
      // Label 514: @13955
      GIM_Try, /*On fail goto*//*Label 515*/ 13999, // Rule ID 501 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vbpermq,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6912:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VBPERMQ:{ *:[v2i64] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VBPERMQ,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 501,
        GIR_Done,
      // Label 515: @13999
      GIM_Try, /*On fail goto*//*Label 516*/ 14043, // Rule ID 504 //
        GIM_CheckFeatures, GIFBS_HasP8Crypto,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_crypto_vcipher,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6854:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VCIPHER:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCIPHER,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 504,
        GIR_Done,
      // Label 516: @14043
      GIM_Try, /*On fail goto*//*Label 517*/ 14087, // Rule ID 505 //
        GIM_CheckFeatures, GIFBS_HasP8Crypto,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_crypto_vcipherlast,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6855:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VCIPHERLAST:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCIPHERLAST,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 505,
        GIR_Done,
      // Label 517: @14087
      GIM_Try, /*On fail goto*//*Label 518*/ 14131, // Rule ID 506 //
        GIM_CheckFeatures, GIFBS_HasP8Crypto,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_crypto_vncipher,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6856:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VNCIPHER:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VNCIPHER,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 506,
        GIR_Done,
      // Label 518: @14131
      GIM_Try, /*On fail goto*//*Label 519*/ 14175, // Rule ID 507 //
        GIM_CheckFeatures, GIFBS_HasP8Crypto,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_crypto_vncipherlast,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6857:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VNCIPHERLAST:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VNCIPHERLAST,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 507,
        GIR_Done,
      // Label 519: @14175
      GIM_Try, /*On fail goto*//*Label 520*/ 14219, // Rule ID 540 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vbpermd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6911:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VBPERMD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VBPERMD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 540,
        GIR_Done,
      // Label 520: @14219
      GIM_Try, /*On fail goto*//*Label 521*/ 14263, // Rule ID 541 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrlwnm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7109:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VRLWNM:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRLWNM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 541,
        GIR_Done,
      // Label 521: @14263
      GIM_Try, /*On fail goto*//*Label 522*/ 14307, // Rule ID 543 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrldnm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7103:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VRLDNM:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRLDNM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 543,
        GIR_Done,
      // Label 522: @14307
      GIM_Try, /*On fail goto*//*Label 523*/ 14351, // Rule ID 545 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vslv,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 7117:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VSLV:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSLV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 545,
        GIR_Done,
      // Label 523: @14351
      GIM_Try, /*On fail goto*//*Label 524*/ 14395, // Rule ID 546 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsrv,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 7127:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VSRV:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSRV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 546,
        GIR_Done,
      // Label 524: @14395
      GIM_Try, /*On fail goto*//*Label 525*/ 14439, // Rule ID 547 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vabsdub,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6892:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VABSDUB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VABSDUB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 547,
        GIR_Done,
      // Label 525: @14439
      GIM_Try, /*On fail goto*//*Label 526*/ 14483, // Rule ID 548 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vabsduh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6893:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VABSDUH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VABSDUH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 548,
        GIR_Done,
      // Label 526: @14483
      GIM_Try, /*On fail goto*//*Label 527*/ 14527, // Rule ID 549 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vabsduw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6894:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VABSDUW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VABSDUW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 549,
        GIR_Done,
      // Label 527: @14527
      GIM_Try, /*On fail goto*//*Label 528*/ 14571, // Rule ID 1085 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vpdepd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7079:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VPDEPD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPDEPD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1085,
        GIR_Done,
      // Label 528: @14571
      GIM_Try, /*On fail goto*//*Label 529*/ 14615, // Rule ID 1086 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vpextd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7081:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VPEXTD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPEXTD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1086,
        GIR_Done,
      // Label 529: @14615
      GIM_Try, /*On fail goto*//*Label 530*/ 14659, // Rule ID 1087 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_pdepd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 7338:{ *:[iPTR] }, i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)  =>  (PDEPD:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::PDEPD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1087,
        GIR_Done,
      // Label 530: @14659
      GIM_Try, /*On fail goto*//*Label 531*/ 14703, // Rule ID 1088 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_pextd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 7339:{ *:[iPTR] }, i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)  =>  (PEXTD:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::PEXTD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1088,
        GIR_Done,
      // Label 531: @14703
      GIM_Try, /*On fail goto*//*Label 532*/ 14747, // Rule ID 1089 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vcfuged,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6914:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VCFUGED:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCFUGED,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1089,
        GIR_Done,
      // Label 532: @14747
      GIM_Try, /*On fail goto*//*Label 533*/ 14791, // Rule ID 1091 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_cfuged,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 7175:{ *:[iPTR] }, i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)  =>  (CFUGED:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CFUGED,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1091,
        GIR_Done,
      // Label 533: @14791
      GIM_Try, /*On fail goto*//*Label 534*/ 14835, // Rule ID 1093 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vclzdm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6918:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VCLZDM:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCLZDM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1093,
        GIR_Done,
      // Label 534: @14835
      GIM_Try, /*On fail goto*//*Label 535*/ 14879, // Rule ID 1094 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vctzdm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6976:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VCTZDM:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCTZDM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1094,
        GIR_Done,
      // Label 535: @14879
      GIM_Try, /*On fail goto*//*Label 536*/ 14923, // Rule ID 1095 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_cntlzdm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 7180:{ *:[iPTR] }, i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)  =>  (CNTLZDM:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CNTLZDM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1095,
        GIR_Done,
      // Label 536: @14923
      GIM_Try, /*On fail goto*//*Label 537*/ 14967, // Rule ID 1096 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_cnttzdm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 7181:{ *:[iPTR] }, i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)  =>  (CNTTZDM:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CNTTZDM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1096,
        GIR_Done,
      // Label 537: @14967
      GIM_Try, /*On fail goto*//*Label 538*/ 15011, // Rule ID 1097 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vclrlb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6916:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, i32:{ *:[i32] }:$rB)  =>  (VCLRLB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCLRLB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1097,
        GIR_Done,
      // Label 538: @15011
      GIM_Try, /*On fail goto*//*Label 539*/ 15055, // Rule ID 1098 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vclrrb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6917:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, i32:{ *:[i32] }:$rB)  =>  (VCLRRB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCLRRB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1098,
        GIR_Done,
      // Label 539: @15055
      GIM_Try, /*On fail goto*//*Label 540*/ 15099, // Rule ID 1112 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vdivesw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6980:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VDIVESW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VDIVESW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1112,
        GIR_Done,
      // Label 540: @15099
      GIM_Try, /*On fail goto*//*Label 541*/ 15143, // Rule ID 1113 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vdiveuw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6983:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VDIVEUW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VDIVEUW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1113,
        GIR_Done,
      // Label 541: @15143
      GIM_Try, /*On fail goto*//*Label 542*/ 15187, // Rule ID 1114 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vdivesd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6978:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VDIVESD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VDIVESD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1114,
        GIR_Done,
      // Label 542: @15187
      GIM_Try, /*On fail goto*//*Label 543*/ 15231, // Rule ID 1115 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vdiveud,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6981:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VDIVEUD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VDIVEUD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1115,
        GIR_Done,
      // Label 543: @15231
      GIM_Try, /*On fail goto*//*Label 544*/ 15275, // Rule ID 1116 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmulesd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 7059:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMULESD:{ *:[v1i128] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULESD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1116,
        GIR_Done,
      // Label 544: @15275
      GIM_Try, /*On fail goto*//*Label 545*/ 15319, // Rule ID 1117 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmuleud,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 7063:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMULEUD:{ *:[v1i128] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULEUD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1117,
        GIR_Done,
      // Label 545: @15319
      GIM_Try, /*On fail goto*//*Label 546*/ 15363, // Rule ID 1118 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmulosd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 7071:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMULOSD:{ *:[v1i128] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULOSD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1118,
        GIR_Done,
      // Label 546: @15363
      GIM_Try, /*On fail goto*//*Label 547*/ 15407, // Rule ID 1119 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmuloud,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 7075:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMULOUD:{ *:[v1i128] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULOUD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1119,
        GIR_Done,
      // Label 547: @15407
      GIM_Try, /*On fail goto*//*Label 548*/ 15451, // Rule ID 1123 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vdivesq,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6979:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)  =>  (VDIVESQ:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VDIVESQ,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1123,
        GIR_Done,
      // Label 548: @15451
      GIM_Try, /*On fail goto*//*Label 549*/ 15495, // Rule ID 1124 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vdiveuq,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6982:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)  =>  (VDIVEUQ:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VDIVEUQ,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1124,
        GIR_Done,
      // Label 549: @15495
      GIM_Try, /*On fail goto*//*Label 550*/ 15539, // Rule ID 1134 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrlqnm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 7106:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)  =>  (VRLQNM:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRLQNM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1134,
        GIR_Done,
      // Label 550: @15539
      GIM_Reject,
    // Label 402: @15540
    GIM_Try, /*On fail goto*//*Label 551*/ 17943,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_Try, /*On fail goto*//*Label 552*/ 15610, // Rule ID 996 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_fmaf128_round_to_odd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/4, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s128,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_wo_chain:{ *:[f128] } 7223:{ *:[iPTR] }, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB, (fneg:{ *:[f128] } f128:{ *:[f128] }:$vTi))  =>  (XSMSUBQPO:{ *:[f128] } f128:{ *:[f128] }:$vTi, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMSUBQPO,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 996,
        GIR_Done,
      // Label 552: @15610
      GIM_Try, /*On fail goto*//*Label 553*/ 15662, // Rule ID 995 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_fmaf128_round_to_odd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[f128] } 7223:{ *:[iPTR] }, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB, f128:{ *:[f128] }:$vTi)  =>  (XSMADDQPO:{ *:[f128] } f128:{ *:[f128] }:$vTi, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMADDQPO,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 995,
        GIR_Done,
      // Label 553: @15662
      GIM_Try, /*On fail goto*//*Label 554*/ 15712, // Rule ID 502 //
        GIM_CheckFeatures, GIFBS_HasP8Crypto,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_crypto_vshasigmaw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] ST
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // MIs[0] SIX
        GIM_CheckIsImm, /*MI*/0, /*Op*/4,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6866:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, (timm:{ *:[i32] }):$ST, (timm:{ *:[i32] }):$SIX)  =>  (VSHASIGMAW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, (timm:{ *:[i32] }):$ST, (timm:{ *:[i32] }):$SIX)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSHASIGMAW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // ST
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // SIX
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 502,
        GIR_Done,
      // Label 554: @15712
      GIM_Try, /*On fail goto*//*Label 555*/ 15762, // Rule ID 503 //
        GIM_CheckFeatures, GIFBS_HasP8Crypto,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_crypto_vshasigmad,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] ST
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // MIs[0] SIX
        GIM_CheckIsImm, /*MI*/0, /*Op*/4,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6865:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, (timm:{ *:[i32] }):$ST, (timm:{ *:[i32] }):$SIX)  =>  (VSHASIGMAD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, (timm:{ *:[i32] }):$ST, (timm:{ *:[i32] }):$SIX)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSHASIGMAD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // ST
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // SIX
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 503,
        GIR_Done,
      // Label 555: @15762
      GIM_Try, /*On fail goto*//*Label 556*/ 15813, // Rule ID 1035 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsldbi,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] SH
        GIM_CheckIsImm, /*MI*/0, /*Op*/4,
        // (intrinsic_wo_chain:{ *:[v16i8] } 7114:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$VRA, v16i8:{ *:[v16i8] }:$VRB, (timm:{ *:[i32] }):$SH)  =>  (VSLDBI:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$VRA, v16i8:{ *:[v16i8] }:$VRB, (timm:{ *:[i32] }):$SH)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSLDBI,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // VRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // VRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // VRB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // SH
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1035,
        GIR_Done,
      // Label 556: @15813
      GIM_Try, /*On fail goto*//*Label 557*/ 15864, // Rule ID 1036 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsrdbi,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] SH
        GIM_CheckIsImm, /*MI*/0, /*Op*/4,
        // (intrinsic_wo_chain:{ *:[v16i8] } 7124:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$VRA, v16i8:{ *:[v16i8] }:$VRB, (timm:{ *:[i32] }):$SH)  =>  (VSRDBI:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$VRA, v16i8:{ *:[v16i8] }:$VRB, (timm:{ *:[i32] }):$SH)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSRDBI,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // VRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // VRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // VRB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // SH
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1036,
        GIR_Done,
      // Label 557: @15864
      GIM_Try, /*On fail goto*//*Label 558*/ 15915, // Rule ID 1041 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinsw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] UIM
        GIM_CheckIsImm, /*MI*/0, /*Op*/4,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7022:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vDi, i32:{ *:[i32] }:$rB, (timm:{ *:[i32] }):$UIM)  =>  (VINSW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vDi, (timm:{ *:[i32] }):$UIM, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // UIM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1041,
        GIR_Done,
      // Label 558: @15915
      GIM_Try, /*On fail goto*//*Label 559*/ 15966, // Rule ID 1042 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinsd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] UIM
        GIM_CheckIsImm, /*MI*/0, /*Op*/4,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7015:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vDi, i64:{ *:[i64] }:$rB, (timm:{ *:[i32] }):$UIM)  =>  (VINSD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vDi, (timm:{ *:[i32] }):$UIM, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // UIM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1042,
        GIR_Done,
      // Label 559: @15966
      GIM_Try, /*On fail goto*//*Label 560*/ 16018, // Rule ID 290 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmladduhm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 7049:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v8i16:{ *:[v8i16] }:$vC)  =>  (VMLADDUHM:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v8i16:{ *:[v8i16] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMLADDUHM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 290,
        GIR_Done,
      // Label 560: @16018
      GIM_Try, /*On fail goto*//*Label 561*/ 16070, // Rule ID 291 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vperm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7080:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB, v16i8:{ *:[v16i8] }:$vC)  =>  (VPERM:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB, v16i8:{ *:[v16i8] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPERM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 291,
        GIR_Done,
      // Label 561: @16070
      GIM_Try, /*On fail goto*//*Label 562*/ 16122, // Rule ID 292 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsel,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7111:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB, v4i32:{ *:[v4i32] }:$vC)  =>  (VSEL:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB, v4i32:{ *:[v4i32] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSEL,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 292,
        GIR_Done,
      // Label 562: @16122
      GIM_Try, /*On fail goto*//*Label 563*/ 16174, // Rule ID 343 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmsummbm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7051:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB, v4i32:{ *:[v4i32] }:$vC)  =>  (VMSUMMBM:{ *:[v4i32] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB, v4i32:{ *:[v4i32] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMSUMMBM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 343,
        GIR_Done,
      // Label 563: @16174
      GIM_Try, /*On fail goto*//*Label 564*/ 16226, // Rule ID 344 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmsumshm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7052:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v4i32:{ *:[v4i32] }:$vC)  =>  (VMSUMSHM:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v4i32:{ *:[v4i32] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMSUMSHM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 344,
        GIR_Done,
      // Label 564: @16226
      GIM_Try, /*On fail goto*//*Label 565*/ 16278, // Rule ID 345 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmsumubm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7054:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB, v4i32:{ *:[v4i32] }:$vC)  =>  (VMSUMUBM:{ *:[v4i32] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB, v4i32:{ *:[v4i32] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMSUMUBM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 345,
        GIR_Done,
      // Label 565: @16278
      GIM_Try, /*On fail goto*//*Label 566*/ 16330, // Rule ID 346 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmsumuhm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7056:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v4i32:{ *:[v4i32] }:$vC)  =>  (VMSUMUHM:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v4i32:{ *:[v4i32] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMSUMUHM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 346,
        GIR_Done,
      // Label 566: @16330
      GIM_Try, /*On fail goto*//*Label 567*/ 16382, // Rule ID 465 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vaddeuqm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6898:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB, v1i128:{ *:[v1i128] }:$vC)  =>  (VADDEUQM:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB, v1i128:{ *:[v1i128] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VADDEUQM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 465,
        GIR_Done,
      // Label 567: @16382
      GIM_Try, /*On fail goto*//*Label 568*/ 16434, // Rule ID 467 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vaddecuq,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6897:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB, v1i128:{ *:[v1i128] }:$vC)  =>  (VADDECUQ:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB, v1i128:{ *:[v1i128] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VADDECUQ,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 467,
        GIR_Done,
      // Label 568: @16434
      GIM_Try, /*On fail goto*//*Label 569*/ 16486, // Rule ID 470 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsubeuqm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 7140:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB, v1i128:{ *:[v1i128] }:$vC)  =>  (VSUBEUQM:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB, v1i128:{ *:[v1i128] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUBEUQM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 470,
        GIR_Done,
      // Label 569: @16486
      GIM_Try, /*On fail goto*//*Label 570*/ 16538, // Rule ID 472 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsubecuq,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 7139:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB, v1i128:{ *:[v1i128] }:$vC)  =>  (VSUBECUQ:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB, v1i128:{ *:[v1i128] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUBECUQ,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 472,
        GIR_Done,
      // Label 570: @16538
      GIM_Try, /*On fail goto*//*Label 571*/ 16590, // Rule ID 509 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmsumudm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 7055:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB, v1i128:{ *:[v1i128] }:$vC)  =>  (VMSUMUDM:{ *:[v1i128] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB, v1i128:{ *:[v1i128] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMSUMUDM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 509,
        GIR_Done,
      // Label 571: @16590
      GIM_Try, /*On fail goto*//*Label 572*/ 16642, // Rule ID 542 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrlwmi,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7108:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB, v4i32:{ *:[v4i32] }:$vDi)  =>  (VRLWMI:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB, v4i32:{ *:[v4i32] }:$vDi)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRLWMI,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vDi
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 542,
        GIR_Done,
      // Label 572: @16642
      GIM_Try, /*On fail goto*//*Label 573*/ 16694, // Rule ID 544 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrldmi,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7102:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB, v2i64:{ *:[v2i64] }:$vDi)  =>  (VRLDMI:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB, v2i64:{ *:[v2i64] }:$vDi)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRLDMI,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vDi
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 544,
        GIR_Done,
      // Label 573: @16694
      GIM_Try, /*On fail goto*//*Label 574*/ 16746, // Rule ID 1043 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinsbvlx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 7013:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vDi, i32:{ *:[i32] }:$rA, v16i8:{ *:[v16i8] }:$vB)  =>  (VINSBVLX:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vDi, i32:{ *:[i32] }:$rA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSBVLX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1043,
        GIR_Done,
      // Label 574: @16746
      GIM_Try, /*On fail goto*//*Label 575*/ 16798, // Rule ID 1044 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinsbvrx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 7014:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vDi, i32:{ *:[i32] }:$rA, v16i8:{ *:[v16i8] }:$vB)  =>  (VINSBVRX:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vDi, i32:{ *:[i32] }:$rA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSBVRX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1044,
        GIR_Done,
      // Label 575: @16798
      GIM_Try, /*On fail goto*//*Label 576*/ 16850, // Rule ID 1045 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinshvlx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 7020:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vDi, i32:{ *:[i32] }:$rA, v8i16:{ *:[v8i16] }:$vB)  =>  (VINSHVLX:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vDi, i32:{ *:[i32] }:$rA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSHVLX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1045,
        GIR_Done,
      // Label 576: @16850
      GIM_Try, /*On fail goto*//*Label 577*/ 16902, // Rule ID 1046 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinshvrx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 7021:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vDi, i32:{ *:[i32] }:$rA, v8i16:{ *:[v8i16] }:$vB)  =>  (VINSHVRX:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vDi, i32:{ *:[i32] }:$rA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSHVRX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1046,
        GIR_Done,
      // Label 577: @16902
      GIM_Try, /*On fail goto*//*Label 578*/ 16954, // Rule ID 1047 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinswvlx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7025:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vDi, i32:{ *:[i32] }:$rA, v4i32:{ *:[v4i32] }:$vB)  =>  (VINSWVLX:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vDi, i32:{ *:[i32] }:$rA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSWVLX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1047,
        GIR_Done,
      // Label 578: @16954
      GIM_Try, /*On fail goto*//*Label 579*/ 17006, // Rule ID 1048 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinswvrx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7026:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vDi, i32:{ *:[i32] }:$rA, v4i32:{ *:[v4i32] }:$vB)  =>  (VINSWVRX:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vDi, i32:{ *:[i32] }:$rA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSWVRX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1048,
        GIR_Done,
      // Label 579: @17006
      GIM_Try, /*On fail goto*//*Label 580*/ 17058, // Rule ID 1049 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinsblx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 7011:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vDi, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (VINSBLX:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vDi, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSBLX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1049,
        GIR_Done,
      // Label 580: @17058
      GIM_Try, /*On fail goto*//*Label 581*/ 17110, // Rule ID 1050 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinsbrx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 7012:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vDi, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (VINSBRX:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vDi, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSBRX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1050,
        GIR_Done,
      // Label 581: @17110
      GIM_Try, /*On fail goto*//*Label 582*/ 17162, // Rule ID 1051 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinshlx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 7018:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vDi, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (VINSHLX:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vDi, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSHLX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1051,
        GIR_Done,
      // Label 582: @17162
      GIM_Try, /*On fail goto*//*Label 583*/ 17214, // Rule ID 1052 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinshrx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 7019:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vDi, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (VINSHRX:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vDi, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSHRX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1052,
        GIR_Done,
      // Label 583: @17214
      GIM_Try, /*On fail goto*//*Label 584*/ 17266, // Rule ID 1053 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinswlx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7023:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vDi, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (VINSWLX:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vDi, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSWLX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1053,
        GIR_Done,
      // Label 584: @17266
      GIM_Try, /*On fail goto*//*Label 585*/ 17318, // Rule ID 1054 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinswrx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 7024:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vDi, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (VINSWRX:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vDi, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSWRX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1054,
        GIR_Done,
      // Label 585: @17318
      GIM_Try, /*On fail goto*//*Label 586*/ 17370, // Rule ID 1055 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinsdlx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7016:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vDi, i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)  =>  (VINSDLX:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vDi, i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSDLX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1055,
        GIR_Done,
      // Label 586: @17370
      GIM_Try, /*On fail goto*//*Label 587*/ 17422, // Rule ID 1056 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinsdrx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 7017:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vDi, i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)  =>  (VINSDRX:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vDi, i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSDRX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1056,
        GIR_Done,
      // Label 587: @17422
      GIM_Try, /*On fail goto*//*Label 588*/ 17474, // Rule ID 1077 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextdubvlx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6992:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB, i32:{ *:[i32] }:$rC)  =>  (VEXTDUBVLX:{ *:[v2i64] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB, i32:{ *:[i32] }:$rC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTDUBVLX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1077,
        GIR_Done,
      // Label 588: @17474
      GIM_Try, /*On fail goto*//*Label 589*/ 17526, // Rule ID 1078 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextdubvrx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6993:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB, i32:{ *:[i32] }:$rC)  =>  (VEXTDUBVRX:{ *:[v2i64] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB, i32:{ *:[i32] }:$rC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTDUBVRX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1078,
        GIR_Done,
      // Label 589: @17526
      GIM_Try, /*On fail goto*//*Label 590*/ 17578, // Rule ID 1079 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextduhvlx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6994:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, i32:{ *:[i32] }:$rC)  =>  (VEXTDUHVLX:{ *:[v2i64] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, i32:{ *:[i32] }:$rC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTDUHVLX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1079,
        GIR_Done,
      // Label 590: @17578
      GIM_Try, /*On fail goto*//*Label 591*/ 17630, // Rule ID 1080 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextduhvrx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6995:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, i32:{ *:[i32] }:$rC)  =>  (VEXTDUHVRX:{ *:[v2i64] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, i32:{ *:[i32] }:$rC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTDUHVRX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1080,
        GIR_Done,
      // Label 591: @17630
      GIM_Try, /*On fail goto*//*Label 592*/ 17682, // Rule ID 1081 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextduwvlx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6996:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB, i32:{ *:[i32] }:$rC)  =>  (VEXTDUWVLX:{ *:[v2i64] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB, i32:{ *:[i32] }:$rC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTDUWVLX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1081,
        GIR_Done,
      // Label 592: @17682
      GIM_Try, /*On fail goto*//*Label 593*/ 17734, // Rule ID 1082 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextduwvrx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6997:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB, i32:{ *:[i32] }:$rC)  =>  (VEXTDUWVRX:{ *:[v2i64] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB, i32:{ *:[i32] }:$rC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTDUWVRX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1082,
        GIR_Done,
      // Label 593: @17734
      GIM_Try, /*On fail goto*//*Label 594*/ 17786, // Rule ID 1083 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextddvlx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6990:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB, i32:{ *:[i32] }:$rC)  =>  (VEXTDDVLX:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB, i32:{ *:[i32] }:$rC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTDDVLX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1083,
        GIR_Done,
      // Label 594: @17786
      GIM_Try, /*On fail goto*//*Label 595*/ 17838, // Rule ID 1084 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextddvrx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6991:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB, i32:{ *:[i32] }:$rC)  =>  (VEXTDDVRX:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB, i32:{ *:[i32] }:$rC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTDDVRX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1084,
        GIR_Done,
      // Label 595: @17838
      GIM_Try, /*On fail goto*//*Label 596*/ 17890, // Rule ID 1120 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmsumcud,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 7050:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB, v1i128:{ *:[v1i128] }:$vC)  =>  (VMSUMCUD:{ *:[v1i128] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB, v1i128:{ *:[v1i128] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMSUMCUD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1120,
        GIR_Done,
      // Label 596: @17890
      GIM_Try, /*On fail goto*//*Label 597*/ 17942, // Rule ID 1135 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrlqmi,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 7105:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB, v1i128:{ *:[v1i128] }:$vDi)  =>  (VRLQMI:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB, v1i128:{ *:[v1i128] }:$vDi)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRLQMI,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vDi
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1135,
        GIR_Done,
      // Label 597: @17942
      GIM_Reject,
    // Label 551: @17943
    GIM_Try, /*On fail goto*//*Label 598*/ 18005, // Rule ID 1092 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/6,
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xxeval,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // MIs[0] IMM
      GIM_CheckIsImm, /*MI*/0, /*Op*/5,
      // (intrinsic_wo_chain:{ *:[v2i64] } 7458:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$XA, v2i64:{ *:[v2i64] }:$XB, v2i64:{ *:[v2i64] }:$XC, (timm:{ *:[i32] }):$IMM)  =>  (XXEVAL:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$XA, v2i64:{ *:[v2i64] }:$XB, v2i64:{ *:[v2i64] }:$XC, (timm:{ *:[i32] }):$IMM)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXEVAL,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // XC
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/5, // IMM
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1092,
      GIR_Done,
    // Label 598: @18005
    GIM_Reject,
    // Label 17: @18006
    GIM_Try, /*On fail goto*//*Label 599*/ 18296,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/1,
      GIM_Try, /*On fail goto*//*Label 600*/ 18029, // Rule ID 103 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_eieio,
        // (intrinsic_void 7212:{ *:[iPTR] })  =>  (PseudoEIEIO)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::PseudoEIEIO,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 103,
        GIR_Done,
      // Label 600: @18029
      GIM_Try, /*On fail goto*//*Label 601*/ 18052, // Rule ID 1167 //
        GIM_CheckFeatures, GIFBS_HasSYNC,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_sync,
        // (intrinsic_void 7361:{ *:[iPTR] })  =>  (SYNC 0:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SYNC,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1167,
        GIR_Done,
      // Label 601: @18052
      GIM_Try, /*On fail goto*//*Label 602*/ 18075, // Rule ID 1168 //
        GIM_CheckFeatures, GIFBS_HasSYNC,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_iospace_sync,
        // (intrinsic_void 7245:{ *:[iPTR] })  =>  (SYNC 0:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SYNC,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1168,
        GIR_Done,
      // Label 602: @18075
      GIM_Try, /*On fail goto*//*Label 603*/ 18098, // Rule ID 1169 //
        GIM_CheckFeatures, GIFBS_HasSYNC,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_lwsync,
        // (intrinsic_void 7250:{ *:[iPTR] })  =>  (SYNC 1:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SYNC,
        GIR_AddImm, /*InsnID*/0, /*Imm*/1,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1169,
        GIR_Done,
      // Label 603: @18098
      GIM_Try, /*On fail goto*//*Label 604*/ 18121, // Rule ID 1170 //
        GIM_CheckFeatures, GIFBS_HasSYNC,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_iospace_lwsync,
        // (intrinsic_void 7244:{ *:[iPTR] })  =>  (SYNC 1:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SYNC,
        GIR_AddImm, /*InsnID*/0, /*Imm*/1,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1170,
        GIR_Done,
      // Label 604: @18121
      GIM_Try, /*On fail goto*//*Label 605*/ 18141, // Rule ID 1171 //
        GIM_CheckFeatures, GIFBS_HasOnlyMSYNC,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_sync,
        // (intrinsic_void 7361:{ *:[iPTR] })  =>  (MSYNC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MSYNC,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1171,
        GIR_Done,
      // Label 605: @18141
      GIM_Try, /*On fail goto*//*Label 606*/ 18161, // Rule ID 1172 //
        GIM_CheckFeatures, GIFBS_HasOnlyMSYNC,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_iospace_sync,
        // (intrinsic_void 7245:{ *:[iPTR] })  =>  (MSYNC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MSYNC,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1172,
        GIR_Done,
      // Label 606: @18161
      GIM_Try, /*On fail goto*//*Label 607*/ 18181, // Rule ID 1173 //
        GIM_CheckFeatures, GIFBS_HasOnlyMSYNC,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_lwsync,
        // (intrinsic_void 7250:{ *:[iPTR] })  =>  (MSYNC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MSYNC,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1173,
        GIR_Done,
      // Label 607: @18181
      GIM_Try, /*On fail goto*//*Label 608*/ 18201, // Rule ID 1174 //
        GIM_CheckFeatures, GIFBS_HasOnlyMSYNC,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_iospace_lwsync,
        // (intrinsic_void 7244:{ *:[iPTR] })  =>  (MSYNC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MSYNC,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1174,
        GIR_Done,
      // Label 608: @18201
      GIM_Try, /*On fail goto*//*Label 609*/ 18219, // Rule ID 1175 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_eieio,
        // (intrinsic_void 7212:{ *:[iPTR] })  =>  (PseudoEIEIO)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::PseudoEIEIO,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1175,
        GIR_Done,
      // Label 609: @18219
      GIM_Try, /*On fail goto*//*Label 610*/ 18237, // Rule ID 1176 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_iospace_eieio,
        // (intrinsic_void 7243:{ *:[iPTR] })  =>  (PseudoEIEIO)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::PseudoEIEIO,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1176,
        GIR_Done,
      // Label 610: @18237
      GIM_Try, /*On fail goto*//*Label 611*/ 18257, // Rule ID 1253 //
        GIM_CheckFeatures, GIFBS_IsAIX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_altivec_dssall,
        // (intrinsic_void 6868:{ *:[iPTR] })  =>  (NOP)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::NOP,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1253,
        GIR_Done,
      // Label 611: @18257
      GIM_Try, /*On fail goto*//*Label 612*/ 18277, // Rule ID 1254 //
        GIM_CheckFeatures, GIFBS_NotAIX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_altivec_dssall,
        // (intrinsic_void 6868:{ *:[iPTR] })  =>  (DSSALL)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DSSALL,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1254,
        GIR_Done,
      // Label 612: @18277
      GIM_Try, /*On fail goto*//*Label 613*/ 18295, // Rule ID 4705 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_isync,
        // (intrinsic_void 7246:{ *:[iPTR] })  =>  (ISYNC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ISYNC,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4705,
        GIR_Done,
      // Label 613: @18295
      GIM_Reject,
    // Label 599: @18296
    GIM_Try, /*On fail goto*//*Label 614*/ 18815,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_Try, /*On fail goto*//*Label 615*/ 18338, // Rule ID 263 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_altivec_dss,
        GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_void 6867:{ *:[iPTR] }, (imm:{ *:[i32] }):$STRM)  =>  (DSS (imm:{ *:[i32] }):$STRM)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DSS,
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // STRM
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, 1, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 263,
        GIR_Done,
      // Label 615: @18338
      GIM_Try, /*On fail goto*//*Label 616*/ 18361, // Rule ID 188 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_mtfsb0,
        // MIs[0] FM
        GIM_CheckIsImm, /*MI*/0, /*Op*/1,
        // (intrinsic_void 7326:{ *:[iPTR] }, (timm:{ *:[i32] }):$FM)  =>  (MTFSB0 (timm:{ *:[i32] }):$FM)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MTFSB0,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // FM
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 188,
        GIR_Done,
      // Label 616: @18361
      GIM_Try, /*On fail goto*//*Label 617*/ 18384, // Rule ID 189 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_mtfsb1,
        // MIs[0] FM
        GIM_CheckIsImm, /*MI*/0, /*Op*/1,
        // (intrinsic_void 7327:{ *:[iPTR] }, (timm:{ *:[i32] }):$FM)  =>  (MTFSB1 (timm:{ *:[i32] }):$FM)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MTFSB1,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // FM
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 189,
        GIR_Done,
      // Label 617: @18384
      GIM_Try, /*On fail goto*//*Label 618*/ 18412, // Rule ID 272 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_mfvscr,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v8i16] } 6880:{ *:[iPTR] })  =>  (MFVSCR:{ *:[v8i16] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MFVSCR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 272,
        GIR_Done,
      // Label 618: @18412
      GIM_Try, /*On fail goto*//*Label 619*/ 18438, // Rule ID 1202 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_readflm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (intrinsic_w_chain:{ *:[f64] } 7341:{ *:[iPTR] })  =>  (MFFS:{ *:[f64] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MFFS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rT
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1202,
        GIR_Done,
      // Label 619: @18438
      GIM_Try, /*On fail goto*//*Label 620*/ 18496, // Rule ID 1532 //
        GIM_CheckFeatures, GIFBS_IsISA3_0,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_darn32,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_w_chain:{ *:[i32] } 7189:{ *:[iPTR] })  =>  (EXTRACT_SUBREG:{ *:[i32] } (DARN:{ *:[i64] } 0:{ *:[i32] }), sub_32:{ *:[i32] })
        GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s64,
        GIR_BuildMI, /*InsnID*/1, /*Opcode*/PPC::DARN,
        GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
        GIR_AddImm, /*InsnID*/1, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/1, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_AddTempSubRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0, PPC::sub_32,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::GPRCRegClassID,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/1, PPC::G8RCRegClassID,
        // GIR_Coverage, 1532,
        GIR_Done,
      // Label 620: @18496
      GIM_Try, /*On fail goto*//*Label 621*/ 18531, // Rule ID 1533 //
        GIM_CheckFeatures, GIFBS_IsISA3_0,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_darn,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_w_chain:{ *:[i64] } 7188:{ *:[iPTR] })  =>  (DARN:{ *:[i64] } 1:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DARN,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // RT
        GIR_AddImm, /*InsnID*/0, /*Imm*/1,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1533,
        GIR_Done,
      // Label 621: @18531
      GIM_Try, /*On fail goto*//*Label 622*/ 18566, // Rule ID 1534 //
        GIM_CheckFeatures, GIFBS_IsISA3_0,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_darnraw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_w_chain:{ *:[i64] } 7190:{ *:[iPTR] })  =>  (DARN:{ *:[i64] } 2:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DARN,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // RT
        GIR_AddImm, /*InsnID*/0, /*Imm*/2,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1534,
        GIR_Done,
      // Label 622: @18566
      GIM_Try, /*On fail goto*//*Label 623*/ 18598, // Rule ID 2848 //
        GIM_CheckFeatures, GIFBS_HasHTM,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_tcheck,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_w_chain:{ *:[i32] } 7368:{ *:[iPTR] })  =>  (TCHECK_RET:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::TCHECK_RET,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // out
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2848,
        GIR_Done,
      // Label 623: @18598
      GIM_Try, /*On fail goto*//*Label 624*/ 18633, // Rule ID 2852 //
        GIM_CheckFeatures, GIFBS_HasHTM,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_get_texasr,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_w_chain:{ *:[i64] } 7237:{ *:[iPTR] })  =>  (MFSPR8:{ *:[i64] } 130:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MFSPR8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // RT
        GIR_AddImm, /*InsnID*/0, /*Imm*/130,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2852,
        GIR_Done,
      // Label 624: @18633
      GIM_Try, /*On fail goto*//*Label 625*/ 18668, // Rule ID 2853 //
        GIM_CheckFeatures, GIFBS_HasHTM,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_get_texasru,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_w_chain:{ *:[i64] } 7238:{ *:[iPTR] })  =>  (MFSPR8:{ *:[i64] } 131:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MFSPR8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // RT
        GIR_AddImm, /*InsnID*/0, /*Imm*/131,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2853,
        GIR_Done,
      // Label 625: @18668
      GIM_Try, /*On fail goto*//*Label 626*/ 18703, // Rule ID 2854 //
        GIM_CheckFeatures, GIFBS_HasHTM,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_get_tfhar,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_w_chain:{ *:[i64] } 7239:{ *:[iPTR] })  =>  (MFSPR8:{ *:[i64] } 128:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MFSPR8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // RT
        GIR_AddImm, /*InsnID*/0, /*Imm*/128,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2854,
        GIR_Done,
      // Label 626: @18703
      GIM_Try, /*On fail goto*//*Label 627*/ 18738, // Rule ID 2855 //
        GIM_CheckFeatures, GIFBS_HasHTM,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_get_tfiar,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_w_chain:{ *:[i64] } 7240:{ *:[iPTR] })  =>  (MFSPR8:{ *:[i64] } 129:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MFSPR8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // RT
        GIR_AddImm, /*InsnID*/0, /*Imm*/129,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2855,
        GIR_Done,
      // Label 627: @18738
      GIM_Try, /*On fail goto*//*Label 628*/ 18764, // Rule ID 185 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::set_loop_iterations,
        GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
        // (intrinsic_void 268:{ *:[iPTR] }, i32:{ *:[i32] }:$rS)  =>  (MTCTRloop:{ *:[i32] } i32:{ *:[i32] }:$rS)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MTCTRloop,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rS
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 185,
        GIR_Done,
      // Label 628: @18764
      GIM_Try, /*On fail goto*//*Label 629*/ 18788, // Rule ID 273 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_altivec_mtvscr,
        GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
        // (intrinsic_void 6881:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vB)  =>  (MTVSCR v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MTVSCR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 273,
        GIR_Done,
      // Label 629: @18788
      GIM_Try, /*On fail goto*//*Label 630*/ 18814, // Rule ID 627 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::set_loop_iterations,
        GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
        // (intrinsic_void 268:{ *:[iPTR] }, i64:{ *:[i64] }:$rS)  =>  (MTCTR8loop:{ *:[i64] } i64:{ *:[i64] }:$rS)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MTCTR8loop,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rS
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 627,
        GIR_Done,
      // Label 630: @18814
      GIM_Reject,
    // Label 614: @18815
    GIM_Try, /*On fail goto*//*Label 631*/ 19013,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_Try, /*On fail goto*//*Label 632*/ 18850, // Rule ID 1145 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_mtfsfi,
        // MIs[0] BF
        GIM_CheckIsImm, /*MI*/0, /*Op*/1,
        // MIs[0] U
        GIM_CheckIsImm, /*MI*/0, /*Op*/2,
        // (intrinsic_void 7329:{ *:[iPTR] }, (timm:{ *:[i32] }):$BF, (timm:{ *:[i32] }):$U)  =>  (MTFSFIb (timm:{ *:[i32] }):$BF, (timm:{ *:[i32] }):$U)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MTFSFIb,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // BF
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // U
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1145,
        GIR_Done,
      // Label 632: @18850
      GIM_Try, /*On fail goto*//*Label 633*/ 18897, // Rule ID 12 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_setrnd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_w_chain:{ *:[f64] } 7350:{ *:[iPTR] }, (imm:{ *:[i32] }):$RND)  =>  (SETRNDi:{ *:[f64] } (imm:{ *:[i32] }):$RND)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SETRNDi,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // RND
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, 1, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 12,
        GIR_Done,
      // Label 633: @18897
      GIM_Try, /*On fail goto*//*Label 634*/ 18928, // Rule ID 190 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_mtfsf,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        // MIs[0] FM
        GIM_CheckIsImm, /*MI*/0, /*Op*/1,
        // (intrinsic_void 7328:{ *:[iPTR] }, (timm:{ *:[i32] }):$FM, f64:{ *:[f64] }:$rT)  =>  (MTFSFb (timm:{ *:[i32] }):$FM, f64:{ *:[f64] }:$rT)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MTFSFb,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // FM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rT
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 190,
        GIR_Done,
      // Label 634: @18928
      GIM_Try, /*On fail goto*//*Label 635*/ 18970, // Rule ID 13 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_setrnd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_w_chain:{ *:[f64] } 7350:{ *:[iPTR] }, gprc:{ *:[i32] }:$in)  =>  (SETRND:{ *:[f64] } gprc:{ *:[i32] }:$in)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SETRND,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // in
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 13,
        GIR_Done,
      // Label 635: @18970
      GIM_Try, /*On fail goto*//*Label 636*/ 19012, // Rule ID 14 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_setflm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::F8RCRegClassID,
        // (intrinsic_w_chain:{ *:[f64] } 7349:{ *:[iPTR] }, f8rc:{ *:[f64] }:$FLM)  =>  (SETFLM:{ *:[f64] } f8rc:{ *:[f64] }:$FLM)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SETFLM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // FLM
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 14,
        GIR_Done,
      // Label 636: @19012
      GIM_Reject,
    // Label 631: @19013
    GIM_Try, /*On fail goto*//*Label 637*/ 20059,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_Try, /*On fail goto*//*Label 638*/ 19071, // Rule ID 264 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_altivec_dst,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        // MIs[0] rA
        GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/32,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_void 6869:{ *:[iPTR] }, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB, (imm:{ *:[i32] }):$STRM)  =>  (DST (imm:{ *:[i32] }):$STRM, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DST,
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // STRM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, 1, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 264,
        GIR_Done,
      // Label 638: @19071
      GIM_Try, /*On fail goto*//*Label 639*/ 19124, // Rule ID 265 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_altivec_dstt,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        // MIs[0] rA
        GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/32,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_void 6872:{ *:[iPTR] }, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB, (imm:{ *:[i32] }):$STRM)  =>  (DSTT (imm:{ *:[i32] }):$STRM, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DSTT,
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // STRM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, 1, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 265,
        GIR_Done,
      // Label 639: @19124
      GIM_Try, /*On fail goto*//*Label 640*/ 19177, // Rule ID 266 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_altivec_dstst,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        // MIs[0] rA
        GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/32,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_void 6870:{ *:[iPTR] }, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB, (imm:{ *:[i32] }):$STRM)  =>  (DSTST (imm:{ *:[i32] }):$STRM, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DSTST,
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // STRM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, 1, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 266,
        GIR_Done,
      // Label 640: @19177
      GIM_Try, /*On fail goto*//*Label 641*/ 19230, // Rule ID 267 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_altivec_dststt,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        // MIs[0] rA
        GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/32,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_void 6871:{ *:[iPTR] }, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB, (imm:{ *:[i32] }):$STRM)  =>  (DSTSTT (imm:{ *:[i32] }):$STRM, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DSTSTT,
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // STRM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, 1, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 267,
        GIR_Done,
      // Label 641: @19230
      GIM_Try, /*On fail goto*//*Label 642*/ 19283, // Rule ID 268 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_altivec_dst,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        // MIs[0] rA
        GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/64,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_void 6869:{ *:[iPTR] }, i64:{ *:[i64] }:$rA, i32:{ *:[i32] }:$rB, (imm:{ *:[i32] }):$STRM)  =>  (DST64 (imm:{ *:[i32] }):$STRM, i64:{ *:[i64] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DST64,
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // STRM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, 1, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 268,
        GIR_Done,
      // Label 642: @19283
      GIM_Try, /*On fail goto*//*Label 643*/ 19336, // Rule ID 269 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_altivec_dstt,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        // MIs[0] rA
        GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/64,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_void 6872:{ *:[iPTR] }, i64:{ *:[i64] }:$rA, i32:{ *:[i32] }:$rB, (imm:{ *:[i32] }):$STRM)  =>  (DSTT64 (imm:{ *:[i32] }):$STRM, i64:{ *:[i64] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DSTT64,
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // STRM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, 1, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 269,
        GIR_Done,
      // Label 643: @19336
      GIM_Try, /*On fail goto*//*Label 644*/ 19389, // Rule ID 270 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_altivec_dstst,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        // MIs[0] rA
        GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/64,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_void 6870:{ *:[iPTR] }, i64:{ *:[i64] }:$rA, i32:{ *:[i32] }:$rB, (imm:{ *:[i32] }):$STRM)  =>  (DSTST64 (imm:{ *:[i32] }):$STRM, i64:{ *:[i64] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DSTST64,
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // STRM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, 1, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 270,
        GIR_Done,
      // Label 644: @19389
      GIM_Try, /*On fail goto*//*Label 645*/ 19442, // Rule ID 271 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_altivec_dststt,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        // MIs[0] rA
        GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/64,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_void 6871:{ *:[iPTR] }, i64:{ *:[i64] }:$rA, i32:{ *:[i32] }:$rB, (imm:{ *:[i32] }):$STRM)  =>  (DSTSTT64 (imm:{ *:[i32] }):$STRM, i64:{ *:[i64] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DSTSTT64,
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // STRM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, 1, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 271,
        GIR_Done,
      // Label 645: @19442
      GIM_Try, /*On fail goto*//*Label 646*/ 19486, // Rule ID 374 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsumsws,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v4i32] } 7151:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSUMSWS:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUMSWS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 374,
        GIR_Done,
      // Label 646: @19486
      GIM_Try, /*On fail goto*//*Label 647*/ 19530, // Rule ID 375 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsum2sws,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v4i32] } 7147:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSUM2SWS:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUM2SWS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 375,
        GIR_Done,
      // Label 647: @19530
      GIM_Try, /*On fail goto*//*Label 648*/ 19574, // Rule ID 376 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsum4sbs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v4i32] } 7148:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSUM4SBS:{ *:[v4i32] } v16i8:{ *:[v16i8] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUM4SBS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 376,
        GIR_Done,
      // Label 648: @19574
      GIM_Try, /*On fail goto*//*Label 649*/ 19618, // Rule ID 377 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsum4shs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v4i32] } 7149:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSUM4SHS:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUM4SHS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 377,
        GIR_Done,
      // Label 649: @19618
      GIM_Try, /*On fail goto*//*Label 650*/ 19662, // Rule ID 378 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsum4ubs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v4i32] } 7150:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSUM4UBS:{ *:[v4i32] } v16i8:{ *:[v16i8] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUM4UBS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 378,
        GIR_Done,
      // Label 650: @19662
      GIM_Try, /*On fail goto*//*Label 651*/ 19706, // Rule ID 405 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vpkshss,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v16i8] } 7085:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VPKSHSS:{ *:[v16i8] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPKSHSS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 405,
        GIR_Done,
      // Label 651: @19706
      GIM_Try, /*On fail goto*//*Label 652*/ 19750, // Rule ID 406 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vpkshus,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v16i8] } 7086:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VPKSHUS:{ *:[v16i8] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPKSHUS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 406,
        GIR_Done,
      // Label 652: @19750
      GIM_Try, /*On fail goto*//*Label 653*/ 19794, // Rule ID 407 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vpkswss,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v8i16] } 7087:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VPKSWSS:{ *:[v8i16] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPKSWSS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 407,
        GIR_Done,
      // Label 653: @19794
      GIM_Try, /*On fail goto*//*Label 654*/ 19838, // Rule ID 408 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vpkswus,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v8i16] } 7088:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VPKSWUS:{ *:[v8i16] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPKSWUS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 408,
        GIR_Done,
      // Label 654: @19838
      GIM_Try, /*On fail goto*//*Label 655*/ 19882, // Rule ID 409 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vpkuhus,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v16i8] } 7090:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VPKUHUS:{ *:[v16i8] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPKUHUS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 409,
        GIR_Done,
      // Label 655: @19882
      GIM_Try, /*On fail goto*//*Label 656*/ 19926, // Rule ID 410 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vpkuwus,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v8i16] } 7091:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VPKUWUS:{ *:[v8i16] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPKUWUS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 410,
        GIR_Done,
      // Label 656: @19926
      GIM_Try, /*On fail goto*//*Label 657*/ 19970, // Rule ID 494 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vpksdss,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v4i32] } 7083:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VPKSDSS:{ *:[v4i32] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPKSDSS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 494,
        GIR_Done,
      // Label 657: @19970
      GIM_Try, /*On fail goto*//*Label 658*/ 20014, // Rule ID 495 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vpksdus,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v4i32] } 7084:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VPKSDUS:{ *:[v4i32] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPKSDUS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 495,
        GIR_Done,
      // Label 658: @20014
      GIM_Try, /*On fail goto*//*Label 659*/ 20058, // Rule ID 496 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vpkudus,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v4i32] } 7089:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VPKUDUS:{ *:[v4i32] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPKUDUS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 496,
        GIR_Done,
      // Label 659: @20058
      GIM_Reject,
    // Label 637: @20059
    GIM_Try, /*On fail goto*//*Label 660*/ 20322,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_Try, /*On fail goto*//*Label 661*/ 20113, // Rule ID 751 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_addex,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // MIs[0] CY
        GIM_CheckIsImm, /*MI*/0, /*Op*/4,
        // (intrinsic_w_chain:{ *:[i64] } 6852:{ *:[iPTR] }, i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB, (timm:{ *:[i32] }):$CY)  =>  (ADDEX8:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB, (timm:{ *:[i32] }):$CY)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ADDEX8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // CY
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 751,
        GIR_Done,
      // Label 661: @20113
      GIM_Try, /*On fail goto*//*Label 662*/ 20165, // Rule ID 288 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmhaddshs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v8i16] } 7038:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v8i16:{ *:[v8i16] }:$vC)  =>  (VMHADDSHS:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v8i16:{ *:[v8i16] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMHADDSHS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 288,
        GIR_Done,
      // Label 662: @20165
      GIM_Try, /*On fail goto*//*Label 663*/ 20217, // Rule ID 289 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmhraddshs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v8i16] } 7039:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v8i16:{ *:[v8i16] }:$vC)  =>  (VMHRADDSHS:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v8i16:{ *:[v8i16] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMHRADDSHS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 289,
        GIR_Done,
      // Label 663: @20217
      GIM_Try, /*On fail goto*//*Label 664*/ 20269, // Rule ID 347 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmsumshs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v4i32] } 7053:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v4i32:{ *:[v4i32] }:$vC)  =>  (VMSUMSHS:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v4i32:{ *:[v4i32] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMSUMSHS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 347,
        GIR_Done,
      // Label 664: @20269
      GIM_Try, /*On fail goto*//*Label 665*/ 20321, // Rule ID 348 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmsumuhs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v4i32] } 7057:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v4i32:{ *:[v4i32] }:$vC)  =>  (VMSUMUHS:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v4i32:{ *:[v4i32] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMSUMUHS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 348,
        GIR_Done,
      // Label 665: @20321
      GIM_Reject,
    // Label 660: @20322
    GIM_Reject,
    // Label 18: @20323
    GIM_Try, /*On fail goto*//*Label 666*/ 20462,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s1,
      GIM_SwitchType, /*MI*/0, /*Op*/1, /*[*/1, 3, /*)*//*default:*//*Label 669*/ 20425,
      /*GILLT_s32*//*Label 667*/ 20337,
      /*GILLT_s64*//*Label 668*/ 20381,
      // Label 667: @20337
      GIM_Try, /*On fail goto*//*Label 670*/ 20380, // Rule ID 1141 //
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::CRBITRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (trunc:{ *:[i1] } (xor:{ *:[i32] } i32:{ *:[i32] }:$in, -1:{ *:[i32] }))  =>  (ANDI_rec_1_EQ_BIT:{ *:[i1] } i32:{ *:[i32] }:$in)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ANDI_rec_1_EQ_BIT,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // in
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1141,
        GIR_Done,
      // Label 670: @20380
      GIM_Reject,
      // Label 668: @20381
      GIM_Try, /*On fail goto*//*Label 671*/ 20424, // Rule ID 1143 //
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::CRBITRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (trunc:{ *:[i1] } (xor:{ *:[i64] } i64:{ *:[i64] }:$in, -1:{ *:[i64] }))  =>  (ANDI_rec_1_EQ_BIT8:{ *:[i1] } i64:{ *:[i64] }:$in)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ANDI_rec_1_EQ_BIT8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // in
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1143,
        GIR_Done,
      // Label 671: @20424
      GIM_Reject,
      // Label 669: @20425
      GIM_SwitchType, /*MI*/0, /*Op*/1, /*[*/1, 3, /*)*//*default:*//*Label 674*/ 20461,
      /*GILLT_s32*//*Label 672*/ 20433,
      /*GILLT_s64*//*Label 673*/ 20447,
      // Label 672: @20433
      GIM_Try, /*On fail goto*//*Label 675*/ 20446, // Rule ID 1142 //
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::CRBITRCRegClassID,
        // (trunc:{ *:[i1] } i32:{ *:[i32] }:$in)  =>  (ANDI_rec_1_GT_BIT:{ *:[i1] } i32:{ *:[i32] }:$in)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::ANDI_rec_1_GT_BIT,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1142,
        GIR_Done,
      // Label 675: @20446
      GIM_Reject,
      // Label 673: @20447
      GIM_Try, /*On fail goto*//*Label 676*/ 20460, // Rule ID 1144 //
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::CRBITRCRegClassID,
        // (trunc:{ *:[i1] } i64:{ *:[i64] }:$in)  =>  (ANDI_rec_1_GT_BIT8:{ *:[i1] } i64:{ *:[i64] }:$in)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::ANDI_rec_1_GT_BIT8,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1144,
        GIR_Done,
      // Label 676: @20460
      GIM_Reject,
      // Label 674: @20461
      GIM_Reject,
    // Label 666: @20462
    GIM_Reject,
    // Label 19: @20463
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/0, 3, /*)*//*default:*//*Label 680*/ 20584,
    /*GILLT_s1*//*Label 677*/ 20472,
    /*GILLT_s32*//*Label 678*/ 20534,
    /*GILLT_s64*//*Label 679*/ 20559,
    // Label 677: @20472
    GIM_Try, /*On fail goto*//*Label 681*/ 20533,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::CRBITRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 682*/ 20496, // Rule ID 180 //
        // MIs[0] Operand 1
        GIM_CheckLiteralInt, /*MI*/0, /*Op*/1, 1,
        // 1:{ *:[i1] }  =>  (CRSET:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CRSET,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 180,
        GIR_Done,
      // Label 682: @20496
      GIM_Try, /*On fail goto*//*Label 683*/ 20514, // Rule ID 181 //
        // MIs[0] Operand 1
        GIM_CheckLiteralInt, /*MI*/0, /*Op*/1, 0,
        // 0:{ *:[i1] }  =>  (CRUNSET:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CRUNSET,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 181,
        GIR_Done,
      // Label 683: @20514
      GIM_Try, /*On fail goto*//*Label 684*/ 20532, // Rule ID 3517 //
        // MIs[0] Operand 1
        GIM_CheckLiteralInt, /*MI*/0, /*Op*/1, -1,
        // -1:{ *:[i1] }  =>  (CRSET:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CRSET,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 3517,
        GIR_Done,
      // Label 684: @20532
      GIM_Reject,
    // Label 681: @20533
    GIM_Reject,
    // Label 678: @20534
    GIM_Try, /*On fail goto*//*Label 685*/ 20558, // Rule ID 110 //
      GIM_CheckI64ImmPredicate, /*MI*/0, /*Predicate*/GIPFP_I64_Predicate_imm32SExt16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // MIs[0] Operand 1
      // No operand predicates
      // (imm:{ *:[i32] })<<P:Predicate_imm32SExt16>>:$imm  =>  (LI:{ *:[i32] } (imm:{ *:[i32] }):$imm)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::LI,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/0, // imm
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 110,
      GIR_Done,
    // Label 685: @20558
    GIM_Reject,
    // Label 679: @20559
    GIM_Try, /*On fail goto*//*Label 686*/ 20583, // Rule ID 632 //
      GIM_CheckI64ImmPredicate, /*MI*/0, /*Predicate*/GIPFP_I64_Predicate_imm64SExt16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      // MIs[0] Operand 1
      // No operand predicates
      // (imm:{ *:[i64] })<<P:Predicate_imm64SExt16>>:$imm  =>  (LI8:{ *:[i64] } (imm:{ *:[i64] }):$imm)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::LI8,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/0, // imm
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 632,
      GIR_Done,
    // Label 686: @20583
    GIM_Reject,
    // Label 680: @20584
    GIM_Reject,
    // Label 20: @20585
    GIM_Try, /*On fail goto*//*Label 687*/ 20606, // Rule ID 673 //
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      // (sext:{ *:[i64] } i32:{ *:[i32] }:$rS)  =>  (EXTSW_32_64:{ *:[i64] } i32:{ *:[i32] }:$rS)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EXTSW_32_64,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 673,
      GIR_Done,
    // Label 687: @20606
    GIM_Reject,
    // Label 21: @20607
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 3, /*)*//*default:*//*Label 690*/ 20701,
    /*GILLT_s32*//*Label 688*/ 20615,
    /*GILLT_s64*//*Label 689*/ 20658,
    // Label 688: @20615
    GIM_Try, /*On fail goto*//*Label 691*/ 20657, // Rule ID 129 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 1
      // No operand predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (sra:{ *:[i32] } i32:{ *:[i32] }:$rS, (imm:{ *:[i32] }):$SH)  =>  (SRAWI:{ *:[i32] }:{ *:[i32] } i32:{ *:[i32] }:$rS, (imm:{ *:[i32] }):$SH)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SRAWI,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rS
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // SH
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 129,
      GIR_Done,
    // Label 691: @20657
    GIM_Reject,
    // Label 689: @20658
    GIM_Try, /*On fail goto*//*Label 692*/ 20700, // Rule ID 674 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 1
      // No operand predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (sra:{ *:[i64] } i64:{ *:[i64] }:$rS, (imm:{ *:[i32] }):$SH)  =>  (SRADI:{ *:[i64] }:{ *:[i32] } i64:{ *:[i64] }:$rS, (imm:{ *:[i32] }):$SH)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SRADI,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rS
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // SH
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 674,
      GIR_Done,
    // Label 692: @20700
    GIM_Reject,
    // Label 690: @20701
    GIM_Reject,
    // Label 22: @20702
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/3, 8, /*)*//*default:*//*Label 698*/ 20833,
    /*GILLT_s128*//*Label 693*/ 20713,
    /*GILLT_v2s64*//*Label 694*/ 20737,
    /*GILLT_v4s32*//*Label 695*/ 20761,
    /*GILLT_v8s16*//*Label 696*/ 20785,
    /*GILLT_v16s8*//*Label 697*/ 20809,
    // Label 693: @20713
    GIM_Try, /*On fail goto*//*Label 699*/ 20736, // Rule ID 3315 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (rotl:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)  =>  (VRLQ:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VRLQ,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 3315,
      GIR_Done,
    // Label 699: @20736
    GIM_Reject,
    // Label 694: @20737
    GIM_Try, /*On fail goto*//*Label 700*/ 20760, // Rule ID 1402 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (rotl:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VRLD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VRLD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1402,
      GIR_Done,
    // Label 700: @20760
    GIM_Reject,
    // Label 695: @20761
    GIM_Try, /*On fail goto*//*Label 701*/ 20784, // Rule ID 1257 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (rotl:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VRLW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VRLW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1257,
      GIR_Done,
    // Label 701: @20784
    GIM_Reject,
    // Label 696: @20785
    GIM_Try, /*On fail goto*//*Label 702*/ 20808, // Rule ID 1256 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (rotl:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VRLH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VRLH,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1256,
      GIR_Done,
    // Label 702: @20808
    GIM_Reject,
    // Label 697: @20809
    GIM_Try, /*On fail goto*//*Label 703*/ 20832, // Rule ID 1255 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (rotl:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VRLB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VRLB,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1255,
      GIR_Done,
    // Label 703: @20832
    GIM_Reject,
    // Label 698: @20833
    GIM_Reject,
    // Label 23: @20834
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 709*/ 21075,
    /*GILLT_s32*//*Label 704*/ 20845,
    /*GILLT_s64*//*Label 705*/ 20919,
    /*GILLT_s128*//*Label 706*/ 20993,
    /*GILLT_v2s64*//*Label 707*/ 21021,
    /*GILLT_v4s32*//*Label 708*/ 21049,
    // Label 704: @20845
    GIM_Try, /*On fail goto*//*Label 710*/ 20918,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s1,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 711*/ 20874, // Rule ID 1032 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (select:{ *:[f32] } i1:{ *:[i1] }:$cond, f32:{ *:[f32] }:$T, f32:{ *:[f32] }:$F)  =>  (SELECT_VSSRC:{ *:[f32] } i1:{ *:[i1] }:$cond, f32:{ *:[f32] }:$T, f32:{ *:[f32] }:$F)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::SELECT_VSSRC,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1032,
        GIR_Done,
      // Label 711: @20874
      GIM_Try, /*On fail goto*//*Label 712*/ 20887, // Rule ID 5 //
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (select:{ *:[i32] } i1:{ *:[i1] }:$cond, i32:{ *:[i32] }:$T, i32:{ *:[i32] }:$F)  =>  (SELECT_I4:{ *:[i32] } i1:{ *:[i1] }:$cond, i32:{ *:[i32] }:$T, i32:{ *:[i32] }:$F)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::SELECT_I4,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 5,
        GIR_Done,
      // Label 712: @20887
      GIM_Try, /*On fail goto*//*Label 713*/ 20902, // Rule ID 7 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (select:{ *:[f32] } i1:{ *:[i1] }:$cond, f32:{ *:[f32] }:$T, f32:{ *:[f32] }:$F)  =>  (SELECT_F4:{ *:[f32] } i1:{ *:[i1] }:$cond, f32:{ *:[f32] }:$T, f32:{ *:[f32] }:$F)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::SELECT_F4,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 7,
        GIR_Done,
      // Label 713: @20902
      GIM_Try, /*On fail goto*//*Label 714*/ 20917, // Rule ID 600 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (select:{ *:[f32] } i1:{ *:[i1] }:$cond, f32:{ *:[f32] }:$T, f32:{ *:[f32] }:$F)  =>  (SELECT_SPE4:{ *:[f32] } i1:{ *:[i1] }:$cond, f32:{ *:[f32] }:$T, f32:{ *:[f32] }:$F)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::SELECT_SPE4,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 600,
        GIR_Done,
      // Label 714: @20917
      GIM_Reject,
    // Label 710: @20918
    GIM_Reject,
    // Label 705: @20919
    GIM_Try, /*On fail goto*//*Label 715*/ 20992,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s1,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 716*/ 20948, // Rule ID 1031 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (select:{ *:[f64] } i1:{ *:[i1] }:$cond, f64:{ *:[f64] }:$T, f64:{ *:[f64] }:$F)  =>  (SELECT_VSFRC:{ *:[f64] } i1:{ *:[i1] }:$cond, f64:{ *:[f64] }:$T, f64:{ *:[f64] }:$F)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::SELECT_VSFRC,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1031,
        GIR_Done,
      // Label 716: @20948
      GIM_Try, /*On fail goto*//*Label 717*/ 20961, // Rule ID 6 //
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (select:{ *:[i64] } i1:{ *:[i1] }:$cond, i64:{ *:[i64] }:$T, i64:{ *:[i64] }:$F)  =>  (SELECT_I8:{ *:[i64] } i1:{ *:[i1] }:$cond, i64:{ *:[i64] }:$T, i64:{ *:[i64] }:$F)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::SELECT_I8,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 6,
        GIR_Done,
      // Label 717: @20961
      GIM_Try, /*On fail goto*//*Label 718*/ 20976, // Rule ID 8 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (select:{ *:[f64] } i1:{ *:[i1] }:$cond, f64:{ *:[f64] }:$T, f64:{ *:[f64] }:$F)  =>  (SELECT_F8:{ *:[f64] } i1:{ *:[i1] }:$cond, f64:{ *:[f64] }:$T, f64:{ *:[f64] }:$F)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::SELECT_F8,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 8,
        GIR_Done,
      // Label 718: @20976
      GIM_Try, /*On fail goto*//*Label 719*/ 20991, // Rule ID 601 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
        // (select:{ *:[f64] } i1:{ *:[i1] }:$cond, f64:{ *:[f64] }:$T, f64:{ *:[f64] }:$F)  =>  (SELECT_SPE:{ *:[f64] } i1:{ *:[i1] }:$cond, f64:{ *:[f64] }:$T, f64:{ *:[f64] }:$F)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::SELECT_SPE,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 601,
        GIR_Done,
      // Label 719: @20991
      GIM_Reject,
    // Label 715: @20992
    GIM_Reject,
    // Label 706: @20993
    GIM_Try, /*On fail goto*//*Label 720*/ 21020, // Rule ID 9 //
      GIM_CheckFeatures, GIFBS_HasFPU,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s1,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (select:{ *:[f128] } i1:{ *:[i1] }:$cond, f128:{ *:[f128] }:$T, f128:{ *:[f128] }:$F)  =>  (SELECT_F16:{ *:[f128] } i1:{ *:[i1] }:$cond, f128:{ *:[f128] }:$T, f128:{ *:[f128] }:$F)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::SELECT_F16,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 9,
      GIR_Done,
    // Label 720: @21020
    GIM_Reject,
    // Label 707: @21021
    GIM_Try, /*On fail goto*//*Label 721*/ 21048, // Rule ID 1030 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s1,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (select:{ *:[v2f64] } i1:{ *:[i1] }:$cond, v2f64:{ *:[v2f64] }:$T, v2f64:{ *:[v2f64] }:$F)  =>  (SELECT_VSRC:{ *:[v2f64] } i1:{ *:[i1] }:$cond, v2f64:{ *:[v2f64] }:$T, v2f64:{ *:[v2f64] }:$F)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::SELECT_VSRC,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1030,
      GIR_Done,
    // Label 721: @21048
    GIM_Reject,
    // Label 708: @21049
    GIM_Try, /*On fail goto*//*Label 722*/ 21074, // Rule ID 10 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s1,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (select:{ *:[v4i32] } i1:{ *:[i1] }:$cond, v4i32:{ *:[v4i32] }:$T, v4i32:{ *:[v4i32] }:$F)  =>  (SELECT_VRRC:{ *:[v4i32] } i1:{ *:[i1] }:$cond, v4i32:{ *:[v4i32] }:$T, v4i32:{ *:[v4i32] }:$F)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::SELECT_VRRC,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 10,
      GIR_Done,
    // Label 722: @21074
    GIM_Reject,
    // Label 709: @21075
    GIM_Reject,
    // Label 24: @21076
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 727*/ 21179,
    /*GILLT_s32*//*Label 723*/ 21087,
    /*GILLT_s64*//*Label 724*/ 21109, 0,
    /*GILLT_v2s64*//*Label 725*/ 21131,
    /*GILLT_v4s32*//*Label 726*/ 21155,
    // Label 723: @21087
    GIM_Try, /*On fail goto*//*Label 728*/ 21108, // Rule ID 202 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (mulhu:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (MULHWU:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::MULHWU,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 202,
      GIR_Done,
    // Label 728: @21108
    GIM_Reject,
    // Label 724: @21109
    GIM_Try, /*On fail goto*//*Label 729*/ 21130, // Rule ID 666 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      // (mulhu:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)  =>  (MULHDU:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::MULHDU,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 666,
      GIR_Done,
    // Label 729: @21130
    GIM_Reject,
    // Label 725: @21131
    GIM_Try, /*On fail goto*//*Label 730*/ 21154, // Rule ID 1103 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (mulhu:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMULHUD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMULHUD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1103,
      GIR_Done,
    // Label 730: @21154
    GIM_Reject,
    // Label 726: @21155
    GIM_Try, /*On fail goto*//*Label 731*/ 21178, // Rule ID 1101 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (mulhu:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMULHUW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMULHUW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1101,
      GIR_Done,
    // Label 731: @21178
    GIM_Reject,
    // Label 727: @21179
    GIM_Reject,
    // Label 25: @21180
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 736*/ 21283,
    /*GILLT_s32*//*Label 732*/ 21191,
    /*GILLT_s64*//*Label 733*/ 21213, 0,
    /*GILLT_v2s64*//*Label 734*/ 21235,
    /*GILLT_v4s32*//*Label 735*/ 21259,
    // Label 732: @21191
    GIM_Try, /*On fail goto*//*Label 737*/ 21212, // Rule ID 201 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (mulhs:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (MULHW:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::MULHW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 201,
      GIR_Done,
    // Label 737: @21212
    GIM_Reject,
    // Label 733: @21213
    GIM_Try, /*On fail goto*//*Label 738*/ 21234, // Rule ID 665 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      // (mulhs:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)  =>  (MULHD:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::MULHD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 665,
      GIR_Done,
    // Label 738: @21234
    GIM_Reject,
    // Label 734: @21235
    GIM_Try, /*On fail goto*//*Label 739*/ 21258, // Rule ID 1102 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (mulhs:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMULHSD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMULHSD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1102,
      GIR_Done,
    // Label 739: @21258
    GIM_Reject,
    // Label 735: @21259
    GIM_Try, /*On fail goto*//*Label 740*/ 21282, // Rule ID 1100 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (mulhs:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMULHSW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMULHSW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1100,
      GIR_Done,
    // Label 740: @21282
    GIM_Reject,
    // Label 736: @21283
    GIM_Reject,
    // Label 26: @21284
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 746*/ 21514,
    /*GILLT_s32*//*Label 741*/ 21295,
    /*GILLT_s64*//*Label 742*/ 21355,
    /*GILLT_s128*//*Label 743*/ 21418,
    /*GILLT_v2s64*//*Label 744*/ 21442,
    /*GILLT_v4s32*//*Label 745*/ 21469,
    // Label 741: @21295
    GIM_Try, /*On fail goto*//*Label 747*/ 21354,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 748*/ 21320, // Rule ID 938 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (fadd:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)  =>  (XSADDSP:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSADDSP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 938,
        GIR_Done,
      // Label 748: @21320
      GIM_Try, /*On fail goto*//*Label 749*/ 21338, // Rule ID 234 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (fadd:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRB)  =>  (FADDS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FADDS,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 234,
        GIR_Done,
      // Label 749: @21338
      GIM_Try, /*On fail goto*//*Label 750*/ 21353, // Rule ID 573 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (fadd:{ *:[f32] } f32:{ *:[f32] }:$RA, f32:{ *:[f32] }:$RB)  =>  (EFSADD:{ *:[f32] } f32:{ *:[f32] }:$RA, f32:{ *:[f32] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSADD,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 573,
        GIR_Done,
      // Label 750: @21353
      GIM_Reject,
    // Label 747: @21354
    GIM_Reject,
    // Label 742: @21355
    GIM_Try, /*On fail goto*//*Label 751*/ 21417,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 752*/ 21383, // Rule ID 755 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (fadd:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)  =>  (XSADDDP:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSADDDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 755,
        GIR_Done,
      // Label 752: @21383
      GIM_Try, /*On fail goto*//*Label 753*/ 21401, // Rule ID 232 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (fadd:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRB)  =>  (FADD:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FADD,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 232,
        GIR_Done,
      // Label 753: @21401
      GIM_Try, /*On fail goto*//*Label 754*/ 21416, // Rule ID 552 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
        // (fadd:{ *:[f64] } f64:{ *:[f64] }:$RA, f64:{ *:[f64] }:$RB)  =>  (EFDADD:{ *:[f64] } f64:{ *:[f64] }:$RA, f64:{ *:[f64] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDADD,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 552,
        GIR_Done,
      // Label 754: @21416
      GIM_Reject,
    // Label 751: @21417
    GIM_Reject,
    // Label 743: @21418
    GIM_Try, /*On fail goto*//*Label 755*/ 21441, // Rule ID 973 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (fadd:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)  =>  (XSADDQP:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSADDQP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 973,
      GIR_Done,
    // Label 755: @21441
    GIM_Reject,
    // Label 744: @21442
    GIM_Try, /*On fail goto*//*Label 756*/ 21468, // Rule ID 759 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fadd:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)  =>  (XVADDDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVADDDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 759,
      GIR_Done,
    // Label 756: @21468
    GIM_Reject,
    // Label 745: @21469
    GIM_Try, /*On fail goto*//*Label 757*/ 21513,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_Try, /*On fail goto*//*Label 758*/ 21497, // Rule ID 761 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (fadd:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)  =>  (XVADDSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVADDSP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 761,
        GIR_Done,
      // Label 758: @21497
      GIM_Try, /*On fail goto*//*Label 759*/ 21512, // Rule ID 294 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (fadd:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vA, v4f32:{ *:[v4f32] }:$vB)  =>  (VADDFP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vA, v4f32:{ *:[v4f32] }:$vB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VADDFP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 294,
        GIR_Done,
      // Label 759: @21512
      GIM_Reject,
    // Label 757: @21513
    GIM_Reject,
    // Label 746: @21514
    GIM_Reject,
    // Label 27: @21515
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 765*/ 21745,
    /*GILLT_s32*//*Label 760*/ 21526,
    /*GILLT_s64*//*Label 761*/ 21586,
    /*GILLT_s128*//*Label 762*/ 21649,
    /*GILLT_v2s64*//*Label 763*/ 21673,
    /*GILLT_v4s32*//*Label 764*/ 21700,
    // Label 760: @21526
    GIM_Try, /*On fail goto*//*Label 766*/ 21585,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 767*/ 21551, // Rule ID 942 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (fsub:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)  =>  (XSSUBSP:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSSUBSP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 942,
        GIR_Done,
      // Label 767: @21551
      GIM_Try, /*On fail goto*//*Label 768*/ 21569, // Rule ID 246 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (fsub:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRB)  =>  (FSUBS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FSUBS,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 246,
        GIR_Done,
      // Label 768: @21569
      GIM_Try, /*On fail goto*//*Label 769*/ 21584, // Rule ID 591 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (fsub:{ *:[f32] } f32:{ *:[f32] }:$RA, f32:{ *:[f32] }:$RB)  =>  (EFSSUB:{ *:[f32] } f32:{ *:[f32] }:$RA, f32:{ *:[f32] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSSUB,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 591,
        GIR_Done,
      // Label 769: @21584
      GIM_Reject,
    // Label 766: @21585
    GIM_Reject,
    // Label 761: @21586
    GIM_Try, /*On fail goto*//*Label 770*/ 21648,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 771*/ 21614, // Rule ID 767 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (fsub:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)  =>  (XSSUBDP:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSSUBDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 767,
        GIR_Done,
      // Label 771: @21614
      GIM_Try, /*On fail goto*//*Label 772*/ 21632, // Rule ID 244 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (fsub:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRB)  =>  (FSUB:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FSUB,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 244,
        GIR_Done,
      // Label 772: @21632
      GIM_Try, /*On fail goto*//*Label 773*/ 21647, // Rule ID 570 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
        // (fsub:{ *:[f64] } f64:{ *:[f64] }:$RA, f64:{ *:[f64] }:$RB)  =>  (EFDSUB:{ *:[f64] } f64:{ *:[f64] }:$RA, f64:{ *:[f64] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDSUB,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 570,
        GIR_Done,
      // Label 773: @21647
      GIM_Reject,
    // Label 770: @21648
    GIM_Reject,
    // Label 762: @21649
    GIM_Try, /*On fail goto*//*Label 774*/ 21672, // Rule ID 977 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (fsub:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)  =>  (XSSUBQP:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSSUBQP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 977,
      GIR_Done,
    // Label 774: @21672
    GIM_Reject,
    // Label 763: @21673
    GIM_Try, /*On fail goto*//*Label 775*/ 21699, // Rule ID 769 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fsub:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)  =>  (XVSUBDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVSUBDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 769,
      GIR_Done,
    // Label 775: @21699
    GIM_Reject,
    // Label 764: @21700
    GIM_Try, /*On fail goto*//*Label 776*/ 21744,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_Try, /*On fail goto*//*Label 777*/ 21728, // Rule ID 771 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (fsub:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)  =>  (XVSUBSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVSUBSP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 771,
        GIR_Done,
      // Label 777: @21728
      GIM_Try, /*On fail goto*//*Label 778*/ 21743, // Rule ID 364 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (fsub:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vA, v4f32:{ *:[v4f32] }:$vB)  =>  (VSUBFP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vA, v4f32:{ *:[v4f32] }:$vB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VSUBFP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 364,
        GIR_Done,
      // Label 778: @21743
      GIM_Reject,
    // Label 776: @21744
    GIM_Reject,
    // Label 765: @21745
    GIM_Reject,
    // Label 28: @21746
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 784*/ 21958,
    /*GILLT_s32*//*Label 779*/ 21757,
    /*GILLT_s64*//*Label 780*/ 21817,
    /*GILLT_s128*//*Label 781*/ 21880,
    /*GILLT_v2s64*//*Label 782*/ 21904,
    /*GILLT_v4s32*//*Label 783*/ 21931,
    // Label 779: @21757
    GIM_Try, /*On fail goto*//*Label 785*/ 21816,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 786*/ 21782, // Rule ID 940 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (fmul:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)  =>  (XSMULSP:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSMULSP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 940,
        GIR_Done,
      // Label 786: @21782
      GIM_Try, /*On fail goto*//*Label 787*/ 21800, // Rule ID 242 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (fmul:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC)  =>  (FMULS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FMULS,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 242,
        GIR_Done,
      // Label 787: @21800
      GIM_Try, /*On fail goto*//*Label 788*/ 21815, // Rule ID 587 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (fmul:{ *:[f32] } f32:{ *:[f32] }:$RA, f32:{ *:[f32] }:$RB)  =>  (EFSMUL:{ *:[f32] } f32:{ *:[f32] }:$RA, f32:{ *:[f32] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSMUL,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 587,
        GIR_Done,
      // Label 788: @21815
      GIM_Reject,
    // Label 785: @21816
    GIM_Reject,
    // Label 780: @21817
    GIM_Try, /*On fail goto*//*Label 789*/ 21879,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 790*/ 21845, // Rule ID 757 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (fmul:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)  =>  (XSMULDP:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSMULDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 757,
        GIR_Done,
      // Label 790: @21845
      GIM_Try, /*On fail goto*//*Label 791*/ 21863, // Rule ID 240 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (fmul:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC)  =>  (FMUL:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FMUL,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 240,
        GIR_Done,
      // Label 791: @21863
      GIM_Try, /*On fail goto*//*Label 792*/ 21878, // Rule ID 566 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
        // (fmul:{ *:[f64] } f64:{ *:[f64] }:$RA, f64:{ *:[f64] }:$RB)  =>  (EFDMUL:{ *:[f64] } f64:{ *:[f64] }:$RA, f64:{ *:[f64] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDMUL,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 566,
        GIR_Done,
      // Label 792: @21878
      GIM_Reject,
    // Label 789: @21879
    GIM_Reject,
    // Label 781: @21880
    GIM_Try, /*On fail goto*//*Label 793*/ 21903, // Rule ID 975 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (fmul:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)  =>  (XSMULQP:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSMULQP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 975,
      GIR_Done,
    // Label 793: @21903
    GIM_Reject,
    // Label 782: @21904
    GIM_Try, /*On fail goto*//*Label 794*/ 21930, // Rule ID 763 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fmul:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)  =>  (XVMULDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVMULDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 763,
      GIR_Done,
    // Label 794: @21930
    GIM_Reject,
    // Label 783: @21931
    GIM_Try, /*On fail goto*//*Label 795*/ 21957, // Rule ID 765 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fmul:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)  =>  (XVMULSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVMULSP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 765,
      GIR_Done,
    // Label 795: @21957
    GIM_Reject,
    // Label 784: @21958
    GIM_Reject,
    // Label 29: @21959
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 801*/ 22568,
    /*GILLT_s32*//*Label 796*/ 21970,
    /*GILLT_s64*//*Label 797*/ 22126,
    /*GILLT_s128*//*Label 798*/ 22282,
    /*GILLT_v2s64*//*Label 799*/ 22371,
    /*GILLT_v4s32*//*Label 800*/ 22460,
    // Label 796: @21970
    GIM_Try, /*On fail goto*//*Label 802*/ 22125,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 803*/ 22029, // Rule ID 954 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fma:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB, (fneg:{ *:[f32] } f32:{ *:[f32] }:$XTi))  =>  (XSMSUBASP:{ *:[f32] } f32:{ *:[f32] }:$XTi, f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMSUBASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 954,
        GIR_Done,
      // Label 803: @22029
      GIM_Try, /*On fail goto*//*Label 804*/ 22061, // Rule ID 952 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (fma:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB, f32:{ *:[f32] }:$XTi)  =>  (XSMADDASP:{ *:[f32] } f32:{ *:[f32] }:$XTi, f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMADDASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 952,
        GIR_Done,
      // Label 804: @22061
      GIM_Try, /*On fail goto*//*Label 805*/ 22106, // Rule ID 220 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fma:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, (fneg:{ *:[f32] } f32:{ *:[f32] }:$FRB))  =>  (FMSUBS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, f32:{ *:[f32] }:$FRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FMSUBS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // FRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // FRC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // FRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 220,
        GIR_Done,
      // Label 805: @22106
      GIM_Try, /*On fail goto*//*Label 806*/ 22124, // Rule ID 216 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (fma:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, f32:{ *:[f32] }:$FRB)  =>  (FMADDS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, f32:{ *:[f32] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FMADDS,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 216,
        GIR_Done,
      // Label 806: @22124
      GIM_Reject,
    // Label 802: @22125
    GIM_Reject,
    // Label 797: @22126
    GIM_Try, /*On fail goto*//*Label 807*/ 22281,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 808*/ 22185, // Rule ID 775 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fma:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB, (fneg:{ *:[f64] } f64:{ *:[f64] }:$XTi))  =>  (XSMSUBADP:{ *:[f64] } f64:{ *:[f64] }:$XTi, f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMSUBADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 775,
        GIR_Done,
      // Label 808: @22185
      GIM_Try, /*On fail goto*//*Label 809*/ 22217, // Rule ID 773 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (fma:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB, f64:{ *:[f64] }:$XTi)  =>  (XSMADDADP:{ *:[f64] } f64:{ *:[f64] }:$XTi, f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMADDADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 773,
        GIR_Done,
      // Label 809: @22217
      GIM_Try, /*On fail goto*//*Label 810*/ 22262, // Rule ID 218 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fma:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, (fneg:{ *:[f64] } f64:{ *:[f64] }:$FRB))  =>  (FMSUB:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, f64:{ *:[f64] }:$FRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FMSUB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // FRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // FRC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // FRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 218,
        GIR_Done,
      // Label 810: @22262
      GIM_Try, /*On fail goto*//*Label 811*/ 22280, // Rule ID 214 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (fma:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, f64:{ *:[f64] }:$FRB)  =>  (FMADD:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, f64:{ *:[f64] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FMADD,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 214,
        GIR_Done,
      // Label 811: @22280
      GIM_Reject,
    // Label 807: @22281
    GIM_Reject,
    // Label 798: @22282
    GIM_Try, /*On fail goto*//*Label 812*/ 22370,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 813*/ 22341, // Rule ID 985 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s128,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fma:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB, (fneg:{ *:[f128] } f128:{ *:[f128] }:$vTi))  =>  (XSMSUBQP:{ *:[f128] } f128:{ *:[f128] }:$vTi, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMSUBQP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 985,
        GIR_Done,
      // Label 813: @22341
      GIM_Try, /*On fail goto*//*Label 814*/ 22369, // Rule ID 983 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        // (fma:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB, f128:{ *:[f128] }:$vTi)  =>  (XSMADDQP:{ *:[f128] } f128:{ *:[f128] }:$vTi, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMADDQP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 983,
        GIR_Done,
      // Label 814: @22369
      GIM_Reject,
    // Label 812: @22370
    GIM_Reject,
    // Label 799: @22371
    GIM_Try, /*On fail goto*//*Label 815*/ 22459,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 816*/ 22430, // Rule ID 785 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v2s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fma:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB, (fneg:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XTi))  =>  (XVMSUBADP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XTi, v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVMSUBADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 785,
        GIR_Done,
      // Label 816: @22430
      GIM_Try, /*On fail goto*//*Label 817*/ 22458, // Rule ID 781 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        // (fma:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB, v2f64:{ *:[v2f64] }:$XTi)  =>  (XVMADDADP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XTi, v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVMADDADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 781,
        GIR_Done,
      // Label 817: @22458
      GIM_Reject,
    // Label 815: @22459
    GIM_Reject,
    // Label 800: @22460
    GIM_Try, /*On fail goto*//*Label 818*/ 22567,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_Try, /*On fail goto*//*Label 819*/ 22519, // Rule ID 787 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fma:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB, (fneg:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XTi))  =>  (XVMSUBASP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XTi, v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVMSUBASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 787,
        GIR_Done,
      // Label 819: @22519
      GIM_Try, /*On fail goto*//*Label 820*/ 22551, // Rule ID 783 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (fma:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB, v4f32:{ *:[v4f32] }:$XTi)  =>  (XVMADDASP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XTi, v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVMADDASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 783,
        GIR_Done,
      // Label 820: @22551
      GIM_Try, /*On fail goto*//*Label 821*/ 22566, // Rule ID 286 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (fma:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vA, v4f32:{ *:[v4f32] }:$vC, v4f32:{ *:[v4f32] }:$vB)  =>  (VMADDFP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vA, v4f32:{ *:[v4f32] }:$vC, v4f32:{ *:[v4f32] }:$vB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMADDFP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 286,
        GIR_Done,
      // Label 821: @22566
      GIM_Reject,
    // Label 818: @22567
    GIM_Reject,
    // Label 801: @22568
    GIM_Reject,
    // Label 30: @22569
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 827*/ 22781,
    /*GILLT_s32*//*Label 822*/ 22580,
    /*GILLT_s64*//*Label 823*/ 22640,
    /*GILLT_s128*//*Label 824*/ 22703,
    /*GILLT_v2s64*//*Label 825*/ 22727,
    /*GILLT_v4s32*//*Label 826*/ 22754,
    // Label 822: @22580
    GIM_Try, /*On fail goto*//*Label 828*/ 22639,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 829*/ 22605, // Rule ID 944 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (fdiv:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)  =>  (XSDIVSP:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSDIVSP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 944,
        GIR_Done,
      // Label 829: @22605
      GIM_Try, /*On fail goto*//*Label 830*/ 22623, // Rule ID 238 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (fdiv:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRB)  =>  (FDIVS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FDIVS,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 238,
        GIR_Done,
      // Label 830: @22623
      GIM_Try, /*On fail goto*//*Label 831*/ 22638, // Rule ID 585 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (fdiv:{ *:[f32] } f32:{ *:[f32] }:$RA, f32:{ *:[f32] }:$RB)  =>  (EFSDIV:{ *:[f32] } f32:{ *:[f32] }:$RA, f32:{ *:[f32] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSDIV,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 585,
        GIR_Done,
      // Label 831: @22638
      GIM_Reject,
    // Label 828: @22639
    GIM_Reject,
    // Label 823: @22640
    GIM_Try, /*On fail goto*//*Label 832*/ 22702,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 833*/ 22668, // Rule ID 796 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (fdiv:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)  =>  (XSDIVDP:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSDIVDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 796,
        GIR_Done,
      // Label 833: @22668
      GIM_Try, /*On fail goto*//*Label 834*/ 22686, // Rule ID 236 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (fdiv:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRB)  =>  (FDIV:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FDIV,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 236,
        GIR_Done,
      // Label 834: @22686
      GIM_Try, /*On fail goto*//*Label 835*/ 22701, // Rule ID 564 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
        // (fdiv:{ *:[f64] } f64:{ *:[f64] }:$RA, f64:{ *:[f64] }:$RB)  =>  (EFDDIV:{ *:[f64] } f64:{ *:[f64] }:$RA, f64:{ *:[f64] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDDIV,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 564,
        GIR_Done,
      // Label 835: @22701
      GIM_Reject,
    // Label 832: @22702
    GIM_Reject,
    // Label 824: @22703
    GIM_Try, /*On fail goto*//*Label 836*/ 22726, // Rule ID 979 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (fdiv:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)  =>  (XSDIVQP:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSDIVQP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 979,
      GIR_Done,
    // Label 836: @22726
    GIM_Reject,
    // Label 825: @22727
    GIM_Try, /*On fail goto*//*Label 837*/ 22753, // Rule ID 805 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fdiv:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)  =>  (XVDIVDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVDIVDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 805,
      GIR_Done,
    // Label 837: @22753
    GIM_Reject,
    // Label 826: @22754
    GIM_Try, /*On fail goto*//*Label 838*/ 22780, // Rule ID 807 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fdiv:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)  =>  (XVDIVSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVDIVSP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 807,
      GIR_Done,
    // Label 838: @22780
    GIM_Reject,
    // Label 827: @22781
    GIM_Reject,
    // Label 31: @22782
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 844*/ 25059,
    /*GILLT_s32*//*Label 839*/ 22793,
    /*GILLT_s64*//*Label 840*/ 23418,
    /*GILLT_s128*//*Label 841*/ 24061,
    /*GILLT_v2s64*//*Label 842*/ 24464,
    /*GILLT_v4s32*//*Label 843*/ 24745,
    // Label 839: @22793
    GIM_Try, /*On fail goto*//*Label 845*/ 23417,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 846*/ 22865, // Rule ID 958 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[f32] } (fma:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB, (fneg:{ *:[f32] } f32:{ *:[f32] }:$XTi)))  =>  (XSNMSUBASP:{ *:[f32] } f32:{ *:[f32] }:$XTi, f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMSUBASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 958,
        GIR_Done,
      // Label 846: @22865
      GIM_Try, /*On fail goto*//*Label 847*/ 22931, // Rule ID 957 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[f32] } (strict_fma:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB, (fneg:{ *:[f32] } f32:{ *:[f32] }:$XTi)))  =>  (XSNMSUBASP:{ *:[f32] } f32:{ *:[f32] }:$XTi, f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMSUBASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 957,
        GIR_Done,
      // Label 847: @22931
      GIM_Try, /*On fail goto*//*Label 848*/ 22984, // Rule ID 956 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f32] } (fma:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB, f32:{ *:[f32] }:$XTi))  =>  (XSNMADDASP:{ *:[f32] } f32:{ *:[f32] }:$XTi, f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMADDASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 956,
        GIR_Done,
      // Label 848: @22984
      GIM_Try, /*On fail goto*//*Label 849*/ 23037, // Rule ID 955 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f32] } (strict_fma:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB, f32:{ *:[f32] }:$XTi))  =>  (XSNMADDASP:{ *:[f32] } f32:{ *:[f32] }:$XTi, f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMADDASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 955,
        GIR_Done,
      // Label 849: @23037
      GIM_Try, /*On fail goto*//*Label 850*/ 23074, // Rule ID 830 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FABS,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f32] } (fabs:{ *:[f32] } f32:{ *:[f32] }:$XB))  =>  (XSNABSDPs:{ *:[f32] } f32:{ *:[f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNABSDPs,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 830,
        GIR_Done,
      // Label 850: @23074
      GIM_Try, /*On fail goto*//*Label 851*/ 23140, // Rule ID 228 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[f32] } (fma:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, (fneg:{ *:[f32] } f32:{ *:[f32] }:$FRB)))  =>  (FNMSUBS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, f32:{ *:[f32] }:$FRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FNMSUBS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // FRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // FRC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // FRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 228,
        GIR_Done,
      // Label 851: @23140
      GIM_Try, /*On fail goto*//*Label 852*/ 23206, // Rule ID 227 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[f32] } (strict_fma:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, (fneg:{ *:[f32] } f32:{ *:[f32] }:$FRB)))  =>  (FNMSUBS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, f32:{ *:[f32] }:$FRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FNMSUBS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // FRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // FRC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // FRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 227,
        GIR_Done,
      // Label 852: @23206
      GIM_Try, /*On fail goto*//*Label 853*/ 23259, // Rule ID 224 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f32] } (fma:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, f32:{ *:[f32] }:$FRB))  =>  (FNMADDS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, f32:{ *:[f32] }:$FRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FNMADDS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // FRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // FRC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // FRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 224,
        GIR_Done,
      // Label 853: @23259
      GIM_Try, /*On fail goto*//*Label 854*/ 23312, // Rule ID 223 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f32] } (strict_fma:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, f32:{ *:[f32] }:$FRB))  =>  (FNMADDS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, f32:{ *:[f32] }:$FRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FNMADDS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // FRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // FRC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // FRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 223,
        GIR_Done,
      // Label 854: @23312
      GIM_Try, /*On fail goto*//*Label 855*/ 23349, // Rule ID 162 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FABS,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f32] } (fabs:{ *:[f32] } f32:{ *:[f32] }:$frB))  =>  (FNABSS:{ *:[f32] } f32:{ *:[f32] }:$frB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FNABSS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // frD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // frB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 162,
        GIR_Done,
      // Label 855: @23349
      GIM_Try, /*On fail goto*//*Label 856*/ 23386, // Rule ID 588 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FABS,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f32] } (fabs:{ *:[f32] } f32:{ *:[f32] }:$RA))  =>  (EFSNABS:{ *:[f32] } f32:{ *:[f32] }:$RA)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::EFSNABS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // RT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // RA
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 588,
        GIR_Done,
      // Label 856: @23386
      GIM_Try, /*On fail goto*//*Label 857*/ 23401, // Rule ID 164 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (fneg:{ *:[f32] } f32:{ *:[f32] }:$frB)  =>  (FNEGS:{ *:[f32] } f32:{ *:[f32] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FNEGS,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 164,
        GIR_Done,
      // Label 857: @23401
      GIM_Try, /*On fail goto*//*Label 858*/ 23416, // Rule ID 589 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (fneg:{ *:[f32] } f32:{ *:[f32] }:$RA)  =>  (EFSNEG:{ *:[f32] } f32:{ *:[f32] }:$RA)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSNEG,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 589,
        GIR_Done,
      // Label 858: @23416
      GIM_Reject,
    // Label 845: @23417
    GIM_Reject,
    // Label 840: @23418
    GIM_Try, /*On fail goto*//*Label 859*/ 24060,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 860*/ 23490, // Rule ID 779 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s64,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[f64] } (fma:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB, (fneg:{ *:[f64] } f64:{ *:[f64] }:$XTi)))  =>  (XSNMSUBADP:{ *:[f64] } f64:{ *:[f64] }:$XTi, f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMSUBADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 779,
        GIR_Done,
      // Label 860: @23490
      GIM_Try, /*On fail goto*//*Label 861*/ 23556, // Rule ID 778 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s64,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[f64] } (strict_fma:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB, (fneg:{ *:[f64] } f64:{ *:[f64] }:$XTi)))  =>  (XSNMSUBADP:{ *:[f64] } f64:{ *:[f64] }:$XTi, f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMSUBADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 778,
        GIR_Done,
      // Label 861: @23556
      GIM_Try, /*On fail goto*//*Label 862*/ 23609, // Rule ID 777 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f64] } (fma:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB, f64:{ *:[f64] }:$XTi))  =>  (XSNMADDADP:{ *:[f64] } f64:{ *:[f64] }:$XTi, f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMADDADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 777,
        GIR_Done,
      // Label 862: @23609
      GIM_Try, /*On fail goto*//*Label 863*/ 23662, // Rule ID 776 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f64] } (strict_fma:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB, f64:{ *:[f64] }:$XTi))  =>  (XSNMADDADP:{ *:[f64] } f64:{ *:[f64] }:$XTi, f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMADDADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 776,
        GIR_Done,
      // Label 863: @23662
      GIM_Try, /*On fail goto*//*Label 864*/ 23699, // Rule ID 829 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FABS,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f64] } (fabs:{ *:[f64] } f64:{ *:[f64] }:$XB))  =>  (XSNABSDP:{ *:[f64] } f64:{ *:[f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNABSDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 829,
        GIR_Done,
      // Label 864: @23699
      GIM_Try, /*On fail goto*//*Label 865*/ 23717, // Rule ID 831 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (fneg:{ *:[f64] } f64:{ *:[f64] }:$XB)  =>  (XSNEGDP:{ *:[f64] } f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSNEGDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 831,
        GIR_Done,
      // Label 865: @23717
      GIM_Try, /*On fail goto*//*Label 866*/ 23783, // Rule ID 226 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s64,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[f64] } (fma:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, (fneg:{ *:[f64] } f64:{ *:[f64] }:$FRB)))  =>  (FNMSUB:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, f64:{ *:[f64] }:$FRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FNMSUB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // FRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // FRC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // FRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 226,
        GIR_Done,
      // Label 866: @23783
      GIM_Try, /*On fail goto*//*Label 867*/ 23849, // Rule ID 225 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s64,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[f64] } (strict_fma:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, (fneg:{ *:[f64] } f64:{ *:[f64] }:$FRB)))  =>  (FNMSUB:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, f64:{ *:[f64] }:$FRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FNMSUB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // FRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // FRC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // FRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 225,
        GIR_Done,
      // Label 867: @23849
      GIM_Try, /*On fail goto*//*Label 868*/ 23902, // Rule ID 222 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f64] } (fma:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, f64:{ *:[f64] }:$FRB))  =>  (FNMADD:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, f64:{ *:[f64] }:$FRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FNMADD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // FRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // FRC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // FRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 222,
        GIR_Done,
      // Label 868: @23902
      GIM_Try, /*On fail goto*//*Label 869*/ 23955, // Rule ID 221 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f64] } (strict_fma:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, f64:{ *:[f64] }:$FRB))  =>  (FNMADD:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, f64:{ *:[f64] }:$FRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FNMADD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // FRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // FRC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // FRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 221,
        GIR_Done,
      // Label 869: @23955
      GIM_Try, /*On fail goto*//*Label 870*/ 23992, // Rule ID 163 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FABS,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f64] } (fabs:{ *:[f64] } f64:{ *:[f64] }:$frB))  =>  (FNABSD:{ *:[f64] } f64:{ *:[f64] }:$frB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FNABSD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // frD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // frB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 163,
        GIR_Done,
      // Label 870: @23992
      GIM_Try, /*On fail goto*//*Label 871*/ 24029, // Rule ID 567 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FABS,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f64] } (fabs:{ *:[f64] } f64:{ *:[f64] }:$RA))  =>  (EFDNABS:{ *:[f64] } f64:{ *:[f64] }:$RA)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::EFDNABS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // RT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // RA
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 567,
        GIR_Done,
      // Label 871: @24029
      GIM_Try, /*On fail goto*//*Label 872*/ 24044, // Rule ID 165 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (fneg:{ *:[f64] } f64:{ *:[f64] }:$frB)  =>  (FNEGD:{ *:[f64] } f64:{ *:[f64] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FNEGD,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 165,
        GIR_Done,
      // Label 872: @24044
      GIM_Try, /*On fail goto*//*Label 873*/ 24059, // Rule ID 568 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
        // (fneg:{ *:[f64] } f64:{ *:[f64] }:$RA)  =>  (EFDNEG:{ *:[f64] } f64:{ *:[f64] }:$RA)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDNEG,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 568,
        GIR_Done,
      // Label 873: @24059
      GIM_Reject,
    // Label 859: @24060
    GIM_Reject,
    // Label 841: @24061
    GIM_Try, /*On fail goto*//*Label 874*/ 24463,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 875*/ 24140, // Rule ID 998 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_INTRINSIC,
        GIM_CheckNumOperands, /*MI*/1, /*Expected*/5,
        GIM_CheckIntrinsicID, /*MI*/1, /*Op*/1, Intrinsic::ppc_fmaf128_round_to_odd,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/1, /*Op*/4, /*Type*/GILLT_s128,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/4, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s128,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[f128] } (intrinsic_wo_chain:{ *:[f128] } 7223:{ *:[iPTR] }, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB, (fneg:{ *:[f128] } f128:{ *:[f128] }:$vTi)))  =>  (XSNMSUBQPO:{ *:[f128] } f128:{ *:[f128] }:$vTi, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMSUBQPO,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // vTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 998,
        GIR_Done,
      // Label 875: @24140
      GIM_Try, /*On fail goto*//*Label 876*/ 24196, // Rule ID 997 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_INTRINSIC,
        GIM_CheckNumOperands, /*MI*/1, /*Expected*/5,
        GIM_CheckIntrinsicID, /*MI*/1, /*Op*/1, Intrinsic::ppc_fmaf128_round_to_odd,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/1, /*Op*/4, /*Type*/GILLT_s128,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f128] } (intrinsic_wo_chain:{ *:[f128] } 7223:{ *:[iPTR] }, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB, f128:{ *:[f128] }:$vTi))  =>  (XSNMADDQPO:{ *:[f128] } f128:{ *:[f128] }:$vTi, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMADDQPO,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/4, // vTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 997,
        GIR_Done,
      // Label 876: @24196
      GIM_Try, /*On fail goto*//*Label 877*/ 24258, // Rule ID 989 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s128,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s128,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[f128] } (fma:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB, (fneg:{ *:[f128] } f128:{ *:[f128] }:$vTi)))  =>  (XSNMSUBQP:{ *:[f128] } f128:{ *:[f128] }:$vTi, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMSUBQP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // vTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 989,
        GIR_Done,
      // Label 877: @24258
      GIM_Try, /*On fail goto*//*Label 878*/ 24320, // Rule ID 988 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s128,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s128,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[f128] } (strict_fma:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB, (fneg:{ *:[f128] } f128:{ *:[f128] }:$vTi)))  =>  (XSNMSUBQP:{ *:[f128] } f128:{ *:[f128] }:$vTi, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMSUBQP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // vTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 988,
        GIR_Done,
      // Label 878: @24320
      GIM_Try, /*On fail goto*//*Label 879*/ 24369, // Rule ID 987 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f128] } (fma:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB, f128:{ *:[f128] }:$vTi))  =>  (XSNMADDQP:{ *:[f128] } f128:{ *:[f128] }:$vTi, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMADDQP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // vTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 987,
        GIR_Done,
      // Label 879: @24369
      GIM_Try, /*On fail goto*//*Label 880*/ 24418, // Rule ID 986 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f128] } (strict_fma:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB, f128:{ *:[f128] }:$vTi))  =>  (XSNMADDQP:{ *:[f128] } f128:{ *:[f128] }:$vTi, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMADDQP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // vTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 986,
        GIR_Done,
      // Label 880: @24418
      GIM_Try, /*On fail goto*//*Label 881*/ 24451, // Rule ID 970 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FABS,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s128,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f128] } (fabs:{ *:[f128] } f128:{ *:[f128] }:$vB))  =>  (XSNABSQP:{ *:[f128] } f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNABSQP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 970,
        GIR_Done,
      // Label 881: @24451
      GIM_Try, /*On fail goto*//*Label 882*/ 24462, // Rule ID 971 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        // (fneg:{ *:[f128] } f128:{ *:[f128] }:$vB)  =>  (XSNEGQP:{ *:[f128] } f128:{ *:[f128] }:$vB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSNEGQP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 971,
        GIR_Done,
      // Label 882: @24462
      GIM_Reject,
    // Label 874: @24463
    GIM_Reject,
    // Label 842: @24464
    GIM_Try, /*On fail goto*//*Label 883*/ 24744,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 884*/ 24536, // Rule ID 792 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_v2s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[v2f64] } (fma:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB, (fneg:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XTi)))  =>  (XVNMSUBADP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XTi, v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVNMSUBADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 792,
        GIR_Done,
      // Label 884: @24536
      GIM_Try, /*On fail goto*//*Label 885*/ 24598, // Rule ID 791 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_v2s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[v2f64] } (strict_fma:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB, (fneg:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XTi)))  =>  (XVNMSUBADP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XTi, v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVNMSUBADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 791,
        GIR_Done,
      // Label 885: @24598
      GIM_Try, /*On fail goto*//*Label 886*/ 24647, // Rule ID 789 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[v2f64] } (fma:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB, v2f64:{ *:[v2f64] }:$XTi))  =>  (XVNMADDADP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XTi, v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVNMADDADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 789,
        GIR_Done,
      // Label 886: @24647
      GIM_Try, /*On fail goto*//*Label 887*/ 24696, // Rule ID 788 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[v2f64] } (strict_fma:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB, v2f64:{ *:[v2f64] }:$XTi))  =>  (XVNMADDADP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XTi, v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVNMADDADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 788,
        GIR_Done,
      // Label 887: @24696
      GIM_Try, /*On fail goto*//*Label 888*/ 24729, // Rule ID 837 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FABS,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v2s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[v2f64] } (fabs:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB))  =>  (XVNABSDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVNABSDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 837,
        GIR_Done,
      // Label 888: @24729
      GIM_Try, /*On fail goto*//*Label 889*/ 24743, // Rule ID 839 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        // (fneg:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)  =>  (XVNEGDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVNEGDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 839,
        GIR_Done,
      // Label 889: @24743
      GIM_Reject,
    // Label 883: @24744
    GIM_Reject,
    // Label 843: @24745
    GIM_Try, /*On fail goto*//*Label 890*/ 25058,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_Try, /*On fail goto*//*Label 891*/ 24817, // Rule ID 794 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[v4f32] } (fma:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB, (fneg:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XTi)))  =>  (XVNMSUBASP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XTi, v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVNMSUBASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 794,
        GIR_Done,
      // Label 891: @24817
      GIM_Try, /*On fail goto*//*Label 892*/ 24883, // Rule ID 793 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[v4f32] } (strict_fma:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB, (fneg:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XTi)))  =>  (XVNMSUBASP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XTi, v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVNMSUBASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 793,
        GIR_Done,
      // Label 892: @24883
      GIM_Try, /*On fail goto*//*Label 893*/ 24936, // Rule ID 790 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[v4f32] } (fma:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB, v4f32:{ *:[v4f32] }:$XTi))  =>  (XVNMADDASP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XTi, v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVNMADDASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 790,
        GIR_Done,
      // Label 893: @24936
      GIM_Try, /*On fail goto*//*Label 894*/ 24973, // Rule ID 838 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FABS,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[v4f32] } (fabs:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB))  =>  (XVNABSSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVNABSSP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 838,
        GIR_Done,
      // Label 894: @24973
      GIM_Try, /*On fail goto*//*Label 895*/ 24991, // Rule ID 840 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (fneg:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)  =>  (XVNEGSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVNEGSP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 840,
        GIR_Done,
      // Label 895: @24991
      GIM_Try, /*On fail goto*//*Label 896*/ 25057, // Rule ID 287 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[v4f32] } (fma:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vA, v4f32:{ *:[v4f32] }:$vC, (fneg:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vB)))  =>  (VNMSUBFP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vA, v4f32:{ *:[v4f32] }:$vC, v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VNMSUBFP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // vC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 287,
        GIR_Done,
      // Label 896: @25057
      GIM_Reject,
    // Label 890: @25058
    GIM_Reject,
    // Label 844: @25059
    GIM_Reject,
    // Label 32: @25060
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/2, 4, /*)*//*default:*//*Label 899*/ 25108,
    /*GILLT_s64*//*Label 897*/ 25068,
    /*GILLT_s128*//*Label 898*/ 25088,
    // Label 897: @25068
    GIM_Try, /*On fail goto*//*Label 900*/ 25087, // Rule ID 554 //
      GIM_CheckFeatures, GIFBS_HasSPE,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
      // (fpextend:{ *:[f64] } f32:{ *:[f32] }:$RB)  =>  (EFDCFS:{ *:[f64] } f32:{ *:[f32] }:$RB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDCFS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 554,
      GIR_Done,
    // Label 900: @25087
    GIM_Reject,
    // Label 898: @25088
    GIM_Try, /*On fail goto*//*Label 901*/ 25107, // Rule ID 1000 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (fpextend:{ *:[f128] } f64:{ *:[f64] }:$vB)  =>  (XSCVDPQP:{ *:[f128] } f64:{ *:[f64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSCVDPQP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1000,
      GIR_Done,
    // Label 901: @25107
    GIM_Reject,
    // Label 899: @25108
    GIM_Reject,
    // Label 33: @25109
    GIM_Try, /*On fail goto*//*Label 902*/ 25168,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 903*/ 25134, // Rule ID 947 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (fpround:{ *:[f32] } f64:{ *:[f64] }:$XB)  =>  (XSRSP:{ *:[f32] } f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSRSP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 947,
        GIR_Done,
      // Label 903: @25134
      GIM_Try, /*On fail goto*//*Label 904*/ 25152, // Rule ID 155 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (fpround:{ *:[f32] } f64:{ *:[f64] }:$frB)  =>  (FRSP:{ *:[f32] } f64:{ *:[f64] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FRSP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 155,
        GIR_Done,
      // Label 904: @25152
      GIM_Try, /*On fail goto*//*Label 905*/ 25167, // Rule ID 575 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (fpround:{ *:[f32] } f64:{ *:[f64] }:$RB)  =>  (EFSCFD:{ *:[f32] } f64:{ *:[f64] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSCFD,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 575,
        GIR_Done,
      // Label 905: @25167
      GIM_Reject,
    // Label 902: @25168
    GIM_Reject,
    // Label 34: @25169
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 909*/ 25265,
    /*GILLT_s32*//*Label 906*/ 25180, 0, 0,
    /*GILLT_v2s64*//*Label 907*/ 25219,
    /*GILLT_v4s32*//*Label 908*/ 25242,
    // Label 906: @25180
    GIM_Try, /*On fail goto*//*Label 910*/ 25199, // Rule ID 560 //
      GIM_CheckFeatures, GIFBS_HasSPE,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (fp_to_sint:{ *:[i32] } f64:{ *:[f64] }:$RB)  =>  (EFDCTSIZ:{ *:[i32] } f64:{ *:[f64] }:$RB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDCTSIZ,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 560,
      GIR_Done,
    // Label 910: @25199
    GIM_Try, /*On fail goto*//*Label 911*/ 25218, // Rule ID 581 //
      GIM_CheckFeatures, GIFBS_HasSPE,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (fp_to_sint:{ *:[i32] } f32:{ *:[f32] }:$RB)  =>  (EFSCTSIZ:{ *:[i32] } f32:{ *:[f32] }:$RB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSCTSIZ,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 581,
      GIR_Done,
    // Label 911: @25218
    GIM_Reject,
    // Label 907: @25219
    GIM_Try, /*On fail goto*//*Label 912*/ 25241, // Rule ID 863 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fp_to_sint:{ *:[v2i64] } v2f64:{ *:[v2f64] }:$XB)  =>  (XVCVDPSXDS:{ *:[v2i64] } v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVCVDPSXDS,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 863,
      GIR_Done,
    // Label 912: @25241
    GIM_Reject,
    // Label 908: @25242
    GIM_Try, /*On fail goto*//*Label 913*/ 25264, // Rule ID 871 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fp_to_sint:{ *:[v4i32] } v4f32:{ *:[v4f32] }:$XB)  =>  (XVCVSPSXWS:{ *:[v4i32] } v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVCVSPSXWS,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 871,
      GIR_Done,
    // Label 913: @25264
    GIM_Reject,
    // Label 909: @25265
    GIM_Reject,
    // Label 35: @25266
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 917*/ 25362,
    /*GILLT_s32*//*Label 914*/ 25277, 0, 0,
    /*GILLT_v2s64*//*Label 915*/ 25316,
    /*GILLT_v4s32*//*Label 916*/ 25339,
    // Label 914: @25277
    GIM_Try, /*On fail goto*//*Label 918*/ 25296, // Rule ID 562 //
      GIM_CheckFeatures, GIFBS_HasSPE,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (fp_to_uint:{ *:[i32] } f64:{ *:[f64] }:$RB)  =>  (EFDCTUIZ:{ *:[i32] } f64:{ *:[f64] }:$RB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDCTUIZ,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 562,
      GIR_Done,
    // Label 918: @25296
    GIM_Try, /*On fail goto*//*Label 919*/ 25315, // Rule ID 583 //
      GIM_CheckFeatures, GIFBS_HasSPE,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (fp_to_uint:{ *:[i32] } f32:{ *:[f32] }:$RB)  =>  (EFSCTUIZ:{ *:[i32] } f32:{ *:[f32] }:$RB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSCTUIZ,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 583,
      GIR_Done,
    // Label 919: @25315
    GIM_Reject,
    // Label 915: @25316
    GIM_Try, /*On fail goto*//*Label 920*/ 25338, // Rule ID 866 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fp_to_uint:{ *:[v2i64] } v2f64:{ *:[v2f64] }:$XB)  =>  (XVCVDPUXDS:{ *:[v2i64] } v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVCVDPUXDS,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 866,
      GIR_Done,
    // Label 920: @25338
    GIM_Reject,
    // Label 916: @25339
    GIM_Try, /*On fail goto*//*Label 921*/ 25361, // Rule ID 874 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fp_to_uint:{ *:[v4i32] } v4f32:{ *:[v4f32] }:$XB)  =>  (XVCVSPUXWS:{ *:[v4i32] } v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVCVSPUXWS,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 874,
      GIR_Done,
    // Label 921: @25361
    GIM_Reject,
    // Label 917: @25362
    GIM_Reject,
    // Label 36: @25363
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 926*/ 25460,
    /*GILLT_s32*//*Label 922*/ 25374,
    /*GILLT_s64*//*Label 923*/ 25394, 0,
    /*GILLT_v2s64*//*Label 924*/ 25414,
    /*GILLT_v4s32*//*Label 925*/ 25437,
    // Label 922: @25374
    GIM_Try, /*On fail goto*//*Label 927*/ 25393, // Rule ID 577 //
      GIM_CheckFeatures, GIFBS_HasSPE,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (sint_to_fp:{ *:[f32] } i32:{ *:[i32] }:$RB)  =>  (EFSCFSI:{ *:[f32] } i32:{ *:[i32] }:$RB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSCFSI,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 577,
      GIR_Done,
    // Label 927: @25393
    GIM_Reject,
    // Label 923: @25394
    GIM_Try, /*On fail goto*//*Label 928*/ 25413, // Rule ID 556 //
      GIM_CheckFeatures, GIFBS_HasSPE,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
      // (sint_to_fp:{ *:[f64] } i32:{ *:[i32] }:$RB)  =>  (EFDCFSI:{ *:[f64] } i32:{ *:[i32] }:$RB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDCFSI,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 556,
      GIR_Done,
    // Label 928: @25413
    GIM_Reject,
    // Label 924: @25414
    GIM_Try, /*On fail goto*//*Label 929*/ 25436, // Rule ID 876 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (sint_to_fp:{ *:[v2f64] } v2i64:{ *:[v2i64] }:$XB)  =>  (XVCVSXDDP:{ *:[v2f64] } v2i64:{ *:[v2i64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVCVSXDDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 876,
      GIR_Done,
    // Label 929: @25436
    GIM_Reject,
    // Label 925: @25437
    GIM_Try, /*On fail goto*//*Label 930*/ 25459, // Rule ID 879 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (sint_to_fp:{ *:[v4f32] } v4i32:{ *:[v4i32] }:$XB)  =>  (XVCVSXWSP:{ *:[v4f32] } v4i32:{ *:[v4i32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVCVSXWSP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 879,
      GIR_Done,
    // Label 930: @25459
    GIM_Reject,
    // Label 926: @25460
    GIM_Reject,
    // Label 37: @25461
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 935*/ 25558,
    /*GILLT_s32*//*Label 931*/ 25472,
    /*GILLT_s64*//*Label 932*/ 25492, 0,
    /*GILLT_v2s64*//*Label 933*/ 25512,
    /*GILLT_v4s32*//*Label 934*/ 25535,
    // Label 931: @25472
    GIM_Try, /*On fail goto*//*Label 936*/ 25491, // Rule ID 579 //
      GIM_CheckFeatures, GIFBS_HasSPE,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (uint_to_fp:{ *:[f32] } i32:{ *:[i32] }:$RB)  =>  (EFSCFUI:{ *:[f32] } i32:{ *:[i32] }:$RB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSCFUI,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 579,
      GIR_Done,
    // Label 936: @25491
    GIM_Reject,
    // Label 932: @25492
    GIM_Try, /*On fail goto*//*Label 937*/ 25511, // Rule ID 558 //
      GIM_CheckFeatures, GIFBS_HasSPE,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
      // (uint_to_fp:{ *:[f64] } i32:{ *:[i32] }:$RB)  =>  (EFDCFUI:{ *:[f64] } i32:{ *:[i32] }:$RB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDCFUI,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 558,
      GIR_Done,
    // Label 937: @25511
    GIM_Reject,
    // Label 933: @25512
    GIM_Try, /*On fail goto*//*Label 938*/ 25534, // Rule ID 881 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (uint_to_fp:{ *:[v2f64] } v2i64:{ *:[v2i64] }:$XB)  =>  (XVCVUXDDP:{ *:[v2f64] } v2i64:{ *:[v2i64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVCVUXDDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 881,
      GIR_Done,
    // Label 938: @25534
    GIM_Reject,
    // Label 934: @25535
    GIM_Try, /*On fail goto*//*Label 939*/ 25557, // Rule ID 884 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (uint_to_fp:{ *:[v4f32] } v4i32:{ *:[v4i32] }:$XB)  =>  (XVCVUXWSP:{ *:[v4f32] } v4i32:{ *:[v4i32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVCVUXWSP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 884,
      GIR_Done,
    // Label 939: @25557
    GIM_Reject,
    // Label 935: @25558
    GIM_Reject,
    // Label 38: @25559
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 945*/ 25730,
    /*GILLT_s32*//*Label 940*/ 25570,
    /*GILLT_s64*//*Label 941*/ 25608,
    /*GILLT_s128*//*Label 942*/ 25664,
    /*GILLT_v2s64*//*Label 943*/ 25684,
    /*GILLT_v4s32*//*Label 944*/ 25707,
    // Label 940: @25570
    GIM_Try, /*On fail goto*//*Label 946*/ 25607,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 947*/ 25591, // Rule ID 160 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (fabs:{ *:[f32] } f32:{ *:[f32] }:$frB)  =>  (FABSS:{ *:[f32] } f32:{ *:[f32] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FABSS,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 160,
        GIR_Done,
      // Label 947: @25591
      GIM_Try, /*On fail goto*//*Label 948*/ 25606, // Rule ID 571 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (fabs:{ *:[f32] } f32:{ *:[f32] }:$RA)  =>  (EFSABS:{ *:[f32] } f32:{ *:[f32] }:$RA)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSABS,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 571,
        GIR_Done,
      // Label 948: @25606
      GIM_Reject,
    // Label 946: @25607
    GIM_Reject,
    // Label 941: @25608
    GIM_Try, /*On fail goto*//*Label 949*/ 25663,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 950*/ 25632, // Rule ID 828 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (fabs:{ *:[f64] } f64:{ *:[f64] }:$XB)  =>  (XSABSDP:{ *:[f64] } f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSABSDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 828,
        GIR_Done,
      // Label 950: @25632
      GIM_Try, /*On fail goto*//*Label 951*/ 25647, // Rule ID 161 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (fabs:{ *:[f64] } f64:{ *:[f64] }:$frB)  =>  (FABSD:{ *:[f64] } f64:{ *:[f64] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FABSD,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 161,
        GIR_Done,
      // Label 951: @25647
      GIM_Try, /*On fail goto*//*Label 952*/ 25662, // Rule ID 550 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
        // (fabs:{ *:[f64] } f64:{ *:[f64] }:$RA)  =>  (EFDABS:{ *:[f64] } f64:{ *:[f64] }:$RA)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDABS,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 550,
        GIR_Done,
      // Label 952: @25662
      GIM_Reject,
    // Label 949: @25663
    GIM_Reject,
    // Label 942: @25664
    GIM_Try, /*On fail goto*//*Label 953*/ 25683, // Rule ID 969 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (fabs:{ *:[f128] } f128:{ *:[f128] }:$vB)  =>  (XSABSQP:{ *:[f128] } f128:{ *:[f128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSABSQP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 969,
      GIR_Done,
    // Label 953: @25683
    GIM_Reject,
    // Label 943: @25684
    GIM_Try, /*On fail goto*//*Label 954*/ 25706, // Rule ID 833 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fabs:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)  =>  (XVABSDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVABSDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 833,
      GIR_Done,
    // Label 954: @25706
    GIM_Reject,
    // Label 944: @25707
    GIM_Try, /*On fail goto*//*Label 955*/ 25729, // Rule ID 834 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fabs:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)  =>  (XVABSSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVABSSP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 834,
      GIR_Done,
    // Label 955: @25729
    GIM_Reject,
    // Label 945: @25730
    GIM_Reject,
    // Label 39: @25731
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 961*/ 25958,
    /*GILLT_s32*//*Label 956*/ 25742,
    /*GILLT_s64*//*Label 957*/ 25779,
    /*GILLT_s128*//*Label 958*/ 25847,
    /*GILLT_v2s64*//*Label 959*/ 25884,
    /*GILLT_v4s32*//*Label 960*/ 25921,
    // Label 956: @25742
    GIM_Try, /*On fail goto*//*Label 962*/ 25778, // Rule ID 166 //
      GIM_CheckFeatures, GIFBS_HasFPU,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
      // (fcopysign:{ *:[f32] } f32:{ *:[f32] }:$frB, f32:{ *:[f32] }:$frA)  =>  (FCPSGNS:{ *:[f32] } f32:{ *:[f32] }:$frA, f32:{ *:[f32] }:$frB)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FCPSGNS,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // frD
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // frA
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // frB
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 166,
      GIR_Done,
    // Label 962: @25778
    GIM_Reject,
    // Label 957: @25779
    GIM_Try, /*On fail goto*//*Label 963*/ 25846,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 964*/ 25817, // Rule ID 832 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (fcopysign:{ *:[f64] } f64:{ *:[f64] }:$XB, f64:{ *:[f64] }:$XA)  =>  (XSCPSGNDP:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSCPSGNDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 832,
        GIR_Done,
      // Label 964: @25817
      GIM_Try, /*On fail goto*//*Label 965*/ 25845, // Rule ID 167 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (fcopysign:{ *:[f64] } f64:{ *:[f64] }:$frB, f64:{ *:[f64] }:$frA)  =>  (FCPSGND:{ *:[f64] } f64:{ *:[f64] }:$frA, f64:{ *:[f64] }:$frB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FCPSGND,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // frD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // frA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // frB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 167,
        GIR_Done,
      // Label 965: @25845
      GIM_Reject,
    // Label 963: @25846
    GIM_Reject,
    // Label 958: @25847
    GIM_Try, /*On fail goto*//*Label 966*/ 25883, // Rule ID 968 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (fcopysign:{ *:[f128] } f128:{ *:[f128] }:$vB, f128:{ *:[f128] }:$vA)  =>  (XSCPSGNQP:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSCPSGNQP,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // vB
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 968,
      GIR_Done,
    // Label 966: @25883
    GIM_Reject,
    // Label 959: @25884
    GIM_Try, /*On fail goto*//*Label 967*/ 25920, // Rule ID 835 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fcopysign:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB, v2f64:{ *:[v2f64] }:$XA)  =>  (XVCPSGNDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCPSGNDP,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XB
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 835,
      GIR_Done,
    // Label 967: @25920
    GIM_Reject,
    // Label 960: @25921
    GIM_Try, /*On fail goto*//*Label 968*/ 25957, // Rule ID 836 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fcopysign:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB, v4f32:{ *:[v4f32] }:$XA)  =>  (XVCPSGNSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCPSGNSP,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XB
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 836,
      GIR_Done,
    // Label 968: @25957
    GIM_Reject,
    // Label 961: @25958
    GIM_Reject,
    // Label 40: @25959
    GIM_Try, /*On fail goto*//*Label 969*/ 25971, // Rule ID 15 //
      // MIs[0] dst
      GIM_CheckIsMBB, /*MI*/0, /*Op*/0,
      // (br (bb:{ *:[Other] }):$dst)  =>  (B (bb:{ *:[Other] }):$dst)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::B,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 15,
      GIR_Done,
    // Label 969: @25971
    GIM_Reject,
    // Label 41: @25972
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 8, /*)*//*default:*//*Label 976*/ 26105,
    /*GILLT_s32*//*Label 970*/ 25985,
    /*GILLT_s64*//*Label 971*/ 26005, 0,
    /*GILLT_v2s64*//*Label 972*/ 26025,
    /*GILLT_v4s32*//*Label 973*/ 26045,
    /*GILLT_v8s16*//*Label 974*/ 26065,
    /*GILLT_v16s8*//*Label 975*/ 26085,
    // Label 970: @25985
    GIM_Try, /*On fail goto*//*Label 977*/ 26004, // Rule ID 131 //
      GIM_CheckFeatures, GIFBS_IsISA3_0,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (cttz:{ *:[i32] } i32:{ *:[i32] }:$rS)  =>  (CNTTZW:{ *:[i32] } i32:{ *:[i32] }:$rS)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::CNTTZW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 131,
      GIR_Done,
    // Label 977: @26004
    GIM_Reject,
    // Label 971: @26005
    GIM_Try, /*On fail goto*//*Label 978*/ 26024, // Rule ID 677 //
      GIM_CheckFeatures, GIFBS_IsISA3_0,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      // (cttz:{ *:[i64] } i64:{ *:[i64] }:$rS)  =>  (CNTTZD:{ *:[i64] } i64:{ *:[i64] }:$rS)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::CNTTZD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 677,
      GIR_Done,
    // Label 978: @26024
    GIM_Reject,
    // Label 972: @26025
    GIM_Try, /*On fail goto*//*Label 979*/ 26044, // Rule ID 529 //
      GIM_CheckFeatures, GIFBS_HasP9Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (cttz:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vB)  =>  (VCTZD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VCTZD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 529,
      GIR_Done,
    // Label 979: @26044
    GIM_Reject,
    // Label 973: @26045
    GIM_Try, /*On fail goto*//*Label 980*/ 26064, // Rule ID 528 //
      GIM_CheckFeatures, GIFBS_HasP9Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (cttz:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB)  =>  (VCTZW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VCTZW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 528,
      GIR_Done,
    // Label 980: @26064
    GIM_Reject,
    // Label 974: @26065
    GIM_Try, /*On fail goto*//*Label 981*/ 26084, // Rule ID 527 //
      GIM_CheckFeatures, GIFBS_HasP9Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (cttz:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vB)  =>  (VCTZH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VCTZH,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 527,
      GIR_Done,
    // Label 981: @26084
    GIM_Reject,
    // Label 975: @26085
    GIM_Try, /*On fail goto*//*Label 982*/ 26104, // Rule ID 526 //
      GIM_CheckFeatures, GIFBS_HasP9Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (cttz:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vB)  =>  (VCTZB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VCTZB,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 526,
      GIR_Done,
    // Label 982: @26104
    GIM_Reject,
    // Label 976: @26105
    GIM_Reject,
    // Label 42: @26106
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 8, /*)*//*default:*//*Label 989*/ 26235,
    /*GILLT_s32*//*Label 983*/ 26119,
    /*GILLT_s64*//*Label 984*/ 26137, 0,
    /*GILLT_v2s64*//*Label 985*/ 26155,
    /*GILLT_v4s32*//*Label 986*/ 26175,
    /*GILLT_v8s16*//*Label 987*/ 26195,
    /*GILLT_v16s8*//*Label 988*/ 26215,
    // Label 983: @26119
    GIM_Try, /*On fail goto*//*Label 990*/ 26136, // Rule ID 130 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (ctlz:{ *:[i32] } i32:{ *:[i32] }:$rS)  =>  (CNTLZW:{ *:[i32] } i32:{ *:[i32] }:$rS)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::CNTLZW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 130,
      GIR_Done,
    // Label 990: @26136
    GIM_Reject,
    // Label 984: @26137
    GIM_Try, /*On fail goto*//*Label 991*/ 26154, // Rule ID 676 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      // (ctlz:{ *:[i64] } i64:{ *:[i64] }:$rS)  =>  (CNTLZD:{ *:[i64] } i64:{ *:[i64] }:$rS)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::CNTLZD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 676,
      GIR_Done,
    // Label 991: @26154
    GIM_Reject,
    // Label 985: @26155
    GIM_Try, /*On fail goto*//*Label 992*/ 26174, // Rule ID 476 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (ctlz:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vB)  =>  (VCLZD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VCLZD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 476,
      GIR_Done,
    // Label 992: @26174
    GIM_Reject,
    // Label 986: @26175
    GIM_Try, /*On fail goto*//*Label 993*/ 26194, // Rule ID 475 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (ctlz:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB)  =>  (VCLZW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VCLZW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 475,
      GIR_Done,
    // Label 993: @26194
    GIM_Reject,
    // Label 987: @26195
    GIM_Try, /*On fail goto*//*Label 994*/ 26214, // Rule ID 474 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (ctlz:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vB)  =>  (VCLZH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VCLZH,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 474,
      GIR_Done,
    // Label 994: @26214
    GIM_Reject,
    // Label 988: @26215
    GIM_Try, /*On fail goto*//*Label 995*/ 26234, // Rule ID 473 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (ctlz:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vB)  =>  (VCLZB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VCLZB,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 473,
      GIR_Done,
    // Label 995: @26234
    GIM_Reject,
    // Label 989: @26235
    GIM_Reject,
    // Label 43: @26236
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 8, /*)*//*default:*//*Label 1002*/ 26365,
    /*GILLT_s32*//*Label 996*/ 26249,
    /*GILLT_s64*//*Label 997*/ 26267, 0,
    /*GILLT_v2s64*//*Label 998*/ 26285,
    /*GILLT_v4s32*//*Label 999*/ 26305,
    /*GILLT_v8s16*//*Label 1000*/ 26325,
    /*GILLT_v16s8*//*Label 1001*/ 26345,
    // Label 996: @26249
    GIM_Try, /*On fail goto*//*Label 1003*/ 26266, // Rule ID 681 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (ctpop:{ *:[i32] } i32:{ *:[i32] }:$rS)  =>  (POPCNTW:{ *:[i32] } i32:{ *:[i32] }:$rS)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::POPCNTW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 681,
      GIR_Done,
    // Label 1003: @26266
    GIM_Reject,
    // Label 997: @26267
    GIM_Try, /*On fail goto*//*Label 1004*/ 26284, // Rule ID 678 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      // (ctpop:{ *:[i64] } i64:{ *:[i64] }:$rS)  =>  (POPCNTD:{ *:[i64] } i64:{ *:[i64] }:$rS)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::POPCNTD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 678,
      GIR_Done,
    // Label 1004: @26284
    GIM_Reject,
    // Label 998: @26285
    GIM_Try, /*On fail goto*//*Label 1005*/ 26304, // Rule ID 480 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (ctpop:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vB)  =>  (VPOPCNTD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VPOPCNTD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 480,
      GIR_Done,
    // Label 1005: @26304
    GIM_Reject,
    // Label 999: @26305
    GIM_Try, /*On fail goto*//*Label 1006*/ 26324, // Rule ID 479 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (ctpop:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB)  =>  (VPOPCNTW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VPOPCNTW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 479,
      GIR_Done,
    // Label 1006: @26324
    GIM_Reject,
    // Label 1000: @26325
    GIM_Try, /*On fail goto*//*Label 1007*/ 26344, // Rule ID 478 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (ctpop:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vB)  =>  (VPOPCNTH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VPOPCNTH,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 478,
      GIR_Done,
    // Label 1007: @26344
    GIM_Reject,
    // Label 1001: @26345
    GIM_Try, /*On fail goto*//*Label 1008*/ 26364, // Rule ID 477 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (ctpop:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vB)  =>  (VPOPCNTB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VPOPCNTB,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 477,
      GIR_Done,
    // Label 1008: @26364
    GIM_Reject,
    // Label 1002: @26365
    GIM_Reject,
    // Label 44: @26366
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/4, 6, /*)*//*default:*//*Label 1011*/ 26414,
    /*GILLT_v2s64*//*Label 1009*/ 26374,
    /*GILLT_v4s32*//*Label 1010*/ 26394,
    // Label 1009: @26374
    GIM_Try, /*On fail goto*//*Label 1012*/ 26393, // Rule ID 1015 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (bswap:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$XB)  =>  (XXBRD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XXBRD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1015,
      GIR_Done,
    // Label 1012: @26393
    GIM_Reject,
    // Label 1010: @26394
    GIM_Try, /*On fail goto*//*Label 1013*/ 26413, // Rule ID 1014 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (bswap:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XB)  =>  (XXBRW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XXBRW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1014,
      GIR_Done,
    // Label 1013: @26413
    GIM_Reject,
    // Label 1011: @26414
    GIM_Reject,
    // Label 45: @26415
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 1018*/ 26524,
    /*GILLT_s32*//*Label 1014*/ 26426,
    /*GILLT_s64*//*Label 1015*/ 26446, 0,
    /*GILLT_v2s64*//*Label 1016*/ 26484,
    /*GILLT_v4s32*//*Label 1017*/ 26504,
    // Label 1014: @26426
    GIM_Try, /*On fail goto*//*Label 1019*/ 26445, // Rule ID 143 //
      GIM_CheckFeatures, GIFBS_HasFPU,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
      // (fceil:{ *:[f32] } f32:{ *:[f32] }:$frB)  =>  (FRIPS:{ *:[f32] } f32:{ *:[f32] }:$frB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FRIPS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 143,
      GIR_Done,
    // Label 1019: @26445
    GIM_Reject,
    // Label 1015: @26446
    GIM_Try, /*On fail goto*//*Label 1020*/ 26483,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 1021*/ 26467, // Rule ID 898 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (fceil:{ *:[f64] } f64:{ *:[f64] }:$XB)  =>  (XSRDPIP:{ *:[f64] } f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSRDPIP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 898,
        GIR_Done,
      // Label 1021: @26467
      GIM_Try, /*On fail goto*//*Label 1022*/ 26482, // Rule ID 141 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (fceil:{ *:[f64] } f64:{ *:[f64] }:$frB)  =>  (FRIPD:{ *:[f64] } f64:{ *:[f64] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FRIPD,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 141,
        GIR_Done,
      // Label 1022: @26482
      GIM_Reject,
    // Label 1020: @26483
    GIM_Reject,
    // Label 1016: @26484
    GIM_Try, /*On fail goto*//*Label 1023*/ 26503, // Rule ID 906 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fceil:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)  =>  (XVRDPIP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVRDPIP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 906,
      GIR_Done,
    // Label 1023: @26503
    GIM_Reject,
    // Label 1017: @26504
    GIM_Try, /*On fail goto*//*Label 1024*/ 26523, // Rule ID 914 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fceil:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)  =>  (XVRSPIP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVRSPIP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 914,
      GIR_Done,
    // Label 1024: @26523
    GIM_Reject,
    // Label 1018: @26524
    GIM_Reject,
    // Label 46: @26525
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 1030*/ 26687,
    /*GILLT_s32*//*Label 1025*/ 26536,
    /*GILLT_s64*//*Label 1026*/ 26577,
    /*GILLT_s128*//*Label 1027*/ 26621,
    /*GILLT_v2s64*//*Label 1028*/ 26641,
    /*GILLT_v4s32*//*Label 1029*/ 26664,
    // Label 1025: @26536
    GIM_Try, /*On fail goto*//*Label 1031*/ 26576,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 1032*/ 26557, // Rule ID 949 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$XB)  =>  (XSSQRTSP:{ *:[f32] } f32:{ *:[f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSSQRTSP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 949,
        GIR_Done,
      // Label 1032: @26557
      GIM_Try, /*On fail goto*//*Label 1033*/ 26575, // Rule ID 159 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$frB)  =>  (FSQRTS:{ *:[f32] } f32:{ *:[f32] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FSQRTS,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 159,
        GIR_Done,
      // Label 1033: @26575
      GIM_Reject,
    // Label 1031: @26576
    GIM_Reject,
    // Label 1026: @26577
    GIM_Try, /*On fail goto*//*Label 1034*/ 26620,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 1035*/ 26601, // Rule ID 798 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (fsqrt:{ *:[f64] } f64:{ *:[f64] }:$XB)  =>  (XSSQRTDP:{ *:[f64] } f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSSQRTDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 798,
        GIR_Done,
      // Label 1035: @26601
      GIM_Try, /*On fail goto*//*Label 1036*/ 26619, // Rule ID 157 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (fsqrt:{ *:[f64] } f64:{ *:[f64] }:$frB)  =>  (FSQRT:{ *:[f64] } f64:{ *:[f64] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FSQRT,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 157,
        GIR_Done,
      // Label 1036: @26619
      GIM_Reject,
    // Label 1034: @26620
    GIM_Reject,
    // Label 1027: @26621
    GIM_Try, /*On fail goto*//*Label 1037*/ 26640, // Rule ID 981 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (fsqrt:{ *:[f128] } f128:{ *:[f128] }:$vB)  =>  (XSSQRTQP:{ *:[f128] } f128:{ *:[f128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSSQRTQP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 981,
      GIR_Done,
    // Label 1037: @26640
    GIM_Reject,
    // Label 1028: @26641
    GIM_Try, /*On fail goto*//*Label 1038*/ 26663, // Rule ID 809 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fsqrt:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)  =>  (XVSQRTDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVSQRTDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 809,
      GIR_Done,
    // Label 1038: @26663
    GIM_Reject,
    // Label 1029: @26664
    GIM_Try, /*On fail goto*//*Label 1039*/ 26686, // Rule ID 811 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fsqrt:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)  =>  (XVSQRTSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVSQRTSP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 811,
      GIR_Done,
    // Label 1039: @26686
    GIM_Reject,
    // Label 1030: @26687
    GIM_Reject,
    // Label 47: @26688
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 1044*/ 26797,
    /*GILLT_s32*//*Label 1040*/ 26699,
    /*GILLT_s64*//*Label 1041*/ 26719, 0,
    /*GILLT_v2s64*//*Label 1042*/ 26757,
    /*GILLT_v4s32*//*Label 1043*/ 26777,
    // Label 1040: @26699
    GIM_Try, /*On fail goto*//*Label 1045*/ 26718, // Rule ID 151 //
      GIM_CheckFeatures, GIFBS_HasFPU,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
      // (ffloor:{ *:[f32] } f32:{ *:[f32] }:$frB)  =>  (FRIMS:{ *:[f32] } f32:{ *:[f32] }:$frB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FRIMS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 151,
      GIR_Done,
    // Label 1045: @26718
    GIM_Reject,
    // Label 1041: @26719
    GIM_Try, /*On fail goto*//*Label 1046*/ 26756,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 1047*/ 26740, // Rule ID 896 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (ffloor:{ *:[f64] } f64:{ *:[f64] }:$XB)  =>  (XSRDPIM:{ *:[f64] } f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSRDPIM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 896,
        GIR_Done,
      // Label 1047: @26740
      GIM_Try, /*On fail goto*//*Label 1048*/ 26755, // Rule ID 149 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (ffloor:{ *:[f64] } f64:{ *:[f64] }:$frB)  =>  (FRIMD:{ *:[f64] } f64:{ *:[f64] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FRIMD,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 149,
        GIR_Done,
      // Label 1048: @26755
      GIM_Reject,
    // Label 1046: @26756
    GIM_Reject,
    // Label 1042: @26757
    GIM_Try, /*On fail goto*//*Label 1049*/ 26776, // Rule ID 904 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (ffloor:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)  =>  (XVRDPIM:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVRDPIM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 904,
      GIR_Done,
    // Label 1049: @26776
    GIM_Reject,
    // Label 1043: @26777
    GIM_Try, /*On fail goto*//*Label 1050*/ 26796, // Rule ID 912 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (ffloor:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)  =>  (XVRSPIM:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVRSPIM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 912,
      GIR_Done,
    // Label 1050: @26796
    GIM_Reject,
    // Label 1044: @26797
    GIM_Reject,
    // Label 48: @26798
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 1056*/ 27010,
    /*GILLT_s32*//*Label 1051*/ 26809,
    /*GILLT_s64*//*Label 1052*/ 26869,
    /*GILLT_s128*//*Label 1053*/ 26932,
    /*GILLT_v2s64*//*Label 1054*/ 26956,
    /*GILLT_v4s32*//*Label 1055*/ 26983,
    // Label 1051: @26809
    GIM_Try, /*On fail goto*//*Label 1057*/ 26868,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 1058*/ 26834, // Rule ID 937 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (strict_fadd:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)  =>  (XSADDSP:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSADDSP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 937,
        GIR_Done,
      // Label 1058: @26834
      GIM_Try, /*On fail goto*//*Label 1059*/ 26852, // Rule ID 233 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (strict_fadd:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRB)  =>  (FADDS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FADDS,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 233,
        GIR_Done,
      // Label 1059: @26852
      GIM_Try, /*On fail goto*//*Label 1060*/ 26867, // Rule ID 572 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (strict_fadd:{ *:[f32] } f32:{ *:[f32] }:$RA, f32:{ *:[f32] }:$RB)  =>  (EFSADD:{ *:[f32] } f32:{ *:[f32] }:$RA, f32:{ *:[f32] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSADD,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 572,
        GIR_Done,
      // Label 1060: @26867
      GIM_Reject,
    // Label 1057: @26868
    GIM_Reject,
    // Label 1052: @26869
    GIM_Try, /*On fail goto*//*Label 1061*/ 26931,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 1062*/ 26897, // Rule ID 754 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (strict_fadd:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)  =>  (XSADDDP:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSADDDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 754,
        GIR_Done,
      // Label 1062: @26897
      GIM_Try, /*On fail goto*//*Label 1063*/ 26915, // Rule ID 231 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (strict_fadd:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRB)  =>  (FADD:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FADD,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 231,
        GIR_Done,
      // Label 1063: @26915
      GIM_Try, /*On fail goto*//*Label 1064*/ 26930, // Rule ID 551 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
        // (strict_fadd:{ *:[f64] } f64:{ *:[f64] }:$RA, f64:{ *:[f64] }:$RB)  =>  (EFDADD:{ *:[f64] } f64:{ *:[f64] }:$RA, f64:{ *:[f64] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDADD,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 551,
        GIR_Done,
      // Label 1064: @26930
      GIM_Reject,
    // Label 1061: @26931
    GIM_Reject,
    // Label 1053: @26932
    GIM_Try, /*On fail goto*//*Label 1065*/ 26955, // Rule ID 972 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (strict_fadd:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)  =>  (XSADDQP:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSADDQP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 972,
      GIR_Done,
    // Label 1065: @26955
    GIM_Reject,
    // Label 1054: @26956
    GIM_Try, /*On fail goto*//*Label 1066*/ 26982, // Rule ID 758 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (strict_fadd:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)  =>  (XVADDDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVADDDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 758,
      GIR_Done,
    // Label 1066: @26982
    GIM_Reject,
    // Label 1055: @26983
    GIM_Try, /*On fail goto*//*Label 1067*/ 27009, // Rule ID 760 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (strict_fadd:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)  =>  (XVADDSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVADDSP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 760,
      GIR_Done,
    // Label 1067: @27009
    GIM_Reject,
    // Label 1056: @27010
    GIM_Reject,
    // Label 49: @27011
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 1073*/ 27223,
    /*GILLT_s32*//*Label 1068*/ 27022,
    /*GILLT_s64*//*Label 1069*/ 27082,
    /*GILLT_s128*//*Label 1070*/ 27145,
    /*GILLT_v2s64*//*Label 1071*/ 27169,
    /*GILLT_v4s32*//*Label 1072*/ 27196,
    // Label 1068: @27022
    GIM_Try, /*On fail goto*//*Label 1074*/ 27081,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 1075*/ 27047, // Rule ID 941 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (strict_fsub:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)  =>  (XSSUBSP:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSSUBSP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 941,
        GIR_Done,
      // Label 1075: @27047
      GIM_Try, /*On fail goto*//*Label 1076*/ 27065, // Rule ID 245 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (strict_fsub:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRB)  =>  (FSUBS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FSUBS,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 245,
        GIR_Done,
      // Label 1076: @27065
      GIM_Try, /*On fail goto*//*Label 1077*/ 27080, // Rule ID 590 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (strict_fsub:{ *:[f32] } f32:{ *:[f32] }:$RA, f32:{ *:[f32] }:$RB)  =>  (EFSSUB:{ *:[f32] } f32:{ *:[f32] }:$RA, f32:{ *:[f32] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSSUB,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 590,
        GIR_Done,
      // Label 1077: @27080
      GIM_Reject,
    // Label 1074: @27081
    GIM_Reject,
    // Label 1069: @27082
    GIM_Try, /*On fail goto*//*Label 1078*/ 27144,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 1079*/ 27110, // Rule ID 766 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (strict_fsub:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)  =>  (XSSUBDP:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSSUBDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 766,
        GIR_Done,
      // Label 1079: @27110
      GIM_Try, /*On fail goto*//*Label 1080*/ 27128, // Rule ID 243 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (strict_fsub:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRB)  =>  (FSUB:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FSUB,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 243,
        GIR_Done,
      // Label 1080: @27128
      GIM_Try, /*On fail goto*//*Label 1081*/ 27143, // Rule ID 569 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
        // (strict_fsub:{ *:[f64] } f64:{ *:[f64] }:$RA, f64:{ *:[f64] }:$RB)  =>  (EFDSUB:{ *:[f64] } f64:{ *:[f64] }:$RA, f64:{ *:[f64] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDSUB,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 569,
        GIR_Done,
      // Label 1081: @27143
      GIM_Reject,
    // Label 1078: @27144
    GIM_Reject,
    // Label 1070: @27145
    GIM_Try, /*On fail goto*//*Label 1082*/ 27168, // Rule ID 976 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (strict_fsub:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)  =>  (XSSUBQP:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSSUBQP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 976,
      GIR_Done,
    // Label 1082: @27168
    GIM_Reject,
    // Label 1071: @27169
    GIM_Try, /*On fail goto*//*Label 1083*/ 27195, // Rule ID 768 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (strict_fsub:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)  =>  (XVSUBDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVSUBDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 768,
      GIR_Done,
    // Label 1083: @27195
    GIM_Reject,
    // Label 1072: @27196
    GIM_Try, /*On fail goto*//*Label 1084*/ 27222, // Rule ID 770 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (strict_fsub:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)  =>  (XVSUBSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVSUBSP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 770,
      GIR_Done,
    // Label 1084: @27222
    GIM_Reject,
    // Label 1073: @27223
    GIM_Reject,
    // Label 50: @27224
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 1090*/ 27436,
    /*GILLT_s32*//*Label 1085*/ 27235,
    /*GILLT_s64*//*Label 1086*/ 27295,
    /*GILLT_s128*//*Label 1087*/ 27358,
    /*GILLT_v2s64*//*Label 1088*/ 27382,
    /*GILLT_v4s32*//*Label 1089*/ 27409,
    // Label 1085: @27235
    GIM_Try, /*On fail goto*//*Label 1091*/ 27294,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 1092*/ 27260, // Rule ID 939 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (strict_fmul:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)  =>  (XSMULSP:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSMULSP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 939,
        GIR_Done,
      // Label 1092: @27260
      GIM_Try, /*On fail goto*//*Label 1093*/ 27278, // Rule ID 241 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (strict_fmul:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC)  =>  (FMULS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FMULS,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 241,
        GIR_Done,
      // Label 1093: @27278
      GIM_Try, /*On fail goto*//*Label 1094*/ 27293, // Rule ID 586 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (strict_fmul:{ *:[f32] } f32:{ *:[f32] }:$RA, f32:{ *:[f32] }:$RB)  =>  (EFSMUL:{ *:[f32] } f32:{ *:[f32] }:$RA, f32:{ *:[f32] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSMUL,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 586,
        GIR_Done,
      // Label 1094: @27293
      GIM_Reject,
    // Label 1091: @27294
    GIM_Reject,
    // Label 1086: @27295
    GIM_Try, /*On fail goto*//*Label 1095*/ 27357,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 1096*/ 27323, // Rule ID 756 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (strict_fmul:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)  =>  (XSMULDP:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSMULDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 756,
        GIR_Done,
      // Label 1096: @27323
      GIM_Try, /*On fail goto*//*Label 1097*/ 27341, // Rule ID 239 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (strict_fmul:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC)  =>  (FMUL:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FMUL,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 239,
        GIR_Done,
      // Label 1097: @27341
      GIM_Try, /*On fail goto*//*Label 1098*/ 27356, // Rule ID 565 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
        // (strict_fmul:{ *:[f64] } f64:{ *:[f64] }:$RA, f64:{ *:[f64] }:$RB)  =>  (EFDMUL:{ *:[f64] } f64:{ *:[f64] }:$RA, f64:{ *:[f64] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDMUL,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 565,
        GIR_Done,
      // Label 1098: @27356
      GIM_Reject,
    // Label 1095: @27357
    GIM_Reject,
    // Label 1087: @27358
    GIM_Try, /*On fail goto*//*Label 1099*/ 27381, // Rule ID 974 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (strict_fmul:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)  =>  (XSMULQP:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSMULQP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 974,
      GIR_Done,
    // Label 1099: @27381
    GIM_Reject,
    // Label 1088: @27382
    GIM_Try, /*On fail goto*//*Label 1100*/ 27408, // Rule ID 762 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (strict_fmul:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)  =>  (XVMULDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVMULDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 762,
      GIR_Done,
    // Label 1100: @27408
    GIM_Reject,
    // Label 1089: @27409
    GIM_Try, /*On fail goto*//*Label 1101*/ 27435, // Rule ID 764 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (strict_fmul:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)  =>  (XVMULSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVMULSP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 764,
      GIR_Done,
    // Label 1101: @27435
    GIM_Reject,
    // Label 1090: @27436
    GIM_Reject,
    // Label 51: @27437
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 1107*/ 27649,
    /*GILLT_s32*//*Label 1102*/ 27448,
    /*GILLT_s64*//*Label 1103*/ 27508,
    /*GILLT_s128*//*Label 1104*/ 27571,
    /*GILLT_v2s64*//*Label 1105*/ 27595,
    /*GILLT_v4s32*//*Label 1106*/ 27622,
    // Label 1102: @27448
    GIM_Try, /*On fail goto*//*Label 1108*/ 27507,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 1109*/ 27473, // Rule ID 943 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (strict_fdiv:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)  =>  (XSDIVSP:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSDIVSP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 943,
        GIR_Done,
      // Label 1109: @27473
      GIM_Try, /*On fail goto*//*Label 1110*/ 27491, // Rule ID 237 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (strict_fdiv:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRB)  =>  (FDIVS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FDIVS,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 237,
        GIR_Done,
      // Label 1110: @27491
      GIM_Try, /*On fail goto*//*Label 1111*/ 27506, // Rule ID 584 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (strict_fdiv:{ *:[f32] } f32:{ *:[f32] }:$RA, f32:{ *:[f32] }:$RB)  =>  (EFSDIV:{ *:[f32] } f32:{ *:[f32] }:$RA, f32:{ *:[f32] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSDIV,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 584,
        GIR_Done,
      // Label 1111: @27506
      GIM_Reject,
    // Label 1108: @27507
    GIM_Reject,
    // Label 1103: @27508
    GIM_Try, /*On fail goto*//*Label 1112*/ 27570,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 1113*/ 27536, // Rule ID 795 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (strict_fdiv:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)  =>  (XSDIVDP:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSDIVDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 795,
        GIR_Done,
      // Label 1113: @27536
      GIM_Try, /*On fail goto*//*Label 1114*/ 27554, // Rule ID 235 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (strict_fdiv:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRB)  =>  (FDIV:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FDIV,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 235,
        GIR_Done,
      // Label 1114: @27554
      GIM_Try, /*On fail goto*//*Label 1115*/ 27569, // Rule ID 563 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
        // (strict_fdiv:{ *:[f64] } f64:{ *:[f64] }:$RA, f64:{ *:[f64] }:$RB)  =>  (EFDDIV:{ *:[f64] } f64:{ *:[f64] }:$RA, f64:{ *:[f64] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDDIV,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 563,
        GIR_Done,
      // Label 1115: @27569
      GIM_Reject,
    // Label 1112: @27570
    GIM_Reject,
    // Label 1104: @27571
    GIM_Try, /*On fail goto*//*Label 1116*/ 27594, // Rule ID 978 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (strict_fdiv:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)  =>  (XSDIVQP:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSDIVQP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 978,
      GIR_Done,
    // Label 1116: @27594
    GIM_Reject,
    // Label 1105: @27595
    GIM_Try, /*On fail goto*//*Label 1117*/ 27621, // Rule ID 804 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (strict_fdiv:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)  =>  (XVDIVDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVDIVDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 804,
      GIR_Done,
    // Label 1117: @27621
    GIM_Reject,
    // Label 1106: @27622
    GIM_Try, /*On fail goto*//*Label 1118*/ 27648, // Rule ID 806 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (strict_fdiv:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)  =>  (XVDIVSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVDIVSP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 806,
      GIR_Done,
    // Label 1118: @27648
    GIM_Reject,
    // Label 1107: @27649
    GIM_Reject,
    // Label 52: @27650
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 1124*/ 28240,
    /*GILLT_s32*//*Label 1119*/ 27661,
    /*GILLT_s64*//*Label 1120*/ 27817,
    /*GILLT_s128*//*Label 1121*/ 27973,
    /*GILLT_v2s64*//*Label 1122*/ 28062,
    /*GILLT_v4s32*//*Label 1123*/ 28151,
    // Label 1119: @27661
    GIM_Try, /*On fail goto*//*Label 1125*/ 27816,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 1126*/ 27720, // Rule ID 953 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (strict_fma:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB, (fneg:{ *:[f32] } f32:{ *:[f32] }:$XTi))  =>  (XSMSUBASP:{ *:[f32] } f32:{ *:[f32] }:$XTi, f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMSUBASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 953,
        GIR_Done,
      // Label 1126: @27720
      GIM_Try, /*On fail goto*//*Label 1127*/ 27752, // Rule ID 951 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (strict_fma:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB, f32:{ *:[f32] }:$XTi)  =>  (XSMADDASP:{ *:[f32] } f32:{ *:[f32] }:$XTi, f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMADDASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 951,
        GIR_Done,
      // Label 1127: @27752
      GIM_Try, /*On fail goto*//*Label 1128*/ 27797, // Rule ID 219 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (strict_fma:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, (fneg:{ *:[f32] } f32:{ *:[f32] }:$FRB))  =>  (FMSUBS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, f32:{ *:[f32] }:$FRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FMSUBS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // FRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // FRC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // FRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 219,
        GIR_Done,
      // Label 1128: @27797
      GIM_Try, /*On fail goto*//*Label 1129*/ 27815, // Rule ID 215 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (strict_fma:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, f32:{ *:[f32] }:$FRB)  =>  (FMADDS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, f32:{ *:[f32] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FMADDS,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 215,
        GIR_Done,
      // Label 1129: @27815
      GIM_Reject,
    // Label 1125: @27816
    GIM_Reject,
    // Label 1120: @27817
    GIM_Try, /*On fail goto*//*Label 1130*/ 27972,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 1131*/ 27876, // Rule ID 774 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (strict_fma:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB, (fneg:{ *:[f64] } f64:{ *:[f64] }:$XTi))  =>  (XSMSUBADP:{ *:[f64] } f64:{ *:[f64] }:$XTi, f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMSUBADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 774,
        GIR_Done,
      // Label 1131: @27876
      GIM_Try, /*On fail goto*//*Label 1132*/ 27908, // Rule ID 772 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (strict_fma:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB, f64:{ *:[f64] }:$XTi)  =>  (XSMADDADP:{ *:[f64] } f64:{ *:[f64] }:$XTi, f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMADDADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 772,
        GIR_Done,
      // Label 1132: @27908
      GIM_Try, /*On fail goto*//*Label 1133*/ 27953, // Rule ID 217 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (strict_fma:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, (fneg:{ *:[f64] } f64:{ *:[f64] }:$FRB))  =>  (FMSUB:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, f64:{ *:[f64] }:$FRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FMSUB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // FRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // FRC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // FRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 217,
        GIR_Done,
      // Label 1133: @27953
      GIM_Try, /*On fail goto*//*Label 1134*/ 27971, // Rule ID 213 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (strict_fma:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, f64:{ *:[f64] }:$FRB)  =>  (FMADD:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, f64:{ *:[f64] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FMADD,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 213,
        GIR_Done,
      // Label 1134: @27971
      GIM_Reject,
    // Label 1130: @27972
    GIM_Reject,
    // Label 1121: @27973
    GIM_Try, /*On fail goto*//*Label 1135*/ 28061,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 1136*/ 28032, // Rule ID 984 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s128,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (strict_fma:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB, (fneg:{ *:[f128] } f128:{ *:[f128] }:$vTi))  =>  (XSMSUBQP:{ *:[f128] } f128:{ *:[f128] }:$vTi, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMSUBQP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 984,
        GIR_Done,
      // Label 1136: @28032
      GIM_Try, /*On fail goto*//*Label 1137*/ 28060, // Rule ID 982 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        // (strict_fma:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB, f128:{ *:[f128] }:$vTi)  =>  (XSMADDQP:{ *:[f128] } f128:{ *:[f128] }:$vTi, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMADDQP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 982,
        GIR_Done,
      // Label 1137: @28060
      GIM_Reject,
    // Label 1135: @28061
    GIM_Reject,
    // Label 1122: @28062
    GIM_Try, /*On fail goto*//*Label 1138*/ 28150,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 1139*/ 28121, // Rule ID 784 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v2s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (strict_fma:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB, (fneg:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XTi))  =>  (XVMSUBADP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XTi, v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVMSUBADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 784,
        GIR_Done,
      // Label 1139: @28121
      GIM_Try, /*On fail goto*//*Label 1140*/ 28149, // Rule ID 780 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        // (strict_fma:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB, v2f64:{ *:[v2f64] }:$XTi)  =>  (XVMADDADP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XTi, v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVMADDADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 780,
        GIR_Done,
      // Label 1140: @28149
      GIM_Reject,
    // Label 1138: @28150
    GIM_Reject,
    // Label 1123: @28151
    GIM_Try, /*On fail goto*//*Label 1141*/ 28239,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 1142*/ 28210, // Rule ID 786 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (strict_fma:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB, (fneg:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XTi))  =>  (XVMSUBASP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XTi, v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVMSUBASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 786,
        GIR_Done,
      // Label 1142: @28210
      GIM_Try, /*On fail goto*//*Label 1143*/ 28238, // Rule ID 782 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        // (strict_fma:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB, v4f32:{ *:[v4f32] }:$XTi)  =>  (XVMADDASP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XTi, v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVMADDASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 782,
        GIR_Done,
      // Label 1143: @28238
      GIM_Reject,
    // Label 1141: @28239
    GIM_Reject,
    // Label 1124: @28240
    GIM_Reject,
    // Label 53: @28241
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 1149*/ 28403,
    /*GILLT_s32*//*Label 1144*/ 28252,
    /*GILLT_s64*//*Label 1145*/ 28293,
    /*GILLT_s128*//*Label 1146*/ 28337,
    /*GILLT_v2s64*//*Label 1147*/ 28357,
    /*GILLT_v4s32*//*Label 1148*/ 28380,
    // Label 1144: @28252
    GIM_Try, /*On fail goto*//*Label 1150*/ 28292,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 1151*/ 28273, // Rule ID 948 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (strict_fsqrt:{ *:[f32] } f32:{ *:[f32] }:$XB)  =>  (XSSQRTSP:{ *:[f32] } f32:{ *:[f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSSQRTSP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 948,
        GIR_Done,
      // Label 1151: @28273
      GIM_Try, /*On fail goto*//*Label 1152*/ 28291, // Rule ID 158 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (strict_fsqrt:{ *:[f32] } f32:{ *:[f32] }:$frB)  =>  (FSQRTS:{ *:[f32] } f32:{ *:[f32] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FSQRTS,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 158,
        GIR_Done,
      // Label 1152: @28291
      GIM_Reject,
    // Label 1150: @28292
    GIM_Reject,
    // Label 1145: @28293
    GIM_Try, /*On fail goto*//*Label 1153*/ 28336,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 1154*/ 28317, // Rule ID 797 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (strict_fsqrt:{ *:[f64] } f64:{ *:[f64] }:$XB)  =>  (XSSQRTDP:{ *:[f64] } f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSSQRTDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 797,
        GIR_Done,
      // Label 1154: @28317
      GIM_Try, /*On fail goto*//*Label 1155*/ 28335, // Rule ID 156 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (strict_fsqrt:{ *:[f64] } f64:{ *:[f64] }:$frB)  =>  (FSQRT:{ *:[f64] } f64:{ *:[f64] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FSQRT,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 156,
        GIR_Done,
      // Label 1155: @28335
      GIM_Reject,
    // Label 1153: @28336
    GIM_Reject,
    // Label 1146: @28337
    GIM_Try, /*On fail goto*//*Label 1156*/ 28356, // Rule ID 980 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (strict_fsqrt:{ *:[f128] } f128:{ *:[f128] }:$vB)  =>  (XSSQRTQP:{ *:[f128] } f128:{ *:[f128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSSQRTQP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 980,
      GIR_Done,
    // Label 1156: @28356
    GIM_Reject,
    // Label 1147: @28357
    GIM_Try, /*On fail goto*//*Label 1157*/ 28379, // Rule ID 808 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (strict_fsqrt:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)  =>  (XVSQRTDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVSQRTDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 808,
      GIR_Done,
    // Label 1157: @28379
    GIM_Reject,
    // Label 1148: @28380
    GIM_Try, /*On fail goto*//*Label 1158*/ 28402, // Rule ID 810 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (strict_fsqrt:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)  =>  (XVSQRTSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVSQRTSP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 810,
      GIR_Done,
    // Label 1158: @28402
    GIM_Reject,
    // Label 1149: @28403
    GIM_Reject,
    // Label 54: @28404
    GIM_Reject,
    };
  return MatchTable0;
}
#endif // ifdef GET_GLOBALISEL_IMPL
#ifdef GET_GLOBALISEL_PREDICATES_DECL
PredicateBitset AvailableModuleFeatures;
mutable PredicateBitset AvailableFunctionFeatures;
PredicateBitset getAvailableFeatures() const {
  return AvailableModuleFeatures | AvailableFunctionFeatures;
}
PredicateBitset
computeAvailableModuleFeatures(const PPCSubtarget *Subtarget) const;
PredicateBitset
computeAvailableFunctionFeatures(const PPCSubtarget *Subtarget,
                                 const MachineFunction *MF) const;
void setupGeneratedPerFunctionState(MachineFunction &MF) override;
#endif // ifdef GET_GLOBALISEL_PREDICATES_DECL
#ifdef GET_GLOBALISEL_PREDICATES_INIT
AvailableModuleFeatures(computeAvailableModuleFeatures(&STI)),
AvailableFunctionFeatures()
#endif // ifdef GET_GLOBALISEL_PREDICATES_INIT
