/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Subtarget Enumeration Source Fragment                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM

namespace llvm {
namespace VE {
enum {
  FeatureEnableVPU = 0,
  NumSubtargetFeatures = 1
};
} // end namespace VE
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MACRO
GET_SUBTARGETINFO_MACRO(EnableVPU, false, enableVPU)
#undef GET_SUBTARGETINFO_MACRO
#endif // GET_SUBTARGETINFO_MACRO


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV VEFeatureKV[] = {
  { "vpu", "Enable the VPU", VE::FeatureEnableVPU, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#if !defined(NDEBUG) || defined(LLVM_ENABLE_DUMP)
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry VEWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // VEWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry VEWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // VEWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry VEReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // VEReadAdvanceTable

#undef DBGFIELD

static const llvm::MCSchedModel NoSchedModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  0, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  nullptr, // No Itinerary
  nullptr // No extra processor descriptor
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetSubTypeKV VESubTypeKV[] = {
 { "generic", { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
};

namespace VE_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass,
    const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID) {
  // Don't know how to resolve this scheduling class.
  return 0;
}
} // end namespace VE_MC

struct VEGenMCSubtargetInfo : public MCSubtargetInfo {
  VEGenMCSubtargetInfo(const Triple &TT,
    StringRef CPU, StringRef TuneCPU, StringRef FS,
    ArrayRef<SubtargetFeatureKV> PF,
    ArrayRef<SubtargetSubTypeKV> PD,
    const MCWriteProcResEntry *WPR,
    const MCWriteLatencyEntry *WL,
    const MCReadAdvanceEntry *RA, const InstrStage *IS,
    const unsigned *OC, const unsigned *FP) :
      MCSubtargetInfo(TT, CPU, TuneCPU, FS, PF, PD,
                      WPR, WL, RA, IS, OC, FP) { }

  unsigned resolveVariantSchedClass(unsigned SchedClass,
      const MCInst *MI, const MCInstrInfo *MCII,
      unsigned CPUID) const override {
    return VE_MC::resolveVariantSchedClassImpl(SchedClass, MI, MCII, CPUID);
  }
};

static inline MCSubtargetInfo *createVEMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef TuneCPU, StringRef FS) {
  return new VEGenMCSubtargetInfo(TT, CPU, TuneCPU, FS, VEFeatureKV, VESubTypeKV, 
                      VEWriteProcResTable, VEWriteLatencyTable, VEReadAdvanceTable, 
                      nullptr, nullptr, nullptr);
}

} // end namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::VESubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef TuneCPU, StringRef FS) {
  LLVM_DEBUG(dbgs() << "\nFeatures:" << FS);
  LLVM_DEBUG(dbgs() << "\nCPU:" << CPU);
  LLVM_DEBUG(dbgs() << "\nTuneCPU:" << TuneCPU << "\n\n");
  InitMCProcessorInfo(CPU, TuneCPU, FS);
  const FeatureBitset &Bits = getFeatureBits();
  if (Bits[VE::FeatureEnableVPU]) EnableVPU = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
namespace VE_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass, const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID);
} // end namespace VE_MC

struct VEGenSubtargetInfo : public TargetSubtargetInfo {
  explicit VEGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef TuneCPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass,  const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const override;
  unsigned resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID) const override;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};
} // end namespace llvm

#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR

#include "llvm/CodeGen/TargetSchedule.h"

namespace llvm {
extern const llvm::SubtargetFeatureKV VEFeatureKV[];
extern const llvm::SubtargetSubTypeKV VESubTypeKV[];
extern const llvm::MCWriteProcResEntry VEWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry VEWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry VEReadAdvanceTable[];
VEGenSubtargetInfo::VEGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef TuneCPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, TuneCPU, FS, makeArrayRef(VEFeatureKV, 1), makeArrayRef(VESubTypeKV, 1), 
                        VEWriteProcResTable, VEWriteLatencyTable, VEReadAdvanceTable, 
                        nullptr, nullptr, nullptr) {}

unsigned VEGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // VEGenSubtargetInfo::resolveSchedClass

unsigned VEGenSubtargetInfo
::resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID) const {
  return VE_MC::resolveVariantSchedClassImpl(SchedClass, MI, MCII, CPUID);
} // VEGenSubtargetInfo::resolveVariantSchedClass

} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR


#ifdef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS


#ifdef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS

