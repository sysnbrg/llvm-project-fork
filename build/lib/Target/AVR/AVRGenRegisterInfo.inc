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
extern const MCRegisterClass AVRMCRegisterClasses[];

namespace AVR {
enum {
  NoRegister,
  SP = 1,
  SPH = 2,
  SPL = 3,
  SREG = 4,
  R0 = 5,
  R1 = 6,
  R2 = 7,
  R3 = 8,
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
  R16 = 21,
  R17 = 22,
  R18 = 23,
  R19 = 24,
  R20 = 25,
  R21 = 26,
  R22 = 27,
  R23 = 28,
  R24 = 29,
  R25 = 30,
  R26 = 31,
  R27 = 32,
  R28 = 33,
  R29 = 34,
  R30 = 35,
  R31 = 36,
  R1R0 = 37,
  R3R2 = 38,
  R5R4 = 39,
  R7R6 = 40,
  R9R8 = 41,
  R10R9 = 42,
  R11R10 = 43,
  R12R11 = 44,
  R13R12 = 45,
  R14R13 = 46,
  R15R14 = 47,
  R16R15 = 48,
  R17R16 = 49,
  R18R17 = 50,
  R19R18 = 51,
  R20R19 = 52,
  R21R20 = 53,
  R22R21 = 54,
  R23R22 = 55,
  R24R23 = 56,
  R25R24 = 57,
  R26R25 = 58,
  R27R26 = 59,
  R29R28 = 60,
  R31R30 = 61,
  NUM_TARGET_REGS // 62
};
} // end namespace AVR

// Register classes

namespace AVR {
enum {
  GPR8RegClassID = 0,
  GPR8loRegClassID = 1,
  LD8RegClassID = 2,
  LD8loRegClassID = 3,
  CCRRegClassID = 4,
  DREGSRegClassID = 5,
  DREGSMOVWRegClassID = 6,
  DREGS_with_sub_hi_in_LD8RegClassID = 7,
  DREGS_with_sub_lo_in_LD8RegClassID = 8,
  DREGS_with_sub_lo_in_GPR8loRegClassID = 9,
  DREGS_with_sub_hi_in_GPR8loRegClassID = 10,
  DLDREGSRegClassID = 11,
  DREGS_with_sub_hi_in_LD8loRegClassID = 12,
  DREGS_with_sub_lo_in_LD8loRegClassID = 13,
  DREGSloRegClassID = 14,
  DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8RegClassID = 15,
  DREGSLD8loRegClassID = 16,
  IWREGSRegClassID = 17,
  PTRREGSRegClassID = 18,
  PTRDISPREGSRegClassID = 19,
  DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loRegClassID = 20,
  GPRSPRegClassID = 21,
  ZREGRegClassID = 22,

};
} // end namespace AVR


// Register alternate name indices

namespace AVR {
enum {
  NoRegAltName,	// 0
  ptr,	// 1
  NUM_TARGET_REG_ALT_NAMES = 2
};
} // end namespace AVR


// Subregister indices

namespace AVR {
enum : uint16_t {
  NoSubRegister,
  sub_hi,	// 1
  sub_lo,	// 2
  NUM_TARGET_SUBREGS
};
} // end namespace AVR

// Register pressure sets enum.
namespace AVR {
enum RegisterPressureSets {
  CCR = 0,
  DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo = 1,
  GPRSP = 2,
  IWREGS = 3,
  LD8lo = 4,
  LD8 = 5,
  GPR8lo = 6,
  GPR8lo_with_LD8lo = 7,
  GPR8 = 8,
};
} // end namespace AVR

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

extern const MCPhysReg AVRRegDiffLists[] = {
  /* 0 */ 0, 1, 0,
  /* 3 */ 27, 1, 0,
  /* 6 */ 65447, 1, 0,
  /* 9 */ 65465, 1, 0,
  /* 12 */ 65504, 1, 0,
  /* 15 */ 65505, 1, 0,
  /* 18 */ 65506, 1, 0,
  /* 21 */ 65507, 1, 0,
  /* 24 */ 65508, 1, 0,
  /* 27 */ 65509, 1, 0,
  /* 30 */ 65510, 1, 0,
  /* 33 */ 25, 0,
  /* 35 */ 26, 0,
  /* 37 */ 27, 0,
  /* 39 */ 28, 0,
  /* 41 */ 29, 0,
  /* 43 */ 30, 0,
  /* 45 */ 31, 0,
  /* 47 */ 32, 0,
  /* 49 */ 65530, 0,
  /* 51 */ 65534, 0,
  /* 53 */ 2, 65535, 0,
};

extern const LaneBitmask AVRLaneMaskLists[] = {
  /* 0 */ LaneBitmask(0x0000000000000000), LaneBitmask::getAll(),
  /* 2 */ LaneBitmask(0x0000000000000002), LaneBitmask(0x0000000000000001), LaneBitmask::getAll(),
};

extern const uint16_t AVRSubRegIdxLists[] = {
  /* 0 */ 2, 1, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits AVRSubRegIdxRanges[] = {
  { 65535, 65535 },
  { 8, 8 },	// sub_hi
  { 0, 8 },	// sub_lo
};

extern const char AVRRegStrings[] = {
  /* 0 */ 'R', '1', '1', 'R', '1', '0', 0,
  /* 7 */ 'R', '2', '1', 'R', '2', '0', 0,
  /* 14 */ 'R', '3', '1', 'R', '3', '0', 0,
  /* 21 */ 'R', '1', 'R', '0', 0,
  /* 26 */ 'R', '1', '2', 'R', '1', '1', 0,
  /* 33 */ 'R', '2', '2', 'R', '2', '1', 0,
  /* 40 */ 'R', '3', '1', 0,
  /* 44 */ 'R', '1', 0,
  /* 47 */ 'R', '1', '3', 'R', '1', '2', 0,
  /* 54 */ 'R', '2', '3', 'R', '2', '2', 0,
  /* 61 */ 'R', '3', 'R', '2', 0,
  /* 66 */ 'R', '1', '4', 'R', '1', '3', 0,
  /* 73 */ 'R', '2', '4', 'R', '2', '3', 0,
  /* 80 */ 'R', '3', 0,
  /* 83 */ 'R', '1', '5', 'R', '1', '4', 0,
  /* 90 */ 'R', '2', '5', 'R', '2', '4', 0,
  /* 97 */ 'R', '5', 'R', '4', 0,
  /* 102 */ 'R', '1', '6', 'R', '1', '5', 0,
  /* 109 */ 'R', '2', '6', 'R', '2', '5', 0,
  /* 116 */ 'R', '5', 0,
  /* 119 */ 'R', '1', '7', 'R', '1', '6', 0,
  /* 126 */ 'R', '2', '7', 'R', '2', '6', 0,
  /* 133 */ 'R', '7', 'R', '6', 0,
  /* 138 */ 'R', '1', '8', 'R', '1', '7', 0,
  /* 145 */ 'R', '2', '7', 0,
  /* 149 */ 'R', '7', 0,
  /* 152 */ 'R', '1', '9', 'R', '1', '8', 0,
  /* 159 */ 'R', '2', '9', 'R', '2', '8', 0,
  /* 166 */ 'R', '9', 'R', '8', 0,
  /* 171 */ 'R', '2', '0', 'R', '1', '9', 0,
  /* 178 */ 'R', '2', '9', 0,
  /* 182 */ 'R', '1', '0', 'R', '9', 0,
  /* 188 */ 'S', 'R', 'E', 'G', 0,
  /* 193 */ 'S', 'P', 'H', 0,
  /* 197 */ 'S', 'P', 'L', 0,
  /* 201 */ 'S', 'P', 0,
  0
};

extern const MCRegisterDesc AVRRegDesc[] = { // Descriptors
  { 6, 0, 0, 0, 0, 0 },
  { 201, 53, 2, 0, 0, 2 },
  { 193, 2, 54, 2, 16, 0 },
  { 197, 2, 51, 2, 786, 0 },
  { 188, 2, 2, 2, 817, 0 },
  { 23, 2, 47, 2, 817, 0 },
  { 44, 2, 45, 2, 817, 0 },
  { 63, 2, 45, 2, 817, 0 },
  { 80, 2, 43, 2, 817, 0 },
  { 99, 2, 43, 2, 817, 0 },
  { 116, 2, 41, 2, 817, 0 },
  { 135, 2, 41, 2, 817, 0 },
  { 149, 2, 39, 2, 817, 0 },
  { 168, 2, 39, 2, 817, 0 },
  { 185, 2, 3, 2, 817, 0 },
  { 3, 2, 3, 2, 817, 0 },
  { 29, 2, 3, 2, 817, 0 },
  { 50, 2, 3, 2, 817, 0 },
  { 69, 2, 3, 2, 817, 0 },
  { 86, 2, 3, 2, 817, 0 },
  { 105, 2, 3, 2, 817, 0 },
  { 122, 2, 3, 2, 817, 0 },
  { 141, 2, 3, 2, 817, 0 },
  { 155, 2, 3, 2, 817, 0 },
  { 174, 2, 3, 2, 817, 0 },
  { 10, 2, 3, 2, 817, 0 },
  { 36, 2, 3, 2, 817, 0 },
  { 57, 2, 3, 2, 817, 0 },
  { 76, 2, 3, 2, 817, 0 },
  { 93, 2, 3, 2, 817, 0 },
  { 112, 2, 3, 2, 817, 0 },
  { 129, 2, 3, 2, 817, 0 },
  { 145, 2, 37, 2, 817, 0 },
  { 162, 2, 37, 2, 817, 0 },
  { 178, 2, 35, 2, 817, 0 },
  { 17, 2, 35, 2, 817, 0 },
  { 40, 2, 33, 2, 817, 0 },
  { 21, 12, 2, 0, 146, 2 },
  { 61, 15, 2, 0, 146, 2 },
  { 97, 18, 2, 0, 146, 2 },
  { 133, 21, 2, 0, 146, 2 },
  { 166, 24, 2, 0, 289, 2 },
  { 182, 24, 2, 0, 289, 2 },
  { 0, 24, 2, 0, 289, 2 },
  { 26, 24, 2, 0, 289, 2 },
  { 47, 24, 2, 0, 289, 2 },
  { 66, 24, 2, 0, 289, 2 },
  { 83, 24, 2, 0, 289, 2 },
  { 102, 24, 2, 0, 289, 2 },
  { 119, 24, 2, 0, 289, 2 },
  { 138, 24, 2, 0, 289, 2 },
  { 152, 24, 2, 0, 289, 2 },
  { 171, 24, 2, 0, 289, 2 },
  { 7, 24, 2, 0, 289, 2 },
  { 33, 24, 2, 0, 289, 2 },
  { 54, 24, 2, 0, 289, 2 },
  { 73, 24, 2, 0, 289, 2 },
  { 90, 24, 2, 0, 289, 2 },
  { 109, 24, 2, 0, 289, 2 },
  { 126, 24, 2, 0, 289, 2 },
  { 159, 27, 2, 0, 98, 2 },
  { 14, 30, 2, 0, 98, 2 },
};

extern const MCPhysReg AVRRegUnitRoots[][2] = {
  { AVR::SPL },
  { AVR::SPH },
  { AVR::SREG },
  { AVR::R0 },
  { AVR::R1 },
  { AVR::R2 },
  { AVR::R3 },
  { AVR::R4 },
  { AVR::R5 },
  { AVR::R6 },
  { AVR::R7 },
  { AVR::R8 },
  { AVR::R9 },
  { AVR::R10 },
  { AVR::R11 },
  { AVR::R12 },
  { AVR::R13 },
  { AVR::R14 },
  { AVR::R15 },
  { AVR::R16 },
  { AVR::R17 },
  { AVR::R18 },
  { AVR::R19 },
  { AVR::R20 },
  { AVR::R21 },
  { AVR::R22 },
  { AVR::R23 },
  { AVR::R24 },
  { AVR::R25 },
  { AVR::R26 },
  { AVR::R27 },
  { AVR::R28 },
  { AVR::R29 },
  { AVR::R30 },
  { AVR::R31 },
};

namespace {     // Register classes...
  // GPR8 Register Class...
  const MCPhysReg GPR8[] = {
    AVR::R24, AVR::R25, AVR::R18, AVR::R19, AVR::R20, AVR::R21, AVR::R22, AVR::R23, AVR::R30, AVR::R31, AVR::R26, AVR::R27, AVR::R28, AVR::R29, AVR::R17, AVR::R16, AVR::R15, AVR::R14, AVR::R13, AVR::R12, AVR::R11, AVR::R10, AVR::R9, AVR::R8, AVR::R7, AVR::R6, AVR::R5, AVR::R4, AVR::R3, AVR::R2, AVR::R0, AVR::R1, 
  };

  // GPR8 Bit set.
  const uint8_t GPR8Bits[] = {
    0xe0, 0xff, 0xff, 0xff, 0x1f, 
  };

  // GPR8lo Register Class...
  const MCPhysReg GPR8lo[] = {
    AVR::R15, AVR::R14, AVR::R13, AVR::R12, AVR::R11, AVR::R10, AVR::R9, AVR::R8, AVR::R7, AVR::R6, AVR::R5, AVR::R4, AVR::R3, AVR::R2, AVR::R0, AVR::R1, 
  };

  // GPR8lo Bit set.
  const uint8_t GPR8loBits[] = {
    0xe0, 0xff, 0x1f, 
  };

  // LD8 Register Class...
  const MCPhysReg LD8[] = {
    AVR::R24, AVR::R25, AVR::R18, AVR::R19, AVR::R20, AVR::R21, AVR::R22, AVR::R23, AVR::R30, AVR::R31, AVR::R26, AVR::R27, AVR::R28, AVR::R29, AVR::R17, AVR::R16, 
  };

  // LD8 Bit set.
  const uint8_t LD8Bits[] = {
    0x00, 0x00, 0xe0, 0xff, 0x1f, 
  };

  // LD8lo Register Class...
  const MCPhysReg LD8lo[] = {
    AVR::R23, AVR::R22, AVR::R21, AVR::R20, AVR::R19, AVR::R18, AVR::R17, AVR::R16, 
  };

  // LD8lo Bit set.
  const uint8_t LD8loBits[] = {
    0x00, 0x00, 0xe0, 0x1f, 
  };

  // CCR Register Class...
  const MCPhysReg CCR[] = {
    AVR::SREG, 
  };

  // CCR Bit set.
  const uint8_t CCRBits[] = {
    0x10, 
  };

  // DREGS Register Class...
  const MCPhysReg DREGS[] = {
    AVR::R25R24, AVR::R19R18, AVR::R21R20, AVR::R23R22, AVR::R31R30, AVR::R27R26, AVR::R29R28, AVR::R17R16, AVR::R15R14, AVR::R13R12, AVR::R11R10, AVR::R9R8, AVR::R7R6, AVR::R5R4, AVR::R3R2, AVR::R1R0, AVR::R26R25, AVR::R24R23, AVR::R22R21, AVR::R20R19, AVR::R18R17, AVR::R16R15, AVR::R14R13, AVR::R12R11, AVR::R10R9, 
  };

  // DREGS Bit set.
  const uint8_t DREGSBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0x3f, 
  };

  // DREGSMOVW Register Class...
  const MCPhysReg DREGSMOVW[] = {
    AVR::R25R24, AVR::R19R18, AVR::R21R20, AVR::R23R22, AVR::R31R30, AVR::R27R26, AVR::R29R28, AVR::R17R16, AVR::R15R14, AVR::R13R12, AVR::R11R10, AVR::R9R8, AVR::R7R6, AVR::R5R4, AVR::R3R2, AVR::R1R0, 
  };

  // DREGSMOVW Bit set.
  const uint8_t DREGSMOVWBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xe0, 0xab, 0xaa, 0x3a, 
  };

  // DREGS_with_sub_hi_in_LD8 Register Class...
  const MCPhysReg DREGS_with_sub_hi_in_LD8[] = {
    AVR::R25R24, AVR::R19R18, AVR::R21R20, AVR::R23R22, AVR::R31R30, AVR::R27R26, AVR::R29R28, AVR::R17R16, AVR::R26R25, AVR::R24R23, AVR::R22R21, AVR::R20R19, AVR::R18R17, AVR::R16R15, 
  };

  // DREGS_with_sub_hi_in_LD8 Bit set.
  const uint8_t DREGS_with_sub_hi_in_LD8Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x3f, 
  };

  // DREGS_with_sub_lo_in_LD8 Register Class...
  const MCPhysReg DREGS_with_sub_lo_in_LD8[] = {
    AVR::R25R24, AVR::R19R18, AVR::R21R20, AVR::R23R22, AVR::R31R30, AVR::R27R26, AVR::R29R28, AVR::R17R16, AVR::R26R25, AVR::R24R23, AVR::R22R21, AVR::R20R19, AVR::R18R17, 
  };

  // DREGS_with_sub_lo_in_LD8 Bit set.
  const uint8_t DREGS_with_sub_lo_in_LD8Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x3f, 
  };

  // DREGS_with_sub_lo_in_GPR8lo Register Class...
  const MCPhysReg DREGS_with_sub_lo_in_GPR8lo[] = {
    AVR::R15R14, AVR::R13R12, AVR::R11R10, AVR::R9R8, AVR::R7R6, AVR::R5R4, AVR::R3R2, AVR::R1R0, AVR::R16R15, AVR::R14R13, AVR::R12R11, AVR::R10R9, 
  };

  // DREGS_with_sub_lo_in_GPR8lo Bit set.
  const uint8_t DREGS_with_sub_lo_in_GPR8loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0x01, 
  };

  // DREGS_with_sub_hi_in_GPR8lo Register Class...
  const MCPhysReg DREGS_with_sub_hi_in_GPR8lo[] = {
    AVR::R15R14, AVR::R13R12, AVR::R11R10, AVR::R9R8, AVR::R7R6, AVR::R5R4, AVR::R3R2, AVR::R1R0, AVR::R14R13, AVR::R12R11, AVR::R10R9, 
  };

  // DREGS_with_sub_hi_in_GPR8lo Bit set.
  const uint8_t DREGS_with_sub_hi_in_GPR8loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 
  };

  // DLDREGS Register Class...
  const MCPhysReg DLDREGS[] = {
    AVR::R25R24, AVR::R19R18, AVR::R21R20, AVR::R23R22, AVR::R31R30, AVR::R27R26, AVR::R29R28, AVR::R17R16, 
  };

  // DLDREGS Bit set.
  const uint8_t DLDREGSBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0x3a, 
  };

  // DREGS_with_sub_hi_in_LD8lo Register Class...
  const MCPhysReg DREGS_with_sub_hi_in_LD8lo[] = {
    AVR::R19R18, AVR::R21R20, AVR::R23R22, AVR::R17R16, AVR::R22R21, AVR::R20R19, AVR::R18R17, AVR::R16R15, 
  };

  // DREGS_with_sub_hi_in_LD8lo Bit set.
  const uint8_t DREGS_with_sub_hi_in_LD8loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

  // DREGS_with_sub_lo_in_LD8lo Register Class...
  const MCPhysReg DREGS_with_sub_lo_in_LD8lo[] = {
    AVR::R19R18, AVR::R21R20, AVR::R23R22, AVR::R17R16, AVR::R24R23, AVR::R22R21, AVR::R20R19, AVR::R18R17, 
  };

  // DREGS_with_sub_lo_in_LD8lo Bit set.
  const uint8_t DREGS_with_sub_lo_in_LD8loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x01, 
  };

  // DREGSlo Register Class...
  const MCPhysReg DREGSlo[] = {
    AVR::R15R14, AVR::R13R12, AVR::R11R10, AVR::R9R8, AVR::R7R6, AVR::R5R4, AVR::R3R2, AVR::R1R0, 
  };

  // DREGSlo Bit set.
  const uint8_t DREGSloBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xe0, 0xab, 
  };

  // DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8 Register Class...
  const MCPhysReg DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8[] = {
    AVR::R19R18, AVR::R21R20, AVR::R23R22, AVR::R17R16, AVR::R22R21, AVR::R20R19, AVR::R18R17, 
  };

  // DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8 Bit set.
  const uint8_t DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 
  };

  // DREGSLD8lo Register Class...
  const MCPhysReg DREGSLD8lo[] = {
    AVR::R19R18, AVR::R21R20, AVR::R23R22, AVR::R17R16, 
  };

  // DREGSLD8lo Bit set.
  const uint8_t DREGSLD8loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 
  };

  // IWREGS Register Class...
  const MCPhysReg IWREGS[] = {
    AVR::R25R24, AVR::R31R30, AVR::R27R26, AVR::R29R28, 
  };

  // IWREGS Bit set.
  const uint8_t IWREGSBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 
  };

  // PTRREGS Register Class...
  const MCPhysReg PTRREGS[] = {
    AVR::R27R26, AVR::R29R28, AVR::R31R30, 
  };

  // PTRREGS Bit set.
  const uint8_t PTRREGSBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 
  };

  // PTRDISPREGS Register Class...
  const MCPhysReg PTRDISPREGS[] = {
    AVR::R31R30, AVR::R29R28, 
  };

  // PTRDISPREGS Bit set.
  const uint8_t PTRDISPREGSBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 
  };

  // DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo Register Class...
  const MCPhysReg DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo[] = {
    AVR::R16R15, 
  };

  // DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo Bit set.
  const uint8_t DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
  };

  // GPRSP Register Class...
  const MCPhysReg GPRSP[] = {
    AVR::SP, 
  };

  // GPRSP Bit set.
  const uint8_t GPRSPBits[] = {
    0x02, 
  };

  // ZREG Register Class...
  const MCPhysReg ZREG[] = {
    AVR::R31R30, 
  };

  // ZREG Bit set.
  const uint8_t ZREGBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 
  };

} // end anonymous namespace

extern const char AVRRegClassStrings[] = {
  /* 0 */ 'D', 'R', 'E', 'G', 'S', '_', 'w', 'i', 't', 'h', '_', 's', 'u', 'b', '_', 'h', 'i', '_', 'i', 'n', '_', 'L', 'D', '8', 0,
  /* 25 */ 'D', 'R', 'E', 'G', 'S', '_', 'w', 'i', 't', 'h', '_', 's', 'u', 'b', '_', 'h', 'i', '_', 'i', 'n', '_', 'L', 'D', '8', 'l', 'o', '_', 'a', 'n', 'd', '_', 'D', 'R', 'E', 'G', 'S', '_', 'w', 'i', 't', 'h', '_', 's', 'u', 'b', '_', 'l', 'o', '_', 'i', 'n', '_', 'L', 'D', '8', 0,
  /* 81 */ 'G', 'P', 'R', '8', 0,
  /* 86 */ 'Z', 'R', 'E', 'G', 0,
  /* 91 */ 'G', 'P', 'R', 'S', 'P', 0,
  /* 97 */ 'C', 'C', 'R', 0,
  /* 101 */ 'D', 'L', 'D', 'R', 'E', 'G', 'S', 0,
  /* 109 */ 'P', 'T', 'R', 'D', 'I', 'S', 'P', 'R', 'E', 'G', 'S', 0,
  /* 121 */ 'P', 'T', 'R', 'R', 'E', 'G', 'S', 0,
  /* 129 */ 'I', 'W', 'R', 'E', 'G', 'S', 0,
  /* 136 */ 'D', 'R', 'E', 'G', 'S', 'M', 'O', 'V', 'W', 0,
  /* 146 */ 'D', 'R', 'E', 'G', 'S', 'L', 'D', '8', 'l', 'o', 0,
  /* 157 */ 'D', 'R', 'E', 'G', 'S', '_', 'w', 'i', 't', 'h', '_', 's', 'u', 'b', '_', 'h', 'i', '_', 'i', 'n', '_', 'L', 'D', '8', 'l', 'o', 0,
  /* 184 */ 'D', 'R', 'E', 'G', 'S', '_', 'w', 'i', 't', 'h', '_', 's', 'u', 'b', '_', 'l', 'o', '_', 'i', 'n', '_', 'L', 'D', '8', 'l', 'o', 0,
  /* 211 */ 'D', 'R', 'E', 'G', 'S', '_', 'w', 'i', 't', 'h', '_', 's', 'u', 'b', '_', 'h', 'i', '_', 'i', 'n', '_', 'G', 'P', 'R', '8', 'l', 'o', 0,
  /* 239 */ 'D', 'R', 'E', 'G', 'S', '_', 'w', 'i', 't', 'h', '_', 's', 'u', 'b', '_', 'h', 'i', '_', 'i', 'n', '_', 'L', 'D', '8', '_', 'a', 'n', 'd', '_', 'D', 'R', 'E', 'G', 'S', '_', 'w', 'i', 't', 'h', '_', 's', 'u', 'b', '_', 'l', 'o', '_', 'i', 'n', '_', 'G', 'P', 'R', '8', 'l', 'o', 0,
  /* 296 */ 'D', 'R', 'E', 'G', 'S', 'l', 'o', 0,
  0
};

extern const MCRegisterClass AVRMCRegisterClasses[] = {
  { GPR8, GPR8Bits, 81, 32, sizeof(GPR8Bits), AVR::GPR8RegClassID, 8, 1, true },
  { GPR8lo, GPR8loBits, 232, 16, sizeof(GPR8loBits), AVR::GPR8loRegClassID, 8, 1, true },
  { LD8, LD8Bits, 21, 16, sizeof(LD8Bits), AVR::LD8RegClassID, 8, 1, true },
  { LD8lo, LD8loBits, 151, 8, sizeof(LD8loBits), AVR::LD8loRegClassID, 8, 1, true },
  { CCR, CCRBits, 97, 1, sizeof(CCRBits), AVR::CCRRegClassID, 8, -1, true },
  { DREGS, DREGSBits, 103, 25, sizeof(DREGSBits), AVR::DREGSRegClassID, 16, 1, true },
  { DREGSMOVW, DREGSMOVWBits, 136, 16, sizeof(DREGSMOVWBits), AVR::DREGSMOVWRegClassID, 16, 1, true },
  { DREGS_with_sub_hi_in_LD8, DREGS_with_sub_hi_in_LD8Bits, 0, 14, sizeof(DREGS_with_sub_hi_in_LD8Bits), AVR::DREGS_with_sub_hi_in_LD8RegClassID, 16, 1, true },
  { DREGS_with_sub_lo_in_LD8, DREGS_with_sub_lo_in_LD8Bits, 56, 13, sizeof(DREGS_with_sub_lo_in_LD8Bits), AVR::DREGS_with_sub_lo_in_LD8RegClassID, 16, 1, true },
  { DREGS_with_sub_lo_in_GPR8lo, DREGS_with_sub_lo_in_GPR8loBits, 268, 12, sizeof(DREGS_with_sub_lo_in_GPR8loBits), AVR::DREGS_with_sub_lo_in_GPR8loRegClassID, 16, 1, true },
  { DREGS_with_sub_hi_in_GPR8lo, DREGS_with_sub_hi_in_GPR8loBits, 211, 11, sizeof(DREGS_with_sub_hi_in_GPR8loBits), AVR::DREGS_with_sub_hi_in_GPR8loRegClassID, 16, 1, true },
  { DLDREGS, DLDREGSBits, 101, 8, sizeof(DLDREGSBits), AVR::DLDREGSRegClassID, 16, 1, true },
  { DREGS_with_sub_hi_in_LD8lo, DREGS_with_sub_hi_in_LD8loBits, 157, 8, sizeof(DREGS_with_sub_hi_in_LD8loBits), AVR::DREGS_with_sub_hi_in_LD8loRegClassID, 16, 1, true },
  { DREGS_with_sub_lo_in_LD8lo, DREGS_with_sub_lo_in_LD8loBits, 184, 8, sizeof(DREGS_with_sub_lo_in_LD8loBits), AVR::DREGS_with_sub_lo_in_LD8loRegClassID, 16, 1, true },
  { DREGSlo, DREGSloBits, 296, 8, sizeof(DREGSloBits), AVR::DREGSloRegClassID, 16, 1, true },
  { DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8, DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8Bits, 25, 7, sizeof(DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8Bits), AVR::DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8RegClassID, 16, 1, true },
  { DREGSLD8lo, DREGSLD8loBits, 146, 4, sizeof(DREGSLD8loBits), AVR::DREGSLD8loRegClassID, 16, 1, true },
  { IWREGS, IWREGSBits, 129, 4, sizeof(IWREGSBits), AVR::IWREGSRegClassID, 16, 1, true },
  { PTRREGS, PTRREGSBits, 121, 3, sizeof(PTRREGSBits), AVR::PTRREGSRegClassID, 16, 1, true },
  { PTRDISPREGS, PTRDISPREGSBits, 109, 2, sizeof(PTRDISPREGSBits), AVR::PTRDISPREGSRegClassID, 16, 1, true },
  { DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo, DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loBits, 239, 1, sizeof(DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loBits), AVR::DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loRegClassID, 16, 1, true },
  { GPRSP, GPRSPBits, 91, 1, sizeof(GPRSPBits), AVR::GPRSPRegClassID, 16, 1, true },
  { ZREG, ZREGBits, 86, 1, sizeof(ZREGBits), AVR::ZREGRegClassID, 16, 1, true },
};

// AVR Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair AVRDwarfFlavour0Dwarf2L[] = {
  { 0U, AVR::R1R0 },
  { 1U, AVR::R1 },
  { 2U, AVR::R3R2 },
  { 3U, AVR::R3 },
  { 4U, AVR::R5R4 },
  { 5U, AVR::R5 },
  { 6U, AVR::R7R6 },
  { 7U, AVR::R7 },
  { 8U, AVR::R9R8 },
  { 9U, AVR::R10R9 },
  { 10U, AVR::R11R10 },
  { 11U, AVR::R12R11 },
  { 12U, AVR::R13R12 },
  { 13U, AVR::R14R13 },
  { 14U, AVR::R15R14 },
  { 15U, AVR::R16R15 },
  { 16U, AVR::R17R16 },
  { 17U, AVR::R18R17 },
  { 18U, AVR::R19R18 },
  { 19U, AVR::R20R19 },
  { 20U, AVR::R21R20 },
  { 21U, AVR::R22R21 },
  { 22U, AVR::R23R22 },
  { 23U, AVR::R24R23 },
  { 24U, AVR::R25R24 },
  { 25U, AVR::R26R25 },
  { 26U, AVR::R27R26 },
  { 27U, AVR::R27 },
  { 28U, AVR::R29R28 },
  { 29U, AVR::R29 },
  { 30U, AVR::R31R30 },
  { 31U, AVR::R31 },
  { 32U, AVR::SPL },
  { 33U, AVR::SPH },
  { 88U, AVR::SREG },
};
extern const unsigned AVRDwarfFlavour0Dwarf2LSize = array_lengthof(AVRDwarfFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair AVREHFlavour0Dwarf2L[] = {
  { 0U, AVR::R1R0 },
  { 1U, AVR::R1 },
  { 2U, AVR::R3R2 },
  { 3U, AVR::R3 },
  { 4U, AVR::R5R4 },
  { 5U, AVR::R5 },
  { 6U, AVR::R7R6 },
  { 7U, AVR::R7 },
  { 8U, AVR::R9R8 },
  { 9U, AVR::R10R9 },
  { 10U, AVR::R11R10 },
  { 11U, AVR::R12R11 },
  { 12U, AVR::R13R12 },
  { 13U, AVR::R14R13 },
  { 14U, AVR::R15R14 },
  { 15U, AVR::R16R15 },
  { 16U, AVR::R17R16 },
  { 17U, AVR::R18R17 },
  { 18U, AVR::R19R18 },
  { 19U, AVR::R20R19 },
  { 20U, AVR::R21R20 },
  { 21U, AVR::R22R21 },
  { 22U, AVR::R23R22 },
  { 23U, AVR::R24R23 },
  { 24U, AVR::R25R24 },
  { 25U, AVR::R26R25 },
  { 26U, AVR::R27R26 },
  { 27U, AVR::R27 },
  { 28U, AVR::R29R28 },
  { 29U, AVR::R29 },
  { 30U, AVR::R31R30 },
  { 31U, AVR::R31 },
  { 32U, AVR::SPL },
  { 33U, AVR::SPH },
  { 88U, AVR::SREG },
};
extern const unsigned AVREHFlavour0Dwarf2LSize = array_lengthof(AVREHFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair AVRDwarfFlavour0L2Dwarf[] = {
  { AVR::SP, 32U },
  { AVR::SPH, 33U },
  { AVR::SPL, 32U },
  { AVR::SREG, 88U },
  { AVR::R0, 0U },
  { AVR::R1, 1U },
  { AVR::R2, 2U },
  { AVR::R3, 3U },
  { AVR::R4, 4U },
  { AVR::R5, 5U },
  { AVR::R6, 6U },
  { AVR::R7, 7U },
  { AVR::R8, 8U },
  { AVR::R9, 9U },
  { AVR::R10, 10U },
  { AVR::R11, 11U },
  { AVR::R12, 12U },
  { AVR::R13, 13U },
  { AVR::R14, 14U },
  { AVR::R15, 15U },
  { AVR::R16, 16U },
  { AVR::R17, 17U },
  { AVR::R18, 18U },
  { AVR::R19, 19U },
  { AVR::R20, 20U },
  { AVR::R21, 21U },
  { AVR::R22, 22U },
  { AVR::R23, 23U },
  { AVR::R24, 24U },
  { AVR::R25, 25U },
  { AVR::R26, 26U },
  { AVR::R27, 27U },
  { AVR::R28, 28U },
  { AVR::R29, 29U },
  { AVR::R30, 30U },
  { AVR::R31, 31U },
  { AVR::R1R0, 0U },
  { AVR::R3R2, 2U },
  { AVR::R5R4, 4U },
  { AVR::R7R6, 6U },
  { AVR::R9R8, 8U },
  { AVR::R10R9, 9U },
  { AVR::R11R10, 10U },
  { AVR::R12R11, 11U },
  { AVR::R13R12, 12U },
  { AVR::R14R13, 13U },
  { AVR::R15R14, 14U },
  { AVR::R16R15, 15U },
  { AVR::R17R16, 16U },
  { AVR::R18R17, 17U },
  { AVR::R19R18, 18U },
  { AVR::R20R19, 19U },
  { AVR::R21R20, 20U },
  { AVR::R22R21, 21U },
  { AVR::R23R22, 22U },
  { AVR::R24R23, 23U },
  { AVR::R25R24, 24U },
  { AVR::R26R25, 25U },
  { AVR::R27R26, 26U },
  { AVR::R29R28, 28U },
  { AVR::R31R30, 30U },
};
extern const unsigned AVRDwarfFlavour0L2DwarfSize = array_lengthof(AVRDwarfFlavour0L2Dwarf);

extern const MCRegisterInfo::DwarfLLVMRegPair AVREHFlavour0L2Dwarf[] = {
  { AVR::SP, 32U },
  { AVR::SPH, 33U },
  { AVR::SPL, 32U },
  { AVR::SREG, 88U },
  { AVR::R0, 0U },
  { AVR::R1, 1U },
  { AVR::R2, 2U },
  { AVR::R3, 3U },
  { AVR::R4, 4U },
  { AVR::R5, 5U },
  { AVR::R6, 6U },
  { AVR::R7, 7U },
  { AVR::R8, 8U },
  { AVR::R9, 9U },
  { AVR::R10, 10U },
  { AVR::R11, 11U },
  { AVR::R12, 12U },
  { AVR::R13, 13U },
  { AVR::R14, 14U },
  { AVR::R15, 15U },
  { AVR::R16, 16U },
  { AVR::R17, 17U },
  { AVR::R18, 18U },
  { AVR::R19, 19U },
  { AVR::R20, 20U },
  { AVR::R21, 21U },
  { AVR::R22, 22U },
  { AVR::R23, 23U },
  { AVR::R24, 24U },
  { AVR::R25, 25U },
  { AVR::R26, 26U },
  { AVR::R27, 27U },
  { AVR::R28, 28U },
  { AVR::R29, 29U },
  { AVR::R30, 30U },
  { AVR::R31, 31U },
  { AVR::R1R0, 0U },
  { AVR::R3R2, 2U },
  { AVR::R5R4, 4U },
  { AVR::R7R6, 6U },
  { AVR::R9R8, 8U },
  { AVR::R10R9, 9U },
  { AVR::R11R10, 10U },
  { AVR::R12R11, 11U },
  { AVR::R13R12, 12U },
  { AVR::R14R13, 13U },
  { AVR::R15R14, 14U },
  { AVR::R16R15, 15U },
  { AVR::R17R16, 16U },
  { AVR::R18R17, 17U },
  { AVR::R19R18, 18U },
  { AVR::R20R19, 19U },
  { AVR::R21R20, 20U },
  { AVR::R22R21, 21U },
  { AVR::R23R22, 22U },
  { AVR::R24R23, 23U },
  { AVR::R25R24, 24U },
  { AVR::R26R25, 25U },
  { AVR::R27R26, 26U },
  { AVR::R29R28, 28U },
  { AVR::R31R30, 30U },
};
extern const unsigned AVREHFlavour0L2DwarfSize = array_lengthof(AVREHFlavour0L2Dwarf);

extern const uint16_t AVRRegEncodingTable[] = {
  0,
  32,
  33,
  32,
  14,
  0,
  1,
  2,
  3,
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
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  2,
  4,
  6,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  28,
  30,
};
static inline void InitAVRMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(AVRRegDesc, 62, RA, PC, AVRMCRegisterClasses, 23, AVRRegUnitRoots, 35, AVRRegDiffLists, AVRLaneMaskLists, AVRRegStrings, AVRRegClassStrings, AVRSubRegIdxLists, 3,
AVRSubRegIdxRanges, AVRRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(AVRDwarfFlavour0Dwarf2L, AVRDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(AVREHFlavour0Dwarf2L, AVREHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(AVRDwarfFlavour0L2Dwarf, AVRDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(AVREHFlavour0L2Dwarf, AVREHFlavour0L2DwarfSize, true);
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

class AVRFrameLowering;

struct AVRGenRegisterInfo : public TargetRegisterInfo {
  explicit AVRGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0,
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
  static const AVRFrameLowering *getFrameLowering(
      const MachineFunction &MF);
};

namespace AVR { // Register classes
  extern const TargetRegisterClass GPR8RegClass;
  extern const TargetRegisterClass GPR8loRegClass;
  extern const TargetRegisterClass LD8RegClass;
  extern const TargetRegisterClass LD8loRegClass;
  extern const TargetRegisterClass CCRRegClass;
  extern const TargetRegisterClass DREGSRegClass;
  extern const TargetRegisterClass DREGSMOVWRegClass;
  extern const TargetRegisterClass DREGS_with_sub_hi_in_LD8RegClass;
  extern const TargetRegisterClass DREGS_with_sub_lo_in_LD8RegClass;
  extern const TargetRegisterClass DREGS_with_sub_lo_in_GPR8loRegClass;
  extern const TargetRegisterClass DREGS_with_sub_hi_in_GPR8loRegClass;
  extern const TargetRegisterClass DLDREGSRegClass;
  extern const TargetRegisterClass DREGS_with_sub_hi_in_LD8loRegClass;
  extern const TargetRegisterClass DREGS_with_sub_lo_in_LD8loRegClass;
  extern const TargetRegisterClass DREGSloRegClass;
  extern const TargetRegisterClass DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8RegClass;
  extern const TargetRegisterClass DREGSLD8loRegClass;
  extern const TargetRegisterClass IWREGSRegClass;
  extern const TargetRegisterClass PTRREGSRegClass;
  extern const TargetRegisterClass PTRDISPREGSRegClass;
  extern const TargetRegisterClass DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loRegClass;
  extern const TargetRegisterClass GPRSPRegClass;
  extern const TargetRegisterClass ZREGRegClass;
} // end namespace AVR

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

extern const MCRegisterClass AVRMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i8, MVT::Other,
  /* 2 */ MVT::i16, MVT::Other,
};

static const char *SubRegIndexNameTable[] = { "sub_hi", "sub_lo", "" };


static const LaneBitmask SubRegIndexLaneMaskTable[] = {
  LaneBitmask::getAll(),
  LaneBitmask(0x0000000000000001), // sub_hi
  LaneBitmask(0x0000000000000002), // sub_lo
 };



static const TargetRegisterInfo::RegClassInfo RegClassInfos[] = {
  // Mode = 0 (Default)
  { 8, 8, 8, VTLists+0 },    // GPR8
  { 8, 8, 8, VTLists+0 },    // GPR8lo
  { 8, 8, 8, VTLists+0 },    // LD8
  { 8, 8, 8, VTLists+0 },    // LD8lo
  { 8, 8, 8, VTLists+0 },    // CCR
  { 16, 16, 8, VTLists+2 },    // DREGS
  { 16, 16, 8, VTLists+2 },    // DREGSMOVW
  { 16, 16, 8, VTLists+2 },    // DREGS_with_sub_hi_in_LD8
  { 16, 16, 8, VTLists+2 },    // DREGS_with_sub_lo_in_LD8
  { 16, 16, 8, VTLists+2 },    // DREGS_with_sub_lo_in_GPR8lo
  { 16, 16, 8, VTLists+2 },    // DREGS_with_sub_hi_in_GPR8lo
  { 16, 16, 8, VTLists+2 },    // DLDREGS
  { 16, 16, 8, VTLists+2 },    // DREGS_with_sub_hi_in_LD8lo
  { 16, 16, 8, VTLists+2 },    // DREGS_with_sub_lo_in_LD8lo
  { 16, 16, 8, VTLists+2 },    // DREGSlo
  { 16, 16, 8, VTLists+2 },    // DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8
  { 16, 16, 8, VTLists+2 },    // DREGSLD8lo
  { 16, 16, 8, VTLists+2 },    // IWREGS
  { 16, 16, 8, VTLists+2 },    // PTRREGS
  { 16, 16, 8, VTLists+2 },    // PTRDISPREGS
  { 16, 16, 8, VTLists+2 },    // DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo
  { 16, 16, 8, VTLists+2 },    // GPRSP
  { 16, 16, 8, VTLists+2 },    // ZREG
};

static const TargetRegisterClass *const NullRegClasses[] = { nullptr };

static const uint32_t GPR8SubClassMask[] = {
  0x0000000f, 
  0x005fffe0, // sub_hi
  0x005fffe0, // sub_lo
};

static const uint32_t GPR8loSubClassMask[] = {
  0x00000002, 
  0x00004400, // sub_hi
  0x00104600, // sub_lo
};

static const uint32_t LD8SubClassMask[] = {
  0x0000000c, 
  0x005fb980, // sub_hi
  0x004fa900, // sub_lo
};

static const uint32_t LD8loSubClassMask[] = {
  0x00000008, 
  0x00119000, // sub_hi
  0x0001a000, // sub_lo
};

static const uint32_t CCRSubClassMask[] = {
  0x00000010, 
};

static const uint32_t DREGSSubClassMask[] = {
  0x005fffe0, 
};

static const uint32_t DREGSMOVWSubClassMask[] = {
  0x004f4840, 
};

static const uint32_t DREGS_with_sub_hi_in_LD8SubClassMask[] = {
  0x005fb980, 
};

static const uint32_t DREGS_with_sub_lo_in_LD8SubClassMask[] = {
  0x004fa900, 
};

static const uint32_t DREGS_with_sub_lo_in_GPR8loSubClassMask[] = {
  0x00104600, 
};

static const uint32_t DREGS_with_sub_hi_in_GPR8loSubClassMask[] = {
  0x00004400, 
};

static const uint32_t DLDREGSSubClassMask[] = {
  0x004f0800, 
};

static const uint32_t DREGS_with_sub_hi_in_LD8loSubClassMask[] = {
  0x00119000, 
};

static const uint32_t DREGS_with_sub_lo_in_LD8loSubClassMask[] = {
  0x0001a000, 
};

static const uint32_t DREGSloSubClassMask[] = {
  0x00004000, 
};

static const uint32_t DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8SubClassMask[] = {
  0x00018000, 
};

static const uint32_t DREGSLD8loSubClassMask[] = {
  0x00010000, 
};

static const uint32_t IWREGSSubClassMask[] = {
  0x004e0000, 
};

static const uint32_t PTRREGSSubClassMask[] = {
  0x004c0000, 
};

static const uint32_t PTRDISPREGSSubClassMask[] = {
  0x00480000, 
};

static const uint32_t DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loSubClassMask[] = {
  0x00100000, 
};

static const uint32_t GPRSPSubClassMask[] = {
  0x00200000, 
};

static const uint32_t ZREGSubClassMask[] = {
  0x00400000, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 1, 2, 0,
};

static const TargetRegisterClass *const GPR8loSuperclasses[] = {
  &AVR::GPR8RegClass,
  nullptr
};

static const TargetRegisterClass *const LD8Superclasses[] = {
  &AVR::GPR8RegClass,
  nullptr
};

static const TargetRegisterClass *const LD8loSuperclasses[] = {
  &AVR::GPR8RegClass,
  &AVR::LD8RegClass,
  nullptr
};

static const TargetRegisterClass *const DREGSMOVWSuperclasses[] = {
  &AVR::DREGSRegClass,
  nullptr
};

static const TargetRegisterClass *const DREGS_with_sub_hi_in_LD8Superclasses[] = {
  &AVR::DREGSRegClass,
  nullptr
};

static const TargetRegisterClass *const DREGS_with_sub_lo_in_LD8Superclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  nullptr
};

static const TargetRegisterClass *const DREGS_with_sub_lo_in_GPR8loSuperclasses[] = {
  &AVR::DREGSRegClass,
  nullptr
};

static const TargetRegisterClass *const DREGS_with_sub_hi_in_GPR8loSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGS_with_sub_lo_in_GPR8loRegClass,
  nullptr
};

static const TargetRegisterClass *const DLDREGSSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGSMOVWRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  &AVR::DREGS_with_sub_lo_in_LD8RegClass,
  nullptr
};

static const TargetRegisterClass *const DREGS_with_sub_hi_in_LD8loSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  nullptr
};

static const TargetRegisterClass *const DREGS_with_sub_lo_in_LD8loSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  &AVR::DREGS_with_sub_lo_in_LD8RegClass,
  nullptr
};

static const TargetRegisterClass *const DREGSloSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGSMOVWRegClass,
  &AVR::DREGS_with_sub_lo_in_GPR8loRegClass,
  &AVR::DREGS_with_sub_hi_in_GPR8loRegClass,
  nullptr
};

static const TargetRegisterClass *const DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8Superclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  &AVR::DREGS_with_sub_lo_in_LD8RegClass,
  &AVR::DREGS_with_sub_hi_in_LD8loRegClass,
  &AVR::DREGS_with_sub_lo_in_LD8loRegClass,
  nullptr
};

static const TargetRegisterClass *const DREGSLD8loSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGSMOVWRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  &AVR::DREGS_with_sub_lo_in_LD8RegClass,
  &AVR::DLDREGSRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8loRegClass,
  &AVR::DREGS_with_sub_lo_in_LD8loRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8RegClass,
  nullptr
};

static const TargetRegisterClass *const IWREGSSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGSMOVWRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  &AVR::DREGS_with_sub_lo_in_LD8RegClass,
  &AVR::DLDREGSRegClass,
  nullptr
};

static const TargetRegisterClass *const PTRREGSSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGSMOVWRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  &AVR::DREGS_with_sub_lo_in_LD8RegClass,
  &AVR::DLDREGSRegClass,
  &AVR::IWREGSRegClass,
  nullptr
};

static const TargetRegisterClass *const PTRDISPREGSSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGSMOVWRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  &AVR::DREGS_with_sub_lo_in_LD8RegClass,
  &AVR::DLDREGSRegClass,
  &AVR::IWREGSRegClass,
  &AVR::PTRREGSRegClass,
  nullptr
};

static const TargetRegisterClass *const DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  &AVR::DREGS_with_sub_lo_in_GPR8loRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8loRegClass,
  nullptr
};

static const TargetRegisterClass *const ZREGSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGSMOVWRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  &AVR::DREGS_with_sub_lo_in_LD8RegClass,
  &AVR::DLDREGSRegClass,
  &AVR::IWREGSRegClass,
  &AVR::PTRREGSRegClass,
  &AVR::PTRDISPREGSRegClass,
  nullptr
};


namespace AVR {   // Register class instances
  extern const TargetRegisterClass GPR8RegClass = {
    &AVRMCRegisterClasses[GPR8RegClassID],
    GPR8SubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    0x00, /* TSFlags */
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GPR8loRegClass = {
    &AVRMCRegisterClasses[GPR8loRegClassID],
    GPR8loSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    0x00, /* TSFlags */
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GPR8loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass LD8RegClass = {
    &AVRMCRegisterClasses[LD8RegClassID],
    LD8SubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    0x00, /* TSFlags */
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    LD8Superclasses,
    nullptr
  };

  extern const TargetRegisterClass LD8loRegClass = {
    &AVRMCRegisterClasses[LD8loRegClassID],
    LD8loSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    0x00, /* TSFlags */
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    LD8loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass CCRRegClass = {
    &AVRMCRegisterClasses[CCRRegClassID],
    CCRSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000001),
    0,
    0x00, /* TSFlags */
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass DREGSRegClass = {
    &AVRMCRegisterClasses[DREGSRegClassID],
    DREGSSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    0x00, /* TSFlags */
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass DREGSMOVWRegClass = {
    &AVRMCRegisterClasses[DREGSMOVWRegClassID],
    DREGSMOVWSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    0x00, /* TSFlags */
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DREGSMOVWSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DREGS_with_sub_hi_in_LD8RegClass = {
    &AVRMCRegisterClasses[DREGS_with_sub_hi_in_LD8RegClassID],
    DREGS_with_sub_hi_in_LD8SubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    0x00, /* TSFlags */
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DREGS_with_sub_hi_in_LD8Superclasses,
    nullptr
  };

  extern const TargetRegisterClass DREGS_with_sub_lo_in_LD8RegClass = {
    &AVRMCRegisterClasses[DREGS_with_sub_lo_in_LD8RegClassID],
    DREGS_with_sub_lo_in_LD8SubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    0x00, /* TSFlags */
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DREGS_with_sub_lo_in_LD8Superclasses,
    nullptr
  };

  extern const TargetRegisterClass DREGS_with_sub_lo_in_GPR8loRegClass = {
    &AVRMCRegisterClasses[DREGS_with_sub_lo_in_GPR8loRegClassID],
    DREGS_with_sub_lo_in_GPR8loSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    0x00, /* TSFlags */
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DREGS_with_sub_lo_in_GPR8loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DREGS_with_sub_hi_in_GPR8loRegClass = {
    &AVRMCRegisterClasses[DREGS_with_sub_hi_in_GPR8loRegClassID],
    DREGS_with_sub_hi_in_GPR8loSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    0x00, /* TSFlags */
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DREGS_with_sub_hi_in_GPR8loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DLDREGSRegClass = {
    &AVRMCRegisterClasses[DLDREGSRegClassID],
    DLDREGSSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    0x00, /* TSFlags */
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DLDREGSSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DREGS_with_sub_hi_in_LD8loRegClass = {
    &AVRMCRegisterClasses[DREGS_with_sub_hi_in_LD8loRegClassID],
    DREGS_with_sub_hi_in_LD8loSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    0x00, /* TSFlags */
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DREGS_with_sub_hi_in_LD8loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DREGS_with_sub_lo_in_LD8loRegClass = {
    &AVRMCRegisterClasses[DREGS_with_sub_lo_in_LD8loRegClassID],
    DREGS_with_sub_lo_in_LD8loSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    0x00, /* TSFlags */
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DREGS_with_sub_lo_in_LD8loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DREGSloRegClass = {
    &AVRMCRegisterClasses[DREGSloRegClassID],
    DREGSloSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    0x00, /* TSFlags */
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DREGSloSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8RegClass = {
    &AVRMCRegisterClasses[DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8RegClassID],
    DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8SubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    0x00, /* TSFlags */
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8Superclasses,
    nullptr
  };

  extern const TargetRegisterClass DREGSLD8loRegClass = {
    &AVRMCRegisterClasses[DREGSLD8loRegClassID],
    DREGSLD8loSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    0x00, /* TSFlags */
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DREGSLD8loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass IWREGSRegClass = {
    &AVRMCRegisterClasses[IWREGSRegClassID],
    IWREGSSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    0x00, /* TSFlags */
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    IWREGSSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass PTRREGSRegClass = {
    &AVRMCRegisterClasses[PTRREGSRegClassID],
    PTRREGSSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    0x00, /* TSFlags */
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    PTRREGSSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass PTRDISPREGSRegClass = {
    &AVRMCRegisterClasses[PTRDISPREGSRegClassID],
    PTRDISPREGSSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    0x00, /* TSFlags */
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    PTRDISPREGSSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loRegClass = {
    &AVRMCRegisterClasses[DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loRegClassID],
    DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    0x00, /* TSFlags */
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GPRSPRegClass = {
    &AVRMCRegisterClasses[GPRSPRegClassID],
    GPRSPSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    0x00, /* TSFlags */
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass ZREGRegClass = {
    &AVRMCRegisterClasses[ZREGRegClassID],
    ZREGSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    0x00, /* TSFlags */
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZREGSuperclasses,
    nullptr
  };

} // end namespace AVR

namespace {
  const TargetRegisterClass *const RegisterClasses[] = {
    &AVR::GPR8RegClass,
    &AVR::GPR8loRegClass,
    &AVR::LD8RegClass,
    &AVR::LD8loRegClass,
    &AVR::CCRRegClass,
    &AVR::DREGSRegClass,
    &AVR::DREGSMOVWRegClass,
    &AVR::DREGS_with_sub_hi_in_LD8RegClass,
    &AVR::DREGS_with_sub_lo_in_LD8RegClass,
    &AVR::DREGS_with_sub_lo_in_GPR8loRegClass,
    &AVR::DREGS_with_sub_hi_in_GPR8loRegClass,
    &AVR::DLDREGSRegClass,
    &AVR::DREGS_with_sub_hi_in_LD8loRegClass,
    &AVR::DREGS_with_sub_lo_in_LD8loRegClass,
    &AVR::DREGSloRegClass,
    &AVR::DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8RegClass,
    &AVR::DREGSLD8loRegClass,
    &AVR::IWREGSRegClass,
    &AVR::PTRREGSRegClass,
    &AVR::PTRDISPREGSRegClass,
    &AVR::DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loRegClass,
    &AVR::GPRSPRegClass,
    &AVR::ZREGRegClass,
  };
} // end anonymous namespace

static const uint8_t CostPerUseTable[] = { 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };


static const bool InAllocatableClassTable[] = { 
false, true, false, false, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, };


static const TargetRegisterInfoDesc AVRRegInfoDesc = { // Extra Descriptors
CostPerUseTable, 1, InAllocatableClassTable};

unsigned AVRGenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t Rows[1][2] = {
    { 0, 0, },
  };

  --IdxA; assert(IdxA < 2); (void) IdxA;
  --IdxB; assert(IdxB < 2);
  return Rows[0][IdxB];
}

  struct MaskRolOp {
    LaneBitmask Mask;
    uint8_t  RotateLeft;
  };
  static const MaskRolOp LaneMaskComposeSequences[] = {
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  0 }, { LaneBitmask::getNone(), 0 },   // Sequence 0
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  1 }, { LaneBitmask::getNone(), 0 }  // Sequence 2
  };
  static const uint8_t CompositeSequences[] = {
    0, // to sub_hi
    2 // to sub_lo
  };

LaneBitmask AVRGenRegisterInfo::composeSubRegIndexLaneMaskImpl(unsigned IdxA, LaneBitmask LaneMask) const {
  --IdxA; assert(IdxA < 2 && "Subregister index out of bounds");
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

LaneBitmask AVRGenRegisterInfo::reverseComposeSubRegIndexLaneMaskImpl(unsigned IdxA,  LaneBitmask LaneMask) const {
  LaneMask &= getSubRegIndexLaneMask(IdxA);
  --IdxA; assert(IdxA < 2 && "Subregister index out of bounds");
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

const TargetRegisterClass *AVRGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[23][2] = {
    {	// GPR8
      0,	// sub_hi
      0,	// sub_lo
    },
    {	// GPR8lo
      0,	// sub_hi
      0,	// sub_lo
    },
    {	// LD8
      0,	// sub_hi
      0,	// sub_lo
    },
    {	// LD8lo
      0,	// sub_hi
      0,	// sub_lo
    },
    {	// CCR
      0,	// sub_hi
      0,	// sub_lo
    },
    {	// DREGS
      6,	// sub_hi -> DREGS
      6,	// sub_lo -> DREGS
    },
    {	// DREGSMOVW
      7,	// sub_hi -> DREGSMOVW
      7,	// sub_lo -> DREGSMOVW
    },
    {	// DREGS_with_sub_hi_in_LD8
      8,	// sub_hi -> DREGS_with_sub_hi_in_LD8
      8,	// sub_lo -> DREGS_with_sub_hi_in_LD8
    },
    {	// DREGS_with_sub_lo_in_LD8
      9,	// sub_hi -> DREGS_with_sub_lo_in_LD8
      9,	// sub_lo -> DREGS_with_sub_lo_in_LD8
    },
    {	// DREGS_with_sub_lo_in_GPR8lo
      10,	// sub_hi -> DREGS_with_sub_lo_in_GPR8lo
      10,	// sub_lo -> DREGS_with_sub_lo_in_GPR8lo
    },
    {	// DREGS_with_sub_hi_in_GPR8lo
      11,	// sub_hi -> DREGS_with_sub_hi_in_GPR8lo
      11,	// sub_lo -> DREGS_with_sub_hi_in_GPR8lo
    },
    {	// DLDREGS
      12,	// sub_hi -> DLDREGS
      12,	// sub_lo -> DLDREGS
    },
    {	// DREGS_with_sub_hi_in_LD8lo
      13,	// sub_hi -> DREGS_with_sub_hi_in_LD8lo
      13,	// sub_lo -> DREGS_with_sub_hi_in_LD8lo
    },
    {	// DREGS_with_sub_lo_in_LD8lo
      14,	// sub_hi -> DREGS_with_sub_lo_in_LD8lo
      14,	// sub_lo -> DREGS_with_sub_lo_in_LD8lo
    },
    {	// DREGSlo
      15,	// sub_hi -> DREGSlo
      15,	// sub_lo -> DREGSlo
    },
    {	// DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8
      16,	// sub_hi -> DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8
      16,	// sub_lo -> DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8
    },
    {	// DREGSLD8lo
      17,	// sub_hi -> DREGSLD8lo
      17,	// sub_lo -> DREGSLD8lo
    },
    {	// IWREGS
      18,	// sub_hi -> IWREGS
      18,	// sub_lo -> IWREGS
    },
    {	// PTRREGS
      19,	// sub_hi -> PTRREGS
      19,	// sub_lo -> PTRREGS
    },
    {	// PTRDISPREGS
      20,	// sub_hi -> PTRDISPREGS
      20,	// sub_lo -> PTRDISPREGS
    },
    {	// DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo
      21,	// sub_hi -> DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo
      21,	// sub_lo -> DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo
    },
    {	// GPRSP
      22,	// sub_hi -> GPRSP
      22,	// sub_lo -> GPRSP
    },
    {	// ZREG
      23,	// sub_hi -> ZREG
      23,	// sub_lo -> ZREG
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 2 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : nullptr;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &AVRGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 32},  	// GPR8
    {1, 16},  	// GPR8lo
    {1, 16},  	// LD8
    {1, 8},  	// LD8lo
    {1, 1},  	// CCR
    {2, 32},  	// DREGS
    {2, 32},  	// DREGSMOVW
    {2, 17},  	// DREGS_with_sub_hi_in_LD8
    {2, 16},  	// DREGS_with_sub_lo_in_LD8
    {2, 17},  	// DREGS_with_sub_lo_in_GPR8lo
    {2, 16},  	// DREGS_with_sub_hi_in_GPR8lo
    {2, 16},  	// DLDREGS
    {2, 9},  	// DREGS_with_sub_hi_in_LD8lo
    {2, 9},  	// DREGS_with_sub_lo_in_LD8lo
    {2, 16},  	// DREGSlo
    {2, 8},  	// DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8
    {2, 8},  	// DREGSLD8lo
    {2, 8},  	// IWREGS
    {2, 6},  	// PTRREGS
    {2, 4},  	// PTRDISPREGS
    {2, 2},  	// DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo
    {2, 2},  	// GPRSP
    {2, 2},  	// ZREG
  };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned AVRGenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 35 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned AVRGenRegisterInfo::getNumRegPressureSets() const {
  return 9;
}

// Get the name of this register unit pressure set.
const char *AVRGenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *PressureNameTable[] = {
    "CCR",
    "DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo",
    "GPRSP",
    "IWREGS",
    "LD8lo",
    "LD8",
    "GPR8lo",
    "GPR8lo_with_LD8lo",
    "GPR8",
  };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned AVRGenRegisterInfo::
getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const {
  static const uint8_t PressureLimitTable[] = {
    1,  	// 0: CCR
    2,  	// 1: DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo
    2,  	// 2: GPRSP
    8,  	// 3: IWREGS
    10,  	// 4: LD8lo
    17,  	// 5: LD8
    17,  	// 6: GPR8lo
    25,  	// 7: GPR8lo_with_LD8lo
    32,  	// 8: GPR8
  };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
  /* 0 */ 0, -1,
  /* 2 */ 2, -1,
  /* 4 */ 3, 5, 8, -1,
  /* 8 */ 3, 4, 5, 7, 8, -1,
  /* 14 */ 1, 4, 5, 6, 7, 8, -1,
};

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int *AVRGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const uint8_t RCSetStartTable[] = {
    6,17,5,9,0,6,6,5,5,17,17,5,9,9,17,9,9,4,4,4,14,2,4,};
  return &RCSetsTable[RCSetStartTable[RC->getID()]];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int *AVRGenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 35 && "invalid register unit");
  static const uint8_t RUSetStartTable[] = {
    2,2,0,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,14,14,9,9,9,9,9,9,9,8,4,4,4,4,4,4,4,};
  return &RCSetsTable[RUSetStartTable[RegUnit]];
}

extern const MCRegisterDesc AVRRegDesc[];
extern const MCPhysReg AVRRegDiffLists[];
extern const LaneBitmask AVRLaneMaskLists[];
extern const char AVRRegStrings[];
extern const char AVRRegClassStrings[];
extern const MCPhysReg AVRRegUnitRoots[][2];
extern const uint16_t AVRSubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits AVRSubRegIdxRanges[];
extern const uint16_t AVRRegEncodingTable[];
// AVR Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair AVRDwarfFlavour0Dwarf2L[];
extern const unsigned AVRDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair AVREHFlavour0Dwarf2L[];
extern const unsigned AVREHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair AVRDwarfFlavour0L2Dwarf[];
extern const unsigned AVRDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair AVREHFlavour0L2Dwarf[];
extern const unsigned AVREHFlavour0L2DwarfSize;

AVRGenRegisterInfo::
AVRGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour,
      unsigned PC, unsigned HwMode)
  : TargetRegisterInfo(&AVRRegInfoDesc, RegisterClasses, RegisterClasses+23,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable,
             LaneBitmask(0xFFFFFFFFFFFFFFFF), RegClassInfos, HwMode) {
  InitMCRegisterInfo(AVRRegDesc, 62, RA, PC,
                     AVRMCRegisterClasses, 23,
                     AVRRegUnitRoots,
                     35,
                     AVRRegDiffLists,
                     AVRLaneMaskLists,
                     AVRRegStrings,
                     AVRRegClassStrings,
                     AVRSubRegIdxLists,
                     3,
                     AVRSubRegIdxRanges,
                     AVRRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(AVRDwarfFlavour0Dwarf2L, AVRDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(AVREHFlavour0Dwarf2L, AVREHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(AVRDwarfFlavour0L2Dwarf, AVRDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(AVREHFlavour0L2Dwarf, AVREHFlavour0L2DwarfSize, true);
    break;
  }
}

static const MCPhysReg CSR_Interrupts_SaveList[] = { AVR::R31, AVR::R30, AVR::R29, AVR::R28, AVR::R27, AVR::R26, AVR::R25, AVR::R24, AVR::R23, AVR::R22, AVR::R21, AVR::R20, AVR::R19, AVR::R18, AVR::R17, AVR::R16, AVR::R15, AVR::R14, AVR::R13, AVR::R12, AVR::R11, AVR::R10, AVR::R9, AVR::R8, AVR::R7, AVR::R6, AVR::R5, AVR::R4, AVR::R3, AVR::R2, 0 };
static const uint32_t CSR_Interrupts_RegMask[] = { 0xffffff80, 0x3fffffdf, };
static const MCPhysReg CSR_InterruptsTiny_SaveList[] = { AVR::R31, AVR::R30, AVR::R29, AVR::R28, AVR::R27, AVR::R26, AVR::R25, AVR::R24, AVR::R23, AVR::R22, AVR::R21, AVR::R20, AVR::R19, AVR::R18, 0 };
static const uint32_t CSR_InterruptsTiny_RegMask[] = { 0xff800000, 0x3ff8001f, };
static const MCPhysReg CSR_Normal_SaveList[] = { AVR::R29, AVR::R28, AVR::R17, AVR::R16, AVR::R15, AVR::R14, AVR::R13, AVR::R12, AVR::R11, AVR::R10, AVR::R9, AVR::R8, AVR::R7, AVR::R6, AVR::R5, AVR::R4, AVR::R3, AVR::R2, 0 };
static const uint32_t CSR_Normal_RegMask[] = { 0x007fff80, 0x1003ffc6, };
static const MCPhysReg CSR_NormalTiny_SaveList[] = { AVR::R29, AVR::R28, AVR::R19, AVR::R18, 0 };
static const uint32_t CSR_NormalTiny_RegMask[] = { 0x01800000, 0x10080006, };


ArrayRef<const uint32_t *> AVRGenRegisterInfo::getRegMasks() const {
  static const uint32_t *const Masks[] = {
    CSR_Interrupts_RegMask,
    CSR_InterruptsTiny_RegMask,
    CSR_Normal_RegMask,
    CSR_NormalTiny_RegMask,
  };
  return makeArrayRef(Masks);
}

bool AVRGenRegisterInfo::
isGeneralPurposeRegister(const MachineFunction &MF, MCRegister PhysReg) const {
  return
      false;
}

bool AVRGenRegisterInfo::
isFixedRegister(const MachineFunction &MF, MCRegister PhysReg) const {
  return
      false;
}

bool AVRGenRegisterInfo::
isArgumentRegister(const MachineFunction &MF, MCRegister PhysReg) const {
  return
      false;
}

ArrayRef<const char *> AVRGenRegisterInfo::getRegMaskNames() const {
  static const char *Names[] = {
    "CSR_Interrupts",
    "CSR_InterruptsTiny",
    "CSR_Normal",
    "CSR_NormalTiny",
  };
  return makeArrayRef(Names);
}

const AVRFrameLowering *
AVRGenRegisterInfo::getFrameLowering(const MachineFunction &MF) {
  return static_cast<const AVRFrameLowering *>(
      MF.getSubtarget().getFrameLowering());
}

} // end namespace llvm

#endif // GET_REGINFO_TARGET_DESC

