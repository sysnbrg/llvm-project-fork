/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Calling Convention Implementation Fragment                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifndef GET_CC_REGISTER_LISTS

static bool CC_SystemZ(unsigned ValNo, MVT ValVT,
                       MVT LocVT, CCValAssign::LocInfo LocInfo,
                       ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_SystemZ_ELF(unsigned ValNo, MVT ValVT,
                           MVT LocVT, CCValAssign::LocInfo LocInfo,
                           ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_SystemZ_GHC(unsigned ValNo, MVT ValVT,
                           MVT LocVT, CCValAssign::LocInfo LocInfo,
                           ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_SystemZ_XPLINK64(unsigned ValNo, MVT ValVT,
                                MVT LocVT, CCValAssign::LocInfo LocInfo,
                                ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool RetCC_SystemZ(unsigned ValNo, MVT ValVT,
                          MVT LocVT, CCValAssign::LocInfo LocInfo,
                          ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool RetCC_SystemZ_ELF(unsigned ValNo, MVT ValVT,
                              MVT LocVT, CCValAssign::LocInfo LocInfo,
                              ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool RetCC_SystemZ_XPLINK64(unsigned ValNo, MVT ValVT,
                                   MVT LocVT, CCValAssign::LocInfo LocInfo,
                                   ISD::ArgFlagsTy ArgFlags, CCState &State);


static bool CC_SystemZ(unsigned ValNo, MVT ValVT,
                       MVT LocVT, CCValAssign::LocInfo LocInfo,
                       ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (static_cast<const SystemZSubtarget&>(State.getMachineFunction().getSubtarget()).isTargetXPLINK64()) {
    if (!CC_SystemZ_XPLINK64(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (static_cast<const SystemZSubtarget&>(State.getMachineFunction().getSubtarget()).isTargetELF()) {
    if (!CC_SystemZ_ELF(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  return true; // CC didn't match.
}


static bool CC_SystemZ_ELF(unsigned ValNo, MVT ValVT,
                           MVT LocVT, CCValAssign::LocInfo LocInfo,
                           ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (State.getCallingConv() == CallingConv::GHC) {
    if (!CC_SystemZ_GHC(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (LocVT == MVT::i32) {
    if (ArgFlags.isSExt() || ArgFlags.isZExt()) {
      LocVT = MVT::i64;
      if (ArgFlags.isSExt())
        LocInfo = CCValAssign::SExt;
      else if (ArgFlags.isZExt())
        LocInfo = CCValAssign::ZExt;
      else
        LocInfo = CCValAssign::AExt;
    }
  }

  if (ArgFlags.isSwiftSelf()) {
    if (LocVT == MVT::i64) {
      if (unsigned Reg = State.AllocateReg(SystemZ::R10D)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (ArgFlags.isSwiftError()) {
    if (LocVT == MVT::i64) {
      if (unsigned Reg = State.AllocateReg(SystemZ::R9D)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (LocVT == MVT::f128) {
    LocVT = MVT::i64;
    LocInfo = CCValAssign::Indirect;
  }

  if (LocVT == MVT::i64) {
    if (CC_SystemZ_I128Indirect(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (LocVT == MVT::i32) {
    static const MCPhysReg RegList1[] = {
      SystemZ::R2L, SystemZ::R3L, SystemZ::R4L, SystemZ::R5L, SystemZ::R6L
    };
    if (unsigned Reg = State.AllocateReg(RegList1)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i64) {
    static const MCPhysReg RegList2[] = {
      SystemZ::R2D, SystemZ::R3D, SystemZ::R4D, SystemZ::R5D, SystemZ::R6D
    };
    if (unsigned Reg = State.AllocateReg(RegList2)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f32) {
    static const MCPhysReg RegList3[] = {
      SystemZ::F0S, SystemZ::F2S, SystemZ::F4S, SystemZ::F6S
    };
    if (unsigned Reg = State.AllocateReg(RegList3)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f64) {
    static const MCPhysReg RegList4[] = {
      SystemZ::F0D, SystemZ::F2D, SystemZ::F4D, SystemZ::F6D
    };
    if (unsigned Reg = State.AllocateReg(RegList4)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (static_cast<const SystemZSubtarget&>(State.getMachineFunction().getSubtarget()).hasVector()) {
    if (LocVT == MVT::v16i8 ||
        LocVT == MVT::v8i16 ||
        LocVT == MVT::v4i32 ||
        LocVT == MVT::v2i64 ||
        LocVT == MVT::v4f32 ||
        LocVT == MVT::v2f64) {
      if (static_cast<SystemZCCState *>(&State)->IsFixed(ValNo)) {
        static const MCPhysReg RegList5[] = {
          SystemZ::V24, SystemZ::V26, SystemZ::V28, SystemZ::V30, SystemZ::V25, SystemZ::V27, SystemZ::V29, SystemZ::V31
        };
        if (unsigned Reg = State.AllocateReg(RegList5)) {
          State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
          return false;
        }
      }
    }
  }

  if (static_cast<const SystemZSubtarget&>(State.getMachineFunction().getSubtarget()).hasVector()) {
    if (LocVT == MVT::v16i8 ||
        LocVT == MVT::v8i16 ||
        LocVT == MVT::v4i32 ||
        LocVT == MVT::v2i64 ||
        LocVT == MVT::v4f32 ||
        LocVT == MVT::v2f64) {
      if (static_cast<SystemZCCState *>(&State)->IsShortVector(ValNo)) {
        LocVT = MVT::i64;
        LocInfo = CCValAssign::BCvt;
      }
    }
  }

  if (static_cast<const SystemZSubtarget&>(State.getMachineFunction().getSubtarget()).hasVector()) {
    if (LocVT == MVT::v16i8 ||
        LocVT == MVT::v8i16 ||
        LocVT == MVT::v4i32 ||
        LocVT == MVT::v2i64 ||
        LocVT == MVT::v4f32 ||
        LocVT == MVT::v2f64) {
      unsigned Offset6 = State.AllocateStack(16, Align(8));
      State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset6, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i32 ||
      LocVT == MVT::i64 ||
      LocVT == MVT::f32 ||
      LocVT == MVT::f64) {
    unsigned Offset7 = State.AllocateStack(8, Align(8));
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset7, LocVT, LocInfo));
    return false;
  }

  return true; // CC didn't match.
}


static bool CC_SystemZ_GHC(unsigned ValNo, MVT ValVT,
                           MVT LocVT, CCValAssign::LocInfo LocInfo,
                           ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i64) {
    static const MCPhysReg RegList1[] = {
      SystemZ::R7D, SystemZ::R8D, SystemZ::R10D, SystemZ::R11D, SystemZ::R12D, SystemZ::R13D, SystemZ::R6D, SystemZ::R2D, SystemZ::R3D, SystemZ::R4D, SystemZ::R5D, SystemZ::R9D
    };
    if (unsigned Reg = State.AllocateReg(RegList1)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f32) {
    static const MCPhysReg RegList2[] = {
      SystemZ::F8S, SystemZ::F9S, SystemZ::F10S, SystemZ::F11S, SystemZ::F0S, SystemZ::F1S
    };
    if (unsigned Reg = State.AllocateReg(RegList2)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f64) {
    static const MCPhysReg RegList3[] = {
      SystemZ::F12D, SystemZ::F13D, SystemZ::F14D, SystemZ::F15D, SystemZ::F2D, SystemZ::F3D
    };
    if (unsigned Reg = State.AllocateReg(RegList3)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (static_cast<const SystemZSubtarget&>(State.getMachineFunction().getSubtarget()).hasVector()) {
    if (LocVT == MVT::v16i8 ||
        LocVT == MVT::v8i16 ||
        LocVT == MVT::v4i32 ||
        LocVT == MVT::v2i64 ||
        LocVT == MVT::v4f32 ||
        LocVT == MVT::v2f64) {
      if (static_cast<SystemZCCState *>(&State)->IsFixed(ValNo)) {
        static const MCPhysReg RegList4[] = {
          SystemZ::V16, SystemZ::V17, SystemZ::V18, SystemZ::V19, SystemZ::V20, SystemZ::V21
        };
        if (unsigned Reg = State.AllocateReg(RegList4)) {
          State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
          return false;
        }
      }
    }
  }

  if (CC_SystemZ_GHC_Error(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true; // CC didn't match.
}


static bool CC_SystemZ_XPLINK64(unsigned ValNo, MVT ValVT,
                                MVT LocVT, CCValAssign::LocInfo LocInfo,
                                ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i32) {
    if (ArgFlags.isSExt() || ArgFlags.isZExt()) {
      LocVT = MVT::i64;
      if (ArgFlags.isSExt())
        LocInfo = CCValAssign::SExt;
      else if (ArgFlags.isZExt())
        LocInfo = CCValAssign::ZExt;
      else
        LocInfo = CCValAssign::AExt;
    }
  }

  if (LocVT == MVT::f32 ||
      LocVT == MVT::f64) {
    if (!(static_cast<SystemZCCState *>(&State)->IsFixed(ValNo))) {
      LocVT = MVT::i64;
      LocInfo = CCValAssign::BCvt;
    }
  }

  if (LocVT == MVT::f128) {
    if (!(static_cast<SystemZCCState *>(&State)->IsFixed(ValNo))) {
      if (CC_XPLINK64_Allocate128BitVararg(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
        return false;
    }
  }

  if (static_cast<const SystemZSubtarget&>(State.getMachineFunction().getSubtarget()).hasVector()) {
    if (LocVT == MVT::v16i8 ||
        LocVT == MVT::v8i16 ||
        LocVT == MVT::v4i32 ||
        LocVT == MVT::v2i64 ||
        LocVT == MVT::v4f32 ||
        LocVT == MVT::v2f64) {
      if (!(static_cast<SystemZCCState *>(&State)->IsFixed(ValNo))) {
        if (CC_XPLINK64_Allocate128BitVararg(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
          return false;
      }
    }
  }

  if (ArgFlags.isSwiftSelf()) {
    if (LocVT == MVT::i64) {
      if (unsigned Reg = State.AllocateReg(SystemZ::R10D)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (ArgFlags.isSwiftError()) {
    if (LocVT == MVT::i64) {
      if (unsigned Reg = State.AllocateReg(SystemZ::R0D)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (LocVT == MVT::i64) {
    if (CC_SystemZ_I128Indirect(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (LocVT == MVT::i64) {
    static const MCPhysReg RegList1[] = {
      SystemZ::R1D, SystemZ::R2D, SystemZ::R3D
    };
    if (unsigned Reg = State.AllocateReg(RegList1)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      (void)State.AllocateStack(8, Align(8));
      return false;
    }
  }

  if (static_cast<const SystemZSubtarget&>(State.getMachineFunction().getSubtarget()).hasVector()) {
    if (LocVT == MVT::v16i8 ||
        LocVT == MVT::v8i16 ||
        LocVT == MVT::v4i32 ||
        LocVT == MVT::v2i64 ||
        LocVT == MVT::v4f32 ||
        LocVT == MVT::v2f64) {
      if (static_cast<SystemZCCState *>(&State)->IsFixed(ValNo)) {
        if (CC_XPLINK64_Shadow_Reg(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
          return false;
      }
    }
  }

  if (static_cast<const SystemZSubtarget&>(State.getMachineFunction().getSubtarget()).hasVector()) {
    if (LocVT == MVT::v16i8 ||
        LocVT == MVT::v8i16 ||
        LocVT == MVT::v4i32 ||
        LocVT == MVT::v2i64 ||
        LocVT == MVT::v4f32 ||
        LocVT == MVT::v2f64) {
      if (static_cast<SystemZCCState *>(&State)->IsFixed(ValNo)) {
        static const MCPhysReg RegList2[] = {
          SystemZ::V24, SystemZ::V25, SystemZ::V26, SystemZ::V27, SystemZ::V28, SystemZ::V29, SystemZ::V30, SystemZ::V31
        };
        if (unsigned Reg = State.AllocateReg(RegList2)) {
          State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
          (void)State.AllocateStack(16, Align(8));
          return false;
        }
      }
    }
  }

  if (LocVT == MVT::f32 ||
      LocVT == MVT::f64) {
    if (static_cast<SystemZCCState *>(&State)->IsFixed(ValNo)) {
      if (CC_XPLINK64_Shadow_Reg(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
        return false;
    }
  }

  if (LocVT == MVT::f32) {
    if (static_cast<SystemZCCState *>(&State)->IsFixed(ValNo)) {
      static const MCPhysReg RegList3[] = {
        SystemZ::F0S, SystemZ::F2S, SystemZ::F4S, SystemZ::F6S
      };
      if (unsigned Reg = State.AllocateReg(RegList3)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        (void)State.AllocateStack(4, Align(8));
        return false;
      }
    }
  }

  if (LocVT == MVT::f64) {
    if (static_cast<SystemZCCState *>(&State)->IsFixed(ValNo)) {
      static const MCPhysReg RegList4[] = {
        SystemZ::F0D, SystemZ::F2D, SystemZ::F4D, SystemZ::F6D
      };
      if (unsigned Reg = State.AllocateReg(RegList4)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        (void)State.AllocateStack(8, Align(8));
        return false;
      }
    }
  }

  if (LocVT == MVT::f128) {
    if (static_cast<SystemZCCState *>(&State)->IsFixed(ValNo)) {
      if (CC_XPLINK64_Shadow_Reg(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
        return false;
    }
  }

  if (LocVT == MVT::f128) {
    if (static_cast<SystemZCCState *>(&State)->IsFixed(ValNo)) {
      static const MCPhysReg RegList5[] = {
        SystemZ::F0Q, SystemZ::F4Q
      };
      if (unsigned Reg = State.AllocateReg(RegList5)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        (void)State.AllocateStack(16, Align(8));
        return false;
      }
    }
  }

  if (LocVT == MVT::i32 ||
      LocVT == MVT::i64 ||
      LocVT == MVT::f32 ||
      LocVT == MVT::f64) {
    unsigned Offset6 = State.AllocateStack(8, Align(8));
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset6, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::f128) {
    unsigned Offset7 = State.AllocateStack(16, Align(8));
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset7, LocVT, LocInfo));
    return false;
  }

  if (static_cast<const SystemZSubtarget&>(State.getMachineFunction().getSubtarget()).hasVector()) {
    if (LocVT == MVT::v16i8 ||
        LocVT == MVT::v8i16 ||
        LocVT == MVT::v4i32 ||
        LocVT == MVT::v2i64 ||
        LocVT == MVT::v4f32 ||
        LocVT == MVT::v2f64) {
      unsigned Offset8 = State.AllocateStack(16, Align(8));
      State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset8, LocVT, LocInfo));
      return false;
    }
  }

  return true; // CC didn't match.
}


static bool RetCC_SystemZ(unsigned ValNo, MVT ValVT,
                          MVT LocVT, CCValAssign::LocInfo LocInfo,
                          ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (static_cast<const SystemZSubtarget&>(State.getMachineFunction().getSubtarget()).isTargetXPLINK64()) {
    if (!RetCC_SystemZ_XPLINK64(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (static_cast<const SystemZSubtarget&>(State.getMachineFunction().getSubtarget()).isTargetELF()) {
    if (!RetCC_SystemZ_ELF(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  return true; // CC didn't match.
}


static bool RetCC_SystemZ_ELF(unsigned ValNo, MVT ValVT,
                              MVT LocVT, CCValAssign::LocInfo LocInfo,
                              ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i32) {
    if (ArgFlags.isSExt() || ArgFlags.isZExt()) {
      LocVT = MVT::i64;
      if (ArgFlags.isSExt())
        LocInfo = CCValAssign::SExt;
      else if (ArgFlags.isZExt())
        LocInfo = CCValAssign::ZExt;
      else
        LocInfo = CCValAssign::AExt;
    }
  }

  if (ArgFlags.isSwiftError()) {
    if (LocVT == MVT::i64) {
      if (unsigned Reg = State.AllocateReg(SystemZ::R9D)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (LocVT == MVT::i32) {
    static const MCPhysReg RegList1[] = {
      SystemZ::R2L, SystemZ::R3L, SystemZ::R4L, SystemZ::R5L
    };
    if (unsigned Reg = State.AllocateReg(RegList1)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i64) {
    static const MCPhysReg RegList2[] = {
      SystemZ::R2D, SystemZ::R3D, SystemZ::R4D, SystemZ::R5D
    };
    if (unsigned Reg = State.AllocateReg(RegList2)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f32) {
    static const MCPhysReg RegList3[] = {
      SystemZ::F0S, SystemZ::F2S, SystemZ::F4S, SystemZ::F6S
    };
    if (unsigned Reg = State.AllocateReg(RegList3)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f64) {
    static const MCPhysReg RegList4[] = {
      SystemZ::F0D, SystemZ::F2D, SystemZ::F4D, SystemZ::F6D
    };
    if (unsigned Reg = State.AllocateReg(RegList4)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (static_cast<const SystemZSubtarget&>(State.getMachineFunction().getSubtarget()).hasVector()) {
    if (LocVT == MVT::v16i8 ||
        LocVT == MVT::v8i16 ||
        LocVT == MVT::v4i32 ||
        LocVT == MVT::v2i64 ||
        LocVT == MVT::v4f32 ||
        LocVT == MVT::v2f64) {
      static const MCPhysReg RegList5[] = {
        SystemZ::V24, SystemZ::V26, SystemZ::V28, SystemZ::V30, SystemZ::V25, SystemZ::V27, SystemZ::V29, SystemZ::V31
      };
      if (unsigned Reg = State.AllocateReg(RegList5)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  return true; // CC didn't match.
}


static bool RetCC_SystemZ_XPLINK64(unsigned ValNo, MVT ValVT,
                                   MVT LocVT, CCValAssign::LocInfo LocInfo,
                                   ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i32) {
    LocVT = MVT::i64;
    if (ArgFlags.isSExt())
      LocInfo = CCValAssign::SExt;
    else if (ArgFlags.isZExt())
      LocInfo = CCValAssign::ZExt;
    else
      LocInfo = CCValAssign::AExt;
  }

  if (LocVT == MVT::i64) {
    if (ArgFlags.isInReg()) {
      static const MCPhysReg RegList1[] = {
        SystemZ::R1D, SystemZ::R2D, SystemZ::R3D
      };
      if (unsigned Reg = State.AllocateReg(RegList1)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (LocVT == MVT::i64) {
    static const MCPhysReg RegList2[] = {
      SystemZ::R3D, SystemZ::R2D, SystemZ::R1D
    };
    if (unsigned Reg = State.AllocateReg(RegList2)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f32) {
    static const MCPhysReg RegList3[] = {
      SystemZ::F0S, SystemZ::F2S, SystemZ::F4S, SystemZ::F6S
    };
    if (unsigned Reg = State.AllocateReg(RegList3)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f64) {
    static const MCPhysReg RegList4[] = {
      SystemZ::F0D, SystemZ::F2D, SystemZ::F4D, SystemZ::F6D
    };
    if (unsigned Reg = State.AllocateReg(RegList4)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f128) {
    static const MCPhysReg RegList5[] = {
      SystemZ::F0Q, SystemZ::F4Q
    };
    if (unsigned Reg = State.AllocateReg(RegList5)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (static_cast<const SystemZSubtarget&>(State.getMachineFunction().getSubtarget()).hasVector()) {
    if (LocVT == MVT::v16i8 ||
        LocVT == MVT::v8i16 ||
        LocVT == MVT::v4i32 ||
        LocVT == MVT::v2i64 ||
        LocVT == MVT::v4f32 ||
        LocVT == MVT::v2f64) {
      static const MCPhysReg RegList6[] = {
        SystemZ::V24, SystemZ::V25, SystemZ::V26, SystemZ::V27, SystemZ::V28, SystemZ::V29, SystemZ::V30, SystemZ::V31
      };
      if (unsigned Reg = State.AllocateReg(RegList6)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  return true; // CC didn't match.
}

#else

const MCRegister CC_SystemZ_ArgRegs[] = { 0 };
const MCRegister CC_SystemZ_ELF_ArgRegs[] = { SystemZ::F0D, SystemZ::F0S, SystemZ::F2D, SystemZ::F2S, SystemZ::F4D, SystemZ::F4S, SystemZ::F6D, SystemZ::F6S, SystemZ::R2D, SystemZ::R2L, SystemZ::R3D, SystemZ::R3L, SystemZ::R4D, SystemZ::R4L, SystemZ::R5D, SystemZ::R5L, SystemZ::R6D, SystemZ::R6L, SystemZ::V24, SystemZ::V25, SystemZ::V26, SystemZ::V27, SystemZ::V28, SystemZ::V29, SystemZ::V30, SystemZ::V31 };
const MCRegister CC_SystemZ_GHC_ArgRegs[] = { SystemZ::F0S, SystemZ::F10S, SystemZ::F11S, SystemZ::F12D, SystemZ::F13D, SystemZ::F14D, SystemZ::F15D, SystemZ::F1S, SystemZ::F2D, SystemZ::F3D, SystemZ::F8S, SystemZ::F9S, SystemZ::R10D, SystemZ::R11D, SystemZ::R12D, SystemZ::R13D, SystemZ::R2D, SystemZ::R3D, SystemZ::R4D, SystemZ::R5D, SystemZ::R6D, SystemZ::R7D, SystemZ::R8D, SystemZ::R9D, SystemZ::V16, SystemZ::V17, SystemZ::V18, SystemZ::V19, SystemZ::V20, SystemZ::V21 };
const MCRegister CC_SystemZ_XPLINK64_ArgRegs[] = { SystemZ::F0D, SystemZ::F0Q, SystemZ::F0S, SystemZ::F2D, SystemZ::F2S, SystemZ::F4D, SystemZ::F4Q, SystemZ::F4S, SystemZ::F6D, SystemZ::F6S, SystemZ::R1D, SystemZ::R2D, SystemZ::R3D, SystemZ::V24, SystemZ::V25, SystemZ::V26, SystemZ::V27, SystemZ::V28, SystemZ::V29, SystemZ::V30, SystemZ::V31 };
const MCRegister RetCC_SystemZ_ArgRegs[] = { 0 };
const MCRegister RetCC_SystemZ_ELF_ArgRegs[] = { SystemZ::F0D, SystemZ::F0S, SystemZ::F2D, SystemZ::F2S, SystemZ::F4D, SystemZ::F4S, SystemZ::F6D, SystemZ::F6S, SystemZ::R2D, SystemZ::R2L, SystemZ::R3D, SystemZ::R3L, SystemZ::R4D, SystemZ::R4L, SystemZ::R5D, SystemZ::R5L, SystemZ::V24, SystemZ::V25, SystemZ::V26, SystemZ::V27, SystemZ::V28, SystemZ::V29, SystemZ::V30, SystemZ::V31 };
const MCRegister RetCC_SystemZ_XPLINK64_ArgRegs[] = { SystemZ::F0D, SystemZ::F0Q, SystemZ::F0S, SystemZ::F2D, SystemZ::F2S, SystemZ::F4D, SystemZ::F4Q, SystemZ::F4S, SystemZ::F6D, SystemZ::F6S, SystemZ::R1D, SystemZ::R2D, SystemZ::R3D, SystemZ::V24, SystemZ::V25, SystemZ::V26, SystemZ::V27, SystemZ::V28, SystemZ::V29, SystemZ::V30, SystemZ::V31 };

// Registers used by Swift.
const MCRegister CC_SystemZ_ELF_Swift_ArgRegs[] = { SystemZ::R10D, SystemZ::R9D };
const MCRegister CC_SystemZ_XPLINK64_Swift_ArgRegs[] = { SystemZ::R0D, SystemZ::R10D };
const MCRegister RetCC_SystemZ_ELF_Swift_ArgRegs[] = { SystemZ::R9D };

#endif // CC_REGISTER_LIST
