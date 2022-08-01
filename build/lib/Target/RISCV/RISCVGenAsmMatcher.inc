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
                       const OperandVector &Operands,
                       const SmallBitVector &OptionalOperandsMask);
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

  OperandMatchResultTy MatchOperandParserImpl(
    OperandVector &Operands,
    StringRef Mnemonic,
    bool ParseForAllFeatures = false);
  OperandMatchResultTy tryCustomParseOperand(
    OperandVector &Operands,
    unsigned MCK);

#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

  Match_InvalidBareSymbol,
  Match_InvalidCLUIImm,
  Match_InvalidCSRSystemRegister,
  Match_InvalidCallSymbol,
  Match_InvalidFRMArg,
  Match_InvalidFenceArg,
  Match_InvalidImmXLenLI,
  Match_InvalidImmZero,
  Match_InvalidPseudoJumpSymbol,
  Match_InvalidRnumArg,
  Match_InvalidSImm10Lsb0000NonZero,
  Match_InvalidSImm12,
  Match_InvalidSImm12Lsb0,
  Match_InvalidSImm12Lsb00000,
  Match_InvalidSImm13Lsb0,
  Match_InvalidSImm21Lsb0JAL,
  Match_InvalidSImm5,
  Match_InvalidSImm5Plus1,
  Match_InvalidSImm6,
  Match_InvalidSImm6NonZero,
  Match_InvalidSImm9Lsb0,
  Match_InvalidTPRelAddSymbol,
  Match_InvalidUImm10Lsb00NonZero,
  Match_InvalidUImm2,
  Match_InvalidUImm20AUIPC,
  Match_InvalidUImm20LUI,
  Match_InvalidUImm3,
  Match_InvalidUImm5,
  Match_InvalidUImm7,
  Match_InvalidUImm7Lsb00,
  Match_InvalidUImm8Lsb00,
  Match_InvalidUImm8Lsb000,
  Match_InvalidUImm9Lsb000,
  Match_InvalidUImmLog2XLen,
  Match_InvalidUImmLog2XLenHalf,
  Match_InvalidUImmLog2XLenNonZero,
  Match_InvalidVMaskRegister,
  Match_InvalidVTypeI,
  END_OPERAND_DIAGNOSTIC_TYPES
#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
  Feature_HasStdExtMBit = 5,
  Feature_HasStdExtZmmulBit = 45,
  Feature_HasStdExtMOrZmmulBit = 6,
  Feature_HasStdExtABit = 1,
  Feature_HasStdExtFBit = 4,
  Feature_HasStdExtDBit = 3,
  Feature_HasStdExtZihintpauseBit = 37,
  Feature_HasStdExtZfhminBit = 29,
  Feature_HasStdExtZfhBit = 27,
  Feature_HasStdExtZfhOrZfhminBit = 28,
  Feature_HasStdExtZfinxBit = 30,
  Feature_HasStdExtZdinxBit = 26,
  Feature_HasStdExtZhinxminBit = 33,
  Feature_HasStdExtZhinxBit = 31,
  Feature_HasStdExtZhinxOrZhinxminBit = 32,
  Feature_HasStdExtCBit = 2,
  Feature_HasStdExtZbaBit = 7,
  Feature_HasStdExtZbbBit = 8,
  Feature_HasStdExtZbcBit = 12,
  Feature_HasStdExtZbeBit = 14,
  Feature_HasStdExtZbfBit = 15,
  Feature_HasStdExtZbmBit = 19,
  Feature_HasStdExtZbpBit = 20,
  Feature_HasStdExtZbrBit = 23,
  Feature_HasStdExtZbsBit = 24,
  Feature_HasStdExtZbtBit = 25,
  Feature_HasStdExtZbbOrZbpBit = 10,
  Feature_HasStdExtZbkbBit = 16,
  Feature_HasStdExtZbkxBit = 18,
  Feature_HasStdExtZbpOrZbkxBit = 22,
  Feature_HasStdExtZbpOrZbkbBit = 21,
  Feature_HasStdExtZbbOrZbkbBit = 9,
  Feature_HasStdExtZbbOrZbpOrZbkbBit = 11,
  Feature_HasStdExtZbkcBit = 17,
  Feature_HasStdExtZbcOrZbkcBit = 13,
  Feature_HasStdExtZkndBit = 38,
  Feature_HasStdExtZkneBit = 40,
  Feature_HasStdExtZkndOrZkneBit = 39,
  Feature_HasStdExtZknhBit = 41,
  Feature_HasStdExtZksedBit = 43,
  Feature_HasStdExtZkshBit = 44,
  Feature_HasStdExtZkrBit = 42,
  Feature_HasRVCHintsBit = 0,
  Feature_HasVInstructionsBit = 46,
  Feature_HasVInstructionsI64Bit = 48,
  Feature_HasVInstructionsAnyFBit = 47,
  Feature_HasStdExtZicbomBit = 34,
  Feature_HasStdExtZicbozBit = 36,
  Feature_HasStdExtZicbopBit = 35,
  Feature_IsRV64Bit = 51,
  Feature_IsRV32Bit = 49,
  Feature_IsRV32EBit = 50,
};

static unsigned MatchRegisterName(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 2:	 // 66 strings to match.
    switch (Name[0]) {
    default: break;
    case 'f':	 // 30 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 3 strings to match.
        return 72;	 // "f0"
      case '1':	 // 3 strings to match.
        return 73;	 // "f1"
      case '2':	 // 3 strings to match.
        return 74;	 // "f2"
      case '3':	 // 3 strings to match.
        return 75;	 // "f3"
      case '4':	 // 3 strings to match.
        return 76;	 // "f4"
      case '5':	 // 3 strings to match.
        return 77;	 // "f5"
      case '6':	 // 3 strings to match.
        return 78;	 // "f6"
      case '7':	 // 3 strings to match.
        return 79;	 // "f7"
      case '8':	 // 3 strings to match.
        return 80;	 // "f8"
      case '9':	 // 3 strings to match.
        return 81;	 // "f9"
      }
      break;
    case 'v':	 // 21 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 4 strings to match.
        return 8;	 // "v0"
      case '1':	 // 1 string to match.
        return 9;	 // "v1"
      case '2':	 // 2 strings to match.
        return 10;	 // "v2"
      case '3':	 // 1 string to match.
        return 11;	 // "v3"
      case '4':	 // 3 strings to match.
        return 12;	 // "v4"
      case '5':	 // 1 string to match.
        return 13;	 // "v5"
      case '6':	 // 2 strings to match.
        return 14;	 // "v6"
      case '7':	 // 1 string to match.
        return 15;	 // "v7"
      case '8':	 // 4 strings to match.
        return 16;	 // "v8"
      case '9':	 // 1 string to match.
        return 17;	 // "v9"
      case 'l':	 // 1 string to match.
        return 3;	 // "vl"
      }
      break;
    case 'x':	 // 15 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 2 strings to match.
        return 40;	 // "x0"
      case '1':	 // 1 string to match.
        return 41;	 // "x1"
      case '2':	 // 2 strings to match.
        return 42;	 // "x2"
      case '3':	 // 1 string to match.
        return 43;	 // "x3"
      case '4':	 // 2 strings to match.
        return 44;	 // "x4"
      case '5':	 // 1 string to match.
        return 45;	 // "x5"
      case '6':	 // 2 strings to match.
        return 46;	 // "x6"
      case '7':	 // 1 string to match.
        return 47;	 // "x7"
      case '8':	 // 2 strings to match.
        return 48;	 // "x8"
      case '9':	 // 1 string to match.
        return 49;	 // "x9"
      }
      break;
    }
    break;
  case 3:	 // 140 strings to match.
    switch (Name[0]) {
    default: break;
    case 'f':	 // 67 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 30 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return 82;	 // "f10"
        case '1':	 // 3 strings to match.
          return 83;	 // "f11"
        case '2':	 // 3 strings to match.
          return 84;	 // "f12"
        case '3':	 // 3 strings to match.
          return 85;	 // "f13"
        case '4':	 // 3 strings to match.
          return 86;	 // "f14"
        case '5':	 // 3 strings to match.
          return 87;	 // "f15"
        case '6':	 // 3 strings to match.
          return 88;	 // "f16"
        case '7':	 // 3 strings to match.
          return 89;	 // "f17"
        case '8':	 // 3 strings to match.
          return 90;	 // "f18"
        case '9':	 // 3 strings to match.
          return 91;	 // "f19"
        }
        break;
      case '2':	 // 30 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return 92;	 // "f20"
        case '1':	 // 3 strings to match.
          return 93;	 // "f21"
        case '2':	 // 3 strings to match.
          return 94;	 // "f22"
        case '3':	 // 3 strings to match.
          return 95;	 // "f23"
        case '4':	 // 3 strings to match.
          return 96;	 // "f24"
        case '5':	 // 3 strings to match.
          return 97;	 // "f25"
        case '6':	 // 3 strings to match.
          return 98;	 // "f26"
        case '7':	 // 3 strings to match.
          return 99;	 // "f27"
        case '8':	 // 3 strings to match.
          return 100;	 // "f28"
        case '9':	 // 3 strings to match.
          return 101;	 // "f29"
        }
        break;
      case '3':	 // 6 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return 102;	 // "f30"
        case '1':	 // 3 strings to match.
          return 103;	 // "f31"
        }
        break;
      case 'r':	 // 1 string to match.
        if (Name[2] != 'm')
          break;
        return 2;	 // "frm"
      }
      break;
    case 'v':	 // 40 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 18 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 2 strings to match.
          return 18;	 // "v10"
        case '1':	 // 1 string to match.
          return 19;	 // "v11"
        case '2':	 // 3 strings to match.
          return 20;	 // "v12"
        case '3':	 // 1 string to match.
          return 21;	 // "v13"
        case '4':	 // 2 strings to match.
          return 22;	 // "v14"
        case '5':	 // 1 string to match.
          return 23;	 // "v15"
        case '6':	 // 4 strings to match.
          return 24;	 // "v16"
        case '7':	 // 1 string to match.
          return 25;	 // "v17"
        case '8':	 // 2 strings to match.
          return 26;	 // "v18"
        case '9':	 // 1 string to match.
          return 27;	 // "v19"
        }
        break;
      case '2':	 // 19 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return 28;	 // "v20"
        case '1':	 // 1 string to match.
          return 29;	 // "v21"
        case '2':	 // 2 strings to match.
          return 30;	 // "v22"
        case '3':	 // 1 string to match.
          return 31;	 // "v23"
        case '4':	 // 4 strings to match.
          return 32;	 // "v24"
        case '5':	 // 1 string to match.
          return 33;	 // "v25"
        case '6':	 // 2 strings to match.
          return 34;	 // "v26"
        case '7':	 // 1 string to match.
          return 35;	 // "v27"
        case '8':	 // 3 strings to match.
          return 36;	 // "v28"
        case '9':	 // 1 string to match.
          return 37;	 // "v29"
        }
        break;
      case '3':	 // 3 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 2 strings to match.
          return 38;	 // "v30"
        case '1':	 // 1 string to match.
          return 39;	 // "v31"
        }
        break;
      }
      break;
    case 'x':	 // 33 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 15 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 2 strings to match.
          return 50;	 // "x10"
        case '1':	 // 1 string to match.
          return 51;	 // "x11"
        case '2':	 // 2 strings to match.
          return 52;	 // "x12"
        case '3':	 // 1 string to match.
          return 53;	 // "x13"
        case '4':	 // 2 strings to match.
          return 54;	 // "x14"
        case '5':	 // 1 string to match.
          return 55;	 // "x15"
        case '6':	 // 2 strings to match.
          return 56;	 // "x16"
        case '7':	 // 1 string to match.
          return 57;	 // "x17"
        case '8':	 // 2 strings to match.
          return 58;	 // "x18"
        case '9':	 // 1 string to match.
          return 59;	 // "x19"
        }
        break;
      case '2':	 // 15 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 2 strings to match.
          return 60;	 // "x20"
        case '1':	 // 1 string to match.
          return 61;	 // "x21"
        case '2':	 // 2 strings to match.
          return 62;	 // "x22"
        case '3':	 // 1 string to match.
          return 63;	 // "x23"
        case '4':	 // 2 strings to match.
          return 64;	 // "x24"
        case '5':	 // 1 string to match.
          return 65;	 // "x25"
        case '6':	 // 2 strings to match.
          return 66;	 // "x26"
        case '7':	 // 1 string to match.
          return 67;	 // "x27"
        case '8':	 // 2 strings to match.
          return 68;	 // "x28"
        case '9':	 // 1 string to match.
          return 69;	 // "x29"
        }
        break;
      case '3':	 // 3 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 2 strings to match.
          return 70;	 // "x30"
        case '1':	 // 1 string to match.
          return 71;	 // "x31"
        }
        break;
      }
      break;
    }
    break;
  case 4:	 // 1 string to match.
    if (memcmp(Name.data()+0, "vxrm", 4) != 0)
      break;
    return 6;	 // "vxrm"
  case 5:	 // 3 strings to match.
    if (Name[0] != 'v')
      break;
    switch (Name[1]) {
    default: break;
    case 'l':	 // 1 string to match.
      if (memcmp(Name.data()+2, "enb", 3) != 0)
        break;
      return 4;	 // "vlenb"
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+2, "ype", 3) != 0)
        break;
      return 5;	 // "vtype"
    case 'x':	 // 1 string to match.
      if (memcmp(Name.data()+2, "sat", 3) != 0)
        break;
      return 7;	 // "vxsat"
    }
    break;
  case 6:	 // 1 string to match.
    if (memcmp(Name.data()+0, "fflags", 6) != 0)
      break;
    return 1;	 // "fflags"
  }
  return 0;
}

static unsigned MatchRegisterAltName(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 2:	 // 154 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 12 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 2 strings to match.
        return 50;	 // "a0"
      case '1':	 // 1 string to match.
        return 51;	 // "a1"
      case '2':	 // 2 strings to match.
        return 52;	 // "a2"
      case '3':	 // 1 string to match.
        return 53;	 // "a3"
      case '4':	 // 2 strings to match.
        return 54;	 // "a4"
      case '5':	 // 1 string to match.
        return 55;	 // "a5"
      case '6':	 // 2 strings to match.
        return 56;	 // "a6"
      case '7':	 // 1 string to match.
        return 57;	 // "a7"
      }
      break;
    case 'f':	 // 2 strings to match.
      if (Name[1] != 'p')
        break;
      return 48;	 // "fp"
    case 'g':	 // 1 string to match.
      if (Name[1] != 'p')
        break;
      return 43;	 // "gp"
    case 'r':	 // 1 string to match.
      if (Name[1] != 'a')
        break;
      return 41;	 // "ra"
    case 's':	 // 17 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 2 strings to match.
        return 48;	 // "s0"
      case '1':	 // 1 string to match.
        return 49;	 // "s1"
      case '2':	 // 2 strings to match.
        return 58;	 // "s2"
      case '3':	 // 1 string to match.
        return 59;	 // "s3"
      case '4':	 // 2 strings to match.
        return 60;	 // "s4"
      case '5':	 // 1 string to match.
        return 61;	 // "s5"
      case '6':	 // 2 strings to match.
        return 62;	 // "s6"
      case '7':	 // 1 string to match.
        return 63;	 // "s7"
      case '8':	 // 2 strings to match.
        return 64;	 // "s8"
      case '9':	 // 1 string to match.
        return 65;	 // "s9"
      case 'p':	 // 2 strings to match.
        return 42;	 // "sp"
      }
      break;
    case 't':	 // 12 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 45;	 // "t0"
      case '1':	 // 2 strings to match.
        return 46;	 // "t1"
      case '2':	 // 1 string to match.
        return 47;	 // "t2"
      case '3':	 // 2 strings to match.
        return 68;	 // "t3"
      case '4':	 // 1 string to match.
        return 69;	 // "t4"
      case '5':	 // 2 strings to match.
        return 70;	 // "t5"
      case '6':	 // 1 string to match.
        return 71;	 // "t6"
      case 'p':	 // 2 strings to match.
        return 44;	 // "tp"
      }
      break;
    case 'v':	 // 109 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 15 strings to match.
        return 8;	 // "v0"
      case '1':	 // 8 strings to match.
        return 9;	 // "v1"
      case '2':	 // 12 strings to match.
        return 10;	 // "v2"
      case '3':	 // 8 strings to match.
        return 11;	 // "v3"
      case '4':	 // 14 strings to match.
        return 12;	 // "v4"
      case '5':	 // 8 strings to match.
        return 13;	 // "v5"
      case '6':	 // 12 strings to match.
        return 14;	 // "v6"
      case '7':	 // 8 strings to match.
        return 15;	 // "v7"
      case '8':	 // 15 strings to match.
        return 16;	 // "v8"
      case '9':	 // 8 strings to match.
        return 17;	 // "v9"
      case 'l':	 // 1 string to match.
        return 3;	 // "vl"
      }
      break;
    }
    break;
  case 3:	 // 284 strings to match.
    switch (Name[0]) {
    default: break;
    case 'f':	 // 84 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 24 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return 82;	 // "fa0"
        case '1':	 // 3 strings to match.
          return 83;	 // "fa1"
        case '2':	 // 3 strings to match.
          return 84;	 // "fa2"
        case '3':	 // 3 strings to match.
          return 85;	 // "fa3"
        case '4':	 // 3 strings to match.
          return 86;	 // "fa4"
        case '5':	 // 3 strings to match.
          return 87;	 // "fa5"
        case '6':	 // 3 strings to match.
          return 88;	 // "fa6"
        case '7':	 // 3 strings to match.
          return 89;	 // "fa7"
        }
        break;
      case 's':	 // 30 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return 80;	 // "fs0"
        case '1':	 // 3 strings to match.
          return 81;	 // "fs1"
        case '2':	 // 3 strings to match.
          return 90;	 // "fs2"
        case '3':	 // 3 strings to match.
          return 91;	 // "fs3"
        case '4':	 // 3 strings to match.
          return 92;	 // "fs4"
        case '5':	 // 3 strings to match.
          return 93;	 // "fs5"
        case '6':	 // 3 strings to match.
          return 94;	 // "fs6"
        case '7':	 // 3 strings to match.
          return 95;	 // "fs7"
        case '8':	 // 3 strings to match.
          return 96;	 // "fs8"
        case '9':	 // 3 strings to match.
          return 97;	 // "fs9"
        }
        break;
      case 't':	 // 30 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return 72;	 // "ft0"
        case '1':	 // 3 strings to match.
          return 73;	 // "ft1"
        case '2':	 // 3 strings to match.
          return 74;	 // "ft2"
        case '3':	 // 3 strings to match.
          return 75;	 // "ft3"
        case '4':	 // 3 strings to match.
          return 76;	 // "ft4"
        case '5':	 // 3 strings to match.
          return 77;	 // "ft5"
        case '6':	 // 3 strings to match.
          return 78;	 // "ft6"
        case '7':	 // 3 strings to match.
          return 79;	 // "ft7"
        case '8':	 // 3 strings to match.
          return 100;	 // "ft8"
        case '9':	 // 3 strings to match.
          return 101;	 // "ft9"
        }
        break;
      }
      break;
    case 's':	 // 3 strings to match.
      if (Name[1] != '1')
        break;
      switch (Name[2]) {
      default: break;
      case '0':	 // 2 strings to match.
        return 66;	 // "s10"
      case '1':	 // 1 string to match.
        return 67;	 // "s11"
      }
      break;
    case 'v':	 // 197 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 105 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 12 strings to match.
          return 18;	 // "v10"
        case '1':	 // 8 strings to match.
          return 19;	 // "v11"
        case '2':	 // 14 strings to match.
          return 20;	 // "v12"
        case '3':	 // 8 strings to match.
          return 21;	 // "v13"
        case '4':	 // 12 strings to match.
          return 22;	 // "v14"
        case '5':	 // 8 strings to match.
          return 23;	 // "v15"
        case '6':	 // 15 strings to match.
          return 24;	 // "v16"
        case '7':	 // 8 strings to match.
          return 25;	 // "v17"
        case '8':	 // 12 strings to match.
          return 26;	 // "v18"
        case '9':	 // 8 strings to match.
          return 27;	 // "v19"
        }
        break;
      case '2':	 // 88 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 14 strings to match.
          return 28;	 // "v20"
        case '1':	 // 8 strings to match.
          return 29;	 // "v21"
        case '2':	 // 12 strings to match.
          return 30;	 // "v22"
        case '3':	 // 8 strings to match.
          return 31;	 // "v23"
        case '4':	 // 15 strings to match.
          return 32;	 // "v24"
        case '5':	 // 7 strings to match.
          return 33;	 // "v25"
        case '6':	 // 9 strings to match.
          return 34;	 // "v26"
        case '7':	 // 5 strings to match.
          return 35;	 // "v27"
        case '8':	 // 7 strings to match.
          return 36;	 // "v28"
        case '9':	 // 3 strings to match.
          return 37;	 // "v29"
        }
        break;
      case '3':	 // 4 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return 38;	 // "v30"
        case '1':	 // 1 string to match.
          return 39;	 // "v31"
        }
        break;
      }
      break;
    }
    break;
  case 4:	 // 15 strings to match.
    switch (Name[0]) {
    default: break;
    case 'f':	 // 12 strings to match.
      switch (Name[1]) {
      default: break;
      case 's':	 // 6 strings to match.
        if (Name[2] != '1')
          break;
        switch (Name[3]) {
        default: break;
        case '0':	 // 3 strings to match.
          return 98;	 // "fs10"
        case '1':	 // 3 strings to match.
          return 99;	 // "fs11"
        }
        break;
      case 't':	 // 6 strings to match.
        if (Name[2] != '1')
          break;
        switch (Name[3]) {
        default: break;
        case '0':	 // 3 strings to match.
          return 102;	 // "ft10"
        case '1':	 // 3 strings to match.
          return 103;	 // "ft11"
        }
        break;
      }
      break;
    case 'v':	 // 1 string to match.
      if (memcmp(Name.data()+1, "xrm", 3) != 0)
        break;
      return 6;	 // "vxrm"
    case 'z':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "ero", 3) != 0)
        break;
      return 40;	 // "zero"
    }
    break;
  case 5:	 // 3 strings to match.
    if (Name[0] != 'v')
      break;
    switch (Name[1]) {
    default: break;
    case 'l':	 // 1 string to match.
      if (memcmp(Name.data()+2, "enb", 3) != 0)
        break;
      return 4;	 // "vlenb"
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+2, "ype", 3) != 0)
        break;
      return 5;	 // "vtype"
    case 'x':	 // 1 string to match.
      if (memcmp(Name.data()+2, "sat", 3) != 0)
        break;
      return 7;	 // "vxsat"
    }
    break;
  }
  return 0;
}

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_HasStdExtMBit: return "'M' (Integer Multiplication and Division)";
  case Feature_HasStdExtZmmulBit: return "'Zmmul' (Integer Multiplication)";
  case Feature_HasStdExtMOrZmmulBit: return "'M' (Integer Multiplication and Division) or 'Zmmul' (Integer Multiplication)";
  case Feature_HasStdExtABit: return "'A' (Atomic Instructions)";
  case Feature_HasStdExtFBit: return "'F' (Single-Precision Floating-Point)";
  case Feature_HasStdExtDBit: return "'D' (Double-Precision Floating-Point)";
  case Feature_HasStdExtZihintpauseBit: return "'Zihintpause' (Pause Hint)";
  case Feature_HasStdExtZfhminBit: return "'Zfhmin' (Half-Precision Floating-Point Minimal)";
  case Feature_HasStdExtZfhBit: return "'Zfh' (Half-Precision Floating-Point)";
  case Feature_HasStdExtZfhOrZfhminBit: return "'Zfh' (Half-Precision Floating-Point) or 'Zfhmin' (Half-Precision Floating-Point Minimal)";
  case Feature_HasStdExtZfinxBit: return "'Zfinx' (Float in Integer)";
  case Feature_HasStdExtZdinxBit: return "'Zdinx' (Double in Integer)";
  case Feature_HasStdExtZhinxminBit: return "'Zhinxmin' (Half Float in Integer Minimal)";
  case Feature_HasStdExtZhinxBit: return "'Zhinx' (Half Float in Integer)";
  case Feature_HasStdExtZhinxOrZhinxminBit: return "'Zhinx' (Half Float in Integer) or 'Zhinxmin' (Half Float in Integer Minimal)";
  case Feature_HasStdExtCBit: return "'C' (Compressed Instructions)";
  case Feature_HasStdExtZbaBit: return "'Zba' (Address Generation Instructions)";
  case Feature_HasStdExtZbbBit: return "'Zbb' (Basic Bit-Manipulation)";
  case Feature_HasStdExtZbcBit: return "'Zbc' (Carry-Less Multiplication)";
  case Feature_HasStdExtZbeBit: return "'Zbe' (Extract-Deposit 'Zb' Instructions)";
  case Feature_HasStdExtZbfBit: return "'Zbf' (Bit-Field 'Zb' Instructions)";
  case Feature_HasStdExtZbmBit: return "'Zbm' (Matrix 'Zb' Instructions)";
  case Feature_HasStdExtZbpBit: return "'Zbp' (Permutation 'Zb' Instructions)";
  case Feature_HasStdExtZbrBit: return "'Zbr' (Polynomial Reduction 'Zb' Instructions)";
  case Feature_HasStdExtZbsBit: return "'Zbs' (Single-Bit Instructions)";
  case Feature_HasStdExtZbtBit: return "'Zbt' (Ternary 'Zb' Instructions)";
  case Feature_HasStdExtZbbOrZbpBit: return "'Zbb' (Basic Bit-Manipulation) or 'Zbp' (Permutation 'Zb' Instructions)";
  case Feature_HasStdExtZbkbBit: return "'Zbkb' (Bitmanip instructions for Cryptography)";
  case Feature_HasStdExtZbkxBit: return "'Zbkx' (Crossbar permutation instructions)";
  case Feature_HasStdExtZbpOrZbkxBit: return "'Zbp' (Permutation 'Zb' Instructions) or 'Zbkx' (Crossbar permutation instructions)";
  case Feature_HasStdExtZbpOrZbkbBit: return "'Zbp' (Permutation 'Zb' Instructions) or 'Zbkb' (Bitmanip instructions for Cryptography)";
  case Feature_HasStdExtZbbOrZbkbBit: return "'Zbb' (Basic Bit-Manipulation) or 'Zbkb' (Bitmanip instructions for Cryptography)";
  case Feature_HasStdExtZbbOrZbpOrZbkbBit: return "'Zbb' (Basic Bit-Manipulation) or 'Zbp' (Permutation 'Zb' Instructions) or 'Zbkb' (Bitmanip instructions for Cryptography)";
  case Feature_HasStdExtZbkcBit: return "'Zbkc' (Carry-less multiply instructions for Cryptography)";
  case Feature_HasStdExtZbcOrZbkcBit: return "'Zbc' (Carry-Less Multiplication) or 'Zbkc' (Carry-less multiply instructions for Cryptography)";
  case Feature_HasStdExtZkndBit: return "'Zknd' (NIST Suite: AES Decryption)";
  case Feature_HasStdExtZkneBit: return "'Zkne' (NIST Suite: AES Encryption)";
  case Feature_HasStdExtZkndOrZkneBit: return "'Zknd' (NIST Suite: AES Decryption) or 'Zkne' (NIST Suite: AES Encryption)";
  case Feature_HasStdExtZknhBit: return "'Zknh' (NIST Suite: Hash Function Instructions)";
  case Feature_HasStdExtZksedBit: return "'Zksed' (ShangMi Suite: SM4 Block Cipher Instructions)";
  case Feature_HasStdExtZkshBit: return "'Zksh' (ShangMi Suite: SM3 Hash Function Instructions)";
  case Feature_HasStdExtZkrBit: return "'Zkr' (Entropy Source Extension)";
  case Feature_HasRVCHintsBit: return "RVC Hint Instructions";
  case Feature_HasVInstructionsBit: return "'V' (Vector Extension for Application Processors), 'Zve32x' or 'Zve64x' (Vector Extensions for Embedded Processors)";
  case Feature_HasVInstructionsI64Bit: return "'V' (Vector Extension for Application Processors) or 'Zve64x' (Vector Extensions for Embedded Processors)";
  case Feature_HasVInstructionsAnyFBit: return "'V' (Vector Extension for Application Processors), 'Zve32f', 'Zve64f' or 'Zve64d' (Vector Extensions for Embedded Processors)";
  case Feature_HasStdExtZicbomBit: return "'Zicbom' (Cache-Block Management Instructions)";
  case Feature_HasStdExtZicbozBit: return "'Zicboz' (Cache-Block Zero Instructions)";
  case Feature_HasStdExtZicbopBit: return "'Zicbop' (Cache-Block Prefetch Instructions)";
  case Feature_IsRV64Bit: return "RV64I Base Instruction Set";
  case Feature_IsRV32Bit: return "RV32I Base Instruction Set";
  case Feature_IsRV32EBit: return "";
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
      case 4:	 // 1 string to match.
        if (memcmp(Mnemonic.data()+0, "move", 4) != 0)
          break;
        Mnemonic = "mv";	 // "move"
        return;
      case 5:	 // 1 string to match.
        if (memcmp(Mnemonic.data()+0, "scall", 5) != 0)
          break;
        Mnemonic = "ecall";	 // "scall"
        return;
      case 6:	 // 1 string to match.
        if (memcmp(Mnemonic.data()+0, "sbreak", 6) != 0)
          break;
        Mnemonic = "ebreak";	 // "sbreak"
        return;
      case 7:	 // 2 strings to match.
        if (memcmp(Mnemonic.data()+0, "fmv.", 4) != 0)
          break;
        switch (Mnemonic[4]) {
        default: break;
        case 's':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+5, ".x", 2) != 0)
            break;
          if (Features.test(Feature_HasStdExtFBit))	 // "fmv.s.x"
            Mnemonic = "fmv.w.x";
          return;
        case 'x':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+5, ".s", 2) != 0)
            break;
          if (Features.test(Feature_HasStdExtFBit))	 // "fmv.x.s"
            Mnemonic = "fmv.x.w";
          return;
        }
        break;
      }
    break;
  }
  switch (Mnemonic.size()) {
  default: break;
  case 4:	 // 1 string to match.
    if (memcmp(Mnemonic.data()+0, "move", 4) != 0)
      break;
    Mnemonic = "mv";	 // "move"
    return;
  case 5:	 // 1 string to match.
    if (memcmp(Mnemonic.data()+0, "scall", 5) != 0)
      break;
    Mnemonic = "ecall";	 // "scall"
    return;
  case 6:	 // 1 string to match.
    if (memcmp(Mnemonic.data()+0, "sbreak", 6) != 0)
      break;
    Mnemonic = "ebreak";	 // "sbreak"
    return;
  case 7:	 // 2 strings to match.
    if (memcmp(Mnemonic.data()+0, "fmv.", 4) != 0)
      break;
    switch (Mnemonic[4]) {
    default: break;
    case 's':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+5, ".x", 2) != 0)
        break;
      if (Features.test(Feature_HasStdExtFBit))	 // "fmv.s.x"
        Mnemonic = "fmv.w.x";
      return;
    case 'x':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+5, ".s", 2) != 0)
        break;
      if (Features.test(Feature_HasStdExtFBit))	 // "fmv.x.s"
        Mnemonic = "fmv.x.w";
      return;
    }
    break;
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
  CVT_95_addImmOperands,
  CVT_95_Reg,
  CVT_95_addRegOperands,
  CVT_regX0,
  CVT_imm_95_0,
  CVT_95_addCSRSystemRegisterOperands,
  CVT_imm_95_7,
  CVT_95_addFRMArgOperands,
  CVT_imm_95_15,
  CVT_95_addFenceArgOperands,
  CVT_imm_95_3,
  CVT_imm_95_1,
  CVT_imm_95_2,
  CVT_regX1,
  CVT_imm_95__MINUS_1,
  CVT_imm_95_31,
  CVT_imm_95_63,
  CVT_imm_95_16,
  CVT_imm_95_48,
  CVT_imm_95_30,
  CVT_imm_95_62,
  CVT_imm_95_6,
  CVT_imm_95_14,
  CVT_imm_95_32,
  CVT_imm_95_28,
  CVT_imm_95_60,
  CVT_imm_95_4,
  CVT_imm_95_12,
  CVT_imm_95_24,
  CVT_imm_95_56,
  CVT_imm_95_8,
  CVT_imm_95_3072,
  CVT_imm_95_3200,
  CVT_imm_95_3074,
  CVT_imm_95_3202,
  CVT_imm_95_3073,
  CVT_imm_95_3201,
  CVT_95_addRegOperands_95_defaultMaskRegOp,
  CVT_reg0,
  CVT_95_addVTypeIOperands,
  CVT_imm_95_255,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__InsnDirectiveOpcode1_0__UImm31_1__Reg1_2__Reg1_3__SImm13Lsb01_4,
  Convert__Reg1_2__InsnDirectiveOpcode1_0__UImm31_1__Reg1_3__SImm121_4,
  Convert__Reg1_2__InsnDirectiveOpcode1_0__UImm31_1__Reg1_5__SImm121_3,
  Convert__Reg1_1__InsnDirectiveOpcode1_0__SImm21Lsb0JAL1_2,
  Convert__Reg1_3__InsnDirectiveOpcode1_0__UImm31_1__UImm71_2__Reg1_4__Reg1_5,
  Convert__Reg1_3__InsnDirectiveOpcode1_0__UImm31_1__UImm21_2__Reg1_4__Reg1_5__Reg1_6,
  Convert__InsnDirectiveOpcode1_0__UImm31_1__Reg1_2__Reg1_5__SImm121_3,
  Convert__Reg1_1__InsnDirectiveOpcode1_0__UImm20LUI1_2,
  Convert__Reg1_0__Reg1_1__Reg1_2,
  Convert__Reg1_0__Reg1_1__SImm121_2,
  Convert__Reg1_0__Reg1_1__Reg1_2__TPRelAddSymbol1_3,
  Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3,
  Convert__Reg1_0__Reg1_1,
  Convert__Reg1_0__Reg1_1__RnumArg1_2,
  Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1,
  Convert__Reg1_0__UImm20AUIPC1_1,
  Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2,
  Convert__Reg1_0__Reg1_1__SImm13Lsb01_2,
  Convert__Reg1_0__regX0__SImm13Lsb01_1,
  Convert__Reg1_1__Reg1_0__SImm13Lsb01_2,
  Convert__regX0__Reg1_0__SImm13Lsb01_1,
  Convert__Reg1_0__Tie0_1_1__Reg1_1,
  Convert__Reg1_0__Tie0_1_1__ImmZero1_1,
  Convert__Reg1_0__Tie0_1_1__SImm6NonZero1_1,
  Convert__Reg1_0__Tie0_1_1__SImm10Lsb0000NonZero1_1,
  Convert__Reg1_0__Reg1_1__UImm10Lsb00NonZero1_2,
  Convert__Reg1_0__Tie0_1_1__SImm61_1,
  Convert__Reg1_0__SImm9Lsb01_1,
  Convert_NoOperands,
  Convert__Reg1_0__Reg1_2__imm_95_0,
  Convert__Reg1_0__Reg1_3__UImm8Lsb0001_1,
  Convert__Reg1_0__Reg1_3__UImm9Lsb0001_1,
  Convert__Reg1_0__Reg1_3__UImm7Lsb001_1,
  Convert__Reg1_0__Reg1_3__UImm8Lsb001_1,
  Convert__SImm12Lsb01_0,
  Convert__Reg1_0,
  Convert__Reg1_0__SImm61_1,
  Convert__Reg1_0__CLUIImm1_1,
  Convert__SImm6NonZero1_0,
  Convert__Reg1_0__Tie0_1_1__UImmLog2XLenNonZero1_1,
  Convert__Reg1_0__Tie0_1_1,
  Convert__CallSymbol1_0,
  Convert__Reg1_0__CallSymbol1_1,
  Convert__ZeroOffsetMemOpOperand1_0,
  Convert__Reg1_0__Reg1_2__Reg1_1__Reg1_3,
  Convert__regX0__CSRSystemRegister1_0__Reg1_1,
  Convert__regX0__CSRSystemRegister1_0__UImm51_1,
  Convert__Reg1_0__CSRSystemRegister1_1__regX0,
  Convert__Reg1_0__CSRSystemRegister1_1__Reg1_2,
  Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2,
  Convert__imm_95_0__imm_95_0,
  Convert__Reg1_0__Reg1_1__Reg1_1,
  Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_1,
  Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_1,
  Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_1,
  Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7,
  Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__imm_95_7,
  Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2__imm_95_7,
  Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3,
  Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__FRMArg1_3,
  Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2__FRMArg1_3,
  Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__imm_95_7,
  Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__FRMArg1_3,
  Convert__Reg1_0__GPRF64AsFPR1_1,
  Convert__Reg1_0__GPRPF64AsFPR1_1,
  Convert__Reg1_0__GPRAsFPR1_1,
  Convert__GPRF64AsFPR1_0__GPRAsFPR1_1,
  Convert__Reg1_0__Reg1_1__imm_95_7,
  Convert__GPRF64AsFPR1_0__Reg1_1__imm_95_7,
  Convert__Reg1_0__Reg1_1__FRMArg1_2,
  Convert__GPRF64AsFPR1_0__Reg1_1__FRMArg1_2,
  Convert__GPRPF64AsFPR1_0__GPRAsFPR1_1,
  Convert__GPRF64AsFPR1_0__Reg1_1,
  Convert__GPRPF64AsFPR1_0__Reg1_1,
  Convert__GPRAsFPR1_0__GPRF64AsFPR1_1__imm_95_7,
  Convert__GPRAsFPR1_0__GPRF64AsFPR1_1__FRMArg1_2,
  Convert__GPRAsFPR1_0__Reg1_1__imm_95_7,
  Convert__GPRAsFPR1_0__Reg1_1__FRMArg1_2,
  Convert__GPRAsFPR1_0__GPRAsFPR1_1__imm_95_7,
  Convert__GPRAsFPR1_0__GPRAsFPR1_1__FRMArg1_2,
  Convert__Reg1_0__GPRF64AsFPR1_1__imm_95_7,
  Convert__Reg1_0__GPRF64AsFPR1_1__FRMArg1_2,
  Convert__Reg1_0__GPRAsFPR1_1__imm_95_7,
  Convert__Reg1_0__GPRAsFPR1_1__FRMArg1_2,
  Convert__GPRAsFPR1_0__GPRPF64AsFPR1_1__imm_95_7,
  Convert__GPRAsFPR1_0__GPRPF64AsFPR1_1__FRMArg1_2,
  Convert__GPRAsFPR1_0__GPRAsFPR1_1,
  Convert__Reg1_0__GPRPF64AsFPR1_1__imm_95_7,
  Convert__Reg1_0__GPRPF64AsFPR1_1__FRMArg1_2,
  Convert__imm_95_15__imm_95_15,
  Convert__FenceArg1_0__FenceArg1_1,
  Convert__Reg1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2,
  Convert__Reg1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2,
  Convert__Reg1_0__GPRAsFPR1_1__GPRAsFPR1_2,
  Convert__Reg1_0__Reg1_2__Reg1_1,
  Convert__Reg1_0__GPRF64AsFPR1_2__GPRF64AsFPR1_1,
  Convert__Reg1_0__GPRPF64AsFPR1_2__GPRPF64AsFPR1_1,
  Convert__Reg1_0__GPRAsFPR1_2__GPRAsFPR1_1,
  Convert__Reg1_2__Reg1_0__BareSymbol1_1,
  Convert__Reg1_0__Reg1_3__SImm121_1,
  Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7,
  Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__GPRF64AsFPR1_3__imm_95_7,
  Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2__GPRPF64AsFPR1_3__imm_95_7,
  Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4,
  Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__GPRF64AsFPR1_3__FRMArg1_4,
  Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2__GPRPF64AsFPR1_3__FRMArg1_4,
  Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__imm_95_7,
  Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__FRMArg1_4,
  Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2,
  Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2,
  Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2,
  Convert__Reg1_0__imm_95_3__regX0,
  Convert__Reg1_0__imm_95_1__regX0,
  Convert__Reg1_0__imm_95_2__regX0,
  Convert__regX0__imm_95_3__Reg1_0,
  Convert__Reg1_0__imm_95_3__Reg1_1,
  Convert__regX0__imm_95_1__Reg1_0,
  Convert__Reg1_0__imm_95_1__Reg1_1,
  Convert__regX0__imm_95_1__UImm51_0,
  Convert__Reg1_0__imm_95_1__UImm51_1,
  Convert__Reg1_0__Reg1_1__Reg1_3__Reg1_2,
  Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__imm_95_7,
  Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__imm_95_7,
  Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__FRMArg1_2,
  Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__FRMArg1_2,
  Convert__Reg1_0__Reg1_1__Reg1_2__UImmLog2XLen1_3,
  Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3,
  Convert__regX0__imm_95_2__Reg1_0,
  Convert__Reg1_0__imm_95_2__Reg1_1,
  Convert__regX0__imm_95_2__UImm51_0,
  Convert__Reg1_0__imm_95_2__UImm51_1,
  Convert__Reg1_0__Reg1_1__UImm51_2,
  Convert__regX0__regX0,
  Convert__Reg1_0__regX0,
  Convert__Reg1_0__ZeroOffsetMemOpOperand1_1,
  Convert__regX0__SImm21Lsb0JAL1_0,
  Convert__regX1__SImm21Lsb0JAL1_0,
  Convert__Reg1_0__SImm21Lsb0JAL1_1,
  Convert__regX1__Reg1_0__imm_95_0,
  Convert__Reg1_0__Reg1_1__imm_95_0,
  Convert__regX1__Reg1_0__SImm121_1,
  Convert__regX1__Reg1_2__SImm121_0,
  Convert__regX0__Reg1_0__imm_95_0,
  Convert__regX0__Reg1_0__SImm121_1,
  Convert__regX0__Reg1_2__SImm121_0,
  Convert__Reg1_1__PseudoJumpSymbol1_0,
  Convert__Reg1_0__BareSymbol1_1,
  Convert__Reg1_0__regX0__SImm121_1,
  Convert__Reg1_0__ImmXLenLI1_1,
  Convert__Reg1_0__UImm20LUI1_1,
  Convert__Reg1_0__regX0__Reg1_1,
  Convert__regX0__regX0__imm_95_0,
  Convert__Reg1_0__Reg1_1__imm_95__MINUS_1,
  Convert__Reg1_0__Reg1_1__imm_95_31,
  Convert__Reg1_0__Reg1_1__imm_95_63,
  Convert__Reg1_0__Reg1_1__imm_95_15,
  Convert__Reg1_0__Reg1_1__imm_95_3,
  Convert__Reg1_0__Reg1_1__imm_95_1,
  Convert__Reg1_0__Reg1_1__imm_95_16,
  Convert__Reg1_0__Reg1_1__imm_95_48,
  Convert__Reg1_0__Reg1_1__imm_95_30,
  Convert__Reg1_0__Reg1_1__imm_95_62,
  Convert__Reg1_0__Reg1_1__imm_95_6,
  Convert__Reg1_0__Reg1_1__imm_95_14,
  Convert__Reg1_0__Reg1_1__imm_95_2,
  Convert__Reg1_0__Reg1_1__imm_95_32,
  Convert__Reg1_0__Reg1_1__imm_95_28,
  Convert__Reg1_0__Reg1_1__imm_95_60,
  Convert__Reg1_0__Reg1_1__imm_95_4,
  Convert__Reg1_0__Reg1_1__imm_95_12,
  Convert__Reg1_0__Reg1_1__imm_95_24,
  Convert__Reg1_0__Reg1_1__imm_95_56,
  Convert__Reg1_0__Reg1_1__imm_95_8,
  Convert__imm_95_1__imm_95_0,
  Convert__Reg1_2__SImm12Lsb000001_0,
  Convert__Reg1_0__imm_95_3072__regX0,
  Convert__Reg1_0__imm_95_3200__regX0,
  Convert__Reg1_0__imm_95_3074__regX0,
  Convert__Reg1_0__imm_95_3202__regX0,
  Convert__Reg1_0__imm_95_3073__regX0,
  Convert__Reg1_0__imm_95_3201__regX0,
  Convert__regX0__regX1__imm_95_0,
  Convert__Reg1_0__Reg1_1__UImmLog2XLenHalf1_2,
  Convert__Reg1_0__Reg1_1__regX0,
  Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3,
  Convert__Reg1_0__Reg1_1__SImm51_2__imm_95_0,
  Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0,
  Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3,
  Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2,
  Convert__Reg1_0__Reg1_1__Reg1_1__reg0,
  Convert__Reg1_0__Reg1_1__Reg1_1__RVVMaskRegOpOperand1_2,
  Convert__Reg1_0__RVVMaskRegOpOperand1_1,
  Convert__Reg1_0__Reg1_2,
  Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4,
  Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5,
  Convert__Reg1_0__Reg1_1__SImm51_2,
  Convert__Reg1_0__Reg1_0__Reg1_0,
  Convert__Reg1_0__Reg1_2__Reg1_1__RVVMaskRegOpOperand1_3,
  Convert__Reg1_0__Reg1_1__SImm5Plus11_2__RVVMaskRegOpOperand1_3,
  Convert__Reg1_0__Reg1_4__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3,
  Convert__Reg1_0__SImm51_1,
  Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3,
  Convert__Reg1_0__Reg1_1__regX0__reg0,
  Convert__Reg1_0__Reg1_1__regX0__RVVMaskRegOpOperand1_2,
  Convert__Reg1_0__Reg1_1__imm_95__MINUS_1__reg0,
  Convert__Reg1_0__Reg1_1__imm_95__MINUS_1__RVVMaskRegOpOperand1_2,
  Convert__Reg1_0__UImm51_1__VTypeI101_2,
  Convert__Reg1_0__Reg1_1__VTypeI111_2,
  Convert__Reg1_0__Reg1_1__imm_95_255,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][15] = {
  // Convert__InsnDirectiveOpcode1_0__UImm31_1__Reg1_2__Reg1_3__SImm13Lsb01_4
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_2__InsnDirectiveOpcode1_0__UImm31_1__Reg1_3__SImm121_4
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_Reg, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_2__InsnDirectiveOpcode1_0__UImm31_1__Reg1_5__SImm121_3
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_Reg, 6, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_1__InsnDirectiveOpcode1_0__SImm21Lsb0JAL1_2
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_3__InsnDirectiveOpcode1_0__UImm31_1__UImm71_2__Reg1_4__Reg1_5
  { CVT_95_Reg, 4, CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_Reg, 5, CVT_95_Reg, 6, CVT_Done },
  // Convert__Reg1_3__InsnDirectiveOpcode1_0__UImm31_1__UImm21_2__Reg1_4__Reg1_5__Reg1_6
  { CVT_95_Reg, 4, CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_Reg, 5, CVT_95_Reg, 6, CVT_95_Reg, 7, CVT_Done },
  // Convert__InsnDirectiveOpcode1_0__UImm31_1__Reg1_2__Reg1_5__SImm121_3
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_Reg, 3, CVT_95_Reg, 6, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_1__InsnDirectiveOpcode1_0__UImm20LUI1_2
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SImm121_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__TPRelAddSymbol1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__RnumArg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 3, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__UImm20AUIPC1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SImm13Lsb01_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__regX0__SImm13Lsb01_1
  { CVT_95_Reg, 1, CVT_regX0, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_1__Reg1_0__SImm13Lsb01_2
  { CVT_95_Reg, 2, CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__regX0__Reg1_0__SImm13Lsb01_1
  { CVT_regX0, 0, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__Reg1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__ImmZero1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__SImm6NonZero1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__SImm10Lsb0000NonZero1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImm10Lsb00NonZero1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__SImm61_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__SImm9Lsb01_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_0
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_3__UImm8Lsb0001_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_3__UImm9Lsb0001_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_3__UImm7Lsb001_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_3__UImm8Lsb001_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__SImm12Lsb01_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0
  { CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__SImm61_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__CLUIImm1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__SImm6NonZero1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__UImmLog2XLenNonZero1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_Done },
  // Convert__CallSymbol1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__CallSymbol1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__ZeroOffsetMemOpOperand1_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_1__Reg1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_Done },
  // Convert__regX0__CSRSystemRegister1_0__Reg1_1
  { CVT_regX0, 0, CVT_95_addCSRSystemRegisterOperands, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__regX0__CSRSystemRegister1_0__UImm51_1
  { CVT_regX0, 0, CVT_95_addCSRSystemRegisterOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__CSRSystemRegister1_1__regX0
  { CVT_95_Reg, 1, CVT_95_addCSRSystemRegisterOperands, 2, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__CSRSystemRegister1_1__Reg1_2
  { CVT_95_Reg, 1, CVT_95_addCSRSystemRegisterOperands, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2
  { CVT_95_Reg, 1, CVT_95_addCSRSystemRegisterOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__imm_95_0__imm_95_0
  { CVT_imm_95_0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 2, CVT_Done },
  // Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_imm_95_7, 0, CVT_Done },
  // Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__imm_95_7
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_imm_95_7, 0, CVT_Done },
  // Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2__imm_95_7
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addFRMArgOperands, 4, CVT_Done },
  // Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__FRMArg1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addFRMArgOperands, 4, CVT_Done },
  // Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2__FRMArg1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addFRMArgOperands, 4, CVT_Done },
  // Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__imm_95_7
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_imm_95_7, 0, CVT_Done },
  // Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__FRMArg1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addFRMArgOperands, 4, CVT_Done },
  // Convert__Reg1_0__GPRF64AsFPR1_1
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__Reg1_0__GPRPF64AsFPR1_1
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__Reg1_0__GPRAsFPR1_1
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GPRF64AsFPR1_0__GPRAsFPR1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_7
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__GPRF64AsFPR1_0__Reg1_1__imm_95_7
  { CVT_95_addRegOperands, 1, CVT_95_Reg, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__FRMArg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addFRMArgOperands, 3, CVT_Done },
  // Convert__GPRF64AsFPR1_0__Reg1_1__FRMArg1_2
  { CVT_95_addRegOperands, 1, CVT_95_Reg, 2, CVT_95_addFRMArgOperands, 3, CVT_Done },
  // Convert__GPRPF64AsFPR1_0__GPRAsFPR1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GPRF64AsFPR1_0__Reg1_1
  { CVT_95_addRegOperands, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__GPRPF64AsFPR1_0__Reg1_1
  { CVT_95_addRegOperands, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__GPRAsFPR1_0__GPRF64AsFPR1_1__imm_95_7
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__GPRAsFPR1_0__GPRF64AsFPR1_1__FRMArg1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addFRMArgOperands, 3, CVT_Done },
  // Convert__GPRAsFPR1_0__Reg1_1__imm_95_7
  { CVT_95_addRegOperands, 1, CVT_95_Reg, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__GPRAsFPR1_0__Reg1_1__FRMArg1_2
  { CVT_95_addRegOperands, 1, CVT_95_Reg, 2, CVT_95_addFRMArgOperands, 3, CVT_Done },
  // Convert__GPRAsFPR1_0__GPRAsFPR1_1__imm_95_7
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__GPRAsFPR1_0__GPRAsFPR1_1__FRMArg1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addFRMArgOperands, 3, CVT_Done },
  // Convert__Reg1_0__GPRF64AsFPR1_1__imm_95_7
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__GPRF64AsFPR1_1__FRMArg1_2
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_95_addFRMArgOperands, 3, CVT_Done },
  // Convert__Reg1_0__GPRAsFPR1_1__imm_95_7
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__GPRAsFPR1_1__FRMArg1_2
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_95_addFRMArgOperands, 3, CVT_Done },
  // Convert__GPRAsFPR1_0__GPRPF64AsFPR1_1__imm_95_7
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__GPRAsFPR1_0__GPRPF64AsFPR1_1__FRMArg1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addFRMArgOperands, 3, CVT_Done },
  // Convert__GPRAsFPR1_0__GPRAsFPR1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__Reg1_0__GPRPF64AsFPR1_1__imm_95_7
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__GPRPF64AsFPR1_1__FRMArg1_2
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_95_addFRMArgOperands, 3, CVT_Done },
  // Convert__imm_95_15__imm_95_15
  { CVT_imm_95_15, 0, CVT_imm_95_15, 0, CVT_Done },
  // Convert__FenceArg1_0__FenceArg1_1
  { CVT_95_addFenceArgOperands, 1, CVT_95_addFenceArgOperands, 2, CVT_Done },
  // Convert__Reg1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__Reg1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__Reg1_0__GPRAsFPR1_1__GPRAsFPR1_2
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__GPRF64AsFPR1_2__GPRF64AsFPR1_1
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__Reg1_0__GPRPF64AsFPR1_2__GPRPF64AsFPR1_1
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__Reg1_0__GPRAsFPR1_2__GPRAsFPR1_1
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__Reg1_2__Reg1_0__BareSymbol1_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_3__SImm121_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_imm_95_7, 0, CVT_Done },
  // Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__GPRF64AsFPR1_3__imm_95_7
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_imm_95_7, 0, CVT_Done },
  // Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2__GPRPF64AsFPR1_3__imm_95_7
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_95_addFRMArgOperands, 5, CVT_Done },
  // Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__GPRF64AsFPR1_3__FRMArg1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_95_addFRMArgOperands, 5, CVT_Done },
  // Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2__GPRPF64AsFPR1_3__FRMArg1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_95_addFRMArgOperands, 5, CVT_Done },
  // Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__imm_95_7
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_imm_95_7, 0, CVT_Done },
  // Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__FRMArg1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_95_addFRMArgOperands, 5, CVT_Done },
  // Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__Reg1_0__imm_95_3__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_1__regX0
  { CVT_95_Reg, 1, CVT_imm_95_1, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_2__regX0
  { CVT_95_Reg, 1, CVT_imm_95_2, 0, CVT_regX0, 0, CVT_Done },
  // Convert__regX0__imm_95_3__Reg1_0
  { CVT_regX0, 0, CVT_imm_95_3, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__imm_95_3__Reg1_1
  { CVT_95_Reg, 1, CVT_imm_95_3, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__regX0__imm_95_1__Reg1_0
  { CVT_regX0, 0, CVT_imm_95_1, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__imm_95_1__Reg1_1
  { CVT_95_Reg, 1, CVT_imm_95_1, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__regX0__imm_95_1__UImm51_0
  { CVT_regX0, 0, CVT_imm_95_1, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__imm_95_1__UImm51_1
  { CVT_95_Reg, 1, CVT_imm_95_1, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_3__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_95_Reg, 3, CVT_Done },
  // Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__imm_95_7
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__imm_95_7
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__FRMArg1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addFRMArgOperands, 3, CVT_Done },
  // Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__FRMArg1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addFRMArgOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__UImmLog2XLen1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__regX0__imm_95_2__Reg1_0
  { CVT_regX0, 0, CVT_imm_95_2, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__imm_95_2__Reg1_1
  { CVT_95_Reg, 1, CVT_imm_95_2, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__regX0__imm_95_2__UImm51_0
  { CVT_regX0, 0, CVT_imm_95_2, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__imm_95_2__UImm51_1
  { CVT_95_Reg, 1, CVT_imm_95_2, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImm51_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__regX0__regX0
  { CVT_regX0, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__regX0
  { CVT_95_Reg, 1, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__ZeroOffsetMemOpOperand1_1
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__regX0__SImm21Lsb0JAL1_0
  { CVT_regX0, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__regX1__SImm21Lsb0JAL1_0
  { CVT_regX1, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__SImm21Lsb0JAL1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__regX1__Reg1_0__imm_95_0
  { CVT_regX1, 0, CVT_95_Reg, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regX1__Reg1_0__SImm121_1
  { CVT_regX1, 0, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__regX1__Reg1_2__SImm121_0
  { CVT_regX1, 0, CVT_95_Reg, 3, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__regX0__Reg1_0__imm_95_0
  { CVT_regX0, 0, CVT_95_Reg, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regX0__Reg1_0__SImm121_1
  { CVT_regX0, 0, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__regX0__Reg1_2__SImm121_0
  { CVT_regX0, 0, CVT_95_Reg, 3, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_1__PseudoJumpSymbol1_0
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__BareSymbol1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__regX0__SImm121_1
  { CVT_95_Reg, 1, CVT_regX0, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__ImmXLenLI1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__UImm20LUI1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__regX0__Reg1_1
  { CVT_95_Reg, 1, CVT_regX0, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__regX0__regX0__imm_95_0
  { CVT_regX0, 0, CVT_regX0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95__MINUS_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95__MINUS_1, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_31
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_31, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_63
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_63, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_15
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_16
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_16, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_48
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_48, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_30
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_30, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_62
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_62, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_6
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_14
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_32
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_32, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_28
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_28, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_60
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_60, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_4
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_12
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_24
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_24, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_56
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_56, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_8
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_8, 0, CVT_Done },
  // Convert__imm_95_1__imm_95_0
  { CVT_imm_95_1, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_2__SImm12Lsb000001_0
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__imm_95_3072__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3072, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_3200__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3200, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_3074__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3074, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_3202__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3202, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_3073__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3073, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_3201__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3201, 0, CVT_regX0, 0, CVT_Done },
  // Convert__regX0__regX1__imm_95_0
  { CVT_regX0, 0, CVT_regX1, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImmLog2XLenHalf1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__regX0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SImm51_2__imm_95_0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addRegOperands_95_defaultMaskRegOp, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_1__reg0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 2, CVT_reg0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_1__RVVMaskRegOpOperand1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 2, CVT_95_addRegOperands_95_defaultMaskRegOp, 3, CVT_Done },
  // Convert__Reg1_0__RVVMaskRegOpOperand1_1
  { CVT_95_Reg, 1, CVT_95_addRegOperands_95_defaultMaskRegOp, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 5, CVT_95_addRegOperands_95_defaultMaskRegOp, 6, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SImm51_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_0__Reg1_0
  { CVT_95_Reg, 1, CVT_95_Reg, 1, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_1__RVVMaskRegOpOperand1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SImm5Plus11_2__RVVMaskRegOpOperand1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 5, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__Reg1_0__SImm51_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__regX0__reg0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_regX0, 0, CVT_reg0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__regX0__RVVMaskRegOpOperand1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_regX0, 0, CVT_95_addRegOperands_95_defaultMaskRegOp, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95__MINUS_1__reg0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95__MINUS_1, 0, CVT_reg0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95__MINUS_1__RVVMaskRegOpOperand1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95__MINUS_1, 0, CVT_95_addRegOperands_95_defaultMaskRegOp, 3, CVT_Done },
  // Convert__Reg1_0__UImm51_1__VTypeI101_2
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_95_addVTypeIOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__VTypeI111_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addVTypeIOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_255
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_255, 0, CVT_Done },
};

void RISCVAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands,
                const SmallBitVector &OptionalOperandsMask) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  unsigned DefaultsOffset[8] = { 0 };
  assert(OptionalOperandsMask.size() == 7);
  for (unsigned i = 0, NumDefaults = 0; i < 7; ++i) {
    DefaultsOffset[i + 1] = NumDefaults;
    NumDefaults += (OptionalOperandsMask[i] ? 1 : 0);
  }
  unsigned OpIdx;
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p += 2) {
    OpIdx = *(p + 1) - DefaultsOffset[*(p + 1)];
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addRegOperands(Inst, 1);
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
    case CVT_95_addImmOperands:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addImmOperands(Inst, 1);
      break;
    case CVT_95_Reg:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addRegOperands:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_regX0:
      Inst.addOperand(MCOperand::createReg(RISCV::X0));
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_95_addCSRSystemRegisterOperands:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addCSRSystemRegisterOperands(Inst, 1);
      break;
    case CVT_imm_95_7:
      Inst.addOperand(MCOperand::createImm(7));
      break;
    case CVT_95_addFRMArgOperands:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addFRMArgOperands(Inst, 1);
      break;
    case CVT_imm_95_15:
      Inst.addOperand(MCOperand::createImm(15));
      break;
    case CVT_95_addFenceArgOperands:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addFenceArgOperands(Inst, 1);
      break;
    case CVT_imm_95_3:
      Inst.addOperand(MCOperand::createImm(3));
      break;
    case CVT_imm_95_1:
      Inst.addOperand(MCOperand::createImm(1));
      break;
    case CVT_imm_95_2:
      Inst.addOperand(MCOperand::createImm(2));
      break;
    case CVT_regX1:
      Inst.addOperand(MCOperand::createReg(RISCV::X1));
      break;
    case CVT_imm_95__MINUS_1:
      Inst.addOperand(MCOperand::createImm(-1));
      break;
    case CVT_imm_95_31:
      Inst.addOperand(MCOperand::createImm(31));
      break;
    case CVT_imm_95_63:
      Inst.addOperand(MCOperand::createImm(63));
      break;
    case CVT_imm_95_16:
      Inst.addOperand(MCOperand::createImm(16));
      break;
    case CVT_imm_95_48:
      Inst.addOperand(MCOperand::createImm(48));
      break;
    case CVT_imm_95_30:
      Inst.addOperand(MCOperand::createImm(30));
      break;
    case CVT_imm_95_62:
      Inst.addOperand(MCOperand::createImm(62));
      break;
    case CVT_imm_95_6:
      Inst.addOperand(MCOperand::createImm(6));
      break;
    case CVT_imm_95_14:
      Inst.addOperand(MCOperand::createImm(14));
      break;
    case CVT_imm_95_32:
      Inst.addOperand(MCOperand::createImm(32));
      break;
    case CVT_imm_95_28:
      Inst.addOperand(MCOperand::createImm(28));
      break;
    case CVT_imm_95_60:
      Inst.addOperand(MCOperand::createImm(60));
      break;
    case CVT_imm_95_4:
      Inst.addOperand(MCOperand::createImm(4));
      break;
    case CVT_imm_95_12:
      Inst.addOperand(MCOperand::createImm(12));
      break;
    case CVT_imm_95_24:
      Inst.addOperand(MCOperand::createImm(24));
      break;
    case CVT_imm_95_56:
      Inst.addOperand(MCOperand::createImm(56));
      break;
    case CVT_imm_95_8:
      Inst.addOperand(MCOperand::createImm(8));
      break;
    case CVT_imm_95_3072:
      Inst.addOperand(MCOperand::createImm(3072));
      break;
    case CVT_imm_95_3200:
      Inst.addOperand(MCOperand::createImm(3200));
      break;
    case CVT_imm_95_3074:
      Inst.addOperand(MCOperand::createImm(3074));
      break;
    case CVT_imm_95_3202:
      Inst.addOperand(MCOperand::createImm(3202));
      break;
    case CVT_imm_95_3073:
      Inst.addOperand(MCOperand::createImm(3073));
      break;
    case CVT_imm_95_3201:
      Inst.addOperand(MCOperand::createImm(3201));
      break;
    case CVT_95_addRegOperands_95_defaultMaskRegOp:
      if (OptionalOperandsMask[*(p + 1) - 1]) {
        defaultMaskRegOp()->addRegOperands(Inst, 1);
      } else {
        static_cast<RISCVOperand &>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      }
      break;
    case CVT_reg0:
      Inst.addOperand(MCOperand::createReg(0));
      break;
    case CVT_95_addVTypeIOperands:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addVTypeIOperands(Inst, 1);
      break;
    case CVT_imm_95_255:
      Inst.addOperand(MCOperand::createImm(255));
      break;
    }
  }
}

void RISCVAsmParser::
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
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regX0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addCSRSystemRegisterOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_7:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addFRMArgOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_15:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addFenceArgOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_3:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_2:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regX1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_imm_95__MINUS_1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_31:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_63:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_16:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_48:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_30:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_62:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_6:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_14:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_32:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_28:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_60:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_4:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_12:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_24:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_56:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_8:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3072:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3200:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3074:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3202:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3073:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3201:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addRegOperands_95_defaultMaskRegOp:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_reg0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addVTypeIOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_255:
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
  MCK__40_, // '('
  MCK__41_, // ')'
  MCK_LAST_TOKEN = MCK__41_,
  MCK_Reg69, // derived register class
  MCK_Reg66, // derived register class
  MCK_Reg63, // derived register class
  MCK_Reg60, // derived register class
  MCK_Reg57, // derived register class
  MCK_Reg54, // derived register class
  MCK_Reg51, // derived register class
  MCK_Reg48, // derived register class
  MCK_Reg45, // derived register class
  MCK_Reg42, // derived register class
  MCK_Reg39, // derived register class
  MCK_Reg30, // derived register class
  MCK_Reg28, // derived register class
  MCK_Reg24, // derived register class
  MCK_Reg21, // derived register class
  MCK_Reg18, // derived register class
  MCK_GPRX0, // register class 'GPRX0'
  MCK_SP, // register class 'SP'
  MCK_VMV0, // register class 'VMV0,V0'
  MCK_Reg36, // derived register class
  MCK_VCSR, // register class 'VCSR'
  MCK_VRM8NoV0, // register class 'VRM8NoV0'
  MCK_Reg35, // derived register class
  MCK_VRM8, // register class 'VRM8'
  MCK_Reg9, // derived register class
  MCK_VRN2M4NoV0, // register class 'VRN2M4NoV0'
  MCK_Reg34, // derived register class
  MCK_VRM4NoV0, // register class 'VRM4NoV0'
  MCK_VRN2M4, // register class 'VRN2M4'
  MCK_FPR32C, // register class 'FPR32C'
  MCK_FPR64C, // register class 'FPR64C'
  MCK_GPRC, // register class 'GPRC'
  MCK_VRM4, // register class 'VRM4'
  MCK_VRN4M2NoV0, // register class 'VRN4M2NoV0'
  MCK_Reg33, // derived register class
  MCK_VRN3M2NoV0, // register class 'VRN3M2NoV0'
  MCK_VRN4M2, // register class 'VRN4M2'
  MCK_Reg32, // derived register class
  MCK_GPRTC, // register class 'GPRTC'
  MCK_VRN2M2NoV0, // register class 'VRN2M2NoV0'
  MCK_VRN3M2, // register class 'VRN3M2'
  MCK_Reg31, // derived register class
  MCK_VRM2NoV0, // register class 'VRM2NoV0'
  MCK_VRN2M2, // register class 'VRN2M2'
  MCK_GPRPF64, // register class 'GPRPF64'
  MCK_VRM2, // register class 'VRM2'
  MCK_VRN8M1NoV0, // register class 'VRN8M1NoV0'
  MCK_VRN7M1NoV0, // register class 'VRN7M1NoV0'
  MCK_VRN8M1, // register class 'VRN8M1'
  MCK_GPRJALR, // register class 'GPRJALR'
  MCK_VRN6M1NoV0, // register class 'VRN6M1NoV0'
  MCK_VRN7M1, // register class 'VRN7M1'
  MCK_VRN5M1NoV0, // register class 'VRN5M1NoV0'
  MCK_VRN6M1, // register class 'VRN6M1'
  MCK_VRN4M1NoV0, // register class 'VRN4M1NoV0'
  MCK_VRN5M1, // register class 'VRN5M1'
  MCK_VRN3M1NoV0, // register class 'VRN3M1NoV0'
  MCK_VRN4M1, // register class 'VRN4M1'
  MCK_GPRNoX0X2, // register class 'GPRNoX0X2'
  MCK_VRN2M1NoV0, // register class 'VRN2M1NoV0'
  MCK_VRN3M1, // register class 'VRN3M1'
  MCK_GPRNoX0, // register class 'GPRNoX0'
  MCK_VRN2M1, // register class 'VRN2M1'
  MCK_VRNoV0, // register class 'VRNoV0'
  MCK_FPR16, // register class 'FPR16'
  MCK_FPR32, // register class 'FPR32'
  MCK_FPR64, // register class 'FPR64'
  MCK_GPR, // register class 'GPR,GPRF16,GPRF32,GPRF64'
  MCK_VM, // register class 'VM,VR'
  MCK_AnyReg, // register class 'AnyReg'
  MCK_LAST_REGISTER = MCK_AnyReg,
  MCK_BareSymbol, // user defined class 'BareSymbol'
  MCK_CLUIImm, // user defined class 'CLUIImmAsmOperand'
  MCK_CSRSystemRegister, // user defined class 'CSRSystemRegister'
  MCK_CallSymbol, // user defined class 'CallSymbol'
  MCK_FRMArg, // user defined class 'FRMArg'
  MCK_FenceArg, // user defined class 'FenceArg'
  MCK_GPRAsFPR, // user defined class 'GPRAsFPR'
  MCK_GPRF64AsFPR, // user defined class 'GPRF64AsFPR'
  MCK_GPRPF64AsFPR, // user defined class 'GPRPF64AsFPR'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_ImmZero, // user defined class 'ImmZeroAsmOperand'
  MCK_InsnDirectiveOpcode, // user defined class 'InsnDirectiveOpcode'
  MCK_PseudoJumpSymbol, // user defined class 'PseudoJumpSymbol'
  MCK_RnumArg, // user defined class 'RnumArg'
  MCK_SImm5Plus1, // user defined class 'SImm5Plus1AsmOperand'
  MCK_SImm21Lsb0JAL, // user defined class 'Simm21Lsb0JALAsmOperand'
  MCK_TPRelAddSymbol, // user defined class 'TPRelAddSymbol'
  MCK_UImmLog2XLen, // user defined class 'UImmLog2XLenAsmOperand'
  MCK_UImmLog2XLenHalf, // user defined class 'UImmLog2XLenHalfAsmOperand'
  MCK_UImmLog2XLenNonZero, // user defined class 'UImmLog2XLenNonZeroAsmOperand'
  MCK_RVVMaskRegOpOperand, // user defined class 'VMaskAsmOperand'
  MCK_ZeroOffsetMemOpOperand, // user defined class 'ZeroOffsetMemOpOperand'
  MCK_SImm12Lsb00000, // user defined class 'anonymous_46214'
  MCK_UImm2, // user defined class 'anonymous_4976'
  MCK_UImm3, // user defined class 'anonymous_4977'
  MCK_UImm5, // user defined class 'anonymous_4978'
  MCK_UImm7, // user defined class 'anonymous_4979'
  MCK_SImm12, // user defined class 'anonymous_4980'
  MCK_SImm13Lsb0, // user defined class 'anonymous_4981'
  MCK_UImm20LUI, // user defined class 'anonymous_4982'
  MCK_UImm20AUIPC, // user defined class 'anonymous_4983'
  MCK_ImmXLenLI, // user defined class 'anonymous_4984'
  MCK_SImm6, // user defined class 'anonymous_5707'
  MCK_SImm6NonZero, // user defined class 'anonymous_5708'
  MCK_UImm7Lsb00, // user defined class 'anonymous_5709'
  MCK_UImm8Lsb00, // user defined class 'anonymous_5710'
  MCK_UImm8Lsb000, // user defined class 'anonymous_5711'
  MCK_SImm9Lsb0, // user defined class 'anonymous_5712'
  MCK_UImm9Lsb000, // user defined class 'anonymous_5713'
  MCK_UImm10Lsb00NonZero, // user defined class 'anonymous_5714'
  MCK_SImm10Lsb0000NonZero, // user defined class 'anonymous_5715'
  MCK_SImm12Lsb0, // user defined class 'anonymous_5716'
  MCK_VTypeI10, // user defined class 'anonymous_6088'
  MCK_VTypeI11, // user defined class 'anonymous_6089'
  MCK_SImm5, // user defined class 'anonymous_6090'
  NumMatchClassKinds
};

} // end anonymous namespace

static unsigned getDiagKindFromRegisterClass(MatchClassKind RegisterClass) {
  return MCTargetAsmParser::Match_InvalidOperand;
}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 2 strings to match.
    switch (Name[0]) {
    default: break;
    case '(':	 // 1 string to match.
      return MCK__40_;	 // "("
    case ')':	 // 1 string to match.
      return MCK__41_;	 // ")"
    }
    break;
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

  case MCK_Reg69:
    return B == MCK_VRN8M1;

  case MCK_Reg66:
    return B == MCK_VRN7M1;

  case MCK_Reg63:
    return B == MCK_VRN6M1;

  case MCK_Reg60:
    return B == MCK_VRN5M1;

  case MCK_Reg57:
    return B == MCK_VRN4M2;

  case MCK_Reg54:
    return B == MCK_VRN4M1;

  case MCK_Reg51:
    return B == MCK_VRN3M2;

  case MCK_Reg48:
    return B == MCK_VRN3M1;

  case MCK_Reg45:
    return B == MCK_VRN2M4;

  case MCK_Reg42:
    return B == MCK_VRN2M2;

  case MCK_Reg39:
    return B == MCK_VRN2M1;

  case MCK_Reg30:
    switch (B) {
    default: return false;
    case MCK_Reg31: return true;
    case MCK_GPRPF64: return true;
    }

  case MCK_Reg28:
    return B == MCK_GPRPF64;

  case MCK_Reg24:
    return B == MCK_VRM8;

  case MCK_Reg21:
    return B == MCK_VRM4;

  case MCK_Reg18:
    return B == MCK_VRM2;

  case MCK_GPRX0:
    switch (B) {
    default: return false;
    case MCK_GPR: return true;
    case MCK_AnyReg: return true;
    }

  case MCK_SP:
    switch (B) {
    default: return false;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    case MCK_AnyReg: return true;
    }

  case MCK_VMV0:
    switch (B) {
    default: return false;
    case MCK_VM: return true;
    case MCK_AnyReg: return true;
    }

  case MCK_Reg36:
    switch (B) {
    default: return false;
    case MCK_Reg35: return true;
    case MCK_Reg34: return true;
    case MCK_Reg33: return true;
    case MCK_Reg32: return true;
    case MCK_Reg31: return true;
    case MCK_GPRPF64: return true;
    }

  case MCK_VRM8NoV0:
    return B == MCK_VRM8;

  case MCK_Reg35:
    switch (B) {
    default: return false;
    case MCK_Reg33: return true;
    case MCK_Reg32: return true;
    case MCK_Reg31: return true;
    case MCK_GPRPF64: return true;
    }

  case MCK_Reg9:
    switch (B) {
    default: return false;
    case MCK_GPRC: return true;
    case MCK_GPRTC: return true;
    case MCK_GPRJALR: return true;
    case MCK_GPRNoX0X2: return true;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    case MCK_AnyReg: return true;
    }

  case MCK_VRN2M4NoV0:
    return B == MCK_VRN2M4;

  case MCK_Reg34:
    switch (B) {
    default: return false;
    case MCK_Reg33: return true;
    case MCK_Reg32: return true;
    case MCK_Reg31: return true;
    case MCK_GPRPF64: return true;
    }

  case MCK_VRM4NoV0:
    return B == MCK_VRM4;

  case MCK_FPR32C:
    return B == MCK_FPR32;

  case MCK_FPR64C:
    switch (B) {
    default: return false;
    case MCK_FPR64: return true;
    case MCK_AnyReg: return true;
    }

  case MCK_GPRC:
    switch (B) {
    default: return false;
    case MCK_GPRJALR: return true;
    case MCK_GPRNoX0X2: return true;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    case MCK_AnyReg: return true;
    }

  case MCK_VRN4M2NoV0:
    return B == MCK_VRN4M2;

  case MCK_Reg33:
    switch (B) {
    default: return false;
    case MCK_Reg32: return true;
    case MCK_Reg31: return true;
    case MCK_GPRPF64: return true;
    }

  case MCK_VRN3M2NoV0:
    return B == MCK_VRN3M2;

  case MCK_Reg32:
    switch (B) {
    default: return false;
    case MCK_Reg31: return true;
    case MCK_GPRPF64: return true;
    }

  case MCK_GPRTC:
    switch (B) {
    default: return false;
    case MCK_GPRJALR: return true;
    case MCK_GPRNoX0X2: return true;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    case MCK_AnyReg: return true;
    }

  case MCK_VRN2M2NoV0:
    return B == MCK_VRN2M2;

  case MCK_Reg31:
    return B == MCK_GPRPF64;

  case MCK_VRM2NoV0:
    return B == MCK_VRM2;

  case MCK_VRN8M1NoV0:
    return B == MCK_VRN8M1;

  case MCK_VRN7M1NoV0:
    return B == MCK_VRN7M1;

  case MCK_GPRJALR:
    switch (B) {
    default: return false;
    case MCK_GPRNoX0X2: return true;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    case MCK_AnyReg: return true;
    }

  case MCK_VRN6M1NoV0:
    return B == MCK_VRN6M1;

  case MCK_VRN5M1NoV0:
    return B == MCK_VRN5M1;

  case MCK_VRN4M1NoV0:
    return B == MCK_VRN4M1;

  case MCK_VRN3M1NoV0:
    return B == MCK_VRN3M1;

  case MCK_GPRNoX0X2:
    switch (B) {
    default: return false;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    case MCK_AnyReg: return true;
    }

  case MCK_VRN2M1NoV0:
    return B == MCK_VRN2M1;

  case MCK_GPRNoX0:
    switch (B) {
    default: return false;
    case MCK_GPR: return true;
    case MCK_AnyReg: return true;
    }

  case MCK_VRNoV0:
    switch (B) {
    default: return false;
    case MCK_VM: return true;
    case MCK_AnyReg: return true;
    }

  case MCK_FPR64:
    return B == MCK_AnyReg;

  case MCK_GPR:
    return B == MCK_AnyReg;

  case MCK_VM:
    return B == MCK_AnyReg;

  case MCK_RVVMaskRegOpOperand:
    return B == OptionalMatchClass;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  RISCVOperand &Operand = (RISCVOperand &)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken() && Kind <= MCK_LAST_TOKEN)
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  switch (Kind) {
  default: break;
  // 'BareSymbol' class
  case MCK_BareSymbol: {
    DiagnosticPredicate DP(Operand.isBareSymbol());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidBareSymbol;
    break;
    }
  // 'CLUIImm' class
  case MCK_CLUIImm: {
    DiagnosticPredicate DP(Operand.isCLUIImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidCLUIImm;
    break;
    }
  // 'CSRSystemRegister' class
  case MCK_CSRSystemRegister: {
    DiagnosticPredicate DP(Operand.isCSRSystemRegister());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidCSRSystemRegister;
    break;
    }
  // 'CallSymbol' class
  case MCK_CallSymbol: {
    DiagnosticPredicate DP(Operand.isCallSymbol());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidCallSymbol;
    break;
    }
  // 'FRMArg' class
  case MCK_FRMArg: {
    DiagnosticPredicate DP(Operand.isFRMArg());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidFRMArg;
    break;
    }
  // 'FenceArg' class
  case MCK_FenceArg: {
    DiagnosticPredicate DP(Operand.isFenceArg());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidFenceArg;
    break;
    }
  // 'GPRAsFPR' class
  case MCK_GPRAsFPR: {
    DiagnosticPredicate DP(Operand.isGPRAsFPR());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'GPRF64AsFPR' class
  case MCK_GPRF64AsFPR: {
    DiagnosticPredicate DP(Operand.isGPRF64AsFPR());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'GPRPF64AsFPR' class
  case MCK_GPRPF64AsFPR: {
    DiagnosticPredicate DP(Operand.isGPRPF64AsFPR());
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
  // 'ImmZero' class
  case MCK_ImmZero: {
    DiagnosticPredicate DP(Operand.isImmZero());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidImmZero;
    break;
    }
  // 'InsnDirectiveOpcode' class
  case MCK_InsnDirectiveOpcode: {
    DiagnosticPredicate DP(Operand.isImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'PseudoJumpSymbol' class
  case MCK_PseudoJumpSymbol: {
    DiagnosticPredicate DP(Operand.isPseudoJumpSymbol());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidPseudoJumpSymbol;
    break;
    }
  // 'RnumArg' class
  case MCK_RnumArg: {
    DiagnosticPredicate DP(Operand.isRnumArg());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidRnumArg;
    break;
    }
  // 'SImm5Plus1' class
  case MCK_SImm5Plus1: {
    DiagnosticPredicate DP(Operand.isSImm5Plus1());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm5Plus1;
    break;
    }
  // 'SImm21Lsb0JAL' class
  case MCK_SImm21Lsb0JAL: {
    DiagnosticPredicate DP(Operand.isSImm21Lsb0JAL());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm21Lsb0JAL;
    break;
    }
  // 'TPRelAddSymbol' class
  case MCK_TPRelAddSymbol: {
    DiagnosticPredicate DP(Operand.isTPRelAddSymbol());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidTPRelAddSymbol;
    break;
    }
  // 'UImmLog2XLen' class
  case MCK_UImmLog2XLen: {
    DiagnosticPredicate DP(Operand.isUImmLog2XLen());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImmLog2XLen;
    break;
    }
  // 'UImmLog2XLenHalf' class
  case MCK_UImmLog2XLenHalf: {
    DiagnosticPredicate DP(Operand.isUImmLog2XLenHalf());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImmLog2XLenHalf;
    break;
    }
  // 'UImmLog2XLenNonZero' class
  case MCK_UImmLog2XLenNonZero: {
    DiagnosticPredicate DP(Operand.isUImmLog2XLenNonZero());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImmLog2XLenNonZero;
    break;
    }
  // 'RVVMaskRegOpOperand' class
  case MCK_RVVMaskRegOpOperand: {
    DiagnosticPredicate DP(Operand.isV0Reg());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidVMaskRegister;
    break;
    }
  // 'ZeroOffsetMemOpOperand' class
  case MCK_ZeroOffsetMemOpOperand: {
    DiagnosticPredicate DP(Operand.isGPR());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'SImm12Lsb00000' class
  case MCK_SImm12Lsb00000: {
    DiagnosticPredicate DP(Operand.isSImm12Lsb00000());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm12Lsb00000;
    break;
    }
  // 'UImm2' class
  case MCK_UImm2: {
    DiagnosticPredicate DP(Operand.isUImm2());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm2;
    break;
    }
  // 'UImm3' class
  case MCK_UImm3: {
    DiagnosticPredicate DP(Operand.isUImm3());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm3;
    break;
    }
  // 'UImm5' class
  case MCK_UImm5: {
    DiagnosticPredicate DP(Operand.isUImm5());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm5;
    break;
    }
  // 'UImm7' class
  case MCK_UImm7: {
    DiagnosticPredicate DP(Operand.isUImm7());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm7;
    break;
    }
  // 'SImm12' class
  case MCK_SImm12: {
    DiagnosticPredicate DP(Operand.isSImm12());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm12;
    break;
    }
  // 'SImm13Lsb0' class
  case MCK_SImm13Lsb0: {
    DiagnosticPredicate DP(Operand.isSImm13Lsb0());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm13Lsb0;
    break;
    }
  // 'UImm20LUI' class
  case MCK_UImm20LUI: {
    DiagnosticPredicate DP(Operand.isUImm20LUI());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm20LUI;
    break;
    }
  // 'UImm20AUIPC' class
  case MCK_UImm20AUIPC: {
    DiagnosticPredicate DP(Operand.isUImm20AUIPC());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm20AUIPC;
    break;
    }
  // 'ImmXLenLI' class
  case MCK_ImmXLenLI: {
    DiagnosticPredicate DP(Operand.isImmXLenLI());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidImmXLenLI;
    break;
    }
  // 'SImm6' class
  case MCK_SImm6: {
    DiagnosticPredicate DP(Operand.isSImm6());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm6;
    break;
    }
  // 'SImm6NonZero' class
  case MCK_SImm6NonZero: {
    DiagnosticPredicate DP(Operand.isSImm6NonZero());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm6NonZero;
    break;
    }
  // 'UImm7Lsb00' class
  case MCK_UImm7Lsb00: {
    DiagnosticPredicate DP(Operand.isUImm7Lsb00());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm7Lsb00;
    break;
    }
  // 'UImm8Lsb00' class
  case MCK_UImm8Lsb00: {
    DiagnosticPredicate DP(Operand.isUImm8Lsb00());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm8Lsb00;
    break;
    }
  // 'UImm8Lsb000' class
  case MCK_UImm8Lsb000: {
    DiagnosticPredicate DP(Operand.isUImm8Lsb000());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm8Lsb000;
    break;
    }
  // 'SImm9Lsb0' class
  case MCK_SImm9Lsb0: {
    DiagnosticPredicate DP(Operand.isSImm9Lsb0());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm9Lsb0;
    break;
    }
  // 'UImm9Lsb000' class
  case MCK_UImm9Lsb000: {
    DiagnosticPredicate DP(Operand.isUImm9Lsb000());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm9Lsb000;
    break;
    }
  // 'UImm10Lsb00NonZero' class
  case MCK_UImm10Lsb00NonZero: {
    DiagnosticPredicate DP(Operand.isUImm10Lsb00NonZero());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm10Lsb00NonZero;
    break;
    }
  // 'SImm10Lsb0000NonZero' class
  case MCK_SImm10Lsb0000NonZero: {
    DiagnosticPredicate DP(Operand.isSImm10Lsb0000NonZero());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm10Lsb0000NonZero;
    break;
    }
  // 'SImm12Lsb0' class
  case MCK_SImm12Lsb0: {
    DiagnosticPredicate DP(Operand.isSImm12Lsb0());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm12Lsb0;
    break;
    }
  // 'VTypeI10' class
  case MCK_VTypeI10: {
    DiagnosticPredicate DP(Operand.isVTypeI10());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidVTypeI;
    break;
    }
  // 'VTypeI11' class
  case MCK_VTypeI11: {
    DiagnosticPredicate DP(Operand.isVTypeI11());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidVTypeI;
    break;
    }
  // 'SImm5' class
  case MCK_SImm5: {
    DiagnosticPredicate DP(Operand.isSImm5());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm5;
    break;
    }
  } // end switch (Kind)

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case RISCV::X0: OpKind = MCK_GPRX0; break;
    case RISCV::X1: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X2: OpKind = MCK_SP; break;
    case RISCV::X3: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X4: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X5: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X6: OpKind = MCK_GPRTC; break;
    case RISCV::X7: OpKind = MCK_GPRTC; break;
    case RISCV::X8: OpKind = MCK_GPRC; break;
    case RISCV::X9: OpKind = MCK_GPRC; break;
    case RISCV::X10: OpKind = MCK_Reg9; break;
    case RISCV::X11: OpKind = MCK_Reg9; break;
    case RISCV::X12: OpKind = MCK_Reg9; break;
    case RISCV::X13: OpKind = MCK_Reg9; break;
    case RISCV::X14: OpKind = MCK_Reg9; break;
    case RISCV::X15: OpKind = MCK_Reg9; break;
    case RISCV::X16: OpKind = MCK_GPRTC; break;
    case RISCV::X17: OpKind = MCK_GPRTC; break;
    case RISCV::X18: OpKind = MCK_GPRJALR; break;
    case RISCV::X19: OpKind = MCK_GPRJALR; break;
    case RISCV::X20: OpKind = MCK_GPRJALR; break;
    case RISCV::X21: OpKind = MCK_GPRJALR; break;
    case RISCV::X22: OpKind = MCK_GPRJALR; break;
    case RISCV::X23: OpKind = MCK_GPRJALR; break;
    case RISCV::X24: OpKind = MCK_GPRJALR; break;
    case RISCV::X25: OpKind = MCK_GPRJALR; break;
    case RISCV::X26: OpKind = MCK_GPRJALR; break;
    case RISCV::X27: OpKind = MCK_GPRJALR; break;
    case RISCV::X28: OpKind = MCK_GPRTC; break;
    case RISCV::X29: OpKind = MCK_GPRTC; break;
    case RISCV::X30: OpKind = MCK_GPRTC; break;
    case RISCV::X31: OpKind = MCK_GPRTC; break;
    case RISCV::F0_H: OpKind = MCK_FPR16; break;
    case RISCV::F1_H: OpKind = MCK_FPR16; break;
    case RISCV::F2_H: OpKind = MCK_FPR16; break;
    case RISCV::F3_H: OpKind = MCK_FPR16; break;
    case RISCV::F4_H: OpKind = MCK_FPR16; break;
    case RISCV::F5_H: OpKind = MCK_FPR16; break;
    case RISCV::F6_H: OpKind = MCK_FPR16; break;
    case RISCV::F7_H: OpKind = MCK_FPR16; break;
    case RISCV::F8_H: OpKind = MCK_FPR16; break;
    case RISCV::F9_H: OpKind = MCK_FPR16; break;
    case RISCV::F10_H: OpKind = MCK_FPR16; break;
    case RISCV::F11_H: OpKind = MCK_FPR16; break;
    case RISCV::F12_H: OpKind = MCK_FPR16; break;
    case RISCV::F13_H: OpKind = MCK_FPR16; break;
    case RISCV::F14_H: OpKind = MCK_FPR16; break;
    case RISCV::F15_H: OpKind = MCK_FPR16; break;
    case RISCV::F16_H: OpKind = MCK_FPR16; break;
    case RISCV::F17_H: OpKind = MCK_FPR16; break;
    case RISCV::F18_H: OpKind = MCK_FPR16; break;
    case RISCV::F19_H: OpKind = MCK_FPR16; break;
    case RISCV::F20_H: OpKind = MCK_FPR16; break;
    case RISCV::F21_H: OpKind = MCK_FPR16; break;
    case RISCV::F22_H: OpKind = MCK_FPR16; break;
    case RISCV::F23_H: OpKind = MCK_FPR16; break;
    case RISCV::F24_H: OpKind = MCK_FPR16; break;
    case RISCV::F25_H: OpKind = MCK_FPR16; break;
    case RISCV::F26_H: OpKind = MCK_FPR16; break;
    case RISCV::F27_H: OpKind = MCK_FPR16; break;
    case RISCV::F28_H: OpKind = MCK_FPR16; break;
    case RISCV::F29_H: OpKind = MCK_FPR16; break;
    case RISCV::F30_H: OpKind = MCK_FPR16; break;
    case RISCV::F31_H: OpKind = MCK_FPR16; break;
    case RISCV::F0_F: OpKind = MCK_FPR32; break;
    case RISCV::F1_F: OpKind = MCK_FPR32; break;
    case RISCV::F2_F: OpKind = MCK_FPR32; break;
    case RISCV::F3_F: OpKind = MCK_FPR32; break;
    case RISCV::F4_F: OpKind = MCK_FPR32; break;
    case RISCV::F5_F: OpKind = MCK_FPR32; break;
    case RISCV::F6_F: OpKind = MCK_FPR32; break;
    case RISCV::F7_F: OpKind = MCK_FPR32; break;
    case RISCV::F8_F: OpKind = MCK_FPR32C; break;
    case RISCV::F9_F: OpKind = MCK_FPR32C; break;
    case RISCV::F10_F: OpKind = MCK_FPR32C; break;
    case RISCV::F11_F: OpKind = MCK_FPR32C; break;
    case RISCV::F12_F: OpKind = MCK_FPR32C; break;
    case RISCV::F13_F: OpKind = MCK_FPR32C; break;
    case RISCV::F14_F: OpKind = MCK_FPR32C; break;
    case RISCV::F15_F: OpKind = MCK_FPR32C; break;
    case RISCV::F16_F: OpKind = MCK_FPR32; break;
    case RISCV::F17_F: OpKind = MCK_FPR32; break;
    case RISCV::F18_F: OpKind = MCK_FPR32; break;
    case RISCV::F19_F: OpKind = MCK_FPR32; break;
    case RISCV::F20_F: OpKind = MCK_FPR32; break;
    case RISCV::F21_F: OpKind = MCK_FPR32; break;
    case RISCV::F22_F: OpKind = MCK_FPR32; break;
    case RISCV::F23_F: OpKind = MCK_FPR32; break;
    case RISCV::F24_F: OpKind = MCK_FPR32; break;
    case RISCV::F25_F: OpKind = MCK_FPR32; break;
    case RISCV::F26_F: OpKind = MCK_FPR32; break;
    case RISCV::F27_F: OpKind = MCK_FPR32; break;
    case RISCV::F28_F: OpKind = MCK_FPR32; break;
    case RISCV::F29_F: OpKind = MCK_FPR32; break;
    case RISCV::F30_F: OpKind = MCK_FPR32; break;
    case RISCV::F31_F: OpKind = MCK_FPR32; break;
    case RISCV::F0_D: OpKind = MCK_FPR64; break;
    case RISCV::F1_D: OpKind = MCK_FPR64; break;
    case RISCV::F2_D: OpKind = MCK_FPR64; break;
    case RISCV::F3_D: OpKind = MCK_FPR64; break;
    case RISCV::F4_D: OpKind = MCK_FPR64; break;
    case RISCV::F5_D: OpKind = MCK_FPR64; break;
    case RISCV::F6_D: OpKind = MCK_FPR64; break;
    case RISCV::F7_D: OpKind = MCK_FPR64; break;
    case RISCV::F8_D: OpKind = MCK_FPR64C; break;
    case RISCV::F9_D: OpKind = MCK_FPR64C; break;
    case RISCV::F10_D: OpKind = MCK_FPR64C; break;
    case RISCV::F11_D: OpKind = MCK_FPR64C; break;
    case RISCV::F12_D: OpKind = MCK_FPR64C; break;
    case RISCV::F13_D: OpKind = MCK_FPR64C; break;
    case RISCV::F14_D: OpKind = MCK_FPR64C; break;
    case RISCV::F15_D: OpKind = MCK_FPR64C; break;
    case RISCV::F16_D: OpKind = MCK_FPR64; break;
    case RISCV::F17_D: OpKind = MCK_FPR64; break;
    case RISCV::F18_D: OpKind = MCK_FPR64; break;
    case RISCV::F19_D: OpKind = MCK_FPR64; break;
    case RISCV::F20_D: OpKind = MCK_FPR64; break;
    case RISCV::F21_D: OpKind = MCK_FPR64; break;
    case RISCV::F22_D: OpKind = MCK_FPR64; break;
    case RISCV::F23_D: OpKind = MCK_FPR64; break;
    case RISCV::F24_D: OpKind = MCK_FPR64; break;
    case RISCV::F25_D: OpKind = MCK_FPR64; break;
    case RISCV::F26_D: OpKind = MCK_FPR64; break;
    case RISCV::F27_D: OpKind = MCK_FPR64; break;
    case RISCV::F28_D: OpKind = MCK_FPR64; break;
    case RISCV::F29_D: OpKind = MCK_FPR64; break;
    case RISCV::F30_D: OpKind = MCK_FPR64; break;
    case RISCV::F31_D: OpKind = MCK_FPR64; break;
    case RISCV::V0: OpKind = MCK_VMV0; break;
    case RISCV::V1: OpKind = MCK_VRNoV0; break;
    case RISCV::V2: OpKind = MCK_VRNoV0; break;
    case RISCV::V3: OpKind = MCK_VRNoV0; break;
    case RISCV::V4: OpKind = MCK_VRNoV0; break;
    case RISCV::V5: OpKind = MCK_VRNoV0; break;
    case RISCV::V6: OpKind = MCK_VRNoV0; break;
    case RISCV::V7: OpKind = MCK_VRNoV0; break;
    case RISCV::V8: OpKind = MCK_VRNoV0; break;
    case RISCV::V9: OpKind = MCK_VRNoV0; break;
    case RISCV::V10: OpKind = MCK_VRNoV0; break;
    case RISCV::V11: OpKind = MCK_VRNoV0; break;
    case RISCV::V12: OpKind = MCK_VRNoV0; break;
    case RISCV::V13: OpKind = MCK_VRNoV0; break;
    case RISCV::V14: OpKind = MCK_VRNoV0; break;
    case RISCV::V15: OpKind = MCK_VRNoV0; break;
    case RISCV::V16: OpKind = MCK_VRNoV0; break;
    case RISCV::V17: OpKind = MCK_VRNoV0; break;
    case RISCV::V18: OpKind = MCK_VRNoV0; break;
    case RISCV::V19: OpKind = MCK_VRNoV0; break;
    case RISCV::V20: OpKind = MCK_VRNoV0; break;
    case RISCV::V21: OpKind = MCK_VRNoV0; break;
    case RISCV::V22: OpKind = MCK_VRNoV0; break;
    case RISCV::V23: OpKind = MCK_VRNoV0; break;
    case RISCV::V24: OpKind = MCK_VRNoV0; break;
    case RISCV::V25: OpKind = MCK_VRNoV0; break;
    case RISCV::V26: OpKind = MCK_VRNoV0; break;
    case RISCV::V27: OpKind = MCK_VRNoV0; break;
    case RISCV::V28: OpKind = MCK_VRNoV0; break;
    case RISCV::V29: OpKind = MCK_VRNoV0; break;
    case RISCV::V30: OpKind = MCK_VRNoV0; break;
    case RISCV::V31: OpKind = MCK_VRNoV0; break;
    case RISCV::V0M2: OpKind = MCK_Reg18; break;
    case RISCV::V2M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V4M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V6M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V8M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V10M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V12M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V14M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V16M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V18M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V20M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V22M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V24M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V26M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V28M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V30M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V0M4: OpKind = MCK_Reg21; break;
    case RISCV::V4M4: OpKind = MCK_VRM4NoV0; break;
    case RISCV::V8M4: OpKind = MCK_VRM4NoV0; break;
    case RISCV::V12M4: OpKind = MCK_VRM4NoV0; break;
    case RISCV::V16M4: OpKind = MCK_VRM4NoV0; break;
    case RISCV::V20M4: OpKind = MCK_VRM4NoV0; break;
    case RISCV::V24M4: OpKind = MCK_VRM4NoV0; break;
    case RISCV::V28M4: OpKind = MCK_VRM4NoV0; break;
    case RISCV::V0M8: OpKind = MCK_Reg24; break;
    case RISCV::V8M8: OpKind = MCK_VRM8NoV0; break;
    case RISCV::V16M8: OpKind = MCK_VRM8NoV0; break;
    case RISCV::V24M8: OpKind = MCK_VRM8NoV0; break;
    case RISCV::VTYPE: OpKind = MCK_VCSR; break;
    case RISCV::VL: OpKind = MCK_VCSR; break;
    case RISCV::VLENB: OpKind = MCK_VCSR; break;
    case RISCV::X0_PD: OpKind = MCK_Reg28; break;
    case RISCV::X2_PD: OpKind = MCK_Reg30; break;
    case RISCV::X4_PD: OpKind = MCK_Reg32; break;
    case RISCV::X6_PD: OpKind = MCK_Reg34; break;
    case RISCV::X8_PD: OpKind = MCK_Reg35; break;
    case RISCV::X10_PD: OpKind = MCK_Reg36; break;
    case RISCV::X12_PD: OpKind = MCK_Reg36; break;
    case RISCV::X14_PD: OpKind = MCK_Reg36; break;
    case RISCV::X16_PD: OpKind = MCK_Reg34; break;
    case RISCV::X18_PD: OpKind = MCK_Reg33; break;
    case RISCV::X20_PD: OpKind = MCK_Reg33; break;
    case RISCV::X22_PD: OpKind = MCK_Reg33; break;
    case RISCV::X24_PD: OpKind = MCK_Reg33; break;
    case RISCV::X26_PD: OpKind = MCK_Reg33; break;
    case RISCV::X28_PD: OpKind = MCK_Reg34; break;
    case RISCV::X30_PD: OpKind = MCK_Reg34; break;
    case RISCV::V8_V9: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V9_V10: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V10_V11: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V11_V12: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V12_V13: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V13_V14: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V14_V15: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V15_V16: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V16_V17: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V17_V18: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V18_V19: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V19_V20: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V20_V21: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V21_V22: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V22_V23: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V23_V24: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V24_V25: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V25_V26: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V26_V27: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V27_V28: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V28_V29: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V29_V30: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V30_V31: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V1_V2: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V2_V3: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V3_V4: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V4_V5: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V5_V6: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V6_V7: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V7_V8: OpKind = MCK_VRN2M1NoV0; break;
    case RISCV::V0_V1: OpKind = MCK_Reg39; break;
    case RISCV::V8M2_V10M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V10M2_V12M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V12M2_V14M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V14M2_V16M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V16M2_V18M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V18M2_V20M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V20M2_V22M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V22M2_V24M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V24M2_V26M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V26M2_V28M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V28M2_V30M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V2M2_V4M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V4M2_V6M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V6M2_V8M2: OpKind = MCK_VRN2M2NoV0; break;
    case RISCV::V0M2_V2M2: OpKind = MCK_Reg42; break;
    case RISCV::V8M4_V12M4: OpKind = MCK_VRN2M4NoV0; break;
    case RISCV::V12M4_V16M4: OpKind = MCK_VRN2M4NoV0; break;
    case RISCV::V16M4_V20M4: OpKind = MCK_VRN2M4NoV0; break;
    case RISCV::V20M4_V24M4: OpKind = MCK_VRN2M4NoV0; break;
    case RISCV::V24M4_V28M4: OpKind = MCK_VRN2M4NoV0; break;
    case RISCV::V4M4_V8M4: OpKind = MCK_VRN2M4NoV0; break;
    case RISCV::V0M4_V4M4: OpKind = MCK_Reg45; break;
    case RISCV::V8_V9_V10: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V9_V10_V11: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V10_V11_V12: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V11_V12_V13: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V12_V13_V14: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V13_V14_V15: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V14_V15_V16: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V15_V16_V17: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V16_V17_V18: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V17_V18_V19: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V18_V19_V20: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V19_V20_V21: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V20_V21_V22: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V21_V22_V23: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V22_V23_V24: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V23_V24_V25: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V24_V25_V26: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V25_V26_V27: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V26_V27_V28: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V27_V28_V29: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V28_V29_V30: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V29_V30_V31: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V1_V2_V3: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V2_V3_V4: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V3_V4_V5: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V4_V5_V6: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V5_V6_V7: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V6_V7_V8: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V7_V8_V9: OpKind = MCK_VRN3M1NoV0; break;
    case RISCV::V0_V1_V2: OpKind = MCK_Reg48; break;
    case RISCV::V8M2_V10M2_V12M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V10M2_V12M2_V14M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V12M2_V14M2_V16M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V14M2_V16M2_V18M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V16M2_V18M2_V20M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V18M2_V20M2_V22M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V20M2_V22M2_V24M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V22M2_V24M2_V26M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V24M2_V26M2_V28M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V26M2_V28M2_V30M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V2M2_V4M2_V6M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V4M2_V6M2_V8M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V6M2_V8M2_V10M2: OpKind = MCK_VRN3M2NoV0; break;
    case RISCV::V0M2_V2M2_V4M2: OpKind = MCK_Reg51; break;
    case RISCV::V8_V9_V10_V11: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V9_V10_V11_V12: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V10_V11_V12_V13: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V11_V12_V13_V14: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V12_V13_V14_V15: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V13_V14_V15_V16: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V14_V15_V16_V17: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V15_V16_V17_V18: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V16_V17_V18_V19: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V17_V18_V19_V20: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V18_V19_V20_V21: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V19_V20_V21_V22: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V20_V21_V22_V23: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V21_V22_V23_V24: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V22_V23_V24_V25: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V23_V24_V25_V26: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V24_V25_V26_V27: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V25_V26_V27_V28: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V26_V27_V28_V29: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V27_V28_V29_V30: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V28_V29_V30_V31: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V1_V2_V3_V4: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V2_V3_V4_V5: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V3_V4_V5_V6: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V4_V5_V6_V7: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V5_V6_V7_V8: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V6_V7_V8_V9: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V7_V8_V9_V10: OpKind = MCK_VRN4M1NoV0; break;
    case RISCV::V0_V1_V2_V3: OpKind = MCK_Reg54; break;
    case RISCV::V8M2_V10M2_V12M2_V14M2: OpKind = MCK_VRN4M2NoV0; break;
    case RISCV::V10M2_V12M2_V14M2_V16M2: OpKind = MCK_VRN4M2NoV0; break;
    case RISCV::V12M2_V14M2_V16M2_V18M2: OpKind = MCK_VRN4M2NoV0; break;
    case RISCV::V14M2_V16M2_V18M2_V20M2: OpKind = MCK_VRN4M2NoV0; break;
    case RISCV::V16M2_V18M2_V20M2_V22M2: OpKind = MCK_VRN4M2NoV0; break;
    case RISCV::V18M2_V20M2_V22M2_V24M2: OpKind = MCK_VRN4M2NoV0; break;
    case RISCV::V20M2_V22M2_V24M2_V26M2: OpKind = MCK_VRN4M2NoV0; break;
    case RISCV::V22M2_V24M2_V26M2_V28M2: OpKind = MCK_VRN4M2NoV0; break;
    case RISCV::V24M2_V26M2_V28M2_V30M2: OpKind = MCK_VRN4M2NoV0; break;
    case RISCV::V2M2_V4M2_V6M2_V8M2: OpKind = MCK_VRN4M2NoV0; break;
    case RISCV::V4M2_V6M2_V8M2_V10M2: OpKind = MCK_VRN4M2NoV0; break;
    case RISCV::V6M2_V8M2_V10M2_V12M2: OpKind = MCK_VRN4M2NoV0; break;
    case RISCV::V0M2_V2M2_V4M2_V6M2: OpKind = MCK_Reg57; break;
    case RISCV::V8_V9_V10_V11_V12: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V9_V10_V11_V12_V13: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V10_V11_V12_V13_V14: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V11_V12_V13_V14_V15: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V12_V13_V14_V15_V16: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V13_V14_V15_V16_V17: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V14_V15_V16_V17_V18: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V15_V16_V17_V18_V19: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V16_V17_V18_V19_V20: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V17_V18_V19_V20_V21: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V18_V19_V20_V21_V22: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V19_V20_V21_V22_V23: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V20_V21_V22_V23_V24: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V21_V22_V23_V24_V25: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V22_V23_V24_V25_V26: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V23_V24_V25_V26_V27: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V24_V25_V26_V27_V28: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V25_V26_V27_V28_V29: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V26_V27_V28_V29_V30: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V27_V28_V29_V30_V31: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V1_V2_V3_V4_V5: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V2_V3_V4_V5_V6: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V3_V4_V5_V6_V7: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V4_V5_V6_V7_V8: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V5_V6_V7_V8_V9: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V6_V7_V8_V9_V10: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V7_V8_V9_V10_V11: OpKind = MCK_VRN5M1NoV0; break;
    case RISCV::V0_V1_V2_V3_V4: OpKind = MCK_Reg60; break;
    case RISCV::V8_V9_V10_V11_V12_V13: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V9_V10_V11_V12_V13_V14: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V10_V11_V12_V13_V14_V15: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V11_V12_V13_V14_V15_V16: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V12_V13_V14_V15_V16_V17: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V13_V14_V15_V16_V17_V18: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V14_V15_V16_V17_V18_V19: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V15_V16_V17_V18_V19_V20: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V16_V17_V18_V19_V20_V21: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V17_V18_V19_V20_V21_V22: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V18_V19_V20_V21_V22_V23: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V19_V20_V21_V22_V23_V24: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V20_V21_V22_V23_V24_V25: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V21_V22_V23_V24_V25_V26: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V22_V23_V24_V25_V26_V27: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V23_V24_V25_V26_V27_V28: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V24_V25_V26_V27_V28_V29: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V25_V26_V27_V28_V29_V30: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V26_V27_V28_V29_V30_V31: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V1_V2_V3_V4_V5_V6: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V2_V3_V4_V5_V6_V7: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V3_V4_V5_V6_V7_V8: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V4_V5_V6_V7_V8_V9: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V5_V6_V7_V8_V9_V10: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V6_V7_V8_V9_V10_V11: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V7_V8_V9_V10_V11_V12: OpKind = MCK_VRN6M1NoV0; break;
    case RISCV::V0_V1_V2_V3_V4_V5: OpKind = MCK_Reg63; break;
    case RISCV::V8_V9_V10_V11_V12_V13_V14: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V9_V10_V11_V12_V13_V14_V15: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V10_V11_V12_V13_V14_V15_V16: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V11_V12_V13_V14_V15_V16_V17: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V12_V13_V14_V15_V16_V17_V18: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V13_V14_V15_V16_V17_V18_V19: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V14_V15_V16_V17_V18_V19_V20: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V15_V16_V17_V18_V19_V20_V21: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V16_V17_V18_V19_V20_V21_V22: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V17_V18_V19_V20_V21_V22_V23: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V18_V19_V20_V21_V22_V23_V24: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V19_V20_V21_V22_V23_V24_V25: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V20_V21_V22_V23_V24_V25_V26: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V21_V22_V23_V24_V25_V26_V27: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V22_V23_V24_V25_V26_V27_V28: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V23_V24_V25_V26_V27_V28_V29: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V24_V25_V26_V27_V28_V29_V30: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V25_V26_V27_V28_V29_V30_V31: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V1_V2_V3_V4_V5_V6_V7: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V2_V3_V4_V5_V6_V7_V8: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V3_V4_V5_V6_V7_V8_V9: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V4_V5_V6_V7_V8_V9_V10: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V5_V6_V7_V8_V9_V10_V11: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V6_V7_V8_V9_V10_V11_V12: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V7_V8_V9_V10_V11_V12_V13: OpKind = MCK_VRN7M1NoV0; break;
    case RISCV::V0_V1_V2_V3_V4_V5_V6: OpKind = MCK_Reg66; break;
    case RISCV::V8_V9_V10_V11_V12_V13_V14_V15: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V9_V10_V11_V12_V13_V14_V15_V16: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V10_V11_V12_V13_V14_V15_V16_V17: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V11_V12_V13_V14_V15_V16_V17_V18: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V12_V13_V14_V15_V16_V17_V18_V19: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V13_V14_V15_V16_V17_V18_V19_V20: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V14_V15_V16_V17_V18_V19_V20_V21: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V15_V16_V17_V18_V19_V20_V21_V22: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V16_V17_V18_V19_V20_V21_V22_V23: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V17_V18_V19_V20_V21_V22_V23_V24: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V18_V19_V20_V21_V22_V23_V24_V25: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V19_V20_V21_V22_V23_V24_V25_V26: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V20_V21_V22_V23_V24_V25_V26_V27: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V21_V22_V23_V24_V25_V26_V27_V28: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V22_V23_V24_V25_V26_V27_V28_V29: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V23_V24_V25_V26_V27_V28_V29_V30: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V24_V25_V26_V27_V28_V29_V30_V31: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V1_V2_V3_V4_V5_V6_V7_V8: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V2_V3_V4_V5_V6_V7_V8_V9: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V3_V4_V5_V6_V7_V8_V9_V10: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V4_V5_V6_V7_V8_V9_V10_V11: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V5_V6_V7_V8_V9_V10_V11_V12: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V6_V7_V8_V9_V10_V11_V12_V13: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V7_V8_V9_V10_V11_V12_V13_V14: OpKind = MCK_VRN8M1NoV0; break;
    case RISCV::V0_V1_V2_V3_V4_V5_V6_V7: OpKind = MCK_Reg69; break;
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
  case MCK__40_: return "MCK__40_";
  case MCK__41_: return "MCK__41_";
  case MCK_Reg69: return "MCK_Reg69";
  case MCK_Reg66: return "MCK_Reg66";
  case MCK_Reg63: return "MCK_Reg63";
  case MCK_Reg60: return "MCK_Reg60";
  case MCK_Reg57: return "MCK_Reg57";
  case MCK_Reg54: return "MCK_Reg54";
  case MCK_Reg51: return "MCK_Reg51";
  case MCK_Reg48: return "MCK_Reg48";
  case MCK_Reg45: return "MCK_Reg45";
  case MCK_Reg42: return "MCK_Reg42";
  case MCK_Reg39: return "MCK_Reg39";
  case MCK_Reg30: return "MCK_Reg30";
  case MCK_Reg28: return "MCK_Reg28";
  case MCK_Reg24: return "MCK_Reg24";
  case MCK_Reg21: return "MCK_Reg21";
  case MCK_Reg18: return "MCK_Reg18";
  case MCK_GPRX0: return "MCK_GPRX0";
  case MCK_SP: return "MCK_SP";
  case MCK_VMV0: return "MCK_VMV0";
  case MCK_Reg36: return "MCK_Reg36";
  case MCK_VCSR: return "MCK_VCSR";
  case MCK_VRM8NoV0: return "MCK_VRM8NoV0";
  case MCK_Reg35: return "MCK_Reg35";
  case MCK_VRM8: return "MCK_VRM8";
  case MCK_Reg9: return "MCK_Reg9";
  case MCK_VRN2M4NoV0: return "MCK_VRN2M4NoV0";
  case MCK_Reg34: return "MCK_Reg34";
  case MCK_VRM4NoV0: return "MCK_VRM4NoV0";
  case MCK_VRN2M4: return "MCK_VRN2M4";
  case MCK_FPR32C: return "MCK_FPR32C";
  case MCK_FPR64C: return "MCK_FPR64C";
  case MCK_GPRC: return "MCK_GPRC";
  case MCK_VRM4: return "MCK_VRM4";
  case MCK_VRN4M2NoV0: return "MCK_VRN4M2NoV0";
  case MCK_Reg33: return "MCK_Reg33";
  case MCK_VRN3M2NoV0: return "MCK_VRN3M2NoV0";
  case MCK_VRN4M2: return "MCK_VRN4M2";
  case MCK_Reg32: return "MCK_Reg32";
  case MCK_GPRTC: return "MCK_GPRTC";
  case MCK_VRN2M2NoV0: return "MCK_VRN2M2NoV0";
  case MCK_VRN3M2: return "MCK_VRN3M2";
  case MCK_Reg31: return "MCK_Reg31";
  case MCK_VRM2NoV0: return "MCK_VRM2NoV0";
  case MCK_VRN2M2: return "MCK_VRN2M2";
  case MCK_GPRPF64: return "MCK_GPRPF64";
  case MCK_VRM2: return "MCK_VRM2";
  case MCK_VRN8M1NoV0: return "MCK_VRN8M1NoV0";
  case MCK_VRN7M1NoV0: return "MCK_VRN7M1NoV0";
  case MCK_VRN8M1: return "MCK_VRN8M1";
  case MCK_GPRJALR: return "MCK_GPRJALR";
  case MCK_VRN6M1NoV0: return "MCK_VRN6M1NoV0";
  case MCK_VRN7M1: return "MCK_VRN7M1";
  case MCK_VRN5M1NoV0: return "MCK_VRN5M1NoV0";
  case MCK_VRN6M1: return "MCK_VRN6M1";
  case MCK_VRN4M1NoV0: return "MCK_VRN4M1NoV0";
  case MCK_VRN5M1: return "MCK_VRN5M1";
  case MCK_VRN3M1NoV0: return "MCK_VRN3M1NoV0";
  case MCK_VRN4M1: return "MCK_VRN4M1";
  case MCK_GPRNoX0X2: return "MCK_GPRNoX0X2";
  case MCK_VRN2M1NoV0: return "MCK_VRN2M1NoV0";
  case MCK_VRN3M1: return "MCK_VRN3M1";
  case MCK_GPRNoX0: return "MCK_GPRNoX0";
  case MCK_VRN2M1: return "MCK_VRN2M1";
  case MCK_VRNoV0: return "MCK_VRNoV0";
  case MCK_FPR16: return "MCK_FPR16";
  case MCK_FPR32: return "MCK_FPR32";
  case MCK_FPR64: return "MCK_FPR64";
  case MCK_GPR: return "MCK_GPR";
  case MCK_VM: return "MCK_VM";
  case MCK_AnyReg: return "MCK_AnyReg";
  case MCK_BareSymbol: return "MCK_BareSymbol";
  case MCK_CLUIImm: return "MCK_CLUIImm";
  case MCK_CSRSystemRegister: return "MCK_CSRSystemRegister";
  case MCK_CallSymbol: return "MCK_CallSymbol";
  case MCK_FRMArg: return "MCK_FRMArg";
  case MCK_FenceArg: return "MCK_FenceArg";
  case MCK_GPRAsFPR: return "MCK_GPRAsFPR";
  case MCK_GPRF64AsFPR: return "MCK_GPRF64AsFPR";
  case MCK_GPRPF64AsFPR: return "MCK_GPRPF64AsFPR";
  case MCK_Imm: return "MCK_Imm";
  case MCK_ImmZero: return "MCK_ImmZero";
  case MCK_InsnDirectiveOpcode: return "MCK_InsnDirectiveOpcode";
  case MCK_PseudoJumpSymbol: return "MCK_PseudoJumpSymbol";
  case MCK_RnumArg: return "MCK_RnumArg";
  case MCK_SImm5Plus1: return "MCK_SImm5Plus1";
  case MCK_SImm21Lsb0JAL: return "MCK_SImm21Lsb0JAL";
  case MCK_TPRelAddSymbol: return "MCK_TPRelAddSymbol";
  case MCK_UImmLog2XLen: return "MCK_UImmLog2XLen";
  case MCK_UImmLog2XLenHalf: return "MCK_UImmLog2XLenHalf";
  case MCK_UImmLog2XLenNonZero: return "MCK_UImmLog2XLenNonZero";
  case MCK_RVVMaskRegOpOperand: return "MCK_RVVMaskRegOpOperand";
  case MCK_ZeroOffsetMemOpOperand: return "MCK_ZeroOffsetMemOpOperand";
  case MCK_SImm12Lsb00000: return "MCK_SImm12Lsb00000";
  case MCK_UImm2: return "MCK_UImm2";
  case MCK_UImm3: return "MCK_UImm3";
  case MCK_UImm5: return "MCK_UImm5";
  case MCK_UImm7: return "MCK_UImm7";
  case MCK_SImm12: return "MCK_SImm12";
  case MCK_SImm13Lsb0: return "MCK_SImm13Lsb0";
  case MCK_UImm20LUI: return "MCK_UImm20LUI";
  case MCK_UImm20AUIPC: return "MCK_UImm20AUIPC";
  case MCK_ImmXLenLI: return "MCK_ImmXLenLI";
  case MCK_SImm6: return "MCK_SImm6";
  case MCK_SImm6NonZero: return "MCK_SImm6NonZero";
  case MCK_UImm7Lsb00: return "MCK_UImm7Lsb00";
  case MCK_UImm8Lsb00: return "MCK_UImm8Lsb00";
  case MCK_UImm8Lsb000: return "MCK_UImm8Lsb000";
  case MCK_SImm9Lsb0: return "MCK_SImm9Lsb0";
  case MCK_UImm9Lsb000: return "MCK_UImm9Lsb000";
  case MCK_UImm10Lsb00NonZero: return "MCK_UImm10Lsb00NonZero";
  case MCK_SImm10Lsb0000NonZero: return "MCK_SImm10Lsb0000NonZero";
  case MCK_SImm12Lsb0: return "MCK_SImm12Lsb0";
  case MCK_VTypeI10: return "MCK_VTypeI10";
  case MCK_VTypeI11: return "MCK_VTypeI11";
  case MCK_SImm5: return "MCK_SImm5";
  case NumMatchClassKinds: return "NumMatchClassKinds";
  }
  llvm_unreachable("unhandled MatchClassKind!");
}

#endif // NDEBUG
FeatureBitset RISCVAsmParser::
ComputeAvailableFeatures(const FeatureBitset &FB) const {
  FeatureBitset Features;
  if (FB[RISCV::FeatureStdExtM])
    Features.set(Feature_HasStdExtMBit);
  if (FB[RISCV::FeatureStdExtZmmul])
    Features.set(Feature_HasStdExtZmmulBit);
  if (FB[RISCV::FeatureStdExtM] || FB[RISCV::FeatureStdExtZmmul])
    Features.set(Feature_HasStdExtMOrZmmulBit);
  if (FB[RISCV::FeatureStdExtA])
    Features.set(Feature_HasStdExtABit);
  if (FB[RISCV::FeatureStdExtF])
    Features.set(Feature_HasStdExtFBit);
  if (FB[RISCV::FeatureStdExtD])
    Features.set(Feature_HasStdExtDBit);
  if (FB[RISCV::FeatureStdExtZihintpause])
    Features.set(Feature_HasStdExtZihintpauseBit);
  if (FB[RISCV::FeatureStdExtZfhmin])
    Features.set(Feature_HasStdExtZfhminBit);
  if (FB[RISCV::FeatureStdExtZfh])
    Features.set(Feature_HasStdExtZfhBit);
  if (FB[RISCV::FeatureStdExtZfh] || FB[RISCV::FeatureStdExtZfhmin])
    Features.set(Feature_HasStdExtZfhOrZfhminBit);
  if (FB[RISCV::FeatureStdExtZfinx])
    Features.set(Feature_HasStdExtZfinxBit);
  if (FB[RISCV::FeatureStdExtZdinx])
    Features.set(Feature_HasStdExtZdinxBit);
  if (FB[RISCV::FeatureStdExtZhinxmin])
    Features.set(Feature_HasStdExtZhinxminBit);
  if (FB[RISCV::FeatureStdExtZhinx])
    Features.set(Feature_HasStdExtZhinxBit);
  if (FB[RISCV::FeatureStdExtZhinx] || FB[RISCV::FeatureStdExtZhinxmin])
    Features.set(Feature_HasStdExtZhinxOrZhinxminBit);
  if (FB[RISCV::FeatureStdExtC])
    Features.set(Feature_HasStdExtCBit);
  if (FB[RISCV::FeatureStdExtZba])
    Features.set(Feature_HasStdExtZbaBit);
  if (FB[RISCV::FeatureStdExtZbb])
    Features.set(Feature_HasStdExtZbbBit);
  if (FB[RISCV::FeatureStdExtZbc])
    Features.set(Feature_HasStdExtZbcBit);
  if (FB[RISCV::FeatureStdExtZbe])
    Features.set(Feature_HasStdExtZbeBit);
  if (FB[RISCV::FeatureStdExtZbf])
    Features.set(Feature_HasStdExtZbfBit);
  if (FB[RISCV::FeatureStdExtZbm])
    Features.set(Feature_HasStdExtZbmBit);
  if (FB[RISCV::FeatureStdExtZbp])
    Features.set(Feature_HasStdExtZbpBit);
  if (FB[RISCV::FeatureStdExtZbr])
    Features.set(Feature_HasStdExtZbrBit);
  if (FB[RISCV::FeatureStdExtZbs])
    Features.set(Feature_HasStdExtZbsBit);
  if (FB[RISCV::FeatureStdExtZbt])
    Features.set(Feature_HasStdExtZbtBit);
  if (FB[RISCV::FeatureStdExtZbb] || FB[RISCV::FeatureStdExtZbp])
    Features.set(Feature_HasStdExtZbbOrZbpBit);
  if (FB[RISCV::FeatureStdExtZbkb])
    Features.set(Feature_HasStdExtZbkbBit);
  if (FB[RISCV::FeatureStdExtZbkx])
    Features.set(Feature_HasStdExtZbkxBit);
  if (FB[RISCV::FeatureStdExtZbp] || FB[RISCV::FeatureStdExtZbkx])
    Features.set(Feature_HasStdExtZbpOrZbkxBit);
  if (FB[RISCV::FeatureStdExtZbp] || FB[RISCV::FeatureStdExtZbkb])
    Features.set(Feature_HasStdExtZbpOrZbkbBit);
  if (FB[RISCV::FeatureStdExtZbb] || FB[RISCV::FeatureStdExtZbkb])
    Features.set(Feature_HasStdExtZbbOrZbkbBit);
  if (FB[RISCV::FeatureStdExtZbb] || FB[RISCV::FeatureStdExtZbp] || FB[RISCV::FeatureStdExtZbkb])
    Features.set(Feature_HasStdExtZbbOrZbpOrZbkbBit);
  if (FB[RISCV::FeatureStdExtZbkc])
    Features.set(Feature_HasStdExtZbkcBit);
  if (FB[RISCV::FeatureStdExtZbc] || FB[RISCV::FeatureStdExtZbkc])
    Features.set(Feature_HasStdExtZbcOrZbkcBit);
  if (FB[RISCV::FeatureStdExtZknd])
    Features.set(Feature_HasStdExtZkndBit);
  if (FB[RISCV::FeatureStdExtZkne])
    Features.set(Feature_HasStdExtZkneBit);
  if (FB[RISCV::FeatureStdExtZknd] || FB[RISCV::FeatureStdExtZkne])
    Features.set(Feature_HasStdExtZkndOrZkneBit);
  if (FB[RISCV::FeatureStdExtZknh])
    Features.set(Feature_HasStdExtZknhBit);
  if (FB[RISCV::FeatureStdExtZksed])
    Features.set(Feature_HasStdExtZksedBit);
  if (FB[RISCV::FeatureStdExtZksh])
    Features.set(Feature_HasStdExtZkshBit);
  if (FB[RISCV::FeatureStdExtZkr])
    Features.set(Feature_HasStdExtZkrBit);
  if (!FB[RISCV::FeatureNoRVCHints])
    Features.set(Feature_HasRVCHintsBit);
  if (FB[RISCV::FeatureStdExtZve32x])
    Features.set(Feature_HasVInstructionsBit);
  if (FB[RISCV::FeatureStdExtZve64x])
    Features.set(Feature_HasVInstructionsI64Bit);
  if (FB[RISCV::FeatureStdExtZve32f])
    Features.set(Feature_HasVInstructionsAnyFBit);
  if (FB[RISCV::FeatureStdExtZicbom])
    Features.set(Feature_HasStdExtZicbomBit);
  if (FB[RISCV::FeatureStdExtZicboz])
    Features.set(Feature_HasStdExtZicbozBit);
  if (FB[RISCV::FeatureStdExtZicbop])
    Features.set(Feature_HasStdExtZicbopBit);
  if (FB[RISCV::Feature64Bit])
    Features.set(Feature_IsRV64Bit);
  if (!FB[RISCV::Feature64Bit])
    Features.set(Feature_IsRV32Bit);
  if (FB[RISCV::FeatureRV32E])
    Features.set(Feature_IsRV32EBit);
  return Features;
}

static bool checkAsmTiedOperandConstraints(const RISCVAsmParser&AsmParser,
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
    "\007.insn_b\007.insn_i\007.insn_j\007.insn_r\010.insn_r4\007.insn_s\010"
    ".insn_sb\007.insn_u\010.insn_uj\003add\006add.uw\004addi\005addiw\004ad"
    "dw\010aes32dsi\taes32dsmi\010aes32esi\taes32esmi\007aes64ds\010aes64dsm"
    "\007aes64es\010aes64esm\007aes64im\taes64ks1i\010aes64ks2\010amoadd.d\013"
    "amoadd.d.aq\015amoadd.d.aqrl\013amoadd.d.rl\010amoadd.w\013amoadd.w.aq\015"
    "amoadd.w.aqrl\013amoadd.w.rl\010amoand.d\013amoand.d.aq\015amoand.d.aqr"
    "l\013amoand.d.rl\010amoand.w\013amoand.w.aq\015amoand.w.aqrl\013amoand."
    "w.rl\010amomax.d\013amomax.d.aq\015amomax.d.aqrl\013amomax.d.rl\010amom"
    "ax.w\013amomax.w.aq\015amomax.w.aqrl\013amomax.w.rl\tamomaxu.d\014amoma"
    "xu.d.aq\016amomaxu.d.aqrl\014amomaxu.d.rl\tamomaxu.w\014amomaxu.w.aq\016"
    "amomaxu.w.aqrl\014amomaxu.w.rl\010amomin.d\013amomin.d.aq\015amomin.d.a"
    "qrl\013amomin.d.rl\010amomin.w\013amomin.w.aq\015amomin.w.aqrl\013amomi"
    "n.w.rl\tamominu.d\014amominu.d.aq\016amominu.d.aqrl\014amominu.d.rl\tam"
    "ominu.w\014amominu.w.aq\016amominu.w.aqrl\014amominu.w.rl\007amoor.d\na"
    "moor.d.aq\014amoor.d.aqrl\namoor.d.rl\007amoor.w\namoor.w.aq\014amoor.w"
    ".aqrl\namoor.w.rl\tamoswap.d\014amoswap.d.aq\016amoswap.d.aqrl\014amosw"
    "ap.d.rl\tamoswap.w\014amoswap.w.aq\016amoswap.w.aqrl\014amoswap.w.rl\010"
    "amoxor.d\013amoxor.d.aq\015amoxor.d.aqrl\013amoxor.d.rl\010amoxor.w\013"
    "amoxor.w.aq\015amoxor.w.aqrl\013amoxor.w.rl\003and\004andi\004andn\005a"
    "uipc\004bclr\005bclri\tbcompress\nbcompressw\013bdecompress\014bdecompr"
    "essw\003beq\004beqz\004bext\005bexti\003bfp\004bfpw\003bge\004bgeu\004b"
    "gez\003bgt\004bgtu\004bgtz\004binv\005binvi\003ble\004bleu\004blez\003b"
    "lt\004bltu\004bltz\010bmatflip\006bmator\007bmatxor\003bne\004bnez\005b"
    "rev8\004bset\005bseti\005c.add\006c.addi\nc.addi16sp\nc.addi4spn\007c.a"
    "ddiw\006c.addw\005c.and\006c.andi\006c.beqz\006c.bnez\010c.ebreak\005c."
    "fld\007c.fldsp\005c.flw\007c.flwsp\005c.fsd\007c.fsdsp\005c.fsw\007c.fs"
    "wsp\003c.j\005c.jal\006c.jalr\004c.jr\004c.ld\006c.ldsp\004c.li\005c.lu"
    "i\004c.lw\006c.lwsp\004c.mv\005c.nop\004c.or\004c.sd\006c.sdsp\006c.sll"
    "i\010c.slli64\006c.srai\010c.srai64\006c.srli\010c.srli64\005c.sub\006c"
    ".subw\004c.sw\006c.swsp\007c.unimp\005c.xor\004call\tcbo.clean\tcbo.flu"
    "sh\tcbo.inval\010cbo.zero\005clmul\006clmulh\006clmulr\003clz\004clzw\004"
    "cmix\004cmov\004cpop\005cpopw\007crc32.b\007crc32.d\007crc32.h\007crc32"
    ".w\010crc32c.b\010crc32c.d\010crc32c.h\010crc32c.w\004csrc\005csrci\004"
    "csrr\005csrrc\006csrrci\005csrrs\006csrrsi\005csrrw\006csrrwi\004csrs\005"
    "csrsi\004csrw\005csrwi\003ctz\004ctzw\003div\004divu\005divuw\004divw\004"
    "dret\006ebreak\005ecall\006fabs.d\006fabs.h\006fabs.s\006fadd.d\006fadd"
    ".h\006fadd.s\010fclass.d\010fclass.h\010fclass.s\010fcvt.d.h\010fcvt.d."
    "l\tfcvt.d.lu\010fcvt.d.s\010fcvt.d.w\tfcvt.d.wu\010fcvt.h.d\010fcvt.h.l"
    "\tfcvt.h.lu\010fcvt.h.s\010fcvt.h.w\tfcvt.h.wu\010fcvt.l.d\010fcvt.l.h\010"
    "fcvt.l.s\tfcvt.lu.d\tfcvt.lu.h\tfcvt.lu.s\010fcvt.s.d\010fcvt.s.h\010fc"
    "vt.s.l\tfcvt.s.lu\010fcvt.s.w\tfcvt.s.wu\010fcvt.w.d\010fcvt.w.h\010fcv"
    "t.w.s\tfcvt.wu.d\tfcvt.wu.h\tfcvt.wu.s\006fdiv.d\006fdiv.h\006fdiv.s\005"
    "fence\007fence.i\tfence.tso\005feq.d\005feq.h\005feq.s\005fge.d\005fge."
    "h\005fge.s\005fgt.d\005fgt.h\005fgt.s\003fld\005fle.d\005fle.h\005fle.s"
    "\003flh\005flt.d\005flt.h\005flt.s\003flw\007fmadd.d\007fmadd.h\007fmad"
    "d.s\006fmax.d\006fmax.h\006fmax.s\006fmin.d\006fmin.h\006fmin.s\007fmsu"
    "b.d\007fmsub.h\007fmsub.s\006fmul.d\006fmul.h\006fmul.s\005fmv.d\007fmv"
    ".d.x\005fmv.h\007fmv.h.x\005fmv.s\007fmv.w.x\007fmv.x.d\007fmv.x.h\007f"
    "mv.x.w\006fneg.d\006fneg.h\006fneg.s\010fnmadd.d\010fnmadd.h\010fnmadd."
    "s\010fnmsub.d\010fnmsub.h\010fnmsub.s\005frcsr\007frflags\004frrm\004fr"
    "sr\005fscsr\003fsd\007fsflags\010fsflagsi\007fsgnj.d\007fsgnj.h\007fsgn"
    "j.s\010fsgnjn.d\010fsgnjn.h\010fsgnjn.s\010fsgnjx.d\010fsgnjx.h\010fsgn"
    "jx.s\003fsh\003fsl\004fslw\007fsqrt.d\007fsqrt.h\007fsqrt.s\003fsr\004f"
    "sri\005fsriw\004fsrm\005fsrmi\004fsrw\004fssr\006fsub.d\006fsub.h\006fs"
    "ub.s\003fsw\004gorc\005gorci\006gorciw\005gorcw\004grev\005grevi\006gre"
    "viw\005grevw\013hfence.gvma\013hfence.vvma\013hinval.gvma\013hinval.vvm"
    "a\005hlv.b\006hlv.bu\005hlv.d\005hlv.h\006hlv.hu\005hlv.w\006hlv.wu\007"
    "hlvx.hu\007hlvx.wu\005hsv.b\005hsv.d\005hsv.h\005hsv.w\001j\003jal\004j"
    "alr\002jr\004jump\002la\tla.tls.gd\tla.tls.ie\002lb\003lbu\002ld\002lh\003"
    "lhu\002li\003lla\004lr.d\007lr.d.aq\tlr.d.aqrl\007lr.d.rl\004lr.w\007lr"
    ".w.aq\tlr.w.aqrl\007lr.w.rl\003lui\002lw\003lwu\003max\004maxu\003min\004"
    "minu\004mret\003mul\004mulh\006mulhsu\005mulhu\004mulw\002mv\003neg\004"
    "negw\003nop\003not\002or\003orc\005orc.b\005orc.h\005orc.n\005orc.p\005"
    "orc.w\005orc16\007orc16.w\004orc2\006orc2.b\006orc2.h\006orc2.n\006orc2"
    ".w\005orc32\004orc4\006orc4.b\006orc4.h\006orc4.w\004orc8\006orc8.h\006"
    "orc8.w\003ori\003orn\004pack\005packh\005packu\006packuw\005packw\005pa"
    "use\nprefetch.i\nprefetch.r\nprefetch.w\007rdcycle\010rdcycleh\trdinstr"
    "et\nrdinstreth\006rdtime\007rdtimeh\003rem\004remu\005remuw\004remw\003"
    "ret\003rev\005rev.b\005rev.h\005rev.n\005rev.p\005rev.w\005rev16\007rev"
    "16.w\004rev2\006rev2.b\006rev2.h\006rev2.n\006rev2.w\005rev32\004rev4\006"
    "rev4.b\006rev4.h\006rev4.w\004rev8\006rev8.h\006rev8.w\003rol\004rolw\003"
    "ror\004rori\005roriw\004rorw\002sb\004sc.d\007sc.d.aq\tsc.d.aqrl\007sc."
    "d.rl\004sc.w\007sc.w.aq\tsc.w.aqrl\007sc.w.rl\002sd\004seqz\006sext.b\006"
    "sext.h\006sext.w\017sfence.inval.ir\nsfence.vma\016sfence.w.inval\003sg"
    "t\004sgtu\004sgtz\002sh\006sh1add\tsh1add.uw\006sh2add\tsh2add.uw\006sh"
    "3add\tsh3add.uw\nsha256sig0\nsha256sig1\nsha256sum0\nsha256sum1\nsha512"
    "sig0\013sha512sig0h\013sha512sig0l\nsha512sig1\013sha512sig1h\013sha512"
    "sig1l\nsha512sum0\013sha512sum0r\nsha512sum1\013sha512sum1r\004shfl\005"
    "shfli\005shflw\nsinval.vma\003sll\004slli\007slli.uw\005slliw\004sllw\003"
    "slt\004slti\005sltiu\004sltu\004sltz\005sm3p0\005sm3p1\005sm4ed\005sm4k"
    "s\004snez\003sra\004srai\005sraiw\004sraw\004sret\003srl\004srli\005srl"
    "iw\004srlw\003sub\004subw\002sw\004tail\005unimp\006unshfl\007unshfli\007"
    "unshflw\005unzip\007unzip.b\007unzip.h\007unzip.n\007unzip.w\007unzip16"
    "\006unzip2\010unzip2.b\010unzip2.h\010unzip2.w\006unzip4\010unzip4.h\010"
    "unzip4.w\006unzip8\010unzip8.w\004uret\010vaadd.vv\010vaadd.vx\tvaaddu."
    "vv\tvaaddu.vx\010vadc.vim\010vadc.vvm\010vadc.vxm\007vadd.vi\007vadd.vv"
    "\007vadd.vx\007vand.vi\007vand.vv\007vand.vx\010vasub.vv\010vasub.vx\tv"
    "asubu.vv\tvasubu.vx\014vcompress.vm\007vcpop.m\007vdiv.vv\007vdiv.vx\010"
    "vdivu.vv\010vdivu.vx\007vfabs.v\010vfadd.vf\010vfadd.vv\tvfclass.v\013v"
    "fcvt.f.x.v\014vfcvt.f.xu.v\017vfcvt.rtz.x.f.v\020vfcvt.rtz.xu.f.v\013vf"
    "cvt.x.f.v\014vfcvt.xu.f.v\010vfdiv.vf\010vfdiv.vv\010vfirst.m\tvfmacc.v"
    "f\tvfmacc.vv\tvfmadd.vf\tvfmadd.vv\010vfmax.vf\010vfmax.vv\013vfmerge.v"
    "fm\010vfmin.vf\010vfmin.vv\tvfmsac.vf\tvfmsac.vv\tvfmsub.vf\tvfmsub.vv\010"
    "vfmul.vf\010vfmul.vv\010vfmv.f.s\010vfmv.s.f\010vfmv.v.f\014vfncvt.f.f."
    "w\014vfncvt.f.x.w\015vfncvt.f.xu.w\020vfncvt.rod.f.f.w\020vfncvt.rtz.x."
    "f.w\021vfncvt.rtz.xu.f.w\014vfncvt.x.f.w\015vfncvt.xu.f.w\007vfneg.v\nv"
    "fnmacc.vf\nvfnmacc.vv\nvfnmadd.vf\nvfnmadd.vv\nvfnmsac.vf\nvfnmsac.vv\n"
    "vfnmsub.vf\nvfnmsub.vv\tvfrdiv.vf\010vfrec7.v\013vfredmax.vs\013vfredmi"
    "n.vs\014vfredosum.vs\013vfredsum.vs\014vfredusum.vs\nvfrsqrt7.v\tvfrsub"
    ".vf\tvfsgnj.vf\tvfsgnj.vv\nvfsgnjn.vf\nvfsgnjn.vv\nvfsgnjx.vf\nvfsgnjx."
    "vv\017vfslide1down.vf\015vfslide1up.vf\010vfsqrt.v\010vfsub.vf\010vfsub"
    ".vv\tvfwadd.vf\tvfwadd.vv\tvfwadd.wf\tvfwadd.wv\014vfwcvt.f.f.v\014vfwc"
    "vt.f.x.v\015vfwcvt.f.xu.v\020vfwcvt.rtz.x.f.v\021vfwcvt.rtz.xu.f.v\014v"
    "fwcvt.x.f.v\015vfwcvt.xu.f.v\nvfwmacc.vf\nvfwmacc.vv\nvfwmsac.vf\nvfwms"
    "ac.vv\tvfwmul.vf\tvfwmul.vv\013vfwnmacc.vf\013vfwnmacc.vv\013vfwnmsac.v"
    "f\013vfwnmsac.vv\015vfwredosum.vs\014vfwredsum.vs\015vfwredusum.vs\tvfw"
    "sub.vf\tvfwsub.vv\tvfwsub.wf\tvfwsub.wv\005vid.v\007viota.m\006vl1r.v\t"
    "vl1re16.v\tvl1re32.v\tvl1re64.v\010vl1re8.v\006vl2r.v\tvl2re16.v\tvl2re"
    "32.v\tvl2re64.v\010vl2re8.v\006vl4r.v\tvl4re16.v\tvl4re32.v\tvl4re64.v\010"
    "vl4re8.v\006vl8r.v\tvl8re16.v\tvl8re32.v\tvl8re64.v\010vl8re8.v\006vle1"
    ".v\007vle16.v\tvle16ff.v\007vle32.v\tvle32ff.v\007vle64.v\tvle64ff.v\006"
    "vle8.v\010vle8ff.v\005vlm.v\nvloxei16.v\nvloxei32.v\nvloxei64.v\tvloxei"
    "8.v\016vloxseg2ei16.v\016vloxseg2ei32.v\016vloxseg2ei64.v\015vloxseg2ei"
    "8.v\016vloxseg3ei16.v\016vloxseg3ei32.v\016vloxseg3ei64.v\015vloxseg3ei"
    "8.v\016vloxseg4ei16.v\016vloxseg4ei32.v\016vloxseg4ei64.v\015vloxseg4ei"
    "8.v\016vloxseg5ei16.v\016vloxseg5ei32.v\016vloxseg5ei64.v\015vloxseg5ei"
    "8.v\016vloxseg6ei16.v\016vloxseg6ei32.v\016vloxseg6ei64.v\015vloxseg6ei"
    "8.v\016vloxseg7ei16.v\016vloxseg7ei32.v\016vloxseg7ei64.v\015vloxseg7ei"
    "8.v\016vloxseg8ei16.v\016vloxseg8ei32.v\016vloxseg8ei64.v\015vloxseg8ei"
    "8.v\010vlse16.v\010vlse32.v\010vlse64.v\007vlse8.v\013vlseg2e16.v\015vl"
    "seg2e16ff.v\013vlseg2e32.v\015vlseg2e32ff.v\013vlseg2e64.v\015vlseg2e64"
    "ff.v\nvlseg2e8.v\014vlseg2e8ff.v\013vlseg3e16.v\015vlseg3e16ff.v\013vls"
    "eg3e32.v\015vlseg3e32ff.v\013vlseg3e64.v\015vlseg3e64ff.v\nvlseg3e8.v\014"
    "vlseg3e8ff.v\013vlseg4e16.v\015vlseg4e16ff.v\013vlseg4e32.v\015vlseg4e3"
    "2ff.v\013vlseg4e64.v\015vlseg4e64ff.v\nvlseg4e8.v\014vlseg4e8ff.v\013vl"
    "seg5e16.v\015vlseg5e16ff.v\013vlseg5e32.v\015vlseg5e32ff.v\013vlseg5e64"
    ".v\015vlseg5e64ff.v\nvlseg5e8.v\014vlseg5e8ff.v\013vlseg6e16.v\015vlseg"
    "6e16ff.v\013vlseg6e32.v\015vlseg6e32ff.v\013vlseg6e64.v\015vlseg6e64ff."
    "v\nvlseg6e8.v\014vlseg6e8ff.v\013vlseg7e16.v\015vlseg7e16ff.v\013vlseg7"
    "e32.v\015vlseg7e32ff.v\013vlseg7e64.v\015vlseg7e64ff.v\nvlseg7e8.v\014v"
    "lseg7e8ff.v\013vlseg8e16.v\015vlseg8e16ff.v\013vlseg8e32.v\015vlseg8e32"
    "ff.v\013vlseg8e64.v\015vlseg8e64ff.v\nvlseg8e8.v\014vlseg8e8ff.v\014vls"
    "seg2e16.v\014vlsseg2e32.v\014vlsseg2e64.v\013vlsseg2e8.v\014vlsseg3e16."
    "v\014vlsseg3e32.v\014vlsseg3e64.v\013vlsseg3e8.v\014vlsseg4e16.v\014vls"
    "seg4e32.v\014vlsseg4e64.v\013vlsseg4e8.v\014vlsseg5e16.v\014vlsseg5e32."
    "v\014vlsseg5e64.v\013vlsseg5e8.v\014vlsseg6e16.v\014vlsseg6e32.v\014vls"
    "seg6e64.v\013vlsseg6e8.v\014vlsseg7e16.v\014vlsseg7e32.v\014vlsseg7e64."
    "v\013vlsseg7e8.v\014vlsseg8e16.v\014vlsseg8e32.v\014vlsseg8e64.v\013vls"
    "seg8e8.v\nvluxei16.v\nvluxei32.v\nvluxei64.v\tvluxei8.v\016vluxseg2ei16"
    ".v\016vluxseg2ei32.v\016vluxseg2ei64.v\015vluxseg2ei8.v\016vluxseg3ei16"
    ".v\016vluxseg3ei32.v\016vluxseg3ei64.v\015vluxseg3ei8.v\016vluxseg4ei16"
    ".v\016vluxseg4ei32.v\016vluxseg4ei64.v\015vluxseg4ei8.v\016vluxseg5ei16"
    ".v\016vluxseg5ei32.v\016vluxseg5ei64.v\015vluxseg5ei8.v\016vluxseg6ei16"
    ".v\016vluxseg6ei32.v\016vluxseg6ei64.v\015vluxseg6ei8.v\016vluxseg7ei16"
    ".v\016vluxseg7ei32.v\016vluxseg7ei64.v\015vluxseg7ei8.v\016vluxseg8ei16"
    ".v\016vluxseg8ei32.v\016vluxseg8ei64.v\015vluxseg8ei8.v\010vmacc.vv\010"
    "vmacc.vx\010vmadc.vi\tvmadc.vim\010vmadc.vv\tvmadc.vvm\010vmadc.vx\tvma"
    "dc.vxm\010vmadd.vv\010vmadd.vx\010vmand.mm\tvmandn.mm\013vmandnot.mm\007"
    "vmax.vv\007vmax.vx\010vmaxu.vv\010vmaxu.vx\007vmclr.m\nvmerge.vim\nvmer"
    "ge.vvm\nvmerge.vxm\010vmfeq.vf\010vmfeq.vv\010vmfge.vf\010vmfge.vv\010v"
    "mfgt.vf\010vmfgt.vv\010vmfle.vf\010vmfle.vv\010vmflt.vf\010vmflt.vv\010"
    "vmfne.vf\010vmfne.vv\007vmin.vv\007vmin.vx\010vminu.vv\010vminu.vx\006v"
    "mmv.m\tvmnand.mm\010vmnor.mm\007vmnot.m\007vmor.mm\010vmorn.mm\nvmornot"
    ".mm\010vmsbc.vv\tvmsbc.vvm\010vmsbc.vx\tvmsbc.vxm\007vmsbf.m\010vmseq.v"
    "i\010vmseq.vv\010vmseq.vx\007vmset.m\010vmsge.vi\010vmsge.vv\010vmsge.v"
    "x\tvmsgeu.vi\tvmsgeu.vv\tvmsgeu.vx\010vmsgt.vi\010vmsgt.vv\010vmsgt.vx\t"
    "vmsgtu.vi\tvmsgtu.vv\tvmsgtu.vx\007vmsif.m\010vmsle.vi\010vmsle.vv\010v"
    "msle.vx\tvmsleu.vi\tvmsleu.vv\tvmsleu.vx\010vmslt.vi\010vmslt.vv\010vms"
    "lt.vx\tvmsltu.vi\tvmsltu.vv\tvmsltu.vx\010vmsne.vi\010vmsne.vv\010vmsne"
    ".vx\007vmsof.m\007vmul.vv\007vmul.vx\010vmulh.vv\010vmulh.vx\nvmulhsu.v"
    "v\nvmulhsu.vx\tvmulhu.vv\tvmulhu.vx\007vmv.s.x\007vmv.v.i\007vmv.v.v\007"
    "vmv.v.x\007vmv.x.s\007vmv1r.v\007vmv2r.v\007vmv4r.v\007vmv8r.v\tvmxnor."
    "mm\010vmxor.mm\tvnclip.wi\tvnclip.wv\tvnclip.wx\nvnclipu.wi\nvnclipu.wv"
    "\nvnclipu.wx\013vncvt.x.x.w\006vneg.v\tvnmsac.vv\tvnmsac.vx\tvnmsub.vv\t"
    "vnmsub.vx\006vnot.v\010vnsra.wi\010vnsra.wv\010vnsra.wx\010vnsrl.wi\010"
    "vnsrl.wv\010vnsrl.wx\006vor.vi\006vor.vv\006vor.vx\007vpopc.m\nvredand."
    "vs\nvredmax.vs\013vredmaxu.vs\nvredmin.vs\013vredminu.vs\tvredor.vs\nvr"
    "edsum.vs\nvredxor.vs\007vrem.vv\007vrem.vx\010vremu.vv\010vremu.vx\013v"
    "rgather.vi\013vrgather.vv\013vrgather.vx\017vrgatherei16.vv\010vrsub.vi"
    "\010vrsub.vx\006vs1r.v\006vs2r.v\006vs4r.v\006vs8r.v\010vsadd.vi\010vsa"
    "dd.vv\010vsadd.vx\tvsaddu.vi\tvsaddu.vv\tvsaddu.vx\010vsbc.vvm\010vsbc."
    "vxm\006vse1.v\007vse16.v\007vse32.v\007vse64.v\006vse8.v\010vsetivli\006"
    "vsetvl\007vsetvli\tvsext.vf2\tvsext.vf4\tvsext.vf8\016vslide1down.vx\014"
    "vslide1up.vx\015vslidedown.vi\015vslidedown.vx\013vslideup.vi\013vslide"
    "up.vx\007vsll.vi\007vsll.vv\007vsll.vx\005vsm.v\010vsmul.vv\010vsmul.vx"
    "\nvsoxei16.v\nvsoxei32.v\nvsoxei64.v\tvsoxei8.v\016vsoxseg2ei16.v\016vs"
    "oxseg2ei32.v\016vsoxseg2ei64.v\015vsoxseg2ei8.v\016vsoxseg3ei16.v\016vs"
    "oxseg3ei32.v\016vsoxseg3ei64.v\015vsoxseg3ei8.v\016vsoxseg4ei16.v\016vs"
    "oxseg4ei32.v\016vsoxseg4ei64.v\015vsoxseg4ei8.v\016vsoxseg5ei16.v\016vs"
    "oxseg5ei32.v\016vsoxseg5ei64.v\015vsoxseg5ei8.v\016vsoxseg6ei16.v\016vs"
    "oxseg6ei32.v\016vsoxseg6ei64.v\015vsoxseg6ei8.v\016vsoxseg7ei16.v\016vs"
    "oxseg7ei32.v\016vsoxseg7ei64.v\015vsoxseg7ei8.v\016vsoxseg8ei16.v\016vs"
    "oxseg8ei32.v\016vsoxseg8ei64.v\015vsoxseg8ei8.v\007vsra.vi\007vsra.vv\007"
    "vsra.vx\007vsrl.vi\007vsrl.vv\007vsrl.vx\010vsse16.v\010vsse32.v\010vss"
    "e64.v\007vsse8.v\013vsseg2e16.v\013vsseg2e32.v\013vsseg2e64.v\nvsseg2e8"
    ".v\013vsseg3e16.v\013vsseg3e32.v\013vsseg3e64.v\nvsseg3e8.v\013vsseg4e1"
    "6.v\013vsseg4e32.v\013vsseg4e64.v\nvsseg4e8.v\013vsseg5e16.v\013vsseg5e"
    "32.v\013vsseg5e64.v\nvsseg5e8.v\013vsseg6e16.v\013vsseg6e32.v\013vsseg6"
    "e64.v\nvsseg6e8.v\013vsseg7e16.v\013vsseg7e32.v\013vsseg7e64.v\nvsseg7e"
    "8.v\013vsseg8e16.v\013vsseg8e32.v\013vsseg8e64.v\nvsseg8e8.v\010vssra.v"
    "i\010vssra.vv\010vssra.vx\010vssrl.vi\010vssrl.vv\010vssrl.vx\014vssseg"
    "2e16.v\014vssseg2e32.v\014vssseg2e64.v\013vssseg2e8.v\014vssseg3e16.v\014"
    "vssseg3e32.v\014vssseg3e64.v\013vssseg3e8.v\014vssseg4e16.v\014vssseg4e"
    "32.v\014vssseg4e64.v\013vssseg4e8.v\014vssseg5e16.v\014vssseg5e32.v\014"
    "vssseg5e64.v\013vssseg5e8.v\014vssseg6e16.v\014vssseg6e32.v\014vssseg6e"
    "64.v\013vssseg6e8.v\014vssseg7e16.v\014vssseg7e32.v\014vssseg7e64.v\013"
    "vssseg7e8.v\014vssseg8e16.v\014vssseg8e32.v\014vssseg8e64.v\013vssseg8e"
    "8.v\010vssub.vv\010vssub.vx\tvssubu.vv\tvssubu.vx\007vsub.vv\007vsub.vx"
    "\nvsuxei16.v\nvsuxei32.v\nvsuxei64.v\tvsuxei8.v\016vsuxseg2ei16.v\016vs"
    "uxseg2ei32.v\016vsuxseg2ei64.v\015vsuxseg2ei8.v\016vsuxseg3ei16.v\016vs"
    "uxseg3ei32.v\016vsuxseg3ei64.v\015vsuxseg3ei8.v\016vsuxseg4ei16.v\016vs"
    "uxseg4ei32.v\016vsuxseg4ei64.v\015vsuxseg4ei8.v\016vsuxseg5ei16.v\016vs"
    "uxseg5ei32.v\016vsuxseg5ei64.v\015vsuxseg5ei8.v\016vsuxseg6ei16.v\016vs"
    "uxseg6ei32.v\016vsuxseg6ei64.v\015vsuxseg6ei8.v\016vsuxseg7ei16.v\016vs"
    "uxseg7ei32.v\016vsuxseg7ei64.v\015vsuxseg7ei8.v\016vsuxseg8ei16.v\016vs"
    "uxseg8ei32.v\016vsuxseg8ei64.v\015vsuxseg8ei8.v\010vwadd.vv\010vwadd.vx"
    "\010vwadd.wv\010vwadd.wx\tvwaddu.vv\tvwaddu.vx\tvwaddu.wv\tvwaddu.wx\013"
    "vwcvt.x.x.v\014vwcvtu.x.x.v\tvwmacc.vv\tvwmacc.vx\013vwmaccsu.vv\013vwm"
    "accsu.vx\nvwmaccu.vv\nvwmaccu.vx\013vwmaccus.vx\010vwmul.vv\010vwmul.vx"
    "\nvwmulsu.vv\nvwmulsu.vx\tvwmulu.vv\tvwmulu.vx\013vwredsum.vs\014vwreds"
    "umu.vs\010vwsub.vv\010vwsub.vx\010vwsub.wv\010vwsub.wx\tvwsubu.vv\tvwsu"
    "bu.vx\tvwsubu.wv\tvwsubu.wx\007vxor.vi\007vxor.vv\007vxor.vx\tvzext.vf2"
    "\tvzext.vf4\tvzext.vf8\003wfi\004xnor\003xor\004xori\007xperm.b\007xper"
    "m.h\007xperm.n\007xperm.w\006xperm4\006xperm8\006zext.b\006zext.h\006ze"
    "xt.w\003zip\005zip.b\005zip.h\005zip.n\005zip.w\005zip16\004zip2\006zip"
    "2.b\006zip2.h\006zip2.w\004zip4\006zip4.h\006zip4.w\004zip8\006zip8.w";

// Feature bitsets.
enum : uint8_t {
  AMFBS_None,
  AMFBS_HasStdExtA,
  AMFBS_HasStdExtC,
  AMFBS_HasStdExtD,
  AMFBS_HasStdExtF,
  AMFBS_HasStdExtM,
  AMFBS_HasStdExtMOrZmmul,
  AMFBS_HasStdExtZba,
  AMFBS_HasStdExtZbb,
  AMFBS_HasStdExtZbbOrZbp,
  AMFBS_HasStdExtZbbOrZbpOrZbkb,
  AMFBS_HasStdExtZbc,
  AMFBS_HasStdExtZbcOrZbkc,
  AMFBS_HasStdExtZbe,
  AMFBS_HasStdExtZbf,
  AMFBS_HasStdExtZbp,
  AMFBS_HasStdExtZbpOrZbkb,
  AMFBS_HasStdExtZbpOrZbkx,
  AMFBS_HasStdExtZbr,
  AMFBS_HasStdExtZbs,
  AMFBS_HasStdExtZbt,
  AMFBS_HasStdExtZfh,
  AMFBS_HasStdExtZfhOrZfhmin,
  AMFBS_HasStdExtZfinx,
  AMFBS_HasStdExtZhinx,
  AMFBS_HasStdExtZhinxOrZhinxmin,
  AMFBS_HasStdExtZicbom,
  AMFBS_HasStdExtZicbop,
  AMFBS_HasStdExtZicboz,
  AMFBS_HasStdExtZihintpause,
  AMFBS_HasStdExtZknh,
  AMFBS_HasStdExtZksed,
  AMFBS_HasStdExtZksh,
  AMFBS_HasVInstructions,
  AMFBS_HasVInstructionsAnyF,
  AMFBS_HasVInstructionsI64,
  AMFBS_IsRV32,
  AMFBS_IsRV64,
  AMFBS_HasStdExtA_IsRV64,
  AMFBS_HasStdExtC_HasRVCHints,
  AMFBS_HasStdExtC_HasStdExtD,
  AMFBS_HasStdExtC_IsRV32,
  AMFBS_HasStdExtC_IsRV64,
  AMFBS_HasStdExtD_IsRV64,
  AMFBS_HasStdExtF_IsRV64,
  AMFBS_HasStdExtM_IsRV64,
  AMFBS_HasStdExtMOrZmmul_IsRV64,
  AMFBS_HasStdExtZba_IsRV64,
  AMFBS_HasStdExtZbb_IsRV64,
  AMFBS_HasStdExtZbbOrZbp_IsRV32,
  AMFBS_HasStdExtZbbOrZbp_IsRV64,
  AMFBS_HasStdExtZbbOrZbpOrZbkb_IsRV32,
  AMFBS_HasStdExtZbbOrZbpOrZbkb_IsRV64,
  AMFBS_HasStdExtZbe_IsRV64,
  AMFBS_HasStdExtZbf_IsRV64,
  AMFBS_HasStdExtZbm_IsRV64,
  AMFBS_HasStdExtZbp_IsRV32,
  AMFBS_HasStdExtZbp_IsRV64,
  AMFBS_HasStdExtZbpOrZbkb_IsRV32,
  AMFBS_HasStdExtZbpOrZbkb_IsRV64,
  AMFBS_HasStdExtZbr_IsRV64,
  AMFBS_HasStdExtZbt_IsRV64,
  AMFBS_HasStdExtZdinx_IsRV32,
  AMFBS_HasStdExtZdinx_IsRV64,
  AMFBS_HasStdExtZfh_IsRV64,
  AMFBS_HasStdExtZfhOrZfhmin_HasStdExtD,
  AMFBS_HasStdExtZfinx_IsRV64,
  AMFBS_HasStdExtZhinx_IsRV64,
  AMFBS_HasStdExtZhinxOrZhinxmin_HasStdExtZdinx,
  AMFBS_HasStdExtZknd_IsRV32,
  AMFBS_HasStdExtZknd_IsRV64,
  AMFBS_HasStdExtZkndOrZkne_IsRV64,
  AMFBS_HasStdExtZkne_IsRV32,
  AMFBS_HasStdExtZkne_IsRV64,
  AMFBS_HasStdExtZknh_IsRV32,
  AMFBS_HasStdExtZknh_IsRV64,
  AMFBS_HasVInstructionsI64_IsRV64,
  AMFBS_IsRV64_HasVInstructionsI64,
  AMFBS_HasStdExtC_HasStdExtF_IsRV32,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // AMFBS_None
  {Feature_HasStdExtABit, },
  {Feature_HasStdExtCBit, },
  {Feature_HasStdExtDBit, },
  {Feature_HasStdExtFBit, },
  {Feature_HasStdExtMBit, },
  {Feature_HasStdExtMOrZmmulBit, },
  {Feature_HasStdExtZbaBit, },
  {Feature_HasStdExtZbbBit, },
  {Feature_HasStdExtZbbOrZbpBit, },
  {Feature_HasStdExtZbbOrZbpOrZbkbBit, },
  {Feature_HasStdExtZbcBit, },
  {Feature_HasStdExtZbcOrZbkcBit, },
  {Feature_HasStdExtZbeBit, },
  {Feature_HasStdExtZbfBit, },
  {Feature_HasStdExtZbpBit, },
  {Feature_HasStdExtZbpOrZbkbBit, },
  {Feature_HasStdExtZbpOrZbkxBit, },
  {Feature_HasStdExtZbrBit, },
  {Feature_HasStdExtZbsBit, },
  {Feature_HasStdExtZbtBit, },
  {Feature_HasStdExtZfhBit, },
  {Feature_HasStdExtZfhOrZfhminBit, },
  {Feature_HasStdExtZfinxBit, },
  {Feature_HasStdExtZhinxBit, },
  {Feature_HasStdExtZhinxOrZhinxminBit, },
  {Feature_HasStdExtZicbomBit, },
  {Feature_HasStdExtZicbopBit, },
  {Feature_HasStdExtZicbozBit, },
  {Feature_HasStdExtZihintpauseBit, },
  {Feature_HasStdExtZknhBit, },
  {Feature_HasStdExtZksedBit, },
  {Feature_HasStdExtZkshBit, },
  {Feature_HasVInstructionsBit, },
  {Feature_HasVInstructionsAnyFBit, },
  {Feature_HasVInstructionsI64Bit, },
  {Feature_IsRV32Bit, },
  {Feature_IsRV64Bit, },
  {Feature_HasStdExtABit, Feature_IsRV64Bit, },
  {Feature_HasStdExtCBit, Feature_HasRVCHintsBit, },
  {Feature_HasStdExtCBit, Feature_HasStdExtDBit, },
  {Feature_HasStdExtCBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtCBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtDBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtFBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtMBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtMOrZmmulBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbaBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbbBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbbOrZbpBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZbbOrZbpBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbbOrZbpOrZbkbBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZbbOrZbpOrZbkbBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbeBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbfBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbmBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbpBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZbpBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbpOrZbkbBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZbpOrZbkbBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbrBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbtBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZdinxBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZdinxBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZfhBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZfhOrZfhminBit, Feature_HasStdExtDBit, },
  {Feature_HasStdExtZfinxBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZhinxBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZhinxOrZhinxminBit, Feature_HasStdExtZdinxBit, },
  {Feature_HasStdExtZkndBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZkndBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZkndOrZkneBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZkneBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZkneBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZknhBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZknhBit, Feature_IsRV64Bit, },
  {Feature_HasVInstructionsI64Bit, Feature_IsRV64Bit, },
  {Feature_IsRV64Bit, Feature_HasVInstructionsI64Bit, },
  {Feature_HasStdExtCBit, Feature_HasStdExtFBit, Feature_IsRV32Bit, },
};

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint8_t ConvertFn;
    uint8_t RequiredFeaturesIdx;
    uint8_t Classes[7];
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
  { 0 /* .insn_b */, RISCV::InsnB, Convert__InsnDirectiveOpcode1_0__UImm31_1__Reg1_2__Reg1_3__SImm13Lsb01_4, AMFBS_None, { MCK_InsnDirectiveOpcode, MCK_UImm3, MCK_AnyReg, MCK_AnyReg, MCK_SImm13Lsb0 }, },
  { 8 /* .insn_i */, RISCV::InsnI, Convert__Reg1_2__InsnDirectiveOpcode1_0__UImm31_1__Reg1_3__SImm121_4, AMFBS_None, { MCK_InsnDirectiveOpcode, MCK_UImm3, MCK_AnyReg, MCK_AnyReg, MCK_SImm12 }, },
  { 8 /* .insn_i */, RISCV::InsnI_Mem, Convert__Reg1_2__InsnDirectiveOpcode1_0__UImm31_1__Reg1_5__SImm121_3, AMFBS_None, { MCK_InsnDirectiveOpcode, MCK_UImm3, MCK_AnyReg, MCK_SImm12, MCK__40_, MCK_AnyReg, MCK__41_ }, },
  { 16 /* .insn_j */, RISCV::InsnJ, Convert__Reg1_1__InsnDirectiveOpcode1_0__SImm21Lsb0JAL1_2, AMFBS_None, { MCK_InsnDirectiveOpcode, MCK_AnyReg, MCK_SImm21Lsb0JAL }, },
  { 24 /* .insn_r */, RISCV::InsnR, Convert__Reg1_3__InsnDirectiveOpcode1_0__UImm31_1__UImm71_2__Reg1_4__Reg1_5, AMFBS_None, { MCK_InsnDirectiveOpcode, MCK_UImm3, MCK_UImm7, MCK_AnyReg, MCK_AnyReg, MCK_AnyReg }, },
  { 24 /* .insn_r */, RISCV::InsnR4, Convert__Reg1_3__InsnDirectiveOpcode1_0__UImm31_1__UImm21_2__Reg1_4__Reg1_5__Reg1_6, AMFBS_None, { MCK_InsnDirectiveOpcode, MCK_UImm3, MCK_UImm2, MCK_AnyReg, MCK_AnyReg, MCK_AnyReg, MCK_AnyReg }, },
  { 32 /* .insn_r4 */, RISCV::InsnR4, Convert__Reg1_3__InsnDirectiveOpcode1_0__UImm31_1__UImm21_2__Reg1_4__Reg1_5__Reg1_6, AMFBS_None, { MCK_InsnDirectiveOpcode, MCK_UImm3, MCK_UImm2, MCK_AnyReg, MCK_AnyReg, MCK_AnyReg, MCK_AnyReg }, },
  { 41 /* .insn_s */, RISCV::InsnS, Convert__InsnDirectiveOpcode1_0__UImm31_1__Reg1_2__Reg1_5__SImm121_3, AMFBS_None, { MCK_InsnDirectiveOpcode, MCK_UImm3, MCK_AnyReg, MCK_SImm12, MCK__40_, MCK_AnyReg, MCK__41_ }, },
  { 49 /* .insn_sb */, RISCV::InsnB, Convert__InsnDirectiveOpcode1_0__UImm31_1__Reg1_2__Reg1_3__SImm13Lsb01_4, AMFBS_None, { MCK_InsnDirectiveOpcode, MCK_UImm3, MCK_AnyReg, MCK_AnyReg, MCK_SImm13Lsb0 }, },
  { 58 /* .insn_u */, RISCV::InsnU, Convert__Reg1_1__InsnDirectiveOpcode1_0__UImm20LUI1_2, AMFBS_None, { MCK_InsnDirectiveOpcode, MCK_AnyReg, MCK_UImm20LUI }, },
  { 66 /* .insn_uj */, RISCV::InsnJ, Convert__Reg1_1__InsnDirectiveOpcode1_0__SImm21Lsb0JAL1_2, AMFBS_None, { MCK_InsnDirectiveOpcode, MCK_AnyReg, MCK_SImm21Lsb0JAL }, },
  { 75 /* add */, RISCV::ADD, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 75 /* add */, RISCV::ADDI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 75 /* add */, RISCV::PseudoAddTPRel, Convert__Reg1_0__Reg1_1__Reg1_2__TPRelAddSymbol1_3, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_TPRelAddSymbol }, },
  { 79 /* add.uw */, RISCV::ADD_UW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZba_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 86 /* addi */, RISCV::ADDI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 91 /* addiw */, RISCV::ADDIW, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 97 /* addw */, RISCV::ADDW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 97 /* addw */, RISCV::ADDIW, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 102 /* aes32dsi */, RISCV::AES32DSI, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasStdExtZknd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 111 /* aes32dsmi */, RISCV::AES32DSMI, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasStdExtZknd_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 121 /* aes32esi */, RISCV::AES32ESI, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasStdExtZkne_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 130 /* aes32esmi */, RISCV::AES32ESMI, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasStdExtZkne_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 140 /* aes64ds */, RISCV::AES64DS, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZknd_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 148 /* aes64dsm */, RISCV::AES64DSM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZknd_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 157 /* aes64es */, RISCV::AES64ES, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZkne_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 165 /* aes64esm */, RISCV::AES64ESM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZkne_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 174 /* aes64im */, RISCV::AES64IM, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZknd_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 182 /* aes64ks1i */, RISCV::AES64KS1I, Convert__Reg1_0__Reg1_1__RnumArg1_2, AMFBS_HasStdExtZkndOrZkne_IsRV64, { MCK_GPR, MCK_GPR, MCK_RnumArg }, },
  { 192 /* aes64ks2 */, RISCV::AES64KS2, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZkndOrZkne_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 201 /* amoadd.d */, RISCV::AMOADD_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 210 /* amoadd.d.aq */, RISCV::AMOADD_D_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 222 /* amoadd.d.aqrl */, RISCV::AMOADD_D_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 236 /* amoadd.d.rl */, RISCV::AMOADD_D_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 248 /* amoadd.w */, RISCV::AMOADD_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 257 /* amoadd.w.aq */, RISCV::AMOADD_W_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 269 /* amoadd.w.aqrl */, RISCV::AMOADD_W_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 283 /* amoadd.w.rl */, RISCV::AMOADD_W_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 295 /* amoand.d */, RISCV::AMOAND_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 304 /* amoand.d.aq */, RISCV::AMOAND_D_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 316 /* amoand.d.aqrl */, RISCV::AMOAND_D_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 330 /* amoand.d.rl */, RISCV::AMOAND_D_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 342 /* amoand.w */, RISCV::AMOAND_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 351 /* amoand.w.aq */, RISCV::AMOAND_W_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 363 /* amoand.w.aqrl */, RISCV::AMOAND_W_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 377 /* amoand.w.rl */, RISCV::AMOAND_W_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 389 /* amomax.d */, RISCV::AMOMAX_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 398 /* amomax.d.aq */, RISCV::AMOMAX_D_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 410 /* amomax.d.aqrl */, RISCV::AMOMAX_D_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 424 /* amomax.d.rl */, RISCV::AMOMAX_D_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 436 /* amomax.w */, RISCV::AMOMAX_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 445 /* amomax.w.aq */, RISCV::AMOMAX_W_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 457 /* amomax.w.aqrl */, RISCV::AMOMAX_W_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 471 /* amomax.w.rl */, RISCV::AMOMAX_W_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 483 /* amomaxu.d */, RISCV::AMOMAXU_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 493 /* amomaxu.d.aq */, RISCV::AMOMAXU_D_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 506 /* amomaxu.d.aqrl */, RISCV::AMOMAXU_D_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 521 /* amomaxu.d.rl */, RISCV::AMOMAXU_D_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 534 /* amomaxu.w */, RISCV::AMOMAXU_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 544 /* amomaxu.w.aq */, RISCV::AMOMAXU_W_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 557 /* amomaxu.w.aqrl */, RISCV::AMOMAXU_W_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 572 /* amomaxu.w.rl */, RISCV::AMOMAXU_W_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 585 /* amomin.d */, RISCV::AMOMIN_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 594 /* amomin.d.aq */, RISCV::AMOMIN_D_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 606 /* amomin.d.aqrl */, RISCV::AMOMIN_D_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 620 /* amomin.d.rl */, RISCV::AMOMIN_D_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 632 /* amomin.w */, RISCV::AMOMIN_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 641 /* amomin.w.aq */, RISCV::AMOMIN_W_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 653 /* amomin.w.aqrl */, RISCV::AMOMIN_W_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 667 /* amomin.w.rl */, RISCV::AMOMIN_W_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 679 /* amominu.d */, RISCV::AMOMINU_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 689 /* amominu.d.aq */, RISCV::AMOMINU_D_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 702 /* amominu.d.aqrl */, RISCV::AMOMINU_D_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 717 /* amominu.d.rl */, RISCV::AMOMINU_D_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 730 /* amominu.w */, RISCV::AMOMINU_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 740 /* amominu.w.aq */, RISCV::AMOMINU_W_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 753 /* amominu.w.aqrl */, RISCV::AMOMINU_W_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 768 /* amominu.w.rl */, RISCV::AMOMINU_W_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 781 /* amoor.d */, RISCV::AMOOR_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 789 /* amoor.d.aq */, RISCV::AMOOR_D_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 800 /* amoor.d.aqrl */, RISCV::AMOOR_D_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 813 /* amoor.d.rl */, RISCV::AMOOR_D_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 824 /* amoor.w */, RISCV::AMOOR_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 832 /* amoor.w.aq */, RISCV::AMOOR_W_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 843 /* amoor.w.aqrl */, RISCV::AMOOR_W_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 856 /* amoor.w.rl */, RISCV::AMOOR_W_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 867 /* amoswap.d */, RISCV::AMOSWAP_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 877 /* amoswap.d.aq */, RISCV::AMOSWAP_D_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 890 /* amoswap.d.aqrl */, RISCV::AMOSWAP_D_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 905 /* amoswap.d.rl */, RISCV::AMOSWAP_D_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 918 /* amoswap.w */, RISCV::AMOSWAP_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 928 /* amoswap.w.aq */, RISCV::AMOSWAP_W_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 941 /* amoswap.w.aqrl */, RISCV::AMOSWAP_W_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 956 /* amoswap.w.rl */, RISCV::AMOSWAP_W_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 969 /* amoxor.d */, RISCV::AMOXOR_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 978 /* amoxor.d.aq */, RISCV::AMOXOR_D_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 990 /* amoxor.d.aqrl */, RISCV::AMOXOR_D_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1004 /* amoxor.d.rl */, RISCV::AMOXOR_D_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1016 /* amoxor.w */, RISCV::AMOXOR_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1025 /* amoxor.w.aq */, RISCV::AMOXOR_W_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1037 /* amoxor.w.aqrl */, RISCV::AMOXOR_W_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1051 /* amoxor.w.rl */, RISCV::AMOXOR_W_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 1063 /* and */, RISCV::AND, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1063 /* and */, RISCV::ANDI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 1067 /* andi */, RISCV::ANDI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 1072 /* andn */, RISCV::ANDN, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbpOrZbkb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1077 /* auipc */, RISCV::AUIPC, Convert__Reg1_0__UImm20AUIPC1_1, AMFBS_None, { MCK_GPR, MCK_UImm20AUIPC }, },
  { 1083 /* bclr */, RISCV::BCLR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1083 /* bclr */, RISCV::BCLRI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 1088 /* bclri */, RISCV::BCLRI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 1094 /* bcompress */, RISCV::BCOMPRESS, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbe, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1104 /* bcompressw */, RISCV::BCOMPRESSW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbe_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1115 /* bdecompress */, RISCV::BDECOMPRESS, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbe, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1127 /* bdecompressw */, RISCV::BDECOMPRESSW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbe_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1140 /* beq */, RISCV::BEQ, Convert__Reg1_0__Reg1_1__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1144 /* beqz */, RISCV::BEQ, Convert__Reg1_0__regX0__SImm13Lsb01_1, AMFBS_None, { MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1149 /* bext */, RISCV::BEXT, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1149 /* bext */, RISCV::BEXTI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 1154 /* bexti */, RISCV::BEXTI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 1160 /* bfp */, RISCV::BFP, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbf, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1164 /* bfpw */, RISCV::BFPW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbf_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1169 /* bge */, RISCV::BGE, Convert__Reg1_0__Reg1_1__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1173 /* bgeu */, RISCV::BGEU, Convert__Reg1_0__Reg1_1__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1178 /* bgez */, RISCV::BGE, Convert__Reg1_0__regX0__SImm13Lsb01_1, AMFBS_None, { MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1183 /* bgt */, RISCV::BLT, Convert__Reg1_1__Reg1_0__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1187 /* bgtu */, RISCV::BLTU, Convert__Reg1_1__Reg1_0__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1192 /* bgtz */, RISCV::BLT, Convert__regX0__Reg1_0__SImm13Lsb01_1, AMFBS_None, { MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1197 /* binv */, RISCV::BINV, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1197 /* binv */, RISCV::BINVI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 1202 /* binvi */, RISCV::BINVI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 1208 /* ble */, RISCV::BGE, Convert__Reg1_1__Reg1_0__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1212 /* bleu */, RISCV::BGEU, Convert__Reg1_1__Reg1_0__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1217 /* blez */, RISCV::BGE, Convert__regX0__Reg1_0__SImm13Lsb01_1, AMFBS_None, { MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1222 /* blt */, RISCV::BLT, Convert__Reg1_0__Reg1_1__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1226 /* bltu */, RISCV::BLTU, Convert__Reg1_0__Reg1_1__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1231 /* bltz */, RISCV::BLT, Convert__Reg1_0__regX0__SImm13Lsb01_1, AMFBS_None, { MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1236 /* bmatflip */, RISCV::BMATFLIP, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbm_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 1245 /* bmator */, RISCV::BMATOR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbm_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1252 /* bmatxor */, RISCV::BMATXOR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbm_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1260 /* bne */, RISCV::BNE, Convert__Reg1_0__Reg1_1__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1264 /* bnez */, RISCV::BNE, Convert__Reg1_0__regX0__SImm13Lsb01_1, AMFBS_None, { MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1269 /* brev8 */, RISCV::BREV8, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbpOrZbkb, { MCK_GPR, MCK_GPR }, },
  { 1275 /* bset */, RISCV::BSET, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1275 /* bset */, RISCV::BSETI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 1280 /* bseti */, RISCV::BSETI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 1286 /* c.add */, RISCV::C_ADD_HINT, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRX0, MCK_GPRNoX0 }, },
  { 1286 /* c.add */, RISCV::C_ADD, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtC, { MCK_GPRNoX0, MCK_GPRNoX0 }, },
  { 1292 /* c.addi */, RISCV::C_ADDI_NOP, Convert__Reg1_0__Tie0_1_1__ImmZero1_1, AMFBS_HasStdExtC, { MCK_GPRX0, MCK_ImmZero }, },
  { 1292 /* c.addi */, RISCV::C_ADDI_HINT_X0, Convert__Reg1_0__Tie0_1_1__SImm6NonZero1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRX0, MCK_SImm6NonZero }, },
  { 1292 /* c.addi */, RISCV::C_ADDI_HINT_IMM_ZERO, Convert__Reg1_0__Tie0_1_1__ImmZero1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRNoX0, MCK_ImmZero }, },
  { 1292 /* c.addi */, RISCV::C_ADDI, Convert__Reg1_0__Tie0_1_1__SImm6NonZero1_1, AMFBS_HasStdExtC, { MCK_GPRNoX0, MCK_SImm6NonZero }, },
  { 1299 /* c.addi16sp */, RISCV::C_ADDI16SP, Convert__Reg1_0__Tie0_1_1__SImm10Lsb0000NonZero1_1, AMFBS_HasStdExtC, { MCK_SP, MCK_SImm10Lsb0000NonZero }, },
  { 1310 /* c.addi4spn */, RISCV::C_ADDI4SPN, Convert__Reg1_0__Reg1_1__UImm10Lsb00NonZero1_2, AMFBS_HasStdExtC, { MCK_GPRC, MCK_SP, MCK_UImm10Lsb00NonZero }, },
  { 1321 /* c.addiw */, RISCV::C_ADDIW, Convert__Reg1_0__Tie0_1_1__SImm61_1, AMFBS_HasStdExtC_IsRV64, { MCK_GPRNoX0, MCK_SImm6 }, },
  { 1329 /* c.addw */, RISCV::C_ADDW, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtC_IsRV64, { MCK_GPRC, MCK_GPRC }, },
  { 1336 /* c.and */, RISCV::C_AND, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_GPRC }, },
  { 1342 /* c.andi */, RISCV::C_ANDI, Convert__Reg1_0__Tie0_1_1__SImm61_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_SImm6 }, },
  { 1349 /* c.beqz */, RISCV::C_BEQZ, Convert__Reg1_0__SImm9Lsb01_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_SImm9Lsb0 }, },
  { 1356 /* c.bnez */, RISCV::C_BNEZ, Convert__Reg1_0__SImm9Lsb01_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_SImm9Lsb0 }, },
  { 1363 /* c.ebreak */, RISCV::C_EBREAK, Convert_NoOperands, AMFBS_HasStdExtC, {  }, },
  { 1372 /* c.fld */, RISCV::C_FLD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_HasStdExtD, { MCK_FPR64C, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1372 /* c.fld */, RISCV::C_FLD, Convert__Reg1_0__Reg1_3__UImm8Lsb0001_1, AMFBS_HasStdExtC_HasStdExtD, { MCK_FPR64C, MCK_UImm8Lsb000, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1378 /* c.fldsp */, RISCV::C_FLDSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_HasStdExtD, { MCK_FPR64C, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1378 /* c.fldsp */, RISCV::C_FLDSP, Convert__Reg1_0__Reg1_3__UImm9Lsb0001_1, AMFBS_HasStdExtC_HasStdExtD, { MCK_FPR64, MCK_UImm9Lsb000, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1386 /* c.flw */, RISCV::C_FLW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_HasStdExtF_IsRV32, { MCK_FPR32C, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1386 /* c.flw */, RISCV::C_FLW, Convert__Reg1_0__Reg1_3__UImm7Lsb001_1, AMFBS_HasStdExtC_HasStdExtF_IsRV32, { MCK_FPR32C, MCK_UImm7Lsb00, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1392 /* c.flwsp */, RISCV::C_FLWSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_HasStdExtF_IsRV32, { MCK_FPR32C, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1392 /* c.flwsp */, RISCV::C_FLWSP, Convert__Reg1_0__Reg1_3__UImm8Lsb001_1, AMFBS_HasStdExtC_HasStdExtF_IsRV32, { MCK_FPR32, MCK_UImm8Lsb00, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1400 /* c.fsd */, RISCV::C_FSD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_HasStdExtD, { MCK_FPR64C, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1400 /* c.fsd */, RISCV::C_FSD, Convert__Reg1_0__Reg1_3__UImm8Lsb0001_1, AMFBS_HasStdExtC_HasStdExtD, { MCK_FPR64C, MCK_UImm8Lsb000, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1406 /* c.fsdsp */, RISCV::C_FSDSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_HasStdExtD, { MCK_FPR64C, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1406 /* c.fsdsp */, RISCV::C_FSDSP, Convert__Reg1_0__Reg1_3__UImm9Lsb0001_1, AMFBS_HasStdExtC_HasStdExtD, { MCK_FPR64, MCK_UImm9Lsb000, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1414 /* c.fsw */, RISCV::C_FSW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_HasStdExtF_IsRV32, { MCK_FPR32C, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1414 /* c.fsw */, RISCV::C_FSW, Convert__Reg1_0__Reg1_3__UImm7Lsb001_1, AMFBS_HasStdExtC_HasStdExtF_IsRV32, { MCK_FPR32C, MCK_UImm7Lsb00, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1420 /* c.fswsp */, RISCV::C_FSWSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_HasStdExtF_IsRV32, { MCK_FPR32C, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1420 /* c.fswsp */, RISCV::C_FSWSP, Convert__Reg1_0__Reg1_3__UImm8Lsb001_1, AMFBS_HasStdExtC_HasStdExtF_IsRV32, { MCK_FPR32, MCK_UImm8Lsb00, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1428 /* c.j */, RISCV::C_J, Convert__SImm12Lsb01_0, AMFBS_HasStdExtC, { MCK_SImm12Lsb0 }, },
  { 1432 /* c.jal */, RISCV::C_JAL, Convert__SImm12Lsb01_0, AMFBS_HasStdExtC_IsRV32, { MCK_SImm12Lsb0 }, },
  { 1438 /* c.jalr */, RISCV::C_JALR, Convert__Reg1_0, AMFBS_HasStdExtC, { MCK_GPRNoX0 }, },
  { 1445 /* c.jr */, RISCV::C_JR, Convert__Reg1_0, AMFBS_HasStdExtC, { MCK_GPRNoX0 }, },
  { 1450 /* c.ld */, RISCV::C_LD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_IsRV64, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1450 /* c.ld */, RISCV::C_LD, Convert__Reg1_0__Reg1_3__UImm8Lsb0001_1, AMFBS_HasStdExtC_IsRV64, { MCK_GPRC, MCK_UImm8Lsb000, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1455 /* c.ldsp */, RISCV::C_LDSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_IsRV64, { MCK_GPRC, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1455 /* c.ldsp */, RISCV::C_LDSP, Convert__Reg1_0__Reg1_3__UImm9Lsb0001_1, AMFBS_HasStdExtC_IsRV64, { MCK_GPRNoX0, MCK_UImm9Lsb000, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1462 /* c.li */, RISCV::C_LI_HINT, Convert__Reg1_0__SImm61_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRX0, MCK_SImm6 }, },
  { 1462 /* c.li */, RISCV::C_LI, Convert__Reg1_0__SImm61_1, AMFBS_HasStdExtC, { MCK_GPRNoX0, MCK_SImm6 }, },
  { 1467 /* c.lui */, RISCV::C_LUI_HINT, Convert__Reg1_0__CLUIImm1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRX0, MCK_CLUIImm }, },
  { 1467 /* c.lui */, RISCV::C_LUI, Convert__Reg1_0__CLUIImm1_1, AMFBS_HasStdExtC, { MCK_GPRNoX0X2, MCK_CLUIImm }, },
  { 1473 /* c.lw */, RISCV::C_LW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1473 /* c.lw */, RISCV::C_LW, Convert__Reg1_0__Reg1_3__UImm7Lsb001_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_UImm7Lsb00, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1478 /* c.lwsp */, RISCV::C_LWSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC, { MCK_GPRC, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1478 /* c.lwsp */, RISCV::C_LWSP, Convert__Reg1_0__Reg1_3__UImm8Lsb001_1, AMFBS_HasStdExtC, { MCK_GPRNoX0, MCK_UImm8Lsb00, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1485 /* c.mv */, RISCV::C_MV_HINT, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRX0, MCK_GPRNoX0 }, },
  { 1485 /* c.mv */, RISCV::C_MV, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtC, { MCK_GPRNoX0, MCK_GPRNoX0 }, },
  { 1490 /* c.nop */, RISCV::C_NOP, Convert_NoOperands, AMFBS_HasStdExtC, {  }, },
  { 1490 /* c.nop */, RISCV::C_NOP_HINT, Convert__SImm6NonZero1_0, AMFBS_HasStdExtC_HasRVCHints, { MCK_SImm6NonZero }, },
  { 1496 /* c.or */, RISCV::C_OR, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_GPRC }, },
  { 1501 /* c.sd */, RISCV::C_SD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_IsRV64, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1501 /* c.sd */, RISCV::C_SD, Convert__Reg1_0__Reg1_3__UImm8Lsb0001_1, AMFBS_HasStdExtC_IsRV64, { MCK_GPRC, MCK_UImm8Lsb000, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1506 /* c.sdsp */, RISCV::C_SDSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_IsRV64, { MCK_GPRC, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1506 /* c.sdsp */, RISCV::C_SDSP, Convert__Reg1_0__Reg1_3__UImm9Lsb0001_1, AMFBS_HasStdExtC_IsRV64, { MCK_GPR, MCK_UImm9Lsb000, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1513 /* c.slli */, RISCV::C_SLLI_HINT, Convert__Reg1_0__Tie0_1_1__UImmLog2XLenNonZero1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRX0, MCK_UImmLog2XLenNonZero }, },
  { 1513 /* c.slli */, RISCV::C_SLLI, Convert__Reg1_0__Tie0_1_1__UImmLog2XLenNonZero1_1, AMFBS_HasStdExtC, { MCK_GPRNoX0, MCK_UImmLog2XLenNonZero }, },
  { 1520 /* c.slli64 */, RISCV::C_SLLI64_HINT, Convert__Reg1_0__Tie0_1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPR }, },
  { 1529 /* c.srai */, RISCV::C_SRAI, Convert__Reg1_0__Tie0_1_1__UImmLog2XLenNonZero1_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_UImmLog2XLenNonZero }, },
  { 1536 /* c.srai64 */, RISCV::C_SRAI64_HINT, Convert__Reg1_0__Tie0_1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRC }, },
  { 1545 /* c.srli */, RISCV::C_SRLI, Convert__Reg1_0__Tie0_1_1__UImmLog2XLenNonZero1_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_UImmLog2XLenNonZero }, },
  { 1552 /* c.srli64 */, RISCV::C_SRLI64_HINT, Convert__Reg1_0__Tie0_1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRC }, },
  { 1561 /* c.sub */, RISCV::C_SUB, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_GPRC }, },
  { 1567 /* c.subw */, RISCV::C_SUBW, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtC_IsRV64, { MCK_GPRC, MCK_GPRC }, },
  { 1574 /* c.sw */, RISCV::C_SW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1574 /* c.sw */, RISCV::C_SW, Convert__Reg1_0__Reg1_3__UImm7Lsb001_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_UImm7Lsb00, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1579 /* c.swsp */, RISCV::C_SWSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC, { MCK_GPRC, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1579 /* c.swsp */, RISCV::C_SWSP, Convert__Reg1_0__Reg1_3__UImm8Lsb001_1, AMFBS_HasStdExtC, { MCK_GPR, MCK_UImm8Lsb00, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1586 /* c.unimp */, RISCV::C_UNIMP, Convert_NoOperands, AMFBS_HasStdExtC, {  }, },
  { 1594 /* c.xor */, RISCV::C_XOR, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_GPRC }, },
  { 1600 /* call */, RISCV::PseudoCALL, Convert__CallSymbol1_0, AMFBS_None, { MCK_CallSymbol }, },
  { 1600 /* call */, RISCV::PseudoCALLReg, Convert__Reg1_0__CallSymbol1_1, AMFBS_None, { MCK_GPR, MCK_CallSymbol }, },
  { 1605 /* cbo.clean */, RISCV::CBO_CLEAN, Convert__ZeroOffsetMemOpOperand1_0, AMFBS_HasStdExtZicbom, { MCK_ZeroOffsetMemOpOperand }, },
  { 1615 /* cbo.flush */, RISCV::CBO_FLUSH, Convert__ZeroOffsetMemOpOperand1_0, AMFBS_HasStdExtZicbom, { MCK_ZeroOffsetMemOpOperand }, },
  { 1625 /* cbo.inval */, RISCV::CBO_INVAL, Convert__ZeroOffsetMemOpOperand1_0, AMFBS_HasStdExtZicbom, { MCK_ZeroOffsetMemOpOperand }, },
  { 1635 /* cbo.zero */, RISCV::CBO_ZERO, Convert__ZeroOffsetMemOpOperand1_0, AMFBS_HasStdExtZicboz, { MCK_ZeroOffsetMemOpOperand }, },
  { 1644 /* clmul */, RISCV::CLMUL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbcOrZbkc, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1650 /* clmulh */, RISCV::CLMULH, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbcOrZbkc, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1657 /* clmulr */, RISCV::CLMULR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbc, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1664 /* clz */, RISCV::CLZ, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR }, },
  { 1668 /* clzw */, RISCV::CLZW, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 1673 /* cmix */, RISCV::CMIX, Convert__Reg1_0__Reg1_2__Reg1_1__Reg1_3, AMFBS_HasStdExtZbt, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1678 /* cmov */, RISCV::CMOV, Convert__Reg1_0__Reg1_2__Reg1_1__Reg1_3, AMFBS_HasStdExtZbt, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1683 /* cpop */, RISCV::CPOP, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR }, },
  { 1688 /* cpopw */, RISCV::CPOPW, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 1694 /* crc32.b */, RISCV::CRC32_B, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbr, { MCK_GPR, MCK_GPR }, },
  { 1702 /* crc32.d */, RISCV::CRC32_D, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbr_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 1710 /* crc32.h */, RISCV::CRC32_H, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbr, { MCK_GPR, MCK_GPR }, },
  { 1718 /* crc32.w */, RISCV::CRC32_W, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbr, { MCK_GPR, MCK_GPR }, },
  { 1726 /* crc32c.b */, RISCV::CRC32C_B, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbr, { MCK_GPR, MCK_GPR }, },
  { 1735 /* crc32c.d */, RISCV::CRC32C_D, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbr_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 1744 /* crc32c.h */, RISCV::CRC32C_H, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbr, { MCK_GPR, MCK_GPR }, },
  { 1753 /* crc32c.w */, RISCV::CRC32C_W, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbr, { MCK_GPR, MCK_GPR }, },
  { 1762 /* csrc */, RISCV::CSRRC, Convert__regX0__CSRSystemRegister1_0__Reg1_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_GPR }, },
  { 1762 /* csrc */, RISCV::CSRRCI, Convert__regX0__CSRSystemRegister1_0__UImm51_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1767 /* csrci */, RISCV::CSRRCI, Convert__regX0__CSRSystemRegister1_0__UImm51_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1773 /* csrr */, RISCV::CSRRS, Convert__Reg1_0__CSRSystemRegister1_1__regX0, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister }, },
  { 1778 /* csrrc */, RISCV::CSRRC, Convert__Reg1_0__CSRSystemRegister1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_GPR }, },
  { 1778 /* csrrc */, RISCV::CSRRCI, Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1784 /* csrrci */, RISCV::CSRRCI, Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1791 /* csrrs */, RISCV::CSRRS, Convert__Reg1_0__CSRSystemRegister1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_GPR }, },
  { 1791 /* csrrs */, RISCV::CSRRSI, Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1797 /* csrrsi */, RISCV::CSRRSI, Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1804 /* csrrw */, RISCV::CSRRW, Convert__Reg1_0__CSRSystemRegister1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_GPR }, },
  { 1804 /* csrrw */, RISCV::CSRRWI, Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1810 /* csrrwi */, RISCV::CSRRWI, Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1817 /* csrs */, RISCV::CSRRS, Convert__regX0__CSRSystemRegister1_0__Reg1_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_GPR }, },
  { 1817 /* csrs */, RISCV::CSRRSI, Convert__regX0__CSRSystemRegister1_0__UImm51_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1822 /* csrsi */, RISCV::CSRRSI, Convert__regX0__CSRSystemRegister1_0__UImm51_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1828 /* csrw */, RISCV::CSRRW, Convert__regX0__CSRSystemRegister1_0__Reg1_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_GPR }, },
  { 1828 /* csrw */, RISCV::CSRRWI, Convert__regX0__CSRSystemRegister1_0__UImm51_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1833 /* csrwi */, RISCV::CSRRWI, Convert__regX0__CSRSystemRegister1_0__UImm51_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1839 /* ctz */, RISCV::CTZ, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR }, },
  { 1843 /* ctzw */, RISCV::CTZW, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 1848 /* div */, RISCV::DIV, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1852 /* divu */, RISCV::DIVU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1857 /* divuw */, RISCV::DIVUW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1863 /* divw */, RISCV::DIVW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1868 /* dret */, RISCV::DRET, Convert__imm_95_0__imm_95_0, AMFBS_None, {  }, },
  { 1873 /* ebreak */, RISCV::EBREAK, Convert_NoOperands, AMFBS_None, {  }, },
  { 1880 /* ecall */, RISCV::ECALL, Convert_NoOperands, AMFBS_None, {  }, },
  { 1886 /* fabs.d */, RISCV::FSGNJX_D, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64 }, },
  { 1886 /* fabs.d */, RISCV::FSGNJX_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_1, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 1886 /* fabs.d */, RISCV::FSGNJX_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_1, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR }, },
  { 1893 /* fabs.h */, RISCV::FSGNJX_H, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16 }, },
  { 1893 /* fabs.h */, RISCV::FSGNJX_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_1, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 1900 /* fabs.s */, RISCV::FSGNJX_S, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32 }, },
  { 1900 /* fabs.s */, RISCV::FSGNJX_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_1, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 1907 /* fadd.d */, RISCV::FADD_D, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 1907 /* fadd.d */, RISCV::FADD_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__imm_95_7, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 1907 /* fadd.d */, RISCV::FADD_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2__imm_95_7, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR }, },
  { 1907 /* fadd.d */, RISCV::FADD_D, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 1907 /* fadd.d */, RISCV::FADD_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 1907 /* fadd.d */, RISCV::FADD_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_FRMArg }, },
  { 1914 /* fadd.h */, RISCV::FADD_H, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 1914 /* fadd.h */, RISCV::FADD_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__imm_95_7, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 1914 /* fadd.h */, RISCV::FADD_H, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 1914 /* fadd.h */, RISCV::FADD_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 1921 /* fadd.s */, RISCV::FADD_S, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 1921 /* fadd.s */, RISCV::FADD_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__imm_95_7, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 1921 /* fadd.s */, RISCV::FADD_S, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 1921 /* fadd.s */, RISCV::FADD_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 1928 /* fclass.d */, RISCV::FCLASS_D, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64 }, },
  { 1928 /* fclass.d */, RISCV::FCLASS_D_INX, Convert__Reg1_0__GPRF64AsFPR1_1, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPR, MCK_GPRF64AsFPR }, },
  { 1928 /* fclass.d */, RISCV::FCLASS_D_IN32X, Convert__Reg1_0__GPRPF64AsFPR1_1, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPR, MCK_GPRPF64AsFPR }, },
  { 1937 /* fclass.h */, RISCV::FCLASS_H, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16 }, },
  { 1937 /* fclass.h */, RISCV::FCLASS_H_INX, Convert__Reg1_0__GPRAsFPR1_1, AMFBS_HasStdExtZhinx, { MCK_GPR, MCK_GPRAsFPR }, },
  { 1946 /* fclass.s */, RISCV::FCLASS_S, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32 }, },
  { 1946 /* fclass.s */, RISCV::FCLASS_S_INX, Convert__Reg1_0__GPRAsFPR1_1, AMFBS_HasStdExtZfinx, { MCK_GPR, MCK_GPRAsFPR }, },
  { 1955 /* fcvt.d.h */, RISCV::FCVT_D_H, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZfhOrZfhmin_HasStdExtD, { MCK_FPR64, MCK_FPR16 }, },
  { 1955 /* fcvt.d.h */, RISCV::FCVT_D_H_INX, Convert__GPRF64AsFPR1_0__GPRAsFPR1_1, AMFBS_HasStdExtZhinxOrZhinxmin_HasStdExtZdinx, { MCK_GPRF64AsFPR, MCK_GPRAsFPR }, },
  { 1964 /* fcvt.d.l */, RISCV::FCVT_D_L, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtD_IsRV64, { MCK_FPR64, MCK_GPR }, },
  { 1964 /* fcvt.d.l */, RISCV::FCVT_D_L_INX, Convert__GPRF64AsFPR1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPR }, },
  { 1964 /* fcvt.d.l */, RISCV::FCVT_D_L, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD_IsRV64, { MCK_FPR64, MCK_GPR, MCK_FRMArg }, },
  { 1964 /* fcvt.d.l */, RISCV::FCVT_D_L_INX, Convert__GPRF64AsFPR1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPR, MCK_FRMArg }, },
  { 1973 /* fcvt.d.lu */, RISCV::FCVT_D_LU, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtD_IsRV64, { MCK_FPR64, MCK_GPR }, },
  { 1973 /* fcvt.d.lu */, RISCV::FCVT_D_LU_INX, Convert__GPRF64AsFPR1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPR }, },
  { 1973 /* fcvt.d.lu */, RISCV::FCVT_D_LU, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD_IsRV64, { MCK_FPR64, MCK_GPR, MCK_FRMArg }, },
  { 1973 /* fcvt.d.lu */, RISCV::FCVT_D_LU_INX, Convert__GPRF64AsFPR1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPR, MCK_FRMArg }, },
  { 1983 /* fcvt.d.s */, RISCV::FCVT_D_S, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR32 }, },
  { 1983 /* fcvt.d.s */, RISCV::FCVT_D_S_INX, Convert__GPRF64AsFPR1_0__GPRAsFPR1_1, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRAsFPR }, },
  { 1983 /* fcvt.d.s */, RISCV::FCVT_D_S_IN32X, Convert__GPRPF64AsFPR1_0__GPRAsFPR1_1, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRAsFPR }, },
  { 1992 /* fcvt.d.w */, RISCV::FCVT_D_W, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_GPR }, },
  { 1992 /* fcvt.d.w */, RISCV::FCVT_D_W_INX, Convert__GPRF64AsFPR1_0__Reg1_1, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPR }, },
  { 1992 /* fcvt.d.w */, RISCV::FCVT_D_W_IN32X, Convert__GPRPF64AsFPR1_0__Reg1_1, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPR }, },
  { 2001 /* fcvt.d.wu */, RISCV::FCVT_D_WU, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_GPR }, },
  { 2001 /* fcvt.d.wu */, RISCV::FCVT_D_WU_INX, Convert__GPRF64AsFPR1_0__Reg1_1, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPR }, },
  { 2001 /* fcvt.d.wu */, RISCV::FCVT_D_WU_IN32X, Convert__GPRPF64AsFPR1_0__Reg1_1, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPR }, },
  { 2011 /* fcvt.h.d */, RISCV::FCVT_H_D, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfhOrZfhmin_HasStdExtD, { MCK_FPR16, MCK_FPR64 }, },
  { 2011 /* fcvt.h.d */, RISCV::FCVT_H_D_INX, Convert__GPRAsFPR1_0__GPRF64AsFPR1_1__imm_95_7, AMFBS_HasStdExtZhinxOrZhinxmin_HasStdExtZdinx, { MCK_GPRAsFPR, MCK_GPRF64AsFPR }, },
  { 2011 /* fcvt.h.d */, RISCV::FCVT_H_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfhOrZfhmin_HasStdExtD, { MCK_FPR16, MCK_FPR64, MCK_FRMArg }, },
  { 2011 /* fcvt.h.d */, RISCV::FCVT_H_D_INX, Convert__GPRAsFPR1_0__GPRF64AsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZhinxOrZhinxmin_HasStdExtZdinx, { MCK_GPRAsFPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 2020 /* fcvt.h.l */, RISCV::FCVT_H_L, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfh_IsRV64, { MCK_FPR16, MCK_GPR }, },
  { 2020 /* fcvt.h.l */, RISCV::FCVT_H_L_INX, Convert__GPRAsFPR1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZhinx_IsRV64, { MCK_GPRAsFPR, MCK_GPR }, },
  { 2020 /* fcvt.h.l */, RISCV::FCVT_H_L, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh_IsRV64, { MCK_FPR16, MCK_GPR, MCK_FRMArg }, },
  { 2020 /* fcvt.h.l */, RISCV::FCVT_H_L_INX, Convert__GPRAsFPR1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZhinx_IsRV64, { MCK_GPRAsFPR, MCK_GPR, MCK_FRMArg }, },
  { 2029 /* fcvt.h.lu */, RISCV::FCVT_H_LU, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfh_IsRV64, { MCK_FPR16, MCK_GPR }, },
  { 2029 /* fcvt.h.lu */, RISCV::FCVT_H_LU_INX, Convert__GPRAsFPR1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZhinx_IsRV64, { MCK_GPRAsFPR, MCK_GPR }, },
  { 2029 /* fcvt.h.lu */, RISCV::FCVT_H_LU, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh_IsRV64, { MCK_FPR16, MCK_GPR, MCK_FRMArg }, },
  { 2029 /* fcvt.h.lu */, RISCV::FCVT_H_LU_INX, Convert__GPRAsFPR1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZhinx_IsRV64, { MCK_GPRAsFPR, MCK_GPR, MCK_FRMArg }, },
  { 2039 /* fcvt.h.s */, RISCV::FCVT_H_S, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfhOrZfhmin, { MCK_FPR16, MCK_FPR32 }, },
  { 2039 /* fcvt.h.s */, RISCV::FCVT_H_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__imm_95_7, AMFBS_HasStdExtZhinxOrZhinxmin, { MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2039 /* fcvt.h.s */, RISCV::FCVT_H_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfhOrZfhmin, { MCK_FPR16, MCK_FPR32, MCK_FRMArg }, },
  { 2039 /* fcvt.h.s */, RISCV::FCVT_H_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZhinxOrZhinxmin, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2048 /* fcvt.h.w */, RISCV::FCVT_H_W, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_GPR }, },
  { 2048 /* fcvt.h.w */, RISCV::FCVT_H_W_INX, Convert__GPRAsFPR1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPR }, },
  { 2048 /* fcvt.h.w */, RISCV::FCVT_H_W, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_GPR, MCK_FRMArg }, },
  { 2048 /* fcvt.h.w */, RISCV::FCVT_H_W_INX, Convert__GPRAsFPR1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPR, MCK_FRMArg }, },
  { 2057 /* fcvt.h.wu */, RISCV::FCVT_H_WU, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_GPR }, },
  { 2057 /* fcvt.h.wu */, RISCV::FCVT_H_WU_INX, Convert__GPRAsFPR1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPR }, },
  { 2057 /* fcvt.h.wu */, RISCV::FCVT_H_WU, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_GPR, MCK_FRMArg }, },
  { 2057 /* fcvt.h.wu */, RISCV::FCVT_H_WU_INX, Convert__GPRAsFPR1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPR, MCK_FRMArg }, },
  { 2067 /* fcvt.l.d */, RISCV::FCVT_L_D, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtD_IsRV64, { MCK_GPR, MCK_FPR64 }, },
  { 2067 /* fcvt.l.d */, RISCV::FCVT_L_D_INX, Convert__Reg1_0__GPRF64AsFPR1_1__imm_95_7, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPR, MCK_GPRF64AsFPR }, },
  { 2067 /* fcvt.l.d */, RISCV::FCVT_L_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD_IsRV64, { MCK_GPR, MCK_FPR64, MCK_FRMArg }, },
  { 2067 /* fcvt.l.d */, RISCV::FCVT_L_D_INX, Convert__Reg1_0__GPRF64AsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 2076 /* fcvt.l.h */, RISCV::FCVT_L_H, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfh_IsRV64, { MCK_GPR, MCK_FPR16 }, },
  { 2076 /* fcvt.l.h */, RISCV::FCVT_L_H_INX, Convert__Reg1_0__GPRAsFPR1_1__imm_95_7, AMFBS_HasStdExtZhinx_IsRV64, { MCK_GPR, MCK_GPRAsFPR }, },
  { 2076 /* fcvt.l.h */, RISCV::FCVT_L_H, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh_IsRV64, { MCK_GPR, MCK_FPR16, MCK_FRMArg }, },
  { 2076 /* fcvt.l.h */, RISCV::FCVT_L_H_INX, Convert__Reg1_0__GPRAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZhinx_IsRV64, { MCK_GPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2085 /* fcvt.l.s */, RISCV::FCVT_L_S, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF_IsRV64, { MCK_GPR, MCK_FPR32 }, },
  { 2085 /* fcvt.l.s */, RISCV::FCVT_L_S_INX, Convert__Reg1_0__GPRAsFPR1_1__imm_95_7, AMFBS_HasStdExtZfinx_IsRV64, { MCK_GPR, MCK_GPRAsFPR }, },
  { 2085 /* fcvt.l.s */, RISCV::FCVT_L_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF_IsRV64, { MCK_GPR, MCK_FPR32, MCK_FRMArg }, },
  { 2085 /* fcvt.l.s */, RISCV::FCVT_L_S_INX, Convert__Reg1_0__GPRAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZfinx_IsRV64, { MCK_GPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2094 /* fcvt.lu.d */, RISCV::FCVT_LU_D, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtD_IsRV64, { MCK_GPR, MCK_FPR64 }, },
  { 2094 /* fcvt.lu.d */, RISCV::FCVT_LU_D_INX, Convert__Reg1_0__GPRF64AsFPR1_1__imm_95_7, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPR, MCK_GPRF64AsFPR }, },
  { 2094 /* fcvt.lu.d */, RISCV::FCVT_LU_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD_IsRV64, { MCK_GPR, MCK_FPR64, MCK_FRMArg }, },
  { 2094 /* fcvt.lu.d */, RISCV::FCVT_LU_D_INX, Convert__Reg1_0__GPRF64AsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 2104 /* fcvt.lu.h */, RISCV::FCVT_LU_H, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfh_IsRV64, { MCK_GPR, MCK_FPR16 }, },
  { 2104 /* fcvt.lu.h */, RISCV::FCVT_LU_H_INX, Convert__Reg1_0__GPRAsFPR1_1__imm_95_7, AMFBS_HasStdExtZhinx_IsRV64, { MCK_GPR, MCK_GPRAsFPR }, },
  { 2104 /* fcvt.lu.h */, RISCV::FCVT_LU_H, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh_IsRV64, { MCK_GPR, MCK_FPR16, MCK_FRMArg }, },
  { 2104 /* fcvt.lu.h */, RISCV::FCVT_LU_H_INX, Convert__Reg1_0__GPRAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZhinx_IsRV64, { MCK_GPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2114 /* fcvt.lu.s */, RISCV::FCVT_LU_S, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF_IsRV64, { MCK_GPR, MCK_FPR32 }, },
  { 2114 /* fcvt.lu.s */, RISCV::FCVT_LU_S_INX, Convert__Reg1_0__GPRAsFPR1_1__imm_95_7, AMFBS_HasStdExtZfinx_IsRV64, { MCK_GPR, MCK_GPRAsFPR }, },
  { 2114 /* fcvt.lu.s */, RISCV::FCVT_LU_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF_IsRV64, { MCK_GPR, MCK_FPR32, MCK_FRMArg }, },
  { 2114 /* fcvt.lu.s */, RISCV::FCVT_LU_S_INX, Convert__Reg1_0__GPRAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZfinx_IsRV64, { MCK_GPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2124 /* fcvt.s.d */, RISCV::FCVT_S_D, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR32, MCK_FPR64 }, },
  { 2124 /* fcvt.s.d */, RISCV::FCVT_S_D_INX, Convert__GPRAsFPR1_0__GPRF64AsFPR1_1__imm_95_7, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRAsFPR, MCK_GPRF64AsFPR }, },
  { 2124 /* fcvt.s.d */, RISCV::FCVT_S_D_IN32X, Convert__GPRAsFPR1_0__GPRPF64AsFPR1_1__imm_95_7, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRAsFPR, MCK_GPRPF64AsFPR }, },
  { 2124 /* fcvt.s.d */, RISCV::FCVT_S_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD, { MCK_FPR32, MCK_FPR64, MCK_FRMArg }, },
  { 2124 /* fcvt.s.d */, RISCV::FCVT_S_D_INX, Convert__GPRAsFPR1_0__GPRF64AsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRAsFPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 2124 /* fcvt.s.d */, RISCV::FCVT_S_D_IN32X, Convert__GPRAsFPR1_0__GPRPF64AsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRAsFPR, MCK_GPRPF64AsFPR, MCK_FRMArg }, },
  { 2133 /* fcvt.s.h */, RISCV::FCVT_S_H, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZfhOrZfhmin, { MCK_FPR32, MCK_FPR16 }, },
  { 2133 /* fcvt.s.h */, RISCV::FCVT_S_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1, AMFBS_HasStdExtZhinxOrZhinxmin, { MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2142 /* fcvt.s.l */, RISCV::FCVT_S_L, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF_IsRV64, { MCK_FPR32, MCK_GPR }, },
  { 2142 /* fcvt.s.l */, RISCV::FCVT_S_L_INX, Convert__GPRAsFPR1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfinx_IsRV64, { MCK_GPRAsFPR, MCK_GPR }, },
  { 2142 /* fcvt.s.l */, RISCV::FCVT_S_L, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF_IsRV64, { MCK_FPR32, MCK_GPR, MCK_FRMArg }, },
  { 2142 /* fcvt.s.l */, RISCV::FCVT_S_L_INX, Convert__GPRAsFPR1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfinx_IsRV64, { MCK_GPRAsFPR, MCK_GPR, MCK_FRMArg }, },
  { 2151 /* fcvt.s.lu */, RISCV::FCVT_S_LU, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF_IsRV64, { MCK_FPR32, MCK_GPR }, },
  { 2151 /* fcvt.s.lu */, RISCV::FCVT_S_LU_INX, Convert__GPRAsFPR1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfinx_IsRV64, { MCK_GPRAsFPR, MCK_GPR }, },
  { 2151 /* fcvt.s.lu */, RISCV::FCVT_S_LU, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF_IsRV64, { MCK_FPR32, MCK_GPR, MCK_FRMArg }, },
  { 2151 /* fcvt.s.lu */, RISCV::FCVT_S_LU_INX, Convert__GPRAsFPR1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfinx_IsRV64, { MCK_GPRAsFPR, MCK_GPR, MCK_FRMArg }, },
  { 2161 /* fcvt.s.w */, RISCV::FCVT_S_W, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_GPR }, },
  { 2161 /* fcvt.s.w */, RISCV::FCVT_S_W_INX, Convert__GPRAsFPR1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPR }, },
  { 2161 /* fcvt.s.w */, RISCV::FCVT_S_W, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_GPR, MCK_FRMArg }, },
  { 2161 /* fcvt.s.w */, RISCV::FCVT_S_W_INX, Convert__GPRAsFPR1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPR, MCK_FRMArg }, },
  { 2170 /* fcvt.s.wu */, RISCV::FCVT_S_WU, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_GPR }, },
  { 2170 /* fcvt.s.wu */, RISCV::FCVT_S_WU_INX, Convert__GPRAsFPR1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPR }, },
  { 2170 /* fcvt.s.wu */, RISCV::FCVT_S_WU, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_GPR, MCK_FRMArg }, },
  { 2170 /* fcvt.s.wu */, RISCV::FCVT_S_WU_INX, Convert__GPRAsFPR1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPR, MCK_FRMArg }, },
  { 2180 /* fcvt.w.d */, RISCV::FCVT_W_D, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64 }, },
  { 2180 /* fcvt.w.d */, RISCV::FCVT_W_D_INX, Convert__Reg1_0__GPRF64AsFPR1_1__imm_95_7, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPR, MCK_GPRF64AsFPR }, },
  { 2180 /* fcvt.w.d */, RISCV::FCVT_W_D_IN32X, Convert__Reg1_0__GPRPF64AsFPR1_1__imm_95_7, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPR, MCK_GPRPF64AsFPR }, },
  { 2180 /* fcvt.w.d */, RISCV::FCVT_W_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FRMArg }, },
  { 2180 /* fcvt.w.d */, RISCV::FCVT_W_D_INX, Convert__Reg1_0__GPRF64AsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 2180 /* fcvt.w.d */, RISCV::FCVT_W_D_IN32X, Convert__Reg1_0__GPRPF64AsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPR, MCK_GPRPF64AsFPR, MCK_FRMArg }, },
  { 2189 /* fcvt.w.h */, RISCV::FCVT_W_H, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16 }, },
  { 2189 /* fcvt.w.h */, RISCV::FCVT_W_H_INX, Convert__Reg1_0__GPRAsFPR1_1__imm_95_7, AMFBS_HasStdExtZhinx, { MCK_GPR, MCK_GPRAsFPR }, },
  { 2189 /* fcvt.w.h */, RISCV::FCVT_W_H, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FRMArg }, },
  { 2189 /* fcvt.w.h */, RISCV::FCVT_W_H_INX, Convert__Reg1_0__GPRAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZhinx, { MCK_GPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2198 /* fcvt.w.s */, RISCV::FCVT_W_S, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32 }, },
  { 2198 /* fcvt.w.s */, RISCV::FCVT_W_S_INX, Convert__Reg1_0__GPRAsFPR1_1__imm_95_7, AMFBS_HasStdExtZfinx, { MCK_GPR, MCK_GPRAsFPR }, },
  { 2198 /* fcvt.w.s */, RISCV::FCVT_W_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FRMArg }, },
  { 2198 /* fcvt.w.s */, RISCV::FCVT_W_S_INX, Convert__Reg1_0__GPRAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZfinx, { MCK_GPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2207 /* fcvt.wu.d */, RISCV::FCVT_WU_D, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64 }, },
  { 2207 /* fcvt.wu.d */, RISCV::FCVT_WU_D_INX, Convert__Reg1_0__GPRF64AsFPR1_1__imm_95_7, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPR, MCK_GPRF64AsFPR }, },
  { 2207 /* fcvt.wu.d */, RISCV::FCVT_WU_D_IN32X, Convert__Reg1_0__GPRPF64AsFPR1_1__imm_95_7, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPR, MCK_GPRPF64AsFPR }, },
  { 2207 /* fcvt.wu.d */, RISCV::FCVT_WU_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FRMArg }, },
  { 2207 /* fcvt.wu.d */, RISCV::FCVT_WU_D_INX, Convert__Reg1_0__GPRF64AsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 2207 /* fcvt.wu.d */, RISCV::FCVT_WU_D_IN32X, Convert__Reg1_0__GPRPF64AsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPR, MCK_GPRPF64AsFPR, MCK_FRMArg }, },
  { 2217 /* fcvt.wu.h */, RISCV::FCVT_WU_H, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16 }, },
  { 2217 /* fcvt.wu.h */, RISCV::FCVT_WU_H_INX, Convert__Reg1_0__GPRAsFPR1_1__imm_95_7, AMFBS_HasStdExtZhinx, { MCK_GPR, MCK_GPRAsFPR }, },
  { 2217 /* fcvt.wu.h */, RISCV::FCVT_WU_H, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FRMArg }, },
  { 2217 /* fcvt.wu.h */, RISCV::FCVT_WU_H_INX, Convert__Reg1_0__GPRAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZhinx, { MCK_GPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2227 /* fcvt.wu.s */, RISCV::FCVT_WU_S, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32 }, },
  { 2227 /* fcvt.wu.s */, RISCV::FCVT_WU_S_INX, Convert__Reg1_0__GPRAsFPR1_1__imm_95_7, AMFBS_HasStdExtZfinx, { MCK_GPR, MCK_GPRAsFPR }, },
  { 2227 /* fcvt.wu.s */, RISCV::FCVT_WU_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FRMArg }, },
  { 2227 /* fcvt.wu.s */, RISCV::FCVT_WU_S_INX, Convert__Reg1_0__GPRAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZfinx, { MCK_GPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2237 /* fdiv.d */, RISCV::FDIV_D, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2237 /* fdiv.d */, RISCV::FDIV_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__imm_95_7, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 2237 /* fdiv.d */, RISCV::FDIV_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2__imm_95_7, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR }, },
  { 2237 /* fdiv.d */, RISCV::FDIV_D, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 2237 /* fdiv.d */, RISCV::FDIV_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 2237 /* fdiv.d */, RISCV::FDIV_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_FRMArg }, },
  { 2244 /* fdiv.h */, RISCV::FDIV_H, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 2244 /* fdiv.h */, RISCV::FDIV_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__imm_95_7, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2244 /* fdiv.h */, RISCV::FDIV_H, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 2244 /* fdiv.h */, RISCV::FDIV_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2251 /* fdiv.s */, RISCV::FDIV_S, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2251 /* fdiv.s */, RISCV::FDIV_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__imm_95_7, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2251 /* fdiv.s */, RISCV::FDIV_S, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 2251 /* fdiv.s */, RISCV::FDIV_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2258 /* fence */, RISCV::FENCE, Convert__imm_95_15__imm_95_15, AMFBS_None, {  }, },
  { 2258 /* fence */, RISCV::FENCE, Convert__FenceArg1_0__FenceArg1_1, AMFBS_None, { MCK_FenceArg, MCK_FenceArg }, },
  { 2264 /* fence.i */, RISCV::FENCE_I, Convert_NoOperands, AMFBS_None, {  }, },
  { 2272 /* fence.tso */, RISCV::FENCE_TSO, Convert_NoOperands, AMFBS_None, {  }, },
  { 2282 /* feq.d */, RISCV::FEQ_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FPR64 }, },
  { 2282 /* feq.d */, RISCV::FEQ_D_INX, Convert__Reg1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 2282 /* feq.d */, RISCV::FEQ_D_IN32X, Convert__Reg1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR }, },
  { 2288 /* feq.h */, RISCV::FEQ_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FPR16 }, },
  { 2288 /* feq.h */, RISCV::FEQ_H_INX, Convert__Reg1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZhinx, { MCK_GPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2294 /* feq.s */, RISCV::FEQ_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FPR32 }, },
  { 2294 /* feq.s */, RISCV::FEQ_S_INX, Convert__Reg1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZfinx, { MCK_GPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2300 /* fge.d */, RISCV::FLE_D, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FPR64 }, },
  { 2300 /* fge.d */, RISCV::FLE_D_INX, Convert__Reg1_0__GPRF64AsFPR1_2__GPRF64AsFPR1_1, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 2300 /* fge.d */, RISCV::FLE_D_IN32X, Convert__Reg1_0__GPRPF64AsFPR1_2__GPRPF64AsFPR1_1, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR }, },
  { 2306 /* fge.h */, RISCV::FLE_H, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FPR16 }, },
  { 2306 /* fge.h */, RISCV::FLE_H_INX, Convert__Reg1_0__GPRAsFPR1_2__GPRAsFPR1_1, AMFBS_HasStdExtZhinx, { MCK_GPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2312 /* fge.s */, RISCV::FLE_S, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FPR32 }, },
  { 2312 /* fge.s */, RISCV::FLE_S_INX, Convert__Reg1_0__GPRAsFPR1_2__GPRAsFPR1_1, AMFBS_HasStdExtZfinx, { MCK_GPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2318 /* fgt.d */, RISCV::FLT_D, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FPR64 }, },
  { 2318 /* fgt.d */, RISCV::FLT_D_INX, Convert__Reg1_0__GPRF64AsFPR1_2__GPRF64AsFPR1_1, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 2318 /* fgt.d */, RISCV::FLT_D_IN32X, Convert__Reg1_0__GPRPF64AsFPR1_2__GPRPF64AsFPR1_1, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR }, },
  { 2324 /* fgt.h */, RISCV::FLT_H, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FPR16 }, },
  { 2324 /* fgt.h */, RISCV::FLT_H_INX, Convert__Reg1_0__GPRAsFPR1_2__GPRAsFPR1_1, AMFBS_HasStdExtZhinx, { MCK_GPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2330 /* fgt.s */, RISCV::FLT_S, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FPR32 }, },
  { 2330 /* fgt.s */, RISCV::FLT_S_INX, Convert__Reg1_0__GPRAsFPR1_2__GPRAsFPR1_1, AMFBS_HasStdExtZfinx, { MCK_GPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2336 /* fld */, RISCV::PseudoFLD, Convert__Reg1_2__Reg1_0__BareSymbol1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_BareSymbol, MCK_GPR }, },
  { 2336 /* fld */, RISCV::FLD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtD, { MCK_FPR64, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2336 /* fld */, RISCV::FLD, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2340 /* fle.d */, RISCV::FLE_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FPR64 }, },
  { 2340 /* fle.d */, RISCV::FLE_D_INX, Convert__Reg1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 2340 /* fle.d */, RISCV::FLE_D_IN32X, Convert__Reg1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR }, },
  { 2346 /* fle.h */, RISCV::FLE_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FPR16 }, },
  { 2346 /* fle.h */, RISCV::FLE_H_INX, Convert__Reg1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZhinx, { MCK_GPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2352 /* fle.s */, RISCV::FLE_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FPR32 }, },
  { 2352 /* fle.s */, RISCV::FLE_S_INX, Convert__Reg1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZfinx, { MCK_GPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2358 /* flh */, RISCV::PseudoFLH, Convert__Reg1_2__Reg1_0__BareSymbol1_1, AMFBS_HasStdExtZfhOrZfhmin, { MCK_FPR16, MCK_BareSymbol, MCK_GPR }, },
  { 2358 /* flh */, RISCV::FLH, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtZfhOrZfhmin, { MCK_FPR16, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2358 /* flh */, RISCV::FLH, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_HasStdExtZfhOrZfhmin, { MCK_FPR16, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2362 /* flt.d */, RISCV::FLT_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FPR64 }, },
  { 2362 /* flt.d */, RISCV::FLT_D_INX, Convert__Reg1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 2362 /* flt.d */, RISCV::FLT_D_IN32X, Convert__Reg1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR }, },
  { 2368 /* flt.h */, RISCV::FLT_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FPR16 }, },
  { 2368 /* flt.h */, RISCV::FLT_H_INX, Convert__Reg1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZhinx, { MCK_GPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2374 /* flt.s */, RISCV::FLT_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FPR32 }, },
  { 2374 /* flt.s */, RISCV::FLT_S_INX, Convert__Reg1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZfinx, { MCK_GPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2380 /* flw */, RISCV::PseudoFLW, Convert__Reg1_2__Reg1_0__BareSymbol1_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_BareSymbol, MCK_GPR }, },
  { 2380 /* flw */, RISCV::FLW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtF, { MCK_FPR32, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2380 /* flw */, RISCV::FLW, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2384 /* fmadd.d */, RISCV::FMADD_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2384 /* fmadd.d */, RISCV::FMADD_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__GPRF64AsFPR1_3__imm_95_7, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 2384 /* fmadd.d */, RISCV::FMADD_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2__GPRPF64AsFPR1_3__imm_95_7, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR }, },
  { 2384 /* fmadd.d */, RISCV::FMADD_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 2384 /* fmadd.d */, RISCV::FMADD_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__GPRF64AsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 2384 /* fmadd.d */, RISCV::FMADD_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2__GPRPF64AsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_FRMArg }, },
  { 2392 /* fmadd.h */, RISCV::FMADD_H, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 2392 /* fmadd.h */, RISCV::FMADD_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__imm_95_7, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2392 /* fmadd.h */, RISCV::FMADD_H, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 2392 /* fmadd.h */, RISCV::FMADD_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2400 /* fmadd.s */, RISCV::FMADD_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2400 /* fmadd.s */, RISCV::FMADD_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__imm_95_7, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2400 /* fmadd.s */, RISCV::FMADD_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 2400 /* fmadd.s */, RISCV::FMADD_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2408 /* fmax.d */, RISCV::FMAX_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2408 /* fmax.d */, RISCV::FMAX_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 2408 /* fmax.d */, RISCV::FMAX_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR }, },
  { 2415 /* fmax.h */, RISCV::FMAX_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 2415 /* fmax.h */, RISCV::FMAX_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2422 /* fmax.s */, RISCV::FMAX_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2422 /* fmax.s */, RISCV::FMAX_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2429 /* fmin.d */, RISCV::FMIN_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2429 /* fmin.d */, RISCV::FMIN_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 2429 /* fmin.d */, RISCV::FMIN_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR }, },
  { 2436 /* fmin.h */, RISCV::FMIN_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 2436 /* fmin.h */, RISCV::FMIN_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2443 /* fmin.s */, RISCV::FMIN_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2443 /* fmin.s */, RISCV::FMIN_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2450 /* fmsub.d */, RISCV::FMSUB_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2450 /* fmsub.d */, RISCV::FMSUB_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__GPRF64AsFPR1_3__imm_95_7, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 2450 /* fmsub.d */, RISCV::FMSUB_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2__GPRPF64AsFPR1_3__imm_95_7, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR }, },
  { 2450 /* fmsub.d */, RISCV::FMSUB_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 2450 /* fmsub.d */, RISCV::FMSUB_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__GPRF64AsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 2450 /* fmsub.d */, RISCV::FMSUB_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2__GPRPF64AsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_FRMArg }, },
  { 2458 /* fmsub.h */, RISCV::FMSUB_H, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 2458 /* fmsub.h */, RISCV::FMSUB_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__imm_95_7, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2458 /* fmsub.h */, RISCV::FMSUB_H, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 2458 /* fmsub.h */, RISCV::FMSUB_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2466 /* fmsub.s */, RISCV::FMSUB_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2466 /* fmsub.s */, RISCV::FMSUB_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__imm_95_7, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2466 /* fmsub.s */, RISCV::FMSUB_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 2466 /* fmsub.s */, RISCV::FMSUB_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2474 /* fmul.d */, RISCV::FMUL_D, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2474 /* fmul.d */, RISCV::FMUL_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__imm_95_7, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 2474 /* fmul.d */, RISCV::FMUL_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2__imm_95_7, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR }, },
  { 2474 /* fmul.d */, RISCV::FMUL_D, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 2474 /* fmul.d */, RISCV::FMUL_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 2474 /* fmul.d */, RISCV::FMUL_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_FRMArg }, },
  { 2481 /* fmul.h */, RISCV::FMUL_H, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 2481 /* fmul.h */, RISCV::FMUL_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__imm_95_7, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2481 /* fmul.h */, RISCV::FMUL_H, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 2481 /* fmul.h */, RISCV::FMUL_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2488 /* fmul.s */, RISCV::FMUL_S, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2488 /* fmul.s */, RISCV::FMUL_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__imm_95_7, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2488 /* fmul.s */, RISCV::FMUL_S, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 2488 /* fmul.s */, RISCV::FMUL_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2495 /* fmv.d */, RISCV::FSGNJ_D, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64 }, },
  { 2501 /* fmv.d.x */, RISCV::FMV_D_X, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtD_IsRV64, { MCK_FPR64, MCK_GPR }, },
  { 2509 /* fmv.h */, RISCV::FSGNJ_H, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16 }, },
  { 2509 /* fmv.h */, RISCV::FSGNJ_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_1, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2515 /* fmv.h.x */, RISCV::FMV_H_X, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZfhOrZfhmin, { MCK_FPR16, MCK_GPR }, },
  { 2523 /* fmv.s */, RISCV::FSGNJ_S, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32 }, },
  { 2529 /* fmv.w.x */, RISCV::FMV_W_X, Convert__Reg1_0__Reg1_1, AMFBS_None, { MCK_FPR32, MCK_GPR }, },
  { 2537 /* fmv.x.d */, RISCV::FMV_X_D, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtD_IsRV64, { MCK_GPR, MCK_FPR64 }, },
  { 2545 /* fmv.x.h */, RISCV::FMV_X_H, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZfhOrZfhmin, { MCK_GPR, MCK_FPR16 }, },
  { 2553 /* fmv.x.w */, RISCV::FMV_X_W, Convert__Reg1_0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_FPR32 }, },
  { 2561 /* fneg.d */, RISCV::FSGNJN_D, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64 }, },
  { 2561 /* fneg.d */, RISCV::FSGNJN_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_1, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 2561 /* fneg.d */, RISCV::FSGNJN_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_1, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR }, },
  { 2568 /* fneg.h */, RISCV::FSGNJN_H, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16 }, },
  { 2568 /* fneg.h */, RISCV::FSGNJN_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_1, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2575 /* fneg.s */, RISCV::FSGNJN_S, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32 }, },
  { 2575 /* fneg.s */, RISCV::FSGNJN_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_1, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2582 /* fnmadd.d */, RISCV::FNMADD_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2582 /* fnmadd.d */, RISCV::FNMADD_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__GPRF64AsFPR1_3__imm_95_7, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 2582 /* fnmadd.d */, RISCV::FNMADD_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2__GPRPF64AsFPR1_3__imm_95_7, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR }, },
  { 2582 /* fnmadd.d */, RISCV::FNMADD_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 2582 /* fnmadd.d */, RISCV::FNMADD_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__GPRF64AsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 2582 /* fnmadd.d */, RISCV::FNMADD_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2__GPRPF64AsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_FRMArg }, },
  { 2591 /* fnmadd.h */, RISCV::FNMADD_H, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 2591 /* fnmadd.h */, RISCV::FNMADD_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__imm_95_7, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2591 /* fnmadd.h */, RISCV::FNMADD_H, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 2591 /* fnmadd.h */, RISCV::FNMADD_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2600 /* fnmadd.s */, RISCV::FNMADD_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2600 /* fnmadd.s */, RISCV::FNMADD_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__imm_95_7, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2600 /* fnmadd.s */, RISCV::FNMADD_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 2600 /* fnmadd.s */, RISCV::FNMADD_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2609 /* fnmsub.d */, RISCV::FNMSUB_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2609 /* fnmsub.d */, RISCV::FNMSUB_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__GPRF64AsFPR1_3__imm_95_7, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 2609 /* fnmsub.d */, RISCV::FNMSUB_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2__GPRPF64AsFPR1_3__imm_95_7, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR }, },
  { 2609 /* fnmsub.d */, RISCV::FNMSUB_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 2609 /* fnmsub.d */, RISCV::FNMSUB_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__GPRF64AsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 2609 /* fnmsub.d */, RISCV::FNMSUB_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2__GPRPF64AsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_FRMArg }, },
  { 2618 /* fnmsub.h */, RISCV::FNMSUB_H, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 2618 /* fnmsub.h */, RISCV::FNMSUB_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__imm_95_7, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2618 /* fnmsub.h */, RISCV::FNMSUB_H, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 2618 /* fnmsub.h */, RISCV::FNMSUB_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2627 /* fnmsub.s */, RISCV::FNMSUB_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2627 /* fnmsub.s */, RISCV::FNMSUB_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__imm_95_7, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2627 /* fnmsub.s */, RISCV::FNMSUB_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 2627 /* fnmsub.s */, RISCV::FNMSUB_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__GPRAsFPR1_3__FRMArg1_4, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2636 /* frcsr */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3__regX0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 2642 /* frflags */, RISCV::CSRRS, Convert__Reg1_0__imm_95_1__regX0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 2650 /* frrm */, RISCV::CSRRS, Convert__Reg1_0__imm_95_2__regX0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 2655 /* frsr */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3__regX0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 2660 /* fscsr */, RISCV::CSRRW, Convert__regX0__imm_95_3__Reg1_0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 2660 /* fscsr */, RISCV::CSRRW, Convert__Reg1_0__imm_95_3__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_GPR }, },
  { 2666 /* fsd */, RISCV::PseudoFSD, Convert__Reg1_2__Reg1_0__BareSymbol1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_BareSymbol, MCK_GPR }, },
  { 2666 /* fsd */, RISCV::FSD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtD, { MCK_FPR64, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2666 /* fsd */, RISCV::FSD, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2670 /* fsflags */, RISCV::CSRRW, Convert__regX0__imm_95_1__Reg1_0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 2670 /* fsflags */, RISCV::CSRRW, Convert__Reg1_0__imm_95_1__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_GPR }, },
  { 2678 /* fsflagsi */, RISCV::CSRRWI, Convert__regX0__imm_95_1__UImm51_0, AMFBS_HasStdExtF, { MCK_UImm5 }, },
  { 2678 /* fsflagsi */, RISCV::CSRRWI, Convert__Reg1_0__imm_95_1__UImm51_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_UImm5 }, },
  { 2687 /* fsgnj.d */, RISCV::FSGNJ_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2687 /* fsgnj.d */, RISCV::FSGNJ_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 2687 /* fsgnj.d */, RISCV::FSGNJ_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR }, },
  { 2695 /* fsgnj.h */, RISCV::FSGNJ_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 2695 /* fsgnj.h */, RISCV::FSGNJ_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2703 /* fsgnj.s */, RISCV::FSGNJ_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2703 /* fsgnj.s */, RISCV::FSGNJ_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2711 /* fsgnjn.d */, RISCV::FSGNJN_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2711 /* fsgnjn.d */, RISCV::FSGNJN_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 2711 /* fsgnjn.d */, RISCV::FSGNJN_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR }, },
  { 2720 /* fsgnjn.h */, RISCV::FSGNJN_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 2720 /* fsgnjn.h */, RISCV::FSGNJN_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2729 /* fsgnjn.s */, RISCV::FSGNJN_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2729 /* fsgnjn.s */, RISCV::FSGNJN_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2738 /* fsgnjx.d */, RISCV::FSGNJX_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2738 /* fsgnjx.d */, RISCV::FSGNJX_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 2738 /* fsgnjx.d */, RISCV::FSGNJX_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR }, },
  { 2747 /* fsgnjx.h */, RISCV::FSGNJX_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 2747 /* fsgnjx.h */, RISCV::FSGNJX_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2756 /* fsgnjx.s */, RISCV::FSGNJX_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2756 /* fsgnjx.s */, RISCV::FSGNJX_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2765 /* fsh */, RISCV::PseudoFSH, Convert__Reg1_2__Reg1_0__BareSymbol1_1, AMFBS_HasStdExtZfhOrZfhmin, { MCK_FPR16, MCK_BareSymbol, MCK_GPR }, },
  { 2765 /* fsh */, RISCV::FSH, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtZfhOrZfhmin, { MCK_FPR16, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2765 /* fsh */, RISCV::FSH, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_HasStdExtZfhOrZfhmin, { MCK_FPR16, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2769 /* fsl */, RISCV::FSL, Convert__Reg1_0__Reg1_1__Reg1_3__Reg1_2, AMFBS_HasStdExtZbt, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2773 /* fslw */, RISCV::FSLW, Convert__Reg1_0__Reg1_1__Reg1_3__Reg1_2, AMFBS_HasStdExtZbt_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2778 /* fsqrt.d */, RISCV::FSQRT_D, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64 }, },
  { 2778 /* fsqrt.d */, RISCV::FSQRT_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__imm_95_7, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 2778 /* fsqrt.d */, RISCV::FSQRT_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__imm_95_7, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR }, },
  { 2778 /* fsqrt.d */, RISCV::FSQRT_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 2778 /* fsqrt.d */, RISCV::FSQRT_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 2778 /* fsqrt.d */, RISCV::FSQRT_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_FRMArg }, },
  { 2786 /* fsqrt.h */, RISCV::FSQRT_H, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16 }, },
  { 2786 /* fsqrt.h */, RISCV::FSQRT_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__imm_95_7, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2786 /* fsqrt.h */, RISCV::FSQRT_H, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 2786 /* fsqrt.h */, RISCV::FSQRT_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2794 /* fsqrt.s */, RISCV::FSQRT_S, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32 }, },
  { 2794 /* fsqrt.s */, RISCV::FSQRT_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__imm_95_7, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2794 /* fsqrt.s */, RISCV::FSQRT_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 2794 /* fsqrt.s */, RISCV::FSQRT_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__FRMArg1_2, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2802 /* fsr */, RISCV::FSR, Convert__Reg1_0__Reg1_1__Reg1_3__Reg1_2, AMFBS_HasStdExtZbt, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2806 /* fsri */, RISCV::FSRI, Convert__Reg1_0__Reg1_1__Reg1_2__UImmLog2XLen1_3, AMFBS_HasStdExtZbt, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 2811 /* fsriw */, RISCV::FSRIW, Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasStdExtZbt_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 2817 /* fsrm */, RISCV::CSRRW, Convert__regX0__imm_95_2__Reg1_0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 2817 /* fsrm */, RISCV::CSRRW, Convert__Reg1_0__imm_95_2__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_GPR }, },
  { 2822 /* fsrmi */, RISCV::CSRRWI, Convert__regX0__imm_95_2__UImm51_0, AMFBS_HasStdExtF, { MCK_UImm5 }, },
  { 2822 /* fsrmi */, RISCV::CSRRWI, Convert__Reg1_0__imm_95_2__UImm51_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_UImm5 }, },
  { 2828 /* fsrw */, RISCV::FSRW, Convert__Reg1_0__Reg1_1__Reg1_3__Reg1_2, AMFBS_HasStdExtZbt_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2833 /* fssr */, RISCV::CSRRW, Convert__regX0__imm_95_3__Reg1_0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 2833 /* fssr */, RISCV::CSRRW, Convert__Reg1_0__imm_95_3__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_GPR }, },
  { 2838 /* fsub.d */, RISCV::FSUB_D, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2838 /* fsub.d */, RISCV::FSUB_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__imm_95_7, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR }, },
  { 2838 /* fsub.d */, RISCV::FSUB_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2__imm_95_7, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR }, },
  { 2838 /* fsub.d */, RISCV::FSUB_D, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 2838 /* fsub.d */, RISCV::FSUB_D_INX, Convert__GPRF64AsFPR1_0__GPRF64AsFPR1_1__GPRF64AsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZdinx_IsRV64, { MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_GPRF64AsFPR, MCK_FRMArg }, },
  { 2838 /* fsub.d */, RISCV::FSUB_D_IN32X, Convert__GPRPF64AsFPR1_0__GPRPF64AsFPR1_1__GPRPF64AsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZdinx_IsRV32, { MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_GPRPF64AsFPR, MCK_FRMArg }, },
  { 2845 /* fsub.h */, RISCV::FSUB_H, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 2845 /* fsub.h */, RISCV::FSUB_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__imm_95_7, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2845 /* fsub.h */, RISCV::FSUB_H, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 2845 /* fsub.h */, RISCV::FSUB_H_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZhinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2852 /* fsub.s */, RISCV::FSUB_S, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2852 /* fsub.s */, RISCV::FSUB_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__imm_95_7, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR }, },
  { 2852 /* fsub.s */, RISCV::FSUB_S, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 2852 /* fsub.s */, RISCV::FSUB_S_INX, Convert__GPRAsFPR1_0__GPRAsFPR1_1__GPRAsFPR1_2__FRMArg1_3, AMFBS_HasStdExtZfinx, { MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_GPRAsFPR, MCK_FRMArg }, },
  { 2859 /* fsw */, RISCV::PseudoFSW, Convert__Reg1_2__Reg1_0__BareSymbol1_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_BareSymbol, MCK_GPR }, },
  { 2859 /* fsw */, RISCV::FSW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtF, { MCK_FPR32, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2859 /* fsw */, RISCV::FSW, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2863 /* gorc */, RISCV::GORC, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2863 /* gorc */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 2868 /* gorci */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 2874 /* gorciw */, RISCV::GORCIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 2881 /* gorcw */, RISCV::GORCW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2881 /* gorcw */, RISCV::GORCIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 2887 /* grev */, RISCV::GREV, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2887 /* grev */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 2892 /* grevi */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 2898 /* greviw */, RISCV::GREVIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 2905 /* grevw */, RISCV::GREVW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2905 /* grevw */, RISCV::GREVIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 2911 /* hfence.gvma */, RISCV::HFENCE_GVMA, Convert__regX0__regX0, AMFBS_None, {  }, },
  { 2911 /* hfence.gvma */, RISCV::HFENCE_GVMA, Convert__Reg1_0__regX0, AMFBS_None, { MCK_GPR }, },
  { 2911 /* hfence.gvma */, RISCV::HFENCE_GVMA, Convert__Reg1_0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 2923 /* hfence.vvma */, RISCV::HFENCE_VVMA, Convert__regX0__regX0, AMFBS_None, {  }, },
  { 2923 /* hfence.vvma */, RISCV::HFENCE_VVMA, Convert__Reg1_0__regX0, AMFBS_None, { MCK_GPR }, },
  { 2923 /* hfence.vvma */, RISCV::HFENCE_VVMA, Convert__Reg1_0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 2935 /* hinval.gvma */, RISCV::HINVAL_GVMA, Convert__Reg1_0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 2947 /* hinval.vvma */, RISCV::HINVAL_VVMA, Convert__Reg1_0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 2959 /* hlv.b */, RISCV::HLV_B, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_None, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2965 /* hlv.bu */, RISCV::HLV_BU, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_None, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2972 /* hlv.d */, RISCV::HLV_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_IsRV64, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2978 /* hlv.h */, RISCV::HLV_H, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_None, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2984 /* hlv.hu */, RISCV::HLV_HU, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_None, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2991 /* hlv.w */, RISCV::HLV_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_None, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 2997 /* hlv.wu */, RISCV::HLV_WU, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_IsRV64, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 3004 /* hlvx.hu */, RISCV::HLVX_HU, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_None, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 3012 /* hlvx.wu */, RISCV::HLVX_WU, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_None, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 3020 /* hsv.b */, RISCV::HSV_B, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_None, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 3026 /* hsv.d */, RISCV::HSV_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_IsRV64, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 3032 /* hsv.h */, RISCV::HSV_H, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_None, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 3038 /* hsv.w */, RISCV::HSV_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_None, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 3044 /* j */, RISCV::JAL, Convert__regX0__SImm21Lsb0JAL1_0, AMFBS_None, { MCK_SImm21Lsb0JAL }, },
  { 3046 /* jal */, RISCV::JAL, Convert__regX1__SImm21Lsb0JAL1_0, AMFBS_None, { MCK_SImm21Lsb0JAL }, },
  { 3046 /* jal */, RISCV::JAL, Convert__Reg1_0__SImm21Lsb0JAL1_1, AMFBS_None, { MCK_GPR, MCK_SImm21Lsb0JAL }, },
  { 3050 /* jalr */, RISCV::JALR, Convert__regX1__Reg1_0__imm_95_0, AMFBS_None, { MCK_GPR }, },
  { 3050 /* jalr */, RISCV::JALR, Convert__Reg1_0__Reg1_1__imm_95_0, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 3050 /* jalr */, RISCV::JALR, Convert__regX1__Reg1_0__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12 }, },
  { 3050 /* jalr */, RISCV::JALR, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 3050 /* jalr */, RISCV::JALR, Convert__regX1__Reg1_2__SImm121_0, AMFBS_None, { MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3050 /* jalr */, RISCV::JALR, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3055 /* jr */, RISCV::JALR, Convert__regX0__Reg1_0__imm_95_0, AMFBS_None, { MCK_GPR }, },
  { 3055 /* jr */, RISCV::JALR, Convert__regX0__Reg1_0__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12 }, },
  { 3055 /* jr */, RISCV::JALR, Convert__regX0__Reg1_2__SImm121_0, AMFBS_None, { MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3058 /* jump */, RISCV::PseudoJump, Convert__Reg1_1__PseudoJumpSymbol1_0, AMFBS_None, { MCK_PseudoJumpSymbol, MCK_GPR }, },
  { 3063 /* la */, RISCV::PseudoLA, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 3066 /* la.tls.gd */, RISCV::PseudoLA_TLS_GD, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 3076 /* la.tls.ie */, RISCV::PseudoLA_TLS_IE, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 3086 /* lb */, RISCV::PseudoLB, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 3086 /* lb */, RISCV::LB, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3086 /* lb */, RISCV::LB, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3089 /* lbu */, RISCV::PseudoLBU, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 3089 /* lbu */, RISCV::LBU, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3089 /* lbu */, RISCV::LBU, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3093 /* ld */, RISCV::PseudoLD, Convert__Reg1_0__BareSymbol1_1, AMFBS_IsRV64, { MCK_GPR, MCK_BareSymbol }, },
  { 3093 /* ld */, RISCV::LD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_IsRV64, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3093 /* ld */, RISCV::LD, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_IsRV64, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3096 /* lh */, RISCV::PseudoLH, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 3096 /* lh */, RISCV::LH, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3096 /* lh */, RISCV::LH, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3099 /* lhu */, RISCV::PseudoLHU, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 3099 /* lhu */, RISCV::LHU, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3099 /* lhu */, RISCV::LHU, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3103 /* li */, RISCV::ADDI, Convert__Reg1_0__regX0__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12 }, },
  { 3103 /* li */, RISCV::PseudoLI, Convert__Reg1_0__ImmXLenLI1_1, AMFBS_None, { MCK_GPR, MCK_ImmXLenLI }, },
  { 3106 /* lla */, RISCV::PseudoLLA, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 3110 /* lr.d */, RISCV::LR_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 3115 /* lr.d.aq */, RISCV::LR_D_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 3123 /* lr.d.aqrl */, RISCV::LR_D_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 3133 /* lr.d.rl */, RISCV::LR_D_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 3141 /* lr.w */, RISCV::LR_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 3146 /* lr.w.aq */, RISCV::LR_W_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 3154 /* lr.w.aqrl */, RISCV::LR_W_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 3164 /* lr.w.rl */, RISCV::LR_W_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 3172 /* lui */, RISCV::LUI, Convert__Reg1_0__UImm20LUI1_1, AMFBS_None, { MCK_GPR, MCK_UImm20LUI }, },
  { 3176 /* lw */, RISCV::PseudoLW, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 3176 /* lw */, RISCV::LW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3176 /* lw */, RISCV::LW, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3179 /* lwu */, RISCV::PseudoLWU, Convert__Reg1_0__BareSymbol1_1, AMFBS_IsRV64, { MCK_GPR, MCK_BareSymbol }, },
  { 3179 /* lwu */, RISCV::LWU, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_IsRV64, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3179 /* lwu */, RISCV::LWU, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_IsRV64, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3183 /* max */, RISCV::MAX, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3187 /* maxu */, RISCV::MAXU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3192 /* min */, RISCV::MIN, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3196 /* minu */, RISCV::MINU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3201 /* mret */, RISCV::MRET, Convert__imm_95_0__imm_95_0, AMFBS_None, {  }, },
  { 3206 /* mul */, RISCV::MUL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtMOrZmmul, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3210 /* mulh */, RISCV::MULH, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtMOrZmmul, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3215 /* mulhsu */, RISCV::MULHSU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtMOrZmmul, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3222 /* mulhu */, RISCV::MULHU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtMOrZmmul, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3228 /* mulw */, RISCV::MULW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtMOrZmmul_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3233 /* mv */, RISCV::ADDI, Convert__Reg1_0__Reg1_1__imm_95_0, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 3236 /* neg */, RISCV::SUB, Convert__Reg1_0__regX0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 3240 /* negw */, RISCV::SUBW, Convert__Reg1_0__regX0__Reg1_1, AMFBS_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3245 /* nop */, RISCV::ADDI, Convert__regX0__regX0__imm_95_0, AMFBS_None, {  }, },
  { 3249 /* not */, RISCV::XORI, Convert__Reg1_0__Reg1_1__imm_95__MINUS_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 3253 /* or */, RISCV::OR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3253 /* or */, RISCV::ORI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 3256 /* orc */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_31, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3256 /* orc */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_63, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3260 /* orc.b */, RISCV::ORC_B, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 3266 /* orc.h */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_15, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3272 /* orc.n */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_3, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3278 /* orc.p */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_1, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3284 /* orc.w */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_31, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3290 /* orc16 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_16, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3290 /* orc16 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_48, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3296 /* orc16.w */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_16, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3304 /* orc2 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_30, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3304 /* orc2 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_62, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3309 /* orc2.b */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_6, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3316 /* orc2.h */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_14, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3323 /* orc2.n */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3330 /* orc2.w */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_30, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3337 /* orc32 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_32, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3343 /* orc4 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_28, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3343 /* orc4 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_60, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3348 /* orc4.b */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_4, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3355 /* orc4.h */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_12, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3362 /* orc4.w */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_28, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3369 /* orc8 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_24, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3369 /* orc8 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_56, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3374 /* orc8.h */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_8, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3381 /* orc8.w */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_24, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3388 /* ori */, RISCV::ORI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 3392 /* orn */, RISCV::ORN, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbpOrZbkb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3396 /* pack */, RISCV::PACK, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbpOrZbkb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3401 /* packh */, RISCV::PACKH, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbpOrZbkb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3407 /* packu */, RISCV::PACKU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3413 /* packuw */, RISCV::PACKUW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3420 /* packw */, RISCV::PACKW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbpOrZbkb_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3426 /* pause */, RISCV::FENCE, Convert__imm_95_1__imm_95_0, AMFBS_HasStdExtZihintpause, {  }, },
  { 3432 /* prefetch.i */, RISCV::PREFETCH_I, Convert__Reg1_2__SImm12Lsb000001_0, AMFBS_HasStdExtZicbop, { MCK_SImm12Lsb00000, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3443 /* prefetch.r */, RISCV::PREFETCH_R, Convert__Reg1_2__SImm12Lsb000001_0, AMFBS_HasStdExtZicbop, { MCK_SImm12Lsb00000, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3454 /* prefetch.w */, RISCV::PREFETCH_W, Convert__Reg1_2__SImm12Lsb000001_0, AMFBS_HasStdExtZicbop, { MCK_SImm12Lsb00000, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3465 /* rdcycle */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3072__regX0, AMFBS_None, { MCK_GPR }, },
  { 3473 /* rdcycleh */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3200__regX0, AMFBS_IsRV32, { MCK_GPR }, },
  { 3482 /* rdinstret */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3074__regX0, AMFBS_None, { MCK_GPR }, },
  { 3492 /* rdinstreth */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3202__regX0, AMFBS_IsRV32, { MCK_GPR }, },
  { 3503 /* rdtime */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3073__regX0, AMFBS_None, { MCK_GPR }, },
  { 3510 /* rdtimeh */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3201__regX0, AMFBS_IsRV32, { MCK_GPR }, },
  { 3518 /* rem */, RISCV::REM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3522 /* remu */, RISCV::REMU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3527 /* remuw */, RISCV::REMUW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3533 /* remw */, RISCV::REMW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3538 /* ret */, RISCV::JALR, Convert__regX0__regX1__imm_95_0, AMFBS_None, {  }, },
  { 3542 /* rev */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_31, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3542 /* rev */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_63, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3546 /* rev.b */, RISCV::BREV8, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3552 /* rev.h */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_15, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3558 /* rev.n */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_3, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3564 /* rev.p */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_1, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3570 /* rev.w */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_31, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3576 /* rev16 */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_16, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3576 /* rev16 */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_48, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3582 /* rev16.w */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_16, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3590 /* rev2 */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_30, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3590 /* rev2 */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_62, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3595 /* rev2.b */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_6, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3602 /* rev2.h */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_14, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3609 /* rev2.n */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3616 /* rev2.w */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_30, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3623 /* rev32 */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_32, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3629 /* rev4 */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_28, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3629 /* rev4 */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_60, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3634 /* rev4.b */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_4, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3641 /* rev4.h */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_12, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3648 /* rev4.w */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_28, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3655 /* rev8 */, RISCV::REV8_RV32, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbbOrZbpOrZbkb_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3655 /* rev8 */, RISCV::REV8_RV64, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbbOrZbpOrZbkb_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3660 /* rev8.h */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_8, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3667 /* rev8.w */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_24, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3674 /* rol */, RISCV::ROL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbpOrZbkb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3678 /* rolw */, RISCV::ROLW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbpOrZbkb_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3683 /* ror */, RISCV::ROR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbpOrZbkb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3683 /* ror */, RISCV::RORI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3687 /* rori */, RISCV::RORI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbbOrZbpOrZbkb, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3692 /* roriw */, RISCV::RORIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZbbOrZbpOrZbkb_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3698 /* rorw */, RISCV::RORW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbpOrZbkb_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3698 /* rorw */, RISCV::RORIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3703 /* sb */, RISCV::PseudoSB, Convert__Reg1_2__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol, MCK_GPR }, },
  { 3703 /* sb */, RISCV::SB, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3703 /* sb */, RISCV::SB, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3706 /* sc.d */, RISCV::SC_D, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 3711 /* sc.d.aq */, RISCV::SC_D_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 3719 /* sc.d.aqrl */, RISCV::SC_D_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 3729 /* sc.d.rl */, RISCV::SC_D_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 3737 /* sc.w */, RISCV::SC_W, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 3742 /* sc.w.aq */, RISCV::SC_W_AQ, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 3750 /* sc.w.aqrl */, RISCV::SC_W_AQ_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 3760 /* sc.w.rl */, RISCV::SC_W_RL, Convert__Reg1_0__ZeroOffsetMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_ZeroOffsetMemOpOperand }, },
  { 3768 /* sd */, RISCV::PseudoSD, Convert__Reg1_2__Reg1_0__BareSymbol1_1, AMFBS_IsRV64, { MCK_GPR, MCK_BareSymbol, MCK_GPR }, },
  { 3768 /* sd */, RISCV::SD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_IsRV64, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3768 /* sd */, RISCV::SD, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_IsRV64, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3771 /* seqz */, RISCV::SLTIU, Convert__Reg1_0__Reg1_1__imm_95_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 3776 /* sext.b */, RISCV::SEXT_B, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR }, },
  { 3776 /* sext.b */, RISCV::PseudoSEXT_B, Convert__Reg1_0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 3783 /* sext.h */, RISCV::SEXT_H, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR }, },
  { 3783 /* sext.h */, RISCV::PseudoSEXT_H, Convert__Reg1_0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 3790 /* sext.w */, RISCV::ADDIW, Convert__Reg1_0__Reg1_1__imm_95_0, AMFBS_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3797 /* sfence.inval.ir */, RISCV::SFENCE_INVAL_IR, Convert__imm_95_0__imm_95_0, AMFBS_None, {  }, },
  { 3813 /* sfence.vma */, RISCV::SFENCE_VMA, Convert__regX0__regX0, AMFBS_None, {  }, },
  { 3813 /* sfence.vma */, RISCV::SFENCE_VMA, Convert__Reg1_0__regX0, AMFBS_None, { MCK_GPR }, },
  { 3813 /* sfence.vma */, RISCV::SFENCE_VMA, Convert__Reg1_0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 3824 /* sfence.w.inval */, RISCV::SFENCE_W_INVAL, Convert__imm_95_0__imm_95_0, AMFBS_None, {  }, },
  { 3839 /* sgt */, RISCV::SLT, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3843 /* sgtu */, RISCV::SLTU, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3848 /* sgtz */, RISCV::SLT, Convert__Reg1_0__regX0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 3853 /* sh */, RISCV::PseudoSH, Convert__Reg1_2__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol, MCK_GPR }, },
  { 3853 /* sh */, RISCV::SH, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3853 /* sh */, RISCV::SH, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3856 /* sh1add */, RISCV::SH1ADD, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZba, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3863 /* sh1add.uw */, RISCV::SH1ADD_UW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZba_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3873 /* sh2add */, RISCV::SH2ADD, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZba, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3880 /* sh2add.uw */, RISCV::SH2ADD_UW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZba_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3890 /* sh3add */, RISCV::SH3ADD, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZba, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3897 /* sh3add.uw */, RISCV::SH3ADD_UW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZba_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3907 /* sha256sig0 */, RISCV::SHA256SIG0, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZknh, { MCK_GPR, MCK_GPR }, },
  { 3918 /* sha256sig1 */, RISCV::SHA256SIG1, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZknh, { MCK_GPR, MCK_GPR }, },
  { 3929 /* sha256sum0 */, RISCV::SHA256SUM0, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZknh, { MCK_GPR, MCK_GPR }, },
  { 3940 /* sha256sum1 */, RISCV::SHA256SUM1, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZknh, { MCK_GPR, MCK_GPR }, },
  { 3951 /* sha512sig0 */, RISCV::SHA512SIG0, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZknh_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3962 /* sha512sig0h */, RISCV::SHA512SIG0H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZknh_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3974 /* sha512sig0l */, RISCV::SHA512SIG0L, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZknh_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3986 /* sha512sig1 */, RISCV::SHA512SIG1, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZknh_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3997 /* sha512sig1h */, RISCV::SHA512SIG1H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZknh_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4009 /* sha512sig1l */, RISCV::SHA512SIG1L, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZknh_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4021 /* sha512sum0 */, RISCV::SHA512SUM0, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZknh_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 4032 /* sha512sum0r */, RISCV::SHA512SUM0R, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZknh_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4044 /* sha512sum1 */, RISCV::SHA512SUM1, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZknh_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 4055 /* sha512sum1r */, RISCV::SHA512SUM1R, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZknh_IsRV32, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4067 /* shfl */, RISCV::SHFL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4067 /* shfl */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__UImmLog2XLenHalf1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLenHalf }, },
  { 4072 /* shfli */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__UImmLog2XLenHalf1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLenHalf }, },
  { 4078 /* shflw */, RISCV::SHFLW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4084 /* sinval.vma */, RISCV::SINVAL_VMA, Convert__Reg1_0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 4095 /* sll */, RISCV::SLL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4095 /* sll */, RISCV::SLLI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 4099 /* slli */, RISCV::SLLI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 4104 /* slli.uw */, RISCV::SLLI_UW, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZba_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 4112 /* slliw */, RISCV::SLLIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 4118 /* sllw */, RISCV::SLLW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4118 /* sllw */, RISCV::SLLIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 4123 /* slt */, RISCV::SLT, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4123 /* slt */, RISCV::SLTI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 4127 /* slti */, RISCV::SLTI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 4132 /* sltiu */, RISCV::SLTIU, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 4138 /* sltu */, RISCV::SLTU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4138 /* sltu */, RISCV::SLTIU, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 4143 /* sltz */, RISCV::SLT, Convert__Reg1_0__Reg1_1__regX0, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 4148 /* sm3p0 */, RISCV::SM3P0, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZksh, { MCK_GPR, MCK_GPR }, },
  { 4154 /* sm3p1 */, RISCV::SM3P1, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZksh, { MCK_GPR, MCK_GPR }, },
  { 4160 /* sm4ed */, RISCV::SM4ED, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasStdExtZksed, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 4166 /* sm4ks */, RISCV::SM4KS, Convert__Reg1_0__Reg1_1__Reg1_2__UImm21_3, AMFBS_HasStdExtZksed, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm2 }, },
  { 4172 /* snez */, RISCV::SLTU, Convert__Reg1_0__regX0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 4177 /* sra */, RISCV::SRA, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4177 /* sra */, RISCV::SRAI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 4181 /* srai */, RISCV::SRAI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 4186 /* sraiw */, RISCV::SRAIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 4192 /* sraw */, RISCV::SRAW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4192 /* sraw */, RISCV::SRAIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 4197 /* sret */, RISCV::SRET, Convert__imm_95_0__imm_95_0, AMFBS_None, {  }, },
  { 4202 /* srl */, RISCV::SRL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4202 /* srl */, RISCV::SRLI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 4206 /* srli */, RISCV::SRLI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 4211 /* srliw */, RISCV::SRLIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 4217 /* srlw */, RISCV::SRLW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4217 /* srlw */, RISCV::SRLIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 4222 /* sub */, RISCV::SUB, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4226 /* subw */, RISCV::SUBW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4231 /* sw */, RISCV::PseudoSW, Convert__Reg1_2__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol, MCK_GPR }, },
  { 4231 /* sw */, RISCV::SW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 4231 /* sw */, RISCV::SW, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 4234 /* tail */, RISCV::PseudoTAIL, Convert__CallSymbol1_0, AMFBS_None, { MCK_CallSymbol }, },
  { 4239 /* unimp */, RISCV::UNIMP, Convert_NoOperands, AMFBS_None, {  }, },
  { 4245 /* unshfl */, RISCV::UNSHFL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4245 /* unshfl */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__UImmLog2XLenHalf1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLenHalf }, },
  { 4252 /* unshfli */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__UImmLog2XLenHalf1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLenHalf }, },
  { 4260 /* unshflw */, RISCV::UNSHFLW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 4268 /* unzip */, RISCV::UNZIP_RV32, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbpOrZbkb_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 4268 /* unzip */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_31, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 4274 /* unzip.b */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_3, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 4282 /* unzip.h */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 4290 /* unzip.n */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_1, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 4298 /* unzip.w */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_15, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 4306 /* unzip16 */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_16, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 4314 /* unzip2 */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_14, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 4314 /* unzip2 */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_30, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 4321 /* unzip2.b */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 4330 /* unzip2.h */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_6, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 4339 /* unzip2.w */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_14, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 4348 /* unzip4 */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_12, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 4348 /* unzip4 */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_28, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 4355 /* unzip4.h */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_4, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 4364 /* unzip4.w */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_12, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 4373 /* unzip8 */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_8, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 4373 /* unzip8 */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_24, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 4380 /* unzip8.w */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_8, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 4389 /* uret */, RISCV::URET, Convert__imm_95_0__imm_95_0, AMFBS_None, {  }, },
  { 4394 /* vaadd.vv */, RISCV::VAADD_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4403 /* vaadd.vx */, RISCV::VAADD_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 4412 /* vaaddu.vv */, RISCV::VAADDU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4422 /* vaaddu.vx */, RISCV::VAADDU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 4432 /* vadc.vim */, RISCV::VADC_VIM, Convert__Reg1_0__Reg1_1__SImm51_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_VMV0 }, },
  { 4441 /* vadc.vvm */, RISCV::VADC_VVM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_VMV0 }, },
  { 4450 /* vadc.vxm */, RISCV::VADC_VXM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_VMV0 }, },
  { 4459 /* vadd.vi */, RISCV::VADD_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 4467 /* vadd.vv */, RISCV::VADD_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4475 /* vadd.vx */, RISCV::VADD_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 4483 /* vand.vi */, RISCV::VAND_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 4491 /* vand.vv */, RISCV::VAND_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4499 /* vand.vx */, RISCV::VAND_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 4507 /* vasub.vv */, RISCV::VASUB_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4516 /* vasub.vx */, RISCV::VASUB_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 4525 /* vasubu.vv */, RISCV::VASUBU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4535 /* vasubu.vx */, RISCV::VASUBU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 4545 /* vcompress.vm */, RISCV::VCOMPRESS_VM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 4558 /* vcpop.m */, RISCV::VCPOP_M, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4566 /* vdiv.vv */, RISCV::VDIV_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4574 /* vdiv.vx */, RISCV::VDIV_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 4582 /* vdivu.vv */, RISCV::VDIVU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4591 /* vdivu.vx */, RISCV::VDIVU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 4600 /* vfabs.v */, RISCV::VFSGNJX_VV, Convert__Reg1_0__Reg1_1__Reg1_1__reg0, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM }, },
  { 4600 /* vfabs.v */, RISCV::VFSGNJX_VV, Convert__Reg1_0__Reg1_1__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4608 /* vfadd.vf */, RISCV::VFADD_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 4617 /* vfadd.vv */, RISCV::VFADD_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4626 /* vfclass.v */, RISCV::VFCLASS_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4636 /* vfcvt.f.x.v */, RISCV::VFCVT_F_X_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4648 /* vfcvt.f.xu.v */, RISCV::VFCVT_F_XU_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4661 /* vfcvt.rtz.x.f.v */, RISCV::VFCVT_RTZ_X_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4677 /* vfcvt.rtz.xu.f.v */, RISCV::VFCVT_RTZ_XU_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4694 /* vfcvt.x.f.v */, RISCV::VFCVT_X_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4706 /* vfcvt.xu.f.v */, RISCV::VFCVT_XU_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4719 /* vfdiv.vf */, RISCV::VFDIV_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 4728 /* vfdiv.vv */, RISCV::VFDIV_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4737 /* vfirst.m */, RISCV::VFIRST_M, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4746 /* vfmacc.vf */, RISCV::VFMACC_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4756 /* vfmacc.vv */, RISCV::VFMACC_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4766 /* vfmadd.vf */, RISCV::VFMADD_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4776 /* vfmadd.vv */, RISCV::VFMADD_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4786 /* vfmax.vf */, RISCV::VFMAX_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 4795 /* vfmax.vv */, RISCV::VFMAX_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4804 /* vfmerge.vfm */, RISCV::VFMERGE_VFM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_VMV0 }, },
  { 4816 /* vfmin.vf */, RISCV::VFMIN_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 4825 /* vfmin.vv */, RISCV::VFMIN_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4834 /* vfmsac.vf */, RISCV::VFMSAC_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4844 /* vfmsac.vv */, RISCV::VFMSAC_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4854 /* vfmsub.vf */, RISCV::VFMSUB_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4864 /* vfmsub.vv */, RISCV::VFMSUB_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4874 /* vfmul.vf */, RISCV::VFMUL_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 4883 /* vfmul.vv */, RISCV::VFMUL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4892 /* vfmv.f.s */, RISCV::VFMV_F_S, Convert__Reg1_0__Reg1_1, AMFBS_HasVInstructionsAnyF, { MCK_FPR32, MCK_VM }, },
  { 4901 /* vfmv.s.f */, RISCV::VFMV_S_F, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32 }, },
  { 4910 /* vfmv.v.f */, RISCV::VFMV_V_F, Convert__Reg1_0__Reg1_1, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32 }, },
  { 4919 /* vfncvt.f.f.w */, RISCV::VFNCVT_F_F_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4932 /* vfncvt.f.x.w */, RISCV::VFNCVT_F_X_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4945 /* vfncvt.f.xu.w */, RISCV::VFNCVT_F_XU_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4959 /* vfncvt.rod.f.f.w */, RISCV::VFNCVT_ROD_F_F_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4976 /* vfncvt.rtz.x.f.w */, RISCV::VFNCVT_RTZ_X_F_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 4993 /* vfncvt.rtz.xu.f.w */, RISCV::VFNCVT_RTZ_XU_F_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5011 /* vfncvt.x.f.w */, RISCV::VFNCVT_X_F_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5024 /* vfncvt.xu.f.w */, RISCV::VFNCVT_XU_F_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5038 /* vfneg.v */, RISCV::VFSGNJN_VV, Convert__Reg1_0__Reg1_1__Reg1_1__reg0, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM }, },
  { 5038 /* vfneg.v */, RISCV::VFSGNJN_VV, Convert__Reg1_0__Reg1_1__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5046 /* vfnmacc.vf */, RISCV::VFNMACC_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5057 /* vfnmacc.vv */, RISCV::VFNMACC_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5068 /* vfnmadd.vf */, RISCV::VFNMADD_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5079 /* vfnmadd.vv */, RISCV::VFNMADD_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5090 /* vfnmsac.vf */, RISCV::VFNMSAC_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5101 /* vfnmsac.vv */, RISCV::VFNMSAC_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5112 /* vfnmsub.vf */, RISCV::VFNMSUB_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5123 /* vfnmsub.vv */, RISCV::VFNMSUB_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5134 /* vfrdiv.vf */, RISCV::VFRDIV_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5144 /* vfrec7.v */, RISCV::VFREC7_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5153 /* vfredmax.vs */, RISCV::VFREDMAX_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5165 /* vfredmin.vs */, RISCV::VFREDMIN_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5177 /* vfredosum.vs */, RISCV::VFREDOSUM_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5190 /* vfredsum.vs */, RISCV::VFREDUSUM_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5202 /* vfredusum.vs */, RISCV::VFREDUSUM_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5215 /* vfrsqrt7.v */, RISCV::VFRSQRT7_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5226 /* vfrsub.vf */, RISCV::VFRSUB_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5236 /* vfsgnj.vf */, RISCV::VFSGNJ_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5246 /* vfsgnj.vv */, RISCV::VFSGNJ_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5256 /* vfsgnjn.vf */, RISCV::VFSGNJN_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5267 /* vfsgnjn.vv */, RISCV::VFSGNJN_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5278 /* vfsgnjx.vf */, RISCV::VFSGNJX_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5289 /* vfsgnjx.vv */, RISCV::VFSGNJX_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5300 /* vfslide1down.vf */, RISCV::VFSLIDE1DOWN_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5316 /* vfslide1up.vf */, RISCV::VFSLIDE1UP_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5330 /* vfsqrt.v */, RISCV::VFSQRT_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5339 /* vfsub.vf */, RISCV::VFSUB_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5348 /* vfsub.vv */, RISCV::VFSUB_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5357 /* vfwadd.vf */, RISCV::VFWADD_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5367 /* vfwadd.vv */, RISCV::VFWADD_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5377 /* vfwadd.wf */, RISCV::VFWADD_WF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5387 /* vfwadd.wv */, RISCV::VFWADD_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5397 /* vfwcvt.f.f.v */, RISCV::VFWCVT_F_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5410 /* vfwcvt.f.x.v */, RISCV::VFWCVT_F_X_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5423 /* vfwcvt.f.xu.v */, RISCV::VFWCVT_F_XU_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5437 /* vfwcvt.rtz.x.f.v */, RISCV::VFWCVT_RTZ_X_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5454 /* vfwcvt.rtz.xu.f.v */, RISCV::VFWCVT_RTZ_XU_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5472 /* vfwcvt.x.f.v */, RISCV::VFWCVT_X_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5485 /* vfwcvt.xu.f.v */, RISCV::VFWCVT_XU_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5499 /* vfwmacc.vf */, RISCV::VFWMACC_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5510 /* vfwmacc.vv */, RISCV::VFWMACC_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5521 /* vfwmsac.vf */, RISCV::VFWMSAC_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5532 /* vfwmsac.vv */, RISCV::VFWMSAC_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5543 /* vfwmul.vf */, RISCV::VFWMUL_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5553 /* vfwmul.vv */, RISCV::VFWMUL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5563 /* vfwnmacc.vf */, RISCV::VFWNMACC_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5575 /* vfwnmacc.vv */, RISCV::VFWNMACC_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5587 /* vfwnmsac.vf */, RISCV::VFWNMSAC_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_FPR32, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5599 /* vfwnmsac.vv */, RISCV::VFWNMSAC_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5611 /* vfwredosum.vs */, RISCV::VFWREDOSUM_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5625 /* vfwredsum.vs */, RISCV::VFWREDUSUM_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5638 /* vfwredusum.vs */, RISCV::VFWREDUSUM_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5652 /* vfwsub.vf */, RISCV::VFWSUB_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5662 /* vfwsub.vv */, RISCV::VFWSUB_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5672 /* vfwsub.wf */, RISCV::VFWSUB_WF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5682 /* vfwsub.wv */, RISCV::VFWSUB_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5692 /* vid.v */, RISCV::VID_V, Convert__Reg1_0__RVVMaskRegOpOperand1_1, AMFBS_HasVInstructions, { MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5698 /* viota.m */, RISCV::VIOTA_M, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5706 /* vl1r.v */, RISCV::VL1RE8_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5713 /* vl1re16.v */, RISCV::VL1RE16_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5723 /* vl1re32.v */, RISCV::VL1RE32_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5733 /* vl1re64.v */, RISCV::VL1RE64_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5743 /* vl1re8.v */, RISCV::VL1RE8_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5752 /* vl2r.v */, RISCV::VL2RE8_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VRM2, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5759 /* vl2re16.v */, RISCV::VL2RE16_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VRM2, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5769 /* vl2re32.v */, RISCV::VL2RE32_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VRM2, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5779 /* vl2re64.v */, RISCV::VL2RE64_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructionsI64, { MCK_VRM2, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5789 /* vl2re8.v */, RISCV::VL2RE8_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VRM2, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5798 /* vl4r.v */, RISCV::VL4RE8_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VRM4, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5805 /* vl4re16.v */, RISCV::VL4RE16_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VRM4, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5815 /* vl4re32.v */, RISCV::VL4RE32_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VRM4, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5825 /* vl4re64.v */, RISCV::VL4RE64_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructionsI64, { MCK_VRM4, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5835 /* vl4re8.v */, RISCV::VL4RE8_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VRM4, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5844 /* vl8r.v */, RISCV::VL8RE8_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VRM8, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5851 /* vl8re16.v */, RISCV::VL8RE16_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VRM8, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5861 /* vl8re32.v */, RISCV::VL8RE32_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VRM8, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5871 /* vl8re64.v */, RISCV::VL8RE64_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructionsI64, { MCK_VRM8, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5881 /* vl8re8.v */, RISCV::VL8RE8_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VRM8, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5890 /* vle1.v */, RISCV::VLM_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5897 /* vle16.v */, RISCV::VLE16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 5905 /* vle16ff.v */, RISCV::VLE16FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 5915 /* vle32.v */, RISCV::VLE32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 5923 /* vle32ff.v */, RISCV::VLE32FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 5933 /* vle64.v */, RISCV::VLE64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 5941 /* vle64ff.v */, RISCV::VLE64FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 5951 /* vle8.v */, RISCV::VLE8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 5958 /* vle8ff.v */, RISCV::VLE8FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 5967 /* vlm.v */, RISCV::VLM_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5973 /* vloxei16.v */, RISCV::VLOXEI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5984 /* vloxei32.v */, RISCV::VLOXEI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 5995 /* vloxei64.v */, RISCV::VLOXEI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_IsRV64_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6006 /* vloxei8.v */, RISCV::VLOXEI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6016 /* vloxseg2ei16.v */, RISCV::VLOXSEG2EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6031 /* vloxseg2ei32.v */, RISCV::VLOXSEG2EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6046 /* vloxseg2ei64.v */, RISCV::VLOXSEG2EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6061 /* vloxseg2ei8.v */, RISCV::VLOXSEG2EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6075 /* vloxseg3ei16.v */, RISCV::VLOXSEG3EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6090 /* vloxseg3ei32.v */, RISCV::VLOXSEG3EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6105 /* vloxseg3ei64.v */, RISCV::VLOXSEG3EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6120 /* vloxseg3ei8.v */, RISCV::VLOXSEG3EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6134 /* vloxseg4ei16.v */, RISCV::VLOXSEG4EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6149 /* vloxseg4ei32.v */, RISCV::VLOXSEG4EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6164 /* vloxseg4ei64.v */, RISCV::VLOXSEG4EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6179 /* vloxseg4ei8.v */, RISCV::VLOXSEG4EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6193 /* vloxseg5ei16.v */, RISCV::VLOXSEG5EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6208 /* vloxseg5ei32.v */, RISCV::VLOXSEG5EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6223 /* vloxseg5ei64.v */, RISCV::VLOXSEG5EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6238 /* vloxseg5ei8.v */, RISCV::VLOXSEG5EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6252 /* vloxseg6ei16.v */, RISCV::VLOXSEG6EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6267 /* vloxseg6ei32.v */, RISCV::VLOXSEG6EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6282 /* vloxseg6ei64.v */, RISCV::VLOXSEG6EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6297 /* vloxseg6ei8.v */, RISCV::VLOXSEG6EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6311 /* vloxseg7ei16.v */, RISCV::VLOXSEG7EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6326 /* vloxseg7ei32.v */, RISCV::VLOXSEG7EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6341 /* vloxseg7ei64.v */, RISCV::VLOXSEG7EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6356 /* vloxseg7ei8.v */, RISCV::VLOXSEG7EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6370 /* vloxseg8ei16.v */, RISCV::VLOXSEG8EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6385 /* vloxseg8ei32.v */, RISCV::VLOXSEG8EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6400 /* vloxseg8ei64.v */, RISCV::VLOXSEG8EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6415 /* vloxseg8ei8.v */, RISCV::VLOXSEG8EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 6429 /* vlse16.v */, RISCV::VLSE16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6438 /* vlse32.v */, RISCV::VLSE32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6447 /* vlse64.v */, RISCV::VLSE64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6456 /* vlse8.v */, RISCV::VLSE8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6464 /* vlseg2e16.v */, RISCV::VLSEG2E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6476 /* vlseg2e16ff.v */, RISCV::VLSEG2E16FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6490 /* vlseg2e32.v */, RISCV::VLSEG2E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6502 /* vlseg2e32ff.v */, RISCV::VLSEG2E32FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6516 /* vlseg2e64.v */, RISCV::VLSEG2E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6528 /* vlseg2e64ff.v */, RISCV::VLSEG2E64FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6542 /* vlseg2e8.v */, RISCV::VLSEG2E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6553 /* vlseg2e8ff.v */, RISCV::VLSEG2E8FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6566 /* vlseg3e16.v */, RISCV::VLSEG3E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6578 /* vlseg3e16ff.v */, RISCV::VLSEG3E16FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6592 /* vlseg3e32.v */, RISCV::VLSEG3E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6604 /* vlseg3e32ff.v */, RISCV::VLSEG3E32FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6618 /* vlseg3e64.v */, RISCV::VLSEG3E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6630 /* vlseg3e64ff.v */, RISCV::VLSEG3E64FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6644 /* vlseg3e8.v */, RISCV::VLSEG3E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6655 /* vlseg3e8ff.v */, RISCV::VLSEG3E8FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6668 /* vlseg4e16.v */, RISCV::VLSEG4E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6680 /* vlseg4e16ff.v */, RISCV::VLSEG4E16FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6694 /* vlseg4e32.v */, RISCV::VLSEG4E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6706 /* vlseg4e32ff.v */, RISCV::VLSEG4E32FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6720 /* vlseg4e64.v */, RISCV::VLSEG4E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6732 /* vlseg4e64ff.v */, RISCV::VLSEG4E64FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6746 /* vlseg4e8.v */, RISCV::VLSEG4E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6757 /* vlseg4e8ff.v */, RISCV::VLSEG4E8FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6770 /* vlseg5e16.v */, RISCV::VLSEG5E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6782 /* vlseg5e16ff.v */, RISCV::VLSEG5E16FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6796 /* vlseg5e32.v */, RISCV::VLSEG5E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6808 /* vlseg5e32ff.v */, RISCV::VLSEG5E32FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6822 /* vlseg5e64.v */, RISCV::VLSEG5E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6834 /* vlseg5e64ff.v */, RISCV::VLSEG5E64FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6848 /* vlseg5e8.v */, RISCV::VLSEG5E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6859 /* vlseg5e8ff.v */, RISCV::VLSEG5E8FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6872 /* vlseg6e16.v */, RISCV::VLSEG6E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6884 /* vlseg6e16ff.v */, RISCV::VLSEG6E16FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6898 /* vlseg6e32.v */, RISCV::VLSEG6E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6910 /* vlseg6e32ff.v */, RISCV::VLSEG6E32FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6924 /* vlseg6e64.v */, RISCV::VLSEG6E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6936 /* vlseg6e64ff.v */, RISCV::VLSEG6E64FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6950 /* vlseg6e8.v */, RISCV::VLSEG6E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6961 /* vlseg6e8ff.v */, RISCV::VLSEG6E8FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6974 /* vlseg7e16.v */, RISCV::VLSEG7E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6986 /* vlseg7e16ff.v */, RISCV::VLSEG7E16FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7000 /* vlseg7e32.v */, RISCV::VLSEG7E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7012 /* vlseg7e32ff.v */, RISCV::VLSEG7E32FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7026 /* vlseg7e64.v */, RISCV::VLSEG7E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7038 /* vlseg7e64ff.v */, RISCV::VLSEG7E64FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7052 /* vlseg7e8.v */, RISCV::VLSEG7E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7063 /* vlseg7e8ff.v */, RISCV::VLSEG7E8FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7076 /* vlseg8e16.v */, RISCV::VLSEG8E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7088 /* vlseg8e16ff.v */, RISCV::VLSEG8E16FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7102 /* vlseg8e32.v */, RISCV::VLSEG8E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7114 /* vlseg8e32ff.v */, RISCV::VLSEG8E32FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7128 /* vlseg8e64.v */, RISCV::VLSEG8E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7140 /* vlseg8e64ff.v */, RISCV::VLSEG8E64FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7154 /* vlseg8e8.v */, RISCV::VLSEG8E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7165 /* vlseg8e8ff.v */, RISCV::VLSEG8E8FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7178 /* vlsseg2e16.v */, RISCV::VLSSEG2E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7191 /* vlsseg2e32.v */, RISCV::VLSSEG2E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7204 /* vlsseg2e64.v */, RISCV::VLSSEG2E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7217 /* vlsseg2e8.v */, RISCV::VLSSEG2E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7229 /* vlsseg3e16.v */, RISCV::VLSSEG3E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7242 /* vlsseg3e32.v */, RISCV::VLSSEG3E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7255 /* vlsseg3e64.v */, RISCV::VLSSEG3E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7268 /* vlsseg3e8.v */, RISCV::VLSSEG3E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7280 /* vlsseg4e16.v */, RISCV::VLSSEG4E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7293 /* vlsseg4e32.v */, RISCV::VLSSEG4E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7306 /* vlsseg4e64.v */, RISCV::VLSSEG4E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7319 /* vlsseg4e8.v */, RISCV::VLSSEG4E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7331 /* vlsseg5e16.v */, RISCV::VLSSEG5E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7344 /* vlsseg5e32.v */, RISCV::VLSSEG5E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7357 /* vlsseg5e64.v */, RISCV::VLSSEG5E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7370 /* vlsseg5e8.v */, RISCV::VLSSEG5E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7382 /* vlsseg6e16.v */, RISCV::VLSSEG6E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7395 /* vlsseg6e32.v */, RISCV::VLSSEG6E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7408 /* vlsseg6e64.v */, RISCV::VLSSEG6E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7421 /* vlsseg6e8.v */, RISCV::VLSSEG6E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7433 /* vlsseg7e16.v */, RISCV::VLSSEG7E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7446 /* vlsseg7e32.v */, RISCV::VLSSEG7E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7459 /* vlsseg7e64.v */, RISCV::VLSSEG7E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7472 /* vlsseg7e8.v */, RISCV::VLSSEG7E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7484 /* vlsseg8e16.v */, RISCV::VLSSEG8E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7497 /* vlsseg8e32.v */, RISCV::VLSSEG8E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7510 /* vlsseg8e64.v */, RISCV::VLSSEG8E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7523 /* vlsseg8e8.v */, RISCV::VLSSEG8E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7535 /* vluxei16.v */, RISCV::VLUXEI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7546 /* vluxei32.v */, RISCV::VLUXEI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7557 /* vluxei64.v */, RISCV::VLUXEI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_IsRV64_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7568 /* vluxei8.v */, RISCV::VLUXEI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7578 /* vluxseg2ei16.v */, RISCV::VLUXSEG2EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7593 /* vluxseg2ei32.v */, RISCV::VLUXSEG2EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7608 /* vluxseg2ei64.v */, RISCV::VLUXSEG2EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7623 /* vluxseg2ei8.v */, RISCV::VLUXSEG2EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7637 /* vluxseg3ei16.v */, RISCV::VLUXSEG3EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7652 /* vluxseg3ei32.v */, RISCV::VLUXSEG3EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7667 /* vluxseg3ei64.v */, RISCV::VLUXSEG3EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7682 /* vluxseg3ei8.v */, RISCV::VLUXSEG3EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7696 /* vluxseg4ei16.v */, RISCV::VLUXSEG4EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7711 /* vluxseg4ei32.v */, RISCV::VLUXSEG4EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7726 /* vluxseg4ei64.v */, RISCV::VLUXSEG4EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7741 /* vluxseg4ei8.v */, RISCV::VLUXSEG4EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7755 /* vluxseg5ei16.v */, RISCV::VLUXSEG5EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7770 /* vluxseg5ei32.v */, RISCV::VLUXSEG5EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7785 /* vluxseg5ei64.v */, RISCV::VLUXSEG5EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7800 /* vluxseg5ei8.v */, RISCV::VLUXSEG5EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7814 /* vluxseg6ei16.v */, RISCV::VLUXSEG6EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7829 /* vluxseg6ei32.v */, RISCV::VLUXSEG6EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7844 /* vluxseg6ei64.v */, RISCV::VLUXSEG6EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7859 /* vluxseg6ei8.v */, RISCV::VLUXSEG6EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7873 /* vluxseg7ei16.v */, RISCV::VLUXSEG7EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7888 /* vluxseg7ei32.v */, RISCV::VLUXSEG7EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7903 /* vluxseg7ei64.v */, RISCV::VLUXSEG7EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7918 /* vluxseg7ei8.v */, RISCV::VLUXSEG7EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7932 /* vluxseg8ei16.v */, RISCV::VLUXSEG8EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7947 /* vluxseg8ei32.v */, RISCV::VLUXSEG8EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7962 /* vluxseg8ei64.v */, RISCV::VLUXSEG8EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7977 /* vluxseg8ei8.v */, RISCV::VLUXSEG8EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 7991 /* vmacc.vv */, RISCV::VMACC_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8000 /* vmacc.vx */, RISCV::VMACC_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8009 /* vmadc.vi */, RISCV::VMADC_VI, Convert__Reg1_0__Reg1_1__SImm51_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5 }, },
  { 8018 /* vmadc.vim */, RISCV::VMADC_VIM, Convert__Reg1_0__Reg1_1__SImm51_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_VMV0 }, },
  { 8028 /* vmadc.vv */, RISCV::VMADC_VV, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 8037 /* vmadc.vvm */, RISCV::VMADC_VVM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_VMV0 }, },
  { 8047 /* vmadc.vx */, RISCV::VMADC_VX, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR }, },
  { 8056 /* vmadc.vxm */, RISCV::VMADC_VXM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_VMV0 }, },
  { 8066 /* vmadd.vv */, RISCV::VMADD_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8075 /* vmadd.vx */, RISCV::VMADD_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8084 /* vmand.mm */, RISCV::VMAND_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 8093 /* vmandn.mm */, RISCV::VMANDN_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 8103 /* vmandnot.mm */, RISCV::VMANDN_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 8115 /* vmax.vv */, RISCV::VMAX_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8123 /* vmax.vx */, RISCV::VMAX_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8131 /* vmaxu.vv */, RISCV::VMAXU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8140 /* vmaxu.vx */, RISCV::VMAXU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8149 /* vmclr.m */, RISCV::VMXOR_MM, Convert__Reg1_0__Reg1_0__Reg1_0, AMFBS_HasVInstructions, { MCK_VM }, },
  { 8157 /* vmerge.vim */, RISCV::VMERGE_VIM, Convert__Reg1_0__Reg1_1__SImm51_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_VMV0 }, },
  { 8168 /* vmerge.vvm */, RISCV::VMERGE_VVM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_VMV0 }, },
  { 8179 /* vmerge.vxm */, RISCV::VMERGE_VXM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_VMV0 }, },
  { 8190 /* vmfeq.vf */, RISCV::VMFEQ_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 8199 /* vmfeq.vv */, RISCV::VMFEQ_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8208 /* vmfge.vf */, RISCV::VMFGE_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 8217 /* vmfge.vv */, RISCV::VMFLE_VV, Convert__Reg1_0__Reg1_2__Reg1_1__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8226 /* vmfgt.vf */, RISCV::VMFGT_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 8235 /* vmfgt.vv */, RISCV::VMFLT_VV, Convert__Reg1_0__Reg1_2__Reg1_1__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8244 /* vmfle.vf */, RISCV::VMFLE_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 8253 /* vmfle.vv */, RISCV::VMFLE_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8262 /* vmflt.vf */, RISCV::VMFLT_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 8271 /* vmflt.vv */, RISCV::VMFLT_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8280 /* vmfne.vf */, RISCV::VMFNE_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 8289 /* vmfne.vv */, RISCV::VMFNE_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructionsAnyF, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8298 /* vmin.vv */, RISCV::VMIN_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8306 /* vmin.vx */, RISCV::VMIN_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8314 /* vminu.vv */, RISCV::VMINU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8323 /* vminu.vx */, RISCV::VMINU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8332 /* vmmv.m */, RISCV::VMAND_MM, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasVInstructions, { MCK_VM, MCK_VM }, },
  { 8339 /* vmnand.mm */, RISCV::VMNAND_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 8349 /* vmnor.mm */, RISCV::VMNOR_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 8358 /* vmnot.m */, RISCV::VMNAND_MM, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasVInstructions, { MCK_VM, MCK_VM }, },
  { 8366 /* vmor.mm */, RISCV::VMOR_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 8374 /* vmorn.mm */, RISCV::VMORN_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 8383 /* vmornot.mm */, RISCV::VMORN_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 8394 /* vmsbc.vv */, RISCV::VMSBC_VV, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 8403 /* vmsbc.vvm */, RISCV::VMSBC_VVM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_VMV0 }, },
  { 8413 /* vmsbc.vx */, RISCV::VMSBC_VX, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR }, },
  { 8422 /* vmsbc.vxm */, RISCV::VMSBC_VXM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_VMV0 }, },
  { 8432 /* vmsbf.m */, RISCV::VMSBF_M, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8440 /* vmseq.vi */, RISCV::VMSEQ_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 8449 /* vmseq.vv */, RISCV::VMSEQ_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8458 /* vmseq.vx */, RISCV::VMSEQ_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8467 /* vmset.m */, RISCV::VMXNOR_MM, Convert__Reg1_0__Reg1_0__Reg1_0, AMFBS_HasVInstructions, { MCK_VM }, },
  { 8475 /* vmsge.vi */, RISCV::PseudoVMSGE_VI, Convert__Reg1_0__Reg1_1__SImm5Plus11_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5Plus1, MCK_RVVMaskRegOpOperand }, },
  { 8484 /* vmsge.vv */, RISCV::VMSLE_VV, Convert__Reg1_0__Reg1_2__Reg1_1__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8493 /* vmsge.vx */, RISCV::PseudoVMSGE_VX, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR }, },
  { 8493 /* vmsge.vx */, RISCV::PseudoVMSGE_VX_M, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VRNoV0, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8493 /* vmsge.vx */, RISCV::PseudoVMSGE_VX_M_T, Convert__Reg1_0__Reg1_4__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand, MCK_VRNoV0 }, },
  { 8502 /* vmsgeu.vi */, RISCV::PseudoVMSGEU_VI, Convert__Reg1_0__Reg1_1__SImm5Plus11_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5Plus1, MCK_RVVMaskRegOpOperand }, },
  { 8512 /* vmsgeu.vv */, RISCV::VMSLEU_VV, Convert__Reg1_0__Reg1_2__Reg1_1__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8522 /* vmsgeu.vx */, RISCV::PseudoVMSGEU_VX, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR }, },
  { 8522 /* vmsgeu.vx */, RISCV::PseudoVMSGEU_VX_M, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VRNoV0, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8522 /* vmsgeu.vx */, RISCV::PseudoVMSGEU_VX_M_T, Convert__Reg1_0__Reg1_4__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand, MCK_VRNoV0 }, },
  { 8532 /* vmsgt.vi */, RISCV::VMSGT_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 8541 /* vmsgt.vv */, RISCV::VMSLT_VV, Convert__Reg1_0__Reg1_2__Reg1_1__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8550 /* vmsgt.vx */, RISCV::VMSGT_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8559 /* vmsgtu.vi */, RISCV::VMSGTU_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 8569 /* vmsgtu.vv */, RISCV::VMSLTU_VV, Convert__Reg1_0__Reg1_2__Reg1_1__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8579 /* vmsgtu.vx */, RISCV::VMSGTU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8589 /* vmsif.m */, RISCV::VMSIF_M, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8597 /* vmsle.vi */, RISCV::VMSLE_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 8606 /* vmsle.vv */, RISCV::VMSLE_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8615 /* vmsle.vx */, RISCV::VMSLE_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8624 /* vmsleu.vi */, RISCV::VMSLEU_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 8634 /* vmsleu.vv */, RISCV::VMSLEU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8644 /* vmsleu.vx */, RISCV::VMSLEU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8654 /* vmslt.vi */, RISCV::PseudoVMSLT_VI, Convert__Reg1_0__Reg1_1__SImm5Plus11_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5Plus1, MCK_RVVMaskRegOpOperand }, },
  { 8663 /* vmslt.vv */, RISCV::VMSLT_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8672 /* vmslt.vx */, RISCV::VMSLT_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8681 /* vmsltu.vi */, RISCV::PseudoVMSLTU_VI, Convert__Reg1_0__Reg1_1__SImm5Plus11_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5Plus1, MCK_RVVMaskRegOpOperand }, },
  { 8691 /* vmsltu.vv */, RISCV::VMSLTU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8701 /* vmsltu.vx */, RISCV::VMSLTU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8711 /* vmsne.vi */, RISCV::VMSNE_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 8720 /* vmsne.vv */, RISCV::VMSNE_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8729 /* vmsne.vx */, RISCV::VMSNE_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8738 /* vmsof.m */, RISCV::VMSOF_M, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8746 /* vmul.vv */, RISCV::VMUL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8754 /* vmul.vx */, RISCV::VMUL_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8762 /* vmulh.vv */, RISCV::VMULH_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8771 /* vmulh.vx */, RISCV::VMULH_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8780 /* vmulhsu.vv */, RISCV::VMULHSU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8791 /* vmulhsu.vx */, RISCV::VMULHSU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8802 /* vmulhu.vv */, RISCV::VMULHU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8812 /* vmulhu.vx */, RISCV::VMULHU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8822 /* vmv.s.x */, RISCV::VMV_S_X, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasVInstructions, { MCK_VM, MCK_GPR }, },
  { 8830 /* vmv.v.i */, RISCV::VMV_V_I, Convert__Reg1_0__SImm51_1, AMFBS_HasVInstructions, { MCK_VM, MCK_SImm5 }, },
  { 8838 /* vmv.v.v */, RISCV::VMV_V_V, Convert__Reg1_0__Reg1_1, AMFBS_HasVInstructions, { MCK_VM, MCK_VM }, },
  { 8846 /* vmv.v.x */, RISCV::VMV_V_X, Convert__Reg1_0__Reg1_1, AMFBS_HasVInstructions, { MCK_VM, MCK_GPR }, },
  { 8854 /* vmv.x.s */, RISCV::VMV_X_S, Convert__Reg1_0__Reg1_1, AMFBS_HasVInstructions, { MCK_GPR, MCK_VM }, },
  { 8862 /* vmv1r.v */, RISCV::VMV1R_V, Convert__Reg1_0__Reg1_1, AMFBS_HasVInstructions, { MCK_VM, MCK_VM }, },
  { 8870 /* vmv2r.v */, RISCV::VMV2R_V, Convert__Reg1_0__Reg1_1, AMFBS_HasVInstructions, { MCK_VRM2, MCK_VRM2 }, },
  { 8878 /* vmv4r.v */, RISCV::VMV4R_V, Convert__Reg1_0__Reg1_1, AMFBS_HasVInstructions, { MCK_VRM4, MCK_VRM4 }, },
  { 8886 /* vmv8r.v */, RISCV::VMV8R_V, Convert__Reg1_0__Reg1_1, AMFBS_HasVInstructions, { MCK_VRM8, MCK_VRM8 }, },
  { 8894 /* vmxnor.mm */, RISCV::VMXNOR_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 8904 /* vmxor.mm */, RISCV::VMXOR_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM }, },
  { 8913 /* vnclip.wi */, RISCV::VNCLIP_WI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 8923 /* vnclip.wv */, RISCV::VNCLIP_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8933 /* vnclip.wx */, RISCV::VNCLIP_WX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8943 /* vnclipu.wi */, RISCV::VNCLIPU_WI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 8954 /* vnclipu.wv */, RISCV::VNCLIPU_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8965 /* vnclipu.wx */, RISCV::VNCLIPU_WX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8976 /* vncvt.x.x.w */, RISCV::VNSRL_WX, Convert__Reg1_0__Reg1_1__regX0__reg0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM }, },
  { 8976 /* vncvt.x.x.w */, RISCV::VNSRL_WX, Convert__Reg1_0__Reg1_1__regX0__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8988 /* vneg.v */, RISCV::VRSUB_VX, Convert__Reg1_0__Reg1_1__regX0__reg0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM }, },
  { 8988 /* vneg.v */, RISCV::VRSUB_VX, Convert__Reg1_0__Reg1_1__regX0__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 8995 /* vnmsac.vv */, RISCV::VNMSAC_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9005 /* vnmsac.vx */, RISCV::VNMSAC_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9015 /* vnmsub.vv */, RISCV::VNMSUB_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9025 /* vnmsub.vx */, RISCV::VNMSUB_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9035 /* vnot.v */, RISCV::VXOR_VI, Convert__Reg1_0__Reg1_1__imm_95__MINUS_1__reg0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM }, },
  { 9035 /* vnot.v */, RISCV::VXOR_VI, Convert__Reg1_0__Reg1_1__imm_95__MINUS_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9042 /* vnsra.wi */, RISCV::VNSRA_WI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 9051 /* vnsra.wv */, RISCV::VNSRA_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9060 /* vnsra.wx */, RISCV::VNSRA_WX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9069 /* vnsrl.wi */, RISCV::VNSRL_WI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 9078 /* vnsrl.wv */, RISCV::VNSRL_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9087 /* vnsrl.wx */, RISCV::VNSRL_WX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9096 /* vor.vi */, RISCV::VOR_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 9103 /* vor.vv */, RISCV::VOR_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9110 /* vor.vx */, RISCV::VOR_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9117 /* vpopc.m */, RISCV::VCPOP_M, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9125 /* vredand.vs */, RISCV::VREDAND_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9136 /* vredmax.vs */, RISCV::VREDMAX_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9147 /* vredmaxu.vs */, RISCV::VREDMAXU_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9159 /* vredmin.vs */, RISCV::VREDMIN_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9170 /* vredminu.vs */, RISCV::VREDMINU_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9182 /* vredor.vs */, RISCV::VREDOR_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9192 /* vredsum.vs */, RISCV::VREDSUM_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9203 /* vredxor.vs */, RISCV::VREDXOR_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9214 /* vrem.vv */, RISCV::VREM_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9222 /* vrem.vx */, RISCV::VREM_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9230 /* vremu.vv */, RISCV::VREMU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9239 /* vremu.vx */, RISCV::VREMU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9248 /* vrgather.vi */, RISCV::VRGATHER_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 9260 /* vrgather.vv */, RISCV::VRGATHER_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9272 /* vrgather.vx */, RISCV::VRGATHER_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9284 /* vrgatherei16.vv */, RISCV::VRGATHEREI16_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9300 /* vrsub.vi */, RISCV::VRSUB_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 9309 /* vrsub.vx */, RISCV::VRSUB_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9318 /* vs1r.v */, RISCV::VS1R_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 9325 /* vs2r.v */, RISCV::VS2R_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VRM2, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 9332 /* vs4r.v */, RISCV::VS4R_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VRM4, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 9339 /* vs8r.v */, RISCV::VS8R_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VRM8, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 9346 /* vsadd.vi */, RISCV::VSADD_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 9355 /* vsadd.vv */, RISCV::VSADD_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9364 /* vsadd.vx */, RISCV::VSADD_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9373 /* vsaddu.vi */, RISCV::VSADDU_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 9383 /* vsaddu.vv */, RISCV::VSADDU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9393 /* vsaddu.vx */, RISCV::VSADDU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9403 /* vsbc.vvm */, RISCV::VSBC_VVM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_VMV0 }, },
  { 9412 /* vsbc.vxm */, RISCV::VSBC_VXM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_VMV0 }, },
  { 9421 /* vse1.v */, RISCV::VSM_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 9428 /* vse16.v */, RISCV::VSE16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 9436 /* vse32.v */, RISCV::VSE32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 9444 /* vse64.v */, RISCV::VSE64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 9452 /* vse8.v */, RISCV::VSE8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 9459 /* vsetivli */, RISCV::VSETIVLI, Convert__Reg1_0__UImm51_1__VTypeI101_2, AMFBS_HasVInstructions, { MCK_GPR, MCK_UImm5, MCK_VTypeI10 }, },
  { 9468 /* vsetvl */, RISCV::VSETVL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVInstructions, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 9475 /* vsetvli */, RISCV::VSETVLI, Convert__Reg1_0__Reg1_1__VTypeI111_2, AMFBS_HasVInstructions, { MCK_GPR, MCK_GPR, MCK_VTypeI11 }, },
  { 9483 /* vsext.vf2 */, RISCV::VSEXT_VF2, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9493 /* vsext.vf4 */, RISCV::VSEXT_VF4, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9503 /* vsext.vf8 */, RISCV::VSEXT_VF8, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9513 /* vslide1down.vx */, RISCV::VSLIDE1DOWN_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9528 /* vslide1up.vx */, RISCV::VSLIDE1UP_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9541 /* vslidedown.vi */, RISCV::VSLIDEDOWN_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 9555 /* vslidedown.vx */, RISCV::VSLIDEDOWN_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9569 /* vslideup.vi */, RISCV::VSLIDEUP_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 9581 /* vslideup.vx */, RISCV::VSLIDEUP_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9593 /* vsll.vi */, RISCV::VSLL_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 9601 /* vsll.vv */, RISCV::VSLL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9609 /* vsll.vx */, RISCV::VSLL_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9617 /* vsm.v */, RISCV::VSM_V, Convert__Reg1_0__Reg1_2, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 9623 /* vsmul.vv */, RISCV::VSMUL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9632 /* vsmul.vx */, RISCV::VSMUL_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9641 /* vsoxei16.v */, RISCV::VSOXEI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9652 /* vsoxei32.v */, RISCV::VSOXEI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9663 /* vsoxei64.v */, RISCV::VSOXEI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_IsRV64_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9674 /* vsoxei8.v */, RISCV::VSOXEI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9684 /* vsoxseg2ei16.v */, RISCV::VSOXSEG2EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9699 /* vsoxseg2ei32.v */, RISCV::VSOXSEG2EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9714 /* vsoxseg2ei64.v */, RISCV::VSOXSEG2EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9729 /* vsoxseg2ei8.v */, RISCV::VSOXSEG2EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9743 /* vsoxseg3ei16.v */, RISCV::VSOXSEG3EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9758 /* vsoxseg3ei32.v */, RISCV::VSOXSEG3EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9773 /* vsoxseg3ei64.v */, RISCV::VSOXSEG3EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9788 /* vsoxseg3ei8.v */, RISCV::VSOXSEG3EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9802 /* vsoxseg4ei16.v */, RISCV::VSOXSEG4EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9817 /* vsoxseg4ei32.v */, RISCV::VSOXSEG4EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9832 /* vsoxseg4ei64.v */, RISCV::VSOXSEG4EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9847 /* vsoxseg4ei8.v */, RISCV::VSOXSEG4EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9861 /* vsoxseg5ei16.v */, RISCV::VSOXSEG5EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9876 /* vsoxseg5ei32.v */, RISCV::VSOXSEG5EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9891 /* vsoxseg5ei64.v */, RISCV::VSOXSEG5EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9906 /* vsoxseg5ei8.v */, RISCV::VSOXSEG5EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9920 /* vsoxseg6ei16.v */, RISCV::VSOXSEG6EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9935 /* vsoxseg6ei32.v */, RISCV::VSOXSEG6EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9950 /* vsoxseg6ei64.v */, RISCV::VSOXSEG6EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9965 /* vsoxseg6ei8.v */, RISCV::VSOXSEG6EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9979 /* vsoxseg7ei16.v */, RISCV::VSOXSEG7EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 9994 /* vsoxseg7ei32.v */, RISCV::VSOXSEG7EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 10009 /* vsoxseg7ei64.v */, RISCV::VSOXSEG7EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 10024 /* vsoxseg7ei8.v */, RISCV::VSOXSEG7EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 10038 /* vsoxseg8ei16.v */, RISCV::VSOXSEG8EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 10053 /* vsoxseg8ei32.v */, RISCV::VSOXSEG8EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 10068 /* vsoxseg8ei64.v */, RISCV::VSOXSEG8EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 10083 /* vsoxseg8ei8.v */, RISCV::VSOXSEG8EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 10097 /* vsra.vi */, RISCV::VSRA_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 10105 /* vsra.vv */, RISCV::VSRA_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 10113 /* vsra.vx */, RISCV::VSRA_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10121 /* vsrl.vi */, RISCV::VSRL_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 10129 /* vsrl.vv */, RISCV::VSRL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 10137 /* vsrl.vx */, RISCV::VSRL_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10145 /* vsse16.v */, RISCV::VSSE16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10154 /* vsse32.v */, RISCV::VSSE32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10163 /* vsse64.v */, RISCV::VSSE64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10172 /* vsse8.v */, RISCV::VSSE8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10180 /* vsseg2e16.v */, RISCV::VSSEG2E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10192 /* vsseg2e32.v */, RISCV::VSSEG2E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10204 /* vsseg2e64.v */, RISCV::VSSEG2E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10216 /* vsseg2e8.v */, RISCV::VSSEG2E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10227 /* vsseg3e16.v */, RISCV::VSSEG3E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10239 /* vsseg3e32.v */, RISCV::VSSEG3E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10251 /* vsseg3e64.v */, RISCV::VSSEG3E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10263 /* vsseg3e8.v */, RISCV::VSSEG3E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10274 /* vsseg4e16.v */, RISCV::VSSEG4E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10286 /* vsseg4e32.v */, RISCV::VSSEG4E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10298 /* vsseg4e64.v */, RISCV::VSSEG4E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10310 /* vsseg4e8.v */, RISCV::VSSEG4E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10321 /* vsseg5e16.v */, RISCV::VSSEG5E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10333 /* vsseg5e32.v */, RISCV::VSSEG5E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10345 /* vsseg5e64.v */, RISCV::VSSEG5E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10357 /* vsseg5e8.v */, RISCV::VSSEG5E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10368 /* vsseg6e16.v */, RISCV::VSSEG6E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10380 /* vsseg6e32.v */, RISCV::VSSEG6E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10392 /* vsseg6e64.v */, RISCV::VSSEG6E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10404 /* vsseg6e8.v */, RISCV::VSSEG6E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10415 /* vsseg7e16.v */, RISCV::VSSEG7E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10427 /* vsseg7e32.v */, RISCV::VSSEG7E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10439 /* vsseg7e64.v */, RISCV::VSSEG7E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10451 /* vsseg7e8.v */, RISCV::VSSEG7E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10462 /* vsseg8e16.v */, RISCV::VSSEG8E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10474 /* vsseg8e32.v */, RISCV::VSSEG8E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10486 /* vsseg8e64.v */, RISCV::VSSEG8E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10498 /* vsseg8e8.v */, RISCV::VSSEG8E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10509 /* vssra.vi */, RISCV::VSSRA_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 10518 /* vssra.vv */, RISCV::VSSRA_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 10527 /* vssra.vx */, RISCV::VSSRA_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10536 /* vssrl.vi */, RISCV::VSSRL_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 10545 /* vssrl.vv */, RISCV::VSSRL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 10554 /* vssrl.vx */, RISCV::VSSRL_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10563 /* vssseg2e16.v */, RISCV::VSSSEG2E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10576 /* vssseg2e32.v */, RISCV::VSSSEG2E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10589 /* vssseg2e64.v */, RISCV::VSSSEG2E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10602 /* vssseg2e8.v */, RISCV::VSSSEG2E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10614 /* vssseg3e16.v */, RISCV::VSSSEG3E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10627 /* vssseg3e32.v */, RISCV::VSSSEG3E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10640 /* vssseg3e64.v */, RISCV::VSSSEG3E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10653 /* vssseg3e8.v */, RISCV::VSSSEG3E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10665 /* vssseg4e16.v */, RISCV::VSSSEG4E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10678 /* vssseg4e32.v */, RISCV::VSSSEG4E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10691 /* vssseg4e64.v */, RISCV::VSSSEG4E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10704 /* vssseg4e8.v */, RISCV::VSSSEG4E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10716 /* vssseg5e16.v */, RISCV::VSSSEG5E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10729 /* vssseg5e32.v */, RISCV::VSSSEG5E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10742 /* vssseg5e64.v */, RISCV::VSSSEG5E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10755 /* vssseg5e8.v */, RISCV::VSSSEG5E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10767 /* vssseg6e16.v */, RISCV::VSSSEG6E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10780 /* vssseg6e32.v */, RISCV::VSSSEG6E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10793 /* vssseg6e64.v */, RISCV::VSSSEG6E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10806 /* vssseg6e8.v */, RISCV::VSSSEG6E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10818 /* vssseg7e16.v */, RISCV::VSSSEG7E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10831 /* vssseg7e32.v */, RISCV::VSSSEG7E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10844 /* vssseg7e64.v */, RISCV::VSSSEG7E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10857 /* vssseg7e8.v */, RISCV::VSSSEG7E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10869 /* vssseg8e16.v */, RISCV::VSSSEG8E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10882 /* vssseg8e32.v */, RISCV::VSSSEG8E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10895 /* vssseg8e64.v */, RISCV::VSSSEG8E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10908 /* vssseg8e8.v */, RISCV::VSSSEG8E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10920 /* vssub.vv */, RISCV::VSSUB_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 10929 /* vssub.vx */, RISCV::VSSUB_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10938 /* vssubu.vv */, RISCV::VSSUBU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 10948 /* vssubu.vx */, RISCV::VSSUBU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10958 /* vsub.vv */, RISCV::VSUB_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 10966 /* vsub.vx */, RISCV::VSUB_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10974 /* vsuxei16.v */, RISCV::VSUXEI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 10985 /* vsuxei32.v */, RISCV::VSUXEI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 10996 /* vsuxei64.v */, RISCV::VSUXEI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_IsRV64_HasVInstructionsI64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11007 /* vsuxei8.v */, RISCV::VSUXEI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11017 /* vsuxseg2ei16.v */, RISCV::VSUXSEG2EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11032 /* vsuxseg2ei32.v */, RISCV::VSUXSEG2EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11047 /* vsuxseg2ei64.v */, RISCV::VSUXSEG2EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11062 /* vsuxseg2ei8.v */, RISCV::VSUXSEG2EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11076 /* vsuxseg3ei16.v */, RISCV::VSUXSEG3EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11091 /* vsuxseg3ei32.v */, RISCV::VSUXSEG3EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11106 /* vsuxseg3ei64.v */, RISCV::VSUXSEG3EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11121 /* vsuxseg3ei8.v */, RISCV::VSUXSEG3EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11135 /* vsuxseg4ei16.v */, RISCV::VSUXSEG4EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11150 /* vsuxseg4ei32.v */, RISCV::VSUXSEG4EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11165 /* vsuxseg4ei64.v */, RISCV::VSUXSEG4EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11180 /* vsuxseg4ei8.v */, RISCV::VSUXSEG4EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11194 /* vsuxseg5ei16.v */, RISCV::VSUXSEG5EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11209 /* vsuxseg5ei32.v */, RISCV::VSUXSEG5EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11224 /* vsuxseg5ei64.v */, RISCV::VSUXSEG5EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11239 /* vsuxseg5ei8.v */, RISCV::VSUXSEG5EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11253 /* vsuxseg6ei16.v */, RISCV::VSUXSEG6EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11268 /* vsuxseg6ei32.v */, RISCV::VSUXSEG6EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11283 /* vsuxseg6ei64.v */, RISCV::VSUXSEG6EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11298 /* vsuxseg6ei8.v */, RISCV::VSUXSEG6EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11312 /* vsuxseg7ei16.v */, RISCV::VSUXSEG7EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11327 /* vsuxseg7ei32.v */, RISCV::VSUXSEG7EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11342 /* vsuxseg7ei64.v */, RISCV::VSUXSEG7EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11357 /* vsuxseg7ei8.v */, RISCV::VSUXSEG7EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11371 /* vsuxseg8ei16.v */, RISCV::VSUXSEG8EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11386 /* vsuxseg8ei32.v */, RISCV::VSUXSEG8EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11401 /* vsuxseg8ei64.v */, RISCV::VSUXSEG8EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructionsI64_IsRV64, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11416 /* vsuxseg8ei8.v */, RISCV::VSUXSEG8EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasVInstructions, { MCK_VM, MCK__40_, MCK_GPR, MCK__41_, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11430 /* vwadd.vv */, RISCV::VWADD_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11439 /* vwadd.vx */, RISCV::VWADD_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11448 /* vwadd.wv */, RISCV::VWADD_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11457 /* vwadd.wx */, RISCV::VWADD_WX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11466 /* vwaddu.vv */, RISCV::VWADDU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11476 /* vwaddu.vx */, RISCV::VWADDU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11486 /* vwaddu.wv */, RISCV::VWADDU_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11496 /* vwaddu.wx */, RISCV::VWADDU_WX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11506 /* vwcvt.x.x.v */, RISCV::VWADD_VX, Convert__Reg1_0__Reg1_1__regX0__reg0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM }, },
  { 11506 /* vwcvt.x.x.v */, RISCV::VWADD_VX, Convert__Reg1_0__Reg1_1__regX0__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11518 /* vwcvtu.x.x.v */, RISCV::VWADDU_VX, Convert__Reg1_0__Reg1_1__regX0__reg0, AMFBS_HasVInstructions, { MCK_VM, MCK_VM }, },
  { 11518 /* vwcvtu.x.x.v */, RISCV::VWADDU_VX, Convert__Reg1_0__Reg1_1__regX0__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11531 /* vwmacc.vv */, RISCV::VWMACC_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11541 /* vwmacc.vx */, RISCV::VWMACC_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11551 /* vwmaccsu.vv */, RISCV::VWMACCSU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11563 /* vwmaccsu.vx */, RISCV::VWMACCSU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11575 /* vwmaccu.vv */, RISCV::VWMACCU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11586 /* vwmaccu.vx */, RISCV::VWMACCU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11597 /* vwmaccus.vx */, RISCV::VWMACCUS_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_GPR, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11609 /* vwmul.vv */, RISCV::VWMUL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11618 /* vwmul.vx */, RISCV::VWMUL_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11627 /* vwmulsu.vv */, RISCV::VWMULSU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11638 /* vwmulsu.vx */, RISCV::VWMULSU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11649 /* vwmulu.vv */, RISCV::VWMULU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11659 /* vwmulu.vx */, RISCV::VWMULU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11669 /* vwredsum.vs */, RISCV::VWREDSUM_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11681 /* vwredsumu.vs */, RISCV::VWREDSUMU_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11694 /* vwsub.vv */, RISCV::VWSUB_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11703 /* vwsub.vx */, RISCV::VWSUB_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11712 /* vwsub.wv */, RISCV::VWSUB_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11721 /* vwsub.wx */, RISCV::VWSUB_WX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11730 /* vwsubu.vv */, RISCV::VWSUBU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11740 /* vwsubu.vx */, RISCV::VWSUBU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11750 /* vwsubu.wv */, RISCV::VWSUBU_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11760 /* vwsubu.wx */, RISCV::VWSUBU_WX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11770 /* vxor.vi */, RISCV::VXOR_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 11778 /* vxor.vv */, RISCV::VXOR_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11786 /* vxor.vx */, RISCV::VXOR_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11794 /* vzext.vf2 */, RISCV::VZEXT_VF2, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11804 /* vzext.vf4 */, RISCV::VZEXT_VF4, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11814 /* vzext.vf8 */, RISCV::VZEXT_VF8, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasVInstructions, { MCK_VM, MCK_VM, MCK_RVVMaskRegOpOperand }, },
  { 11824 /* wfi */, RISCV::WFI, Convert__imm_95_0__imm_95_0, AMFBS_None, {  }, },
  { 11828 /* xnor */, RISCV::XNOR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbpOrZbkb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 11833 /* xor */, RISCV::XOR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 11833 /* xor */, RISCV::XORI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 11837 /* xori */, RISCV::XORI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 11842 /* xperm.b */, RISCV::XPERM8, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 11850 /* xperm.h */, RISCV::XPERM_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 11858 /* xperm.n */, RISCV::XPERM4, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 11866 /* xperm.w */, RISCV::XPERM_W, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 11874 /* xperm4 */, RISCV::XPERM4, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbpOrZbkx, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 11881 /* xperm8 */, RISCV::XPERM8, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbpOrZbkx, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 11888 /* zext.b */, RISCV::ANDI, Convert__Reg1_0__Reg1_1__imm_95_255, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 11895 /* zext.h */, RISCV::ZEXT_H_RV32, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbbOrZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 11895 /* zext.h */, RISCV::ZEXT_H_RV64, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 11895 /* zext.h */, RISCV::PseudoZEXT_H, Convert__Reg1_0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 11902 /* zext.w */, RISCV::ADD_UW, Convert__Reg1_0__Reg1_1__regX0, AMFBS_HasStdExtZba_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 11902 /* zext.w */, RISCV::PseudoZEXT_W, Convert__Reg1_0__Reg1_1, AMFBS_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 11909 /* zip */, RISCV::ZIP_RV32, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbpOrZbkb_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 11909 /* zip */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_31, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 11913 /* zip.b */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_3, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 11919 /* zip.h */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 11925 /* zip.n */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_1, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 11931 /* zip.w */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_15, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 11937 /* zip16 */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_16, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 11943 /* zip2 */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_14, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 11943 /* zip2 */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_30, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 11948 /* zip2.b */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 11955 /* zip2.h */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_6, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 11962 /* zip2.w */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_14, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 11969 /* zip4 */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_12, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 11969 /* zip4 */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_28, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 11974 /* zip4.h */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_4, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 11981 /* zip4.w */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_12, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 11988 /* zip8 */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_8, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 11988 /* zip8 */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_24, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 11993 /* zip8.w */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_8, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
};

#include "llvm/Support/Debug.h"
#include "llvm/Support/Format.h"

unsigned RISCVAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst,
                     uint64_t &ErrorInfo,
                     FeatureBitset &MissingFeatures,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 8) {
    ErrorInfo = 8;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  const FeatureBitset &AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((RISCVOperand &)*Operands[0]).getToken();

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
  SmallBitVector OptionalOperandsMask(7);
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
    OptionalOperandsMask.reset(0, 7);
    for (unsigned FormalIdx = 0, ActualIdx = 1; FormalIdx != 7; ++FormalIdx) {
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
        OptionalOperandsMask.set(FormalIdx, 7);
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
        OptionalOperandsMask.set(FormalIdx);
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
    convertToMCInst(it->ConvertFn, Inst, it->Opcode, Operands,
                    OptionalOperandsMask);

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

namespace {
  struct OperandMatchEntry {
    uint16_t Mnemonic;
    uint8_t OperandMask;
    uint8_t Class;
    uint8_t RequiredFeaturesIdx;

    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcodeOperand {
    bool operator()(const OperandMatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic()  < RHS;
    }
    bool operator()(StringRef LHS, const OperandMatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const OperandMatchEntry &LHS, const OperandMatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace

static const OperandMatchEntry OperandMatchTable[952] = {
  /* Operand List Mnemonic, Mask, Operand Class, Features */
  { 0 /* .insn_b */, 1 /* 0 */, MCK_InsnDirectiveOpcode, AMFBS_None },
  { 8 /* .insn_i */, 1 /* 0 */, MCK_InsnDirectiveOpcode, AMFBS_None },
  { 8 /* .insn_i */, 1 /* 0 */, MCK_InsnDirectiveOpcode, AMFBS_None },
  { 16 /* .insn_j */, 1 /* 0 */, MCK_InsnDirectiveOpcode, AMFBS_None },
  { 16 /* .insn_j */, 4 /* 2 */, MCK_SImm21Lsb0JAL, AMFBS_None },
  { 24 /* .insn_r */, 1 /* 0 */, MCK_InsnDirectiveOpcode, AMFBS_None },
  { 24 /* .insn_r */, 1 /* 0 */, MCK_InsnDirectiveOpcode, AMFBS_None },
  { 32 /* .insn_r4 */, 1 /* 0 */, MCK_InsnDirectiveOpcode, AMFBS_None },
  { 41 /* .insn_s */, 1 /* 0 */, MCK_InsnDirectiveOpcode, AMFBS_None },
  { 49 /* .insn_sb */, 1 /* 0 */, MCK_InsnDirectiveOpcode, AMFBS_None },
  { 58 /* .insn_u */, 1 /* 0 */, MCK_InsnDirectiveOpcode, AMFBS_None },
  { 66 /* .insn_uj */, 1 /* 0 */, MCK_InsnDirectiveOpcode, AMFBS_None },
  { 66 /* .insn_uj */, 4 /* 2 */, MCK_SImm21Lsb0JAL, AMFBS_None },
  { 75 /* add */, 8 /* 3 */, MCK_TPRelAddSymbol, AMFBS_None },
  { 201 /* amoadd.d */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 210 /* amoadd.d.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 222 /* amoadd.d.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 236 /* amoadd.d.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 248 /* amoadd.w */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 257 /* amoadd.w.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 269 /* amoadd.w.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 283 /* amoadd.w.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 295 /* amoand.d */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 304 /* amoand.d.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 316 /* amoand.d.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 330 /* amoand.d.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 342 /* amoand.w */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 351 /* amoand.w.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 363 /* amoand.w.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 377 /* amoand.w.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 389 /* amomax.d */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 398 /* amomax.d.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 410 /* amomax.d.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 424 /* amomax.d.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 436 /* amomax.w */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 445 /* amomax.w.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 457 /* amomax.w.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 471 /* amomax.w.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 483 /* amomaxu.d */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 493 /* amomaxu.d.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 506 /* amomaxu.d.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 521 /* amomaxu.d.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 534 /* amomaxu.w */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 544 /* amomaxu.w.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 557 /* amomaxu.w.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 572 /* amomaxu.w.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 585 /* amomin.d */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 594 /* amomin.d.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 606 /* amomin.d.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 620 /* amomin.d.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 632 /* amomin.w */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 641 /* amomin.w.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 653 /* amomin.w.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 667 /* amomin.w.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 679 /* amominu.d */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 689 /* amominu.d.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 702 /* amominu.d.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 717 /* amominu.d.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 730 /* amominu.w */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 740 /* amominu.w.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 753 /* amominu.w.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 768 /* amominu.w.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 781 /* amoor.d */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 789 /* amoor.d.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 800 /* amoor.d.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 813 /* amoor.d.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 824 /* amoor.w */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 832 /* amoor.w.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 843 /* amoor.w.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 856 /* amoor.w.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 867 /* amoswap.d */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 877 /* amoswap.d.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 890 /* amoswap.d.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 905 /* amoswap.d.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 918 /* amoswap.w */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 928 /* amoswap.w.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 941 /* amoswap.w.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 956 /* amoswap.w.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 969 /* amoxor.d */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 978 /* amoxor.d.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 990 /* amoxor.d.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 1004 /* amoxor.d.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 1016 /* amoxor.w */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 1025 /* amoxor.w.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 1037 /* amoxor.w.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 1051 /* amoxor.w.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 1600 /* call */, 1 /* 0 */, MCK_CallSymbol, AMFBS_None },
  { 1600 /* call */, 2 /* 1 */, MCK_CallSymbol, AMFBS_None },
  { 1605 /* cbo.clean */, 1 /* 0 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZicbom },
  { 1615 /* cbo.flush */, 1 /* 0 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZicbom },
  { 1625 /* cbo.inval */, 1 /* 0 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZicbom },
  { 1635 /* cbo.zero */, 1 /* 0 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtZicboz },
  { 1762 /* csrc */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1762 /* csrc */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1767 /* csrci */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1773 /* csrr */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1778 /* csrrc */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1778 /* csrrc */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1784 /* csrrci */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1791 /* csrrs */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1791 /* csrrs */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1797 /* csrrsi */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1804 /* csrrw */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1804 /* csrrw */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1810 /* csrrwi */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1817 /* csrs */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1817 /* csrs */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1822 /* csrsi */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1828 /* csrw */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1828 /* csrw */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1833 /* csrwi */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1886 /* fabs.d */, 3 /* 0, 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 1886 /* fabs.d */, 3 /* 0, 1 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 1893 /* fabs.h */, 3 /* 0, 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 1900 /* fabs.s */, 3 /* 0, 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 1907 /* fadd.d */, 7 /* 0, 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 1907 /* fadd.d */, 7 /* 0, 1, 2 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 1907 /* fadd.d */, 7 /* 0, 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 1907 /* fadd.d */, 7 /* 0, 1, 2 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 1914 /* fadd.h */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 1914 /* fadd.h */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 1921 /* fadd.s */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 1921 /* fadd.s */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 1928 /* fclass.d */, 2 /* 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 1928 /* fclass.d */, 2 /* 1 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 1937 /* fclass.h */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 1946 /* fclass.s */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 1955 /* fcvt.d.h */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinxOrZhinxmin_HasStdExtZdinx },
  { 1955 /* fcvt.d.h */, 1 /* 0 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZhinxOrZhinxmin_HasStdExtZdinx },
  { 1964 /* fcvt.d.l */, 1 /* 0 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 1964 /* fcvt.d.l */, 1 /* 0 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 1973 /* fcvt.d.lu */, 1 /* 0 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 1973 /* fcvt.d.lu */, 1 /* 0 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 1983 /* fcvt.d.s */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 1983 /* fcvt.d.s */, 1 /* 0 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 1983 /* fcvt.d.s */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 1983 /* fcvt.d.s */, 1 /* 0 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 1992 /* fcvt.d.w */, 1 /* 0 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 1992 /* fcvt.d.w */, 1 /* 0 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2001 /* fcvt.d.wu */, 1 /* 0 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2001 /* fcvt.d.wu */, 1 /* 0 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2011 /* fcvt.h.d */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinxOrZhinxmin_HasStdExtZdinx },
  { 2011 /* fcvt.h.d */, 2 /* 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZhinxOrZhinxmin_HasStdExtZdinx },
  { 2011 /* fcvt.h.d */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinxOrZhinxmin_HasStdExtZdinx },
  { 2011 /* fcvt.h.d */, 2 /* 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZhinxOrZhinxmin_HasStdExtZdinx },
  { 2020 /* fcvt.h.l */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx_IsRV64 },
  { 2020 /* fcvt.h.l */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx_IsRV64 },
  { 2029 /* fcvt.h.lu */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx_IsRV64 },
  { 2029 /* fcvt.h.lu */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx_IsRV64 },
  { 2039 /* fcvt.h.s */, 3 /* 0, 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinxOrZhinxmin },
  { 2039 /* fcvt.h.s */, 3 /* 0, 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinxOrZhinxmin },
  { 2048 /* fcvt.h.w */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2048 /* fcvt.h.w */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2057 /* fcvt.h.wu */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2057 /* fcvt.h.wu */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2067 /* fcvt.l.d */, 2 /* 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2067 /* fcvt.l.d */, 2 /* 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2076 /* fcvt.l.h */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx_IsRV64 },
  { 2076 /* fcvt.l.h */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx_IsRV64 },
  { 2085 /* fcvt.l.s */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx_IsRV64 },
  { 2085 /* fcvt.l.s */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx_IsRV64 },
  { 2094 /* fcvt.lu.d */, 2 /* 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2094 /* fcvt.lu.d */, 2 /* 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2104 /* fcvt.lu.h */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx_IsRV64 },
  { 2104 /* fcvt.lu.h */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx_IsRV64 },
  { 2114 /* fcvt.lu.s */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx_IsRV64 },
  { 2114 /* fcvt.lu.s */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx_IsRV64 },
  { 2124 /* fcvt.s.d */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2124 /* fcvt.s.d */, 2 /* 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2124 /* fcvt.s.d */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2124 /* fcvt.s.d */, 2 /* 1 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2124 /* fcvt.s.d */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2124 /* fcvt.s.d */, 2 /* 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2124 /* fcvt.s.d */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2124 /* fcvt.s.d */, 2 /* 1 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2133 /* fcvt.s.h */, 3 /* 0, 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinxOrZhinxmin },
  { 2142 /* fcvt.s.l */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx_IsRV64 },
  { 2142 /* fcvt.s.l */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx_IsRV64 },
  { 2151 /* fcvt.s.lu */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx_IsRV64 },
  { 2151 /* fcvt.s.lu */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx_IsRV64 },
  { 2161 /* fcvt.s.w */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2161 /* fcvt.s.w */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2170 /* fcvt.s.wu */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2170 /* fcvt.s.wu */, 1 /* 0 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2180 /* fcvt.w.d */, 2 /* 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2180 /* fcvt.w.d */, 2 /* 1 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2180 /* fcvt.w.d */, 2 /* 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2180 /* fcvt.w.d */, 2 /* 1 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2189 /* fcvt.w.h */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2189 /* fcvt.w.h */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2198 /* fcvt.w.s */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2198 /* fcvt.w.s */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2207 /* fcvt.wu.d */, 2 /* 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2207 /* fcvt.wu.d */, 2 /* 1 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2207 /* fcvt.wu.d */, 2 /* 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2207 /* fcvt.wu.d */, 2 /* 1 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2217 /* fcvt.wu.h */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2217 /* fcvt.wu.h */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2227 /* fcvt.wu.s */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2227 /* fcvt.wu.s */, 2 /* 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2237 /* fdiv.d */, 7 /* 0, 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2237 /* fdiv.d */, 7 /* 0, 1, 2 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2237 /* fdiv.d */, 7 /* 0, 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2237 /* fdiv.d */, 7 /* 0, 1, 2 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2244 /* fdiv.h */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2244 /* fdiv.h */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2251 /* fdiv.s */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2251 /* fdiv.s */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2282 /* feq.d */, 6 /* 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2282 /* feq.d */, 6 /* 1, 2 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2288 /* feq.h */, 6 /* 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2294 /* feq.s */, 6 /* 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2300 /* fge.d */, 6 /* 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2300 /* fge.d */, 6 /* 1, 2 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2306 /* fge.h */, 6 /* 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2312 /* fge.s */, 6 /* 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2318 /* fgt.d */, 6 /* 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2318 /* fgt.d */, 6 /* 1, 2 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2324 /* fgt.h */, 6 /* 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2330 /* fgt.s */, 6 /* 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2336 /* fld */, 2 /* 1 */, MCK_BareSymbol, AMFBS_HasStdExtD },
  { 2340 /* fle.d */, 6 /* 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2340 /* fle.d */, 6 /* 1, 2 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2346 /* fle.h */, 6 /* 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2352 /* fle.s */, 6 /* 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2358 /* flh */, 2 /* 1 */, MCK_BareSymbol, AMFBS_HasStdExtZfhOrZfhmin },
  { 2362 /* flt.d */, 6 /* 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2362 /* flt.d */, 6 /* 1, 2 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2368 /* flt.h */, 6 /* 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2374 /* flt.s */, 6 /* 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2380 /* flw */, 2 /* 1 */, MCK_BareSymbol, AMFBS_HasStdExtF },
  { 2384 /* fmadd.d */, 15 /* 0, 1, 2, 3 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2384 /* fmadd.d */, 15 /* 0, 1, 2, 3 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2384 /* fmadd.d */, 15 /* 0, 1, 2, 3 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2384 /* fmadd.d */, 15 /* 0, 1, 2, 3 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2392 /* fmadd.h */, 15 /* 0, 1, 2, 3 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2392 /* fmadd.h */, 15 /* 0, 1, 2, 3 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2400 /* fmadd.s */, 15 /* 0, 1, 2, 3 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2400 /* fmadd.s */, 15 /* 0, 1, 2, 3 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2408 /* fmax.d */, 7 /* 0, 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2408 /* fmax.d */, 7 /* 0, 1, 2 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2415 /* fmax.h */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2422 /* fmax.s */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2429 /* fmin.d */, 7 /* 0, 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2429 /* fmin.d */, 7 /* 0, 1, 2 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2436 /* fmin.h */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2443 /* fmin.s */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2450 /* fmsub.d */, 15 /* 0, 1, 2, 3 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2450 /* fmsub.d */, 15 /* 0, 1, 2, 3 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2450 /* fmsub.d */, 15 /* 0, 1, 2, 3 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2450 /* fmsub.d */, 15 /* 0, 1, 2, 3 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2458 /* fmsub.h */, 15 /* 0, 1, 2, 3 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2458 /* fmsub.h */, 15 /* 0, 1, 2, 3 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2466 /* fmsub.s */, 15 /* 0, 1, 2, 3 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2466 /* fmsub.s */, 15 /* 0, 1, 2, 3 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2474 /* fmul.d */, 7 /* 0, 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2474 /* fmul.d */, 7 /* 0, 1, 2 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2474 /* fmul.d */, 7 /* 0, 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2474 /* fmul.d */, 7 /* 0, 1, 2 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2481 /* fmul.h */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2481 /* fmul.h */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2488 /* fmul.s */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2488 /* fmul.s */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2509 /* fmv.h */, 3 /* 0, 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2561 /* fneg.d */, 3 /* 0, 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2561 /* fneg.d */, 3 /* 0, 1 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2568 /* fneg.h */, 3 /* 0, 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2575 /* fneg.s */, 3 /* 0, 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2582 /* fnmadd.d */, 15 /* 0, 1, 2, 3 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2582 /* fnmadd.d */, 15 /* 0, 1, 2, 3 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2582 /* fnmadd.d */, 15 /* 0, 1, 2, 3 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2582 /* fnmadd.d */, 15 /* 0, 1, 2, 3 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2591 /* fnmadd.h */, 15 /* 0, 1, 2, 3 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2591 /* fnmadd.h */, 15 /* 0, 1, 2, 3 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2600 /* fnmadd.s */, 15 /* 0, 1, 2, 3 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2600 /* fnmadd.s */, 15 /* 0, 1, 2, 3 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2609 /* fnmsub.d */, 15 /* 0, 1, 2, 3 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2609 /* fnmsub.d */, 15 /* 0, 1, 2, 3 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2609 /* fnmsub.d */, 15 /* 0, 1, 2, 3 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2609 /* fnmsub.d */, 15 /* 0, 1, 2, 3 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2618 /* fnmsub.h */, 15 /* 0, 1, 2, 3 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2618 /* fnmsub.h */, 15 /* 0, 1, 2, 3 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2627 /* fnmsub.s */, 15 /* 0, 1, 2, 3 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2627 /* fnmsub.s */, 15 /* 0, 1, 2, 3 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2666 /* fsd */, 2 /* 1 */, MCK_BareSymbol, AMFBS_HasStdExtD },
  { 2687 /* fsgnj.d */, 7 /* 0, 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2687 /* fsgnj.d */, 7 /* 0, 1, 2 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2695 /* fsgnj.h */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2703 /* fsgnj.s */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2711 /* fsgnjn.d */, 7 /* 0, 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2711 /* fsgnjn.d */, 7 /* 0, 1, 2 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2720 /* fsgnjn.h */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2729 /* fsgnjn.s */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2738 /* fsgnjx.d */, 7 /* 0, 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2738 /* fsgnjx.d */, 7 /* 0, 1, 2 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2747 /* fsgnjx.h */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2756 /* fsgnjx.s */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2765 /* fsh */, 2 /* 1 */, MCK_BareSymbol, AMFBS_HasStdExtZfhOrZfhmin },
  { 2778 /* fsqrt.d */, 3 /* 0, 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2778 /* fsqrt.d */, 3 /* 0, 1 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2778 /* fsqrt.d */, 3 /* 0, 1 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2778 /* fsqrt.d */, 3 /* 0, 1 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2786 /* fsqrt.h */, 3 /* 0, 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2786 /* fsqrt.h */, 3 /* 0, 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2794 /* fsqrt.s */, 3 /* 0, 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2794 /* fsqrt.s */, 3 /* 0, 1 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2838 /* fsub.d */, 7 /* 0, 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2838 /* fsub.d */, 7 /* 0, 1, 2 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2838 /* fsub.d */, 7 /* 0, 1, 2 */, MCK_GPRF64AsFPR, AMFBS_HasStdExtZdinx_IsRV64 },
  { 2838 /* fsub.d */, 7 /* 0, 1, 2 */, MCK_GPRPF64AsFPR, AMFBS_HasStdExtZdinx_IsRV32 },
  { 2845 /* fsub.h */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2845 /* fsub.h */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZhinx },
  { 2852 /* fsub.s */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2852 /* fsub.s */, 7 /* 0, 1, 2 */, MCK_GPRAsFPR, AMFBS_HasStdExtZfinx },
  { 2859 /* fsw */, 2 /* 1 */, MCK_BareSymbol, AMFBS_HasStdExtF },
  { 2959 /* hlv.b */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_None },
  { 2965 /* hlv.bu */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_None },
  { 2972 /* hlv.d */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_IsRV64 },
  { 2978 /* hlv.h */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_None },
  { 2984 /* hlv.hu */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_None },
  { 2991 /* hlv.w */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_None },
  { 2997 /* hlv.wu */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_IsRV64 },
  { 3004 /* hlvx.hu */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_None },
  { 3012 /* hlvx.wu */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_None },
  { 3020 /* hsv.b */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_None },
  { 3026 /* hsv.d */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_IsRV64 },
  { 3032 /* hsv.h */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_None },
  { 3038 /* hsv.w */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_None },
  { 3044 /* j */, 1 /* 0 */, MCK_SImm21Lsb0JAL, AMFBS_None },
  { 3046 /* jal */, 1 /* 0 */, MCK_SImm21Lsb0JAL, AMFBS_None },
  { 3046 /* jal */, 2 /* 1 */, MCK_SImm21Lsb0JAL, AMFBS_None },
  { 3058 /* jump */, 1 /* 0 */, MCK_PseudoJumpSymbol, AMFBS_None },
  { 3063 /* la */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 3066 /* la.tls.gd */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 3076 /* la.tls.ie */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 3086 /* lb */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 3089 /* lbu */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 3093 /* ld */, 2 /* 1 */, MCK_BareSymbol, AMFBS_IsRV64 },
  { 3096 /* lh */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 3099 /* lhu */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 3106 /* lla */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 3110 /* lr.d */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 3115 /* lr.d.aq */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 3123 /* lr.d.aqrl */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 3133 /* lr.d.rl */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 3141 /* lr.w */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 3146 /* lr.w.aq */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 3154 /* lr.w.aqrl */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 3164 /* lr.w.rl */, 2 /* 1 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 3176 /* lw */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 3179 /* lwu */, 2 /* 1 */, MCK_BareSymbol, AMFBS_IsRV64 },
  { 3703 /* sb */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 3706 /* sc.d */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 3711 /* sc.d.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 3719 /* sc.d.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 3729 /* sc.d.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 3737 /* sc.w */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 3742 /* sc.w.aq */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 3750 /* sc.w.aqrl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 3760 /* sc.w.rl */, 4 /* 2 */, MCK_ZeroOffsetMemOpOperand, AMFBS_HasStdExtA },
  { 3768 /* sd */, 2 /* 1 */, MCK_BareSymbol, AMFBS_IsRV64 },
  { 3853 /* sh */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 4231 /* sw */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 4234 /* tail */, 1 /* 0 */, MCK_CallSymbol, AMFBS_None },
  { 4394 /* vaadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 4403 /* vaadd.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 4412 /* vaaddu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 4422 /* vaaddu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 4459 /* vadd.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 4467 /* vadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 4475 /* vadd.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 4483 /* vand.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 4491 /* vand.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 4499 /* vand.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 4507 /* vasub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 4516 /* vasub.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 4525 /* vasubu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 4535 /* vasubu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 4558 /* vcpop.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 4566 /* vdiv.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 4574 /* vdiv.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 4582 /* vdivu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 4591 /* vdivu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 4600 /* vfabs.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4608 /* vfadd.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4617 /* vfadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4626 /* vfclass.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4636 /* vfcvt.f.x.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4648 /* vfcvt.f.xu.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4661 /* vfcvt.rtz.x.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4677 /* vfcvt.rtz.xu.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4694 /* vfcvt.x.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4706 /* vfcvt.xu.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4719 /* vfdiv.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4728 /* vfdiv.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4737 /* vfirst.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 4746 /* vfmacc.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4756 /* vfmacc.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4766 /* vfmadd.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4776 /* vfmadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4786 /* vfmax.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4795 /* vfmax.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4816 /* vfmin.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4825 /* vfmin.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4834 /* vfmsac.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4844 /* vfmsac.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4854 /* vfmsub.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4864 /* vfmsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4874 /* vfmul.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4883 /* vfmul.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4919 /* vfncvt.f.f.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4932 /* vfncvt.f.x.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4945 /* vfncvt.f.xu.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4959 /* vfncvt.rod.f.f.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4976 /* vfncvt.rtz.x.f.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 4993 /* vfncvt.rtz.xu.f.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5011 /* vfncvt.x.f.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5024 /* vfncvt.xu.f.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5038 /* vfneg.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5046 /* vfnmacc.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5057 /* vfnmacc.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5068 /* vfnmadd.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5079 /* vfnmadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5090 /* vfnmsac.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5101 /* vfnmsac.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5112 /* vfnmsub.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5123 /* vfnmsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5134 /* vfrdiv.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5144 /* vfrec7.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5153 /* vfredmax.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5165 /* vfredmin.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5177 /* vfredosum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5190 /* vfredsum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5202 /* vfredusum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5215 /* vfrsqrt7.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5226 /* vfrsub.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5236 /* vfsgnj.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5246 /* vfsgnj.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5256 /* vfsgnjn.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5267 /* vfsgnjn.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5278 /* vfsgnjx.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5289 /* vfsgnjx.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5300 /* vfslide1down.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5316 /* vfslide1up.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5330 /* vfsqrt.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5339 /* vfsub.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5348 /* vfsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5357 /* vfwadd.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5367 /* vfwadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5377 /* vfwadd.wf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5387 /* vfwadd.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5397 /* vfwcvt.f.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5410 /* vfwcvt.f.x.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5423 /* vfwcvt.f.xu.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5437 /* vfwcvt.rtz.x.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5454 /* vfwcvt.rtz.xu.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5472 /* vfwcvt.x.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5485 /* vfwcvt.xu.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5499 /* vfwmacc.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5510 /* vfwmacc.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5521 /* vfwmsac.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5532 /* vfwmsac.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5543 /* vfwmul.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5553 /* vfwmul.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5563 /* vfwnmacc.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5575 /* vfwnmacc.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5587 /* vfwnmsac.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5599 /* vfwnmsac.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5611 /* vfwredosum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5625 /* vfwredsum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5638 /* vfwredusum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5652 /* vfwsub.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5662 /* vfwsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5672 /* vfwsub.wf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5682 /* vfwsub.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 5692 /* vid.v */, 2 /* 1 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 5698 /* viota.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 5897 /* vle16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 5905 /* vle16ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 5915 /* vle32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 5923 /* vle32ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 5933 /* vle64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 5941 /* vle64ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 5951 /* vle8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 5958 /* vle8ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 5973 /* vloxei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 5984 /* vloxei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 5995 /* vloxei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_IsRV64_HasVInstructionsI64 },
  { 6006 /* vloxei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6016 /* vloxseg2ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6031 /* vloxseg2ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6046 /* vloxseg2ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 6061 /* vloxseg2ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6075 /* vloxseg3ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6090 /* vloxseg3ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6105 /* vloxseg3ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 6120 /* vloxseg3ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6134 /* vloxseg4ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6149 /* vloxseg4ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6164 /* vloxseg4ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 6179 /* vloxseg4ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6193 /* vloxseg5ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6208 /* vloxseg5ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6223 /* vloxseg5ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 6238 /* vloxseg5ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6252 /* vloxseg6ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6267 /* vloxseg6ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6282 /* vloxseg6ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 6297 /* vloxseg6ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6311 /* vloxseg7ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6326 /* vloxseg7ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6341 /* vloxseg7ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 6356 /* vloxseg7ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6370 /* vloxseg8ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6385 /* vloxseg8ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6400 /* vloxseg8ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 6415 /* vloxseg8ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6429 /* vlse16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6438 /* vlse32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6447 /* vlse64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 6456 /* vlse8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6464 /* vlseg2e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6476 /* vlseg2e16ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6490 /* vlseg2e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6502 /* vlseg2e32ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6516 /* vlseg2e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 6528 /* vlseg2e64ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 6542 /* vlseg2e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6553 /* vlseg2e8ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6566 /* vlseg3e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6578 /* vlseg3e16ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6592 /* vlseg3e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6604 /* vlseg3e32ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6618 /* vlseg3e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 6630 /* vlseg3e64ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 6644 /* vlseg3e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6655 /* vlseg3e8ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6668 /* vlseg4e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6680 /* vlseg4e16ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6694 /* vlseg4e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6706 /* vlseg4e32ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6720 /* vlseg4e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 6732 /* vlseg4e64ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 6746 /* vlseg4e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6757 /* vlseg4e8ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6770 /* vlseg5e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6782 /* vlseg5e16ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6796 /* vlseg5e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6808 /* vlseg5e32ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6822 /* vlseg5e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 6834 /* vlseg5e64ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 6848 /* vlseg5e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6859 /* vlseg5e8ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6872 /* vlseg6e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6884 /* vlseg6e16ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6898 /* vlseg6e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6910 /* vlseg6e32ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6924 /* vlseg6e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 6936 /* vlseg6e64ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 6950 /* vlseg6e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6961 /* vlseg6e8ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6974 /* vlseg7e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 6986 /* vlseg7e16ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7000 /* vlseg7e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7012 /* vlseg7e32ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7026 /* vlseg7e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 7038 /* vlseg7e64ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 7052 /* vlseg7e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7063 /* vlseg7e8ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7076 /* vlseg8e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7088 /* vlseg8e16ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7102 /* vlseg8e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7114 /* vlseg8e32ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7128 /* vlseg8e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 7140 /* vlseg8e64ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 7154 /* vlseg8e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7165 /* vlseg8e8ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7178 /* vlsseg2e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7191 /* vlsseg2e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7204 /* vlsseg2e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 7217 /* vlsseg2e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7229 /* vlsseg3e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7242 /* vlsseg3e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7255 /* vlsseg3e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 7268 /* vlsseg3e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7280 /* vlsseg4e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7293 /* vlsseg4e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7306 /* vlsseg4e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 7319 /* vlsseg4e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7331 /* vlsseg5e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7344 /* vlsseg5e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7357 /* vlsseg5e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 7370 /* vlsseg5e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7382 /* vlsseg6e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7395 /* vlsseg6e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7408 /* vlsseg6e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 7421 /* vlsseg6e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7433 /* vlsseg7e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7446 /* vlsseg7e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7459 /* vlsseg7e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 7472 /* vlsseg7e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7484 /* vlsseg8e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7497 /* vlsseg8e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7510 /* vlsseg8e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 7523 /* vlsseg8e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7535 /* vluxei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7546 /* vluxei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7557 /* vluxei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_IsRV64_HasVInstructionsI64 },
  { 7568 /* vluxei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7578 /* vluxseg2ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7593 /* vluxseg2ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7608 /* vluxseg2ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 7623 /* vluxseg2ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7637 /* vluxseg3ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7652 /* vluxseg3ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7667 /* vluxseg3ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 7682 /* vluxseg3ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7696 /* vluxseg4ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7711 /* vluxseg4ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7726 /* vluxseg4ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 7741 /* vluxseg4ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7755 /* vluxseg5ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7770 /* vluxseg5ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7785 /* vluxseg5ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 7800 /* vluxseg5ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7814 /* vluxseg6ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7829 /* vluxseg6ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7844 /* vluxseg6ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 7859 /* vluxseg6ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7873 /* vluxseg7ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7888 /* vluxseg7ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7903 /* vluxseg7ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 7918 /* vluxseg7ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7932 /* vluxseg8ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7947 /* vluxseg8ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7962 /* vluxseg8ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 7977 /* vluxseg8ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 7991 /* vmacc.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8000 /* vmacc.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8066 /* vmadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8075 /* vmadd.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8115 /* vmax.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8123 /* vmax.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8131 /* vmaxu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8140 /* vmaxu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8190 /* vmfeq.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 8199 /* vmfeq.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 8208 /* vmfge.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 8217 /* vmfge.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 8226 /* vmfgt.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 8235 /* vmfgt.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 8244 /* vmfle.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 8253 /* vmfle.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 8262 /* vmflt.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 8271 /* vmflt.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 8280 /* vmfne.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 8289 /* vmfne.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsAnyF },
  { 8298 /* vmin.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8306 /* vmin.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8314 /* vminu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8323 /* vminu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8432 /* vmsbf.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8440 /* vmseq.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8449 /* vmseq.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8458 /* vmseq.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8475 /* vmsge.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8484 /* vmsge.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8493 /* vmsge.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8493 /* vmsge.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8502 /* vmsgeu.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8512 /* vmsgeu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8522 /* vmsgeu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8522 /* vmsgeu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8532 /* vmsgt.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8541 /* vmsgt.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8550 /* vmsgt.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8559 /* vmsgtu.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8569 /* vmsgtu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8579 /* vmsgtu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8589 /* vmsif.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8597 /* vmsle.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8606 /* vmsle.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8615 /* vmsle.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8624 /* vmsleu.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8634 /* vmsleu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8644 /* vmsleu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8654 /* vmslt.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8663 /* vmslt.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8672 /* vmslt.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8681 /* vmsltu.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8691 /* vmsltu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8701 /* vmsltu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8711 /* vmsne.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8720 /* vmsne.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8729 /* vmsne.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8738 /* vmsof.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8746 /* vmul.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8754 /* vmul.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8762 /* vmulh.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8771 /* vmulh.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8780 /* vmulhsu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8791 /* vmulhsu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8802 /* vmulhu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8812 /* vmulhu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8913 /* vnclip.wi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8923 /* vnclip.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8933 /* vnclip.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8943 /* vnclipu.wi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8954 /* vnclipu.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8965 /* vnclipu.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8976 /* vncvt.x.x.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8988 /* vneg.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 8995 /* vnmsac.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9005 /* vnmsac.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9015 /* vnmsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9025 /* vnmsub.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9035 /* vnot.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9042 /* vnsra.wi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9051 /* vnsra.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9060 /* vnsra.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9069 /* vnsrl.wi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9078 /* vnsrl.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9087 /* vnsrl.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9096 /* vor.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9103 /* vor.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9110 /* vor.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9117 /* vpopc.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9125 /* vredand.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9136 /* vredmax.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9147 /* vredmaxu.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9159 /* vredmin.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9170 /* vredminu.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9182 /* vredor.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9192 /* vredsum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9203 /* vredxor.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9214 /* vrem.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9222 /* vrem.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9230 /* vremu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9239 /* vremu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9248 /* vrgather.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9260 /* vrgather.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9272 /* vrgather.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9284 /* vrgatherei16.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9300 /* vrsub.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9309 /* vrsub.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9346 /* vsadd.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9355 /* vsadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9364 /* vsadd.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9373 /* vsaddu.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9383 /* vsaddu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9393 /* vsaddu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9428 /* vse16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9436 /* vse32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9444 /* vse64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 9452 /* vse8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9459 /* vsetivli */, 4 /* 2 */, MCK_VTypeI10, AMFBS_HasVInstructions },
  { 9475 /* vsetvli */, 4 /* 2 */, MCK_VTypeI11, AMFBS_HasVInstructions },
  { 9483 /* vsext.vf2 */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9493 /* vsext.vf4 */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9503 /* vsext.vf8 */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9513 /* vslide1down.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9528 /* vslide1up.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9541 /* vslidedown.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9555 /* vslidedown.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9569 /* vslideup.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9581 /* vslideup.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9593 /* vsll.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9601 /* vsll.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9609 /* vsll.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9623 /* vsmul.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9632 /* vsmul.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9641 /* vsoxei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9652 /* vsoxei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9663 /* vsoxei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_IsRV64_HasVInstructionsI64 },
  { 9674 /* vsoxei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9684 /* vsoxseg2ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9699 /* vsoxseg2ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9714 /* vsoxseg2ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 9729 /* vsoxseg2ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9743 /* vsoxseg3ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9758 /* vsoxseg3ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9773 /* vsoxseg3ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 9788 /* vsoxseg3ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9802 /* vsoxseg4ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9817 /* vsoxseg4ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9832 /* vsoxseg4ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 9847 /* vsoxseg4ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9861 /* vsoxseg5ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9876 /* vsoxseg5ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9891 /* vsoxseg5ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 9906 /* vsoxseg5ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9920 /* vsoxseg6ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9935 /* vsoxseg6ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9950 /* vsoxseg6ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 9965 /* vsoxseg6ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9979 /* vsoxseg7ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 9994 /* vsoxseg7ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10009 /* vsoxseg7ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 10024 /* vsoxseg7ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10038 /* vsoxseg8ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10053 /* vsoxseg8ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10068 /* vsoxseg8ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 10083 /* vsoxseg8ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10097 /* vsra.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10105 /* vsra.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10113 /* vsra.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10121 /* vsrl.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10129 /* vsrl.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10137 /* vsrl.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10145 /* vsse16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10154 /* vsse32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10163 /* vsse64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 10172 /* vsse8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10180 /* vsseg2e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10192 /* vsseg2e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10204 /* vsseg2e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 10216 /* vsseg2e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10227 /* vsseg3e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10239 /* vsseg3e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10251 /* vsseg3e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 10263 /* vsseg3e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10274 /* vsseg4e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10286 /* vsseg4e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10298 /* vsseg4e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 10310 /* vsseg4e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10321 /* vsseg5e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10333 /* vsseg5e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10345 /* vsseg5e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 10357 /* vsseg5e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10368 /* vsseg6e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10380 /* vsseg6e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10392 /* vsseg6e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 10404 /* vsseg6e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10415 /* vsseg7e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10427 /* vsseg7e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10439 /* vsseg7e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 10451 /* vsseg7e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10462 /* vsseg8e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10474 /* vsseg8e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10486 /* vsseg8e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 10498 /* vsseg8e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10509 /* vssra.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10518 /* vssra.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10527 /* vssra.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10536 /* vssrl.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10545 /* vssrl.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10554 /* vssrl.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10563 /* vssseg2e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10576 /* vssseg2e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10589 /* vssseg2e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 10602 /* vssseg2e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10614 /* vssseg3e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10627 /* vssseg3e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10640 /* vssseg3e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 10653 /* vssseg3e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10665 /* vssseg4e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10678 /* vssseg4e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10691 /* vssseg4e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 10704 /* vssseg4e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10716 /* vssseg5e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10729 /* vssseg5e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10742 /* vssseg5e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 10755 /* vssseg5e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10767 /* vssseg6e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10780 /* vssseg6e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10793 /* vssseg6e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 10806 /* vssseg6e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10818 /* vssseg7e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10831 /* vssseg7e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10844 /* vssseg7e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 10857 /* vssseg7e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10869 /* vssseg8e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10882 /* vssseg8e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10895 /* vssseg8e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64 },
  { 10908 /* vssseg8e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10920 /* vssub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10929 /* vssub.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10938 /* vssubu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10948 /* vssubu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10958 /* vsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10966 /* vsub.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10974 /* vsuxei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10985 /* vsuxei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 10996 /* vsuxei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_IsRV64_HasVInstructionsI64 },
  { 11007 /* vsuxei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11017 /* vsuxseg2ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11032 /* vsuxseg2ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11047 /* vsuxseg2ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 11062 /* vsuxseg2ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11076 /* vsuxseg3ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11091 /* vsuxseg3ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11106 /* vsuxseg3ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 11121 /* vsuxseg3ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11135 /* vsuxseg4ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11150 /* vsuxseg4ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11165 /* vsuxseg4ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 11180 /* vsuxseg4ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11194 /* vsuxseg5ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11209 /* vsuxseg5ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11224 /* vsuxseg5ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 11239 /* vsuxseg5ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11253 /* vsuxseg6ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11268 /* vsuxseg6ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11283 /* vsuxseg6ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 11298 /* vsuxseg6ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11312 /* vsuxseg7ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11327 /* vsuxseg7ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11342 /* vsuxseg7ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 11357 /* vsuxseg7ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11371 /* vsuxseg8ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11386 /* vsuxseg8ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11401 /* vsuxseg8ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructionsI64_IsRV64 },
  { 11416 /* vsuxseg8ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11430 /* vwadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11439 /* vwadd.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11448 /* vwadd.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11457 /* vwadd.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11466 /* vwaddu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11476 /* vwaddu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11486 /* vwaddu.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11496 /* vwaddu.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11506 /* vwcvt.x.x.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11518 /* vwcvtu.x.x.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11531 /* vwmacc.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11541 /* vwmacc.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11551 /* vwmaccsu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11563 /* vwmaccsu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11575 /* vwmaccu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11586 /* vwmaccu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11597 /* vwmaccus.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11609 /* vwmul.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11618 /* vwmul.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11627 /* vwmulsu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11638 /* vwmulsu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11649 /* vwmulu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11659 /* vwmulu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11669 /* vwredsum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11681 /* vwredsumu.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11694 /* vwsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11703 /* vwsub.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11712 /* vwsub.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11721 /* vwsub.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11730 /* vwsubu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11740 /* vwsubu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11750 /* vwsubu.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11760 /* vwsubu.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11770 /* vxor.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11778 /* vxor.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11786 /* vxor.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11794 /* vzext.vf2 */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11804 /* vzext.vf4 */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
  { 11814 /* vzext.vf8 */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasVInstructions },
};

OperandMatchResultTy RISCVAsmParser::
tryCustomParseOperand(OperandVector &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_BareSymbol:
    return parseBareSymbol(Operands);
  case MCK_CSRSystemRegister:
    return parseCSRSystemRegister(Operands);
  case MCK_CallSymbol:
    return parseCallSymbol(Operands);
  case MCK_GPRAsFPR:
    return parseGPRAsFPR(Operands);
  case MCK_GPRF64AsFPR:
    return parseGPRAsFPR(Operands);
  case MCK_GPRPF64AsFPR:
    return parseGPRAsFPR(Operands);
  case MCK_InsnDirectiveOpcode:
    return parseInsnDirectiveOpcode(Operands);
  case MCK_PseudoJumpSymbol:
    return parsePseudoJumpSymbol(Operands);
  case MCK_SImm21Lsb0JAL:
    return parseJALOffset(Operands);
  case MCK_TPRelAddSymbol:
    return parseOperandWithModifier(Operands);
  case MCK_RVVMaskRegOpOperand:
    return parseMaskReg(Operands);
  case MCK_ZeroOffsetMemOpOperand:
    return parseZeroOffsetMemOp(Operands);
  case MCK_VTypeI10:
    return parseVTypeI(Operands);
  case MCK_VTypeI11:
    return parseVTypeI(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

OperandMatchResultTy RISCVAsmParser::
MatchOperandParserImpl(OperandVector &Operands,
                       StringRef Mnemonic,
                       bool ParseForAllFeatures) {
  // Get the current feature set.
  const FeatureBitset &AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size() - 1;
  // Search the table.
  auto MnemonicRange =
    std::equal_range(std::begin(OperandMatchTable), std::end(OperandMatchTable),
                     Mnemonic, LessOpcodeOperand());

  if (MnemonicRange.first == MnemonicRange.second)
    return MatchOperand_NoMatch;

  for (const OperandMatchEntry *it = MnemonicRange.first,
       *ie = MnemonicRange.second; it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());

    // check if the available features match
    const FeatureBitset &RequiredFeatures = FeatureBitsets[it->RequiredFeaturesIdx];
    if (!ParseForAllFeatures && (AvailableFeatures & RequiredFeatures) != RequiredFeatures)
      continue;

    // check if the operand in question has a custom parser.
    if (!(it->OperandMask & (1 << NextOpNum)))
      continue;

    // call custom parse method to handle the operand
    OperandMatchResultTy Result = tryCustomParseOperand(Operands, it->Class);
    if (Result != MatchOperand_NoMatch)
      return Result;
  }

  // Okay, we had no match.
  return MatchOperand_NoMatch;
}

#endif // GET_MATCHER_IMPLEMENTATION


#ifdef GET_MNEMONIC_SPELL_CHECKER
#undef GET_MNEMONIC_SPELL_CHECKER

static std::string RISCVMnemonicSpellCheck(StringRef S, const FeatureBitset &FBS, unsigned VariantID) {
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

static bool RISCVCheckMnemonic(StringRef Mnemonic,
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

