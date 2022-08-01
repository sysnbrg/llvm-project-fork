/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Calling Convention Implementation Fragment                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifndef GET_CC_REGISTER_LISTS

static bool CC_VE2(unsigned ValNo, MVT ValVT,
                   MVT LocVT, CCValAssign::LocInfo LocInfo,
                   ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_VE_C(unsigned ValNo, MVT ValVT,
                    MVT LocVT, CCValAssign::LocInfo LocInfo,
                    ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_VE_C_Stack(unsigned ValNo, MVT ValVT,
                          MVT LocVT, CCValAssign::LocInfo LocInfo,
                          ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_VE_Fast(unsigned ValNo, MVT ValVT,
                       MVT LocVT, CCValAssign::LocInfo LocInfo,
                       ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool RetCC_VE_C(unsigned ValNo, MVT ValVT,
                       MVT LocVT, CCValAssign::LocInfo LocInfo,
                       ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool RetCC_VE_Fast(unsigned ValNo, MVT ValVT,
                          MVT LocVT, CCValAssign::LocInfo LocInfo,
                          ISD::ArgFlagsTy ArgFlags, CCState &State);


static bool CC_VE2(unsigned ValNo, MVT ValVT,
                   MVT LocVT, CCValAssign::LocInfo LocInfo,
                   ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i1 ||
      LocVT == MVT::i8 ||
      LocVT == MVT::i16 ||
      LocVT == MVT::i32) {
    LocVT = MVT::i64;
    if (ArgFlags.isSExt())
      LocInfo = CCValAssign::SExt;
    else if (ArgFlags.isZExt())
      LocInfo = CCValAssign::ZExt;
    else
      LocInfo = CCValAssign::AExt;
  }

  if (LocVT == MVT::f32) {
    LocVT = MVT::i64;
    LocInfo = CCValAssign::BCvt;
  }

  if (LocVT == MVT::f128) {
    unsigned Offset1 = State.AllocateStack(16, Align(16));
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset1, LocVT, LocInfo));
    return false;
  }

  unsigned Offset2 = State.AllocateStack(
    State.getMachineFunction().getDataLayout().getTypeAllocSize(EVT(LocVT).getTypeForEVT(State.getContext())), Align(8));
  State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset2, LocVT, LocInfo));
  return false;

  return true; // CC didn't match.
}


static bool CC_VE_C(unsigned ValNo, MVT ValVT,
                    MVT LocVT, CCValAssign::LocInfo LocInfo,
                    ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i1 ||
      LocVT == MVT::i8 ||
      LocVT == MVT::i16 ||
      LocVT == MVT::i32) {
    LocVT = MVT::i64;
    if (ArgFlags.isSExt())
      LocInfo = CCValAssign::SExt;
    else if (ArgFlags.isZExt())
      LocInfo = CCValAssign::ZExt;
    else
      LocInfo = CCValAssign::AExt;
  }

  if (LocVT == MVT::f32) {
    LocVT = MVT::i64;
    LocInfo = CCValAssign::BCvt;
  }

  if (LocVT == MVT::i64 ||
      LocVT == MVT::f64) {
    static const MCPhysReg RegList1[] = {
      VE::SX0, VE::SX1, VE::SX2, VE::SX3, VE::SX4, VE::SX5, VE::SX6, VE::SX7
    };
    if (unsigned Reg = State.AllocateReg(RegList1)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f128) {
    static const MCPhysReg RegList2[] = {
      VE::Q0, VE::Q1, VE::Q2, VE::Q3
    };
    static const MCPhysReg RegList3[] = {
      VE::SX0, VE::SX1, VE::SX3, VE::SX5
    };
    if (unsigned Reg = State.AllocateReg(RegList2, RegList3)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (!CC_VE_C_Stack(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true; // CC didn't match.
}


static bool CC_VE_C_Stack(unsigned ValNo, MVT ValVT,
                          MVT LocVT, CCValAssign::LocInfo LocInfo,
                          ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::f128) {
    static const MCPhysReg ShadowRegList1[] = {
      VE::SX7
    };
    unsigned Offset2 = State.AllocateStack(16, Align(16), ShadowRegList1);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset2, LocVT, LocInfo));
    return false;
  }

  unsigned Offset3 = State.AllocateStack(
    State.getMachineFunction().getDataLayout().getTypeAllocSize(EVT(LocVT).getTypeForEVT(State.getContext())), Align(8));
  State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset3, LocVT, LocInfo));
  return false;

  return true; // CC didn't match.
}


static bool CC_VE_Fast(unsigned ValNo, MVT ValVT,
                       MVT LocVT, CCValAssign::LocInfo LocInfo,
                       ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::v256i32 ||
      LocVT == MVT::v256f32 ||
      LocVT == MVT::v256i64 ||
      LocVT == MVT::v256f64) {
    static const MCPhysReg RegList1[] = {
      VE::V0, VE::V1, VE::V2, VE::V3, VE::V4, VE::V5, VE::V6, VE::V7
    };
    if (unsigned Reg = State.AllocateReg(RegList1)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::v512i32 ||
      LocVT == MVT::v512f32) {
    static const MCPhysReg RegList2[] = {
      VE::V0, VE::V1, VE::V2, VE::V3, VE::V4, VE::V5, VE::V6, VE::V7
    };
    if (unsigned Reg = State.AllocateReg(RegList2)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::v256i1) {
    static const MCPhysReg RegList3[] = {
      VE::VM1, VE::VM2, VE::VM3, VE::VM4, VE::VM5, VE::VM6, VE::VM7
    };
    if (unsigned Reg = State.AllocateReg(RegList3)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::v512i1) {
    static const MCPhysReg RegList4[] = {
      VE::VMP1, VE::VMP2, VE::VMP3
    };
    static const MCPhysReg RegList5[] = {
      VE::VM1, VE::VM3, VE::VM5
    };
    if (unsigned Reg = State.AllocateReg(RegList4, RegList5)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (!CC_VE_C(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true; // CC didn't match.
}


static bool RetCC_VE_C(unsigned ValNo, MVT ValVT,
                       MVT LocVT, CCValAssign::LocInfo LocInfo,
                       ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i1 ||
      LocVT == MVT::i8 ||
      LocVT == MVT::i16 ||
      LocVT == MVT::i32) {
    LocVT = MVT::i64;
    if (ArgFlags.isSExt())
      LocInfo = CCValAssign::SExt;
    else if (ArgFlags.isZExt())
      LocInfo = CCValAssign::ZExt;
    else
      LocInfo = CCValAssign::AExt;
  }

  if (LocVT == MVT::f32) {
    LocVT = MVT::i64;
    LocInfo = CCValAssign::BCvt;
  }

  if (LocVT == MVT::i64 ||
      LocVT == MVT::f64) {
    static const MCPhysReg RegList1[] = {
      VE::SX0, VE::SX1, VE::SX2, VE::SX3, VE::SX4, VE::SX5, VE::SX6, VE::SX7
    };
    if (unsigned Reg = State.AllocateReg(RegList1)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f128) {
    static const MCPhysReg RegList2[] = {
      VE::Q0, VE::Q1, VE::Q2, VE::Q3
    };
    static const MCPhysReg RegList3[] = {
      VE::SX0, VE::SX1, VE::SX3, VE::SX5
    };
    if (unsigned Reg = State.AllocateReg(RegList2, RegList3)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  return true; // CC didn't match.
}


static bool RetCC_VE_Fast(unsigned ValNo, MVT ValVT,
                          MVT LocVT, CCValAssign::LocInfo LocInfo,
                          ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::v256i32 ||
      LocVT == MVT::v256f32 ||
      LocVT == MVT::v256i64 ||
      LocVT == MVT::v256f64) {
    static const MCPhysReg RegList1[] = {
      VE::V0, VE::V1, VE::V2, VE::V3, VE::V4, VE::V5, VE::V6, VE::V7
    };
    if (unsigned Reg = State.AllocateReg(RegList1)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::v512i32 ||
      LocVT == MVT::v512f32) {
    static const MCPhysReg RegList2[] = {
      VE::V0, VE::V1, VE::V2, VE::V3, VE::V4, VE::V5, VE::V6, VE::V7
    };
    if (unsigned Reg = State.AllocateReg(RegList2)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::v256i1) {
    static const MCPhysReg RegList3[] = {
      VE::VM1, VE::VM2, VE::VM3, VE::VM4, VE::VM5, VE::VM6, VE::VM7
    };
    if (unsigned Reg = State.AllocateReg(RegList3)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::v512i1) {
    static const MCPhysReg RegList4[] = {
      VE::VMP1, VE::VMP2, VE::VMP3
    };
    static const MCPhysReg RegList5[] = {
      VE::VM1, VE::VM3, VE::VM5
    };
    if (unsigned Reg = State.AllocateReg(RegList4, RegList5)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (!RetCC_VE_C(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true; // CC didn't match.
}

#else

const MCRegister CC_VE2_ArgRegs[] = { 0 };
const MCRegister CC_VE_C_ArgRegs[] = { VE::SX0, VE::SX1, VE::SX2, VE::SX3, VE::SX4, VE::SX5, VE::SX6, VE::SX7 };
const MCRegister CC_VE_C_Stack_ArgRegs[] = { 0 };
const MCRegister CC_VE_Fast_ArgRegs[] = { VE::V0, VE::V1, VE::V2, VE::V3, VE::V4, VE::V5, VE::V6, VE::V7, VE::VM1, VE::VM2, VE::VM3, VE::VM4, VE::VM5, VE::VM6, VE::VM7 };
const MCRegister RetCC_VE_C_ArgRegs[] = { VE::SX0, VE::SX1, VE::SX2, VE::SX3, VE::SX4, VE::SX5, VE::SX6, VE::SX7 };
const MCRegister RetCC_VE_Fast_ArgRegs[] = { VE::V0, VE::V1, VE::V2, VE::V3, VE::V4, VE::V5, VE::V6, VE::V7, VE::VM1, VE::VM2, VE::VM3, VE::VM4, VE::VM5, VE::VM6, VE::VM7 };

#endif // CC_REGISTER_LIST
