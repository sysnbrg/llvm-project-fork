/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Machine Code Emitter                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

uint64_t AVRMCCodeEmitter::getBinaryCodeForInstr(const MCInst &MI,
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
    UINT64_C(7168),	// ADCRdRr
    UINT64_C(3072),	// ADDRdRr
    UINT64_C(38400),	// ADIWRdK
    UINT64_C(28672),	// ANDIRdK
    UINT64_C(8192),	// ANDRdRr
    UINT64_C(37893),	// ASRRd
    UINT64_C(38024),	// BCLRs
    UINT64_C(63488),	// BLD
    UINT64_C(62464),	// BRBCsk
    UINT64_C(61440),	// BRBSsk
    UINT64_C(38296),	// BREAK
    UINT64_C(61441),	// BREQk
    UINT64_C(62468),	// BRGEk
    UINT64_C(61440),	// BRLOk
    UINT64_C(61444),	// BRLTk
    UINT64_C(61442),	// BRMIk
    UINT64_C(62465),	// BRNEk
    UINT64_C(62466),	// BRPLk
    UINT64_C(62464),	// BRSHk
    UINT64_C(37896),	// BSETs
    UINT64_C(64000),	// BST
    UINT64_C(2483945472),	// CALLk
    UINT64_C(38912),	// CBIAb
    UINT64_C(37888),	// COMRd
    UINT64_C(1024),	// CPCRdRr
    UINT64_C(12288),	// CPIRdK
    UINT64_C(5120),	// CPRdRr
    UINT64_C(4096),	// CPSE
    UINT64_C(37898),	// DECRd
    UINT64_C(37899),	// DESK
    UINT64_C(38169),	// EICALL
    UINT64_C(37913),	// EIJMP
    UINT64_C(38360),	// ELPM
    UINT64_C(36870),	// ELPMRdZ
    UINT64_C(36871),	// ELPMRdZPi
    UINT64_C(9216),	// EORRdRr
    UINT64_C(776),	// FMUL
    UINT64_C(896),	// FMULS
    UINT64_C(904),	// FMULSU
    UINT64_C(38153),	// ICALL
    UINT64_C(37897),	// IJMP
    UINT64_C(37891),	// INCRd
    UINT64_C(45056),	// INRdA
    UINT64_C(2483814400),	// JMPk
    UINT64_C(37382),	// LACZRd
    UINT64_C(37381),	// LASZRd
    UINT64_C(37383),	// LATZRd
    UINT64_C(32768),	// LDDRdPtrQ
    UINT64_C(57344),	// LDIRdK
    UINT64_C(32768),	// LDRdPtr
    UINT64_C(32770),	// LDRdPtrPd
    UINT64_C(32769),	// LDRdPtrPi
    UINT64_C(2415919104),	// LDSRdK
    UINT64_C(38344),	// LPM
    UINT64_C(36868),	// LPMRdZ
    UINT64_C(36869),	// LPMRdZPi
    UINT64_C(37894),	// LSRRd
    UINT64_C(11264),	// MOVRdRr
    UINT64_C(256),	// MOVWRdRr
    UINT64_C(39936),	// MULRdRr
    UINT64_C(512),	// MULSRdRr
    UINT64_C(768),	// MULSURdRr
    UINT64_C(37889),	// NEGRd
    UINT64_C(0),	// NOP
    UINT64_C(24576),	// ORIRdK
    UINT64_C(10240),	// ORRdRr
    UINT64_C(47104),	// OUTARr
    UINT64_C(36879),	// POPRd
    UINT64_C(37391),	// PUSHRr
    UINT64_C(53248),	// RCALLk
    UINT64_C(38152),	// RET
    UINT64_C(38168),	// RETI
    UINT64_C(49152),	// RJMPk
    UINT64_C(37895),	// RORRd
    UINT64_C(16384),	// SBCIRdK
    UINT64_C(2048),	// SBCRdRr
    UINT64_C(39424),	// SBIAb
    UINT64_C(39168),	// SBICAb
    UINT64_C(39680),	// SBISAb
    UINT64_C(38656),	// SBIWRdK
    UINT64_C(64512),	// SBRCRrB
    UINT64_C(65024),	// SBRSRrB
    UINT64_C(38280),	// SLEEP
    UINT64_C(38376),	// SPM
    UINT64_C(38392),	// SPMZPi
    UINT64_C(33280),	// STDPtrQRr
    UINT64_C(33282),	// STPtrPdRr
    UINT64_C(33281),	// STPtrPiRr
    UINT64_C(33280),	// STPtrRr
    UINT64_C(2449473536),	// STSKRr
    UINT64_C(20480),	// SUBIRdK
    UINT64_C(6144),	// SUBRdRr
    UINT64_C(37890),	// SWAPRd
    UINT64_C(38312),	// WDR
    UINT64_C(37380),	// XCHZRd
    UINT64_C(0)
  };
  const unsigned opcode = MI.getOpcode();
  uint64_t Value = InstBits[opcode];
  uint64_t op = 0;
  (void)op;  // suppress warning
  switch (opcode) {
    case AVR::BREAK:
    case AVR::EICALL:
    case AVR::EIJMP:
    case AVR::ELPM:
    case AVR::ICALL:
    case AVR::IJMP:
    case AVR::LPM:
    case AVR::NOP:
    case AVR::RET:
    case AVR::RETI:
    case AVR::SLEEP:
    case AVR::SPM:
    case AVR::SPMZPi:
    case AVR::WDR: {
      break;
    }
    case AVR::CBIAb:
    case AVR::SBIAb:
    case AVR::SBICAb:
    case AVR::SBISAb: {
      // op: A
      op = encodeImm<AVR::fixup_port5, 0>(MI, 0, Fixups, STI);
      op &= UINT64_C(31);
      op <<= 3;
      Value |= op;
      // op: b
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      Value |= op;
      break;
    }
    case AVR::OUTARr: {
      // op: A
      op = encodeImm<AVR::fixup_port6, 0>(MI, 0, Fixups, STI);
      Value |= (op & UINT64_C(48)) << 5;
      Value |= (op & UINT64_C(15));
      // op: r
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      break;
    }
    case AVR::MOVWRdRr: {
      // op: d
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(30);
      op <<= 3;
      Value |= op;
      // op: r
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(30);
      op >>= 1;
      Value |= op;
      break;
    }
    case AVR::ASRRd:
    case AVR::COMRd:
    case AVR::DECRd:
    case AVR::INCRd:
    case AVR::LSRRd:
    case AVR::NEGRd:
    case AVR::POPRd:
    case AVR::PUSHRr:
    case AVR::RORRd:
    case AVR::SWAPRd: {
      // op: d
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      break;
    }
    case AVR::INRdA: {
      // op: d
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      // op: A
      op = encodeImm<AVR::fixup_port6, 0>(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(48)) << 5;
      Value |= (op & UINT64_C(15));
      break;
    }
    case AVR::ADIWRdK:
    case AVR::SBIWRdK: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(6);
      op <<= 3;
      Value |= op;
      // op: k
      op = encodeImm<AVR::fixup_6_adiw, 0>(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(48)) << 2;
      Value |= (op & UINT64_C(15));
      break;
    }
    case AVR::CALLk:
    case AVR::JMPk: {
      // op: k
      op = encodeCallTarget(MI, 0, Fixups, STI);
      Value |= (op & UINT64_C(4063232)) << 3;
      Value |= (op & UINT64_C(131071));
      break;
    }
    case AVR::RCALLk:
    case AVR::RJMPk: {
      // op: k
      op = encodeRelCondBrTarget<AVR::fixup_13_pcrel>(MI, 0, Fixups, STI);
      op &= UINT64_C(4095);
      Value |= op;
      break;
    }
    case AVR::BREQk:
    case AVR::BRGEk:
    case AVR::BRLOk:
    case AVR::BRLTk:
    case AVR::BRMIk:
    case AVR::BRNEk:
    case AVR::BRPLk:
    case AVR::BRSHk: {
      // op: k
      op = encodeRelCondBrTarget<AVR::fixup_7_pcrel>(MI, 0, Fixups, STI);
      op &= UINT64_C(127);
      op <<= 3;
      Value |= op;
      break;
    }
    case AVR::BRBCsk:
    case AVR::BRBSsk: {
      // op: k
      op = encodeRelCondBrTarget<AVR::fixup_7_pcrel>(MI, 1, Fixups, STI);
      op &= UINT64_C(127);
      op <<= 3;
      Value |= op;
      // op: s
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      Value |= op;
      break;
    }
    case AVR::DESK: {
      // op: k
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 4;
      Value |= op;
      break;
    }
    case AVR::STDPtrQRr: {
      // op: memri
      op = encodeMemri(MI, 0, Fixups, STI);
      Value |= (op & UINT64_C(32)) << 8;
      Value |= (op & UINT64_C(24)) << 7;
      Value |= (op & UINT64_C(64)) >> 3;
      Value |= (op & UINT64_C(7));
      // op: reg
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      break;
    }
    case AVR::LDDRdPtrQ: {
      // op: memri
      op = encodeMemri(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(32)) << 8;
      Value |= (op & UINT64_C(24)) << 7;
      Value |= (op & UINT64_C(64)) >> 3;
      Value |= (op & UINT64_C(7));
      // op: reg
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      break;
    }
    case AVR::STPtrRr: {
      // op: ptrreg
      op = encodeLDSTPtrReg(MI, 0, Fixups, STI);
      op &= UINT64_C(3);
      op <<= 2;
      Value |= op;
      // op: reg
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      Value = loadStorePostEncoder(MI, Value, STI);
      break;
    }
    case AVR::LDRdPtr: {
      // op: ptrreg
      op = encodeLDSTPtrReg(MI, 1, Fixups, STI);
      op &= UINT64_C(3);
      op <<= 2;
      Value |= op;
      // op: reg
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      Value = loadStorePostEncoder(MI, Value, STI);
      break;
    }
    case AVR::STPtrPdRr:
    case AVR::STPtrPiRr: {
      // op: ptrreg
      op = encodeLDSTPtrReg(MI, 1, Fixups, STI);
      op &= UINT64_C(3);
      op <<= 2;
      Value |= op;
      // op: reg
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      Value = loadStorePostEncoder(MI, Value, STI);
      break;
    }
    case AVR::LDRdPtrPd:
    case AVR::LDRdPtrPi: {
      // op: ptrreg
      op = encodeLDSTPtrReg(MI, 2, Fixups, STI);
      op &= UINT64_C(3);
      op <<= 2;
      Value |= op;
      // op: reg
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      Value = loadStorePostEncoder(MI, Value, STI);
      break;
    }
    case AVR::CPIRdK:
    case AVR::LDIRdK: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 4;
      Value |= op;
      // op: k
      op = encodeImm<AVR::fixup_ldi, 0>(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(240)) << 4;
      Value |= (op & UINT64_C(15));
      break;
    }
    case AVR::ANDIRdK:
    case AVR::ORIRdK:
    case AVR::SBCIRdK:
    case AVR::SUBIRdK: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 4;
      Value |= op;
      // op: k
      op = encodeImm<AVR::fixup_ldi, 0>(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(240)) << 4;
      Value |= (op & UINT64_C(15));
      break;
    }
    case AVR::MULSRdRr:
    case AVR::MULSURdRr: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 4;
      Value |= op;
      // op: rr
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case AVR::LDSRdK: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: k
      op = encodeImm<AVR::fixup_16, 2>(MI, 1, Fixups, STI);
      op &= UINT64_C(65535);
      Value |= op;
      break;
    }
    case AVR::LACZRd:
    case AVR::LASZRd:
    case AVR::LATZRd:
    case AVR::XCHZRd: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      break;
    }
    case AVR::BST:
    case AVR::SBRCRrB:
    case AVR::SBRSRrB: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      // op: b
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      Value |= op;
      break;
    }
    case AVR::BLD: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      // op: b
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(7);
      Value |= op;
      break;
    }
    case AVR::CPCRdRr:
    case AVR::CPRdRr:
    case AVR::CPSE:
    case AVR::MOVRdRr:
    case AVR::MULRdRr: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      // op: rr
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(16)) << 5;
      Value |= (op & UINT64_C(15));
      break;
    }
    case AVR::ADCRdRr:
    case AVR::ADDRdRr:
    case AVR::ANDRdRr:
    case AVR::EORRdRr:
    case AVR::ORRdRr:
    case AVR::SBCRdRr:
    case AVR::SUBRdRr: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      // op: rr
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(16)) << 5;
      Value |= (op & UINT64_C(15));
      break;
    }
    case AVR::FMUL:
    case AVR::FMULS:
    case AVR::FMULSU: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 4;
      Value |= op;
      // op: rr
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      Value |= op;
      break;
    }
    case AVR::STSKRr: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: k
      op = encodeImm<AVR::fixup_16, 2>(MI, 0, Fixups, STI);
      op &= UINT64_C(65535);
      Value |= op;
      break;
    }
    case AVR::ELPMRdZ:
    case AVR::ELPMRdZPi:
    case AVR::LPMRdZ:
    case AVR::LPMRdZPi: {
      // op: reg
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      break;
    }
    case AVR::BCLRs:
    case AVR::BSETs: {
      // op: s
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 4;
      Value |= op;
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

