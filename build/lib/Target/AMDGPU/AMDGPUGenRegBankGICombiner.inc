/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Global Combiner                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef AMDGPUREGBANKCOMBINERHELPER_GENCOMBINERHELPER_DEPS
#include "llvm/ADT/SparseBitVector.h"
namespace llvm {
extern cl::OptionCategory GICombinerOptionCategory;
} // end namespace llvm
#endif // ifdef AMDGPUREGBANKCOMBINERHELPER_GENCOMBINERHELPER_DEPS

#ifdef AMDGPUREGBANKCOMBINERHELPER_GENCOMBINERHELPER_H
class AMDGPUGenRegBankCombinerHelperRuleConfig {
  SparseBitVector<> DisabledRules;

public:
  bool parseCommandLineOption();
  bool isRuleDisabled(unsigned ID) const;
  bool setRuleEnabled(StringRef RuleIdentifier);
  bool setRuleDisabled(StringRef RuleIdentifier);
};

class AMDGPUGenRegBankCombinerHelper : public AMDGPURegBankCombinerHelperState {
  const AMDGPUGenRegBankCombinerHelperRuleConfig *RuleConfig;

public:
  template <typename... Args>AMDGPUGenRegBankCombinerHelper(const AMDGPUGenRegBankCombinerHelperRuleConfig &RuleConfig, Args &&... args) : AMDGPURegBankCombinerHelperState(std::forward<Args>(args)...), RuleConfig(&RuleConfig) {}

  bool tryCombineAll(
    GISelChangeObserver &Observer,
    MachineInstr &MI,
    MachineIRBuilder &B) const;
};

static Optional<uint64_t> getRuleIdxForIdentifier(StringRef RuleIdentifier) {
  uint64_t I;
  // getAtInteger(...) returns false on success
  bool Parsed = !RuleIdentifier.getAsInteger(0, I);
  if (Parsed)
    return I;

#ifndef NDEBUG
  switch (RuleIdentifier.size()) {
  default: break;
  case 15:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "zext_trunc_fold", 15) != 0)
      break;
    return 0;	 // "zext_trunc_fold"
  case 17:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "fp_minmax_to_med3", 17) != 0)
      break;
    return 4;	 // "fp_minmax_to_med3"
  case 18:	 // 2 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "p_minmax_to_clamp", 17) != 0)
        break;
      return 3;	 // "fp_minmax_to_clamp"
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nt_minmax_to_med3", 17) != 0)
        break;
      return 1;	 // "int_minmax_to_med3"
    }
    break;
  case 19:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "ptr_add_immed_chain", 19) != 0)
      break;
    return 2;	 // "ptr_add_immed_chain"
  case 24:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "fmed3_intrinsic_to_clamp", 24) != 0)
      break;
    return 5;	 // "fmed3_intrinsic_to_clamp"
  }
#endif // ifndef NDEBUG

  return None;
}
static Optional<std::pair<uint64_t, uint64_t>> getRuleRangeForIdentifier(StringRef RuleIdentifier) {
  std::pair<StringRef, StringRef> RangePair = RuleIdentifier.split('-');
  if (!RangePair.second.empty()) {
    const auto First = getRuleIdxForIdentifier(RangePair.first);
    const auto Last = getRuleIdxForIdentifier(RangePair.second);
    if (!First || !Last)
      return None;
    if (First >= Last)
      report_fatal_error("Beginning of range should be before end of range");
    return {{*First, *Last + 1}};
  }
  if (RangePair.first == "*") {
    return {{0, 6}};
  }
  const auto I = getRuleIdxForIdentifier(RangePair.first);
  if (!I)
    return None;
  return {{*I, *I + 1}};
}

bool AMDGPUGenRegBankCombinerHelperRuleConfig::setRuleEnabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange)
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.reset(I);
  return true;
}

bool AMDGPUGenRegBankCombinerHelperRuleConfig::setRuleDisabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange)
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.set(I);
  return true;
}

bool AMDGPUGenRegBankCombinerHelperRuleConfig::isRuleDisabled(unsigned RuleID) const {
  return DisabledRules.test(RuleID);
}
#endif // ifdef AMDGPUREGBANKCOMBINERHELPER_GENCOMBINERHELPER_H

#ifdef AMDGPUREGBANKCOMBINERHELPER_GENCOMBINERHELPER_CPP

std::vector<std::string> AMDGPURegBankCombinerHelperOption;
cl::list<std::string> AMDGPURegBankCombinerHelperDisableOption(
    "amdgpuregbankcombinerhelper-disable-rule",
    cl::desc("Disable one or more combiner rules temporarily in the AMDGPURegBankCombinerHelper pass"),
    cl::CommaSeparated,
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &Str) {
      AMDGPURegBankCombinerHelperOption.push_back(Str);
    }));
cl::list<std::string> AMDGPURegBankCombinerHelperOnlyEnableOption(
    "amdgpuregbankcombinerhelper-only-enable-rule",
    cl::desc("Disable all rules in the AMDGPURegBankCombinerHelper pass then re-enable the specified ones"),
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &CommaSeparatedArg) {
      StringRef Str = CommaSeparatedArg;
      AMDGPURegBankCombinerHelperOption.push_back("*");
      do {
        auto X = Str.split(",");
        AMDGPURegBankCombinerHelperOption.push_back(("!" + X.first).str());
        Str = X.second;
      } while (!Str.empty());
    }));

bool AMDGPUGenRegBankCombinerHelperRuleConfig::parseCommandLineOption() {
  for (StringRef Identifier : AMDGPURegBankCombinerHelperOption) {
    bool Enabled = Identifier.consume_front("!");
    if (Enabled && !setRuleEnabled(Identifier))
      return false;
    if (!Enabled && !setRuleDisabled(Identifier))
      return false;
  }
  return true;
}

bool AMDGPUGenRegBankCombinerHelper::tryCombineAll(
    GISelChangeObserver &Observer,
    MachineInstr &MI,
    MachineIRBuilder &B) const {
  MachineBasicBlock *MBB = MI.getParent();
  MachineFunction *MF = MBB->getParent();
  MachineRegisterInfo &MRI = MF->getRegInfo();
  SmallVector<MachineInstr *, 8> MIs = {&MI};

  (void)MBB; (void)MF; (void)MRI; (void)RuleConfig;

  // Match data
  Register MatchData0;
  AMDGPURegBankCombinerHelper::Med3MatchInfo MatchData1;
  PtrAddChain MatchData2;
  Register MatchData3;
  AMDGPURegBankCombinerHelper::Med3MatchInfo MatchData4;
  Register MatchData5;

  int Partition = -1;
  Partition = -1;
  switch (MIs[0]->getOpcode()) {
  case TargetOpcode::G_ZEXT: Partition = 0; break;
  case TargetOpcode::G_SMAX: Partition = 1; break;
  case TargetOpcode::G_SMIN: Partition = 2; break;
  case TargetOpcode::G_UMAX: Partition = 3; break;
  case TargetOpcode::G_UMIN: Partition = 4; break;
  case TargetOpcode::G_PTR_ADD: Partition = 5; break;
  case TargetOpcode::G_FMAXNUM: Partition = 6; break;
  case TargetOpcode::G_FMINNUM: Partition = 7; break;
  case TargetOpcode::G_FMAXNUM_IEEE: Partition = 8; break;
  case TargetOpcode::G_FMINNUM_IEEE: Partition = 9; break;
  case TargetOpcode::G_INTRINSIC: Partition = 10; break;
  }
  // Default case but without conflicting with potential default case in selection.
  if (Partition == -1) return false;
  if (Partition == 0 /* TargetOpcode::G_ZEXT */) {
    // Leaf name: zext_trunc_fold
    // Rule: zext_trunc_fold
    if (!RuleConfig->isRuleDisabled(0)) {
      if (1
          && [&]() {
           return Helper.matchCombineZextTrunc(*MIs[0], MatchData0); 
          return true;
      }()) {
        return Helper.replaceSingleDefInstWithReg(*MIs[0], MatchData0); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 1 /* TargetOpcode::G_SMAX */) {
    // Leaf name: int_minmax_to_med3
    // Rule: int_minmax_to_med3
    if (!RuleConfig->isRuleDisabled(1)) {
      if (1
          && [&]() {
           return RegBankHelper.matchIntMinMaxToMed3(*MIs[0], MatchData1); 
          return true;
      }()) {
        RegBankHelper.applyMed3(*MIs[0], MatchData1); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 2 /* TargetOpcode::G_SMIN */) {
    // Leaf name: int_minmax_to_med3
    // Rule: int_minmax_to_med3
    if (!RuleConfig->isRuleDisabled(1)) {
      if (1
          && [&]() {
           return RegBankHelper.matchIntMinMaxToMed3(*MIs[0], MatchData1); 
          return true;
      }()) {
        RegBankHelper.applyMed3(*MIs[0], MatchData1); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 3 /* TargetOpcode::G_UMAX */) {
    // Leaf name: int_minmax_to_med3
    // Rule: int_minmax_to_med3
    if (!RuleConfig->isRuleDisabled(1)) {
      if (1
          && [&]() {
           return RegBankHelper.matchIntMinMaxToMed3(*MIs[0], MatchData1); 
          return true;
      }()) {
        RegBankHelper.applyMed3(*MIs[0], MatchData1); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 4 /* TargetOpcode::G_UMIN */) {
    // Leaf name: int_minmax_to_med3
    // Rule: int_minmax_to_med3
    if (!RuleConfig->isRuleDisabled(1)) {
      if (1
          && [&]() {
           return RegBankHelper.matchIntMinMaxToMed3(*MIs[0], MatchData1); 
          return true;
      }()) {
        RegBankHelper.applyMed3(*MIs[0], MatchData1); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 5 /* TargetOpcode::G_PTR_ADD */) {
    // Leaf name: ptr_add_immed_chain
    // Rule: ptr_add_immed_chain
    if (!RuleConfig->isRuleDisabled(2)) {
      if (1
          && [&]() {
           return Helper.matchPtrAddImmedChain(*MIs[0], MatchData2); 
          return true;
      }()) {
        Helper.applyPtrAddImmedChain(*MIs[0], MatchData2); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 6 /* TargetOpcode::G_FMAXNUM */) {
    // Leaf name: fp_minmax_to_clamp
    // Rule: fp_minmax_to_clamp
    if (!RuleConfig->isRuleDisabled(3)) {
      if (1
          && [&]() {
           return RegBankHelper.matchFPMinMaxToClamp(*MIs[0], MatchData3); 
          return true;
      }()) {
        RegBankHelper.applyClamp(*MIs[0], MatchData3); 
        return true;
      }
    }
    // Leaf name: fp_minmax_to_med3
    // Rule: fp_minmax_to_med3
    if (!RuleConfig->isRuleDisabled(4)) {
      if (1
          && [&]() {
           return RegBankHelper.matchFPMinMaxToMed3(*MIs[0], MatchData4); 
          return true;
      }()) {
        RegBankHelper.applyMed3(*MIs[0], MatchData4); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 7 /* TargetOpcode::G_FMINNUM */) {
    // Leaf name: fp_minmax_to_clamp
    // Rule: fp_minmax_to_clamp
    if (!RuleConfig->isRuleDisabled(3)) {
      if (1
          && [&]() {
           return RegBankHelper.matchFPMinMaxToClamp(*MIs[0], MatchData3); 
          return true;
      }()) {
        RegBankHelper.applyClamp(*MIs[0], MatchData3); 
        return true;
      }
    }
    // Leaf name: fp_minmax_to_med3
    // Rule: fp_minmax_to_med3
    if (!RuleConfig->isRuleDisabled(4)) {
      if (1
          && [&]() {
           return RegBankHelper.matchFPMinMaxToMed3(*MIs[0], MatchData4); 
          return true;
      }()) {
        RegBankHelper.applyMed3(*MIs[0], MatchData4); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 8 /* TargetOpcode::G_FMAXNUM_IEEE */) {
    // Leaf name: fp_minmax_to_clamp
    // Rule: fp_minmax_to_clamp
    if (!RuleConfig->isRuleDisabled(3)) {
      if (1
          && [&]() {
           return RegBankHelper.matchFPMinMaxToClamp(*MIs[0], MatchData3); 
          return true;
      }()) {
        RegBankHelper.applyClamp(*MIs[0], MatchData3); 
        return true;
      }
    }
    // Leaf name: fp_minmax_to_med3
    // Rule: fp_minmax_to_med3
    if (!RuleConfig->isRuleDisabled(4)) {
      if (1
          && [&]() {
           return RegBankHelper.matchFPMinMaxToMed3(*MIs[0], MatchData4); 
          return true;
      }()) {
        RegBankHelper.applyMed3(*MIs[0], MatchData4); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 9 /* TargetOpcode::G_FMINNUM_IEEE */) {
    // Leaf name: fp_minmax_to_clamp
    // Rule: fp_minmax_to_clamp
    if (!RuleConfig->isRuleDisabled(3)) {
      if (1
          && [&]() {
           return RegBankHelper.matchFPMinMaxToClamp(*MIs[0], MatchData3); 
          return true;
      }()) {
        RegBankHelper.applyClamp(*MIs[0], MatchData3); 
        return true;
      }
    }
    // Leaf name: fp_minmax_to_med3
    // Rule: fp_minmax_to_med3
    if (!RuleConfig->isRuleDisabled(4)) {
      if (1
          && [&]() {
           return RegBankHelper.matchFPMinMaxToMed3(*MIs[0], MatchData4); 
          return true;
      }()) {
        RegBankHelper.applyMed3(*MIs[0], MatchData4); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 10 /* TargetOpcode::G_INTRINSIC */) {
    // Leaf name: fmed3_intrinsic_to_clamp
    // Rule: fmed3_intrinsic_to_clamp
    if (!RuleConfig->isRuleDisabled(5)) {
      if (1
          && [&]() {
           return RegBankHelper.matchFPMed3ToClamp(*MIs[0], MatchData5); 
          return true;
      }()) {
        RegBankHelper.applyClamp(*MIs[0], MatchData5); 
        return true;
      }
    }
    return false;
  }

  return false;
}
#endif // ifdef AMDGPUREGBANKCOMBINERHELPER_GENCOMBINERHELPER_CPP
