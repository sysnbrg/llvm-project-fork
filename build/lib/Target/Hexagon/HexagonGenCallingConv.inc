/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Calling Convention Implementation Fragment                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifndef GET_CC_REGISTER_LISTS

static bool CC_Hexagon(unsigned ValNo, MVT ValVT,
                       MVT LocVT, CCValAssign::LocInfo LocInfo,
                       ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_HexagonStack(unsigned ValNo, MVT ValVT,
                            MVT LocVT, CCValAssign::LocInfo LocInfo,
                            ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_Hexagon_HVX(unsigned ValNo, MVT ValVT,
                           MVT LocVT, CCValAssign::LocInfo LocInfo,
                           ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_Hexagon_Legacy(unsigned ValNo, MVT ValVT,
                              MVT LocVT, CCValAssign::LocInfo LocInfo,
                              ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool RetCC_Hexagon(unsigned ValNo, MVT ValVT,
                          MVT LocVT, CCValAssign::LocInfo LocInfo,
                          ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool RetCC_Hexagon_HVX(unsigned ValNo, MVT ValVT,
                              MVT LocVT, CCValAssign::LocInfo LocInfo,
                              ISD::ArgFlagsTy ArgFlags, CCState &State);


static bool CC_Hexagon(unsigned ValNo, MVT ValVT,
                       MVT LocVT, CCValAssign::LocInfo LocInfo,
                       ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i1 ||
      LocVT == MVT::i8 ||
      LocVT == MVT::i16) {
    LocVT = MVT::i32;
    if (ArgFlags.isSExt())
      LocInfo = CCValAssign::SExt;
    else if (ArgFlags.isZExt())
      LocInfo = CCValAssign::ZExt;
    else
      LocInfo = CCValAssign::AExt;
  }

  if (LocVT == MVT::f32) {
    LocVT = MVT::i32;
    LocInfo = CCValAssign::BCvt;
  }

  if (LocVT == MVT::f64) {
    LocVT = MVT::i64;
    LocInfo = CCValAssign::BCvt;
  }

  if (ArgFlags.isByVal()) {
    State.HandleByVal(ValNo, ValVT, LocVT, LocInfo, 8, Align(1), ArgFlags);
    return false;
  }

  if (State.isVarArg() && ValNo >= static_cast<HexagonCCState&>(State).getNumNamedVarArgParams()) {
    if (!CC_HexagonStack(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (LocVT == MVT::i32) {
    if (ArgFlags.isSplit()) {
      if (CC_SkipOdd(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
        return false;
    }
  }

  if (LocVT == MVT::i32 ||
      LocVT == MVT::v2i16 ||
      LocVT == MVT::v4i8) {
    static const MCPhysReg RegList1[] = {
      Hexagon::R0, Hexagon::R1, Hexagon::R2, Hexagon::R3, Hexagon::R4, Hexagon::R5
    };
    if (unsigned Reg = State.AllocateReg(RegList1)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i64 ||
      LocVT == MVT::v2i32 ||
      LocVT == MVT::v4i16 ||
      LocVT == MVT::v8i8) {
    if (CC_SkipOdd(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (LocVT == MVT::i64 ||
      LocVT == MVT::v2i32 ||
      LocVT == MVT::v4i16 ||
      LocVT == MVT::v8i8) {
    static const MCPhysReg RegList2[] = {
      Hexagon::D0, Hexagon::D1, Hexagon::D2
    };
    if (unsigned Reg = State.AllocateReg(RegList2)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (!CC_HexagonStack(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true; // CC didn't match.
}


static bool CC_HexagonStack(unsigned ValNo, MVT ValVT,
                            MVT LocVT, CCValAssign::LocInfo LocInfo,
                            ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i32 ||
      LocVT == MVT::v2i16 ||
      LocVT == MVT::v4i8) {
    unsigned Offset1 = State.AllocateStack(4, Align(4));
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset1, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::i64 ||
      LocVT == MVT::v2i32 ||
      LocVT == MVT::v4i16 ||
      LocVT == MVT::v8i8) {
    unsigned Offset2 = State.AllocateStack(8, Align(8));
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset2, LocVT, LocInfo));
    return false;
  }

  return true; // CC didn't match.
}


static bool CC_Hexagon_HVX(unsigned ValNo, MVT ValVT,
                           MVT LocVT, CCValAssign::LocInfo LocInfo,
                           ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (State.getMachineFunction().getSubtarget<HexagonSubtarget>().useHVX64BOps()) {
    if (LocVT == MVT::v16i32 ||
        LocVT == MVT::v32i16 ||
        LocVT == MVT::v64i8) {
      static const MCPhysReg RegList1[] = {
        Hexagon::V0, Hexagon::V1, Hexagon::V2, Hexagon::V3, Hexagon::V4, Hexagon::V5, Hexagon::V6, Hexagon::V7, Hexagon::V8, Hexagon::V9, Hexagon::V10, Hexagon::V11, Hexagon::V12, Hexagon::V13, Hexagon::V14, Hexagon::V15
      };
      if (unsigned Reg = State.AllocateReg(RegList1)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (State.getMachineFunction().getSubtarget<HexagonSubtarget>().useHVX64BOps()) {
    if (LocVT == MVT::v32i32 ||
        LocVT == MVT::v64i16 ||
        LocVT == MVT::v128i8) {
      static const MCPhysReg RegList2[] = {
        Hexagon::W0, Hexagon::W1, Hexagon::W2, Hexagon::W3, Hexagon::W4, Hexagon::W5, Hexagon::W6, Hexagon::W7
      };
      if (unsigned Reg = State.AllocateReg(RegList2)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (State.getMachineFunction().getSubtarget<HexagonSubtarget>().useHVX64BOps()) {
    if (LocVT == MVT::v16i32 ||
        LocVT == MVT::v32i16 ||
        LocVT == MVT::v64i8) {
      unsigned Offset3 = State.AllocateStack(64, Align(64));
      State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset3, LocVT, LocInfo));
      return false;
    }
  }

  if (State.getMachineFunction().getSubtarget<HexagonSubtarget>().useHVX64BOps()) {
    if (LocVT == MVT::v32i32 ||
        LocVT == MVT::v64i16 ||
        LocVT == MVT::v128i8) {
      unsigned Offset4 = State.AllocateStack(128, Align(64));
      State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset4, LocVT, LocInfo));
      return false;
    }
  }

  if (State.getMachineFunction().getSubtarget<HexagonSubtarget>().useHVX128BOps()) {
    if (LocVT == MVT::v32i32 ||
        LocVT == MVT::v64i16 ||
        LocVT == MVT::v128i8 ||
        LocVT == MVT::v32f32 ||
        LocVT == MVT::v64f16) {
      static const MCPhysReg RegList5[] = {
        Hexagon::V0, Hexagon::V1, Hexagon::V2, Hexagon::V3, Hexagon::V4, Hexagon::V5, Hexagon::V6, Hexagon::V7, Hexagon::V8, Hexagon::V9, Hexagon::V10, Hexagon::V11, Hexagon::V12, Hexagon::V13, Hexagon::V14, Hexagon::V15
      };
      if (unsigned Reg = State.AllocateReg(RegList5)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (State.getMachineFunction().getSubtarget<HexagonSubtarget>().useHVX128BOps()) {
    if (LocVT == MVT::v64i32 ||
        LocVT == MVT::v128i16 ||
        LocVT == MVT::v256i8 ||
        LocVT == MVT::v64f32 ||
        LocVT == MVT::v128f16) {
      static const MCPhysReg RegList6[] = {
        Hexagon::W0, Hexagon::W1, Hexagon::W2, Hexagon::W3, Hexagon::W4, Hexagon::W5, Hexagon::W6, Hexagon::W7
      };
      if (unsigned Reg = State.AllocateReg(RegList6)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (State.getMachineFunction().getSubtarget<HexagonSubtarget>().useHVX128BOps()) {
    if (LocVT == MVT::v32i32 ||
        LocVT == MVT::v64i16 ||
        LocVT == MVT::v128i8 ||
        LocVT == MVT::v32f32 ||
        LocVT == MVT::v64f16) {
      unsigned Offset7 = State.AllocateStack(128, Align(128));
      State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset7, LocVT, LocInfo));
      return false;
    }
  }

  if (State.getMachineFunction().getSubtarget<HexagonSubtarget>().useHVX128BOps()) {
    if (LocVT == MVT::v64i32 ||
        LocVT == MVT::v128i16 ||
        LocVT == MVT::v256i8 ||
        LocVT == MVT::v64f32 ||
        LocVT == MVT::v128f16) {
      unsigned Offset8 = State.AllocateStack(256, Align(128));
      State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset8, LocVT, LocInfo));
      return false;
    }
  }

  if (!CC_Hexagon(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true; // CC didn't match.
}


static bool CC_Hexagon_Legacy(unsigned ValNo, MVT ValVT,
                              MVT LocVT, CCValAssign::LocInfo LocInfo,
                              ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i1 ||
      LocVT == MVT::i8 ||
      LocVT == MVT::i16) {
    LocVT = MVT::i32;
    if (ArgFlags.isSExt())
      LocInfo = CCValAssign::SExt;
    else if (ArgFlags.isZExt())
      LocInfo = CCValAssign::ZExt;
    else
      LocInfo = CCValAssign::AExt;
  }

  if (LocVT == MVT::f32) {
    LocVT = MVT::i32;
    LocInfo = CCValAssign::BCvt;
  }

  if (LocVT == MVT::f64) {
    LocVT = MVT::i64;
    LocInfo = CCValAssign::BCvt;
  }

  if (ArgFlags.isByVal()) {
    State.HandleByVal(ValNo, ValVT, LocVT, LocInfo, 8, Align(8), ArgFlags);
    return false;
  }

  if (State.isVarArg() && ValNo >= static_cast<HexagonCCState&>(State).getNumNamedVarArgParams()) {
    if (!CC_HexagonStack(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (LocVT == MVT::i32) {
    if (ArgFlags.isSplit()) {
      if (CC_SkipOdd(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
        return false;
    }
  }

  if (LocVT == MVT::i32 ||
      LocVT == MVT::v2i16 ||
      LocVT == MVT::v4i8) {
    static const MCPhysReg RegList1[] = {
      Hexagon::R0, Hexagon::R1, Hexagon::R2, Hexagon::R3, Hexagon::R4, Hexagon::R5
    };
    if (unsigned Reg = State.AllocateReg(RegList1)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i64 ||
      LocVT == MVT::v2i32 ||
      LocVT == MVT::v4i16 ||
      LocVT == MVT::v8i8) {
    if (CC_SkipOdd(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (LocVT == MVT::i64 ||
      LocVT == MVT::v2i32 ||
      LocVT == MVT::v4i16 ||
      LocVT == MVT::v8i8) {
    static const MCPhysReg RegList2[] = {
      Hexagon::D0, Hexagon::D1, Hexagon::D2
    };
    if (unsigned Reg = State.AllocateReg(RegList2)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (!CC_HexagonStack(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true; // CC didn't match.
}


static bool RetCC_Hexagon(unsigned ValNo, MVT ValVT,
                          MVT LocVT, CCValAssign::LocInfo LocInfo,
                          ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i1 ||
      LocVT == MVT::i8 ||
      LocVT == MVT::i16) {
    LocVT = MVT::i32;
    if (ArgFlags.isSExt())
      LocInfo = CCValAssign::SExt;
    else if (ArgFlags.isZExt())
      LocInfo = CCValAssign::ZExt;
    else
      LocInfo = CCValAssign::AExt;
  }

  if (LocVT == MVT::f32) {
    LocVT = MVT::i32;
    LocInfo = CCValAssign::BCvt;
  }

  if (LocVT == MVT::f64) {
    LocVT = MVT::i64;
    LocInfo = CCValAssign::BCvt;
  }

  if (ArgFlags.isSplit()) {
    static const MCPhysReg RegList1[] = {
      Hexagon::R0, Hexagon::R1
    };
    if (unsigned Reg = State.AllocateReg(RegList1)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i32 ||
      LocVT == MVT::v2i16 ||
      LocVT == MVT::v4i8) {
    static const MCPhysReg RegList2[] = {
      Hexagon::R0, Hexagon::R1
    };
    if (unsigned Reg = State.AllocateReg(RegList2)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i64 ||
      LocVT == MVT::v2i32 ||
      LocVT == MVT::v4i16 ||
      LocVT == MVT::v8i8) {
    if (unsigned Reg = State.AllocateReg(Hexagon::D0)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  return true; // CC didn't match.
}


static bool RetCC_Hexagon_HVX(unsigned ValNo, MVT ValVT,
                              MVT LocVT, CCValAssign::LocInfo LocInfo,
                              ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (State.getMachineFunction().getSubtarget<HexagonSubtarget>().useHVX64BOps()) {
    if (LocVT == MVT::v16i32 ||
        LocVT == MVT::v32i16 ||
        LocVT == MVT::v64i8) {
      if (unsigned Reg = State.AllocateReg(Hexagon::V0)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (State.getMachineFunction().getSubtarget<HexagonSubtarget>().useHVX64BOps()) {
    if (LocVT == MVT::v32i32 ||
        LocVT == MVT::v64i16 ||
        LocVT == MVT::v128i8) {
      if (unsigned Reg = State.AllocateReg(Hexagon::W0)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (State.getMachineFunction().getSubtarget<HexagonSubtarget>().useHVX128BOps()) {
    if (LocVT == MVT::v32i32 ||
        LocVT == MVT::v64i16 ||
        LocVT == MVT::v128i8 ||
        LocVT == MVT::v32f32 ||
        LocVT == MVT::v64f16) {
      if (unsigned Reg = State.AllocateReg(Hexagon::V0)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (State.getMachineFunction().getSubtarget<HexagonSubtarget>().useHVX128BOps()) {
    if (LocVT == MVT::v64i32 ||
        LocVT == MVT::v128i16 ||
        LocVT == MVT::v256i8 ||
        LocVT == MVT::v64f32 ||
        LocVT == MVT::v128f16) {
      if (unsigned Reg = State.AllocateReg(Hexagon::W0)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (!RetCC_Hexagon(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true; // CC didn't match.
}

#else

const MCRegister CC_Hexagon_ArgRegs[] = { Hexagon::D0, Hexagon::D1, Hexagon::D2, Hexagon::R0, Hexagon::R1, Hexagon::R2, Hexagon::R3, Hexagon::R4, Hexagon::R5 };
const MCRegister CC_HexagonStack_ArgRegs[] = { 0 };
const MCRegister CC_Hexagon_HVX_ArgRegs[] = { Hexagon::V0, Hexagon::V1, Hexagon::V10, Hexagon::V11, Hexagon::V12, Hexagon::V13, Hexagon::V14, Hexagon::V15, Hexagon::V2, Hexagon::V3, Hexagon::V4, Hexagon::V5, Hexagon::V6, Hexagon::V7, Hexagon::V8, Hexagon::V9, Hexagon::W0, Hexagon::W1, Hexagon::W2, Hexagon::W3, Hexagon::W4, Hexagon::W5, Hexagon::W6, Hexagon::W7 };
const MCRegister CC_Hexagon_Legacy_ArgRegs[] = { Hexagon::D0, Hexagon::D1, Hexagon::D2, Hexagon::R0, Hexagon::R1, Hexagon::R2, Hexagon::R3, Hexagon::R4, Hexagon::R5 };
const MCRegister RetCC_Hexagon_ArgRegs[] = { Hexagon::D0, Hexagon::R0, Hexagon::R1 };
const MCRegister RetCC_Hexagon_HVX_ArgRegs[] = { Hexagon::V0, Hexagon::W0 };

#endif // CC_REGISTER_LIST
