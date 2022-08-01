/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Register Enum Values                                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_ENUM
#undef GET_REGINFO_ENUM

namespace llvm {

class MCRegisterClass;
extern const MCRegisterClass MSP430MCRegisterClasses[];

namespace MSP430 {
enum {
  NoRegister,
  CG = 1,
  CGB = 2,
  PC = 3,
  PCB = 4,
  SP = 5,
  SPB = 6,
  SR = 7,
  SRB = 8,
  R4 = 9,
  R5 = 10,
  R6 = 11,
  R7 = 12,
  R8 = 13,
  R9 = 14,
  R10 = 15,
  R11 = 16,
  R12 = 17,
  R13 = 18,
  R14 = 19,
  R15 = 20,
  R4B = 21,
  R5B = 22,
  R6B = 23,
  R7B = 24,
  R8B = 25,
  R9B = 26,
  R10B = 27,
  R11B = 28,
  R12B = 29,
  R13B = 30,
  R14B = 31,
  R15B = 32,
  NUM_TARGET_REGS // 33
};
} // end namespace MSP430

// Register classes

namespace MSP430 {
enum {
  GR8RegClassID = 0,
  GR16RegClassID = 1,

};
} // end namespace MSP430


// Subregister indices

namespace MSP430 {
enum : uint16_t {
  NoSubRegister,
  subreg_8bit,	// 1
  NUM_TARGET_SUBREGS
};
} // end namespace MSP430

// Register pressure sets enum.
namespace MSP430 {
enum RegisterPressureSets {
  GR8 = 0,
};
} // end namespace MSP430

} // end namespace llvm

#endif // GET_REGINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* MC Register Information                                                    *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_MC_DESC
#undef GET_REGINFO_MC_DESC

namespace llvm {

extern const MCPhysReg MSP430RegDiffLists[] = {
  /* 0 */ 0, 0,
  /* 2 */ 1, 0,
  /* 4 */ 2, 0,
  /* 6 */ 3, 0,
  /* 8 */ 12, 0,
  /* 10 */ 65519, 0,
  /* 12 */ 65524, 0,
  /* 14 */ 65531, 0,
  /* 16 */ 65535, 0,
};

extern const LaneBitmask MSP430LaneMaskLists[] = {
  /* 0 */ LaneBitmask(0x0000000000000000), LaneBitmask::getAll(),
  /* 2 */ LaneBitmask(0x0000000000000001), LaneBitmask::getAll(),
};

extern const uint16_t MSP430SubRegIdxLists[] = {
  /* 0 */ 1, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits MSP430SubRegIdxRanges[] = {
  { 65535, 65535 },
  { 0, 8 },	// subreg_8bit
};

extern const char MSP430RegStrings[] = {
  /* 0 */ 'R', '1', '0', 0,
  /* 4 */ 'R', '1', '1', 0,
  /* 8 */ 'R', '1', '2', 0,
  /* 12 */ 'R', '1', '3', 0,
  /* 16 */ 'R', '1', '4', 0,
  /* 20 */ 'R', '4', 0,
  /* 23 */ 'R', '1', '5', 0,
  /* 27 */ 'R', '5', 0,
  /* 30 */ 'R', '6', 0,
  /* 33 */ 'R', '7', 0,
  /* 36 */ 'R', '8', 0,
  /* 39 */ 'R', '9', 0,
  /* 42 */ 'R', '1', '0', 'B', 0,
  /* 47 */ 'R', '1', '1', 'B', 0,
  /* 52 */ 'R', '1', '2', 'B', 0,
  /* 57 */ 'R', '1', '3', 'B', 0,
  /* 62 */ 'R', '1', '4', 'B', 0,
  /* 67 */ 'R', '4', 'B', 0,
  /* 71 */ 'R', '1', '5', 'B', 0,
  /* 76 */ 'R', '5', 'B', 0,
  /* 80 */ 'R', '6', 'B', 0,
  /* 84 */ 'R', '7', 'B', 0,
  /* 88 */ 'R', '8', 'B', 0,
  /* 92 */ 'R', '9', 'B', 0,
  /* 96 */ 'P', 'C', 'B', 0,
  /* 100 */ 'C', 'G', 'B', 0,
  /* 104 */ 'S', 'P', 'B', 0,
  /* 108 */ 'S', 'R', 'B', 0,
  /* 112 */ 'P', 'C', 0,
  /* 115 */ 'C', 'G', 0,
  /* 118 */ 'S', 'P', 0,
  /* 121 */ 'S', 'R', 0,
  0
};

extern const MCRegisterDesc MSP430RegDesc[] = { // Descriptors
  { 3, 0, 0, 0, 0, 0 },
  { 115, 2, 1, 0, 0, 2 },
  { 100, 1, 16, 1, 0, 0 },
  { 112, 2, 1, 0, 32, 2 },
  { 96, 1, 16, 1, 32, 0 },
  { 118, 2, 1, 0, 64, 2 },
  { 104, 1, 16, 1, 64, 0 },
  { 121, 2, 1, 0, 96, 2 },
  { 108, 1, 16, 1, 96, 0 },
  { 20, 8, 1, 0, 225, 2 },
  { 27, 8, 1, 0, 225, 2 },
  { 30, 8, 1, 0, 225, 2 },
  { 33, 8, 1, 0, 225, 2 },
  { 36, 8, 1, 0, 225, 2 },
  { 39, 8, 1, 0, 225, 2 },
  { 0, 8, 1, 0, 225, 2 },
  { 4, 8, 1, 0, 225, 2 },
  { 8, 8, 1, 0, 225, 2 },
  { 12, 8, 1, 0, 225, 2 },
  { 16, 8, 1, 0, 225, 2 },
  { 23, 8, 1, 0, 225, 2 },
  { 67, 1, 12, 1, 161, 0 },
  { 76, 1, 12, 1, 161, 0 },
  { 80, 1, 12, 1, 161, 0 },
  { 84, 1, 12, 1, 161, 0 },
  { 88, 1, 12, 1, 161, 0 },
  { 92, 1, 12, 1, 161, 0 },
  { 42, 1, 12, 1, 161, 0 },
  { 47, 1, 12, 1, 161, 0 },
  { 52, 1, 12, 1, 161, 0 },
  { 57, 1, 12, 1, 161, 0 },
  { 62, 1, 12, 1, 161, 0 },
  { 71, 1, 12, 1, 161, 0 },
};

extern const MCPhysReg MSP430RegUnitRoots[][2] = {
  { MSP430::CGB },
  { MSP430::PCB },
  { MSP430::SPB },
  { MSP430::SRB },
  { MSP430::R4B },
  { MSP430::R5B },
  { MSP430::R6B },
  { MSP430::R7B },
  { MSP430::R8B },
  { MSP430::R9B },
  { MSP430::R10B },
  { MSP430::R11B },
  { MSP430::R12B },
  { MSP430::R13B },
  { MSP430::R14B },
  { MSP430::R15B },
};

namespace {     // Register classes...
  // GR8 Register Class...
  const MCPhysReg GR8[] = {
    MSP430::R12B, MSP430::R13B, MSP430::R14B, MSP430::R15B, MSP430::R11B, MSP430::R10B, MSP430::R9B, MSP430::R8B, MSP430::R7B, MSP430::R6B, MSP430::R5B, MSP430::R4B, MSP430::PCB, MSP430::SPB, MSP430::SRB, MSP430::CGB, 
  };

  // GR8 Bit set.
  const uint8_t GR8Bits[] = {
    0x54, 0x01, 0xe0, 0xff, 0x01, 
  };

  // GR16 Register Class...
  const MCPhysReg GR16[] = {
    MSP430::R12, MSP430::R13, MSP430::R14, MSP430::R15, MSP430::R11, MSP430::R10, MSP430::R9, MSP430::R8, MSP430::R7, MSP430::R6, MSP430::R5, MSP430::R4, MSP430::PC, MSP430::SP, MSP430::SR, MSP430::CG, 
  };

  // GR16 Bit set.
  const uint8_t GR16Bits[] = {
    0xaa, 0xfe, 0x1f, 
  };

} // end anonymous namespace

extern const char MSP430RegClassStrings[] = {
  /* 0 */ 'G', 'R', '1', '6', 0,
  /* 5 */ 'G', 'R', '8', 0,
  0
};

extern const MCRegisterClass MSP430MCRegisterClasses[] = {
  { GR8, GR8Bits, 5, 16, sizeof(GR8Bits), MSP430::GR8RegClassID, 8, 1, true },
  { GR16, GR16Bits, 0, 16, sizeof(GR16Bits), MSP430::GR16RegClassID, 16, 1, true },
};

// MSP430 Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair MSP430DwarfFlavour0Dwarf2L[] = {
  { 0U, MSP430::PCB },
  { 1U, MSP430::SPB },
  { 2U, MSP430::SRB },
  { 3U, MSP430::CGB },
  { 4U, MSP430::R4B },
  { 5U, MSP430::R5B },
  { 6U, MSP430::R6B },
  { 7U, MSP430::R7B },
  { 8U, MSP430::R8B },
  { 9U, MSP430::R9B },
  { 10U, MSP430::R10B },
  { 11U, MSP430::R11B },
  { 12U, MSP430::R12B },
  { 13U, MSP430::R13B },
  { 14U, MSP430::R14B },
  { 15U, MSP430::R15B },
};
extern const unsigned MSP430DwarfFlavour0Dwarf2LSize = array_lengthof(MSP430DwarfFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair MSP430EHFlavour0Dwarf2L[] = {
  { 0U, MSP430::PCB },
  { 1U, MSP430::SPB },
  { 2U, MSP430::SRB },
  { 3U, MSP430::CGB },
  { 4U, MSP430::R4B },
  { 5U, MSP430::R5B },
  { 6U, MSP430::R6B },
  { 7U, MSP430::R7B },
  { 8U, MSP430::R8B },
  { 9U, MSP430::R9B },
  { 10U, MSP430::R10B },
  { 11U, MSP430::R11B },
  { 12U, MSP430::R12B },
  { 13U, MSP430::R13B },
  { 14U, MSP430::R14B },
  { 15U, MSP430::R15B },
};
extern const unsigned MSP430EHFlavour0Dwarf2LSize = array_lengthof(MSP430EHFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair MSP430DwarfFlavour0L2Dwarf[] = {
  { MSP430::CG, 3U },
  { MSP430::CGB, 3U },
  { MSP430::PC, 0U },
  { MSP430::PCB, 0U },
  { MSP430::SP, 1U },
  { MSP430::SPB, 1U },
  { MSP430::SR, 2U },
  { MSP430::SRB, 2U },
  { MSP430::R4, 4U },
  { MSP430::R5, 5U },
  { MSP430::R6, 6U },
  { MSP430::R7, 7U },
  { MSP430::R8, 8U },
  { MSP430::R9, 9U },
  { MSP430::R10, 10U },
  { MSP430::R11, 11U },
  { MSP430::R12, 12U },
  { MSP430::R13, 13U },
  { MSP430::R14, 14U },
  { MSP430::R15, 15U },
  { MSP430::R4B, 4U },
  { MSP430::R5B, 5U },
  { MSP430::R6B, 6U },
  { MSP430::R7B, 7U },
  { MSP430::R8B, 8U },
  { MSP430::R9B, 9U },
  { MSP430::R10B, 10U },
  { MSP430::R11B, 11U },
  { MSP430::R12B, 12U },
  { MSP430::R13B, 13U },
  { MSP430::R14B, 14U },
  { MSP430::R15B, 15U },
};
extern const unsigned MSP430DwarfFlavour0L2DwarfSize = array_lengthof(MSP430DwarfFlavour0L2Dwarf);

extern const MCRegisterInfo::DwarfLLVMRegPair MSP430EHFlavour0L2Dwarf[] = {
  { MSP430::CG, 3U },
  { MSP430::CGB, 3U },
  { MSP430::PC, 0U },
  { MSP430::PCB, 0U },
  { MSP430::SP, 1U },
  { MSP430::SPB, 1U },
  { MSP430::SR, 2U },
  { MSP430::SRB, 2U },
  { MSP430::R4, 4U },
  { MSP430::R5, 5U },
  { MSP430::R6, 6U },
  { MSP430::R7, 7U },
  { MSP430::R8, 8U },
  { MSP430::R9, 9U },
  { MSP430::R10, 10U },
  { MSP430::R11, 11U },
  { MSP430::R12, 12U },
  { MSP430::R13, 13U },
  { MSP430::R14, 14U },
  { MSP430::R15, 15U },
  { MSP430::R4B, 4U },
  { MSP430::R5B, 5U },
  { MSP430::R6B, 6U },
  { MSP430::R7B, 7U },
  { MSP430::R8B, 8U },
  { MSP430::R9B, 9U },
  { MSP430::R10B, 10U },
  { MSP430::R11B, 11U },
  { MSP430::R12B, 12U },
  { MSP430::R13B, 13U },
  { MSP430::R14B, 14U },
  { MSP430::R15B, 15U },
};
extern const unsigned MSP430EHFlavour0L2DwarfSize = array_lengthof(MSP430EHFlavour0L2Dwarf);

extern const uint16_t MSP430RegEncodingTable[] = {
  0,
  3,
  3,
  0,
  0,
  1,
  1,
  2,
  2,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
};
static inline void InitMSP430MCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(MSP430RegDesc, 33, RA, PC, MSP430MCRegisterClasses, 2, MSP430RegUnitRoots, 16, MSP430RegDiffLists, MSP430LaneMaskLists, MSP430RegStrings, MSP430RegClassStrings, MSP430SubRegIdxLists, 2,
MSP430SubRegIdxRanges, MSP430RegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(MSP430DwarfFlavour0Dwarf2L, MSP430DwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(MSP430EHFlavour0Dwarf2L, MSP430EHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(MSP430DwarfFlavour0L2Dwarf, MSP430DwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(MSP430EHFlavour0L2Dwarf, MSP430EHFlavour0L2DwarfSize, true);
    break;
  }
}

} // end namespace llvm

#endif // GET_REGINFO_MC_DESC

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Register Information Header Fragment                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_HEADER
#undef GET_REGINFO_HEADER

#include "llvm/CodeGen/TargetRegisterInfo.h"

namespace llvm {

class MSP430FrameLowering;

struct MSP430GenRegisterInfo : public TargetRegisterInfo {
  explicit MSP430GenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0,
      unsigned PC = 0, unsigned HwMode = 0);
  unsigned composeSubRegIndicesImpl(unsigned, unsigned) const override;
  LaneBitmask composeSubRegIndexLaneMaskImpl(unsigned, LaneBitmask) const override;
  LaneBitmask reverseComposeSubRegIndexLaneMaskImpl(unsigned, LaneBitmask) const override;
  const TargetRegisterClass *getSubClassWithSubReg(const TargetRegisterClass *, unsigned) const override;
  const RegClassWeight &getRegClassWeight(const TargetRegisterClass *RC) const override;
  unsigned getRegUnitWeight(unsigned RegUnit) const override;
  unsigned getNumRegPressureSets() const override;
  const char *getRegPressureSetName(unsigned Idx) const override;
  unsigned getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const override;
  const int *getRegClassPressureSets(const TargetRegisterClass *RC) const override;
  const int *getRegUnitPressureSets(unsigned RegUnit) const override;
  ArrayRef<const char *> getRegMaskNames() const override;
  ArrayRef<const uint32_t *> getRegMasks() const override;
  bool isGeneralPurposeRegister(const MachineFunction &, MCRegister) const override;
  bool isFixedRegister(const MachineFunction &, MCRegister) const override;
  bool isArgumentRegister(const MachineFunction &, MCRegister) const override;
  /// Devirtualized TargetFrameLowering.
  static const MSP430FrameLowering *getFrameLowering(
      const MachineFunction &MF);
};

namespace MSP430 { // Register classes
  extern const TargetRegisterClass GR8RegClass;
  extern const TargetRegisterClass GR16RegClass;
} // end namespace MSP430

} // end namespace llvm

#endif // GET_REGINFO_HEADER

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Register and Register Classes Information                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_TARGET_DESC
#undef GET_REGINFO_TARGET_DESC

namespace llvm {

extern const MCRegisterClass MSP430MCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i8, MVT::Other,
  /* 2 */ MVT::i16, MVT::Other,
};

static const char *SubRegIndexNameTable[] = { "subreg_8bit", "" };


static const LaneBitmask SubRegIndexLaneMaskTable[] = {
  LaneBitmask::getAll(),
  LaneBitmask(0x0000000000000001), // subreg_8bit
 };



static const TargetRegisterInfo::RegClassInfo RegClassInfos[] = {
  // Mode = 0 (Default)
  { 8, 8, 8, VTLists+0 },    // GR8
  { 16, 16, 16, VTLists+2 },    // GR16
};

static const TargetRegisterClass *const NullRegClasses[] = { nullptr };

static const uint32_t GR8SubClassMask[] = {
  0x00000001, 
  0x00000002, // subreg_8bit
};

static const uint32_t GR16SubClassMask[] = {
  0x00000002, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 1, 0,
};


namespace MSP430 {   // Register class instances
  extern const TargetRegisterClass GR8RegClass = {
    &MSP430MCRegisterClasses[GR8RegClassID],
    GR8SubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    0x00, /* TSFlags */
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GR16RegClass = {
    &MSP430MCRegisterClasses[GR16RegClassID],
    GR16SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    0x00, /* TSFlags */
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

} // end namespace MSP430

namespace {
  const TargetRegisterClass *const RegisterClasses[] = {
    &MSP430::GR8RegClass,
    &MSP430::GR16RegClass,
  };
} // end anonymous namespace

static const uint8_t CostPerUseTable[] = { 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };


static const bool InAllocatableClassTable[] = { 
false, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, };


static const TargetRegisterInfoDesc MSP430RegInfoDesc = { // Extra Descriptors
CostPerUseTable, 1, InAllocatableClassTable};

unsigned MSP430GenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t Rows[1][1] = {
    { 0, },
  };

  --IdxA; assert(IdxA < 1); (void) IdxA;
  --IdxB; assert(IdxB < 1);
  return Rows[0][IdxB];
}

  struct MaskRolOp {
    LaneBitmask Mask;
    uint8_t  RotateLeft;
  };
  static const MaskRolOp LaneMaskComposeSequences[] = {
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  0 }, { LaneBitmask::getNone(), 0 }  // Sequence 0
  };
  static const uint8_t CompositeSequences[] = {
    0 // to subreg_8bit
  };

LaneBitmask MSP430GenRegisterInfo::composeSubRegIndexLaneMaskImpl(unsigned IdxA, LaneBitmask LaneMask) const {
  --IdxA; assert(IdxA < 1 && "Subregister index out of bounds");
  LaneBitmask Result;
  for (const MaskRolOp *Ops =
       &LaneMaskComposeSequences[CompositeSequences[IdxA]];
       Ops->Mask.any(); ++Ops) {
    LaneBitmask::Type M = LaneMask.getAsInteger() & Ops->Mask.getAsInteger();
    if (unsigned S = Ops->RotateLeft)
      Result |= LaneBitmask((M << S) | (M >> (LaneBitmask::BitWidth - S)));
    else
      Result |= LaneBitmask(M);
  }
  return Result;
}

LaneBitmask MSP430GenRegisterInfo::reverseComposeSubRegIndexLaneMaskImpl(unsigned IdxA,  LaneBitmask LaneMask) const {
  LaneMask &= getSubRegIndexLaneMask(IdxA);
  --IdxA; assert(IdxA < 1 && "Subregister index out of bounds");
  LaneBitmask Result;
  for (const MaskRolOp *Ops =
       &LaneMaskComposeSequences[CompositeSequences[IdxA]];
       Ops->Mask.any(); ++Ops) {
    LaneBitmask::Type M = LaneMask.getAsInteger();
    if (unsigned S = Ops->RotateLeft)
      Result |= LaneBitmask((M >> S) | (M << (LaneBitmask::BitWidth - S)));
    else
      Result |= LaneBitmask(M);
  }
  return Result;
}

const TargetRegisterClass *MSP430GenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[2][1] = {
    {	// GR8
      0,	// subreg_8bit
    },
    {	// GR16
      2,	// subreg_8bit -> GR16
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 1 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : nullptr;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &MSP430GenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 16},  	// GR8
    {1, 16},  	// GR16
  };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned MSP430GenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 16 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned MSP430GenRegisterInfo::getNumRegPressureSets() const {
  return 1;
}

// Get the name of this register unit pressure set.
const char *MSP430GenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *PressureNameTable[] = {
    "GR8",
  };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned MSP430GenRegisterInfo::
getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const {
  static const uint8_t PressureLimitTable[] = {
    16,  	// 0: GR8
  };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
  /* 0 */ 0, -1,
};

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int *MSP430GenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const uint8_t RCSetStartTable[] = {
    0,0,};
  return &RCSetsTable[RCSetStartTable[RC->getID()]];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int *MSP430GenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 16 && "invalid register unit");
  static const uint8_t RUSetStartTable[] = {
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};
  return &RCSetsTable[RUSetStartTable[RegUnit]];
}

extern const MCRegisterDesc MSP430RegDesc[];
extern const MCPhysReg MSP430RegDiffLists[];
extern const LaneBitmask MSP430LaneMaskLists[];
extern const char MSP430RegStrings[];
extern const char MSP430RegClassStrings[];
extern const MCPhysReg MSP430RegUnitRoots[][2];
extern const uint16_t MSP430SubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits MSP430SubRegIdxRanges[];
extern const uint16_t MSP430RegEncodingTable[];
// MSP430 Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair MSP430DwarfFlavour0Dwarf2L[];
extern const unsigned MSP430DwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair MSP430EHFlavour0Dwarf2L[];
extern const unsigned MSP430EHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair MSP430DwarfFlavour0L2Dwarf[];
extern const unsigned MSP430DwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair MSP430EHFlavour0L2Dwarf[];
extern const unsigned MSP430EHFlavour0L2DwarfSize;

MSP430GenRegisterInfo::
MSP430GenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour,
      unsigned PC, unsigned HwMode)
  : TargetRegisterInfo(&MSP430RegInfoDesc, RegisterClasses, RegisterClasses+2,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable,
             LaneBitmask(0xFFFFFFFFFFFFFFFE), RegClassInfos, HwMode) {
  InitMCRegisterInfo(MSP430RegDesc, 33, RA, PC,
                     MSP430MCRegisterClasses, 2,
                     MSP430RegUnitRoots,
                     16,
                     MSP430RegDiffLists,
                     MSP430LaneMaskLists,
                     MSP430RegStrings,
                     MSP430RegClassStrings,
                     MSP430SubRegIdxLists,
                     2,
                     MSP430SubRegIdxRanges,
                     MSP430RegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(MSP430DwarfFlavour0Dwarf2L, MSP430DwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(MSP430EHFlavour0Dwarf2L, MSP430EHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(MSP430DwarfFlavour0L2Dwarf, MSP430DwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(MSP430EHFlavour0L2Dwarf, MSP430EHFlavour0L2DwarfSize, true);
    break;
  }
}



ArrayRef<const uint32_t *> MSP430GenRegisterInfo::getRegMasks() const {
  return None;
}

bool MSP430GenRegisterInfo::
isGeneralPurposeRegister(const MachineFunction &MF, MCRegister PhysReg) const {
  return
      false;
}

bool MSP430GenRegisterInfo::
isFixedRegister(const MachineFunction &MF, MCRegister PhysReg) const {
  return
      false;
}

bool MSP430GenRegisterInfo::
isArgumentRegister(const MachineFunction &MF, MCRegister PhysReg) const {
  return
      false;
}

ArrayRef<const char *> MSP430GenRegisterInfo::getRegMaskNames() const {
  return None;
}

const MSP430FrameLowering *
MSP430GenRegisterInfo::getFrameLowering(const MachineFunction &MF) {
  return static_cast<const MSP430FrameLowering *>(
      MF.getSubtarget().getFrameLowering());
}

} // end namespace llvm

#endif // GET_REGINFO_TARGET_DESC

