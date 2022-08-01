/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Machine Code Emitter                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

uint64_t LanaiMCCodeEmitter::getBinaryCodeForInstr(const MCInst &MI,
    SmallVectorImpl<MCFixup> &Fixups,
    const MCSubtargetInfo &STI) const {
  static const uint64_t InstBits[] = {
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(268632064),	// ADDC_F_I_HI
    UINT64_C(268566528),	// ADDC_F_I_LO
    UINT64_C(3221356800),	// ADDC_F_R
    UINT64_C(268500992),	// ADDC_I_HI
    UINT64_C(268435456),	// ADDC_I_LO
    UINT64_C(3221225728),	// ADDC_R
    UINT64_C(196608),	// ADD_F_I_HI
    UINT64_C(131072),	// ADD_F_I_LO
    UINT64_C(3221356544),	// ADD_F_R
    UINT64_C(65536),	// ADD_I_HI
    UINT64_C(0),	// ADD_I_LO
    UINT64_C(3221225472),	// ADD_R
    UINT64_C(1073938432),	// AND_F_I_HI
    UINT64_C(1073872896),	// AND_F_I_LO
    UINT64_C(3221357568),	// AND_F_R
    UINT64_C(1073807360),	// AND_I_HI
    UINT64_C(1073741824),	// AND_I_LO
    UINT64_C(3221226496),	// AND_R
    UINT64_C(3758096384),	// BRCC
    UINT64_C(3238003968),	// BRIND_CC
    UINT64_C(3238003968),	// BRIND_CCA
    UINT64_C(3774873602),	// BRR
    UINT64_C(3758096384),	// BT
    UINT64_C(3238003968),	// JR
    UINT64_C(4026531840),	// LDADDR
    UINT64_C(4026744832),	// LDBs_RI
    UINT64_C(2684354564),	// LDBs_RR
    UINT64_C(4026748928),	// LDBz_RI
    UINT64_C(2684354565),	// LDBz_RR
    UINT64_C(4026728448),	// LDHs_RI
    UINT64_C(2684354560),	// LDHs_RR
    UINT64_C(4026732544),	// LDHz_RI
    UINT64_C(2684354561),	// LDHz_RR
    UINT64_C(2147483648),	// LDW_RI
    UINT64_C(2684354562),	// LDW_RR
    UINT64_C(2684354563),	// LDWz_RR
    UINT64_C(3489660930),	// LEADZ
    UINT64_C(2),	// LOG0
    UINT64_C(3),	// LOG1
    UINT64_C(4),	// LOG2
    UINT64_C(5),	// LOG3
    UINT64_C(6),	// LOG4
    UINT64_C(65536),	// MOVHI
    UINT64_C(1),	// NOP
    UINT64_C(1342373888),	// OR_F_I_HI
    UINT64_C(1342308352),	// OR_F_I_LO
    UINT64_C(3221357824),	// OR_F_R
    UINT64_C(1342242816),	// OR_I_HI
    UINT64_C(1342177280),	// OR_I_LO
    UINT64_C(3221226752),	// OR_R
    UINT64_C(3489660929),	// POPC
    UINT64_C(2165768188),	// RET
    UINT64_C(1879244800),	// SA_F_I
    UINT64_C(1879113728),	// SA_I
    UINT64_C(3758096386),	// SCC
    UINT64_C(3221227264),	// SELECT
    UINT64_C(537067520),	// SFSUB_F_RI_HI
    UINT64_C(537001984),	// SFSUB_F_RI_LO
    UINT64_C(3221357056),	// SFSUB_F_RR
    UINT64_C(3221358464),	// SHL_F_R
    UINT64_C(3221227392),	// SHL_R
    UINT64_C(4026662912),	// SLI
    UINT64_C(1879179264),	// SL_F_I
    UINT64_C(1879048192),	// SL_I
    UINT64_C(3221358528),	// SRA_F_R
    UINT64_C(3221227456),	// SRA_R
    UINT64_C(3221358464),	// SRL_F_R
    UINT64_C(3221227392),	// SRL_R
    UINT64_C(4026597376),	// STADDR
    UINT64_C(4026753024),	// STB_RI
    UINT64_C(2952790020),	// STB_RR
    UINT64_C(4026736640),	// STH_RI
    UINT64_C(2952790016),	// STH_RR
    UINT64_C(805502976),	// SUBB_F_I_HI
    UINT64_C(805437440),	// SUBB_F_I_LO
    UINT64_C(3221357312),	// SUBB_F_R
    UINT64_C(805371904),	// SUBB_I_HI
    UINT64_C(805306368),	// SUBB_I_LO
    UINT64_C(3221226240),	// SUBB_R
    UINT64_C(537067520),	// SUB_F_I_HI
    UINT64_C(537001984),	// SUB_F_I_LO
    UINT64_C(3221357056),	// SUB_F_R
    UINT64_C(536936448),	// SUB_I_HI
    UINT64_C(536870912),	// SUB_I_LO
    UINT64_C(3221225984),	// SUB_R
    UINT64_C(2415919104),	// SW_RI
    UINT64_C(2952790018),	// SW_RR
    UINT64_C(3489660931),	// TRAILZ
    UINT64_C(1610809344),	// XOR_F_I_HI
    UINT64_C(1610743808),	// XOR_F_I_LO
    UINT64_C(3221358080),	// XOR_F_R
    UINT64_C(1610678272),	// XOR_I_HI
    UINT64_C(1610612736),	// XOR_I_LO
    UINT64_C(3221227008),	// XOR_R
    UINT64_C(0)
  };
  const unsigned opcode = MI.getOpcode();
  uint64_t Value = InstBits[opcode];
  uint64_t op = 0;
  (void)op;  // suppress warning
  switch (opcode) {
    case Lanai::LOG0:
    case Lanai::LOG1:
    case Lanai::LOG2:
    case Lanai::LOG3:
    case Lanai::LOG4:
    case Lanai::NOP:
    case Lanai::RET: {
      break;
    }
    case Lanai::BRR: {
      // op: DDDI
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(14)) << 24;
      Value |= (op & UINT64_C(1));
      // op: imm16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(65532);
      Value |= op;
      break;
    }
    case Lanai::STB_RI:
    case Lanai::STH_RI: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: P
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 11;
      Value |= op;
      // op: Q
      op = getSplsOpValue(MI, 1, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 10;
      Value |= op;
      // op: dst
      op = getSplsOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(126976)) << 6;
      Value |= (op & UINT64_C(1023));
      Value = adjustPqBitsSpls(MI, Value, STI);
      break;
    }
    case Lanai::LDBs_RI:
    case Lanai::LDBz_RI:
    case Lanai::LDHs_RI:
    case Lanai::LDHz_RI: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: P
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 11;
      Value |= op;
      // op: Q
      op = getSplsOpValue(MI, 1, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 10;
      Value |= op;
      // op: src
      op = getSplsOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(126976)) << 6;
      Value |= (op & UINT64_C(1023));
      Value = adjustPqBitsSpls(MI, Value, STI);
      break;
    }
    case Lanai::SW_RI: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: P
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 17;
      Value |= op;
      // op: Q
      op = getRiMemoryOpValue(MI, 1, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 16;
      Value |= op;
      // op: dst
      op = getRiMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(8126464));
      Value |= (op & UINT64_C(65535));
      Value = adjustPqBitsRmAndRrm(MI, Value, STI);
      break;
    }
    case Lanai::LDW_RI: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: P
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 17;
      Value |= op;
      // op: Q
      op = getRiMemoryOpValue(MI, 1, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 16;
      Value |= op;
      // op: src
      op = getRiMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(8126464));
      Value |= (op & UINT64_C(65535));
      Value = adjustPqBitsRmAndRrm(MI, Value, STI);
      break;
    }
    case Lanai::STB_RR:
    case Lanai::STH_RR:
    case Lanai::SW_RR: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: P
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 17;
      Value |= op;
      // op: Q
      op = getRrMemoryOpValue(MI, 1, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 16;
      Value |= op;
      // op: dst
      op = getRrMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(1015808)) << 3;
      Value |= (op & UINT64_C(31744)) << 1;
      Value |= (op & UINT64_C(255)) << 3;
      Value = adjustPqBitsRmAndRrm(MI, Value, STI);
      break;
    }
    case Lanai::LDBs_RR:
    case Lanai::LDBz_RR:
    case Lanai::LDHs_RR:
    case Lanai::LDHz_RR:
    case Lanai::LDW_RR:
    case Lanai::LDWz_RR: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: P
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 17;
      Value |= op;
      // op: Q
      op = getRrMemoryOpValue(MI, 1, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 16;
      Value |= op;
      // op: src
      op = getRrMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(1015808)) << 3;
      Value |= (op & UINT64_C(31744)) << 1;
      Value |= (op & UINT64_C(255)) << 3;
      Value = adjustPqBitsRmAndRrm(MI, Value, STI);
      break;
    }
    case Lanai::LEADZ:
    case Lanai::POPC:
    case Lanai::TRAILZ: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: Rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 18;
      Value |= op;
      break;
    }
    case Lanai::ADDC_F_R:
    case Lanai::ADDC_R:
    case Lanai::ADD_F_R:
    case Lanai::ADD_R:
    case Lanai::AND_F_R:
    case Lanai::AND_R:
    case Lanai::OR_F_R:
    case Lanai::OR_R:
    case Lanai::SELECT:
    case Lanai::SHL_F_R:
    case Lanai::SHL_R:
    case Lanai::SRA_F_R:
    case Lanai::SRA_R:
    case Lanai::SRL_F_R:
    case Lanai::SRL_R:
    case Lanai::SUBB_F_R:
    case Lanai::SUBB_R:
    case Lanai::SUB_F_R:
    case Lanai::SUB_R:
    case Lanai::XOR_F_R:
    case Lanai::XOR_R: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: Rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 18;
      Value |= op;
      // op: Rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 11;
      Value |= op;
      // op: DDDI
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 16;
      Value |= (op & UINT64_C(14)) >> 1;
      break;
    }
    case Lanai::ADDC_F_I_HI:
    case Lanai::ADDC_F_I_LO:
    case Lanai::ADDC_I_HI:
    case Lanai::ADDC_I_LO:
    case Lanai::ADD_F_I_HI:
    case Lanai::ADD_F_I_LO:
    case Lanai::ADD_I_HI:
    case Lanai::ADD_I_LO:
    case Lanai::AND_F_I_HI:
    case Lanai::AND_F_I_LO:
    case Lanai::AND_I_HI:
    case Lanai::AND_I_LO:
    case Lanai::OR_F_I_HI:
    case Lanai::OR_F_I_LO:
    case Lanai::OR_I_HI:
    case Lanai::OR_I_LO:
    case Lanai::SA_F_I:
    case Lanai::SA_I:
    case Lanai::SL_F_I:
    case Lanai::SL_I:
    case Lanai::SUBB_F_I_HI:
    case Lanai::SUBB_F_I_LO:
    case Lanai::SUBB_I_HI:
    case Lanai::SUBB_I_LO:
    case Lanai::SUB_F_I_HI:
    case Lanai::SUB_F_I_LO:
    case Lanai::SUB_I_HI:
    case Lanai::SUB_I_LO:
    case Lanai::XOR_F_I_HI:
    case Lanai::XOR_F_I_LO:
    case Lanai::XOR_I_HI:
    case Lanai::XOR_I_LO: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: Rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 18;
      Value |= op;
      // op: imm16
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(65535);
      Value |= op;
      break;
    }
    case Lanai::STADDR: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(2031616)) << 2;
      Value |= (op & UINT64_C(65535));
      break;
    }
    case Lanai::SLI: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(2031616)) << 2;
      Value |= (op & UINT64_C(65535));
      break;
    }
    case Lanai::MOVHI: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: imm16
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(65535);
      Value |= op;
      break;
    }
    case Lanai::LDADDR: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(2031616)) << 2;
      Value |= (op & UINT64_C(65535));
      break;
    }
    case Lanai::BRIND_CC: {
      // op: Rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 18;
      Value |= op;
      // op: DDDI
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 16;
      Value |= (op & UINT64_C(14)) >> 1;
      break;
    }
    case Lanai::SCC: {
      // op: Rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 18;
      Value |= op;
      // op: DDDI
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(14)) << 24;
      Value |= (op & UINT64_C(1));
      break;
    }
    case Lanai::SFSUB_F_RR: {
      // op: Rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 18;
      Value |= op;
      // op: Rs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 11;
      Value |= op;
      break;
    }
    case Lanai::BRIND_CCA: {
      // op: Rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 18;
      Value |= op;
      // op: Rs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 11;
      Value |= op;
      // op: DDDI
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 16;
      Value |= (op & UINT64_C(14)) >> 1;
      break;
    }
    case Lanai::SFSUB_F_RI_HI:
    case Lanai::SFSUB_F_RI_LO: {
      // op: Rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 18;
      Value |= op;
      // op: imm16
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(65535);
      Value |= op;
      break;
    }
    case Lanai::JR: {
      // op: Rs2
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 11;
      Value |= op;
      break;
    }
    case Lanai::BT: {
      // op: addr
      op = getBranchTargetOpValue(MI, 0, Fixups, STI);
      op &= UINT64_C(33554428);
      Value |= op;
      break;
    }
    case Lanai::BRCC: {
      // op: addr
      op = getBranchTargetOpValue(MI, 0, Fixups, STI);
      op &= UINT64_C(33554428);
      Value |= op;
      // op: DDDI
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(14)) << 24;
      Value |= (op & UINT64_C(1));
      break;
    }
  default:
    std::string msg;
    raw_string_ostream Msg(msg);
    Msg << "Not supported instr: " << MI;
    report_fatal_error(Msg.str().c_str());
  }
  return Value;
}

