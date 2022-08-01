/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Calling Convention Implementation Fragment                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifndef GET_CC_REGISTER_LISTS

static bool ArgCC_AVR_Vararg(unsigned ValNo, MVT ValVT,
                             MVT LocVT, CCValAssign::LocInfo LocInfo,
                             ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool RetCC_AVR_BUILTIN(unsigned ValNo, MVT ValVT,
                              MVT LocVT, CCValAssign::LocInfo LocInfo,
                              ISD::ArgFlagsTy ArgFlags, CCState &State);


static bool ArgCC_AVR_Vararg(unsigned ValNo, MVT ValVT,
                             MVT LocVT, CCValAssign::LocInfo LocInfo,
                             ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i8) {
    unsigned Offset1 = State.AllocateStack(1, Align(1));
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset1, LocVT, LocInfo));
    return false;
  }

  unsigned Offset2 = State.AllocateStack(2, Align(1));
  State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset2, LocVT, LocInfo));
  return false;

  return true; // CC didn't match.
}


static bool RetCC_AVR_BUILTIN(unsigned ValNo, MVT ValVT,
                              MVT LocVT, CCValAssign::LocInfo LocInfo,
                              ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i8) {
    static const MCPhysReg RegList1[] = {
      AVR::R24, AVR::R25
    };
    if (unsigned Reg = State.AllocateReg(RegList1)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i16) {
    static const MCPhysReg RegList2[] = {
      AVR::R23R22, AVR::R25R24
    };
    if (unsigned Reg = State.AllocateReg(RegList2)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  return true; // CC didn't match.
}

#else

const MCRegister ArgCC_AVR_Vararg_ArgRegs[] = { 0 };
const MCRegister RetCC_AVR_BUILTIN_ArgRegs[] = { AVR::R23R22, AVR::R24, AVR::R25, AVR::R25R24 };

#endif // CC_REGISTER_LIST
