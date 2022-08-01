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
namespace Hexagon {
enum {
  ArchV5 = 0,
  ArchV55 = 1,
  ArchV60 = 2,
  ArchV62 = 3,
  ArchV65 = 4,
  ArchV66 = 5,
  ArchV67 = 6,
  ArchV68 = 7,
  ArchV69 = 8,
  ExtensionAudio = 9,
  ExtensionHVX = 10,
  ExtensionHVX64B = 11,
  ExtensionHVX128B = 12,
  ExtensionHVXIEEEFP = 13,
  ExtensionHVXQFloat = 14,
  ExtensionHVXV60 = 15,
  ExtensionHVXV62 = 16,
  ExtensionHVXV65 = 17,
  ExtensionHVXV66 = 18,
  ExtensionHVXV67 = 19,
  ExtensionHVXV68 = 20,
  ExtensionHVXV69 = 21,
  ExtensionZReg = 22,
  FeatureCabac = 23,
  FeatureCompound = 24,
  FeatureDuplex = 25,
  FeatureLongCalls = 26,
  FeatureMemNoShuf = 27,
  FeatureMemops = 28,
  FeatureNVJ = 29,
  FeatureNVS = 30,
  FeatureNoreturnStackElim = 31,
  FeaturePackets = 32,
  FeaturePreV65 = 33,
  FeatureReservedR19 = 34,
  FeatureSmallData = 35,
  FeatureUnsafeFP = 36,
  ProcTinyCore = 37,
  NumSubtargetFeatures = 38
};
} // end namespace Hexagon
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MACRO
GET_SUBTARGETINFO_MACRO(UseAudioOps, false, useAudioOps)
GET_SUBTARGETINFO_MACRO(UseCabac, true, useCabac)
GET_SUBTARGETINFO_MACRO(UseCompound, false, useCompound)
GET_SUBTARGETINFO_MACRO(EnableDuplex, false, enableDuplex)
GET_SUBTARGETINFO_MACRO(UseHVXIEEEFPOps, false, useHVXIEEEFPOps)
GET_SUBTARGETINFO_MACRO(UseHVX128BOps, false, useHVX128BOps)
GET_SUBTARGETINFO_MACRO(UseHVX64BOps, false, useHVX64BOps)
GET_SUBTARGETINFO_MACRO(UseHVXQFloatOps, false, useHVXQFloatOps)
GET_SUBTARGETINFO_MACRO(UseLongCalls, false, useLongCalls)
GET_SUBTARGETINFO_MACRO(HasMemNoShuf, true, hasMemNoShuf)
GET_SUBTARGETINFO_MACRO(UseMemops, false, useMemops)
GET_SUBTARGETINFO_MACRO(NoreturnStackElim, false, noreturnStackElim)
GET_SUBTARGETINFO_MACRO(UseNewValueJumps, false, useNewValueJumps)
GET_SUBTARGETINFO_MACRO(UseNewValueStores, false, useNewValueStores)
GET_SUBTARGETINFO_MACRO(UsePackets, false, usePackets)
GET_SUBTARGETINFO_MACRO(HasPreV65, false, hasPreV65)
GET_SUBTARGETINFO_MACRO(ReservedR19, false, reservedR19)
GET_SUBTARGETINFO_MACRO(UseSmallData, false, useSmallData)
GET_SUBTARGETINFO_MACRO(UseUnsafeMath, false, useUnsafeMath)
GET_SUBTARGETINFO_MACRO(UseZRegOps, false, useZRegOps)
#undef GET_SUBTARGETINFO_MACRO
#endif // GET_SUBTARGETINFO_MACRO


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV HexagonFeatureKV[] = {
  { "audio", "Hexagon Audio extension instructions", Hexagon::ExtensionAudio, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "cabac", "Emit the CABAC instruction", Hexagon::FeatureCabac, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "compound", "Use compound instructions", Hexagon::FeatureCompound, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "duplex", "Enable generation of duplex instruction", Hexagon::FeatureDuplex, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvx", "Hexagon HVX instructions", Hexagon::ExtensionHVX, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvx-ieee-fp", "Hexagon HVX IEEE floating point instructions", Hexagon::ExtensionHVXIEEEFP, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvx-length128b", "Hexagon HVX 128B instructions", Hexagon::ExtensionHVX128B, { { { 0x400ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvx-length64b", "Hexagon HVX 64B instructions", Hexagon::ExtensionHVX64B, { { { 0x400ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvx-qfloat", "Hexagon HVX QFloating point instructions", Hexagon::ExtensionHVXQFloat, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvxv60", "Hexagon HVX instructions", Hexagon::ExtensionHVXV60, { { { 0x400ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvxv62", "Hexagon HVX instructions", Hexagon::ExtensionHVXV62, { { { 0x8400ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvxv65", "Hexagon HVX instructions", Hexagon::ExtensionHVXV65, { { { 0x18400ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvxv66", "Hexagon HVX instructions", Hexagon::ExtensionHVXV66, { { { 0x438400ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvxv67", "Hexagon HVX instructions", Hexagon::ExtensionHVXV67, { { { 0x78000ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvxv68", "Hexagon HVX instructions", Hexagon::ExtensionHVXV68, { { { 0xf8000ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvxv69", "Hexagon HVX instructions", Hexagon::ExtensionHVXV69, { { { 0x1f8000ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "long-calls", "Use constant-extended calls", Hexagon::FeatureLongCalls, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "mem_noshuf", "Supports mem_noshuf feature", Hexagon::FeatureMemNoShuf, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "memops", "Use memop instructions", Hexagon::FeatureMemops, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "noreturn-stack-elim", "Eliminate stack allocation in a noreturn function when possible", Hexagon::FeatureNoreturnStackElim, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "nvj", "Support for new-value jumps", Hexagon::FeatureNVJ, { { { 0x100000000ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "nvs", "Support for new-value stores", Hexagon::FeatureNVS, { { { 0x100000000ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "packets", "Support for instruction packets", Hexagon::FeaturePackets, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "prev65", "Support features deprecated in v65", Hexagon::FeaturePreV65, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "reserved-r19", "Reserve register R19", Hexagon::FeatureReservedR19, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "small-data", "Allow GP-relative addressing of global variables", Hexagon::FeatureSmallData, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "tinycore", "Hexagon Tiny Core", Hexagon::ProcTinyCore, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "unsafe-fp", "Use unsafe FP math", Hexagon::FeatureUnsafeFP, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v5", "Enable Hexagon V5 architecture", Hexagon::ArchV5, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v55", "Enable Hexagon V55 architecture", Hexagon::ArchV55, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v60", "Enable Hexagon V60 architecture", Hexagon::ArchV60, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v62", "Enable Hexagon V62 architecture", Hexagon::ArchV62, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v65", "Enable Hexagon V65 architecture", Hexagon::ArchV65, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v66", "Enable Hexagon V66 architecture", Hexagon::ArchV66, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v67", "Enable Hexagon V67 architecture", Hexagon::ArchV67, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v68", "Enable Hexagon V68 architecture", Hexagon::ArchV68, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v69", "Enable Hexagon V69 architecture", Hexagon::ArchV69, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "zreg", "Hexagon ZReg extension instructions", Hexagon::ExtensionZReg, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#if !defined(NDEBUG) || defined(LLVM_ENABLE_DUMP)
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "HexagonItinerariesV60"
namespace HexagonItinerariesV60FU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
  const InstrStage::FuncUnits CVI_ST = 1ULL << 5;
  const InstrStage::FuncUnits CVI_XLANE = 1ULL << 6;
  const InstrStage::FuncUnits CVI_SHIFT = 1ULL << 7;
  const InstrStage::FuncUnits CVI_MPY0 = 1ULL << 8;
  const InstrStage::FuncUnits CVI_MPY1 = 1ULL << 9;
  const InstrStage::FuncUnits CVI_LD = 1ULL << 10;
  const InstrStage::FuncUnits CVI_XLSHF = 1ULL << 11;
  const InstrStage::FuncUnits CVI_MPY01 = 1ULL << 12;
  const InstrStage::FuncUnits CVI_ALL = 1ULL << 13;
  const InstrStage::FuncUnits CVI_ALL_NOMEM = 1ULL << 14;
  const InstrStage::FuncUnits CVI_ZW = 1ULL << 15;
} // end namespace HexagonItinerariesV60FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV60"
namespace HexagonItinerariesV60Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV60Bypass

// Functional units for "HexagonItinerariesV5"
namespace HexagonItinerariesV5FU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
} // end namespace HexagonItinerariesV5FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV5"
namespace HexagonItinerariesV5Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
} // end namespace HexagonItinerariesV5Bypass

// Functional units for "HexagonItinerariesV55"
namespace HexagonItinerariesV55FU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
} // end namespace HexagonItinerariesV55FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV55"
namespace HexagonItinerariesV55Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
} // end namespace HexagonItinerariesV55Bypass

// Functional units for "HexagonItinerariesV62"
namespace HexagonItinerariesV62FU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
  const InstrStage::FuncUnits CVI_ST = 1ULL << 5;
  const InstrStage::FuncUnits CVI_XLANE = 1ULL << 6;
  const InstrStage::FuncUnits CVI_SHIFT = 1ULL << 7;
  const InstrStage::FuncUnits CVI_MPY0 = 1ULL << 8;
  const InstrStage::FuncUnits CVI_MPY1 = 1ULL << 9;
  const InstrStage::FuncUnits CVI_LD = 1ULL << 10;
  const InstrStage::FuncUnits CVI_XLSHF = 1ULL << 11;
  const InstrStage::FuncUnits CVI_MPY01 = 1ULL << 12;
  const InstrStage::FuncUnits CVI_ALL = 1ULL << 13;
  const InstrStage::FuncUnits CVI_ALL_NOMEM = 1ULL << 14;
  const InstrStage::FuncUnits CVI_ZW = 1ULL << 15;
} // end namespace HexagonItinerariesV62FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV62"
namespace HexagonItinerariesV62Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV62Bypass

// Functional units for "HexagonItinerariesV65"
namespace HexagonItinerariesV65FU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
  const InstrStage::FuncUnits CVI_ST = 1ULL << 5;
  const InstrStage::FuncUnits CVI_XLANE = 1ULL << 6;
  const InstrStage::FuncUnits CVI_SHIFT = 1ULL << 7;
  const InstrStage::FuncUnits CVI_MPY0 = 1ULL << 8;
  const InstrStage::FuncUnits CVI_MPY1 = 1ULL << 9;
  const InstrStage::FuncUnits CVI_LD = 1ULL << 10;
  const InstrStage::FuncUnits CVI_XLSHF = 1ULL << 11;
  const InstrStage::FuncUnits CVI_MPY01 = 1ULL << 12;
  const InstrStage::FuncUnits CVI_ALL = 1ULL << 13;
  const InstrStage::FuncUnits CVI_ALL_NOMEM = 1ULL << 14;
  const InstrStage::FuncUnits CVI_ZW = 1ULL << 15;
} // end namespace HexagonItinerariesV65FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV65"
namespace HexagonItinerariesV65Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV65Bypass

// Functional units for "HexagonItinerariesV66"
namespace HexagonItinerariesV66FU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
  const InstrStage::FuncUnits CVI_ST = 1ULL << 5;
  const InstrStage::FuncUnits CVI_XLANE = 1ULL << 6;
  const InstrStage::FuncUnits CVI_SHIFT = 1ULL << 7;
  const InstrStage::FuncUnits CVI_MPY0 = 1ULL << 8;
  const InstrStage::FuncUnits CVI_MPY1 = 1ULL << 9;
  const InstrStage::FuncUnits CVI_LD = 1ULL << 10;
  const InstrStage::FuncUnits CVI_XLSHF = 1ULL << 11;
  const InstrStage::FuncUnits CVI_MPY01 = 1ULL << 12;
  const InstrStage::FuncUnits CVI_ALL = 1ULL << 13;
  const InstrStage::FuncUnits CVI_ALL_NOMEM = 1ULL << 14;
  const InstrStage::FuncUnits CVI_ZW = 1ULL << 15;
} // end namespace HexagonItinerariesV66FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV66"
namespace HexagonItinerariesV66Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV66Bypass

// Functional units for "HexagonItinerariesV67"
namespace HexagonItinerariesV67FU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
  const InstrStage::FuncUnits CVI_ST = 1ULL << 5;
  const InstrStage::FuncUnits CVI_XLANE = 1ULL << 6;
  const InstrStage::FuncUnits CVI_SHIFT = 1ULL << 7;
  const InstrStage::FuncUnits CVI_MPY0 = 1ULL << 8;
  const InstrStage::FuncUnits CVI_MPY1 = 1ULL << 9;
  const InstrStage::FuncUnits CVI_LD = 1ULL << 10;
  const InstrStage::FuncUnits CVI_XLSHF = 1ULL << 11;
  const InstrStage::FuncUnits CVI_MPY01 = 1ULL << 12;
  const InstrStage::FuncUnits CVI_ALL = 1ULL << 13;
  const InstrStage::FuncUnits CVI_ALL_NOMEM = 1ULL << 14;
  const InstrStage::FuncUnits CVI_ZW = 1ULL << 15;
} // end namespace HexagonItinerariesV67FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV67"
namespace HexagonItinerariesV67Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV67Bypass

// Functional units for "HexagonItinerariesV67T"
namespace HexagonItinerariesV67TFU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
  const InstrStage::FuncUnits CVI_ST = 1ULL << 5;
  const InstrStage::FuncUnits CVI_XLANE = 1ULL << 6;
  const InstrStage::FuncUnits CVI_SHIFT = 1ULL << 7;
  const InstrStage::FuncUnits CVI_MPY0 = 1ULL << 8;
  const InstrStage::FuncUnits CVI_MPY1 = 1ULL << 9;
  const InstrStage::FuncUnits CVI_LD = 1ULL << 10;
  const InstrStage::FuncUnits CVI_XLSHF = 1ULL << 11;
  const InstrStage::FuncUnits CVI_MPY01 = 1ULL << 12;
  const InstrStage::FuncUnits CVI_ALL = 1ULL << 13;
  const InstrStage::FuncUnits CVI_ALL_NOMEM = 1ULL << 14;
  const InstrStage::FuncUnits CVI_ZW = 1ULL << 15;
} // end namespace HexagonItinerariesV67TFU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV67T"
namespace HexagonItinerariesV67TBypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV67TBypass

// Functional units for "HexagonItinerariesV68"
namespace HexagonItinerariesV68FU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
  const InstrStage::FuncUnits CVI_ST = 1ULL << 5;
  const InstrStage::FuncUnits CVI_XLANE = 1ULL << 6;
  const InstrStage::FuncUnits CVI_SHIFT = 1ULL << 7;
  const InstrStage::FuncUnits CVI_MPY0 = 1ULL << 8;
  const InstrStage::FuncUnits CVI_MPY1 = 1ULL << 9;
  const InstrStage::FuncUnits CVI_LD = 1ULL << 10;
  const InstrStage::FuncUnits CVI_XLSHF = 1ULL << 11;
  const InstrStage::FuncUnits CVI_MPY01 = 1ULL << 12;
  const InstrStage::FuncUnits CVI_ALL = 1ULL << 13;
  const InstrStage::FuncUnits CVI_ALL_NOMEM = 1ULL << 14;
  const InstrStage::FuncUnits CVI_ZW = 1ULL << 15;
} // end namespace HexagonItinerariesV68FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV68"
namespace HexagonItinerariesV68Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV68Bypass

// Functional units for "HexagonItinerariesV69"
namespace HexagonItinerariesV69FU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
  const InstrStage::FuncUnits CVI_ST = 1ULL << 5;
  const InstrStage::FuncUnits CVI_XLANE = 1ULL << 6;
  const InstrStage::FuncUnits CVI_SHIFT = 1ULL << 7;
  const InstrStage::FuncUnits CVI_MPY0 = 1ULL << 8;
  const InstrStage::FuncUnits CVI_MPY1 = 1ULL << 9;
  const InstrStage::FuncUnits CVI_LD = 1ULL << 10;
  const InstrStage::FuncUnits CVI_XLSHF = 1ULL << 11;
  const InstrStage::FuncUnits CVI_MPY01 = 1ULL << 12;
  const InstrStage::FuncUnits CVI_ALL = 1ULL << 13;
  const InstrStage::FuncUnits CVI_ALL_NOMEM = 1ULL << 14;
  const InstrStage::FuncUnits CVI_ZW = 1ULL << 15;
} // end namespace HexagonItinerariesV69FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV69"
namespace HexagonItinerariesV69Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV69Bypass

extern const llvm::InstrStage HexagonStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 1, HexagonItinerariesV60FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 1, HexagonItinerariesV60FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 1, HexagonItinerariesV60FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 1, HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8-9
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 10-11
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 12-14
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 15-16
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 17-19
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 20-21
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 22-23
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 24-27
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 28-29
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 30-31
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 32-33
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 34-37
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 38-39
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 40-43
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 44-45
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 46-47
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 48-49
  { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 50-52
  { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 53-55
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 56-57
  { 1, HexagonItinerariesV60FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 58-59
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 60-62
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 63-64
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 65-67
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 68-69
  { 1, HexagonItinerariesV5FU::SLOT2 | HexagonItinerariesV5FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 70
  { 1, HexagonItinerariesV5FU::SLOT0 | HexagonItinerariesV5FU::SLOT1 | HexagonItinerariesV5FU::SLOT2 | HexagonItinerariesV5FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 71
  { 1, HexagonItinerariesV5FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 72
  { 1, HexagonItinerariesV5FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 73
  { 1, HexagonItinerariesV5FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 74
  { 1, HexagonItinerariesV5FU::SLOT0 | HexagonItinerariesV5FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 75
  { 1, HexagonItinerariesV5FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 76
  { 1, HexagonItinerariesV5FU::SLOT2 | HexagonItinerariesV5FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV5FU::SLOT2 | HexagonItinerariesV5FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 77-78
  { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 79
  { 1, HexagonItinerariesV55FU::SLOT0 | HexagonItinerariesV55FU::SLOT1 | HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 80
  { 1, HexagonItinerariesV55FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 81
  { 1, HexagonItinerariesV55FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 82
  { 1, HexagonItinerariesV55FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 83
  { 1, HexagonItinerariesV55FU::SLOT0 | HexagonItinerariesV55FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 84
  { 1, HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 85
  { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 86-87
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 88
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 89
  { 1, HexagonItinerariesV62FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 90
  { 1, HexagonItinerariesV62FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 91
  { 1, HexagonItinerariesV62FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 92
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 93
  { 1, HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 94
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 95-96
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 97-98
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 99-101
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 102-103
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 104-106
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 107-108
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 109-110
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 111-114
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 115-116
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 117-118
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 119-120
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 121-124
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 125-126
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 127-130
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 131-132
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 133-134
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 135-136
  { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 137-139
  { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 140-142
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 143-144
  { 1, HexagonItinerariesV62FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 145-146
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 147-149
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 150-151
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 152-154
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 155-156
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 157
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 158
  { 1, HexagonItinerariesV65FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 159
  { 1, HexagonItinerariesV65FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 160
  { 1, HexagonItinerariesV65FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 161
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 162
  { 1, HexagonItinerariesV65FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 163
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 164-165
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01 | HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 166-167
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 168-170
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 171-172
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 173-175
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLANE | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 176-177
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 178-179
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01 | HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 180-183
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 184-185
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 186-187
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 188-189
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 190-193
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 194-195
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 196-199
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 200-201
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 202-203
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 204-205
  { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 206-208
  { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01 | HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 209-211
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 212-213
  { 1, HexagonItinerariesV65FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 214-215
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 216-218
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 219-220
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01 | HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 221-223
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 224-225
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 226
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 227
  { 1, HexagonItinerariesV66FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 228
  { 1, HexagonItinerariesV66FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 229
  { 1, HexagonItinerariesV66FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 230
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 231
  { 1, HexagonItinerariesV66FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 232
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 233-234
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01 | HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 235-236
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 237-239
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 240-241
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 242-244
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLANE | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 245-246
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 247-248
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01 | HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 249-252
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 253-254
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 255-256
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 257-258
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 259-262
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 263-264
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 265-268
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 269-270
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 271-272
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 273-274
  { 1, HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 275-277
  { 1, HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01 | HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 278-280
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 281-282
  { 1, HexagonItinerariesV66FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 283-284
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 285-287
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 288-289
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01 | HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 290-292
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 293-294
  { 1, HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 295
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1 | HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 296
  { 1, HexagonItinerariesV67FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 297
  { 1, HexagonItinerariesV67FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 298
  { 1, HexagonItinerariesV67FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 299
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 300
  { 1, HexagonItinerariesV67FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 301
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1 | HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY0 | HexagonItinerariesV67FU::CVI_MPY1 | HexagonItinerariesV67FU::CVI_SHIFT | HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 302-303
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1 | HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY01 | HexagonItinerariesV67FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 304-305
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY0 | HexagonItinerariesV67FU::CVI_MPY1 | HexagonItinerariesV67FU::CVI_SHIFT | HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 306-308
  { 1, HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 309-310
  { 1, HexagonItinerariesV67FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY0 | HexagonItinerariesV67FU::CVI_MPY1 | HexagonItinerariesV67FU::CVI_SHIFT | HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 311-313
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1 | HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_XLANE | HexagonItinerariesV67FU::CVI_SHIFT | HexagonItinerariesV67FU::CVI_MPY0 | HexagonItinerariesV67FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 314-315
  { 1, HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY0 | HexagonItinerariesV67FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 316-317
  { 1, HexagonItinerariesV67FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY01 | HexagonItinerariesV67FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 318-321
  { 1, HexagonItinerariesV67FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY0 | HexagonItinerariesV67FU::CVI_MPY1 | HexagonItinerariesV67FU::CVI_SHIFT | HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 322-323
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1 | HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 324-325
  { 1, HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 326-327
  { 1, HexagonItinerariesV67FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 328-331
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 332-333
  { 1, HexagonItinerariesV67FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 334-337
  { 1, HexagonItinerariesV67FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 338-339
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1 | HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 340-341
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1 | HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 342-343
  { 1, HexagonItinerariesV67FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY0 | HexagonItinerariesV67FU::CVI_MPY1 | HexagonItinerariesV67FU::CVI_SHIFT | HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 344-346
  { 1, HexagonItinerariesV67FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY01 | HexagonItinerariesV67FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 347-349
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1 | HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 350-351
  { 1, HexagonItinerariesV67FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 352-353
  { 1, HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY0 | HexagonItinerariesV67FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_SHIFT | HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 354-356
  { 1, HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 357-358
  { 1, HexagonItinerariesV67FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY01 | HexagonItinerariesV67FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 359-361
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 362-363
  { 1, HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 364
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 365
  { 1, HexagonItinerariesV67TFU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 366
  { 1, HexagonItinerariesV67TFU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 367
  { 1, HexagonItinerariesV67TFU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 368
  { 1, HexagonItinerariesV67TFU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 369
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY0 | HexagonItinerariesV67TFU::CVI_MPY1 | HexagonItinerariesV67TFU::CVI_SHIFT | HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 370-371
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY01 | HexagonItinerariesV67TFU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 372-373
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY0 | HexagonItinerariesV67TFU::CVI_MPY1 | HexagonItinerariesV67TFU::CVI_SHIFT | HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 374-376
  { 1, HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 377-378
  { 1, HexagonItinerariesV67TFU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY0 | HexagonItinerariesV67TFU::CVI_MPY1 | HexagonItinerariesV67TFU::CVI_SHIFT | HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 379-381
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_XLANE | HexagonItinerariesV67TFU::CVI_SHIFT | HexagonItinerariesV67TFU::CVI_MPY0 | HexagonItinerariesV67TFU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 382-383
  { 1, HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY0 | HexagonItinerariesV67TFU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 384-385
  { 1, HexagonItinerariesV67TFU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY01 | HexagonItinerariesV67TFU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 386-389
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 390
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 391
  { 1, HexagonItinerariesV67TFU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY0 | HexagonItinerariesV67TFU::CVI_MPY1 | HexagonItinerariesV67TFU::CVI_SHIFT | HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 392-393
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 394-395
  { 1, HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 396-397
  { 1, HexagonItinerariesV67TFU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 398-401
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 402-403
  { 1, HexagonItinerariesV67TFU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 404-407
  { 1, HexagonItinerariesV67TFU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 408-409
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 410-411
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 412-413
  { 1, HexagonItinerariesV67TFU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY0 | HexagonItinerariesV67TFU::CVI_MPY1 | HexagonItinerariesV67TFU::CVI_SHIFT | HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 414-416
  { 1, HexagonItinerariesV67TFU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY01 | HexagonItinerariesV67TFU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 417-419
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 420-421
  { 1, HexagonItinerariesV67TFU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 422-423
  { 1, HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY0 | HexagonItinerariesV67TFU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_SHIFT | HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 424-426
  { 1, HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 427-428
  { 1, HexagonItinerariesV67TFU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY01 | HexagonItinerariesV67TFU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 429-431
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 432-433
  { 1, HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 434
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1 | HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 435
  { 1, HexagonItinerariesV68FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 436
  { 1, HexagonItinerariesV68FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 437
  { 1, HexagonItinerariesV68FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 438
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 439
  { 1, HexagonItinerariesV68FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 440
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1 | HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_MPY0 | HexagonItinerariesV68FU::CVI_MPY1 | HexagonItinerariesV68FU::CVI_SHIFT | HexagonItinerariesV68FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 441-442
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1 | HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_MPY01 | HexagonItinerariesV68FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 443-444
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_MPY0 | HexagonItinerariesV68FU::CVI_MPY1 | HexagonItinerariesV68FU::CVI_SHIFT | HexagonItinerariesV68FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 445-447
  { 1, HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 448-449
  { 1, HexagonItinerariesV68FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_MPY0 | HexagonItinerariesV68FU::CVI_MPY1 | HexagonItinerariesV68FU::CVI_SHIFT | HexagonItinerariesV68FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 450-452
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1 | HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_XLANE | HexagonItinerariesV68FU::CVI_SHIFT | HexagonItinerariesV68FU::CVI_MPY0 | HexagonItinerariesV68FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 453-454
  { 1, HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_MPY0 | HexagonItinerariesV68FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 455-456
  { 1, HexagonItinerariesV68FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_MPY01 | HexagonItinerariesV68FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 457-460
  { 1, HexagonItinerariesV68FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_MPY0 | HexagonItinerariesV68FU::CVI_MPY1 | HexagonItinerariesV68FU::CVI_SHIFT | HexagonItinerariesV68FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 461-462
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1 | HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 463-464
  { 1, HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 465-466
  { 1, HexagonItinerariesV68FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 467-470
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 471-472
  { 1, HexagonItinerariesV68FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 473-476
  { 1, HexagonItinerariesV68FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 477-478
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1 | HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 479-480
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1 | HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 481-482
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_MPY01 | HexagonItinerariesV68FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 483-485
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1 | HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 486-487
  { 1, HexagonItinerariesV68FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 488-489
  { 1, HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_MPY0 | HexagonItinerariesV68FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_SHIFT | HexagonItinerariesV68FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 490-492
  { 1, HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 493-494
  { 1, HexagonItinerariesV68FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_MPY01 | HexagonItinerariesV68FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 495-497
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 498-499
  { 1, HexagonItinerariesV69FU::SLOT2 | HexagonItinerariesV69FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 500
  { 1, HexagonItinerariesV69FU::SLOT0 | HexagonItinerariesV69FU::SLOT1 | HexagonItinerariesV69FU::SLOT2 | HexagonItinerariesV69FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 501
  { 1, HexagonItinerariesV69FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 502
  { 1, HexagonItinerariesV69FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 503
  { 1, HexagonItinerariesV69FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 504
  { 1, HexagonItinerariesV69FU::SLOT0 | HexagonItinerariesV69FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 505
  { 1, HexagonItinerariesV69FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 506
  { 1, HexagonItinerariesV69FU::SLOT0 | HexagonItinerariesV69FU::SLOT1 | HexagonItinerariesV69FU::SLOT2 | HexagonItinerariesV69FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_MPY0 | HexagonItinerariesV69FU::CVI_MPY1 | HexagonItinerariesV69FU::CVI_SHIFT | HexagonItinerariesV69FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 507-508
  { 1, HexagonItinerariesV69FU::SLOT0 | HexagonItinerariesV69FU::SLOT1 | HexagonItinerariesV69FU::SLOT2 | HexagonItinerariesV69FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_MPY01 | HexagonItinerariesV69FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 509-510
  { 1, HexagonItinerariesV69FU::SLOT0 | HexagonItinerariesV69FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_MPY0 | HexagonItinerariesV69FU::CVI_MPY1 | HexagonItinerariesV69FU::CVI_SHIFT | HexagonItinerariesV69FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 511-513
  { 1, HexagonItinerariesV69FU::SLOT2 | HexagonItinerariesV69FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::SLOT2 | HexagonItinerariesV69FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 514-515
  { 1, HexagonItinerariesV69FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_MPY0 | HexagonItinerariesV69FU::CVI_MPY1 | HexagonItinerariesV69FU::CVI_SHIFT | HexagonItinerariesV69FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 516-518
  { 1, HexagonItinerariesV69FU::SLOT0 | HexagonItinerariesV69FU::SLOT1 | HexagonItinerariesV69FU::SLOT2 | HexagonItinerariesV69FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_XLANE | HexagonItinerariesV69FU::CVI_SHIFT | HexagonItinerariesV69FU::CVI_MPY0 | HexagonItinerariesV69FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 519-520
  { 1, HexagonItinerariesV69FU::SLOT2 | HexagonItinerariesV69FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_MPY0 | HexagonItinerariesV69FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 521-522
  { 1, HexagonItinerariesV69FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_MPY01 | HexagonItinerariesV69FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 523-526
  { 1, HexagonItinerariesV69FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_MPY0 | HexagonItinerariesV69FU::CVI_MPY1 | HexagonItinerariesV69FU::CVI_SHIFT | HexagonItinerariesV69FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 527-528
  { 1, HexagonItinerariesV69FU::SLOT0 | HexagonItinerariesV69FU::SLOT1 | HexagonItinerariesV69FU::SLOT2 | HexagonItinerariesV69FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 529-530
  { 1, HexagonItinerariesV69FU::SLOT2 | HexagonItinerariesV69FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 531-532
  { 1, HexagonItinerariesV69FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 533-536
  { 1, HexagonItinerariesV69FU::SLOT0 | HexagonItinerariesV69FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 537-538
  { 1, HexagonItinerariesV69FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 539-542
  { 1, HexagonItinerariesV69FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 543-544
  { 1, HexagonItinerariesV69FU::SLOT0 | HexagonItinerariesV69FU::SLOT1 | HexagonItinerariesV69FU::SLOT2 | HexagonItinerariesV69FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 545-546
  { 1, HexagonItinerariesV69FU::SLOT0 | HexagonItinerariesV69FU::SLOT1 | HexagonItinerariesV69FU::SLOT2 | HexagonItinerariesV69FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 547-548
  { 1, HexagonItinerariesV69FU::SLOT0 | HexagonItinerariesV69FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_MPY01 | HexagonItinerariesV69FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 549-551
  { 1, HexagonItinerariesV69FU::SLOT0 | HexagonItinerariesV69FU::SLOT1 | HexagonItinerariesV69FU::SLOT2 | HexagonItinerariesV69FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 552-553
  { 1, HexagonItinerariesV69FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 554-555
  { 1, HexagonItinerariesV69FU::SLOT2 | HexagonItinerariesV69FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_MPY0 | HexagonItinerariesV69FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_SHIFT | HexagonItinerariesV69FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 556-558
  { 1, HexagonItinerariesV69FU::SLOT2 | HexagonItinerariesV69FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 559-560
  { 1, HexagonItinerariesV69FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_MPY01 | HexagonItinerariesV69FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 561-563
  { 1, HexagonItinerariesV69FU::SLOT0 | HexagonItinerariesV69FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV69FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 564-565
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned HexagonOperandCycles[] = {
  0, // No itinerary
  3,   2,   2, // 1-3
  1,   1,   1, // 4-6
  3,   2, // 7-8
  3,   2,   2,   2, // 9-12
  3,   3,   2,   2, // 13-16
  3,   2,   2, // 17-19
  3,   3,   2, // 20-22
  3,   2,   2, // 23-25
  3,   1,   1, // 26-28
  3,   1,   2, // 29-31
  3,   2,   2, // 32-34
  1,   1,   1, // 35-37
  2, // 38
  2,   2, // 39-40
  2,   1, // 41-42
  3,   2,   2, // 43-45
  4,   2,   1,   2, // 46-49
  4,   1,   2, // 50-52
  4,   3,   1,   2, // 53-56
  1,   2,   2, // 57-59
  1,   2,   2, // 60-62
  3,   2,   2, // 63-65
  3,   3,   2, // 66-68
  2, // 69
  3, // 70
  4,   2, // 71-72
  3,   2, // 73-74
  3,   1, // 75-76
  4,   1,   2, // 77-79
  4,   1,   1, // 80-82
  4,   2,   1,   1, // 83-86
  4,   1,   1, // 87-89
  4,   2,   1,   1, // 90-93
  2, // 94
  4,   3,   1,   2,   2, // 95-99
  9,   7,   7, // 100-102
  3,   1,   2,   2,   2, // 103-107
  3,   1,   2,   2, // 108-111
  1, // 112
  9,   7,   7, // 113-115
  9,   1,   2, // 116-118
  1,   1,   1, // 119-121
  9,   2,   7, // 122-124
  1,   2,   7, // 125-127
  9,   2,   7,   7, // 128-131
  4,   2,   2, // 132-134
  2,   1,   2,   2, // 135-138
  2,   1,   2,   3, // 139-142
  1,   2,   2, // 143-145
  1,   2,   3, // 146-148
  4,   2,   2,   2,   2, // 149-153
  3,   1,   2,   3, // 154-157
  1,   2,   2, // 158-160
  2,   1,   2,   2, // 161-164
  3,   1,   2,   2, // 165-168
  4,   2,   2, // 169-171
  1,   1,   1, // 172-174
  9,   7,   7,   7, // 175-178
  9,   5,   5,   2, // 179-182
  9,   7,   5,   5,   2, // 183-187
  9,   7, // 188-189
  9, // 190
  1, // 191
  3,   2,   2, // 192-194
  3,   2, // 195-196
  4,   3,   2, // 197-199
  4,   1, // 200-201
  4,   1,   2, // 202-204
  3,   1,   2, // 205-207
  1,   2,   3, // 208-210
  1,   2,   2, // 211-213
  4,   2, // 214-215
  4,   2,   2, // 216-218
  4,   2,   2, // 219-221
  4,   2,   2, // 222-224
  3,   2, // 225-226
  3,   2,   2, // 227-229
  3,   2,   2, // 230-232
  4,   2, // 233-234
  4,   1, // 235-236
  3,   2,   2, // 237-239
  3,   2,   2, // 240-242
  4,   4,   1,   1,   2, // 243-247
  3,   1,   2, // 248-250
  2, // 251
  4,   1,   1, // 252-254
  4,   1,   1,   2, // 255-258
  4,   4,   1,   1,   1, // 259-263
  3,   2,   2, // 264-266
  4,   4,   2,   2, // 267-270
  4,   2,   2, // 271-273
  3,   2, // 274-275
  3,   1,   1, // 276-278
  3,   1, // 279-280
  3,   2,   2,   2, // 281-284
  4,   2, // 285-286
  3,   2,   2,   2, // 287-290
  5,   1, // 291-292
  5,   1,   1, // 293-295
  4,   2, // 296-297
  5,   2,   1,   1, // 298-301
  4,   2,   1,   1, // 302-305
  4,   1,   1, // 306-308
  5,   1,   1, // 309-311
  5,   2,   1,   1, // 312-315
  5,   2,   1,   1,   2, // 316-320
  5,   5,   1, // 321-323
  4,   2,   2, // 324-326
  5,   5,   1,   1, // 327-330
  4,   2, // 331-332
  4,   1, // 333-334
  2,   2, // 335-336
  1, // 337
  2,   1, // 338-339
  2, // 340
  3,   2, // 341-342
  2,   2, // 343-344
  3,   1, // 345-346
  2,   1, // 347-348
  1,   2, // 349-350
  2,   2, // 351-352
  2,   1, // 353-354
  2, // 355
  2,   2, // 356-357
  2,   1, // 358-359
  2, // 360
  3,   2,   2, // 361-363
  1,   1,   2, // 364-366
  3,   2,   2, // 367-369
  1,   2,   2, // 370-372
  2,   3,   2, // 373-375
  3,   2,   2, // 376-378
  3,   2, // 379-380
  1,   2, // 381-382
  4,   3,   2,   1,   2, // 383-387
  4,   3,   2,   1,   2,   2, // 388-393
  4,   2, // 394-395
  4,   1, // 396-397
  4,   1, // 398-399
  4,   3,   3,   1,   2, // 400-404
  4,   3,   2,   2, // 405-408
  4,   2,   1,   2,   2, // 409-413
  4,   3,   2, // 414-416
  4,   1,   2,   2, // 417-420
  4,   1,   1,   2, // 421-424
  4,   2,   2, // 425-427
  4,   2,   1,   1,   2, // 428-432
  4,   3,   1,   1,   2, // 433-437
  1,   1,   2, // 438-440
  4,   2,   2,   2, // 441-444
  4,   2,   1,   2, // 445-448
  4,   2,   2,   2, // 449-452
  4,   2,   2,   1, // 453-456
  2,   2, // 457-458
  2,   3, // 459-460
  1, // 461
  4,   2, // 462-463
  4,   1,   1, // 464-466
  4,   2,   2, // 467-469
  4,   2,   2, // 470-472
  3,   2,   1,   2,   2, // 473-477
  3,   3,   1,   2,   2, // 478-482
  3,   2,   1,   2,   3, // 483-487
  3,   3,   1,   2,   3, // 488-492
  3,   1,   2,   2,   3, // 493-497
  4,   1,   1, // 498-500
  1,   3, // 501-502
  4,   2, // 503-504
  2,   2,   2, // 505-507
  2,   1,   1,   2,   2, // 508-512
  3,   2,   2, // 513-515
  3,   1,   1,   2,   2, // 516-520
  2,   2,   3, // 521-523
  2,   1,   1,   2,   3, // 524-528
  3,   2,   3, // 529-531
  3,   1,   1,   2,   3, // 532-536
  1,   1,   2,   2, // 537-540
  1,   2,   2,   2, // 541-544
  1,   1,   2,   3, // 545-548
  1,   2,   2,   3, // 549-552
  4,   1,   1,   2, // 553-556
  4,   2,   1,   1,   2, // 557-561
  4,   2, // 562-563
  4,   2,   2,   2, // 564-567
  3,   2, // 568-569
  3,   2,   2, // 570-572
  3,   2, // 573-574
  3, // 575
  3, // 576
  1,   2, // 577-578
  2, // 579
  1,   2, // 580-581
  4,   7,   1, // 582-584
  9,   2, // 585-586
  9,   2, // 587-588
  9,   5,   5,   2, // 589-592
  9,   7,   5,   5,   2, // 593-597
  9,   1,   2, // 598-600
  9,   3,   1,   2, // 601-604
  9,   2,   1,   2, // 605-608
  9,   3,   2,   1,   2, // 609-613
  9,   3,   1,   2, // 614-617
  9,   1,   2, // 618-620
  9,   2,   1,   2, // 621-624
  9,   3,   2,   1,   2, // 625-629
  9,   3,   1,   2, // 630-633
  1,   2,   5, // 634-636
  2,   1,   2,   5, // 637-640
  3,   2,   1,   2,   5, // 641-645
  3,   1,   2,   5, // 646-649
  1,   2,   5, // 650-652
  2,   1,   2,   5, // 653-656
  3,   2,   1,   2,   5, // 657-661
  3,   1,   2,   5, // 662-665
  2,   1,   2,   7, // 666-669
  3,   2,   1,   2,   7, // 670-674
  7,   1,   2,   7, // 675-678
  3,   7,   1,   2,   7, // 679-683
  3,   1,   2,   7, // 684-687
  1,   2, // 688-689
  3,   1,   2, // 690-692
  9,   7, // 693-694
  9,   5,   5, // 695-697
  9,   5,   5, // 698-700
  9,   5,   5, // 701-703
  9,   7,   7,   7, // 704-707
  9,   9,   7,   7,   7, // 708-712
  9,   9,   7,   7, // 713-716
  9,   7,   5,   5, // 717-720
  9,   5,   5,   2, // 721-724
  9,   7,   2, // 725-727
  9,   7,   7,   2, // 728-731
  9,   5,   2, // 732-734
  9,   7,   5,   2, // 735-738
  9,   7,   5,   5, // 739-742
  9,   5,   5,   2, // 743-746
  9,   7, // 747-748
  9,   5, // 749-750
  9,   7,   7, // 751-753
  9,   5, // 754-755
  9,   5, // 756-757
  9,   9,   5,   5,   2, // 758-762
  9,   5, // 763-764
  9,   5,   5, // 765-767
  9,   5,   5,   2, // 768-771
  9,   7,   5,   5, // 772-775
  9,   5,   2, // 776-778
  9,   7,   5,   2, // 779-782
  9,   5,   2, // 783-785
  9,   7,   5,   2, // 786-789
  9,   5,   2, // 790-792
  9,   7,   5,   2, // 793-796
  9,   5,   5, // 797-799
  9,   7,   7, // 800-802
  1,   2,   7, // 803-805
  7,   1,   2,   7, // 806-809
  1,   2,   7, // 810-812
  7,   1,   2,   7, // 813-816
  3, // 817
  9,   5,   2, // 818-820
  9,   7,   5,   5,   2, // 821-825
  9,   5,   5,   2, // 826-829
  9,   5,   2, // 830-832
  9,   7,   5,   2, // 833-836
  9,   5,   2,   2, // 837-840
  9,   7,   5,   2,   2, // 841-845
  9,   7,   5,   5, // 846-849
  9,   5,   2, // 850-852
  9,   7,   5,   2, // 853-856
  9,   3,   5,   2, // 857-860
  9,   3,   7,   5,   2, // 861-865
  9,   5,   2, // 866-868
  9,   5,   5, // 869-871
  9,   7, // 872-873
  1,   2,   7,   7, // 874-877
  7,   1,   2,   7,   7, // 878-882
  1,   2,   7,   7, // 883-886
  7,   1,   2,   7,   7, // 887-891
  9,   7,   7,   7, // 892-895
  9,   5, // 896-897
  9,   7,   5, // 898-900
  2, // 901
  3,   2, // 902-903
  1,   2, // 904-905
  3,   1,   2, // 906-908
  2,   1,   2, // 909-911
  3,   2,   1,   2, // 912-915
  1, // 916
  1,   2, // 917-918
  1, // 919
  1, // 920
  1,   1, // 921-922
  1, // 923
  1,   1, // 924-925
  3, // 926
  3,   2,   2, // 927-929
  1,   1,   1, // 930-932
  3,   2, // 933-934
  3,   2,   2,   2, // 935-938
  3,   3,   2,   2, // 939-942
  3,   2,   2, // 943-945
  3,   3,   2, // 946-948
  3,   2,   2, // 949-951
  3,   1,   1, // 952-954
  3,   1,   2, // 955-957
  3,   2,   2, // 958-960
  1,   1,   1, // 961-963
  2, // 964
  2,   2, // 965-966
  2,   1, // 967-968
  3,   2,   2, // 969-971
  4,   2,   1,   2, // 972-975
  4,   1,   2, // 976-978
  4,   3,   1,   2, // 979-982
  1,   2,   2, // 983-985
  1,   2,   2, // 986-988
  4,   2,   1, // 989-991
  4,   3,   1, // 992-994
  2, // 995
  3, // 996
  4,   2, // 997-998
  4,   2, // 999-1000
  2,   1, // 1001-1002
  4,   1,   2, // 1003-1005
  4,   1,   1, // 1006-1008
  4,   2,   1,   1, // 1009-1012
  4,   1,   1, // 1013-1015
  4,   2,   1,   1, // 1016-1019
  2, // 1020
  4,   3,   1,   2,   2, // 1021-1025
  3,   1,   2,   2,   2, // 1026-1030
  3,   1,   2,   2, // 1031-1034
  1, // 1035
  1,   1,   1, // 1036-1038
  4,   2,   2, // 1039-1041
  2,   1,   2,   2, // 1042-1045
  2,   1,   2,   3, // 1046-1049
  1,   2,   2, // 1050-1052
  1,   2,   3, // 1053-1055
  3,   2,   2,   2,   2, // 1056-1060
  3,   1,   2,   3, // 1061-1064
  1,   2,   2, // 1065-1067
  2,   1,   2,   2, // 1068-1071
  3,   1,   2,   2, // 1072-1075
  4,   2,   2, // 1076-1078
  1,   1,   1, // 1079-1081
  1, // 1082
  3,   2,   2, // 1083-1085
  3,   2, // 1086-1087
  4,   3,   2, // 1088-1090
  4,   1, // 1091-1092
  4,   1,   2, // 1093-1095
  3,   1,   2, // 1096-1098
  1,   2,   3, // 1099-1101
  1,   2,   2, // 1102-1104
  4,   2, // 1105-1106
  4,   2,   2, // 1107-1109
  3,   2,   2, // 1110-1112
  4,   2,   2, // 1113-1115
  3,   2, // 1116-1117
  3,   2,   2, // 1118-1120
  4,   2,   2, // 1121-1123
  4,   2, // 1124-1125
  4,   1, // 1126-1127
  3,   2,   2, // 1128-1130
  4,   2,   2, // 1131-1133
  4,   4,   1,   1,   2, // 1134-1138
  3,   1,   2, // 1139-1141
  2, // 1142
  4,   1,   1, // 1143-1145
  4,   1,   1,   1, // 1146-1149
  4,   4,   1,   1,   1, // 1150-1154
  3,   2,   2, // 1155-1157
  4,   4,   2,   2, // 1158-1161
  4,   2,   2, // 1162-1164
  3,   2, // 1165-1166
  3,   1,   1, // 1167-1169
  3,   1, // 1170-1171
  3,   2,   2,   2, // 1172-1175
  4,   2, // 1176-1177
  3,   2,   2,   2, // 1178-1181
  4,   1, // 1182-1183
  5,   1,   1, // 1184-1186
  4,   2, // 1187-1188
  5,   2,   1,   1, // 1189-1192
  4,   2,   1,   1, // 1193-1196
  4,   1,   1, // 1197-1199
  4,   1,   1, // 1200-1202
  4,   1,   1,   1, // 1203-1206
  4,   1,   1,   1,   2, // 1207-1211
  4,   4,   1, // 1212-1214
  4,   1,   1, // 1215-1217
  4,   4,   1,   1, // 1218-1221
  4,   2, // 1222-1223
  4,   1, // 1224-1225
  2,   2, // 1226-1227
  1, // 1228
  2,   1, // 1229-1230
  2, // 1231
  3,   2, // 1232-1233
  2,   2, // 1234-1235
  3,   1, // 1236-1237
  2,   1, // 1238-1239
  1,   2, // 1240-1241
  2,   2, // 1242-1243
  2,   1, // 1244-1245
  2, // 1246
  2,   2, // 1247-1248
  2,   1, // 1249-1250
  2, // 1251
  3,   1,   2, // 1252-1254
  1,   1,   2, // 1255-1257
  3,   2,   2, // 1258-1260
  1,   2,   2, // 1261-1263
  1,   3,   2, // 1264-1266
  3,   2,   2, // 1267-1269
  3,   2, // 1270-1271
  1,   2, // 1272-1273
  4,   3,   2,   1,   2, // 1274-1278
  4,   3,   2,   1,   2,   2, // 1279-1284
  4,   2, // 1285-1286
  4,   1, // 1287-1288
  4,   1, // 1289-1290
  4,   3,   3,   1,   2, // 1291-1295
  4,   3,   2,   2, // 1296-1299
  4,   2,   1,   2,   2, // 1300-1304
  4,   3,   2, // 1305-1307
  4,   1,   2,   2, // 1308-1311
  4,   1,   1,   2, // 1312-1315
  4,   2,   2, // 1316-1318
  4,   2,   1,   1,   2, // 1319-1323
  4,   3,   1,   1,   2, // 1324-1328
  1,   1,   2, // 1329-1331
  4,   2,   2,   2, // 1332-1335
  4,   2,   1,   2, // 1336-1339
  3,   2,   2,   2, // 1340-1343
  4,   2,   2,   1, // 1344-1347
  2,   2, // 1348-1349
  2,   3, // 1350-1351
  1, // 1352
  3,   2, // 1353-1354
  4,   1,   1, // 1355-1357
  4,   2,   2, // 1358-1360
  4,   2,   2, // 1361-1363
  3,   2,   1,   2,   2, // 1364-1368
  3,   3,   1,   2,   2, // 1369-1373
  3,   2,   1,   2,   3, // 1374-1378
  3,   3,   1,   2,   3, // 1379-1383
  3,   1,   2,   2,   3, // 1384-1388
  4,   1,   1, // 1389-1391
  1,   3, // 1392-1393
  3,   2, // 1394-1395
  2,   2,   2, // 1396-1398
  2,   1,   1,   2,   2, // 1399-1403
  3,   2,   2, // 1404-1406
  3,   1,   1,   2,   2, // 1407-1411
  2,   2,   3, // 1412-1414
  2,   1,   1,   2,   3, // 1415-1419
  3,   2,   3, // 1420-1422
  3,   1,   1,   2,   3, // 1423-1427
  1,   1,   2,   2, // 1428-1431
  1,   2,   2,   2, // 1432-1435
  1,   1,   2,   3, // 1436-1439
  1,   2,   2,   3, // 1440-1443
  4,   1,   1,   2, // 1444-1447
  4,   2,   1,   1,   2, // 1448-1452
  4,   2, // 1453-1454
  4,   2,   2,   2, // 1455-1458
  3,   2, // 1459-1460
  3,   2,   2, // 1461-1463
  3,   2, // 1464-1465
  3, // 1466
  3, // 1467
  1,   2, // 1468-1469
  2, // 1470
  1,   2, // 1471-1472
  1, // 1473
  1,   2, // 1474-1475
  1, // 1476
  1, // 1477
  1,   1, // 1478-1479
  1, // 1480
  1,   1, // 1481-1482
  3, // 1483
  4,   2,   2, // 1484-1486
  1,   1,   1, // 1487-1489
  3,   2, // 1490-1491
  3,   2,   2,   2, // 1492-1495
  3,   3,   2,   2, // 1496-1499
  3,   2,   2, // 1500-1502
  3,   3,   2, // 1503-1505
  3,   2,   2, // 1506-1508
  3,   1,   1, // 1509-1511
  3,   1,   2, // 1512-1514
  3,   2,   2, // 1515-1517
  1,   1,   1, // 1518-1520
  2, // 1521
  2,   2, // 1522-1523
  2,   1, // 1524-1525
  3,   2,   2, // 1526-1528
  4,   2,   1,   2, // 1529-1532
  4,   1,   2, // 1533-1535
  4,   3,   1,   2, // 1536-1539
  1,   2,   2, // 1540-1542
  1,   2,   2, // 1543-1545
  3,   2,   2, // 1546-1548
  3,   3,   2, // 1549-1551
  2, // 1552
  3, // 1553
  4,   2, // 1554-1555
  3,   2, // 1556-1557
  3,   1, // 1558-1559
  4,   1,   2, // 1560-1562
  4,   1,   1, // 1563-1565
  4,   2,   1,   1, // 1566-1569
  4,   1,   1, // 1570-1572
  4,   2,   1,   1, // 1573-1576
  2, // 1577
  4,   3,   1,   2,   2, // 1578-1582
  9,   7,   7, // 1583-1585
  3,   1,   2,   2,   2, // 1586-1590
  3,   1,   2,   2, // 1591-1594
  1, // 1595
  9,   7,   7, // 1596-1598
  9,   1,   2, // 1599-1601
  1,   1,   1, // 1602-1604
  9,   2,   7, // 1605-1607
  1,   2,   7, // 1608-1610
  9,   2,   7,   7, // 1611-1614
  4,   2,   2, // 1615-1617
  2,   1,   2,   2, // 1618-1621
  2,   1,   2,   3, // 1622-1625
  1,   2,   2, // 1626-1628
  1,   2,   3, // 1629-1631
  4,   2,   2,   2,   2, // 1632-1636
  3,   1,   2,   3, // 1637-1640
  1,   2,   2, // 1641-1643
  2,   1,   2,   2, // 1644-1647
  3,   1,   2,   2, // 1648-1651
  4,   2,   2, // 1652-1654
  1,   1,   1, // 1655-1657
  9,   7,   7,   7, // 1658-1661
  9,   5,   5,   2, // 1662-1665
  9,   7,   5,   5,   2, // 1666-1670
  9,   7, // 1671-1672
  9, // 1673
  1, // 1674
  3,   2,   2, // 1675-1677
  3,   2, // 1678-1679
  4,   3,   2, // 1680-1682
  4,   1, // 1683-1684
  4,   1,   2, // 1685-1687
  3,   1,   2, // 1688-1690
  1,   2,   3, // 1691-1693
  1,   2,   2, // 1694-1696
  4,   2, // 1697-1698
  4,   2,   2, // 1699-1701
  4,   2,   2, // 1702-1704
  4,   2,   2, // 1705-1707
  3,   2, // 1708-1709
  3,   2,   2, // 1710-1712
  3,   2,   2, // 1713-1715
  4,   2, // 1716-1717
  4,   1, // 1718-1719
  3,   2,   2, // 1720-1722
  3,   2,   2, // 1723-1725
  3,   4,   2,   2,   2, // 1726-1730
  3,   1,   2, // 1731-1733
  2, // 1734
  4,   1,   1, // 1735-1737
  4,   1,   1,   2, // 1738-1741
  4,   4,   2,   1,   1, // 1742-1746
  3,   2,   2, // 1747-1749
  4,   4,   2,   2, // 1750-1753
  4,   2,   2, // 1754-1756
  3,   2, // 1757-1758
  3,   1,   1, // 1759-1761
  3,   1, // 1762-1763
  3,   2,   2,   2, // 1764-1767
  4,   2, // 1768-1769
  3,   2,   2,   2, // 1770-1773
  5,   1, // 1774-1775
  5,   1,   1, // 1776-1778
  4,   2, // 1779-1780
  5,   2,   1,   1, // 1781-1784
  4,   2,   1,   1, // 1785-1788
  4,   1,   1, // 1789-1791
  5,   1,   1, // 1792-1794
  5,   2,   1,   1, // 1795-1798
  5,   2,   1,   1,   2, // 1799-1803
  5,   5,   1, // 1804-1806
  4,   2,   2, // 1807-1809
  5,   5,   1,   1, // 1810-1813
  4,   2, // 1814-1815
  4,   1, // 1816-1817
  2,   2, // 1818-1819
  1, // 1820
  2,   1, // 1821-1822
  2, // 1823
  3,   2, // 1824-1825
  2,   2, // 1826-1827
  3,   1, // 1828-1829
  2,   1, // 1830-1831
  1,   2, // 1832-1833
  2,   2, // 1834-1835
  2,   1, // 1836-1837
  2, // 1838
  2,   2, // 1839-1840
  2,   1, // 1841-1842
  2, // 1843
  3,   2,   2, // 1844-1846
  1,   1,   2, // 1847-1849
  3,   2,   2, // 1850-1852
  1,   2,   2, // 1853-1855
  2,   3,   2, // 1856-1858
  3,   2,   2, // 1859-1861
  3,   2, // 1862-1863
  1,   2, // 1864-1865
  4,   3,   2,   1,   2, // 1866-1870
  4,   3,   2,   1,   2,   2, // 1871-1876
  4,   2, // 1877-1878
  4,   1, // 1879-1880
  4,   1, // 1881-1882
  4,   3,   3,   1,   2, // 1883-1887
  4,   3,   2,   2, // 1888-1891
  4,   2,   1,   2,   2, // 1892-1896
  4,   3,   2, // 1897-1899
  4,   1,   2,   2, // 1900-1903
  4,   1,   1,   2, // 1904-1907
  4,   2,   2, // 1908-1910
  4,   2,   1,   1,   2, // 1911-1915
  4,   3,   1,   1,   2, // 1916-1920
  1,   1,   2, // 1921-1923
  4,   2,   2,   2, // 1924-1927
  4,   2,   1,   2, // 1928-1931
  4,   2,   2,   2, // 1932-1935
  4,   2,   2,   1, // 1936-1939
  2,   2, // 1940-1941
  2,   3, // 1942-1943
  1, // 1944
  4,   2, // 1945-1946
  4,   1,   1, // 1947-1949
  4,   2,   2, // 1950-1952
  4,   2,   2, // 1953-1955
  3,   2,   1,   2,   2, // 1956-1960
  3,   3,   1,   2,   2, // 1961-1965
  3,   2,   1,   2,   3, // 1966-1970
  3,   3,   1,   2,   3, // 1971-1975
  3,   1,   2,   2,   3, // 1976-1980
  4,   1,   1, // 1981-1983
  1,   3, // 1984-1985
  4,   2, // 1986-1987
  2,   2,   2, // 1988-1990
  2,   1,   1,   2,   2, // 1991-1995
  3,   2,   2, // 1996-1998
  3,   1,   1,   2,   2, // 1999-2003
  2,   2,   3, // 2004-2006
  2,   1,   1,   2,   3, // 2007-2011
  3,   2,   3, // 2012-2014
  3,   1,   1,   2,   3, // 2015-2019
  1,   1,   2,   2, // 2020-2023
  1,   2,   2,   2, // 2024-2027
  1,   1,   2,   3, // 2028-2031
  1,   2,   2,   3, // 2032-2035
  4,   1,   1,   2, // 2036-2039
  4,   2,   1,   1,   2, // 2040-2044
  4,   2, // 2045-2046
  4,   2,   2,   2, // 2047-2050
  3,   2, // 2051-2052
  3,   2,   2, // 2053-2055
  3,   2, // 2056-2057
  3, // 2058
  3, // 2059
  1,   2, // 2060-2061
  2, // 2062
  1,   2, // 2063-2064
  4,   7,   1, // 2065-2067
  9,   2, // 2068-2069
  9,   2, // 2070-2071
  9,   5,   5,   2, // 2072-2075
  9,   7,   5,   5,   2, // 2076-2080
  9,   1,   2, // 2081-2083
  9,   3,   1,   2, // 2084-2087
  9,   2,   1,   2, // 2088-2091
  9,   3,   2,   1,   2, // 2092-2096
  9,   3,   1,   2, // 2097-2100
  9,   1,   2, // 2101-2103
  9,   2,   1,   2, // 2104-2107
  9,   3,   2,   1,   2, // 2108-2112
  9,   3,   1,   2, // 2113-2116
  1,   2,   5, // 2117-2119
  2,   1,   2,   5, // 2120-2123
  3,   2,   1,   2,   5, // 2124-2128
  3,   1,   2,   5, // 2129-2132
  1,   2,   5, // 2133-2135
  2,   1,   2,   5, // 2136-2139
  3,   2,   1,   2,   5, // 2140-2144
  3,   1,   2,   5, // 2145-2148
  2,   1,   2,   7, // 2149-2152
  3,   2,   1,   2,   7, // 2153-2157
  7,   1,   2,   7, // 2158-2161
  3,   7,   1,   2,   7, // 2162-2166
  3,   1,   2,   7, // 2167-2170
  1,   2, // 2171-2172
  3,   1,   2, // 2173-2175
  9,   7, // 2176-2177
  9,   5,   5, // 2178-2180
  9,   5,   5, // 2181-2183
  9,   5,   5, // 2184-2186
  9,   7,   7,   7, // 2187-2190
  9,   9,   7,   7,   7, // 2191-2195
  9,   9,   7,   7, // 2196-2199
  9,   7,   5,   5, // 2200-2203
  9,   5,   5,   2, // 2204-2207
  9,   7,   2, // 2208-2210
  9,   7,   7,   2, // 2211-2214
  9,   5,   2, // 2215-2217
  9,   7,   5,   2, // 2218-2221
  9,   7,   5,   5, // 2222-2225
  9,   5,   5,   2, // 2226-2229
  9,   7, // 2230-2231
  9,   5, // 2232-2233
  9,   7,   7, // 2234-2236
  9,   5, // 2237-2238
  9,   5, // 2239-2240
  9,   9,   5,   5,   2, // 2241-2245
  9,   5, // 2246-2247
  9,   5,   5, // 2248-2250
  9,   5,   5,   2, // 2251-2254
  9,   7,   5,   5, // 2255-2258
  9,   5,   2, // 2259-2261
  9,   7,   5,   2, // 2262-2265
  9,   5,   2, // 2266-2268
  9,   7,   5,   2, // 2269-2272
  9,   5,   2, // 2273-2275
  9,   7,   5,   2, // 2276-2279
  9,   5,   5, // 2280-2282
  9,   7,   7, // 2283-2285
  1,   2,   7, // 2286-2288
  7,   1,   2,   7, // 2289-2292
  1,   2,   7, // 2293-2295
  7,   1,   2,   7, // 2296-2299
  3, // 2300
  9,   5,   2, // 2301-2303
  9,   7,   5,   5,   2, // 2304-2308
  9,   5,   5,   2, // 2309-2312
  9,   5,   2, // 2313-2315
  9,   7,   5,   2, // 2316-2319
  9,   5,   2,   2, // 2320-2323
  9,   7,   5,   2,   2, // 2324-2328
  9,   7,   5,   5, // 2329-2332
  9,   5,   2, // 2333-2335
  9,   7,   5,   2, // 2336-2339
  9,   3,   5,   2, // 2340-2343
  9,   3,   7,   5,   2, // 2344-2348
  9,   5,   2, // 2349-2351
  9,   7,   7, // 2352-2354
  9,   7, // 2355-2356
  1,   2,   7,   7, // 2357-2360
  7,   1,   2,   7,   7, // 2361-2365
  1,   2,   7,   7, // 2366-2369
  7,   1,   2,   7,   7, // 2370-2374
  9,   7,   7,   7, // 2375-2378
  9,   5, // 2379-2380
  9,   7,   5, // 2381-2383
  2, // 2384
  3,   2, // 2385-2386
  1,   2, // 2387-2388
  3,   1,   2, // 2389-2391
  2,   1,   2, // 2392-2394
  3,   2,   1,   2, // 2395-2398
  1, // 2399
  1,   2, // 2400-2401
  1, // 2402
  1, // 2403
  1,   1, // 2404-2405
  1, // 2406
  1,   1, // 2407-2408
  3, // 2409
  4,   2,   2, // 2410-2412
  1,   1,   1, // 2413-2415
  3,   2, // 2416-2417
  3,   2,   2,   2, // 2418-2421
  4,   3,   2,   2, // 2422-2425
  3,   2,   2, // 2426-2428
  4,   3,   2, // 2429-2431
  3,   2,   2, // 2432-2434
  3,   2,   2, // 2435-2437
  3,   2,   2, // 2438-2440
  3,   2,   2, // 2441-2443
  1,   1,   1, // 2444-2446
  2, // 2447
  2,   2, // 2448-2449
  2,   2, // 2450-2451
  4,   1,   2, // 2452-2454
  4,   2,   1,   2, // 2455-2458
  4,   1,   2, // 2459-2461
  4,   3,   1,   2, // 2462-2465
  1,   2,   2, // 2466-2468
  1,   2,   2, // 2469-2471
  3,   2,   1, // 2472-2474
  3,   3,   1, // 2475-2477
  2, // 2478
  3, // 2479
  4,   1, // 2480-2481
  3,   1, // 2482-2483
  3,   1, // 2484-2485
  4,   1,   2, // 2486-2488
  4,   1,   1, // 2489-2491
  4,   2,   1,   1, // 2492-2495
  4,   1,   1, // 2496-2498
  4,   2,   1,   1, // 2499-2502
  2, // 2503
  4,   3,   1,   2,   2, // 2504-2508
  9,   7,   7, // 2509-2511
  3,   1,   2,   2,   2, // 2512-2516
  3,   1,   2,   2, // 2517-2520
  2, // 2521
  9,   7,   7, // 2522-2524
  9,   1,   2, // 2525-2527
  1,   1,   1, // 2528-2530
  9,   2,   7, // 2531-2533
  1,   2,   7, // 2534-2536
  9,   2,   7,   7, // 2537-2540
  4,   2,   2, // 2541-2543
  2,   1,   2,   2, // 2544-2547
  2,   1,   2,   3, // 2548-2551
  1,   2,   2, // 2552-2554
  1,   2,   3, // 2555-2557
  4,   2,   2,   2,   2, // 2558-2562
  3,   1,   2,   3, // 2563-2566
  1,   2,   2, // 2567-2569
  2,   1,   2,   2, // 2570-2573
  3,   1,   2,   2, // 2574-2577
  3,   1,   2, // 2578-2580
  1,   1,   1, // 2581-2583
  9,   7,   7,   7, // 2584-2587
  9,   5,   5,   2, // 2588-2591
  9,   7,   5,   5,   2, // 2592-2596
  9,   7, // 2597-2598
  9, // 2599
  1, // 2600
  3,   2,   2, // 2601-2603
  3,   2, // 2604-2605
  4,   3,   2, // 2606-2608
  4,   1, // 2609-2610
  4,   1,   2, // 2611-2613
  3,   1,   2, // 2614-2616
  1,   2,   3, // 2617-2619
  1,   2,   2, // 2620-2622
  4,   2, // 2623-2624
  4,   2,   2, // 2625-2627
  4,   2,   2, // 2628-2630
  4,   2,   2, // 2631-2633
  3,   2, // 2634-2635
  3,   2,   2, // 2636-2638
  3,   2,   2, // 2639-2641
  4,   2, // 2642-2643
  4,   1, // 2644-2645
  3,   2,   2, // 2646-2648
  3,   2,   2, // 2649-2651
  3,   4,   2,   2,   2, // 2652-2656
  3,   2,   2, // 2657-2659
  2, // 2660
  4,   1,   1, // 2661-2663
  4,   1,   1,   2, // 2664-2667
  4,   4,   2,   1,   1, // 2668-2672
  3,   2,   2, // 2673-2675
  4,   4,   2,   2, // 2676-2679
  4,   2,   2, // 2680-2682
  3,   2, // 2683-2684
  3,   2,   2, // 2685-2687
  3,   2, // 2688-2689
  3,   2,   2,   2, // 2690-2693
  4,   2, // 2694-2695
  3,   2,   2,   2, // 2696-2699
  5,   1, // 2700-2701
  5,   1,   1, // 2702-2704
  4,   2, // 2705-2706
  5,   2,   1,   1, // 2707-2710
  4,   2,   1,   1, // 2711-2714
  4,   1,   1, // 2715-2717
  5,   1,   1, // 2718-2720
  5,   2,   1,   1, // 2721-2724
  5,   2,   1,   1,   2, // 2725-2729
  5,   5,   1, // 2730-2732
  4,   2,   2, // 2733-2735
  5,   5,   1,   1, // 2736-2739
  4,   2, // 2740-2741
  4,   1, // 2742-2743
  2,   2, // 2744-2745
  1, // 2746
  2,   1, // 2747-2748
  2, // 2749
  3,   2, // 2750-2751
  2,   2, // 2752-2753
  3,   2, // 2754-2755
  2,   2, // 2756-2757
  2,   2, // 2758-2759
  2,   2, // 2760-2761
  2,   1, // 2762-2763
  2, // 2764
  2,   2, // 2765-2766
  2,   1, // 2767-2768
  2, // 2769
  3,   2,   2, // 2770-2772
  2,   2,   2, // 2773-2775
  3,   2,   2, // 2776-2778
  2,   2,   2, // 2779-2781
  2,   3,   2, // 2782-2784
  3,   2,   2, // 2785-2787
  3,   2, // 2788-2789
  2,   2, // 2790-2791
  4,   3,   2,   1,   2, // 2792-2796
  4,   3,   2,   1,   2,   2, // 2797-2802
  4,   2, // 2803-2804
  4,   1, // 2805-2806
  4,   1, // 2807-2808
  4,   4,   3,   1,   2, // 2809-2813
  4,   3,   2,   2, // 2814-2817
  4,   2,   1,   2,   2, // 2818-2822
  4,   3,   2, // 2823-2825
  4,   1,   2,   2, // 2826-2829
  4,   1,   1,   2, // 2830-2833
  4,   2,   2, // 2834-2836
  4,   2,   1,   1,   2, // 2837-2841
  4,   3,   1,   1,   2, // 2842-2846
  1,   1,   2, // 2847-2849
  4,   2,   2,   2, // 2850-2853
  4,   2,   1,   2, // 2854-2857
  4,   2,   2,   2, // 2858-2861
  4,   2,   2,   1, // 2862-2865
  2,   2, // 2866-2867
  2,   3, // 2868-2869
  1, // 2870
  4,   2, // 2871-2872
  4,   1,   1, // 2873-2875
  4,   2,   2, // 2876-2878
  4,   2,   2, // 2879-2881
  3,   2,   1,   2,   2, // 2882-2886
  4,   3,   1,   2,   1, // 2887-2891
  3,   2,   1,   2,   3, // 2892-2896
  4,   3,   1,   2,   3, // 2897-2901
  3,   1,   2,   2,   3, // 2902-2906
  4,   1,   1, // 2907-2909
  1,   3, // 2910-2911
  4,   2, // 2912-2913
  2,   2,   2, // 2914-2916
  2,   1,   1,   2,   2, // 2917-2921
  3,   2,   2, // 2922-2924
  3,   1,   1,   2,   2, // 2925-2929
  2,   2,   3, // 2930-2932
  2,   1,   1,   2,   3, // 2933-2937
  3,   2,   3, // 2938-2940
  3,   1,   1,   2,   3, // 2941-2945
  1,   1,   2,   2, // 2946-2949
  1,   2,   2,   2, // 2950-2953
  1,   1,   2,   3, // 2954-2957
  1,   2,   2,   3, // 2958-2961
  4,   1,   1,   2, // 2962-2965
  4,   2,   1,   1,   2, // 2966-2970
  4,   2, // 2971-2972
  4,   2,   2,   2, // 2973-2976
  3,   2, // 2977-2978
  3,   2,   2, // 2979-2981
  3,   2, // 2982-2983
  3, // 2984
  4, // 2985
  2,   2, // 2986-2987
  2, // 2988
  1,   2, // 2989-2990
  4,   7,   1, // 2991-2993
  9,   2, // 2994-2995
  9,   2, // 2996-2997
  9,   5,   5,   2, // 2998-3001
  9,   7,   5,   5,   2, // 3002-3006
  9,   1,   2, // 3007-3009
  9,   3,   1,   2, // 3010-3013
  9,   2,   1,   2, // 3014-3017
  9,   3,   2,   1,   2, // 3018-3022
  9,   3,   1,   2, // 3023-3026
  9,   1,   2, // 3027-3029
  9,   2,   1,   2, // 3030-3033
  9,   3,   2,   1,   2, // 3034-3038
  9,   3,   1,   2, // 3039-3042
  1,   2,   5, // 3043-3045
  2,   1,   2,   5, // 3046-3049
  3,   2,   1,   2,   5, // 3050-3054
  3,   1,   2,   5, // 3055-3058
  1,   2,   5, // 3059-3061
  2,   1,   2,   5, // 3062-3065
  3,   2,   1,   2,   5, // 3066-3070
  3,   1,   2,   5, // 3071-3074
  2,   1,   2,   7, // 3075-3078
  3,   2,   1,   2,   7, // 3079-3083
  7,   1,   2,   7, // 3084-3087
  3,   7,   1,   2,   7, // 3088-3092
  3,   1,   2,   7, // 3093-3096
  1,   2, // 3097-3098
  3,   1,   2, // 3099-3101
  9,   7, // 3102-3103
  9,   5,   5, // 3104-3106
  9,   5,   5, // 3107-3109
  9,   5,   5, // 3110-3112
  9,   7,   7,   7, // 3113-3116
  9,   9,   7,   7,   7, // 3117-3121
  9,   9,   7,   7, // 3122-3125
  9,   7,   5,   5, // 3126-3129
  9,   5,   5,   2, // 3130-3133
  9,   7,   2, // 3134-3136
  9,   7,   7,   2, // 3137-3140
  9,   5,   2, // 3141-3143
  9,   7,   5,   2, // 3144-3147
  9,   7,   5,   5, // 3148-3151
  9,   5,   5,   2, // 3152-3155
  9,   7, // 3156-3157
  9,   5, // 3158-3159
  9,   7,   7, // 3160-3162
  9,   5, // 3163-3164
  9,   5, // 3165-3166
  9,   9,   5,   5,   2, // 3167-3171
  9,   5, // 3172-3173
  9,   5,   5, // 3174-3176
  9,   5,   5,   2, // 3177-3180
  9,   7,   5,   5, // 3181-3184
  9,   5,   2, // 3185-3187
  9,   7,   5,   2, // 3188-3191
  9,   5,   2, // 3192-3194
  9,   7,   5,   2, // 3195-3198
  9,   5,   2, // 3199-3201
  9,   7,   5,   2, // 3202-3205
  9,   5,   5, // 3206-3208
  9,   7,   7, // 3209-3211
  1,   2,   7, // 3212-3214
  7,   1,   2,   7, // 3215-3218
  1,   2,   7, // 3219-3221
  7,   1,   2,   7, // 3222-3225
  3, // 3226
  9,   5,   2, // 3227-3229
  9,   7,   5,   5,   2, // 3230-3234
  9,   5,   5,   2, // 3235-3238
  9,   5,   2, // 3239-3241
  9,   7,   5,   2, // 3242-3245
  9,   5,   2,   2, // 3246-3249
  9,   7,   5,   2,   2, // 3250-3254
  9,   7,   5,   5, // 3255-3258
  9,   5,   2, // 3259-3261
  9,   7,   5,   2, // 3262-3265
  9,   3,   5,   2, // 3266-3269
  9,   3,   7,   5,   2, // 3270-3274
  9,   5,   2, // 3275-3277
  9,   7,   7, // 3278-3280
  9,   7, // 3281-3282
  1,   2,   7,   7, // 3283-3286
  7,   1,   2,   7,   7, // 3287-3291
  1,   2,   7,   7, // 3292-3295
  7,   1,   2,   7,   7, // 3296-3300
  9,   7,   7,   7, // 3301-3304
  9,   5, // 3305-3306
  9,   7,   5, // 3307-3309
  2, // 3310
  3,   2, // 3311-3312
  1,   2, // 3313-3314
  3,   1,   2, // 3315-3317
  2,   1,   2, // 3318-3320
  3,   2,   1,   2, // 3321-3324
  1, // 3325
  1,   2, // 3326-3327
  1, // 3328
  1, // 3329
  1,   1, // 3330-3331
  1, // 3332
  1,   1, // 3333-3334
  3, // 3335
  4,   2,   2, // 3336-3338
  1,   1,   1, // 3339-3341
  3,   2, // 3342-3343
  3,   2,   2,   2, // 3344-3347
  4,   3,   2,   2, // 3348-3351
  3,   2,   2, // 3352-3354
  4,   3,   2, // 3355-3357
  3,   2,   2, // 3358-3360
  3,   2,   2, // 3361-3363
  3,   2,   2, // 3364-3366
  3,   2,   2, // 3367-3369
  1,   1,   1, // 3370-3372
  2, // 3373
  2,   2, // 3374-3375
  2,   2, // 3376-3377
  4,   1,   2, // 3378-3380
  4,   2,   1,   2, // 3381-3384
  4,   1,   2, // 3385-3387
  4,   3,   1,   2, // 3388-3391
  1,   2,   3, // 3392-3394
  1,   2,   2, // 3395-3397
  3,   2,   1, // 3398-3400
  3,   3,   1, // 3401-3403
  2, // 3404
  3, // 3405
  4,   1, // 3406-3407
  3,   1, // 3408-3409
  3,   1, // 3410-3411
  4,   1,   2, // 3412-3414
  4,   1,   1, // 3415-3417
  4,   2,   1,   1, // 3418-3421
  4,   1,   1, // 3422-3424
  4,   2,   1,   1, // 3425-3428
  2, // 3429
  4,   3,   1,   2,   2, // 3430-3434
  9,   7,   7, // 3435-3437
  3,   1,   2,   2,   3, // 3438-3442
  3,   1,   2,   3, // 3443-3446
  2, // 3447
  9,   7,   7, // 3448-3450
  9,   1,   2, // 3451-3453
  1,   1,   1, // 3454-3456
  9,   2,   7, // 3457-3459
  1,   2,   7, // 3460-3462
  9,   2,   7,   7, // 3463-3466
  4,   2,   2, // 3467-3469
  2,   1,   2,   3, // 3470-3473
  2,   1,   2,   3, // 3474-3477
  1,   2,   3, // 3478-3480
  1,   2,   3, // 3481-3483
  4,   2,   2,   2,   2, // 3484-3488
  3,   1,   2,   3, // 3489-3492
  1,   2,   2, // 3493-3495
  2,   1,   2,   2, // 3496-3499
  3,   1,   2,   2, // 3500-3503
  3,   1,   2, // 3504-3506
  1,   1,   1, // 3507-3509
  9,   7,   7,   7, // 3510-3513
  9,   5,   5,   2, // 3514-3517
  9,   7,   5,   5,   2, // 3518-3522
  9,   7, // 3523-3524
  9, // 3525
  1, // 3526
  3,   2,   2, // 3527-3529
  3,   2, // 3530-3531
  4,   3,   2, // 3532-3534
  4,   1, // 3535-3536
  4,   1,   2, // 3537-3539
  3,   1,   2, // 3540-3542
  1,   2,   3, // 3543-3545
  1,   2,   2, // 3546-3548
  4,   2, // 3549-3550
  4,   2,   2, // 3551-3553
  4,   2,   2, // 3554-3556
  4,   2,   2, // 3557-3559
  3,   2, // 3560-3561
  4,   2,   2, // 3562-3564
  4,   2,   2, // 3565-3567
  4,   2, // 3568-3569
  4,   1, // 3570-3571
  4,   2,   2, // 3572-3574
  4,   2,   2, // 3575-3577
  3,   4,   2,   2,   2, // 3578-3582
  3,   2,   2, // 3583-3585
  2, // 3586
  4,   1,   1, // 3587-3589
  4,   1,   1,   2, // 3590-3593
  4,   4,   2,   1,   1, // 3594-3598
  3,   2,   2, // 3599-3601
  4,   4,   2,   2, // 3602-3605
  4,   2,   2, // 3606-3608
  3,   2, // 3609-3610
  3,   2,   2, // 3611-3613
  3,   2, // 3614-3615
  3,   2,   2,   2, // 3616-3619
  4,   2, // 3620-3621
  3,   2,   2,   2, // 3622-3625
  5,   1, // 3626-3627
  5,   1,   1, // 3628-3630
  4,   2, // 3631-3632
  5,   2,   1,   1, // 3633-3636
  4,   2,   1,   1, // 3637-3640
  4,   1,   1, // 3641-3643
  5,   1,   1, // 3644-3646
  5,   2,   1,   1, // 3647-3650
  5,   2,   1,   1,   2, // 3651-3655
  5,   5,   1, // 3656-3658
  4,   2,   2, // 3659-3661
  5,   5,   1,   1, // 3662-3665
  4,   2, // 3666-3667
  4,   1, // 3668-3669
  2,   2, // 3670-3671
  1, // 3672
  2,   1, // 3673-3674
  2, // 3675
  3,   2, // 3676-3677
  2,   2, // 3678-3679
  3,   2, // 3680-3681
  2,   2, // 3682-3683
  2,   2, // 3684-3685
  2,   2, // 3686-3687
  2,   1, // 3688-3689
  2, // 3690
  2,   2, // 3691-3692
  2,   1, // 3693-3694
  2, // 3695
  3,   3,   2, // 3696-3698
  2,   2,   2, // 3699-3701
  3,   2,   2, // 3702-3704
  2,   2,   2, // 3705-3707
  3,   3,   2, // 3708-3710
  3,   2,   2, // 3711-3713
  3,   2, // 3714-3715
  2,   2, // 3716-3717
  4,   3,   2,   1,   2, // 3718-3722
  4,   3,   2,   1,   2,   2, // 3723-3728
  4,   2, // 3729-3730
  4,   1, // 3731-3732
  4,   1, // 3733-3734
  4,   4,   3,   1,   2, // 3735-3739
  4,   3,   2,   2, // 3740-3743
  4,   2,   1,   2,   2, // 3744-3748
  4,   3,   2, // 3749-3751
  4,   1,   2,   2, // 3752-3755
  4,   1,   1,   2, // 3756-3759
  4,   2,   2, // 3760-3762
  4,   2,   1,   1,   2, // 3763-3767
  4,   3,   1,   1,   2, // 3768-3772
  1,   1,   2, // 3773-3775
  4,   2,   2,   2, // 3776-3779
  4,   2,   1,   2, // 3780-3783
  4,   2,   2,   2, // 3784-3787
  4,   2,   2,   1, // 3788-3791
  2,   3, // 3792-3793
  2,   3, // 3794-3795
  1, // 3796
  4,   2, // 3797-3798
  4,   1,   1, // 3799-3801
  4,   2,   2, // 3802-3804
  4,   2,   2, // 3805-3807
  3,   2,   1,   2,   3, // 3808-3812
  4,   3,   1,   2,   1, // 3813-3817
  3,   2,   1,   2,   3, // 3818-3822
  4,   3,   1,   2,   3, // 3823-3827
  3,   1,   2,   2,   3, // 3828-3832
  4,   1,   1, // 3833-3835
  1,   3, // 3836-3837
  4,   2, // 3838-3839
  2,   2,   3, // 3840-3842
  2,   1,   1,   2,   3, // 3843-3847
  3,   2,   3, // 3848-3850
  3,   1,   1,   2,   3, // 3851-3855
  2,   2,   3, // 3856-3858
  2,   1,   1,   2,   3, // 3859-3863
  3,   2,   3, // 3864-3866
  3,   1,   1,   2,   3, // 3867-3871
  1,   1,   2,   3, // 3872-3875
  1,   2,   2,   3, // 3876-3879
  1,   1,   2,   3, // 3880-3883
  1,   2,   2,   3, // 3884-3887
  4,   1,   1,   2, // 3888-3891
  4,   2,   1,   1,   2, // 3892-3896
  4,   2, // 3897-3898
  4,   2,   2,   2, // 3899-3902
  3,   2, // 3903-3904
  3,   2,   2, // 3905-3907
  3,   2, // 3908-3909
  3, // 3910
  4, // 3911
  2,   2, // 3912-3913
  2, // 3914
  1,   2, // 3915-3916
  4,   7,   1, // 3917-3919
  9,   2, // 3920-3921
  9,   2, // 3922-3923
  9,   5,   5,   2, // 3924-3927
  9,   7,   5,   5,   2, // 3928-3932
  9,   1,   2, // 3933-3935
  9,   3,   1,   2, // 3936-3939
  9,   2,   1,   2, // 3940-3943
  9,   3,   2,   1,   2, // 3944-3948
  9,   3,   1,   2, // 3949-3952
  9,   1,   2, // 3953-3955
  9,   2,   1,   2, // 3956-3959
  9,   3,   2,   1,   2, // 3960-3964
  9,   3,   1,   2, // 3965-3968
  1,   2,   5, // 3969-3971
  2,   1,   2,   5, // 3972-3975
  3,   2,   1,   2,   5, // 3976-3980
  3,   1,   2,   5, // 3981-3984
  1,   2,   5, // 3985-3987
  2,   1,   2,   5, // 3988-3991
  3,   2,   1,   2,   5, // 3992-3996
  3,   1,   2,   5, // 3997-4000
  2,   1,   2,   7, // 4001-4004
  3,   2,   1,   2,   7, // 4005-4009
  7,   1,   2,   7, // 4010-4013
  3,   7,   1,   2,   7, // 4014-4018
  3,   1,   2,   7, // 4019-4022
  1,   2, // 4023-4024
  3,   1,   2, // 4025-4027
  9,   7, // 4028-4029
  9,   5,   5, // 4030-4032
  9,   5,   5, // 4033-4035
  9,   5,   5, // 4036-4038
  9,   7,   7,   7, // 4039-4042
  9,   9,   7,   7,   7, // 4043-4047
  9,   9,   7,   7, // 4048-4051
  9,   7,   5,   5, // 4052-4055
  9,   5,   5,   2, // 4056-4059
  9,   7,   2, // 4060-4062
  9,   7,   7,   2, // 4063-4066
  9,   5,   2, // 4067-4069
  9,   7,   5,   2, // 4070-4073
  9,   7,   5,   5, // 4074-4077
  9,   5,   5,   2, // 4078-4081
  9,   7, // 4082-4083
  9,   5, // 4084-4085
  9,   7,   7, // 4086-4088
  9,   5, // 4089-4090
  9,   5, // 4091-4092
  9,   9,   5,   5,   2, // 4093-4097
  9,   5, // 4098-4099
  9,   5,   5, // 4100-4102
  9,   5,   5,   2, // 4103-4106
  9,   7,   5,   5, // 4107-4110
  9,   5,   2, // 4111-4113
  9,   7,   5,   2, // 4114-4117
  9,   5,   2, // 4118-4120
  9,   7,   5,   2, // 4121-4124
  9,   5,   2, // 4125-4127
  9,   7,   5,   2, // 4128-4131
  9,   5,   5, // 4132-4134
  9,   7,   7, // 4135-4137
  1,   2,   7, // 4138-4140
  7,   1,   2,   7, // 4141-4144
  1,   2,   7, // 4145-4147
  7,   1,   2,   7, // 4148-4151
  3, // 4152
  9,   5,   2, // 4153-4155
  9,   7,   5,   5,   2, // 4156-4160
  9,   5,   5,   2, // 4161-4164
  9,   5,   2, // 4165-4167
  9,   7,   5,   2, // 4168-4171
  9,   5,   2,   2, // 4172-4175
  9,   7,   5,   2,   2, // 4176-4180
  9,   7,   5,   5, // 4181-4184
  9,   5,   2, // 4185-4187
  9,   7,   5,   2, // 4188-4191
  9,   3,   5,   2, // 4192-4195
  9,   3,   7,   5,   2, // 4196-4200
  9,   5,   2, // 4201-4203
  9,   7,   7, // 4204-4206
  9,   7, // 4207-4208
  1,   2,   7,   7, // 4209-4212
  7,   1,   2,   7,   7, // 4213-4217
  1,   2,   7,   7, // 4218-4221
  7,   1,   2,   7,   7, // 4222-4226
  9,   7,   7,   7, // 4227-4230
  9,   5, // 4231-4232
  9,   7,   5, // 4233-4235
  2, // 4236
  3,   2, // 4237-4238
  1,   2, // 4239-4240
  3,   1,   2, // 4241-4243
  2,   1,   2, // 4244-4246
  3,   2,   1,   2, // 4247-4250
  1, // 4251
  1,   2, // 4252-4253
  1, // 4254
  1, // 4255
  1,   1, // 4256-4257
  1, // 4258
  1,   1, // 4259-4260
  3, // 4261
  4,   2,   2, // 4262-4264
  1,   1,   1, // 4265-4267
  3,   2, // 4268-4269
  3,   2,   2,   2, // 4270-4273
  4,   3,   2,   2, // 4274-4277
  3,   2,   2, // 4278-4280
  4,   3,   2, // 4281-4283
  3,   2,   2, // 4284-4286
  3,   2,   2, // 4287-4289
  3,   2,   2, // 4290-4292
  3,   2,   2, // 4293-4295
  1,   1,   1, // 4296-4298
  2, // 4299
  2,   2, // 4300-4301
  2,   2, // 4302-4303
  4,   1,   2, // 4304-4306
  4,   2,   1,   2, // 4307-4310
  4,   1,   2, // 4311-4313
  4,   3,   1,   2, // 4314-4317
  1,   2,   3, // 4318-4320
  1,   2,   2, // 4321-4323
  3,   2,   1, // 4324-4326
  3,   3,   1, // 4327-4329
  2, // 4330
  3, // 4331
  4,   1, // 4332-4333
  3,   1, // 4334-4335
  3,   1, // 4336-4337
  4,   1,   2, // 4338-4340
  4,   1,   1, // 4341-4343
  4,   2,   1,   1, // 4344-4347
  4,   1,   1, // 4348-4350
  4,   2,   1,   1, // 4351-4354
  2, // 4355
  4,   3,   1,   2,   2, // 4356-4360
  9,   7,   7, // 4361-4363
  3,   1,   2,   2,   3, // 4364-4368
  3,   1,   2,   3, // 4369-4372
  2, // 4373
  9,   7,   7, // 4374-4376
  9,   1,   2, // 4377-4379
  1,   1,   1, // 4380-4382
  9,   2,   7, // 4383-4385
  1,   2,   7, // 4386-4388
  9,   2,   7,   7, // 4389-4392
  4,   2,   2, // 4393-4395
  2,   1,   2,   3, // 4396-4399
  2,   1,   2,   3, // 4400-4403
  1,   2,   3, // 4404-4406
  1,   2,   3, // 4407-4409
  4,   2,   2,   2,   2, // 4410-4414
  3,   1,   2,   3, // 4415-4418
  1,   2,   2, // 4419-4421
  2,   1,   2,   2, // 4422-4425
  3,   1,   2,   2, // 4426-4429
  3,   1,   2, // 4430-4432
  1,   1,   1, // 4433-4435
  9,   7,   7,   7, // 4436-4439
  9,   5,   5,   2, // 4440-4443
  9,   7,   5,   5,   2, // 4444-4448
  9,   7, // 4449-4450
  9, // 4451
  1, // 4452
  3,   2,   2, // 4453-4455
  3,   2, // 4456-4457
  4,   3,   2, // 4458-4460
  4,   1, // 4461-4462
  4,   1,   2, // 4463-4465
  3,   1,   2, // 4466-4468
  1,   2,   3, // 4469-4471
  1,   2,   2, // 4472-4474
  4,   2, // 4475-4476
  4,   2,   2, // 4477-4479
  4,   2,   2, // 4480-4482
  4,   2,   2, // 4483-4485
  3,   2, // 4486-4487
  4,   2,   2, // 4488-4490
  4,   2,   2, // 4491-4493
  4,   2, // 4494-4495
  4,   1, // 4496-4497
  4,   2,   2, // 4498-4500
  4,   2,   2, // 4501-4503
  3,   4,   2,   2,   2, // 4504-4508
  3,   2,   2, // 4509-4511
  2, // 4512
  4,   1,   1, // 4513-4515
  4,   1,   1,   2, // 4516-4519
  4,   4,   2,   1,   1, // 4520-4524
  3,   2,   2, // 4525-4527
  4,   4,   2,   2, // 4528-4531
  4,   2,   2, // 4532-4534
  3,   2, // 4535-4536
  3,   2,   2, // 4537-4539
  3,   2, // 4540-4541
  3,   2,   2,   2, // 4542-4545
  4,   2, // 4546-4547
  3,   2,   2,   2, // 4548-4551
  5,   1, // 4552-4553
  5,   1,   1, // 4554-4556
  4,   2, // 4557-4558
  5,   2,   1,   1, // 4559-4562
  4,   2,   1,   1, // 4563-4566
  4,   1,   1, // 4567-4569
  5,   1,   1, // 4570-4572
  5,   2,   1,   1, // 4573-4576
  5,   2,   1,   1,   2, // 4577-4581
  5,   5,   1, // 4582-4584
  4,   2,   2, // 4585-4587
  5,   5,   1,   1, // 4588-4591
  4,   2, // 4592-4593
  4,   1, // 4594-4595
  2,   2, // 4596-4597
  1, // 4598
  2,   1, // 4599-4600
  2, // 4601
  3,   2, // 4602-4603
  2,   2, // 4604-4605
  3,   2, // 4606-4607
  2,   2, // 4608-4609
  2,   2, // 4610-4611
  2,   2, // 4612-4613
  2,   1, // 4614-4615
  2, // 4616
  2,   2, // 4617-4618
  2,   1, // 4619-4620
  2, // 4621
  3,   3,   2, // 4622-4624
  2,   2,   2, // 4625-4627
  3,   2,   2, // 4628-4630
  2,   2,   2, // 4631-4633
  3,   3,   2, // 4634-4636
  3,   2,   2, // 4637-4639
  3,   2, // 4640-4641
  2,   2, // 4642-4643
  4,   3,   2,   1,   2, // 4644-4648
  4,   3,   2,   1,   2,   2, // 4649-4654
  4,   2, // 4655-4656
  4,   1, // 4657-4658
  4,   1, // 4659-4660
  4,   4,   3,   1,   2, // 4661-4665
  4,   3,   2,   2, // 4666-4669
  4,   2,   1,   2,   2, // 4670-4674
  4,   3,   2, // 4675-4677
  4,   1,   2,   2, // 4678-4681
  4,   1,   1,   2, // 4682-4685
  4,   2,   2, // 4686-4688
  4,   2,   1,   1,   2, // 4689-4693
  4,   3,   1,   1,   2, // 4694-4698
  1,   1,   2, // 4699-4701
  4,   2,   2,   2, // 4702-4705
  4,   2,   1,   2, // 4706-4709
  4,   2,   2,   2, // 4710-4713
  4,   2,   2,   1, // 4714-4717
  2,   3, // 4718-4719
  2,   3, // 4720-4721
  1, // 4722
  4,   2, // 4723-4724
  4,   1,   1, // 4725-4727
  4,   2,   2, // 4728-4730
  4,   2,   2, // 4731-4733
  3,   2,   1,   2,   3, // 4734-4738
  4,   3,   1,   2,   1, // 4739-4743
  3,   2,   1,   2,   3, // 4744-4748
  4,   3,   1,   2,   3, // 4749-4753
  3,   1,   2,   2,   3, // 4754-4758
  4,   1,   1, // 4759-4761
  1,   3, // 4762-4763
  4,   2, // 4764-4765
  2,   2,   3, // 4766-4768
  2,   1,   1,   2,   3, // 4769-4773
  3,   2,   3, // 4774-4776
  3,   1,   1,   2,   3, // 4777-4781
  2,   2,   3, // 4782-4784
  2,   1,   1,   2,   3, // 4785-4789
  3,   2,   3, // 4790-4792
  3,   1,   1,   2,   3, // 4793-4797
  1,   1,   2,   3, // 4798-4801
  1,   2,   2,   3, // 4802-4805
  1,   1,   2,   3, // 4806-4809
  1,   2,   2,   3, // 4810-4813
  4,   1,   1,   2, // 4814-4817
  4,   2,   1,   1,   2, // 4818-4822
  4,   2, // 4823-4824
  4,   2,   2,   2, // 4825-4828
  3,   2, // 4829-4830
  3,   2,   2, // 4831-4833
  3,   2, // 4834-4835
  3, // 4836
  4, // 4837
  2,   2, // 4838-4839
  2, // 4840
  1,   2, // 4841-4842
  4,   7,   1, // 4843-4845
  9,   2, // 4846-4847
  9,   2, // 4848-4849
  9,   5,   5,   2, // 4850-4853
  9,   7,   5,   5,   2, // 4854-4858
  9,   1,   2, // 4859-4861
  9,   3,   1,   2, // 4862-4865
  9,   2,   1,   2, // 4866-4869
  9,   3,   2,   1,   2, // 4870-4874
  9,   3,   1,   2, // 4875-4878
  9,   1,   2, // 4879-4881
  9,   2,   1,   2, // 4882-4885
  9,   3,   2,   1,   2, // 4886-4890
  9,   3,   1,   2, // 4891-4894
  1,   2,   5, // 4895-4897
  2,   1,   2,   5, // 4898-4901
  3,   2,   1,   2,   5, // 4902-4906
  3,   1,   2,   5, // 4907-4910
  1,   2,   5, // 4911-4913
  2,   1,   2,   5, // 4914-4917
  3,   2,   1,   2,   5, // 4918-4922
  3,   1,   2,   5, // 4923-4926
  2,   1,   2,   7, // 4927-4930
  3,   2,   1,   2,   7, // 4931-4935
  7,   1,   2,   7, // 4936-4939
  3,   7,   1,   2,   7, // 4940-4944
  3,   1,   2,   7, // 4945-4948
  1,   2, // 4949-4950
  3,   1,   2, // 4951-4953
  9,   7, // 4954-4955
  9,   5,   5, // 4956-4958
  9,   5,   5, // 4959-4961
  9,   5,   5, // 4962-4964
  9,   7,   7,   7, // 4965-4968
  9,   9,   7,   7,   7, // 4969-4973
  9,   9,   7,   7, // 4974-4977
  9,   7,   5,   5, // 4978-4981
  9,   5,   5,   2, // 4982-4985
  9,   7,   2, // 4986-4988
  9,   7,   7,   2, // 4989-4992
  9,   5,   2, // 4993-4995
  9,   7,   5,   2, // 4996-4999
  9,   7,   5,   5, // 5000-5003
  9,   5,   5,   2, // 5004-5007
  9,   7, // 5008-5009
  9,   5, // 5010-5011
  9,   7,   7, // 5012-5014
  9,   5, // 5015-5016
  9,   5, // 5017-5018
  9,   9,   5,   5,   2, // 5019-5023
  9,   5, // 5024-5025
  9,   5,   5, // 5026-5028
  9,   5,   5,   2, // 5029-5032
  9,   7,   5,   5, // 5033-5036
  9,   5,   2, // 5037-5039
  9,   7,   5,   2, // 5040-5043
  9,   5,   2, // 5044-5046
  9,   7,   5,   2, // 5047-5050
  9,   5,   2, // 5051-5053
  9,   7,   5,   2, // 5054-5057
  9,   5,   5, // 5058-5060
  9,   7,   7, // 5061-5063
  1,   2,   7, // 5064-5066
  7,   1,   2,   7, // 5067-5070
  1,   2,   7, // 5071-5073
  7,   1,   2,   7, // 5074-5077
  3, // 5078
  9,   5,   2, // 5079-5081
  9,   7,   5,   5,   2, // 5082-5086
  9,   5,   5,   2, // 5087-5090
  9,   5,   2, // 5091-5093
  9,   7,   5,   2, // 5094-5097
  9,   5,   2,   2, // 5098-5101
  9,   7,   5,   2,   2, // 5102-5106
  9,   7,   5,   5, // 5107-5110
  9,   5,   2, // 5111-5113
  9,   7,   5,   2, // 5114-5117
  9,   3,   5,   2, // 5118-5121
  9,   3,   7,   5,   2, // 5122-5126
  9,   5,   2, // 5127-5129
  9,   7,   7, // 5130-5132
  9,   7, // 5133-5134
  1,   2,   7,   7, // 5135-5138
  7,   1,   2,   7,   7, // 5139-5143
  1,   2,   7,   7, // 5144-5147
  7,   1,   2,   7,   7, // 5148-5152
  9,   7,   7,   7, // 5153-5156
  9,   5, // 5157-5158
  9,   7,   5, // 5159-5161
  2, // 5162
  3,   2, // 5163-5164
  1,   2, // 5165-5166
  3,   1,   2, // 5167-5169
  2,   1,   2, // 5170-5172
  3,   2,   1,   2, // 5173-5176
  1, // 5177
  1,   2, // 5178-5179
  1, // 5180
  1, // 5181
  1,   1, // 5182-5183
  1, // 5184
  1,   1, // 5185-5186
  3, // 5187
  4,   2,   2, // 5188-5190
  2,   1,   1, // 5191-5193
  3,   2, // 5194-5195
  3,   2,   2,   2, // 5196-5199
  4,   3,   2,   2, // 5200-5203
  3,   2,   2, // 5204-5206
  4,   3,   2, // 5207-5209
  3,   2,   2, // 5210-5212
  3,   2,   2, // 5213-5215
  3,   2,   2, // 5216-5218
  3,   2,   2, // 5219-5221
  2,   1,   1, // 5222-5224
  2, // 5225
  2,   2, // 5226-5227
  2,   2, // 5228-5229
  4,   1,   2, // 5230-5232
  4,   2,   1,   2, // 5233-5236
  4,   1,   2, // 5237-5239
  4,   3,   1,   2, // 5240-5243
  1,   2,   3, // 5244-5246
  1,   2,   2, // 5247-5249
  3,   2,   1, // 5250-5252
  3,   3,   1, // 5253-5255
  2, // 5256
  3, // 5257
  4,   1, // 5258-5259
  3,   1, // 5260-5261
  3,   1,   1, // 5262-5264
  4,   1,   2, // 5265-5267
  4,   1,   1, // 5268-5270
  4,   2,   1,   1, // 5271-5274
  4,   1,   1, // 5275-5277
  4,   2,   1,   1, // 5278-5281
  2, // 5282
  4,   3,   1,   2,   2, // 5283-5287
  9,   7,   7, // 5288-5290
  3,   1,   2,   2,   3, // 5291-5295
  3,   1,   2,   3, // 5296-5299
  2, // 5300
  9,   7,   7, // 5301-5303
  9,   1,   2, // 5304-5306
  2,   1,   1, // 5307-5309
  9,   2,   7, // 5310-5312
  1,   2,   7, // 5313-5315
  9,   2,   7,   7, // 5316-5319
  4,   2,   2, // 5320-5322
  2,   1,   2,   3, // 5323-5326
  2,   1,   2,   3, // 5327-5330
  1,   2,   3, // 5331-5333
  1,   2,   3, // 5334-5336
  4,   2,   2,   2,   2, // 5337-5341
  3,   1,   2,   3, // 5342-5345
  1,   2,   2, // 5346-5348
  2,   1,   2,   2, // 5349-5352
  3,   1,   2,   2, // 5353-5356
  3,   1,   2, // 5357-5359
  1,   1,   3,   3, // 5360-5363
  9,   7,   7,   7, // 5364-5367
  9,   5,   5,   2, // 5368-5371
  9,   7,   5,   5,   2, // 5372-5376
  9,   7, // 5377-5378
  9, // 5379
  1, // 5380
  3,   2,   2, // 5381-5383
  3,   2, // 5384-5385
  4,   3,   2, // 5386-5388
  4,   1, // 5389-5390
  4,   1,   2, // 5391-5393
  3,   1,   2, // 5394-5396
  1,   2,   3, // 5397-5399
  1,   2,   2, // 5400-5402
  4,   2, // 5403-5404
  4,   2,   2, // 5405-5407
  4,   2,   2, // 5408-5410
  4,   2,   2, // 5411-5413
  3,   2, // 5414-5415
  4,   2,   2, // 5416-5418
  4,   2,   2, // 5419-5421
  4,   2, // 5422-5423
  4,   1, // 5424-5425
  4,   2,   2, // 5426-5428
  4,   2,   2, // 5429-5431
  3,   4,   2,   2,   2, // 5432-5436
  3,   2,   2, // 5437-5439
  2, // 5440
  4,   1,   1, // 5441-5443
  4,   1,   1,   2, // 5444-5447
  4,   4,   2,   1,   1, // 5448-5452
  3,   2,   2, // 5453-5455
  4,   4,   2,   2, // 5456-5459
  4,   2,   2, // 5460-5462
  3,   2, // 5463-5464
  3,   2,   2, // 5465-5467
  3,   2, // 5468-5469
  3,   2,   2,   2, // 5470-5473
  4,   2, // 5474-5475
  3,   2,   2,   2, // 5476-5479
  5,   1, // 5480-5481
  5,   1,   1, // 5482-5484
  4,   2, // 5485-5486
  5,   2,   1,   1, // 5487-5490
  4,   2,   1,   1, // 5491-5494
  4,   1,   1, // 5495-5497
  5,   1,   1, // 5498-5500
  5,   2,   1,   1, // 5501-5504
  5,   2,   1,   1,   2, // 5505-5509
  5,   5,   1, // 5510-5512
  4,   2,   2, // 5513-5515
  5,   5,   1,   1, // 5516-5519
  4,   2, // 5520-5521
  4,   1, // 5522-5523
  2,   2, // 5524-5525
  1, // 5526
  2,   1, // 5527-5528
  2, // 5529
  3,   2, // 5530-5531
  2,   2, // 5532-5533
  3,   2, // 5534-5535
  2,   2, // 5536-5537
  2,   2, // 5538-5539
  2,   2, // 5540-5541
  2,   1, // 5542-5543
  2, // 5544
  2,   2, // 5545-5546
  2,   1, // 5547-5548
  2, // 5549
  3,   3,   2, // 5550-5552
  2,   2,   2, // 5553-5555
  3,   2,   2, // 5556-5558
  2,   2,   2, // 5559-5561
  3,   3,   2, // 5562-5564
  3,   2,   2, // 5565-5567
  3,   2, // 5568-5569
  2,   2, // 5570-5571
  4,   3,   2,   1,   2, // 5572-5576
  4,   3,   2,   1,   2,   2, // 5577-5582
  4,   2, // 5583-5584
  4,   1, // 5585-5586
  4,   1, // 5587-5588
  4,   4,   3,   1,   2, // 5589-5593
  4,   3,   2,   2, // 5594-5597
  4,   2,   1,   2,   2, // 5598-5602
  4,   3,   2, // 5603-5605
  4,   1,   2,   2, // 5606-5609
  4,   1,   1,   2, // 5610-5613
  4,   2,   2, // 5614-5616
  4,   2,   1,   1,   2, // 5617-5621
  4,   3,   1,   1,   2, // 5622-5626
  1,   1,   2, // 5627-5629
  4,   2,   2,   2, // 5630-5633
  4,   2,   1,   2, // 5634-5637
  4,   2,   2,   2, // 5638-5641
  4,   2,   2,   1, // 5642-5645
  2,   3, // 5646-5647
  2,   3, // 5648-5649
  1, // 5650
  4,   2, // 5651-5652
  4,   1,   1, // 5653-5655
  4,   2,   2, // 5656-5658
  4,   2,   2, // 5659-5661
  3,   2,   1,   2,   3, // 5662-5666
  4,   3,   1,   2,   1, // 5667-5671
  3,   2,   1,   2,   3, // 5672-5676
  4,   3,   1,   2,   3, // 5677-5681
  3,   1,   2,   2,   3, // 5682-5686
  4,   1,   1, // 5687-5689
  1,   3, // 5690-5691
  4,   2, // 5692-5693
  2,   2,   3, // 5694-5696
  2,   1,   1,   2,   3, // 5697-5701
  3,   2,   3, // 5702-5704
  3,   1,   1,   2,   3, // 5705-5709
  2,   2,   3, // 5710-5712
  2,   1,   1,   2,   3, // 5713-5717
  3,   2,   3, // 5718-5720
  3,   1,   1,   2,   3, // 5721-5725
  1,   1,   2,   3, // 5726-5729
  1,   2,   2,   3, // 5730-5733
  1,   1,   2,   3, // 5734-5737
  1,   2,   2,   3, // 5738-5741
  4,   1,   1,   2, // 5742-5745
  4,   2,   1,   1,   2, // 5746-5750
  4,   2, // 5751-5752
  4,   2,   2,   2, // 5753-5756
  3,   2, // 5757-5758
  3,   2,   2, // 5759-5761
  3,   2, // 5762-5763
  3, // 5764
  4, // 5765
  2,   2, // 5766-5767
  2, // 5768
  1,   2, // 5769-5770
  4,   7,   1, // 5771-5773
  9,   2, // 5774-5775
  9,   2, // 5776-5777
  9,   5,   5,   2, // 5778-5781
  9,   7,   5,   5,   2, // 5782-5786
  9,   1,   2, // 5787-5789
  9,   3,   1,   2, // 5790-5793
  9,   2,   1,   2, // 5794-5797
  9,   3,   2,   1,   2, // 5798-5802
  9,   3,   1,   2, // 5803-5806
  9,   1,   2, // 5807-5809
  9,   2,   1,   2, // 5810-5813
  9,   3,   2,   1,   2, // 5814-5818
  9,   3,   1,   2, // 5819-5822
  1,   2,   5, // 5823-5825
  2,   1,   2,   5, // 5826-5829
  3,   2,   1,   2,   5, // 5830-5834
  3,   1,   2,   5, // 5835-5838
  1,   2,   5, // 5839-5841
  2,   1,   2,   5, // 5842-5845
  3,   2,   1,   2,   5, // 5846-5850
  3,   1,   2,   5, // 5851-5854
  2,   1,   2,   7, // 5855-5858
  3,   2,   1,   2,   7, // 5859-5863
  7,   1,   2,   7, // 5864-5867
  3,   7,   1,   2,   7, // 5868-5872
  3,   1,   2,   7, // 5873-5876
  1,   2, // 5877-5878
  3,   1,   2, // 5879-5881
  9,   7, // 5882-5883
  9,   5,   5, // 5884-5886
  9,   5,   5, // 5887-5889
  9,   5,   5, // 5890-5892
  9,   7,   7,   7, // 5893-5896
  9,   9,   7,   7,   7, // 5897-5901
  9,   9,   7,   7, // 5902-5905
  9,   7,   5,   5, // 5906-5909
  9,   5,   5,   2, // 5910-5913
  9,   7,   2, // 5914-5916
  9,   7,   7,   2, // 5917-5920
  9,   5,   2, // 5921-5923
  9,   7,   5,   2, // 5924-5927
  9,   7,   5,   5, // 5928-5931
  9,   5,   5,   2, // 5932-5935
  9,   7, // 5936-5937
  9,   5, // 5938-5939
  9,   7,   7, // 5940-5942
  9,   5, // 5943-5944
  9,   5, // 5945-5946
  9,   9,   5,   5,   2, // 5947-5951
  9,   5, // 5952-5953
  9,   5,   5, // 5954-5956
  9,   5,   5,   2, // 5957-5960
  9,   7,   5,   5, // 5961-5964
  9,   5,   2, // 5965-5967
  9,   7,   5,   2, // 5968-5971
  9,   5,   2, // 5972-5974
  9,   7,   5,   2, // 5975-5978
  9,   5,   2, // 5979-5981
  9,   7,   5,   2, // 5982-5985
  9,   5,   5, // 5986-5988
  9,   7,   7, // 5989-5991
  1,   2,   7, // 5992-5994
  7,   1,   2,   7, // 5995-5998
  1,   2,   7, // 5999-6001
  7,   1,   2,   7, // 6002-6005
  3, // 6006
  9,   5,   2, // 6007-6009
  9,   7,   5,   5,   2, // 6010-6014
  9,   5,   5,   2, // 6015-6018
  9,   5,   2, // 6019-6021
  9,   7,   5,   2, // 6022-6025
  9,   5,   2,   2, // 6026-6029
  9,   7,   5,   2,   2, // 6030-6034
  9,   7,   5,   5, // 6035-6038
  9,   5,   2, // 6039-6041
  9,   7,   5,   2, // 6042-6045
  9,   3,   5,   2, // 6046-6049
  9,   3,   7,   5,   2, // 6050-6054
  9,   5,   2, // 6055-6057
  9,   7,   7, // 6058-6060
  9,   7, // 6061-6062
  1,   2,   7,   7, // 6063-6066
  7,   1,   2,   7,   7, // 6067-6071
  1,   2,   7,   7, // 6072-6075
  7,   1,   2,   7,   7, // 6076-6080
  9,   7,   7,   7, // 6081-6084
  9,   5, // 6085-6086
  9,   7,   5, // 6087-6089
  2, // 6090
  3,   2, // 6091-6092
  1,   2, // 6093-6094
  3,   1,   2, // 6095-6097
  2,   1,   2, // 6098-6100
  3,   2,   1,   2, // 6101-6104
  1, // 6105
  1,   2, // 6106-6107
  1, // 6108
  1, // 6109
  1,   1, // 6110-6111
  1, // 6112
  1,   1, // 6113-6114
  3, // 6115
  4,   2,   2, // 6116-6118
  1,   1,   1, // 6119-6121
  3,   2, // 6122-6123
  3,   2,   2,   2, // 6124-6127
  4,   3,   2,   2, // 6128-6131
  3,   2,   2, // 6132-6134
  4,   3,   2, // 6135-6137
  3,   2,   2, // 6138-6140
  3,   2,   2, // 6141-6143
  3,   2,   2, // 6144-6146
  3,   2,   2, // 6147-6149
  1,   1,   1, // 6150-6152
  2, // 6153
  2,   2, // 6154-6155
  2,   2, // 6156-6157
  4,   1,   2, // 6158-6160
  4,   2,   1,   2, // 6161-6164
  4,   1,   2, // 6165-6167
  4,   3,   1,   2, // 6168-6171
  1,   2,   3, // 6172-6174
  1,   2,   2, // 6175-6177
  3,   2,   1, // 6178-6180
  3,   3,   1, // 6181-6183
  2, // 6184
  3, // 6185
  4,   1, // 6186-6187
  3,   1, // 6188-6189
  3,   1, // 6190-6191
  4,   1,   2, // 6192-6194
  4,   1,   1, // 6195-6197
  4,   2,   1,   1, // 6198-6201
  4,   1,   1, // 6202-6204
  4,   2,   1,   1, // 6205-6208
  2, // 6209
  4,   3,   1,   2,   2, // 6210-6214
  9,   7,   7, // 6215-6217
  3,   1,   2,   2,   3, // 6218-6222
  3,   1,   2,   3, // 6223-6226
  2, // 6227
  9,   7,   7, // 6228-6230
  9,   1,   2, // 6231-6233
  1,   1,   1, // 6234-6236
  9,   2,   7, // 6237-6239
  1,   2,   7, // 6240-6242
  9,   2,   7,   7, // 6243-6246
  4,   2,   2, // 6247-6249
  2,   1,   2,   3, // 6250-6253
  2,   1,   2,   3, // 6254-6257
  1,   2,   3, // 6258-6260
  1,   2,   3, // 6261-6263
  4,   2,   2,   2,   2, // 6264-6268
  3,   1,   2,   3, // 6269-6272
  1,   2,   2, // 6273-6275
  2,   1,   2,   2, // 6276-6279
  3,   1,   2,   2, // 6280-6283
  3,   1,   2, // 6284-6286
  1,   1,   1, // 6287-6289
  9,   7,   7,   7, // 6290-6293
  9,   5,   5,   2, // 6294-6297
  9,   7,   5,   5,   2, // 6298-6302
  9,   7, // 6303-6304
  9, // 6305
  1, // 6306
  3,   2,   2, // 6307-6309
  3,   2, // 6310-6311
  4,   3,   2, // 6312-6314
  4,   1, // 6315-6316
  4,   1,   2, // 6317-6319
  3,   1,   2, // 6320-6322
  1,   2,   3, // 6323-6325
  1,   2,   2, // 6326-6328
  4,   2, // 6329-6330
  4,   2,   2, // 6331-6333
  4,   2,   2, // 6334-6336
  4,   2,   2, // 6337-6339
  3,   2, // 6340-6341
  4,   2,   2, // 6342-6344
  4,   2,   2, // 6345-6347
  4,   2, // 6348-6349
  4,   1, // 6350-6351
  4,   2,   2, // 6352-6354
  4,   2,   2, // 6355-6357
  3,   4,   2,   2,   2, // 6358-6362
  3,   2,   2, // 6363-6365
  2, // 6366
  4,   1,   1, // 6367-6369
  4,   1,   1,   2, // 6370-6373
  4,   4,   2,   1,   1, // 6374-6378
  3,   2,   2, // 6379-6381
  4,   4,   2,   2, // 6382-6385
  4,   2,   2, // 6386-6388
  3,   2, // 6389-6390
  3,   2,   2, // 6391-6393
  3,   2, // 6394-6395
  3,   2,   2,   2, // 6396-6399
  4,   2, // 6400-6401
  3,   2,   2,   2, // 6402-6405
  5,   1, // 6406-6407
  5,   1,   1, // 6408-6410
  4,   2, // 6411-6412
  5,   2,   1,   1, // 6413-6416
  4,   2,   1,   1, // 6417-6420
  4,   1,   1, // 6421-6423
  5,   1,   1, // 6424-6426
  5,   2,   1,   1, // 6427-6430
  5,   2,   1,   1,   2, // 6431-6435
  5,   5,   1, // 6436-6438
  4,   2,   2, // 6439-6441
  5,   5,   1,   1, // 6442-6445
  4,   2, // 6446-6447
  4,   1, // 6448-6449
  2,   2, // 6450-6451
  1, // 6452
  2,   1, // 6453-6454
  2, // 6455
  3,   2, // 6456-6457
  2,   2, // 6458-6459
  3,   2, // 6460-6461
  2,   2, // 6462-6463
  2,   2, // 6464-6465
  2,   2, // 6466-6467
  2,   1, // 6468-6469
  2, // 6470
  2,   2, // 6471-6472
  2,   1, // 6473-6474
  2, // 6475
  3,   3,   2, // 6476-6478
  2,   2,   2, // 6479-6481
  3,   2,   2, // 6482-6484
  2,   2,   2, // 6485-6487
  3,   3,   2, // 6488-6490
  3,   2,   2, // 6491-6493
  3,   2, // 6494-6495
  2,   2, // 6496-6497
  4,   3,   2,   1,   2, // 6498-6502
  4,   3,   2,   1,   2,   2, // 6503-6508
  4,   2, // 6509-6510
  4,   1, // 6511-6512
  4,   1, // 6513-6514
  4,   4,   3,   1,   2, // 6515-6519
  4,   3,   2,   2, // 6520-6523
  4,   2,   1,   2,   2, // 6524-6528
  4,   3,   2, // 6529-6531
  4,   1,   2,   2, // 6532-6535
  4,   1,   1,   2, // 6536-6539
  4,   2,   2, // 6540-6542
  4,   2,   1,   1,   2, // 6543-6547
  4,   3,   1,   1,   2, // 6548-6552
  1,   1,   2, // 6553-6555
  4,   2,   2,   2, // 6556-6559
  4,   2,   1,   2, // 6560-6563
  4,   2,   2,   2, // 6564-6567
  4,   2,   2,   1, // 6568-6571
  2,   3, // 6572-6573
  2,   3, // 6574-6575
  1, // 6576
  4,   2, // 6577-6578
  4,   1,   1, // 6579-6581
  4,   2,   2, // 6582-6584
  4,   2,   2, // 6585-6587
  3,   2,   1,   2,   3, // 6588-6592
  4,   3,   1,   2,   1, // 6593-6597
  3,   2,   1,   2,   3, // 6598-6602
  4,   3,   1,   2,   3, // 6603-6607
  3,   1,   2,   2,   3, // 6608-6612
  4,   1,   1, // 6613-6615
  1,   3, // 6616-6617
  4,   2, // 6618-6619
  2,   2,   3, // 6620-6622
  2,   1,   1,   2,   3, // 6623-6627
  3,   2,   3, // 6628-6630
  3,   1,   1,   2,   3, // 6631-6635
  2,   2,   3, // 6636-6638
  2,   1,   1,   2,   3, // 6639-6643
  3,   2,   3, // 6644-6646
  3,   1,   1,   2,   3, // 6647-6651
  1,   1,   2,   3, // 6652-6655
  1,   2,   2,   3, // 6656-6659
  1,   1,   2,   3, // 6660-6663
  1,   2,   2,   3, // 6664-6667
  4,   1,   1,   2, // 6668-6671
  4,   2,   1,   1,   2, // 6672-6676
  4,   2, // 6677-6678
  4,   2,   2,   2, // 6679-6682
  3,   2, // 6683-6684
  3,   2,   2, // 6685-6687
  3,   2, // 6688-6689
  3, // 6690
  4, // 6691
  2,   2, // 6692-6693
  2, // 6694
  1,   2, // 6695-6696
  4,   7,   1, // 6697-6699
  9,   2, // 6700-6701
  9,   2, // 6702-6703
  9,   5,   5,   2, // 6704-6707
  9,   7,   5,   5,   2, // 6708-6712
  9,   1,   2, // 6713-6715
  9,   3,   1,   2, // 6716-6719
  9,   2,   1,   2, // 6720-6723
  9,   3,   2,   1,   2, // 6724-6728
  9,   3,   1,   2, // 6729-6732
  9,   1,   2, // 6733-6735
  9,   2,   1,   2, // 6736-6739
  9,   3,   2,   1,   2, // 6740-6744
  9,   3,   1,   2, // 6745-6748
  1,   2,   5, // 6749-6751
  2,   1,   2,   5, // 6752-6755
  3,   2,   1,   2,   5, // 6756-6760
  3,   1,   2,   5, // 6761-6764
  1,   2,   5, // 6765-6767
  2,   1,   2,   5, // 6768-6771
  3,   2,   1,   2,   5, // 6772-6776
  3,   1,   2,   5, // 6777-6780
  2,   1,   2,   7, // 6781-6784
  3,   2,   1,   2,   7, // 6785-6789
  7,   1,   2,   7, // 6790-6793
  3,   7,   1,   2,   7, // 6794-6798
  3,   1,   2,   7, // 6799-6802
  1,   2, // 6803-6804
  3,   1,   2, // 6805-6807
  9,   7, // 6808-6809
  9,   5,   5, // 6810-6812
  9,   5,   5, // 6813-6815
  9,   5,   5, // 6816-6818
  9,   7,   7,   7, // 6819-6822
  9,   9,   7,   7,   7, // 6823-6827
  9,   9,   7,   7, // 6828-6831
  9,   7,   5,   5, // 6832-6835
  9,   5,   5,   2, // 6836-6839
  9,   7,   2, // 6840-6842
  9,   7,   7,   2, // 6843-6846
  9,   5,   2, // 6847-6849
  9,   7,   5,   2, // 6850-6853
  9,   7,   5,   5, // 6854-6857
  9,   5,   5,   2, // 6858-6861
  9,   7, // 6862-6863
  9,   5, // 6864-6865
  9,   7,   7, // 6866-6868
  9,   5, // 6869-6870
  9,   5, // 6871-6872
  9,   9,   5,   5,   2, // 6873-6877
  9,   5, // 6878-6879
  9,   5,   5, // 6880-6882
  9,   5,   5,   2, // 6883-6886
  9,   7,   5,   5, // 6887-6890
  9,   5,   2, // 6891-6893
  9,   7,   5,   2, // 6894-6897
  9,   5,   2, // 6898-6900
  9,   7,   5,   2, // 6901-6904
  9,   5,   2, // 6905-6907
  9,   7,   5,   2, // 6908-6911
  9,   5,   5, // 6912-6914
  9,   7,   7, // 6915-6917
  1,   2,   7, // 6918-6920
  7,   1,   2,   7, // 6921-6924
  1,   2,   7, // 6925-6927
  7,   1,   2,   7, // 6928-6931
  3, // 6932
  9,   5,   2, // 6933-6935
  9,   7,   5,   5,   2, // 6936-6940
  9,   5,   5,   2, // 6941-6944
  9,   5,   2, // 6945-6947
  9,   7,   5,   2, // 6948-6951
  9,   5,   2,   2, // 6952-6955
  9,   7,   5,   2,   2, // 6956-6960
  9,   7,   5,   5, // 6961-6964
  9,   5,   2, // 6965-6967
  9,   7,   5,   2, // 6968-6971
  9,   3,   5,   2, // 6972-6975
  9,   3,   7,   5,   2, // 6976-6980
  9,   5,   2, // 6981-6983
  9,   7,   7, // 6984-6986
  9,   7, // 6987-6988
  1,   2,   7,   7, // 6989-6992
  7,   1,   2,   7,   7, // 6993-6997
  1,   2,   7,   7, // 6998-7001
  7,   1,   2,   7,   7, // 7002-7006
  9,   7,   7,   7, // 7007-7010
  9,   5, // 7011-7012
  9,   7,   5, // 7013-7015
  2, // 7016
  3,   2, // 7017-7018
  1,   2, // 7019-7020
  3,   1,   2, // 7021-7023
  2,   1,   2, // 7024-7026
  3,   2,   1,   2, // 7027-7030
  1, // 7031
  1,   2, // 7032-7033
  1, // 7034
  1, // 7035
  1,   1, // 7036-7037
  1, // 7038
  1,   1, // 7039-7040
  3, // 7041
  4,   2,   2, // 7042-7044
  1,   1,   1, // 7045-7047
  3,   2, // 7048-7049
  3,   2,   2,   2, // 7050-7053
  4,   3,   2,   2, // 7054-7057
  3,   2,   2, // 7058-7060
  4,   3,   2, // 7061-7063
  3,   2,   2, // 7064-7066
  3,   2,   2, // 7067-7069
  3,   2,   2, // 7070-7072
  3,   2,   2, // 7073-7075
  1,   1,   1, // 7076-7078
  2, // 7079
  2,   2, // 7080-7081
  2,   2, // 7082-7083
  4,   1,   2, // 7084-7086
  4,   2,   1,   2, // 7087-7090
  4,   1,   2, // 7091-7093
  4,   3,   1,   2, // 7094-7097
  1,   2,   3, // 7098-7100
  1,   2,   2, // 7101-7103
  3,   2,   1, // 7104-7106
  3,   3,   1, // 7107-7109
  2, // 7110
  3, // 7111
  4,   1, // 7112-7113
  3,   1, // 7114-7115
  3,   1, // 7116-7117
  4,   1,   2, // 7118-7120
  4,   1,   1, // 7121-7123
  4,   2,   1,   1, // 7124-7127
  4,   1,   1, // 7128-7130
  4,   2,   1,   1, // 7131-7134
  2, // 7135
  4,   3,   1,   2,   2, // 7136-7140
  9,   7,   7, // 7141-7143
  3,   1,   2,   2,   3, // 7144-7148
  3,   1,   2,   3, // 7149-7152
  2, // 7153
  9,   7,   7, // 7154-7156
  9,   1,   2, // 7157-7159
  1,   1,   1, // 7160-7162
  9,   2,   7, // 7163-7165
  1,   2,   7, // 7166-7168
  9,   2,   7,   7, // 7169-7172
  4,   2,   2, // 7173-7175
  2,   1,   2,   3, // 7176-7179
  2,   1,   2,   3, // 7180-7183
  1,   2,   3, // 7184-7186
  1,   2,   3, // 7187-7189
  4,   2,   2,   2,   2, // 7190-7194
  3,   1,   2,   3, // 7195-7198
  1,   2,   2, // 7199-7201
  2,   1,   2,   2, // 7202-7205
  3,   1,   2,   2, // 7206-7209
  3,   1,   2, // 7210-7212
  1,   1,   1, // 7213-7215
  9,   7,   7,   7, // 7216-7219
  9,   5,   5,   2, // 7220-7223
  9,   7,   5,   5,   2, // 7224-7228
  9,   7, // 7229-7230
  9, // 7231
  1, // 7232
  3,   2,   2, // 7233-7235
  3,   2, // 7236-7237
  4,   3,   2, // 7238-7240
  4,   1, // 7241-7242
  4,   1,   2, // 7243-7245
  3,   1,   2, // 7246-7248
  1,   2,   3, // 7249-7251
  1,   2,   2, // 7252-7254
  4,   2, // 7255-7256
  4,   2,   2, // 7257-7259
  4,   2,   2, // 7260-7262
  4,   2,   2, // 7263-7265
  3,   2, // 7266-7267
  4,   2,   2, // 7268-7270
  4,   2,   2, // 7271-7273
  4,   2, // 7274-7275
  4,   1, // 7276-7277
  4,   2,   2, // 7278-7280
  4,   2,   2, // 7281-7283
  3,   4,   2,   2,   2, // 7284-7288
  3,   2,   2, // 7289-7291
  2, // 7292
  4,   1,   1, // 7293-7295
  4,   1,   1,   2, // 7296-7299
  4,   4,   2,   1,   1, // 7300-7304
  3,   2,   2, // 7305-7307
  4,   4,   2,   2, // 7308-7311
  4,   2,   2, // 7312-7314
  3,   2, // 7315-7316
  3,   2,   2, // 7317-7319
  3,   2, // 7320-7321
  3,   2,   2,   2, // 7322-7325
  4,   2, // 7326-7327
  3,   2,   2,   2, // 7328-7331
  5,   1, // 7332-7333
  5,   1,   1, // 7334-7336
  4,   2, // 7337-7338
  5,   2,   1,   1, // 7339-7342
  4,   2,   1,   1, // 7343-7346
  4,   1,   1, // 7347-7349
  5,   1,   1, // 7350-7352
  5,   2,   1,   1, // 7353-7356
  5,   2,   1,   1,   2, // 7357-7361
  5,   5,   1, // 7362-7364
  4,   2,   2, // 7365-7367
  5,   5,   1,   1, // 7368-7371
  4,   2, // 7372-7373
  4,   1, // 7374-7375
  2,   2, // 7376-7377
  1, // 7378
  2,   1, // 7379-7380
  2, // 7381
  3,   2, // 7382-7383
  2,   2, // 7384-7385
  3,   2, // 7386-7387
  2,   2, // 7388-7389
  2,   2, // 7390-7391
  2,   2, // 7392-7393
  2,   1, // 7394-7395
  2, // 7396
  2,   2, // 7397-7398
  2,   1, // 7399-7400
  2, // 7401
  3,   3,   2, // 7402-7404
  2,   2,   2, // 7405-7407
  3,   2,   2, // 7408-7410
  2,   2,   2, // 7411-7413
  3,   3,   2, // 7414-7416
  3,   2,   2, // 7417-7419
  3,   2, // 7420-7421
  2,   2, // 7422-7423
  4,   3,   2,   1,   2, // 7424-7428
  4,   3,   2,   1,   2,   2, // 7429-7434
  4,   2, // 7435-7436
  4,   1, // 7437-7438
  4,   1, // 7439-7440
  4,   4,   3,   1,   2, // 7441-7445
  4,   3,   2,   2, // 7446-7449
  4,   2,   1,   2,   2, // 7450-7454
  4,   3,   2, // 7455-7457
  4,   1,   2,   2, // 7458-7461
  4,   1,   1,   2, // 7462-7465
  4,   2,   2, // 7466-7468
  4,   2,   1,   1,   2, // 7469-7473
  4,   3,   1,   1,   2, // 7474-7478
  1,   1,   2, // 7479-7481
  4,   2,   2,   2, // 7482-7485
  4,   2,   1,   2, // 7486-7489
  4,   2,   2,   2, // 7490-7493
  4,   2,   2,   1, // 7494-7497
  2,   3, // 7498-7499
  2,   3, // 7500-7501
  1, // 7502
  4,   2, // 7503-7504
  4,   1,   1, // 7505-7507
  4,   2,   2, // 7508-7510
  4,   2,   2, // 7511-7513
  3,   2,   1,   2,   3, // 7514-7518
  4,   3,   1,   2,   1, // 7519-7523
  3,   2,   1,   2,   3, // 7524-7528
  4,   3,   1,   2,   3, // 7529-7533
  3,   1,   2,   2,   3, // 7534-7538
  4,   1,   1, // 7539-7541
  1,   3, // 7542-7543
  4,   2, // 7544-7545
  2,   2,   3, // 7546-7548
  2,   1,   1,   2,   3, // 7549-7553
  3,   2,   3, // 7554-7556
  3,   1,   1,   2,   3, // 7557-7561
  2,   2,   3, // 7562-7564
  2,   1,   1,   2,   3, // 7565-7569
  3,   2,   3, // 7570-7572
  3,   1,   1,   2,   3, // 7573-7577
  1,   1,   2,   3, // 7578-7581
  1,   2,   2,   3, // 7582-7585
  1,   1,   2,   3, // 7586-7589
  1,   2,   2,   3, // 7590-7593
  4,   1,   1,   2, // 7594-7597
  4,   2,   1,   1,   2, // 7598-7602
  4,   2, // 7603-7604
  4,   2,   2,   2, // 7605-7608
  3,   2, // 7609-7610
  3,   2,   2, // 7611-7613
  3,   2, // 7614-7615
  3, // 7616
  4, // 7617
  2,   2, // 7618-7619
  2, // 7620
  1,   2, // 7621-7622
  4,   7,   1, // 7623-7625
  9,   2, // 7626-7627
  9,   2, // 7628-7629
  9,   5,   5,   2, // 7630-7633
  9,   7,   5,   5,   2, // 7634-7638
  9,   1,   2, // 7639-7641
  9,   3,   1,   2, // 7642-7645
  9,   2,   1,   2, // 7646-7649
  9,   3,   2,   1,   2, // 7650-7654
  9,   3,   1,   2, // 7655-7658
  9,   1,   2, // 7659-7661
  9,   2,   1,   2, // 7662-7665
  9,   3,   2,   1,   2, // 7666-7670
  9,   3,   1,   2, // 7671-7674
  1,   2,   5, // 7675-7677
  2,   1,   2,   5, // 7678-7681
  3,   2,   1,   2,   5, // 7682-7686
  3,   1,   2,   5, // 7687-7690
  1,   2,   5, // 7691-7693
  2,   1,   2,   5, // 7694-7697
  3,   2,   1,   2,   5, // 7698-7702
  3,   1,   2,   5, // 7703-7706
  2,   1,   2,   7, // 7707-7710
  3,   2,   1,   2,   7, // 7711-7715
  7,   1,   2,   7, // 7716-7719
  3,   7,   1,   2,   7, // 7720-7724
  3,   1,   2,   7, // 7725-7728
  1,   2, // 7729-7730
  3,   1,   2, // 7731-7733
  9,   7, // 7734-7735
  9,   5,   5, // 7736-7738
  9,   5,   5, // 7739-7741
  9,   5,   5, // 7742-7744
  9,   7,   7,   7, // 7745-7748
  9,   9,   7,   7,   7, // 7749-7753
  9,   9,   7,   7, // 7754-7757
  9,   7,   5,   5, // 7758-7761
  9,   5,   5,   2, // 7762-7765
  9,   7,   2, // 7766-7768
  9,   7,   7,   2, // 7769-7772
  9,   5,   2, // 7773-7775
  9,   7,   5,   2, // 7776-7779
  9,   7,   5,   5, // 7780-7783
  9,   5,   5,   2, // 7784-7787
  9,   7, // 7788-7789
  9,   5, // 7790-7791
  9,   7,   7, // 7792-7794
  9,   5, // 7795-7796
  9,   5, // 7797-7798
  9,   9,   5,   5,   2, // 7799-7803
  9,   5, // 7804-7805
  9,   5,   5, // 7806-7808
  9,   5,   5,   2, // 7809-7812
  9,   7,   5,   5, // 7813-7816
  9,   5,   2, // 7817-7819
  9,   7,   5,   2, // 7820-7823
  9,   5,   2, // 7824-7826
  9,   7,   5,   2, // 7827-7830
  9,   5,   2, // 7831-7833
  9,   7,   5,   2, // 7834-7837
  9,   5,   5, // 7838-7840
  9,   7,   7, // 7841-7843
  1,   2,   7, // 7844-7846
  7,   1,   2,   7, // 7847-7850
  1,   2,   7, // 7851-7853
  7,   1,   2,   7, // 7854-7857
  3, // 7858
  9,   5,   2, // 7859-7861
  9,   7,   5,   5,   2, // 7862-7866
  9,   5,   5,   2, // 7867-7870
  9,   5,   2, // 7871-7873
  9,   7,   5,   2, // 7874-7877
  9,   5,   2,   2, // 7878-7881
  9,   7,   5,   2,   2, // 7882-7886
  9,   7,   5,   5, // 7887-7890
  9,   5,   2, // 7891-7893
  9,   7,   5,   2, // 7894-7897
  9,   3,   5,   2, // 7898-7901
  9,   3,   7,   5,   2, // 7902-7906
  9,   5,   2, // 7907-7909
  9,   7,   7, // 7910-7912
  9,   7, // 7913-7914
  1,   2,   7,   7, // 7915-7918
  7,   1,   2,   7,   7, // 7919-7923
  1,   2,   7,   7, // 7924-7927
  7,   1,   2,   7,   7, // 7928-7932
  9,   7,   7,   7, // 7933-7936
  9,   5, // 7937-7938
  9,   7,   5, // 7939-7941
  2, // 7942
  3,   2, // 7943-7944
  1,   2, // 7945-7946
  3,   1,   2, // 7947-7949
  2,   1,   2, // 7950-7952
  3,   2,   1,   2, // 7953-7956
  1, // 7957
  1,   2, // 7958-7959
  1, // 7960
  1, // 7961
  1,   1, // 7962-7963
  1, // 7964
  1,   1, // 7965-7966
  3, // 7967
  0 // End operand cycles
};
extern const unsigned HexagonForwardingPaths[] = {
 0, // No itinerary
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1-3
 0,  0,  0, // 4-6
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 7-8
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 9-12
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 13-16
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 17-19
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 20-22
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 23-25
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 26-28
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 29-31
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 32-34
 0,  0,  0, // 35-37
 0, // 38
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 39-40
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 41-42
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 43-45
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 46-49
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 50-52
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 53-56
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 57-59
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 60-62
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 63-65
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 66-68
HexagonItinerariesV60Bypass::Hex_FWD, // 69
HexagonItinerariesV60Bypass::Hex_FWD, // 70
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 71-72
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 73-74
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 75-76
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 77-79
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 80-82
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 83-86
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 87-89
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 90-93
HexagonItinerariesV60Bypass::Hex_FWD, // 94
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 95-99
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 100-102
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 103-107
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 108-111
HexagonItinerariesV60Bypass::Hex_FWD, // 112
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 113-115
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 116-118
 0,  0,  0, // 119-121
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 122-124
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 125-127
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 128-131
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 132-134
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 135-138
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 139-142
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 143-145
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 146-148
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 149-153
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 154-157
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 158-160
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 161-164
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 165-168
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 169-171
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 172-174
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD,  0, // 175-178
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 179-182
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 183-187
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 188-189
HexagonItinerariesV60Bypass::HVX_FWD, // 190
HexagonItinerariesV60Bypass::Hex_FWD, // 191
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 192-194
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 195-196
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 197-199
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 200-201
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 202-204
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 205-207
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 208-210
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 211-213
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 214-215
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 216-218
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 219-221
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 222-224
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 225-226
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 227-229
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 230-232
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 233-234
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 235-236
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 237-239
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 240-242
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 243-247
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 248-250
HexagonItinerariesV60Bypass::Hex_FWD, // 251
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 252-254
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 255-258
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 259-263
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 264-266
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 267-270
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 271-273
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 274-275
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 276-278
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 279-280
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 281-284
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 285-286
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 287-290
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 291-292
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 293-295
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 296-297
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 298-301
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 302-305
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 306-308
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 309-311
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 312-315
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 316-320
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 321-323
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 324-326
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 327-330
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 331-332
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 333-334
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 335-336
HexagonItinerariesV60Bypass::Hex_FWD, // 337
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 338-339
HexagonItinerariesV60Bypass::Hex_FWD, // 340
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 341-342
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 343-344
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 345-346
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 347-348
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 349-350
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 351-352
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 353-354
HexagonItinerariesV60Bypass::Hex_FWD, // 355
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 356-357
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 358-359
HexagonItinerariesV60Bypass::Hex_FWD, // 360
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 361-363
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 364-366
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 367-369
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 370-372
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 373-375
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 376-378
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 379-380
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 381-382
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 383-387
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 388-393
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 394-395
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 396-397
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 398-399
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 400-404
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 405-408
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 409-413
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 414-416
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 417-420
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 421-424
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 425-427
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 428-432
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 433-437
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 438-440
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 441-444
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 445-448
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 449-452
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 453-456
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 457-458
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 459-460
HexagonItinerariesV60Bypass::Hex_FWD, // 461
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 462-463
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 464-466
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 467-469
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 470-472
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 473-477
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 478-482
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 483-487
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 488-492
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 493-497
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 498-500
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 501-502
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 503-504
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 505-507
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 508-512
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 513-515
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 516-520
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 521-523
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 524-528
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 529-531
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 532-536
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 537-540
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 541-544
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 545-548
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 549-552
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 553-556
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 557-561
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 562-563
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 564-567
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 568-569
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 570-572
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 573-574
HexagonItinerariesV60Bypass::Hex_FWD, // 575
HexagonItinerariesV60Bypass::Hex_FWD, // 576
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 577-578
HexagonItinerariesV60Bypass::Hex_FWD, // 579
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 580-581
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 582-584
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 585-586
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 587-588
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 589-592
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 593-597
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 598-600
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 601-604
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 605-608
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 609-613
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 614-617
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 618-620
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 621-624
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 625-629
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 630-633
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 634-636
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 637-640
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 641-645
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 646-649
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 650-652
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 653-656
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 657-661
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 662-665
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 666-669
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 670-674
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 675-678
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 679-683
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 684-687
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 688-689
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 690-692
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 693-694
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 695-697
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 698-700
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 701-703
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 704-707
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 708-712
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 713-716
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 717-720
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 721-724
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 725-727
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 728-731
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 732-734
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 735-738
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 739-742
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 743-746
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 747-748
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 749-750
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 751-753
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 754-755
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 756-757
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 758-762
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 763-764
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 765-767
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 768-771
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 772-775
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 776-778
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 779-782
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 783-785
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 786-789
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 790-792
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 793-796
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 797-799
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 800-802
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 803-805
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 806-809
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 810-812
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 813-816
HexagonItinerariesV60Bypass::HVX_FWD, // 817
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 818-820
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 821-825
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 826-829
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 830-832
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 833-836
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 837-840
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 841-845
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 846-849
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 850-852
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 853-856
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 857-860
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 861-865
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 866-868
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 869-871
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 872-873
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 874-877
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 878-882
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 883-886
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 887-891
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 892-895
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 896-897
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 898-900
HexagonItinerariesV60Bypass::Hex_FWD, // 901
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 902-903
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 904-905
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 906-908
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 909-911
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 912-915
HexagonItinerariesV60Bypass::Hex_FWD, // 916
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 917-918
HexagonItinerariesV60Bypass::Hex_FWD, // 919
HexagonItinerariesV60Bypass::Hex_FWD, // 920
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 921-922
HexagonItinerariesV60Bypass::Hex_FWD, // 923
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 924-925
HexagonItinerariesV60Bypass::Hex_FWD, // 926
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 927-929
 0,  0,  0, // 930-932
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 933-934
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 935-938
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 939-942
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 943-945
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 946-948
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 949-951
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 952-954
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 955-957
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 958-960
 0,  0,  0, // 961-963
 0, // 964
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 965-966
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 967-968
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 969-971
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 972-975
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 976-978
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 979-982
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 983-985
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 986-988
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 989-991
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 992-994
HexagonItinerariesV55Bypass::Hex_FWD, // 995
HexagonItinerariesV55Bypass::Hex_FWD, // 996
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 997-998
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 999-1000
 0,  0, // 1001-1002
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1003-1005
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1006-1008
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1009-1012
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1013-1015
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1016-1019
HexagonItinerariesV55Bypass::Hex_FWD, // 1020
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1021-1025
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1026-1030
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1031-1034
HexagonItinerariesV55Bypass::Hex_FWD, // 1035
 0,  0,  0, // 1036-1038
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1039-1041
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1042-1045
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1046-1049
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1050-1052
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1053-1055
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1056-1060
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1061-1064
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1065-1067
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1068-1071
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1072-1075
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1076-1078
 0,  0,  0, // 1079-1081
HexagonItinerariesV55Bypass::Hex_FWD, // 1082
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1083-1085
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1086-1087
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1088-1090
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1091-1092
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1093-1095
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1096-1098
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1099-1101
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1102-1104
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1105-1106
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1107-1109
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1110-1112
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1113-1115
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1116-1117
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1118-1120
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1121-1123
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1124-1125
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1126-1127
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1128-1130
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1131-1133
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1134-1138
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1139-1141
HexagonItinerariesV55Bypass::Hex_FWD, // 1142
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1143-1145
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1146-1149
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1150-1154
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1155-1157
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1158-1161
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1162-1164
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1165-1166
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1167-1169
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1170-1171
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1172-1175
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1176-1177
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1178-1181
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1182-1183
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1184-1186
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1187-1188
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1189-1192
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1193-1196
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1197-1199
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1200-1202
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1203-1206
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1207-1211
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1212-1214
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1215-1217
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1218-1221
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1222-1223
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1224-1225
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1226-1227
HexagonItinerariesV55Bypass::Hex_FWD, // 1228
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1229-1230
HexagonItinerariesV55Bypass::Hex_FWD, // 1231
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1232-1233
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1234-1235
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1236-1237
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1238-1239
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1240-1241
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1242-1243
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1244-1245
HexagonItinerariesV55Bypass::Hex_FWD, // 1246
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1247-1248
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1249-1250
HexagonItinerariesV55Bypass::Hex_FWD, // 1251
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1252-1254
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1255-1257
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1258-1260
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1261-1263
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1264-1266
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1267-1269
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1270-1271
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1272-1273
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1274-1278
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1279-1284
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1285-1286
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1287-1288
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1289-1290
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1291-1295
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1296-1299
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1300-1304
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1305-1307
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1308-1311
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1312-1315
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1316-1318
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1319-1323
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1324-1328
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1329-1331
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1332-1335
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1336-1339
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1340-1343
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1344-1347
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1348-1349
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1350-1351
HexagonItinerariesV55Bypass::Hex_FWD, // 1352
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1353-1354
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1355-1357
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1358-1360
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1361-1363
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1364-1368
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1369-1373
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1374-1378
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1379-1383
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1384-1388
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1389-1391
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1392-1393
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1394-1395
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1396-1398
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1399-1403
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1404-1406
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1407-1411
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1412-1414
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1415-1419
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1420-1422
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1423-1427
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1428-1431
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1432-1435
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1436-1439
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1440-1443
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1444-1447
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1448-1452
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1453-1454
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1455-1458
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1459-1460
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1461-1463
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1464-1465
HexagonItinerariesV55Bypass::Hex_FWD, // 1466
HexagonItinerariesV55Bypass::Hex_FWD, // 1467
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1468-1469
HexagonItinerariesV55Bypass::Hex_FWD, // 1470
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1471-1472
HexagonItinerariesV55Bypass::Hex_FWD, // 1473
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1474-1475
HexagonItinerariesV55Bypass::Hex_FWD, // 1476
HexagonItinerariesV55Bypass::Hex_FWD, // 1477
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1478-1479
HexagonItinerariesV55Bypass::Hex_FWD, // 1480
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1481-1482
HexagonItinerariesV55Bypass::Hex_FWD, // 1483
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1484-1486
 0,  0,  0, // 1487-1489
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1490-1491
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1492-1495
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1496-1499
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1500-1502
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1503-1505
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1506-1508
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1509-1511
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1512-1514
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1515-1517
 0,  0,  0, // 1518-1520
 0, // 1521
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1522-1523
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1524-1525
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1526-1528
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1529-1532
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1533-1535
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1536-1539
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1540-1542
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1543-1545
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1546-1548
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1549-1551
HexagonItinerariesV62Bypass::Hex_FWD, // 1552
HexagonItinerariesV62Bypass::Hex_FWD, // 1553
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1554-1555
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1556-1557
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1558-1559
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1560-1562
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1563-1565
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1566-1569
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1570-1572
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1573-1576
HexagonItinerariesV62Bypass::Hex_FWD, // 1577
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1578-1582
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1583-1585
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1586-1590
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1591-1594
HexagonItinerariesV62Bypass::Hex_FWD, // 1595
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1596-1598
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1599-1601
 0,  0,  0, // 1602-1604
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1605-1607
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1608-1610
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1611-1614
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1615-1617
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1618-1621
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1622-1625
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1626-1628
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1629-1631
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1632-1636
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1637-1640
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1641-1643
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1644-1647
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1648-1651
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1652-1654
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1655-1657
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD,  0, // 1658-1661
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1662-1665
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1666-1670
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1671-1672
HexagonItinerariesV62Bypass::HVX_FWD, // 1673
HexagonItinerariesV62Bypass::Hex_FWD, // 1674
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1675-1677
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1678-1679
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1680-1682
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1683-1684
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1685-1687
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1688-1690
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1691-1693
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1694-1696
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1697-1698
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1699-1701
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1702-1704
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1705-1707
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1708-1709
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1710-1712
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1713-1715
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1716-1717
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1718-1719
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1720-1722
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1723-1725
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1726-1730
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1731-1733
HexagonItinerariesV62Bypass::Hex_FWD, // 1734
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1735-1737
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1738-1741
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1742-1746
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1747-1749
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1750-1753
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1754-1756
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1757-1758
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1759-1761
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1762-1763
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1764-1767
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1768-1769
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1770-1773
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1774-1775
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1776-1778
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1779-1780
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1781-1784
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1785-1788
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1789-1791
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1792-1794
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1795-1798
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1799-1803
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1804-1806
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1807-1809
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1810-1813
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1814-1815
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1816-1817
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1818-1819
HexagonItinerariesV62Bypass::Hex_FWD, // 1820
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1821-1822
HexagonItinerariesV62Bypass::Hex_FWD, // 1823
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1824-1825
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1826-1827
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1828-1829
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1830-1831
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1832-1833
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1834-1835
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1836-1837
HexagonItinerariesV62Bypass::Hex_FWD, // 1838
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1839-1840
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1841-1842
HexagonItinerariesV62Bypass::Hex_FWD, // 1843
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1844-1846
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1847-1849
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1850-1852
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1853-1855
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1856-1858
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1859-1861
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1862-1863
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1864-1865
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1866-1870
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1871-1876
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1877-1878
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1879-1880
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1881-1882
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1883-1887
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1888-1891
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1892-1896
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1897-1899
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1900-1903
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1904-1907
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1908-1910
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1911-1915
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1916-1920
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1921-1923
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1924-1927
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1928-1931
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1932-1935
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1936-1939
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1940-1941
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1942-1943
HexagonItinerariesV62Bypass::Hex_FWD, // 1944
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1945-1946
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1947-1949
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1950-1952
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1953-1955
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1956-1960
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1961-1965
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1966-1970
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1971-1975
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1976-1980
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1981-1983
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1984-1985
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1986-1987
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1988-1990
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1991-1995
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1996-1998
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1999-2003
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2004-2006
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2007-2011
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2012-2014
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2015-2019
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2020-2023
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2024-2027
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2028-2031
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2032-2035
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2036-2039
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2040-2044
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2045-2046
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2047-2050
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2051-2052
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2053-2055
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2056-2057
HexagonItinerariesV62Bypass::Hex_FWD, // 2058
HexagonItinerariesV62Bypass::Hex_FWD, // 2059
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2060-2061
HexagonItinerariesV62Bypass::Hex_FWD, // 2062
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2063-2064
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2065-2067
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2068-2069
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2070-2071
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2072-2075
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2076-2080
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2081-2083
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2084-2087
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2088-2091
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2092-2096
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2097-2100
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2101-2103
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2104-2107
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2108-2112
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2113-2116
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2117-2119
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2120-2123
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2124-2128
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2129-2132
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2133-2135
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2136-2139
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2140-2144
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2145-2148
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2149-2152
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2153-2157
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2158-2161
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2162-2166
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2167-2170
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2171-2172
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2173-2175
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2176-2177
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2178-2180
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2181-2183
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2184-2186
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2187-2190
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2191-2195
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2196-2199
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2200-2203
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2204-2207
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2208-2210
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2211-2214
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2215-2217
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2218-2221
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2222-2225
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2226-2229
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2230-2231
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2232-2233
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2234-2236
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2237-2238
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2239-2240
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2241-2245
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2246-2247
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2248-2250
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2251-2254
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2255-2258
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2259-2261
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2262-2265
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2266-2268
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2269-2272
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2273-2275
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2276-2279
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2280-2282
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2283-2285
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2286-2288
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2289-2292
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2293-2295
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2296-2299
HexagonItinerariesV62Bypass::HVX_FWD, // 2300
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2301-2303
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2304-2308
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2309-2312
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2313-2315
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2316-2319
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2320-2323
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2324-2328
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2329-2332
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2333-2335
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2336-2339
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2340-2343
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2344-2348
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2349-2351
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2352-2354
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2355-2356
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2357-2360
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2361-2365
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2366-2369
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2370-2374
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2375-2378
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2379-2380
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2381-2383
HexagonItinerariesV62Bypass::Hex_FWD, // 2384
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2385-2386
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2387-2388
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2389-2391
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2392-2394
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2395-2398
HexagonItinerariesV62Bypass::Hex_FWD, // 2399
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2400-2401
HexagonItinerariesV62Bypass::Hex_FWD, // 2402
HexagonItinerariesV62Bypass::Hex_FWD, // 2403
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2404-2405
HexagonItinerariesV62Bypass::Hex_FWD, // 2406
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2407-2408
HexagonItinerariesV62Bypass::Hex_FWD, // 2409
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2410-2412
 0,  0,  0, // 2413-2415
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2416-2417
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2418-2421
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2422-2425
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2426-2428
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2429-2431
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2432-2434
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2435-2437
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2438-2440
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2441-2443
 0,  0,  0, // 2444-2446
 0, // 2447
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2448-2449
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2450-2451
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2452-2454
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2455-2458
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2459-2461
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2462-2465
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2466-2468
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2469-2471
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2472-2474
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2475-2477
HexagonItinerariesV65Bypass::Hex_FWD, // 2478
HexagonItinerariesV65Bypass::Hex_FWD, // 2479
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2480-2481
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2482-2483
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2484-2485
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2486-2488
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2489-2491
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2492-2495
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2496-2498
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2499-2502
HexagonItinerariesV65Bypass::Hex_FWD, // 2503
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2504-2508
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2509-2511
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2512-2516
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2517-2520
HexagonItinerariesV65Bypass::Hex_FWD, // 2521
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2522-2524
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2525-2527
 0,  0,  0, // 2528-2530
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2531-2533
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2534-2536
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2537-2540
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2541-2543
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2544-2547
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2548-2551
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2552-2554
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2555-2557
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2558-2562
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2563-2566
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2567-2569
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2570-2573
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2574-2577
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2578-2580
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2581-2583
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD,  0, // 2584-2587
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2588-2591
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2592-2596
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2597-2598
HexagonItinerariesV65Bypass::HVX_FWD, // 2599
HexagonItinerariesV65Bypass::Hex_FWD, // 2600
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2601-2603
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2604-2605
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2606-2608
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2609-2610
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2611-2613
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2614-2616
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2617-2619
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2620-2622
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2623-2624
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2625-2627
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2628-2630
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2631-2633
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2634-2635
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2636-2638
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2639-2641
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2642-2643
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2644-2645
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2646-2648
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2649-2651
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2652-2656
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2657-2659
HexagonItinerariesV65Bypass::Hex_FWD, // 2660
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2661-2663
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2664-2667
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2668-2672
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2673-2675
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2676-2679
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2680-2682
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2683-2684
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2685-2687
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2688-2689
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2690-2693
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2694-2695
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2696-2699
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2700-2701
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2702-2704
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2705-2706
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2707-2710
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2711-2714
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2715-2717
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2718-2720
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2721-2724
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2725-2729
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2730-2732
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2733-2735
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2736-2739
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2740-2741
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2742-2743
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2744-2745
HexagonItinerariesV65Bypass::Hex_FWD, // 2746
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2747-2748
HexagonItinerariesV65Bypass::Hex_FWD, // 2749
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2750-2751
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2752-2753
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2754-2755
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2756-2757
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2758-2759
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2760-2761
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2762-2763
HexagonItinerariesV65Bypass::Hex_FWD, // 2764
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2765-2766
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2767-2768
HexagonItinerariesV65Bypass::Hex_FWD, // 2769
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2770-2772
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2773-2775
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2776-2778
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2779-2781
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2782-2784
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2785-2787
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2788-2789
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2790-2791
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2792-2796
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2797-2802
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2803-2804
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2805-2806
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2807-2808
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2809-2813
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2814-2817
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2818-2822
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2823-2825
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2826-2829
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2830-2833
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2834-2836
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2837-2841
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2842-2846
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2847-2849
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2850-2853
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2854-2857
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2858-2861
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2862-2865
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2866-2867
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2868-2869
HexagonItinerariesV65Bypass::Hex_FWD, // 2870
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2871-2872
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2873-2875
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2876-2878
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2879-2881
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2882-2886
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2887-2891
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2892-2896
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2897-2901
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2902-2906
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2907-2909
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2910-2911
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2912-2913
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2914-2916
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2917-2921
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2922-2924
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2925-2929
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2930-2932
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2933-2937
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2938-2940
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2941-2945
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2946-2949
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2950-2953
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2954-2957
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2958-2961
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2962-2965
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2966-2970
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2971-2972
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2973-2976
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2977-2978
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2979-2981
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2982-2983
HexagonItinerariesV65Bypass::Hex_FWD, // 2984
HexagonItinerariesV65Bypass::Hex_FWD, // 2985
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2986-2987
HexagonItinerariesV65Bypass::Hex_FWD, // 2988
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2989-2990
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2991-2993
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2994-2995
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2996-2997
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2998-3001
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3002-3006
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3007-3009
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3010-3013
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3014-3017
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3018-3022
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3023-3026
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3027-3029
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3030-3033
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3034-3038
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3039-3042
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3043-3045
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3046-3049
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3050-3054
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3055-3058
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3059-3061
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3062-3065
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3066-3070
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3071-3074
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3075-3078
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3079-3083
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3084-3087
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3088-3092
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3093-3096
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3097-3098
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3099-3101
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3102-3103
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3104-3106
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3107-3109
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3110-3112
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3113-3116
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3117-3121
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3122-3125
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3126-3129
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3130-3133
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3134-3136
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3137-3140
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3141-3143
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3144-3147
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3148-3151
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3152-3155
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3156-3157
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3158-3159
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3160-3162
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3163-3164
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3165-3166
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3167-3171
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3172-3173
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3174-3176
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3177-3180
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3181-3184
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3185-3187
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3188-3191
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3192-3194
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3195-3198
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3199-3201
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3202-3205
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3206-3208
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3209-3211
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3212-3214
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3215-3218
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3219-3221
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3222-3225
HexagonItinerariesV65Bypass::HVX_FWD, // 3226
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3227-3229
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3230-3234
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3235-3238
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3239-3241
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3242-3245
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3246-3249
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3250-3254
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3255-3258
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3259-3261
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3262-3265
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3266-3269
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3270-3274
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3275-3277
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3278-3280
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3281-3282
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3283-3286
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3287-3291
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3292-3295
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3296-3300
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3301-3304
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3305-3306
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3307-3309
HexagonItinerariesV65Bypass::Hex_FWD, // 3310
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3311-3312
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3313-3314
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3315-3317
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3318-3320
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3321-3324
HexagonItinerariesV65Bypass::Hex_FWD, // 3325
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3326-3327
HexagonItinerariesV65Bypass::Hex_FWD, // 3328
HexagonItinerariesV65Bypass::Hex_FWD, // 3329
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3330-3331
HexagonItinerariesV65Bypass::Hex_FWD, // 3332
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3333-3334
HexagonItinerariesV65Bypass::Hex_FWD, // 3335
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3336-3338
 0,  0,  0, // 3339-3341
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3342-3343
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3344-3347
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3348-3351
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3352-3354
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3355-3357
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3358-3360
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3361-3363
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3364-3366
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3367-3369
 0,  0,  0, // 3370-3372
 0, // 3373
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3374-3375
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3376-3377
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3378-3380
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3381-3384
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3385-3387
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3388-3391
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3392-3394
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3395-3397
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3398-3400
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3401-3403
HexagonItinerariesV66Bypass::Hex_FWD, // 3404
HexagonItinerariesV66Bypass::Hex_FWD, // 3405
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3406-3407
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3408-3409
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3410-3411
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3412-3414
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3415-3417
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3418-3421
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3422-3424
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3425-3428
HexagonItinerariesV66Bypass::Hex_FWD, // 3429
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3430-3434
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3435-3437
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3438-3442
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3443-3446
HexagonItinerariesV66Bypass::Hex_FWD, // 3447
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3448-3450
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3451-3453
 0,  0,  0, // 3454-3456
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3457-3459
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3460-3462
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3463-3466
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3467-3469
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3470-3473
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3474-3477
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3478-3480
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3481-3483
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3484-3488
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3489-3492
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3493-3495
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3496-3499
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3500-3503
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3504-3506
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3507-3509
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD,  0, // 3510-3513
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3514-3517
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3518-3522
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3523-3524
HexagonItinerariesV66Bypass::HVX_FWD, // 3525
HexagonItinerariesV66Bypass::Hex_FWD, // 3526
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3527-3529
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3530-3531
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3532-3534
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3535-3536
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3537-3539
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3540-3542
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3543-3545
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3546-3548
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3549-3550
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3551-3553
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3554-3556
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3557-3559
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3560-3561
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3562-3564
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3565-3567
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3568-3569
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3570-3571
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3572-3574
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3575-3577
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3578-3582
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3583-3585
HexagonItinerariesV66Bypass::Hex_FWD, // 3586
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3587-3589
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3590-3593
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3594-3598
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3599-3601
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3602-3605
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3606-3608
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3609-3610
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3611-3613
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3614-3615
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3616-3619
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3620-3621
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3622-3625
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3626-3627
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3628-3630
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3631-3632
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3633-3636
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3637-3640
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3641-3643
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3644-3646
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3647-3650
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3651-3655
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3656-3658
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3659-3661
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3662-3665
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3666-3667
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3668-3669
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3670-3671
HexagonItinerariesV66Bypass::Hex_FWD, // 3672
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3673-3674
HexagonItinerariesV66Bypass::Hex_FWD, // 3675
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3676-3677
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3678-3679
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3680-3681
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3682-3683
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3684-3685
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3686-3687
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3688-3689
HexagonItinerariesV66Bypass::Hex_FWD, // 3690
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3691-3692
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3693-3694
HexagonItinerariesV66Bypass::Hex_FWD, // 3695
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3696-3698
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3699-3701
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3702-3704
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3705-3707
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3708-3710
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3711-3713
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3714-3715
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3716-3717
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3718-3722
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3723-3728
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3729-3730
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3731-3732
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3733-3734
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3735-3739
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3740-3743
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3744-3748
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3749-3751
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3752-3755
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3756-3759
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3760-3762
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3763-3767
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3768-3772
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3773-3775
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3776-3779
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3780-3783
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3784-3787
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3788-3791
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3792-3793
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3794-3795
HexagonItinerariesV66Bypass::Hex_FWD, // 3796
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3797-3798
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3799-3801
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3802-3804
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3805-3807
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3808-3812
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3813-3817
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3818-3822
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3823-3827
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3828-3832
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3833-3835
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3836-3837
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3838-3839
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3840-3842
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3843-3847
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3848-3850
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3851-3855
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3856-3858
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3859-3863
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3864-3866
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3867-3871
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3872-3875
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3876-3879
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3880-3883
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3884-3887
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3888-3891
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3892-3896
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3897-3898
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3899-3902
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3903-3904
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3905-3907
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3908-3909
HexagonItinerariesV66Bypass::Hex_FWD, // 3910
HexagonItinerariesV66Bypass::Hex_FWD, // 3911
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3912-3913
HexagonItinerariesV66Bypass::Hex_FWD, // 3914
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3915-3916
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3917-3919
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3920-3921
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3922-3923
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3924-3927
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3928-3932
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3933-3935
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3936-3939
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3940-3943
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3944-3948
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3949-3952
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3953-3955
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3956-3959
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3960-3964
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3965-3968
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3969-3971
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3972-3975
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3976-3980
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3981-3984
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3985-3987
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3988-3991
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3992-3996
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3997-4000
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4001-4004
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4005-4009
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4010-4013
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4014-4018
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4019-4022
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4023-4024
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4025-4027
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4028-4029
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4030-4032
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4033-4035
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4036-4038
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4039-4042
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4043-4047
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4048-4051
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4052-4055
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4056-4059
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4060-4062
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4063-4066
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4067-4069
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4070-4073
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4074-4077
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4078-4081
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4082-4083
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4084-4085
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4086-4088
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4089-4090
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4091-4092
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4093-4097
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4098-4099
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4100-4102
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4103-4106
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4107-4110
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4111-4113
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4114-4117
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4118-4120
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4121-4124
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4125-4127
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4128-4131
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4132-4134
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4135-4137
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4138-4140
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4141-4144
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4145-4147
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4148-4151
HexagonItinerariesV66Bypass::HVX_FWD, // 4152
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4153-4155
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4156-4160
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4161-4164
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4165-4167
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4168-4171
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4172-4175
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4176-4180
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4181-4184
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4185-4187
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4188-4191
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4192-4195
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4196-4200
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4201-4203
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4204-4206
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4207-4208
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4209-4212
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4213-4217
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4218-4221
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4222-4226
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4227-4230
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4231-4232
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4233-4235
HexagonItinerariesV66Bypass::Hex_FWD, // 4236
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4237-4238
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4239-4240
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4241-4243
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4244-4246
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4247-4250
HexagonItinerariesV66Bypass::Hex_FWD, // 4251
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4252-4253
HexagonItinerariesV66Bypass::Hex_FWD, // 4254
HexagonItinerariesV66Bypass::Hex_FWD, // 4255
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4256-4257
HexagonItinerariesV66Bypass::Hex_FWD, // 4258
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4259-4260
HexagonItinerariesV66Bypass::Hex_FWD, // 4261
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4262-4264
 0,  0,  0, // 4265-4267
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4268-4269
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4270-4273
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4274-4277
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4278-4280
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4281-4283
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4284-4286
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4287-4289
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4290-4292
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4293-4295
 0,  0,  0, // 4296-4298
 0, // 4299
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4300-4301
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4302-4303
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4304-4306
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4307-4310
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4311-4313
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4314-4317
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4318-4320
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4321-4323
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4324-4326
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4327-4329
HexagonItinerariesV67Bypass::Hex_FWD, // 4330
HexagonItinerariesV67Bypass::Hex_FWD, // 4331
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4332-4333
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4334-4335
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4336-4337
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4338-4340
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4341-4343
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4344-4347
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4348-4350
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4351-4354
HexagonItinerariesV67Bypass::Hex_FWD, // 4355
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4356-4360
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4361-4363
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4364-4368
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4369-4372
HexagonItinerariesV67Bypass::Hex_FWD, // 4373
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4374-4376
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4377-4379
 0,  0,  0, // 4380-4382
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4383-4385
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4386-4388
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4389-4392
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4393-4395
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4396-4399
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4400-4403
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4404-4406
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4407-4409
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4410-4414
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4415-4418
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4419-4421
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4422-4425
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4426-4429
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4430-4432
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4433-4435
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD,  0, // 4436-4439
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4440-4443
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4444-4448
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4449-4450
HexagonItinerariesV67Bypass::HVX_FWD, // 4451
HexagonItinerariesV67Bypass::Hex_FWD, // 4452
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4453-4455
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4456-4457
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4458-4460
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4461-4462
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4463-4465
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4466-4468
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4469-4471
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4472-4474
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4475-4476
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4477-4479
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4480-4482
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4483-4485
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4486-4487
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4488-4490
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4491-4493
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4494-4495
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4496-4497
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4498-4500
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4501-4503
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4504-4508
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4509-4511
HexagonItinerariesV67Bypass::Hex_FWD, // 4512
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4513-4515
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4516-4519
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4520-4524
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4525-4527
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4528-4531
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4532-4534
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4535-4536
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4537-4539
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4540-4541
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4542-4545
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4546-4547
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4548-4551
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4552-4553
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4554-4556
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4557-4558
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4559-4562
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4563-4566
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4567-4569
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4570-4572
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4573-4576
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4577-4581
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4582-4584
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4585-4587
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4588-4591
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4592-4593
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4594-4595
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4596-4597
HexagonItinerariesV67Bypass::Hex_FWD, // 4598
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4599-4600
HexagonItinerariesV67Bypass::Hex_FWD, // 4601
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4602-4603
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4604-4605
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4606-4607
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4608-4609
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4610-4611
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4612-4613
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4614-4615
HexagonItinerariesV67Bypass::Hex_FWD, // 4616
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4617-4618
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4619-4620
HexagonItinerariesV67Bypass::Hex_FWD, // 4621
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4622-4624
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4625-4627
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4628-4630
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4631-4633
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4634-4636
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4637-4639
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4640-4641
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4642-4643
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4644-4648
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4649-4654
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4655-4656
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4657-4658
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4659-4660
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4661-4665
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4666-4669
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4670-4674
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4675-4677
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4678-4681
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4682-4685
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4686-4688
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4689-4693
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4694-4698
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4699-4701
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4702-4705
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4706-4709
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4710-4713
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4714-4717
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4718-4719
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4720-4721
HexagonItinerariesV67Bypass::Hex_FWD, // 4722
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4723-4724
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4725-4727
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4728-4730
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4731-4733
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4734-4738
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4739-4743
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4744-4748
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4749-4753
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4754-4758
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4759-4761
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4762-4763
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4764-4765
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4766-4768
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4769-4773
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4774-4776
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4777-4781
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4782-4784
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4785-4789
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4790-4792
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4793-4797
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4798-4801
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4802-4805
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4806-4809
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4810-4813
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4814-4817
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4818-4822
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4823-4824
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4825-4828
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4829-4830
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4831-4833
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4834-4835
HexagonItinerariesV67Bypass::Hex_FWD, // 4836
HexagonItinerariesV67Bypass::Hex_FWD, // 4837
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4838-4839
HexagonItinerariesV67Bypass::Hex_FWD, // 4840
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4841-4842
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4843-4845
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4846-4847
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4848-4849
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4850-4853
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4854-4858
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4859-4861
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4862-4865
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4866-4869
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4870-4874
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4875-4878
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4879-4881
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4882-4885
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4886-4890
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4891-4894
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4895-4897
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4898-4901
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4902-4906
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4907-4910
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4911-4913
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4914-4917
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4918-4922
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4923-4926
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4927-4930
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4931-4935
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4936-4939
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4940-4944
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4945-4948
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4949-4950
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4951-4953
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4954-4955
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4956-4958
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4959-4961
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4962-4964
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4965-4968
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4969-4973
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4974-4977
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4978-4981
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4982-4985
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4986-4988
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4989-4992
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4993-4995
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4996-4999
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5000-5003
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5004-5007
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5008-5009
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5010-5011
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5012-5014
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5015-5016
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5017-5018
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5019-5023
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5024-5025
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5026-5028
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5029-5032
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5033-5036
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5037-5039
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5040-5043
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5044-5046
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5047-5050
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5051-5053
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5054-5057
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5058-5060
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5061-5063
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5064-5066
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5067-5070
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5071-5073
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5074-5077
HexagonItinerariesV67Bypass::HVX_FWD, // 5078
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5079-5081
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5082-5086
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5087-5090
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5091-5093
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5094-5097
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5098-5101
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5102-5106
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5107-5110
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5111-5113
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5114-5117
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5118-5121
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5122-5126
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5127-5129
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5130-5132
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5133-5134
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5135-5138
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5139-5143
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5144-5147
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5148-5152
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5153-5156
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5157-5158
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 5159-5161
HexagonItinerariesV67Bypass::Hex_FWD, // 5162
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5163-5164
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5165-5166
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5167-5169
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5170-5172
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5173-5176
HexagonItinerariesV67Bypass::Hex_FWD, // 5177
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5178-5179
HexagonItinerariesV67Bypass::Hex_FWD, // 5180
HexagonItinerariesV67Bypass::Hex_FWD, // 5181
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5182-5183
HexagonItinerariesV67Bypass::Hex_FWD, // 5184
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 5185-5186
HexagonItinerariesV67Bypass::Hex_FWD, // 5187
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5188-5190
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5191-5193
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5194-5195
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5196-5199
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5200-5203
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5204-5206
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5207-5209
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5210-5212
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5213-5215
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5216-5218
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5219-5221
 0,  0,  0, // 5222-5224
 0, // 5225
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5226-5227
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5228-5229
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5230-5232
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5233-5236
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5237-5239
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5240-5243
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5244-5246
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5247-5249
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5250-5252
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5253-5255
HexagonItinerariesV67TBypass::Hex_FWD, // 5256
HexagonItinerariesV67TBypass::Hex_FWD, // 5257
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5258-5259
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5260-5261
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5262-5264
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5265-5267
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5268-5270
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5271-5274
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5275-5277
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5278-5281
HexagonItinerariesV67TBypass::Hex_FWD, // 5282
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5283-5287
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5288-5290
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5291-5295
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5296-5299
HexagonItinerariesV67TBypass::Hex_FWD, // 5300
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5301-5303
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5304-5306
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5307-5309
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5310-5312
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5313-5315
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5316-5319
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5320-5322
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5323-5326
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5327-5330
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5331-5333
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5334-5336
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5337-5341
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5342-5345
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5346-5348
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5349-5352
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5353-5356
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5357-5359
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD,  0,  0, // 5360-5363
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD,  0, // 5364-5367
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5368-5371
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5372-5376
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5377-5378
HexagonItinerariesV67TBypass::HVX_FWD, // 5379
HexagonItinerariesV67TBypass::Hex_FWD, // 5380
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5381-5383
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5384-5385
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5386-5388
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5389-5390
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5391-5393
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5394-5396
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5397-5399
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5400-5402
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5403-5404
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5405-5407
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5408-5410
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5411-5413
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5414-5415
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5416-5418
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5419-5421
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5422-5423
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5424-5425
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5426-5428
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5429-5431
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5432-5436
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5437-5439
HexagonItinerariesV67TBypass::Hex_FWD, // 5440
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5441-5443
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5444-5447
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5448-5452
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5453-5455
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5456-5459
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5460-5462
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5463-5464
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5465-5467
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5468-5469
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5470-5473
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5474-5475
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5476-5479
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5480-5481
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5482-5484
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5485-5486
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5487-5490
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5491-5494
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5495-5497
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5498-5500
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5501-5504
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5505-5509
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5510-5512
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5513-5515
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5516-5519
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5520-5521
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5522-5523
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5524-5525
HexagonItinerariesV67TBypass::Hex_FWD, // 5526
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5527-5528
HexagonItinerariesV67TBypass::Hex_FWD, // 5529
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5530-5531
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5532-5533
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5534-5535
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5536-5537
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5538-5539
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5540-5541
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5542-5543
HexagonItinerariesV67TBypass::Hex_FWD, // 5544
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5545-5546
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5547-5548
HexagonItinerariesV67TBypass::Hex_FWD, // 5549
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5550-5552
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5553-5555
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5556-5558
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5559-5561
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5562-5564
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5565-5567
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5568-5569
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5570-5571
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5572-5576
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5577-5582
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5583-5584
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5585-5586
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5587-5588
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5589-5593
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5594-5597
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5598-5602
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5603-5605
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5606-5609
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5610-5613
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5614-5616
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5617-5621
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5622-5626
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5627-5629
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5630-5633
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5634-5637
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5638-5641
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5642-5645
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5646-5647
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5648-5649
HexagonItinerariesV67TBypass::Hex_FWD, // 5650
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5651-5652
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5653-5655
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5656-5658
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5659-5661
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5662-5666
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5667-5671
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5672-5676
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5677-5681
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5682-5686
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5687-5689
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5690-5691
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5692-5693
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5694-5696
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5697-5701
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5702-5704
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5705-5709
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5710-5712
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5713-5717
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5718-5720
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5721-5725
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5726-5729
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5730-5733
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5734-5737
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5738-5741
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5742-5745
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5746-5750
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5751-5752
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5753-5756
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5757-5758
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5759-5761
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5762-5763
HexagonItinerariesV67TBypass::Hex_FWD, // 5764
HexagonItinerariesV67TBypass::Hex_FWD, // 5765
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5766-5767
HexagonItinerariesV67TBypass::Hex_FWD, // 5768
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5769-5770
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5771-5773
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5774-5775
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5776-5777
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5778-5781
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5782-5786
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5787-5789
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5790-5793
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5794-5797
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5798-5802
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5803-5806
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5807-5809
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5810-5813
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5814-5818
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5819-5822
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5823-5825
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5826-5829
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5830-5834
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5835-5838
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5839-5841
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5842-5845
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5846-5850
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5851-5854
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5855-5858
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5859-5863
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5864-5867
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5868-5872
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5873-5876
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5877-5878
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5879-5881
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5882-5883
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5884-5886
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5887-5889
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5890-5892
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5893-5896
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5897-5901
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5902-5905
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5906-5909
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5910-5913
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5914-5916
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5917-5920
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5921-5923
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5924-5927
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5928-5931
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5932-5935
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5936-5937
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5938-5939
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5940-5942
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5943-5944
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5945-5946
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5947-5951
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5952-5953
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5954-5956
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5957-5960
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5961-5964
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5965-5967
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5968-5971
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5972-5974
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5975-5978
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5979-5981
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5982-5985
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5986-5988
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5989-5991
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5992-5994
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5995-5998
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5999-6001
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 6002-6005
HexagonItinerariesV67TBypass::HVX_FWD, // 6006
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 6007-6009
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 6010-6014
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 6015-6018
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 6019-6021
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 6022-6025
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 6026-6029
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 6030-6034
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 6035-6038
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 6039-6041
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 6042-6045
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 6046-6049
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 6050-6054
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 6055-6057
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 6058-6060
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 6061-6062
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 6063-6066
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 6067-6071
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 6072-6075
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 6076-6080
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 6081-6084
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 6085-6086
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 6087-6089
HexagonItinerariesV67TBypass::Hex_FWD, // 6090
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 6091-6092
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 6093-6094
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 6095-6097
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 6098-6100
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 6101-6104
HexagonItinerariesV67TBypass::Hex_FWD, // 6105
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 6106-6107
HexagonItinerariesV67TBypass::Hex_FWD, // 6108
HexagonItinerariesV67TBypass::Hex_FWD, // 6109
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 6110-6111
HexagonItinerariesV67TBypass::Hex_FWD, // 6112
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 6113-6114
HexagonItinerariesV67TBypass::Hex_FWD, // 6115
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6116-6118
 0,  0,  0, // 6119-6121
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6122-6123
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6124-6127
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6128-6131
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6132-6134
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6135-6137
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6138-6140
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6141-6143
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6144-6146
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6147-6149
 0,  0,  0, // 6150-6152
 0, // 6153
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6154-6155
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6156-6157
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6158-6160
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6161-6164
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6165-6167
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6168-6171
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6172-6174
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6175-6177
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6178-6180
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6181-6183
HexagonItinerariesV68Bypass::Hex_FWD, // 6184
HexagonItinerariesV68Bypass::Hex_FWD, // 6185
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6186-6187
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6188-6189
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6190-6191
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6192-6194
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6195-6197
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6198-6201
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6202-6204
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6205-6208
HexagonItinerariesV68Bypass::Hex_FWD, // 6209
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6210-6214
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6215-6217
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6218-6222
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6223-6226
HexagonItinerariesV68Bypass::Hex_FWD, // 6227
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6228-6230
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6231-6233
 0,  0,  0, // 6234-6236
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6237-6239
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6240-6242
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6243-6246
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6247-6249
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6250-6253
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6254-6257
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6258-6260
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6261-6263
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6264-6268
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6269-6272
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6273-6275
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6276-6279
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6280-6283
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6284-6286
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6287-6289
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD,  0, // 6290-6293
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6294-6297
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6298-6302
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6303-6304
HexagonItinerariesV68Bypass::HVX_FWD, // 6305
HexagonItinerariesV68Bypass::Hex_FWD, // 6306
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6307-6309
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6310-6311
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6312-6314
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6315-6316
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6317-6319
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6320-6322
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6323-6325
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6326-6328
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6329-6330
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6331-6333
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6334-6336
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6337-6339
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6340-6341
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6342-6344
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6345-6347
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6348-6349
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6350-6351
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6352-6354
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6355-6357
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6358-6362
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6363-6365
HexagonItinerariesV68Bypass::Hex_FWD, // 6366
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6367-6369
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6370-6373
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6374-6378
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6379-6381
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6382-6385
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6386-6388
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6389-6390
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6391-6393
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6394-6395
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6396-6399
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6400-6401
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6402-6405
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6406-6407
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6408-6410
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6411-6412
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6413-6416
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6417-6420
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6421-6423
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6424-6426
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6427-6430
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6431-6435
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6436-6438
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6439-6441
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6442-6445
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6446-6447
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6448-6449
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6450-6451
HexagonItinerariesV68Bypass::Hex_FWD, // 6452
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6453-6454
HexagonItinerariesV68Bypass::Hex_FWD, // 6455
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6456-6457
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6458-6459
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6460-6461
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6462-6463
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6464-6465
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6466-6467
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6468-6469
HexagonItinerariesV68Bypass::Hex_FWD, // 6470
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6471-6472
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6473-6474
HexagonItinerariesV68Bypass::Hex_FWD, // 6475
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6476-6478
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6479-6481
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6482-6484
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6485-6487
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6488-6490
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6491-6493
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6494-6495
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6496-6497
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6498-6502
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6503-6508
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6509-6510
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6511-6512
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6513-6514
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6515-6519
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6520-6523
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6524-6528
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6529-6531
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6532-6535
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6536-6539
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6540-6542
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6543-6547
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6548-6552
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6553-6555
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6556-6559
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6560-6563
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6564-6567
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6568-6571
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6572-6573
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6574-6575
HexagonItinerariesV68Bypass::Hex_FWD, // 6576
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6577-6578
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6579-6581
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6582-6584
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6585-6587
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6588-6592
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6593-6597
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6598-6602
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6603-6607
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6608-6612
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6613-6615
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6616-6617
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6618-6619
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6620-6622
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6623-6627
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6628-6630
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6631-6635
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6636-6638
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6639-6643
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6644-6646
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6647-6651
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6652-6655
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6656-6659
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6660-6663
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6664-6667
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6668-6671
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6672-6676
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6677-6678
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6679-6682
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6683-6684
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6685-6687
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6688-6689
HexagonItinerariesV68Bypass::Hex_FWD, // 6690
HexagonItinerariesV68Bypass::Hex_FWD, // 6691
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6692-6693
HexagonItinerariesV68Bypass::Hex_FWD, // 6694
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6695-6696
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6697-6699
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6700-6701
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6702-6703
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6704-6707
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6708-6712
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6713-6715
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6716-6719
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6720-6723
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6724-6728
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6729-6732
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6733-6735
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6736-6739
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6740-6744
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6745-6748
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6749-6751
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6752-6755
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6756-6760
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6761-6764
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6765-6767
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6768-6771
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6772-6776
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6777-6780
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6781-6784
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6785-6789
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6790-6793
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6794-6798
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6799-6802
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6803-6804
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6805-6807
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6808-6809
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6810-6812
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6813-6815
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6816-6818
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6819-6822
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6823-6827
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6828-6831
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6832-6835
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6836-6839
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6840-6842
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6843-6846
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6847-6849
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6850-6853
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6854-6857
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6858-6861
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6862-6863
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6864-6865
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6866-6868
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6869-6870
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6871-6872
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6873-6877
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6878-6879
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6880-6882
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6883-6886
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6887-6890
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6891-6893
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6894-6897
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6898-6900
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6901-6904
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6905-6907
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6908-6911
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6912-6914
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6915-6917
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6918-6920
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6921-6924
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6925-6927
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6928-6931
HexagonItinerariesV68Bypass::HVX_FWD, // 6932
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6933-6935
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6936-6940
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6941-6944
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6945-6947
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6948-6951
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6952-6955
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6956-6960
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6961-6964
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6965-6967
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6968-6971
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6972-6975
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6976-6980
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6981-6983
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6984-6986
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6987-6988
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6989-6992
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6993-6997
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6998-7001
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 7002-7006
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 7007-7010
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 7011-7012
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 7013-7015
HexagonItinerariesV68Bypass::Hex_FWD, // 7016
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 7017-7018
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 7019-7020
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 7021-7023
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 7024-7026
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 7027-7030
HexagonItinerariesV68Bypass::Hex_FWD, // 7031
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 7032-7033
HexagonItinerariesV68Bypass::Hex_FWD, // 7034
HexagonItinerariesV68Bypass::Hex_FWD, // 7035
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 7036-7037
HexagonItinerariesV68Bypass::Hex_FWD, // 7038
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 7039-7040
HexagonItinerariesV68Bypass::Hex_FWD, // 7041
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7042-7044
 0,  0,  0, // 7045-7047
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7048-7049
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7050-7053
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7054-7057
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7058-7060
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7061-7063
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7064-7066
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7067-7069
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7070-7072
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7073-7075
 0,  0,  0, // 7076-7078
 0, // 7079
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7080-7081
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7082-7083
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7084-7086
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7087-7090
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7091-7093
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7094-7097
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7098-7100
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7101-7103
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7104-7106
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7107-7109
HexagonItinerariesV69Bypass::Hex_FWD, // 7110
HexagonItinerariesV69Bypass::Hex_FWD, // 7111
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7112-7113
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7114-7115
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7116-7117
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7118-7120
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7121-7123
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7124-7127
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7128-7130
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7131-7134
HexagonItinerariesV69Bypass::Hex_FWD, // 7135
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7136-7140
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7141-7143
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7144-7148
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7149-7152
HexagonItinerariesV69Bypass::Hex_FWD, // 7153
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7154-7156
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7157-7159
 0,  0,  0, // 7160-7162
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7163-7165
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7166-7168
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7169-7172
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7173-7175
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7176-7179
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7180-7183
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7184-7186
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7187-7189
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7190-7194
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7195-7198
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7199-7201
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7202-7205
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7206-7209
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7210-7212
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7213-7215
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD,  0, // 7216-7219
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7220-7223
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7224-7228
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7229-7230
HexagonItinerariesV69Bypass::HVX_FWD, // 7231
HexagonItinerariesV69Bypass::Hex_FWD, // 7232
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7233-7235
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7236-7237
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7238-7240
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7241-7242
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7243-7245
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7246-7248
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7249-7251
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7252-7254
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7255-7256
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7257-7259
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7260-7262
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7263-7265
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7266-7267
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7268-7270
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7271-7273
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7274-7275
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7276-7277
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7278-7280
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7281-7283
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7284-7288
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7289-7291
HexagonItinerariesV69Bypass::Hex_FWD, // 7292
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7293-7295
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7296-7299
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7300-7304
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7305-7307
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7308-7311
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7312-7314
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7315-7316
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7317-7319
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7320-7321
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7322-7325
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7326-7327
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7328-7331
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7332-7333
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7334-7336
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7337-7338
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7339-7342
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7343-7346
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7347-7349
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7350-7352
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7353-7356
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7357-7361
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7362-7364
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7365-7367
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7368-7371
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7372-7373
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7374-7375
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7376-7377
HexagonItinerariesV69Bypass::Hex_FWD, // 7378
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7379-7380
HexagonItinerariesV69Bypass::Hex_FWD, // 7381
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7382-7383
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7384-7385
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7386-7387
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7388-7389
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7390-7391
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7392-7393
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7394-7395
HexagonItinerariesV69Bypass::Hex_FWD, // 7396
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7397-7398
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7399-7400
HexagonItinerariesV69Bypass::Hex_FWD, // 7401
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7402-7404
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7405-7407
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7408-7410
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7411-7413
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7414-7416
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7417-7419
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7420-7421
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7422-7423
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7424-7428
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7429-7434
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7435-7436
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7437-7438
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7439-7440
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7441-7445
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7446-7449
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7450-7454
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7455-7457
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7458-7461
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7462-7465
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7466-7468
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7469-7473
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7474-7478
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7479-7481
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7482-7485
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7486-7489
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7490-7493
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7494-7497
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7498-7499
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7500-7501
HexagonItinerariesV69Bypass::Hex_FWD, // 7502
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7503-7504
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7505-7507
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7508-7510
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7511-7513
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7514-7518
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7519-7523
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7524-7528
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7529-7533
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7534-7538
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7539-7541
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7542-7543
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7544-7545
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7546-7548
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7549-7553
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7554-7556
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7557-7561
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7562-7564
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7565-7569
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7570-7572
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7573-7577
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7578-7581
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7582-7585
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7586-7589
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7590-7593
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7594-7597
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7598-7602
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7603-7604
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7605-7608
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7609-7610
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7611-7613
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7614-7615
HexagonItinerariesV69Bypass::Hex_FWD, // 7616
HexagonItinerariesV69Bypass::Hex_FWD, // 7617
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7618-7619
HexagonItinerariesV69Bypass::Hex_FWD, // 7620
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7621-7622
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7623-7625
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7626-7627
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7628-7629
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7630-7633
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7634-7638
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7639-7641
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7642-7645
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7646-7649
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7650-7654
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7655-7658
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7659-7661
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7662-7665
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7666-7670
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7671-7674
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7675-7677
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7678-7681
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7682-7686
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7687-7690
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7691-7693
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7694-7697
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7698-7702
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7703-7706
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7707-7710
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7711-7715
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7716-7719
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7720-7724
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7725-7728
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7729-7730
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7731-7733
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7734-7735
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7736-7738
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7739-7741
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7742-7744
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7745-7748
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7749-7753
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7754-7757
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7758-7761
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7762-7765
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7766-7768
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7769-7772
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7773-7775
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7776-7779
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7780-7783
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7784-7787
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7788-7789
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7790-7791
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7792-7794
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7795-7796
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7797-7798
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7799-7803
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7804-7805
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7806-7808
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7809-7812
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7813-7816
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7817-7819
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7820-7823
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7824-7826
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7827-7830
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7831-7833
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7834-7837
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7838-7840
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7841-7843
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7844-7846
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7847-7850
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7851-7853
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7854-7857
HexagonItinerariesV69Bypass::HVX_FWD, // 7858
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7859-7861
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7862-7866
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7867-7870
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7871-7873
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7874-7877
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7878-7881
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7882-7886
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7887-7890
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7891-7893
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7894-7897
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7898-7901
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7902-7906
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7907-7909
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7910-7912
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7913-7914
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7915-7918
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7919-7923
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7924-7927
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7928-7932
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7933-7936
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7937-7938
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::HVX_FWD, // 7939-7941
HexagonItinerariesV69Bypass::Hex_FWD, // 7942
HexagonItinerariesV69Bypass::HVX_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7943-7944
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7945-7946
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7947-7949
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7950-7952
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7953-7956
HexagonItinerariesV69Bypass::Hex_FWD, // 7957
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7958-7959
HexagonItinerariesV69Bypass::Hex_FWD, // 7960
HexagonItinerariesV69Bypass::Hex_FWD, // 7961
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7962-7963
HexagonItinerariesV69Bypass::Hex_FWD, // 7964
HexagonItinerariesV69Bypass::Hex_FWD, HexagonItinerariesV69Bypass::Hex_FWD, // 7965-7966
HexagonItinerariesV69Bypass::Hex_FWD, // 7967
 0 // End bypass tables
};

static const llvm::InstrItinerary HexagonItinerariesV60[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 2, 1, 4 }, // 1 tc_01d44cb2
  { 1, 2, 3, 4, 7 }, // 2 PSEUDO
  { 1, 2, 3, 7, 9 }, // 3 tc_c57d9f39
  { 1, 2, 3, 9, 13 }, // 4 tc_1c2c7a4a
  { 1, 2, 3, 13, 17 }, // 5 tc_442395f3
  { 1, 2, 3, 17, 20 }, // 6 tc_713b66bf
  { 1, 2, 3, 20, 23 }, // 7 tc_86173609
  { 1, 1, 2, 23, 26 }, // 8 tc_5da50c4b
  { 1, 1, 2, 26, 29 }, // 9 tc_4a55d03c
  { 1, 2, 3, 29, 32 }, // 10 tc_d33e5eee
  { 1, 1, 2, 32, 35 }, // 11 tc_651cbe02
  { 1, 3, 4, 35, 38 }, // 12 DUPLEX
  { 1, 4, 5, 38, 39 }, // 13 tc_ENDLOOP
  { 1, 2, 3, 0, 0 }, // 14 tc_23708a21
  { 1, 1, 2, 39, 41 }, // 15 tc_56a124a7
  { 1, 5, 6, 41, 43 }, // 16 tc_2f573607
  { 1, 5, 6, 43, 46 }, // 17 tc_53c851ab
  { 1, 6, 7, 46, 50 }, // 18 tc_fedb7e19
  { 1, 6, 7, 50, 53 }, // 19 tc_4222e6bf
  { 1, 6, 7, 53, 57 }, // 20 tc_075c8dd8
  { 1, 3, 4, 57, 60 }, // 21 tc_9bcfb2ee
  { 1, 3, 4, 60, 63 }, // 22 tc_158aa3f7
  { 1, 3, 4, 63, 66 }, // 23 tc_df5d53f9
  { 1, 3, 4, 66, 69 }, // 24 tc_14ab4f41
  { 1, 3, 4, 69, 70 }, // 25 tc_f38f92e1
  { 1, 3, 4, 70, 71 }, // 26 tc_1981450d
  { 1, 6, 7, 71, 73 }, // 27 tc_e9170fb7
  { 1, 3, 4, 73, 75 }, // 28 tc_40d64c94
  { 1, 6, 7, 75, 77 }, // 29 LD_tc_ld_SLOT01
  { 1, 1, 2, 77, 80 }, // 30 tc_38382228
  { 1, 1, 2, 80, 83 }, // 31 tc_c21d7447
  { 1, 1, 2, 83, 87 }, // 32 tc_7f8ae742
  { 1, 7, 8, 87, 90 }, // 33 tc_5a4b5e58
  { 1, 7, 8, 90, 94 }, // 34 tc_197dce51
  { 1, 1, 2, 94, 95 }, // 35 tc_44fffc58
  { 1, 6, 7, 95, 100 }, // 36 tc_5ceb2f9e
  { 1, 8, 10, 100, 103 }, // 37 tc_56c4f9fe
  { 1, 6, 7, 103, 108 }, // 38 tc_b4dc7630
  { 1, 6, 7, 108, 112 }, // 39 tc_a2b365d2
  { 1, 5, 6, 112, 113 }, // 40 tc_60e324ff
  { 1, 10, 12, 113, 116 }, // 41 tc_db5555f3
  { 1, 12, 15, 116, 119 }, // 42 tc_c0749f3c
  { 1, 15, 17, 119, 122 }, // 43 PSEUDOM
  { 1, 8, 10, 122, 125 }, // 44 tc_3aacf4a8
  { 1, 17, 20, 125, 128 }, // 45 tc_c5dba46e
  { 1, 10, 12, 128, 132 }, // 46 tc_af25efd9
  { 1, 1, 2, 132, 135 }, // 47 tc_0dfac0a7
  { 1, 6, 7, 135, 139 }, // 48 tc_8035e91f
  { 1, 3, 4, 139, 143 }, // 49 tc_011e0e9d
  { 1, 6, 7, 143, 146 }, // 50 tc_ae5babd7
  { 1, 3, 4, 146, 149 }, // 51 tc_5deb5e47
  { 1, 1, 2, 149, 154 }, // 52 tc_bb831a7c
  { 1, 3, 4, 154, 158 }, // 53 tc_92240447
  { 1, 6, 7, 158, 161 }, // 54 tc_7c31e19a
  { 1, 6, 7, 161, 165 }, // 55 tc_d03278fd
  { 1, 6, 7, 165, 169 }, // 56 tc_65cbd974
  { 1, 3, 4, 169, 172 }, // 57 tc_934753bb
  { 1, 6, 7, 172, 175 }, // 58 ST_tc_st_SLOT01
  { 1, 20, 22, 175, 179 }, // 59 CVI_VA
  { 1, 22, 24, 179, 183 }, // 60 tc_f175e046
  { 1, 22, 24, 183, 188 }, // 61 tc_4942646a
  { 1, 8, 10, 188, 190 }, // 62 tc_0ec46cf9
  { 1, 10, 12, 190, 191 }, // 63 tc_718b5c53
  { 1, 24, 28, 0, 0 }, // 64 CVI_GATHER_PSEUDO
  { 1, 3, 4, 191, 192 }, // 65 tc_d45ba9cd
  { 1, 2, 3, 192, 195 }, // 66 tc_388f9897
  { 1, 2, 3, 195, 197 }, // 67 tc_9124c04f
  { 1, 2, 3, 197, 200 }, // 68 tc_4ac61d92
  { 1, 6, 7, 200, 202 }, // 69 tc_aee6250c
  { 1, 6, 7, 202, 205 }, // 70 tc_eed07714
  { 1, 6, 7, 205, 208 }, // 71 tc_74a42bda
  { 1, 6, 7, 208, 211 }, // 72 tc_a9edeffa
  { 1, 6, 7, 211, 214 }, // 73 tc_838c4d7a
  { 1, 1, 2, 214, 216 }, // 74 tc_d61dfdc3
  { 1, 1, 2, 216, 219 }, // 75 tc_8a825db2
  { 1, 1, 2, 219, 222 }, // 76 tc_f34c1c21
  { 1, 2, 3, 222, 225 }, // 77 tc_95a33176
  { 1, 1, 2, 225, 227 }, // 78 tc_9f6cd987
  { 1, 2, 3, 0, 0 }, // 79 tc_b837298f
  { 1, 2, 3, 227, 230 }, // 80 tc_8b5bd4f5
  { 1, 2, 3, 230, 233 }, // 81 tc_84a7500d
  { 1, 7, 8, 233, 235 }, // 82 tc_7476d766
  { 1, 7, 8, 235, 237 }, // 83 tc_49fdfd4b
  { 1, 1, 2, 237, 240 }, // 84 tc_f098b237
  { 1, 1, 2, 240, 243 }, // 85 tc_20131976
  { 1, 1, 2, 243, 248 }, // 86 tc_1d41f8b7
  { 1, 1, 2, 248, 251 }, // 87 tc_a1297125
  { 1, 2, 3, 251, 252 }, // 88 tc_112d30d6
  { 1, 1, 2, 252, 255 }, // 89 tc_d68dca5c
  { 1, 1, 2, 255, 259 }, // 90 tc_788b1d09
  { 1, 1, 2, 259, 264 }, // 91 tc_38e0bae9
  { 1, 1, 2, 264, 267 }, // 92 tc_407e96f9
  { 1, 1, 2, 267, 271 }, // 93 tc_7401744f
  { 1, 1, 2, 271, 274 }, // 94 tc_9b3c0462
  { 1, 1, 2, 274, 276 }, // 95 tc_151bf368
  { 1, 2, 3, 276, 279 }, // 96 tc_9c52f549
  { 1, 1, 2, 279, 281 }, // 97 tc_55b33fda
  { 1, 1, 2, 281, 285 }, // 98 tc_6fc5dbea
  { 1, 7, 8, 285, 287 }, // 99 tc_3edca78f
  { 1, 1, 2, 287, 291 }, // 100 tc_a7a13fac
  { 1, 1, 2, 291, 293 }, // 101 tc_9783714b
  { 1, 1, 2, 293, 296 }, // 102 tc_f0e8e832
  { 1, 1, 2, 296, 298 }, // 103 tc_65279839
  { 1, 1, 2, 298, 302 }, // 104 tc_0a195f2c
  { 1, 1, 2, 302, 306 }, // 105 tc_01e1be3b
  { 1, 1, 2, 306, 309 }, // 106 tc_556f6577
  { 1, 1, 2, 309, 312 }, // 107 tc_02fe1c65
  { 1, 1, 2, 312, 316 }, // 108 tc_9e72dc89
  { 1, 1, 2, 316, 321 }, // 109 tc_9edb7c77
  { 1, 1, 2, 321, 324 }, // 110 tc_7f7f45f5
  { 1, 1, 2, 324, 327 }, // 111 tc_c20701f0
  { 1, 1, 2, 327, 331 }, // 112 tc_f7569068
  { 1, 7, 8, 331, 333 }, // 113 tc_fae9dfa5
  { 1, 7, 8, 333, 335 }, // 114 tc_6ae3426b
  { 1, 1, 2, 335, 337 }, // 115 tc_69bfb303
  { 1, 5, 6, 337, 338 }, // 116 tc_362b0be2
  { 1, 5, 6, 338, 340 }, // 117 tc_dc51281d
  { 1, 1, 2, 340, 341 }, // 118 tc_decdde8a
  { 1, 1, 2, 341, 343 }, // 119 tc_eeda4109
  { 1, 1, 2, 343, 345 }, // 120 tc_711c805f
  { 1, 5, 6, 345, 347 }, // 121 tc_ed03645c
  { 1, 5, 6, 347, 349 }, // 122 tc_42ff66ba
  { 1, 7, 8, 349, 351 }, // 123 tc_57a55b54
  { 1, 7, 8, 351, 353 }, // 124 tc_1248597c
  { 1, 7, 8, 353, 355 }, // 125 tc_9406230a
  { 1, 5, 6, 355, 356 }, // 126 tc_d57d649c
  { 1, 7, 8, 356, 358 }, // 127 tc_4abdbdc6
  { 1, 7, 8, 358, 360 }, // 128 tc_6d861a95
  { 1, 5, 6, 360, 361 }, // 129 tc_45f9d1be
  { 1, 3, 4, 361, 364 }, // 130 tc_24e109c7
  { 1, 1, 2, 364, 367 }, // 131 tc_9e27f2f9
  { 1, 3, 4, 367, 370 }, // 132 tc_f6e2aff9
  { 1, 1, 2, 370, 373 }, // 133 tc_24f426ab
  { 1, 3, 4, 373, 376 }, // 134 tc_975a4e54
  { 1, 1, 2, 376, 379 }, // 135 tc_5502c366
  { 1, 3, 4, 379, 381 }, // 136 tc_7b9187d3
  { 1, 1, 2, 381, 383 }, // 137 tc_f999c66e
  { 1, 6, 7, 383, 388 }, // 138 tc_1c7522a8
  { 1, 6, 7, 388, 394 }, // 139 tc_76bb5435
  { 1, 6, 7, 394, 396 }, // 140 tc_8a6d0d94
  { 1, 3, 4, 396, 398 }, // 141 tc_2471c1c8
  { 1, 3, 4, 398, 400 }, // 142 tc_64b00d8a
  { 1, 6, 7, 400, 405 }, // 143 tc_5f2afaf7
  { 1, 6, 7, 405, 409 }, // 144 tc_ac65613f
  { 1, 6, 7, 409, 414 }, // 145 tc_a32e03e7
  { 1, 6, 7, 414, 417 }, // 146 tc_822c3c68
  { 1, 6, 7, 417, 421 }, // 147 tc_abfd9a6d
  { 1, 6, 7, 421, 425 }, // 148 tc_bf2ffc0f
  { 1, 6, 7, 425, 428 }, // 149 tc_7c6d32e4
  { 1, 6, 7, 428, 433 }, // 150 tc_45791fb8
  { 1, 6, 7, 433, 438 }, // 151 tc_b7c4062a
  { 1, 6, 7, 438, 441 }, // 152 tc_5944960d
  { 1, 1, 2, 441, 445 }, // 153 tc_2c13e7f5
  { 1, 1, 2, 445, 449 }, // 154 tc_a154b476
  { 1, 1, 2, 449, 453 }, // 155 tc_a4e22bbd
  { 1, 1, 2, 453, 457 }, // 156 tc_503ce0f3
  { 1, 6, 7, 457, 459 }, // 157 tc_0655b949
  { 1, 3, 4, 459, 461 }, // 158 tc_6e20402a
  { 1, 3, 4, 461, 462 }, // 159 tc_db96aa6b
  { 1, 1, 2, 462, 464 }, // 160 tc_a7bdb22c
  { 1, 1, 2, 464, 467 }, // 161 tc_db596beb
  { 1, 1, 2, 467, 470 }, // 162 tc_a08b630b
  { 1, 1, 2, 470, 473 }, // 163 tc_1fcb8495
  { 1, 6, 7, 473, 478 }, // 164 tc_9edefe01
  { 1, 6, 7, 478, 483 }, // 165 tc_449acf79
  { 1, 3, 4, 483, 488 }, // 166 tc_ce59038e
  { 1, 3, 4, 488, 493 }, // 167 tc_f529831b
  { 1, 3, 4, 493, 498 }, // 168 tc_addc37a8
  { 1, 3, 4, 498, 501 }, // 169 tc_6f42bc60
  { 1, 3, 4, 501, 503 }, // 170 tc_7af3a37e
  { 1, 1, 2, 503, 505 }, // 171 tc_e3d699e3
  { 1, 6, 7, 505, 508 }, // 172 tc_ba9255a6
  { 1, 6, 7, 508, 513 }, // 173 tc_1fe4ab69
  { 1, 6, 7, 513, 516 }, // 174 tc_bb07f2c5
  { 1, 6, 7, 516, 521 }, // 175 tc_8e82e8ca
  { 1, 3, 4, 521, 524 }, // 176 tc_cfa0e29b
  { 1, 3, 4, 524, 529 }, // 177 tc_0a6c20ae
  { 1, 3, 4, 529, 532 }, // 178 tc_0fac1eb8
  { 1, 3, 4, 532, 537 }, // 179 tc_829d8a86
  { 1, 6, 7, 537, 541 }, // 180 tc_280f7fe1
  { 1, 6, 7, 541, 545 }, // 181 tc_887d1bb7
  { 1, 3, 4, 545, 549 }, // 182 tc_96ef76ef
  { 1, 3, 4, 549, 553 }, // 183 tc_55a9a350
  { 1, 1, 2, 553, 557 }, // 184 tc_f0cdeccf
  { 1, 1, 2, 557, 562 }, // 185 tc_a38c45dc
  { 1, 1, 2, 562, 564 }, // 186 tc_d3632d88
  { 1, 1, 2, 564, 568 }, // 187 tc_5e4cf0e8
  { 1, 1, 2, 568, 570 }, // 188 tc_ef921005
  { 1, 6, 7, 570, 573 }, // 189 tc_5b347363
  { 1, 6, 7, 573, 575 }, // 190 tc_3d14a17b
  { 1, 6, 7, 575, 576 }, // 191 tc_3fbf1042
  { 1, 6, 7, 576, 577 }, // 192 tc_63567288
  { 1, 6, 7, 577, 579 }, // 193 tc_59a7822c
  { 1, 6, 7, 0, 0 }, // 194 tc_937dd41c
  { 1, 3, 4, 0, 0 }, // 195 tc_a4ee89db
  { 1, 3, 4, 0, 0 }, // 196 tc_c818ff7f
  { 1, 3, 4, 579, 580 }, // 197 tc_1242dc2a
  { 1, 6, 7, 580, 582 }, // 198 tc_44d5a428
  { 1, 28, 30, 582, 585 }, // 199 tc_540c3da3
  { 1, 22, 24, 585, 587 }, // 200 tc_c4edf264
  { 1, 30, 32, 587, 589 }, // 201 tc_5bf8afbb
  { 1, 32, 34, 589, 593 }, // 202 tc_2b4c548e
  { 1, 32, 34, 593, 598 }, // 203 tc_bb599486
  { 1, 34, 38, 598, 601 }, // 204 tc_a7e6707d
  { 1, 34, 38, 601, 605 }, // 205 tc_3c56e5ce
  { 1, 12, 15, 605, 609 }, // 206 tc_abe8c3b2
  { 1, 12, 15, 609, 614 }, // 207 tc_453fe68d
  { 1, 12, 15, 614, 618 }, // 208 tc_1ba8a0cd
  { 1, 38, 40, 618, 621 }, // 209 tc_52447ecc
  { 1, 38, 40, 621, 625 }, // 210 tc_3904b926
  { 1, 38, 40, 625, 630 }, // 211 tc_b9db8205
  { 1, 38, 40, 630, 634 }, // 212 tc_663c80a7
  { 1, 40, 44, 634, 637 }, // 213 tc_f21e8abb
  { 1, 40, 44, 637, 641 }, // 214 tc_131f1c81
  { 1, 40, 44, 641, 646 }, // 215 tc_c7039829
  { 1, 40, 44, 646, 650 }, // 216 tc_e2d2e9e5
  { 1, 44, 46, 650, 653 }, // 217 tc_ab23f776
  { 1, 44, 46, 653, 657 }, // 218 tc_7177e272
  { 1, 44, 46, 657, 662 }, // 219 tc_e99d4c2e
  { 1, 44, 46, 662, 666 }, // 220 tc_6942b6e0
  { 1, 17, 20, 666, 670 }, // 221 tc_a02a10a8
  { 1, 17, 20, 670, 675 }, // 222 tc_54a0dc47
  { 1, 17, 20, 675, 679 }, // 223 tc_447d9895
  { 1, 17, 20, 679, 684 }, // 224 tc_191381c1
  { 1, 17, 20, 684, 688 }, // 225 tc_3e2aaafc
  { 1, 44, 46, 688, 690 }, // 226 tc_3ce09744
  { 1, 44, 46, 690, 693 }, // 227 tc_20a4bbec
  { 1, 22, 24, 693, 695 }, // 228 tc_5cdf8c84
  { 1, 22, 24, 695, 698 }, // 229 tc_c127de3a
  { 1, 46, 48, 698, 701 }, // 230 tc_05ca8cfd
  { 1, 32, 34, 701, 704 }, // 231 tc_d8287c14
  { 1, 8, 10, 704, 708 }, // 232 tc_257f6f7c
  { 1, 8, 10, 708, 713 }, // 233 tc_7e6a3e89
  { 1, 8, 10, 713, 717 }, // 234 tc_e35c1e93
  { 1, 32, 34, 717, 721 }, // 235 tc_08a4f1b6
  { 1, 30, 32, 721, 725 }, // 236 tc_56e64202
  { 1, 22, 24, 725, 728 }, // 237 tc_ac4046bc
  { 1, 22, 24, 728, 732 }, // 238 tc_2e8f5f6e
  { 1, 46, 48, 732, 735 }, // 239 tc_7417e785
  { 1, 46, 48, 735, 739 }, // 240 tc_309dbb4f
  { 1, 48, 50, 739, 743 }, // 241 tc_df80eeb0
  { 1, 46, 48, 743, 747 }, // 242 tc_16ff9ef8
  { 1, 2, 3, 747, 749 }, // 243 tc_2120355e
  { 1, 46, 48, 749, 751 }, // 244 tc_51d0ecc3
  { 1, 2, 3, 751, 754 }, // 245 tc_aa047364
  { 1, 22, 24, 754, 756 }, // 246 tc_3c8c15d0
  { 1, 32, 34, 756, 758 }, // 247 tc_0afc8be9
  { 1, 48, 50, 758, 763 }, // 248 tc_561aaa58
  { 1, 30, 32, 763, 765 }, // 249 tc_946013d8
  { 1, 30, 32, 765, 768 }, // 250 tc_46d6c3e0
  { 1, 48, 50, 768, 772 }, // 251 tc_87adc037
  { 1, 22, 24, 772, 776 }, // 252 tc_a19b9305
  { 1, 22, 24, 776, 779 }, // 253 tc_649072c2
  { 1, 22, 24, 779, 783 }, // 254 tc_b091f1c6
  { 1, 32, 34, 783, 786 }, // 255 tc_0b04c6c7
  { 1, 32, 34, 786, 790 }, // 256 tc_660769f1
  { 1, 32, 34, 790, 793 }, // 257 tc_dcca380f
  { 1, 32, 34, 793, 797 }, // 258 tc_72e2b393
  { 1, 32, 34, 797, 800 }, // 259 tc_73efe966
  { 1, 22, 24, 800, 803 }, // 260 tc_cda936da
  { 1, 50, 53, 803, 806 }, // 261 tc_a28f32b5
  { 1, 50, 53, 806, 810 }, // 262 tc_7d68d5c2
  { 1, 53, 56, 810, 813 }, // 263 tc_7095ecba
  { 1, 53, 56, 813, 817 }, // 264 tc_a69eeee1
  { 1, 56, 58, 0, 0 }, // 265 tc_1381a97c
  { 1, 56, 58, 817, 818 }, // 266 tc_e3f68a46
  { 1, 58, 60, 818, 821 }, // 267 tc_f1de44ef
  { 1, 48, 50, 821, 826 }, // 268 tc_9d1dc972
  { 1, 58, 60, 826, 830 }, // 269 tc_90bcc1db
  { 1, 60, 63, 830, 833 }, // 270 tc_cd94bfe0
  { 1, 60, 63, 833, 837 }, // 271 tc_15fdf750
  { 1, 32, 34, 837, 841 }, // 272 tc_1ad8a370
  { 1, 32, 34, 841, 846 }, // 273 tc_e675c45a
  { 1, 32, 34, 846, 850 }, // 274 tc_37820f4c
  { 1, 63, 65, 850, 853 }, // 275 tc_61bf7c03
  { 1, 63, 65, 853, 857 }, // 276 tc_933f2b39
  { 1, 63, 65, 857, 861 }, // 277 tc_26a377fe
  { 1, 63, 65, 861, 866 }, // 278 tc_2d4051cd
  { 1, 30, 32, 866, 869 }, // 279 tc_6e7fa133
  { 1, 46, 48, 869, 872 }, // 280 tc_8772086c
  { 1, 10, 12, 872, 874 }, // 281 tc_b4416217
  { 1, 17, 20, 874, 878 }, // 282 tc_9f363d21
  { 1, 17, 20, 878, 883 }, // 283 tc_8e420e4d
  { 1, 65, 68, 883, 887 }, // 284 tc_7273323b
  { 1, 65, 68, 887, 892 }, // 285 tc_58d21193
  { 1, 10, 12, 892, 896 }, // 286 tc_71646d06
  { 1, 48, 50, 896, 898 }, // 287 tc_04da405a
  { 1, 48, 50, 898, 901 }, // 288 tc_2c745bb8
  { 1, 56, 58, 901, 902 }, // 289 tc_b28e51aa
  { 1, 56, 58, 902, 904 }, // 290 tc_767c4e9d
  { 1, 68, 70, 904, 906 }, // 291 tc_e699ae41
  { 1, 68, 70, 906, 909 }, // 292 tc_a0dbea28
  { 1, 68, 70, 909, 912 }, // 293 tc_dd5b0695
  { 1, 68, 70, 912, 916 }, // 294 tc_3ad719fb
  { 1, 3, 4, 0, 0 }, // 295 tc_77f94a5e
  { 1, 7, 8, 0, 0 }, // 296 tc_55255f2b
  { 1, 3, 4, 916, 917 }, // 297 tc_b1ae5f67
  { 1, 3, 4, 917, 919 }, // 298 tc_2237d952
  { 1, 5, 6, 919, 920 }, // 299 tc_0ba0d5da
  { 1, 5, 6, 0, 0 }, // 300 tc_9b34f5e0
  { 1, 7, 8, 920, 921 }, // 301 tc_2c3e17fc
  { 1, 3, 4, 921, 923 }, // 302 tc_a3070909
  { 1, 7, 8, 923, 924 }, // 303 tc_d7718fbe
  { 1, 7, 8, 924, 926 }, // 304 tc_28e55c6f
  { 1, 3, 4, 926, 927 }, // 305 tc_4bf903b0
  { 0, 0, 0, 0, 0 }, // 306 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV5[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 70, 71, 0, 0 }, // 1 tc_01d44cb2
  { 1, 71, 72, 0, 0 }, // 2 PSEUDO
  { 1, 71, 72, 0, 0 }, // 3 tc_c57d9f39
  { 1, 71, 72, 0, 0 }, // 4 tc_1c2c7a4a
  { 1, 71, 72, 0, 0 }, // 5 tc_442395f3
  { 1, 71, 72, 0, 0 }, // 6 tc_713b66bf
  { 1, 71, 72, 0, 0 }, // 7 tc_86173609
  { 1, 70, 71, 0, 0 }, // 8 tc_5da50c4b
  { 1, 70, 71, 0, 0 }, // 9 tc_4a55d03c
  { 1, 71, 72, 0, 0 }, // 10 tc_d33e5eee
  { 1, 70, 71, 0, 0 }, // 11 tc_651cbe02
  { 1, 72, 73, 0, 0 }, // 12 DUPLEX
  { 1, 73, 74, 0, 0 }, // 13 tc_ENDLOOP
  { 1, 71, 72, 0, 0 }, // 14 tc_23708a21
  { 1, 70, 71, 0, 0 }, // 15 tc_56a124a7
  { 1, 74, 75, 0, 0 }, // 16 tc_2f573607
  { 1, 74, 75, 0, 0 }, // 17 tc_53c851ab
  { 1, 75, 76, 0, 0 }, // 18 tc_fedb7e19
  { 1, 75, 76, 0, 0 }, // 19 tc_4222e6bf
  { 1, 75, 76, 0, 0 }, // 20 tc_075c8dd8
  { 1, 72, 73, 0, 0 }, // 21 tc_9bcfb2ee
  { 1, 72, 73, 0, 0 }, // 22 tc_158aa3f7
  { 1, 72, 73, 0, 0 }, // 23 tc_df5d53f9
  { 1, 72, 73, 0, 0 }, // 24 tc_14ab4f41
  { 1, 72, 73, 0, 0 }, // 25 tc_f38f92e1
  { 1, 72, 73, 0, 0 }, // 26 tc_1981450d
  { 1, 75, 76, 0, 0 }, // 27 tc_e9170fb7
  { 1, 72, 73, 0, 0 }, // 28 tc_40d64c94
  { 1, 75, 76, 0, 0 }, // 29 LD_tc_ld_SLOT01
  { 1, 70, 71, 0, 0 }, // 30 tc_38382228
  { 1, 70, 71, 0, 0 }, // 31 tc_c21d7447
  { 1, 70, 71, 0, 0 }, // 32 tc_7f8ae742
  { 1, 76, 77, 0, 0 }, // 33 tc_5a4b5e58
  { 1, 76, 77, 0, 0 }, // 34 tc_197dce51
  { 1, 70, 71, 0, 0 }, // 35 tc_44fffc58
  { 1, 75, 76, 0, 0 }, // 36 tc_5ceb2f9e
  { 0, 0, 0, 0, 0 }, // 37 tc_56c4f9fe
  { 1, 75, 76, 0, 0 }, // 38 tc_b4dc7630
  { 1, 75, 76, 0, 0 }, // 39 tc_a2b365d2
  { 1, 74, 75, 0, 0 }, // 40 tc_60e324ff
  { 0, 0, 0, 0, 0 }, // 41 tc_db5555f3
  { 0, 0, 0, 0, 0 }, // 42 tc_c0749f3c
  { 1, 77, 79, 0, 0 }, // 43 PSEUDOM
  { 0, 0, 0, 0, 0 }, // 44 tc_3aacf4a8
  { 0, 0, 0, 0, 0 }, // 45 tc_c5dba46e
  { 0, 0, 0, 0, 0 }, // 46 tc_af25efd9
  { 1, 70, 71, 0, 0 }, // 47 tc_0dfac0a7
  { 1, 75, 76, 0, 0 }, // 48 tc_8035e91f
  { 1, 72, 73, 0, 0 }, // 49 tc_011e0e9d
  { 1, 75, 76, 0, 0 }, // 50 tc_ae5babd7
  { 1, 72, 73, 0, 0 }, // 51 tc_5deb5e47
  { 1, 70, 71, 0, 0 }, // 52 tc_bb831a7c
  { 1, 72, 73, 0, 0 }, // 53 tc_92240447
  { 1, 75, 76, 0, 0 }, // 54 tc_7c31e19a
  { 1, 75, 76, 0, 0 }, // 55 tc_d03278fd
  { 1, 75, 76, 0, 0 }, // 56 tc_65cbd974
  { 1, 72, 73, 0, 0 }, // 57 tc_934753bb
  { 1, 75, 76, 0, 0 }, // 58 ST_tc_st_SLOT01
  { 0, 0, 0, 0, 0 }, // 59 CVI_VA
  { 0, 0, 0, 0, 0 }, // 60 tc_f175e046
  { 0, 0, 0, 0, 0 }, // 61 tc_4942646a
  { 0, 0, 0, 0, 0 }, // 62 tc_0ec46cf9
  { 0, 0, 0, 0, 0 }, // 63 tc_718b5c53
  { 0, 0, 0, 0, 0 }, // 64 CVI_GATHER_PSEUDO
  { 1, 72, 73, 0, 0 }, // 65 tc_d45ba9cd
  { 1, 71, 72, 0, 0 }, // 66 tc_388f9897
  { 1, 71, 72, 0, 0 }, // 67 tc_9124c04f
  { 1, 71, 72, 0, 0 }, // 68 tc_4ac61d92
  { 1, 75, 76, 0, 0 }, // 69 tc_aee6250c
  { 1, 75, 76, 0, 0 }, // 70 tc_eed07714
  { 1, 75, 76, 0, 0 }, // 71 tc_74a42bda
  { 1, 75, 76, 0, 0 }, // 72 tc_a9edeffa
  { 1, 75, 76, 0, 0 }, // 73 tc_838c4d7a
  { 1, 70, 71, 0, 0 }, // 74 tc_d61dfdc3
  { 1, 70, 71, 0, 0 }, // 75 tc_8a825db2
  { 1, 70, 71, 0, 0 }, // 76 tc_f34c1c21
  { 1, 71, 72, 0, 0 }, // 77 tc_95a33176
  { 1, 70, 71, 0, 0 }, // 78 tc_9f6cd987
  { 1, 71, 72, 0, 0 }, // 79 tc_b837298f
  { 1, 71, 72, 0, 0 }, // 80 tc_8b5bd4f5
  { 1, 71, 72, 0, 0 }, // 81 tc_84a7500d
  { 1, 76, 77, 0, 0 }, // 82 tc_7476d766
  { 1, 76, 77, 0, 0 }, // 83 tc_49fdfd4b
  { 1, 70, 71, 0, 0 }, // 84 tc_f098b237
  { 1, 70, 71, 0, 0 }, // 85 tc_20131976
  { 1, 70, 71, 0, 0 }, // 86 tc_1d41f8b7
  { 1, 70, 71, 0, 0 }, // 87 tc_a1297125
  { 1, 71, 72, 0, 0 }, // 88 tc_112d30d6
  { 1, 70, 71, 0, 0 }, // 89 tc_d68dca5c
  { 1, 70, 71, 0, 0 }, // 90 tc_788b1d09
  { 1, 70, 71, 0, 0 }, // 91 tc_38e0bae9
  { 1, 70, 71, 0, 0 }, // 92 tc_407e96f9
  { 1, 70, 71, 0, 0 }, // 93 tc_7401744f
  { 1, 70, 71, 0, 0 }, // 94 tc_9b3c0462
  { 1, 70, 71, 0, 0 }, // 95 tc_151bf368
  { 1, 71, 72, 0, 0 }, // 96 tc_9c52f549
  { 1, 70, 71, 0, 0 }, // 97 tc_55b33fda
  { 1, 70, 71, 0, 0 }, // 98 tc_6fc5dbea
  { 1, 76, 77, 0, 0 }, // 99 tc_3edca78f
  { 1, 70, 71, 0, 0 }, // 100 tc_a7a13fac
  { 1, 70, 71, 0, 0 }, // 101 tc_9783714b
  { 1, 70, 71, 0, 0 }, // 102 tc_f0e8e832
  { 1, 70, 71, 0, 0 }, // 103 tc_65279839
  { 1, 70, 71, 0, 0 }, // 104 tc_0a195f2c
  { 1, 70, 71, 0, 0 }, // 105 tc_01e1be3b
  { 1, 70, 71, 0, 0 }, // 106 tc_556f6577
  { 1, 70, 71, 0, 0 }, // 107 tc_02fe1c65
  { 1, 70, 71, 0, 0 }, // 108 tc_9e72dc89
  { 1, 70, 71, 0, 0 }, // 109 tc_9edb7c77
  { 1, 70, 71, 0, 0 }, // 110 tc_7f7f45f5
  { 1, 70, 71, 0, 0 }, // 111 tc_c20701f0
  { 1, 70, 71, 0, 0 }, // 112 tc_f7569068
  { 1, 76, 77, 0, 0 }, // 113 tc_fae9dfa5
  { 1, 76, 77, 0, 0 }, // 114 tc_6ae3426b
  { 1, 70, 71, 0, 0 }, // 115 tc_69bfb303
  { 1, 74, 75, 0, 0 }, // 116 tc_362b0be2
  { 1, 74, 75, 0, 0 }, // 117 tc_dc51281d
  { 1, 70, 71, 0, 0 }, // 118 tc_decdde8a
  { 1, 70, 71, 0, 0 }, // 119 tc_eeda4109
  { 1, 70, 71, 0, 0 }, // 120 tc_711c805f
  { 1, 74, 75, 0, 0 }, // 121 tc_ed03645c
  { 1, 74, 75, 0, 0 }, // 122 tc_42ff66ba
  { 1, 76, 77, 0, 0 }, // 123 tc_57a55b54
  { 1, 76, 77, 0, 0 }, // 124 tc_1248597c
  { 1, 76, 77, 0, 0 }, // 125 tc_9406230a
  { 1, 74, 75, 0, 0 }, // 126 tc_d57d649c
  { 1, 76, 77, 0, 0 }, // 127 tc_4abdbdc6
  { 1, 76, 77, 0, 0 }, // 128 tc_6d861a95
  { 1, 74, 75, 0, 0 }, // 129 tc_45f9d1be
  { 1, 72, 73, 0, 0 }, // 130 tc_24e109c7
  { 1, 70, 71, 0, 0 }, // 131 tc_9e27f2f9
  { 1, 72, 73, 0, 0 }, // 132 tc_f6e2aff9
  { 1, 70, 71, 0, 0 }, // 133 tc_24f426ab
  { 1, 72, 73, 0, 0 }, // 134 tc_975a4e54
  { 1, 70, 71, 0, 0 }, // 135 tc_5502c366
  { 1, 72, 73, 0, 0 }, // 136 tc_7b9187d3
  { 1, 70, 71, 0, 0 }, // 137 tc_f999c66e
  { 1, 75, 76, 0, 0 }, // 138 tc_1c7522a8
  { 1, 75, 76, 0, 0 }, // 139 tc_76bb5435
  { 1, 75, 76, 0, 0 }, // 140 tc_8a6d0d94
  { 1, 72, 73, 0, 0 }, // 141 tc_2471c1c8
  { 1, 72, 73, 0, 0 }, // 142 tc_64b00d8a
  { 1, 75, 76, 0, 0 }, // 143 tc_5f2afaf7
  { 1, 75, 76, 0, 0 }, // 144 tc_ac65613f
  { 1, 75, 76, 0, 0 }, // 145 tc_a32e03e7
  { 1, 75, 76, 0, 0 }, // 146 tc_822c3c68
  { 1, 75, 76, 0, 0 }, // 147 tc_abfd9a6d
  { 1, 75, 76, 0, 0 }, // 148 tc_bf2ffc0f
  { 1, 75, 76, 0, 0 }, // 149 tc_7c6d32e4
  { 1, 75, 76, 0, 0 }, // 150 tc_45791fb8
  { 1, 75, 76, 0, 0 }, // 151 tc_b7c4062a
  { 1, 75, 76, 0, 0 }, // 152 tc_5944960d
  { 1, 70, 71, 0, 0 }, // 153 tc_2c13e7f5
  { 1, 70, 71, 0, 0 }, // 154 tc_a154b476
  { 1, 70, 71, 0, 0 }, // 155 tc_a4e22bbd
  { 1, 70, 71, 0, 0 }, // 156 tc_503ce0f3
  { 1, 75, 76, 0, 0 }, // 157 tc_0655b949
  { 1, 72, 73, 0, 0 }, // 158 tc_6e20402a
  { 1, 72, 73, 0, 0 }, // 159 tc_db96aa6b
  { 1, 70, 71, 0, 0 }, // 160 tc_a7bdb22c
  { 1, 70, 71, 0, 0 }, // 161 tc_db596beb
  { 1, 70, 71, 0, 0 }, // 162 tc_a08b630b
  { 1, 70, 71, 0, 0 }, // 163 tc_1fcb8495
  { 1, 75, 76, 0, 0 }, // 164 tc_9edefe01
  { 1, 75, 76, 0, 0 }, // 165 tc_449acf79
  { 1, 72, 73, 0, 0 }, // 166 tc_ce59038e
  { 1, 72, 73, 0, 0 }, // 167 tc_f529831b
  { 1, 72, 73, 0, 0 }, // 168 tc_addc37a8
  { 1, 72, 73, 0, 0 }, // 169 tc_6f42bc60
  { 1, 72, 73, 0, 0 }, // 170 tc_7af3a37e
  { 1, 70, 71, 0, 0 }, // 171 tc_e3d699e3
  { 1, 75, 76, 0, 0 }, // 172 tc_ba9255a6
  { 1, 75, 76, 0, 0 }, // 173 tc_1fe4ab69
  { 1, 75, 76, 0, 0 }, // 174 tc_bb07f2c5
  { 1, 75, 76, 0, 0 }, // 175 tc_8e82e8ca
  { 1, 72, 73, 0, 0 }, // 176 tc_cfa0e29b
  { 1, 72, 73, 0, 0 }, // 177 tc_0a6c20ae
  { 1, 72, 73, 0, 0 }, // 178 tc_0fac1eb8
  { 1, 72, 73, 0, 0 }, // 179 tc_829d8a86
  { 1, 75, 76, 0, 0 }, // 180 tc_280f7fe1
  { 1, 75, 76, 0, 0 }, // 181 tc_887d1bb7
  { 1, 72, 73, 0, 0 }, // 182 tc_96ef76ef
  { 1, 72, 73, 0, 0 }, // 183 tc_55a9a350
  { 1, 70, 71, 0, 0 }, // 184 tc_f0cdeccf
  { 1, 70, 71, 0, 0 }, // 185 tc_a38c45dc
  { 1, 70, 71, 0, 0 }, // 186 tc_d3632d88
  { 1, 70, 71, 0, 0 }, // 187 tc_5e4cf0e8
  { 1, 70, 71, 0, 0 }, // 188 tc_ef921005
  { 1, 75, 76, 0, 0 }, // 189 tc_5b347363
  { 1, 75, 76, 0, 0 }, // 190 tc_3d14a17b
  { 1, 75, 76, 0, 0 }, // 191 tc_3fbf1042
  { 1, 75, 76, 0, 0 }, // 192 tc_63567288
  { 1, 75, 76, 0, 0 }, // 193 tc_59a7822c
  { 1, 75, 76, 0, 0 }, // 194 tc_937dd41c
  { 1, 72, 73, 0, 0 }, // 195 tc_a4ee89db
  { 1, 72, 73, 0, 0 }, // 196 tc_c818ff7f
  { 1, 72, 73, 0, 0 }, // 197 tc_1242dc2a
  { 1, 75, 76, 0, 0 }, // 198 tc_44d5a428
  { 0, 0, 0, 0, 0 }, // 199 tc_540c3da3
  { 0, 0, 0, 0, 0 }, // 200 tc_c4edf264
  { 0, 0, 0, 0, 0 }, // 201 tc_5bf8afbb
  { 0, 0, 0, 0, 0 }, // 202 tc_2b4c548e
  { 0, 0, 0, 0, 0 }, // 203 tc_bb599486
  { 0, 0, 0, 0, 0 }, // 204 tc_a7e6707d
  { 0, 0, 0, 0, 0 }, // 205 tc_3c56e5ce
  { 0, 0, 0, 0, 0 }, // 206 tc_abe8c3b2
  { 0, 0, 0, 0, 0 }, // 207 tc_453fe68d
  { 0, 0, 0, 0, 0 }, // 208 tc_1ba8a0cd
  { 0, 0, 0, 0, 0 }, // 209 tc_52447ecc
  { 0, 0, 0, 0, 0 }, // 210 tc_3904b926
  { 0, 0, 0, 0, 0 }, // 211 tc_b9db8205
  { 0, 0, 0, 0, 0 }, // 212 tc_663c80a7
  { 0, 0, 0, 0, 0 }, // 213 tc_f21e8abb
  { 0, 0, 0, 0, 0 }, // 214 tc_131f1c81
  { 0, 0, 0, 0, 0 }, // 215 tc_c7039829
  { 0, 0, 0, 0, 0 }, // 216 tc_e2d2e9e5
  { 0, 0, 0, 0, 0 }, // 217 tc_ab23f776
  { 0, 0, 0, 0, 0 }, // 218 tc_7177e272
  { 0, 0, 0, 0, 0 }, // 219 tc_e99d4c2e
  { 0, 0, 0, 0, 0 }, // 220 tc_6942b6e0
  { 0, 0, 0, 0, 0 }, // 221 tc_a02a10a8
  { 0, 0, 0, 0, 0 }, // 222 tc_54a0dc47
  { 0, 0, 0, 0, 0 }, // 223 tc_447d9895
  { 0, 0, 0, 0, 0 }, // 224 tc_191381c1
  { 0, 0, 0, 0, 0 }, // 225 tc_3e2aaafc
  { 0, 0, 0, 0, 0 }, // 226 tc_3ce09744
  { 0, 0, 0, 0, 0 }, // 227 tc_20a4bbec
  { 0, 0, 0, 0, 0 }, // 228 tc_5cdf8c84
  { 0, 0, 0, 0, 0 }, // 229 tc_c127de3a
  { 0, 0, 0, 0, 0 }, // 230 tc_05ca8cfd
  { 0, 0, 0, 0, 0 }, // 231 tc_d8287c14
  { 0, 0, 0, 0, 0 }, // 232 tc_257f6f7c
  { 0, 0, 0, 0, 0 }, // 233 tc_7e6a3e89
  { 0, 0, 0, 0, 0 }, // 234 tc_e35c1e93
  { 0, 0, 0, 0, 0 }, // 235 tc_08a4f1b6
  { 0, 0, 0, 0, 0 }, // 236 tc_56e64202
  { 0, 0, 0, 0, 0 }, // 237 tc_ac4046bc
  { 0, 0, 0, 0, 0 }, // 238 tc_2e8f5f6e
  { 0, 0, 0, 0, 0 }, // 239 tc_7417e785
  { 0, 0, 0, 0, 0 }, // 240 tc_309dbb4f
  { 0, 0, 0, 0, 0 }, // 241 tc_df80eeb0
  { 0, 0, 0, 0, 0 }, // 242 tc_16ff9ef8
  { 0, 0, 0, 0, 0 }, // 243 tc_2120355e
  { 0, 0, 0, 0, 0 }, // 244 tc_51d0ecc3
  { 0, 0, 0, 0, 0 }, // 245 tc_aa047364
  { 0, 0, 0, 0, 0 }, // 246 tc_3c8c15d0
  { 0, 0, 0, 0, 0 }, // 247 tc_0afc8be9
  { 0, 0, 0, 0, 0 }, // 248 tc_561aaa58
  { 0, 0, 0, 0, 0 }, // 249 tc_946013d8
  { 0, 0, 0, 0, 0 }, // 250 tc_46d6c3e0
  { 0, 0, 0, 0, 0 }, // 251 tc_87adc037
  { 0, 0, 0, 0, 0 }, // 252 tc_a19b9305
  { 0, 0, 0, 0, 0 }, // 253 tc_649072c2
  { 0, 0, 0, 0, 0 }, // 254 tc_b091f1c6
  { 0, 0, 0, 0, 0 }, // 255 tc_0b04c6c7
  { 0, 0, 0, 0, 0 }, // 256 tc_660769f1
  { 0, 0, 0, 0, 0 }, // 257 tc_dcca380f
  { 0, 0, 0, 0, 0 }, // 258 tc_72e2b393
  { 0, 0, 0, 0, 0 }, // 259 tc_73efe966
  { 0, 0, 0, 0, 0 }, // 260 tc_cda936da
  { 0, 0, 0, 0, 0 }, // 261 tc_a28f32b5
  { 0, 0, 0, 0, 0 }, // 262 tc_7d68d5c2
  { 0, 0, 0, 0, 0 }, // 263 tc_7095ecba
  { 0, 0, 0, 0, 0 }, // 264 tc_a69eeee1
  { 0, 0, 0, 0, 0 }, // 265 tc_1381a97c
  { 0, 0, 0, 0, 0 }, // 266 tc_e3f68a46
  { 0, 0, 0, 0, 0 }, // 267 tc_f1de44ef
  { 0, 0, 0, 0, 0 }, // 268 tc_9d1dc972
  { 0, 0, 0, 0, 0 }, // 269 tc_90bcc1db
  { 0, 0, 0, 0, 0 }, // 270 tc_cd94bfe0
  { 0, 0, 0, 0, 0 }, // 271 tc_15fdf750
  { 0, 0, 0, 0, 0 }, // 272 tc_1ad8a370
  { 0, 0, 0, 0, 0 }, // 273 tc_e675c45a
  { 0, 0, 0, 0, 0 }, // 274 tc_37820f4c
  { 0, 0, 0, 0, 0 }, // 275 tc_61bf7c03
  { 0, 0, 0, 0, 0 }, // 276 tc_933f2b39
  { 0, 0, 0, 0, 0 }, // 277 tc_26a377fe
  { 0, 0, 0, 0, 0 }, // 278 tc_2d4051cd
  { 0, 0, 0, 0, 0 }, // 279 tc_6e7fa133
  { 0, 0, 0, 0, 0 }, // 280 tc_8772086c
  { 0, 0, 0, 0, 0 }, // 281 tc_b4416217
  { 0, 0, 0, 0, 0 }, // 282 tc_9f363d21
  { 0, 0, 0, 0, 0 }, // 283 tc_8e420e4d
  { 0, 0, 0, 0, 0 }, // 284 tc_7273323b
  { 0, 0, 0, 0, 0 }, // 285 tc_58d21193
  { 0, 0, 0, 0, 0 }, // 286 tc_71646d06
  { 0, 0, 0, 0, 0 }, // 287 tc_04da405a
  { 0, 0, 0, 0, 0 }, // 288 tc_2c745bb8
  { 0, 0, 0, 0, 0 }, // 289 tc_b28e51aa
  { 0, 0, 0, 0, 0 }, // 290 tc_767c4e9d
  { 0, 0, 0, 0, 0 }, // 291 tc_e699ae41
  { 0, 0, 0, 0, 0 }, // 292 tc_a0dbea28
  { 0, 0, 0, 0, 0 }, // 293 tc_dd5b0695
  { 0, 0, 0, 0, 0 }, // 294 tc_3ad719fb
  { 1, 72, 73, 0, 0 }, // 295 tc_77f94a5e
  { 1, 76, 77, 0, 0 }, // 296 tc_55255f2b
  { 1, 72, 73, 0, 0 }, // 297 tc_b1ae5f67
  { 1, 72, 73, 0, 0 }, // 298 tc_2237d952
  { 1, 74, 75, 0, 0 }, // 299 tc_0ba0d5da
  { 1, 74, 75, 0, 0 }, // 300 tc_9b34f5e0
  { 1, 76, 77, 0, 0 }, // 301 tc_2c3e17fc
  { 1, 72, 73, 0, 0 }, // 302 tc_a3070909
  { 1, 76, 77, 0, 0 }, // 303 tc_d7718fbe
  { 1, 76, 77, 0, 0 }, // 304 tc_28e55c6f
  { 1, 72, 73, 0, 0 }, // 305 tc_4bf903b0
  { 0, 0, 0, 0, 0 }, // 306 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV55[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 79, 80, 927, 930 }, // 1 tc_01d44cb2
  { 1, 80, 81, 930, 933 }, // 2 PSEUDO
  { 1, 80, 81, 933, 935 }, // 3 tc_c57d9f39
  { 1, 80, 81, 935, 939 }, // 4 tc_1c2c7a4a
  { 1, 80, 81, 939, 943 }, // 5 tc_442395f3
  { 1, 80, 81, 943, 946 }, // 6 tc_713b66bf
  { 1, 80, 81, 946, 949 }, // 7 tc_86173609
  { 1, 79, 80, 949, 952 }, // 8 tc_5da50c4b
  { 1, 79, 80, 952, 955 }, // 9 tc_4a55d03c
  { 1, 80, 81, 955, 958 }, // 10 tc_d33e5eee
  { 1, 79, 80, 958, 961 }, // 11 tc_651cbe02
  { 1, 81, 82, 961, 964 }, // 12 DUPLEX
  { 1, 82, 83, 964, 965 }, // 13 tc_ENDLOOP
  { 1, 80, 81, 0, 0 }, // 14 tc_23708a21
  { 1, 79, 80, 965, 967 }, // 15 tc_56a124a7
  { 1, 83, 84, 967, 969 }, // 16 tc_2f573607
  { 1, 83, 84, 969, 972 }, // 17 tc_53c851ab
  { 1, 84, 85, 972, 976 }, // 18 tc_fedb7e19
  { 1, 84, 85, 976, 979 }, // 19 tc_4222e6bf
  { 1, 84, 85, 979, 983 }, // 20 tc_075c8dd8
  { 1, 81, 82, 983, 986 }, // 21 tc_9bcfb2ee
  { 1, 81, 82, 986, 989 }, // 22 tc_158aa3f7
  { 1, 81, 82, 989, 992 }, // 23 tc_df5d53f9
  { 1, 81, 82, 992, 995 }, // 24 tc_14ab4f41
  { 1, 81, 82, 995, 996 }, // 25 tc_f38f92e1
  { 1, 81, 82, 996, 997 }, // 26 tc_1981450d
  { 1, 84, 85, 997, 999 }, // 27 tc_e9170fb7
  { 1, 81, 82, 999, 1001 }, // 28 tc_40d64c94
  { 1, 84, 85, 1001, 1003 }, // 29 LD_tc_ld_SLOT01
  { 1, 79, 80, 1003, 1006 }, // 30 tc_38382228
  { 1, 79, 80, 1006, 1009 }, // 31 tc_c21d7447
  { 1, 79, 80, 1009, 1013 }, // 32 tc_7f8ae742
  { 1, 85, 86, 1013, 1016 }, // 33 tc_5a4b5e58
  { 1, 85, 86, 1016, 1020 }, // 34 tc_197dce51
  { 1, 79, 80, 1020, 1021 }, // 35 tc_44fffc58
  { 1, 84, 85, 1021, 1026 }, // 36 tc_5ceb2f9e
  { 0, 0, 0, 0, 0 }, // 37 tc_56c4f9fe
  { 1, 84, 85, 1026, 1031 }, // 38 tc_b4dc7630
  { 1, 84, 85, 1031, 1035 }, // 39 tc_a2b365d2
  { 1, 83, 84, 1035, 1036 }, // 40 tc_60e324ff
  { 0, 0, 0, 0, 0 }, // 41 tc_db5555f3
  { 0, 0, 0, 0, 0 }, // 42 tc_c0749f3c
  { 1, 86, 88, 1036, 1039 }, // 43 PSEUDOM
  { 0, 0, 0, 0, 0 }, // 44 tc_3aacf4a8
  { 0, 0, 0, 0, 0 }, // 45 tc_c5dba46e
  { 0, 0, 0, 0, 0 }, // 46 tc_af25efd9
  { 1, 79, 80, 1039, 1042 }, // 47 tc_0dfac0a7
  { 1, 84, 85, 1042, 1046 }, // 48 tc_8035e91f
  { 1, 81, 82, 1046, 1050 }, // 49 tc_011e0e9d
  { 1, 84, 85, 1050, 1053 }, // 50 tc_ae5babd7
  { 1, 81, 82, 1053, 1056 }, // 51 tc_5deb5e47
  { 1, 79, 80, 1056, 1061 }, // 52 tc_bb831a7c
  { 1, 81, 82, 1061, 1065 }, // 53 tc_92240447
  { 1, 84, 85, 1065, 1068 }, // 54 tc_7c31e19a
  { 1, 84, 85, 1068, 1072 }, // 55 tc_d03278fd
  { 1, 84, 85, 1072, 1076 }, // 56 tc_65cbd974
  { 1, 81, 82, 1076, 1079 }, // 57 tc_934753bb
  { 1, 84, 85, 1079, 1082 }, // 58 ST_tc_st_SLOT01
  { 0, 0, 0, 0, 0 }, // 59 CVI_VA
  { 0, 0, 0, 0, 0 }, // 60 tc_f175e046
  { 0, 0, 0, 0, 0 }, // 61 tc_4942646a
  { 0, 0, 0, 0, 0 }, // 62 tc_0ec46cf9
  { 0, 0, 0, 0, 0 }, // 63 tc_718b5c53
  { 0, 0, 0, 0, 0 }, // 64 CVI_GATHER_PSEUDO
  { 1, 81, 82, 1082, 1083 }, // 65 tc_d45ba9cd
  { 1, 80, 81, 1083, 1086 }, // 66 tc_388f9897
  { 1, 80, 81, 1086, 1088 }, // 67 tc_9124c04f
  { 1, 80, 81, 1088, 1091 }, // 68 tc_4ac61d92
  { 1, 84, 85, 1091, 1093 }, // 69 tc_aee6250c
  { 1, 84, 85, 1093, 1096 }, // 70 tc_eed07714
  { 1, 84, 85, 1096, 1099 }, // 71 tc_74a42bda
  { 1, 84, 85, 1099, 1102 }, // 72 tc_a9edeffa
  { 1, 84, 85, 1102, 1105 }, // 73 tc_838c4d7a
  { 1, 79, 80, 1105, 1107 }, // 74 tc_d61dfdc3
  { 1, 79, 80, 1107, 1110 }, // 75 tc_8a825db2
  { 1, 79, 80, 1110, 1113 }, // 76 tc_f34c1c21
  { 1, 80, 81, 1113, 1116 }, // 77 tc_95a33176
  { 1, 79, 80, 1116, 1118 }, // 78 tc_9f6cd987
  { 1, 80, 81, 0, 0 }, // 79 tc_b837298f
  { 1, 80, 81, 1118, 1121 }, // 80 tc_8b5bd4f5
  { 1, 80, 81, 1121, 1124 }, // 81 tc_84a7500d
  { 1, 85, 86, 1124, 1126 }, // 82 tc_7476d766
  { 1, 85, 86, 1126, 1128 }, // 83 tc_49fdfd4b
  { 1, 79, 80, 1128, 1131 }, // 84 tc_f098b237
  { 1, 79, 80, 1131, 1134 }, // 85 tc_20131976
  { 1, 79, 80, 1134, 1139 }, // 86 tc_1d41f8b7
  { 1, 79, 80, 1139, 1142 }, // 87 tc_a1297125
  { 1, 80, 81, 1142, 1143 }, // 88 tc_112d30d6
  { 1, 79, 80, 1143, 1146 }, // 89 tc_d68dca5c
  { 1, 79, 80, 1146, 1150 }, // 90 tc_788b1d09
  { 1, 79, 80, 1150, 1155 }, // 91 tc_38e0bae9
  { 1, 79, 80, 1155, 1158 }, // 92 tc_407e96f9
  { 1, 79, 80, 1158, 1162 }, // 93 tc_7401744f
  { 1, 79, 80, 1162, 1165 }, // 94 tc_9b3c0462
  { 1, 79, 80, 1165, 1167 }, // 95 tc_151bf368
  { 1, 80, 81, 1167, 1170 }, // 96 tc_9c52f549
  { 1, 79, 80, 1170, 1172 }, // 97 tc_55b33fda
  { 1, 79, 80, 1172, 1176 }, // 98 tc_6fc5dbea
  { 1, 85, 86, 1176, 1178 }, // 99 tc_3edca78f
  { 1, 79, 80, 1178, 1182 }, // 100 tc_a7a13fac
  { 1, 79, 80, 1182, 1184 }, // 101 tc_9783714b
  { 1, 79, 80, 1184, 1187 }, // 102 tc_f0e8e832
  { 1, 79, 80, 1187, 1189 }, // 103 tc_65279839
  { 1, 79, 80, 1189, 1193 }, // 104 tc_0a195f2c
  { 1, 79, 80, 1193, 1197 }, // 105 tc_01e1be3b
  { 1, 79, 80, 1197, 1200 }, // 106 tc_556f6577
  { 1, 79, 80, 1200, 1203 }, // 107 tc_02fe1c65
  { 1, 79, 80, 1203, 1207 }, // 108 tc_9e72dc89
  { 1, 79, 80, 1207, 1212 }, // 109 tc_9edb7c77
  { 1, 79, 80, 1212, 1215 }, // 110 tc_7f7f45f5
  { 1, 79, 80, 1215, 1218 }, // 111 tc_c20701f0
  { 1, 79, 80, 1218, 1222 }, // 112 tc_f7569068
  { 1, 85, 86, 1222, 1224 }, // 113 tc_fae9dfa5
  { 1, 85, 86, 1224, 1226 }, // 114 tc_6ae3426b
  { 1, 79, 80, 1226, 1228 }, // 115 tc_69bfb303
  { 1, 83, 84, 1228, 1229 }, // 116 tc_362b0be2
  { 1, 83, 84, 1229, 1231 }, // 117 tc_dc51281d
  { 1, 79, 80, 1231, 1232 }, // 118 tc_decdde8a
  { 1, 79, 80, 1232, 1234 }, // 119 tc_eeda4109
  { 1, 79, 80, 1234, 1236 }, // 120 tc_711c805f
  { 1, 83, 84, 1236, 1238 }, // 121 tc_ed03645c
  { 1, 83, 84, 1238, 1240 }, // 122 tc_42ff66ba
  { 1, 85, 86, 1240, 1242 }, // 123 tc_57a55b54
  { 1, 85, 86, 1242, 1244 }, // 124 tc_1248597c
  { 1, 85, 86, 1244, 1246 }, // 125 tc_9406230a
  { 1, 83, 84, 1246, 1247 }, // 126 tc_d57d649c
  { 1, 85, 86, 1247, 1249 }, // 127 tc_4abdbdc6
  { 1, 85, 86, 1249, 1251 }, // 128 tc_6d861a95
  { 1, 83, 84, 1251, 1252 }, // 129 tc_45f9d1be
  { 1, 81, 82, 1252, 1255 }, // 130 tc_24e109c7
  { 1, 79, 80, 1255, 1258 }, // 131 tc_9e27f2f9
  { 1, 81, 82, 1258, 1261 }, // 132 tc_f6e2aff9
  { 1, 79, 80, 1261, 1264 }, // 133 tc_24f426ab
  { 1, 81, 82, 1264, 1267 }, // 134 tc_975a4e54
  { 1, 79, 80, 1267, 1270 }, // 135 tc_5502c366
  { 1, 81, 82, 1270, 1272 }, // 136 tc_7b9187d3
  { 1, 79, 80, 1272, 1274 }, // 137 tc_f999c66e
  { 1, 84, 85, 1274, 1279 }, // 138 tc_1c7522a8
  { 1, 84, 85, 1279, 1285 }, // 139 tc_76bb5435
  { 1, 84, 85, 1285, 1287 }, // 140 tc_8a6d0d94
  { 1, 81, 82, 1287, 1289 }, // 141 tc_2471c1c8
  { 1, 81, 82, 1289, 1291 }, // 142 tc_64b00d8a
  { 1, 84, 85, 1291, 1296 }, // 143 tc_5f2afaf7
  { 1, 84, 85, 1296, 1300 }, // 144 tc_ac65613f
  { 1, 84, 85, 1300, 1305 }, // 145 tc_a32e03e7
  { 1, 84, 85, 1305, 1308 }, // 146 tc_822c3c68
  { 1, 84, 85, 1308, 1312 }, // 147 tc_abfd9a6d
  { 1, 84, 85, 1312, 1316 }, // 148 tc_bf2ffc0f
  { 1, 84, 85, 1316, 1319 }, // 149 tc_7c6d32e4
  { 1, 84, 85, 1319, 1324 }, // 150 tc_45791fb8
  { 1, 84, 85, 1324, 1329 }, // 151 tc_b7c4062a
  { 1, 84, 85, 1329, 1332 }, // 152 tc_5944960d
  { 1, 79, 80, 1332, 1336 }, // 153 tc_2c13e7f5
  { 1, 79, 80, 1336, 1340 }, // 154 tc_a154b476
  { 1, 79, 80, 1340, 1344 }, // 155 tc_a4e22bbd
  { 1, 79, 80, 1344, 1348 }, // 156 tc_503ce0f3
  { 1, 84, 85, 1348, 1350 }, // 157 tc_0655b949
  { 1, 81, 82, 1350, 1352 }, // 158 tc_6e20402a
  { 1, 81, 82, 1352, 1353 }, // 159 tc_db96aa6b
  { 1, 79, 80, 1353, 1355 }, // 160 tc_a7bdb22c
  { 1, 79, 80, 1355, 1358 }, // 161 tc_db596beb
  { 1, 79, 80, 1358, 1361 }, // 162 tc_a08b630b
  { 1, 79, 80, 1361, 1364 }, // 163 tc_1fcb8495
  { 1, 84, 85, 1364, 1369 }, // 164 tc_9edefe01
  { 1, 84, 85, 1369, 1374 }, // 165 tc_449acf79
  { 1, 81, 82, 1374, 1379 }, // 166 tc_ce59038e
  { 1, 81, 82, 1379, 1384 }, // 167 tc_f529831b
  { 1, 81, 82, 1384, 1389 }, // 168 tc_addc37a8
  { 1, 81, 82, 1389, 1392 }, // 169 tc_6f42bc60
  { 1, 81, 82, 1392, 1394 }, // 170 tc_7af3a37e
  { 1, 79, 80, 1394, 1396 }, // 171 tc_e3d699e3
  { 1, 84, 85, 1396, 1399 }, // 172 tc_ba9255a6
  { 1, 84, 85, 1399, 1404 }, // 173 tc_1fe4ab69
  { 1, 84, 85, 1404, 1407 }, // 174 tc_bb07f2c5
  { 1, 84, 85, 1407, 1412 }, // 175 tc_8e82e8ca
  { 1, 81, 82, 1412, 1415 }, // 176 tc_cfa0e29b
  { 1, 81, 82, 1415, 1420 }, // 177 tc_0a6c20ae
  { 1, 81, 82, 1420, 1423 }, // 178 tc_0fac1eb8
  { 1, 81, 82, 1423, 1428 }, // 179 tc_829d8a86
  { 1, 84, 85, 1428, 1432 }, // 180 tc_280f7fe1
  { 1, 84, 85, 1432, 1436 }, // 181 tc_887d1bb7
  { 1, 81, 82, 1436, 1440 }, // 182 tc_96ef76ef
  { 1, 81, 82, 1440, 1444 }, // 183 tc_55a9a350
  { 1, 79, 80, 1444, 1448 }, // 184 tc_f0cdeccf
  { 1, 79, 80, 1448, 1453 }, // 185 tc_a38c45dc
  { 1, 79, 80, 1453, 1455 }, // 186 tc_d3632d88
  { 1, 79, 80, 1455, 1459 }, // 187 tc_5e4cf0e8
  { 1, 79, 80, 1459, 1461 }, // 188 tc_ef921005
  { 1, 84, 85, 1461, 1464 }, // 189 tc_5b347363
  { 1, 84, 85, 1464, 1466 }, // 190 tc_3d14a17b
  { 1, 84, 85, 1466, 1467 }, // 191 tc_3fbf1042
  { 1, 84, 85, 1467, 1468 }, // 192 tc_63567288
  { 1, 84, 85, 1468, 1470 }, // 193 tc_59a7822c
  { 1, 84, 85, 0, 0 }, // 194 tc_937dd41c
  { 1, 81, 82, 0, 0 }, // 195 tc_a4ee89db
  { 1, 81, 82, 0, 0 }, // 196 tc_c818ff7f
  { 1, 81, 82, 1470, 1471 }, // 197 tc_1242dc2a
  { 1, 84, 85, 1471, 1473 }, // 198 tc_44d5a428
  { 0, 0, 0, 0, 0 }, // 199 tc_540c3da3
  { 0, 0, 0, 0, 0 }, // 200 tc_c4edf264
  { 0, 0, 0, 0, 0 }, // 201 tc_5bf8afbb
  { 0, 0, 0, 0, 0 }, // 202 tc_2b4c548e
  { 0, 0, 0, 0, 0 }, // 203 tc_bb599486
  { 0, 0, 0, 0, 0 }, // 204 tc_a7e6707d
  { 0, 0, 0, 0, 0 }, // 205 tc_3c56e5ce
  { 0, 0, 0, 0, 0 }, // 206 tc_abe8c3b2
  { 0, 0, 0, 0, 0 }, // 207 tc_453fe68d
  { 0, 0, 0, 0, 0 }, // 208 tc_1ba8a0cd
  { 0, 0, 0, 0, 0 }, // 209 tc_52447ecc
  { 0, 0, 0, 0, 0 }, // 210 tc_3904b926
  { 0, 0, 0, 0, 0 }, // 211 tc_b9db8205
  { 0, 0, 0, 0, 0 }, // 212 tc_663c80a7
  { 0, 0, 0, 0, 0 }, // 213 tc_f21e8abb
  { 0, 0, 0, 0, 0 }, // 214 tc_131f1c81
  { 0, 0, 0, 0, 0 }, // 215 tc_c7039829
  { 0, 0, 0, 0, 0 }, // 216 tc_e2d2e9e5
  { 0, 0, 0, 0, 0 }, // 217 tc_ab23f776
  { 0, 0, 0, 0, 0 }, // 218 tc_7177e272
  { 0, 0, 0, 0, 0 }, // 219 tc_e99d4c2e
  { 0, 0, 0, 0, 0 }, // 220 tc_6942b6e0
  { 0, 0, 0, 0, 0 }, // 221 tc_a02a10a8
  { 0, 0, 0, 0, 0 }, // 222 tc_54a0dc47
  { 0, 0, 0, 0, 0 }, // 223 tc_447d9895
  { 0, 0, 0, 0, 0 }, // 224 tc_191381c1
  { 0, 0, 0, 0, 0 }, // 225 tc_3e2aaafc
  { 0, 0, 0, 0, 0 }, // 226 tc_3ce09744
  { 0, 0, 0, 0, 0 }, // 227 tc_20a4bbec
  { 0, 0, 0, 0, 0 }, // 228 tc_5cdf8c84
  { 0, 0, 0, 0, 0 }, // 229 tc_c127de3a
  { 0, 0, 0, 0, 0 }, // 230 tc_05ca8cfd
  { 0, 0, 0, 0, 0 }, // 231 tc_d8287c14
  { 0, 0, 0, 0, 0 }, // 232 tc_257f6f7c
  { 0, 0, 0, 0, 0 }, // 233 tc_7e6a3e89
  { 0, 0, 0, 0, 0 }, // 234 tc_e35c1e93
  { 0, 0, 0, 0, 0 }, // 235 tc_08a4f1b6
  { 0, 0, 0, 0, 0 }, // 236 tc_56e64202
  { 0, 0, 0, 0, 0 }, // 237 tc_ac4046bc
  { 0, 0, 0, 0, 0 }, // 238 tc_2e8f5f6e
  { 0, 0, 0, 0, 0 }, // 239 tc_7417e785
  { 0, 0, 0, 0, 0 }, // 240 tc_309dbb4f
  { 0, 0, 0, 0, 0 }, // 241 tc_df80eeb0
  { 0, 0, 0, 0, 0 }, // 242 tc_16ff9ef8
  { 0, 0, 0, 0, 0 }, // 243 tc_2120355e
  { 0, 0, 0, 0, 0 }, // 244 tc_51d0ecc3
  { 0, 0, 0, 0, 0 }, // 245 tc_aa047364
  { 0, 0, 0, 0, 0 }, // 246 tc_3c8c15d0
  { 0, 0, 0, 0, 0 }, // 247 tc_0afc8be9
  { 0, 0, 0, 0, 0 }, // 248 tc_561aaa58
  { 0, 0, 0, 0, 0 }, // 249 tc_946013d8
  { 0, 0, 0, 0, 0 }, // 250 tc_46d6c3e0
  { 0, 0, 0, 0, 0 }, // 251 tc_87adc037
  { 0, 0, 0, 0, 0 }, // 252 tc_a19b9305
  { 0, 0, 0, 0, 0 }, // 253 tc_649072c2
  { 0, 0, 0, 0, 0 }, // 254 tc_b091f1c6
  { 0, 0, 0, 0, 0 }, // 255 tc_0b04c6c7
  { 0, 0, 0, 0, 0 }, // 256 tc_660769f1
  { 0, 0, 0, 0, 0 }, // 257 tc_dcca380f
  { 0, 0, 0, 0, 0 }, // 258 tc_72e2b393
  { 0, 0, 0, 0, 0 }, // 259 tc_73efe966
  { 0, 0, 0, 0, 0 }, // 260 tc_cda936da
  { 0, 0, 0, 0, 0 }, // 261 tc_a28f32b5
  { 0, 0, 0, 0, 0 }, // 262 tc_7d68d5c2
  { 0, 0, 0, 0, 0 }, // 263 tc_7095ecba
  { 0, 0, 0, 0, 0 }, // 264 tc_a69eeee1
  { 0, 0, 0, 0, 0 }, // 265 tc_1381a97c
  { 0, 0, 0, 0, 0 }, // 266 tc_e3f68a46
  { 0, 0, 0, 0, 0 }, // 267 tc_f1de44ef
  { 0, 0, 0, 0, 0 }, // 268 tc_9d1dc972
  { 0, 0, 0, 0, 0 }, // 269 tc_90bcc1db
  { 0, 0, 0, 0, 0 }, // 270 tc_cd94bfe0
  { 0, 0, 0, 0, 0 }, // 271 tc_15fdf750
  { 0, 0, 0, 0, 0 }, // 272 tc_1ad8a370
  { 0, 0, 0, 0, 0 }, // 273 tc_e675c45a
  { 0, 0, 0, 0, 0 }, // 274 tc_37820f4c
  { 0, 0, 0, 0, 0 }, // 275 tc_61bf7c03
  { 0, 0, 0, 0, 0 }, // 276 tc_933f2b39
  { 0, 0, 0, 0, 0 }, // 277 tc_26a377fe
  { 0, 0, 0, 0, 0 }, // 278 tc_2d4051cd
  { 0, 0, 0, 0, 0 }, // 279 tc_6e7fa133
  { 0, 0, 0, 0, 0 }, // 280 tc_8772086c
  { 0, 0, 0, 0, 0 }, // 281 tc_b4416217
  { 0, 0, 0, 0, 0 }, // 282 tc_9f363d21
  { 0, 0, 0, 0, 0 }, // 283 tc_8e420e4d
  { 0, 0, 0, 0, 0 }, // 284 tc_7273323b
  { 0, 0, 0, 0, 0 }, // 285 tc_58d21193
  { 0, 0, 0, 0, 0 }, // 286 tc_71646d06
  { 0, 0, 0, 0, 0 }, // 287 tc_04da405a
  { 0, 0, 0, 0, 0 }, // 288 tc_2c745bb8
  { 0, 0, 0, 0, 0 }, // 289 tc_b28e51aa
  { 0, 0, 0, 0, 0 }, // 290 tc_767c4e9d
  { 0, 0, 0, 0, 0 }, // 291 tc_e699ae41
  { 0, 0, 0, 0, 0 }, // 292 tc_a0dbea28
  { 0, 0, 0, 0, 0 }, // 293 tc_dd5b0695
  { 0, 0, 0, 0, 0 }, // 294 tc_3ad719fb
  { 1, 81, 82, 0, 0 }, // 295 tc_77f94a5e
  { 1, 85, 86, 0, 0 }, // 296 tc_55255f2b
  { 1, 81, 82, 1473, 1474 }, // 297 tc_b1ae5f67
  { 1, 81, 82, 1474, 1476 }, // 298 tc_2237d952
  { 1, 83, 84, 1476, 1477 }, // 299 tc_0ba0d5da
  { 1, 83, 84, 0, 0 }, // 300 tc_9b34f5e0
  { 1, 85, 86, 1477, 1478 }, // 301 tc_2c3e17fc
  { 1, 81, 82, 1478, 1480 }, // 302 tc_a3070909
  { 1, 85, 86, 1480, 1481 }, // 303 tc_d7718fbe
  { 1, 85, 86, 1481, 1483 }, // 304 tc_28e55c6f
  { 1, 81, 82, 1483, 1484 }, // 305 tc_4bf903b0
  { 0, 0, 0, 0, 0 }, // 306 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV62[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 88, 89, 1484, 1487 }, // 1 tc_01d44cb2
  { 1, 89, 90, 1487, 1490 }, // 2 PSEUDO
  { 1, 89, 90, 1490, 1492 }, // 3 tc_c57d9f39
  { 1, 89, 90, 1492, 1496 }, // 4 tc_1c2c7a4a
  { 1, 89, 90, 1496, 1500 }, // 5 tc_442395f3
  { 1, 89, 90, 1500, 1503 }, // 6 tc_713b66bf
  { 1, 89, 90, 1503, 1506 }, // 7 tc_86173609
  { 1, 88, 89, 1506, 1509 }, // 8 tc_5da50c4b
  { 1, 88, 89, 1509, 1512 }, // 9 tc_4a55d03c
  { 1, 89, 90, 1512, 1515 }, // 10 tc_d33e5eee
  { 1, 88, 89, 1515, 1518 }, // 11 tc_651cbe02
  { 1, 90, 91, 1518, 1521 }, // 12 DUPLEX
  { 1, 91, 92, 1521, 1522 }, // 13 tc_ENDLOOP
  { 1, 89, 90, 0, 0 }, // 14 tc_23708a21
  { 1, 89, 90, 1522, 1524 }, // 15 tc_56a124a7
  { 1, 92, 93, 1524, 1526 }, // 16 tc_2f573607
  { 1, 92, 93, 1526, 1529 }, // 17 tc_53c851ab
  { 1, 93, 94, 1529, 1533 }, // 18 tc_fedb7e19
  { 1, 93, 94, 1533, 1536 }, // 19 tc_4222e6bf
  { 1, 93, 94, 1536, 1540 }, // 20 tc_075c8dd8
  { 1, 90, 91, 1540, 1543 }, // 21 tc_9bcfb2ee
  { 1, 90, 91, 1543, 1546 }, // 22 tc_158aa3f7
  { 1, 90, 91, 1546, 1549 }, // 23 tc_df5d53f9
  { 1, 90, 91, 1549, 1552 }, // 24 tc_14ab4f41
  { 1, 90, 91, 1552, 1553 }, // 25 tc_f38f92e1
  { 1, 90, 91, 1553, 1554 }, // 26 tc_1981450d
  { 1, 93, 94, 1554, 1556 }, // 27 tc_e9170fb7
  { 1, 90, 91, 1556, 1558 }, // 28 tc_40d64c94
  { 1, 93, 94, 1558, 1560 }, // 29 LD_tc_ld_SLOT01
  { 1, 88, 89, 1560, 1563 }, // 30 tc_38382228
  { 1, 88, 89, 1563, 1566 }, // 31 tc_c21d7447
  { 1, 88, 89, 1566, 1570 }, // 32 tc_7f8ae742
  { 1, 94, 95, 1570, 1573 }, // 33 tc_5a4b5e58
  { 1, 94, 95, 1573, 1577 }, // 34 tc_197dce51
  { 1, 88, 89, 1577, 1578 }, // 35 tc_44fffc58
  { 1, 93, 94, 1578, 1583 }, // 36 tc_5ceb2f9e
  { 1, 95, 97, 1583, 1586 }, // 37 tc_56c4f9fe
  { 1, 93, 94, 1586, 1591 }, // 38 tc_b4dc7630
  { 1, 93, 94, 1591, 1595 }, // 39 tc_a2b365d2
  { 1, 92, 93, 1595, 1596 }, // 40 tc_60e324ff
  { 1, 97, 99, 1596, 1599 }, // 41 tc_db5555f3
  { 1, 99, 102, 1599, 1602 }, // 42 tc_c0749f3c
  { 1, 102, 104, 1602, 1605 }, // 43 PSEUDOM
  { 1, 95, 97, 1605, 1608 }, // 44 tc_3aacf4a8
  { 1, 104, 107, 1608, 1611 }, // 45 tc_c5dba46e
  { 1, 97, 99, 1611, 1615 }, // 46 tc_af25efd9
  { 1, 88, 89, 1615, 1618 }, // 47 tc_0dfac0a7
  { 1, 93, 94, 1618, 1622 }, // 48 tc_8035e91f
  { 1, 90, 91, 1622, 1626 }, // 49 tc_011e0e9d
  { 1, 93, 94, 1626, 1629 }, // 50 tc_ae5babd7
  { 1, 90, 91, 1629, 1632 }, // 51 tc_5deb5e47
  { 1, 88, 89, 1632, 1637 }, // 52 tc_bb831a7c
  { 1, 90, 91, 1637, 1641 }, // 53 tc_92240447
  { 1, 93, 94, 1641, 1644 }, // 54 tc_7c31e19a
  { 1, 93, 94, 1644, 1648 }, // 55 tc_d03278fd
  { 1, 93, 94, 1648, 1652 }, // 56 tc_65cbd974
  { 1, 90, 91, 1652, 1655 }, // 57 tc_934753bb
  { 1, 93, 94, 1655, 1658 }, // 58 ST_tc_st_SLOT01
  { 1, 107, 109, 1658, 1662 }, // 59 CVI_VA
  { 1, 109, 111, 1662, 1666 }, // 60 tc_f175e046
  { 1, 109, 111, 1666, 1671 }, // 61 tc_4942646a
  { 1, 95, 97, 1671, 1673 }, // 62 tc_0ec46cf9
  { 1, 97, 99, 1673, 1674 }, // 63 tc_718b5c53
  { 1, 111, 115, 0, 0 }, // 64 CVI_GATHER_PSEUDO
  { 1, 90, 91, 1674, 1675 }, // 65 tc_d45ba9cd
  { 1, 89, 90, 1675, 1678 }, // 66 tc_388f9897
  { 1, 89, 90, 1678, 1680 }, // 67 tc_9124c04f
  { 1, 89, 90, 1680, 1683 }, // 68 tc_4ac61d92
  { 1, 93, 94, 1683, 1685 }, // 69 tc_aee6250c
  { 1, 93, 94, 1685, 1688 }, // 70 tc_eed07714
  { 1, 93, 94, 1688, 1691 }, // 71 tc_74a42bda
  { 1, 93, 94, 1691, 1694 }, // 72 tc_a9edeffa
  { 1, 93, 94, 1694, 1697 }, // 73 tc_838c4d7a
  { 1, 88, 89, 1697, 1699 }, // 74 tc_d61dfdc3
  { 1, 88, 89, 1699, 1702 }, // 75 tc_8a825db2
  { 1, 88, 89, 1702, 1705 }, // 76 tc_f34c1c21
  { 1, 89, 90, 1705, 1708 }, // 77 tc_95a33176
  { 1, 88, 89, 1708, 1710 }, // 78 tc_9f6cd987
  { 1, 89, 90, 0, 0 }, // 79 tc_b837298f
  { 1, 89, 90, 1710, 1713 }, // 80 tc_8b5bd4f5
  { 1, 89, 90, 1713, 1716 }, // 81 tc_84a7500d
  { 1, 94, 95, 1716, 1718 }, // 82 tc_7476d766
  { 1, 94, 95, 1718, 1720 }, // 83 tc_49fdfd4b
  { 1, 88, 89, 1720, 1723 }, // 84 tc_f098b237
  { 1, 88, 89, 1723, 1726 }, // 85 tc_20131976
  { 1, 88, 89, 1726, 1731 }, // 86 tc_1d41f8b7
  { 1, 88, 89, 1731, 1734 }, // 87 tc_a1297125
  { 1, 89, 90, 1734, 1735 }, // 88 tc_112d30d6
  { 1, 88, 89, 1735, 1738 }, // 89 tc_d68dca5c
  { 1, 88, 89, 1738, 1742 }, // 90 tc_788b1d09
  { 1, 88, 89, 1742, 1747 }, // 91 tc_38e0bae9
  { 1, 88, 89, 1747, 1750 }, // 92 tc_407e96f9
  { 1, 88, 89, 1750, 1754 }, // 93 tc_7401744f
  { 1, 88, 89, 1754, 1757 }, // 94 tc_9b3c0462
  { 1, 88, 89, 1757, 1759 }, // 95 tc_151bf368
  { 1, 89, 90, 1759, 1762 }, // 96 tc_9c52f549
  { 1, 88, 89, 1762, 1764 }, // 97 tc_55b33fda
  { 1, 88, 89, 1764, 1768 }, // 98 tc_6fc5dbea
  { 1, 94, 95, 1768, 1770 }, // 99 tc_3edca78f
  { 1, 88, 89, 1770, 1774 }, // 100 tc_a7a13fac
  { 1, 88, 89, 1774, 1776 }, // 101 tc_9783714b
  { 1, 88, 89, 1776, 1779 }, // 102 tc_f0e8e832
  { 1, 88, 89, 1779, 1781 }, // 103 tc_65279839
  { 1, 88, 89, 1781, 1785 }, // 104 tc_0a195f2c
  { 1, 88, 89, 1785, 1789 }, // 105 tc_01e1be3b
  { 1, 88, 89, 1789, 1792 }, // 106 tc_556f6577
  { 1, 88, 89, 1792, 1795 }, // 107 tc_02fe1c65
  { 1, 88, 89, 1795, 1799 }, // 108 tc_9e72dc89
  { 1, 88, 89, 1799, 1804 }, // 109 tc_9edb7c77
  { 1, 88, 89, 1804, 1807 }, // 110 tc_7f7f45f5
  { 1, 88, 89, 1807, 1810 }, // 111 tc_c20701f0
  { 1, 88, 89, 1810, 1814 }, // 112 tc_f7569068
  { 1, 94, 95, 1814, 1816 }, // 113 tc_fae9dfa5
  { 1, 94, 95, 1816, 1818 }, // 114 tc_6ae3426b
  { 1, 88, 89, 1818, 1820 }, // 115 tc_69bfb303
  { 1, 92, 93, 1820, 1821 }, // 116 tc_362b0be2
  { 1, 92, 93, 1821, 1823 }, // 117 tc_dc51281d
  { 1, 89, 90, 1823, 1824 }, // 118 tc_decdde8a
  { 1, 89, 90, 1824, 1826 }, // 119 tc_eeda4109
  { 1, 89, 90, 1826, 1828 }, // 120 tc_711c805f
  { 1, 92, 93, 1828, 1830 }, // 121 tc_ed03645c
  { 1, 92, 93, 1830, 1832 }, // 122 tc_42ff66ba
  { 1, 94, 95, 1832, 1834 }, // 123 tc_57a55b54
  { 1, 94, 95, 1834, 1836 }, // 124 tc_1248597c
  { 1, 94, 95, 1836, 1838 }, // 125 tc_9406230a
  { 1, 92, 93, 1838, 1839 }, // 126 tc_d57d649c
  { 1, 94, 95, 1839, 1841 }, // 127 tc_4abdbdc6
  { 1, 94, 95, 1841, 1843 }, // 128 tc_6d861a95
  { 1, 92, 93, 1843, 1844 }, // 129 tc_45f9d1be
  { 1, 90, 91, 1844, 1847 }, // 130 tc_24e109c7
  { 1, 89, 90, 1847, 1850 }, // 131 tc_9e27f2f9
  { 1, 90, 91, 1850, 1853 }, // 132 tc_f6e2aff9
  { 1, 89, 90, 1853, 1856 }, // 133 tc_24f426ab
  { 1, 90, 91, 1856, 1859 }, // 134 tc_975a4e54
  { 1, 88, 89, 1859, 1862 }, // 135 tc_5502c366
  { 1, 90, 91, 1862, 1864 }, // 136 tc_7b9187d3
  { 1, 89, 90, 1864, 1866 }, // 137 tc_f999c66e
  { 1, 93, 94, 1866, 1871 }, // 138 tc_1c7522a8
  { 1, 93, 94, 1871, 1877 }, // 139 tc_76bb5435
  { 1, 93, 94, 1877, 1879 }, // 140 tc_8a6d0d94
  { 1, 90, 91, 1879, 1881 }, // 141 tc_2471c1c8
  { 1, 90, 91, 1881, 1883 }, // 142 tc_64b00d8a
  { 1, 93, 94, 1883, 1888 }, // 143 tc_5f2afaf7
  { 1, 93, 94, 1888, 1892 }, // 144 tc_ac65613f
  { 1, 93, 94, 1892, 1897 }, // 145 tc_a32e03e7
  { 1, 93, 94, 1897, 1900 }, // 146 tc_822c3c68
  { 1, 93, 94, 1900, 1904 }, // 147 tc_abfd9a6d
  { 1, 93, 94, 1904, 1908 }, // 148 tc_bf2ffc0f
  { 1, 93, 94, 1908, 1911 }, // 149 tc_7c6d32e4
  { 1, 93, 94, 1911, 1916 }, // 150 tc_45791fb8
  { 1, 93, 94, 1916, 1921 }, // 151 tc_b7c4062a
  { 1, 93, 94, 1921, 1924 }, // 152 tc_5944960d
  { 1, 88, 89, 1924, 1928 }, // 153 tc_2c13e7f5
  { 1, 88, 89, 1928, 1932 }, // 154 tc_a154b476
  { 1, 88, 89, 1932, 1936 }, // 155 tc_a4e22bbd
  { 1, 88, 89, 1936, 1940 }, // 156 tc_503ce0f3
  { 1, 93, 94, 1940, 1942 }, // 157 tc_0655b949
  { 1, 90, 91, 1942, 1944 }, // 158 tc_6e20402a
  { 1, 90, 91, 1944, 1945 }, // 159 tc_db96aa6b
  { 1, 88, 89, 1945, 1947 }, // 160 tc_a7bdb22c
  { 1, 88, 89, 1947, 1950 }, // 161 tc_db596beb
  { 1, 88, 89, 1950, 1953 }, // 162 tc_a08b630b
  { 1, 88, 89, 1953, 1956 }, // 163 tc_1fcb8495
  { 1, 93, 94, 1956, 1961 }, // 164 tc_9edefe01
  { 1, 93, 94, 1961, 1966 }, // 165 tc_449acf79
  { 1, 90, 91, 1966, 1971 }, // 166 tc_ce59038e
  { 1, 90, 91, 1971, 1976 }, // 167 tc_f529831b
  { 1, 90, 91, 1976, 1981 }, // 168 tc_addc37a8
  { 1, 90, 91, 1981, 1984 }, // 169 tc_6f42bc60
  { 1, 90, 91, 1984, 1986 }, // 170 tc_7af3a37e
  { 1, 88, 89, 1986, 1988 }, // 171 tc_e3d699e3
  { 1, 93, 94, 1988, 1991 }, // 172 tc_ba9255a6
  { 1, 93, 94, 1991, 1996 }, // 173 tc_1fe4ab69
  { 1, 93, 94, 1996, 1999 }, // 174 tc_bb07f2c5
  { 1, 93, 94, 1999, 2004 }, // 175 tc_8e82e8ca
  { 1, 90, 91, 2004, 2007 }, // 176 tc_cfa0e29b
  { 1, 90, 91, 2007, 2012 }, // 177 tc_0a6c20ae
  { 1, 90, 91, 2012, 2015 }, // 178 tc_0fac1eb8
  { 1, 90, 91, 2015, 2020 }, // 179 tc_829d8a86
  { 1, 93, 94, 2020, 2024 }, // 180 tc_280f7fe1
  { 1, 93, 94, 2024, 2028 }, // 181 tc_887d1bb7
  { 1, 90, 91, 2028, 2032 }, // 182 tc_96ef76ef
  { 1, 90, 91, 2032, 2036 }, // 183 tc_55a9a350
  { 1, 88, 89, 2036, 2040 }, // 184 tc_f0cdeccf
  { 1, 88, 89, 2040, 2045 }, // 185 tc_a38c45dc
  { 1, 88, 89, 2045, 2047 }, // 186 tc_d3632d88
  { 1, 88, 89, 2047, 2051 }, // 187 tc_5e4cf0e8
  { 1, 88, 89, 2051, 2053 }, // 188 tc_ef921005
  { 1, 93, 94, 2053, 2056 }, // 189 tc_5b347363
  { 1, 93, 94, 2056, 2058 }, // 190 tc_3d14a17b
  { 1, 93, 94, 2058, 2059 }, // 191 tc_3fbf1042
  { 1, 93, 94, 2059, 2060 }, // 192 tc_63567288
  { 1, 93, 94, 2060, 2062 }, // 193 tc_59a7822c
  { 1, 93, 94, 0, 0 }, // 194 tc_937dd41c
  { 1, 90, 91, 0, 0 }, // 195 tc_a4ee89db
  { 1, 90, 91, 0, 0 }, // 196 tc_c818ff7f
  { 1, 90, 91, 2062, 2063 }, // 197 tc_1242dc2a
  { 1, 93, 94, 2063, 2065 }, // 198 tc_44d5a428
  { 1, 115, 117, 2065, 2068 }, // 199 tc_540c3da3
  { 1, 109, 111, 2068, 2070 }, // 200 tc_c4edf264
  { 1, 117, 119, 2070, 2072 }, // 201 tc_5bf8afbb
  { 1, 119, 121, 2072, 2076 }, // 202 tc_2b4c548e
  { 1, 119, 121, 2076, 2081 }, // 203 tc_bb599486
  { 1, 121, 125, 2081, 2084 }, // 204 tc_a7e6707d
  { 1, 121, 125, 2084, 2088 }, // 205 tc_3c56e5ce
  { 1, 99, 102, 2088, 2092 }, // 206 tc_abe8c3b2
  { 1, 99, 102, 2092, 2097 }, // 207 tc_453fe68d
  { 1, 99, 102, 2097, 2101 }, // 208 tc_1ba8a0cd
  { 1, 125, 127, 2101, 2104 }, // 209 tc_52447ecc
  { 1, 125, 127, 2104, 2108 }, // 210 tc_3904b926
  { 1, 125, 127, 2108, 2113 }, // 211 tc_b9db8205
  { 1, 125, 127, 2113, 2117 }, // 212 tc_663c80a7
  { 1, 127, 131, 2117, 2120 }, // 213 tc_f21e8abb
  { 1, 127, 131, 2120, 2124 }, // 214 tc_131f1c81
  { 1, 127, 131, 2124, 2129 }, // 215 tc_c7039829
  { 1, 127, 131, 2129, 2133 }, // 216 tc_e2d2e9e5
  { 1, 131, 133, 2133, 2136 }, // 217 tc_ab23f776
  { 1, 131, 133, 2136, 2140 }, // 218 tc_7177e272
  { 1, 131, 133, 2140, 2145 }, // 219 tc_e99d4c2e
  { 1, 131, 133, 2145, 2149 }, // 220 tc_6942b6e0
  { 1, 104, 107, 2149, 2153 }, // 221 tc_a02a10a8
  { 1, 104, 107, 2153, 2158 }, // 222 tc_54a0dc47
  { 1, 104, 107, 2158, 2162 }, // 223 tc_447d9895
  { 1, 104, 107, 2162, 2167 }, // 224 tc_191381c1
  { 1, 104, 107, 2167, 2171 }, // 225 tc_3e2aaafc
  { 1, 131, 133, 2171, 2173 }, // 226 tc_3ce09744
  { 1, 131, 133, 2173, 2176 }, // 227 tc_20a4bbec
  { 1, 109, 111, 2176, 2178 }, // 228 tc_5cdf8c84
  { 1, 109, 111, 2178, 2181 }, // 229 tc_c127de3a
  { 1, 133, 135, 2181, 2184 }, // 230 tc_05ca8cfd
  { 1, 119, 121, 2184, 2187 }, // 231 tc_d8287c14
  { 1, 95, 97, 2187, 2191 }, // 232 tc_257f6f7c
  { 1, 95, 97, 2191, 2196 }, // 233 tc_7e6a3e89
  { 1, 95, 97, 2196, 2200 }, // 234 tc_e35c1e93
  { 1, 119, 121, 2200, 2204 }, // 235 tc_08a4f1b6
  { 1, 117, 119, 2204, 2208 }, // 236 tc_56e64202
  { 1, 109, 111, 2208, 2211 }, // 237 tc_ac4046bc
  { 1, 109, 111, 2211, 2215 }, // 238 tc_2e8f5f6e
  { 1, 133, 135, 2215, 2218 }, // 239 tc_7417e785
  { 1, 133, 135, 2218, 2222 }, // 240 tc_309dbb4f
  { 1, 135, 137, 2222, 2226 }, // 241 tc_df80eeb0
  { 1, 133, 135, 2226, 2230 }, // 242 tc_16ff9ef8
  { 1, 89, 90, 2230, 2232 }, // 243 tc_2120355e
  { 1, 133, 135, 2232, 2234 }, // 244 tc_51d0ecc3
  { 1, 89, 90, 2234, 2237 }, // 245 tc_aa047364
  { 1, 109, 111, 2237, 2239 }, // 246 tc_3c8c15d0
  { 1, 119, 121, 2239, 2241 }, // 247 tc_0afc8be9
  { 1, 135, 137, 2241, 2246 }, // 248 tc_561aaa58
  { 1, 117, 119, 2246, 2248 }, // 249 tc_946013d8
  { 1, 117, 119, 2248, 2251 }, // 250 tc_46d6c3e0
  { 1, 135, 137, 2251, 2255 }, // 251 tc_87adc037
  { 1, 109, 111, 2255, 2259 }, // 252 tc_a19b9305
  { 1, 109, 111, 2259, 2262 }, // 253 tc_649072c2
  { 1, 109, 111, 2262, 2266 }, // 254 tc_b091f1c6
  { 1, 119, 121, 2266, 2269 }, // 255 tc_0b04c6c7
  { 1, 119, 121, 2269, 2273 }, // 256 tc_660769f1
  { 1, 119, 121, 2273, 2276 }, // 257 tc_dcca380f
  { 1, 119, 121, 2276, 2280 }, // 258 tc_72e2b393
  { 1, 119, 121, 2280, 2283 }, // 259 tc_73efe966
  { 1, 109, 111, 2283, 2286 }, // 260 tc_cda936da
  { 1, 137, 140, 2286, 2289 }, // 261 tc_a28f32b5
  { 1, 137, 140, 2289, 2293 }, // 262 tc_7d68d5c2
  { 1, 140, 143, 2293, 2296 }, // 263 tc_7095ecba
  { 1, 140, 143, 2296, 2300 }, // 264 tc_a69eeee1
  { 1, 143, 145, 0, 0 }, // 265 tc_1381a97c
  { 1, 143, 145, 2300, 2301 }, // 266 tc_e3f68a46
  { 1, 145, 147, 2301, 2304 }, // 267 tc_f1de44ef
  { 1, 135, 137, 2304, 2309 }, // 268 tc_9d1dc972
  { 1, 145, 147, 2309, 2313 }, // 269 tc_90bcc1db
  { 1, 147, 150, 2313, 2316 }, // 270 tc_cd94bfe0
  { 1, 147, 150, 2316, 2320 }, // 271 tc_15fdf750
  { 1, 119, 121, 2320, 2324 }, // 272 tc_1ad8a370
  { 1, 119, 121, 2324, 2329 }, // 273 tc_e675c45a
  { 1, 119, 121, 2329, 2333 }, // 274 tc_37820f4c
  { 1, 150, 152, 2333, 2336 }, // 275 tc_61bf7c03
  { 1, 150, 152, 2336, 2340 }, // 276 tc_933f2b39
  { 1, 150, 152, 2340, 2344 }, // 277 tc_26a377fe
  { 1, 150, 152, 2344, 2349 }, // 278 tc_2d4051cd
  { 1, 117, 119, 2349, 2352 }, // 279 tc_6e7fa133
  { 1, 95, 97, 2352, 2355 }, // 280 tc_8772086c
  { 1, 97, 99, 2355, 2357 }, // 281 tc_b4416217
  { 1, 104, 107, 2357, 2361 }, // 282 tc_9f363d21
  { 1, 104, 107, 2361, 2366 }, // 283 tc_8e420e4d
  { 1, 152, 155, 2366, 2370 }, // 284 tc_7273323b
  { 1, 152, 155, 2370, 2375 }, // 285 tc_58d21193
  { 1, 97, 99, 2375, 2379 }, // 286 tc_71646d06
  { 1, 135, 137, 2379, 2381 }, // 287 tc_04da405a
  { 1, 135, 137, 2381, 2384 }, // 288 tc_2c745bb8
  { 1, 143, 145, 2384, 2385 }, // 289 tc_b28e51aa
  { 1, 143, 145, 2385, 2387 }, // 290 tc_767c4e9d
  { 1, 155, 157, 2387, 2389 }, // 291 tc_e699ae41
  { 1, 155, 157, 2389, 2392 }, // 292 tc_a0dbea28
  { 1, 155, 157, 2392, 2395 }, // 293 tc_dd5b0695
  { 1, 155, 157, 2395, 2399 }, // 294 tc_3ad719fb
  { 1, 90, 91, 0, 0 }, // 295 tc_77f94a5e
  { 1, 94, 95, 0, 0 }, // 296 tc_55255f2b
  { 1, 90, 91, 2399, 2400 }, // 297 tc_b1ae5f67
  { 1, 90, 91, 2400, 2402 }, // 298 tc_2237d952
  { 1, 92, 93, 2402, 2403 }, // 299 tc_0ba0d5da
  { 1, 92, 93, 0, 0 }, // 300 tc_9b34f5e0
  { 1, 94, 95, 2403, 2404 }, // 301 tc_2c3e17fc
  { 1, 90, 91, 2404, 2406 }, // 302 tc_a3070909
  { 1, 94, 95, 2406, 2407 }, // 303 tc_d7718fbe
  { 1, 94, 95, 2407, 2409 }, // 304 tc_28e55c6f
  { 1, 90, 91, 2409, 2410 }, // 305 tc_4bf903b0
  { 0, 0, 0, 0, 0 }, // 306 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV65[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 157, 158, 2410, 2413 }, // 1 tc_01d44cb2
  { 1, 158, 159, 2413, 2416 }, // 2 PSEUDO
  { 1, 158, 159, 2416, 2418 }, // 3 tc_c57d9f39
  { 1, 158, 159, 2418, 2422 }, // 4 tc_1c2c7a4a
  { 1, 158, 159, 2422, 2426 }, // 5 tc_442395f3
  { 1, 158, 159, 2426, 2429 }, // 6 tc_713b66bf
  { 1, 158, 159, 2429, 2432 }, // 7 tc_86173609
  { 1, 157, 158, 2432, 2435 }, // 8 tc_5da50c4b
  { 1, 157, 158, 2435, 2438 }, // 9 tc_4a55d03c
  { 1, 158, 159, 2438, 2441 }, // 10 tc_d33e5eee
  { 1, 157, 158, 2441, 2444 }, // 11 tc_651cbe02
  { 1, 159, 160, 2444, 2447 }, // 12 DUPLEX
  { 1, 160, 161, 2447, 2448 }, // 13 tc_ENDLOOP
  { 1, 158, 159, 0, 0 }, // 14 tc_23708a21
  { 1, 158, 159, 2448, 2450 }, // 15 tc_56a124a7
  { 1, 161, 162, 2450, 2452 }, // 16 tc_2f573607
  { 1, 161, 162, 2452, 2455 }, // 17 tc_53c851ab
  { 1, 162, 163, 2455, 2459 }, // 18 tc_fedb7e19
  { 1, 162, 163, 2459, 2462 }, // 19 tc_4222e6bf
  { 1, 162, 163, 2462, 2466 }, // 20 tc_075c8dd8
  { 1, 159, 160, 2466, 2469 }, // 21 tc_9bcfb2ee
  { 1, 159, 160, 2469, 2472 }, // 22 tc_158aa3f7
  { 1, 159, 160, 2472, 2475 }, // 23 tc_df5d53f9
  { 1, 159, 160, 2475, 2478 }, // 24 tc_14ab4f41
  { 1, 159, 160, 2478, 2479 }, // 25 tc_f38f92e1
  { 1, 159, 160, 2479, 2480 }, // 26 tc_1981450d
  { 1, 162, 163, 2480, 2482 }, // 27 tc_e9170fb7
  { 1, 159, 160, 2482, 2484 }, // 28 tc_40d64c94
  { 1, 162, 163, 2484, 2486 }, // 29 LD_tc_ld_SLOT01
  { 1, 157, 158, 2486, 2489 }, // 30 tc_38382228
  { 1, 157, 158, 2489, 2492 }, // 31 tc_c21d7447
  { 1, 157, 158, 2492, 2496 }, // 32 tc_7f8ae742
  { 1, 163, 164, 2496, 2499 }, // 33 tc_5a4b5e58
  { 1, 163, 164, 2499, 2503 }, // 34 tc_197dce51
  { 1, 157, 158, 2503, 2504 }, // 35 tc_44fffc58
  { 1, 162, 163, 2504, 2509 }, // 36 tc_5ceb2f9e
  { 1, 164, 166, 2509, 2512 }, // 37 tc_56c4f9fe
  { 1, 162, 163, 2512, 2517 }, // 38 tc_b4dc7630
  { 1, 162, 163, 2517, 2521 }, // 39 tc_a2b365d2
  { 1, 161, 162, 2521, 2522 }, // 40 tc_60e324ff
  { 1, 166, 168, 2522, 2525 }, // 41 tc_db5555f3
  { 1, 168, 171, 2525, 2528 }, // 42 tc_c0749f3c
  { 1, 171, 173, 2528, 2531 }, // 43 PSEUDOM
  { 1, 164, 166, 2531, 2534 }, // 44 tc_3aacf4a8
  { 1, 173, 176, 2534, 2537 }, // 45 tc_c5dba46e
  { 1, 166, 168, 2537, 2541 }, // 46 tc_af25efd9
  { 1, 157, 158, 2541, 2544 }, // 47 tc_0dfac0a7
  { 1, 162, 163, 2544, 2548 }, // 48 tc_8035e91f
  { 1, 159, 160, 2548, 2552 }, // 49 tc_011e0e9d
  { 1, 162, 163, 2552, 2555 }, // 50 tc_ae5babd7
  { 1, 159, 160, 2555, 2558 }, // 51 tc_5deb5e47
  { 1, 157, 158, 2558, 2563 }, // 52 tc_bb831a7c
  { 1, 159, 160, 2563, 2567 }, // 53 tc_92240447
  { 1, 162, 163, 2567, 2570 }, // 54 tc_7c31e19a
  { 1, 162, 163, 2570, 2574 }, // 55 tc_d03278fd
  { 1, 162, 163, 2574, 2578 }, // 56 tc_65cbd974
  { 1, 159, 160, 2578, 2581 }, // 57 tc_934753bb
  { 1, 162, 163, 2581, 2584 }, // 58 ST_tc_st_SLOT01
  { 1, 176, 178, 2584, 2588 }, // 59 CVI_VA
  { 1, 178, 180, 2588, 2592 }, // 60 tc_f175e046
  { 1, 178, 180, 2592, 2597 }, // 61 tc_4942646a
  { 1, 164, 166, 2597, 2599 }, // 62 tc_0ec46cf9
  { 1, 166, 168, 2599, 2600 }, // 63 tc_718b5c53
  { 1, 180, 184, 0, 0 }, // 64 CVI_GATHER_PSEUDO
  { 1, 159, 160, 2600, 2601 }, // 65 tc_d45ba9cd
  { 1, 158, 159, 2601, 2604 }, // 66 tc_388f9897
  { 1, 158, 159, 2604, 2606 }, // 67 tc_9124c04f
  { 1, 158, 159, 2606, 2609 }, // 68 tc_4ac61d92
  { 1, 162, 163, 2609, 2611 }, // 69 tc_aee6250c
  { 1, 162, 163, 2611, 2614 }, // 70 tc_eed07714
  { 1, 162, 163, 2614, 2617 }, // 71 tc_74a42bda
  { 1, 162, 163, 2617, 2620 }, // 72 tc_a9edeffa
  { 1, 162, 163, 2620, 2623 }, // 73 tc_838c4d7a
  { 1, 157, 158, 2623, 2625 }, // 74 tc_d61dfdc3
  { 1, 157, 158, 2625, 2628 }, // 75 tc_8a825db2
  { 1, 157, 158, 2628, 2631 }, // 76 tc_f34c1c21
  { 1, 158, 159, 2631, 2634 }, // 77 tc_95a33176
  { 1, 157, 158, 2634, 2636 }, // 78 tc_9f6cd987
  { 1, 158, 159, 0, 0 }, // 79 tc_b837298f
  { 1, 158, 159, 2636, 2639 }, // 80 tc_8b5bd4f5
  { 1, 158, 159, 2639, 2642 }, // 81 tc_84a7500d
  { 1, 163, 164, 2642, 2644 }, // 82 tc_7476d766
  { 1, 163, 164, 2644, 2646 }, // 83 tc_49fdfd4b
  { 1, 157, 158, 2646, 2649 }, // 84 tc_f098b237
  { 1, 157, 158, 2649, 2652 }, // 85 tc_20131976
  { 1, 157, 158, 2652, 2657 }, // 86 tc_1d41f8b7
  { 1, 157, 158, 2657, 2660 }, // 87 tc_a1297125
  { 1, 158, 159, 2660, 2661 }, // 88 tc_112d30d6
  { 1, 157, 158, 2661, 2664 }, // 89 tc_d68dca5c
  { 1, 157, 158, 2664, 2668 }, // 90 tc_788b1d09
  { 1, 157, 158, 2668, 2673 }, // 91 tc_38e0bae9
  { 1, 157, 158, 2673, 2676 }, // 92 tc_407e96f9
  { 1, 157, 158, 2676, 2680 }, // 93 tc_7401744f
  { 1, 157, 158, 2680, 2683 }, // 94 tc_9b3c0462
  { 1, 157, 158, 2683, 2685 }, // 95 tc_151bf368
  { 1, 158, 159, 2685, 2688 }, // 96 tc_9c52f549
  { 1, 157, 158, 2688, 2690 }, // 97 tc_55b33fda
  { 1, 157, 158, 2690, 2694 }, // 98 tc_6fc5dbea
  { 1, 163, 164, 2694, 2696 }, // 99 tc_3edca78f
  { 1, 157, 158, 2696, 2700 }, // 100 tc_a7a13fac
  { 1, 157, 158, 2700, 2702 }, // 101 tc_9783714b
  { 1, 157, 158, 2702, 2705 }, // 102 tc_f0e8e832
  { 1, 157, 158, 2705, 2707 }, // 103 tc_65279839
  { 1, 157, 158, 2707, 2711 }, // 104 tc_0a195f2c
  { 1, 157, 158, 2711, 2715 }, // 105 tc_01e1be3b
  { 1, 157, 158, 2715, 2718 }, // 106 tc_556f6577
  { 1, 157, 158, 2718, 2721 }, // 107 tc_02fe1c65
  { 1, 157, 158, 2721, 2725 }, // 108 tc_9e72dc89
  { 1, 157, 158, 2725, 2730 }, // 109 tc_9edb7c77
  { 1, 157, 158, 2730, 2733 }, // 110 tc_7f7f45f5
  { 1, 157, 158, 2733, 2736 }, // 111 tc_c20701f0
  { 1, 157, 158, 2736, 2740 }, // 112 tc_f7569068
  { 1, 163, 164, 2740, 2742 }, // 113 tc_fae9dfa5
  { 1, 163, 164, 2742, 2744 }, // 114 tc_6ae3426b
  { 1, 157, 158, 2744, 2746 }, // 115 tc_69bfb303
  { 1, 161, 162, 2746, 2747 }, // 116 tc_362b0be2
  { 1, 161, 162, 2747, 2749 }, // 117 tc_dc51281d
  { 1, 158, 159, 2749, 2750 }, // 118 tc_decdde8a
  { 1, 158, 159, 2750, 2752 }, // 119 tc_eeda4109
  { 1, 158, 159, 2752, 2754 }, // 120 tc_711c805f
  { 1, 161, 162, 2754, 2756 }, // 121 tc_ed03645c
  { 1, 161, 162, 2756, 2758 }, // 122 tc_42ff66ba
  { 1, 163, 164, 2758, 2760 }, // 123 tc_57a55b54
  { 1, 163, 164, 2760, 2762 }, // 124 tc_1248597c
  { 1, 163, 164, 2762, 2764 }, // 125 tc_9406230a
  { 1, 161, 162, 2764, 2765 }, // 126 tc_d57d649c
  { 1, 163, 164, 2765, 2767 }, // 127 tc_4abdbdc6
  { 1, 163, 164, 2767, 2769 }, // 128 tc_6d861a95
  { 1, 161, 162, 2769, 2770 }, // 129 tc_45f9d1be
  { 1, 159, 160, 2770, 2773 }, // 130 tc_24e109c7
  { 1, 158, 159, 2773, 2776 }, // 131 tc_9e27f2f9
  { 1, 159, 160, 2776, 2779 }, // 132 tc_f6e2aff9
  { 1, 158, 159, 2779, 2782 }, // 133 tc_24f426ab
  { 1, 159, 160, 2782, 2785 }, // 134 tc_975a4e54
  { 1, 157, 158, 2785, 2788 }, // 135 tc_5502c366
  { 1, 159, 160, 2788, 2790 }, // 136 tc_7b9187d3
  { 1, 158, 159, 2790, 2792 }, // 137 tc_f999c66e
  { 1, 162, 163, 2792, 2797 }, // 138 tc_1c7522a8
  { 1, 162, 163, 2797, 2803 }, // 139 tc_76bb5435
  { 1, 162, 163, 2803, 2805 }, // 140 tc_8a6d0d94
  { 1, 159, 160, 2805, 2807 }, // 141 tc_2471c1c8
  { 1, 159, 160, 2807, 2809 }, // 142 tc_64b00d8a
  { 1, 162, 163, 2809, 2814 }, // 143 tc_5f2afaf7
  { 1, 162, 163, 2814, 2818 }, // 144 tc_ac65613f
  { 1, 162, 163, 2818, 2823 }, // 145 tc_a32e03e7
  { 1, 162, 163, 2823, 2826 }, // 146 tc_822c3c68
  { 1, 162, 163, 2826, 2830 }, // 147 tc_abfd9a6d
  { 1, 162, 163, 2830, 2834 }, // 148 tc_bf2ffc0f
  { 1, 162, 163, 2834, 2837 }, // 149 tc_7c6d32e4
  { 1, 162, 163, 2837, 2842 }, // 150 tc_45791fb8
  { 1, 162, 163, 2842, 2847 }, // 151 tc_b7c4062a
  { 1, 162, 163, 2847, 2850 }, // 152 tc_5944960d
  { 1, 157, 158, 2850, 2854 }, // 153 tc_2c13e7f5
  { 1, 157, 158, 2854, 2858 }, // 154 tc_a154b476
  { 1, 157, 158, 2858, 2862 }, // 155 tc_a4e22bbd
  { 1, 157, 158, 2862, 2866 }, // 156 tc_503ce0f3
  { 1, 162, 163, 2866, 2868 }, // 157 tc_0655b949
  { 1, 159, 160, 2868, 2870 }, // 158 tc_6e20402a
  { 1, 159, 160, 2870, 2871 }, // 159 tc_db96aa6b
  { 1, 157, 158, 2871, 2873 }, // 160 tc_a7bdb22c
  { 1, 157, 158, 2873, 2876 }, // 161 tc_db596beb
  { 1, 157, 158, 2876, 2879 }, // 162 tc_a08b630b
  { 1, 157, 158, 2879, 2882 }, // 163 tc_1fcb8495
  { 1, 162, 163, 2882, 2887 }, // 164 tc_9edefe01
  { 1, 162, 163, 2887, 2892 }, // 165 tc_449acf79
  { 1, 159, 160, 2892, 2897 }, // 166 tc_ce59038e
  { 1, 159, 160, 2897, 2902 }, // 167 tc_f529831b
  { 1, 159, 160, 2902, 2907 }, // 168 tc_addc37a8
  { 1, 159, 160, 2907, 2910 }, // 169 tc_6f42bc60
  { 1, 159, 160, 2910, 2912 }, // 170 tc_7af3a37e
  { 1, 157, 158, 2912, 2914 }, // 171 tc_e3d699e3
  { 1, 162, 163, 2914, 2917 }, // 172 tc_ba9255a6
  { 1, 162, 163, 2917, 2922 }, // 173 tc_1fe4ab69
  { 1, 162, 163, 2922, 2925 }, // 174 tc_bb07f2c5
  { 1, 162, 163, 2925, 2930 }, // 175 tc_8e82e8ca
  { 1, 159, 160, 2930, 2933 }, // 176 tc_cfa0e29b
  { 1, 159, 160, 2933, 2938 }, // 177 tc_0a6c20ae
  { 1, 159, 160, 2938, 2941 }, // 178 tc_0fac1eb8
  { 1, 159, 160, 2941, 2946 }, // 179 tc_829d8a86
  { 1, 162, 163, 2946, 2950 }, // 180 tc_280f7fe1
  { 1, 162, 163, 2950, 2954 }, // 181 tc_887d1bb7
  { 1, 159, 160, 2954, 2958 }, // 182 tc_96ef76ef
  { 1, 159, 160, 2958, 2962 }, // 183 tc_55a9a350
  { 1, 157, 158, 2962, 2966 }, // 184 tc_f0cdeccf
  { 1, 157, 158, 2966, 2971 }, // 185 tc_a38c45dc
  { 1, 157, 158, 2971, 2973 }, // 186 tc_d3632d88
  { 1, 157, 158, 2973, 2977 }, // 187 tc_5e4cf0e8
  { 1, 157, 158, 2977, 2979 }, // 188 tc_ef921005
  { 1, 162, 163, 2979, 2982 }, // 189 tc_5b347363
  { 1, 162, 163, 2982, 2984 }, // 190 tc_3d14a17b
  { 1, 162, 163, 2984, 2985 }, // 191 tc_3fbf1042
  { 1, 162, 163, 2985, 2986 }, // 192 tc_63567288
  { 1, 162, 163, 2986, 2988 }, // 193 tc_59a7822c
  { 1, 162, 163, 0, 0 }, // 194 tc_937dd41c
  { 1, 159, 160, 0, 0 }, // 195 tc_a4ee89db
  { 1, 159, 160, 0, 0 }, // 196 tc_c818ff7f
  { 1, 159, 160, 2988, 2989 }, // 197 tc_1242dc2a
  { 1, 162, 163, 2989, 2991 }, // 198 tc_44d5a428
  { 1, 184, 186, 2991, 2994 }, // 199 tc_540c3da3
  { 1, 178, 180, 2994, 2996 }, // 200 tc_c4edf264
  { 1, 186, 188, 2996, 2998 }, // 201 tc_5bf8afbb
  { 1, 188, 190, 2998, 3002 }, // 202 tc_2b4c548e
  { 1, 188, 190, 3002, 3007 }, // 203 tc_bb599486
  { 1, 190, 194, 3007, 3010 }, // 204 tc_a7e6707d
  { 1, 190, 194, 3010, 3014 }, // 205 tc_3c56e5ce
  { 1, 168, 171, 3014, 3018 }, // 206 tc_abe8c3b2
  { 1, 168, 171, 3018, 3023 }, // 207 tc_453fe68d
  { 1, 168, 171, 3023, 3027 }, // 208 tc_1ba8a0cd
  { 1, 194, 196, 3027, 3030 }, // 209 tc_52447ecc
  { 1, 194, 196, 3030, 3034 }, // 210 tc_3904b926
  { 1, 194, 196, 3034, 3039 }, // 211 tc_b9db8205
  { 1, 194, 196, 3039, 3043 }, // 212 tc_663c80a7
  { 1, 196, 200, 3043, 3046 }, // 213 tc_f21e8abb
  { 1, 196, 200, 3046, 3050 }, // 214 tc_131f1c81
  { 1, 196, 200, 3050, 3055 }, // 215 tc_c7039829
  { 1, 196, 200, 3055, 3059 }, // 216 tc_e2d2e9e5
  { 1, 200, 202, 3059, 3062 }, // 217 tc_ab23f776
  { 1, 200, 202, 3062, 3066 }, // 218 tc_7177e272
  { 1, 200, 202, 3066, 3071 }, // 219 tc_e99d4c2e
  { 1, 200, 202, 3071, 3075 }, // 220 tc_6942b6e0
  { 1, 173, 176, 3075, 3079 }, // 221 tc_a02a10a8
  { 1, 173, 176, 3079, 3084 }, // 222 tc_54a0dc47
  { 1, 173, 176, 3084, 3088 }, // 223 tc_447d9895
  { 1, 173, 176, 3088, 3093 }, // 224 tc_191381c1
  { 1, 173, 176, 3093, 3097 }, // 225 tc_3e2aaafc
  { 1, 200, 202, 3097, 3099 }, // 226 tc_3ce09744
  { 1, 200, 202, 3099, 3102 }, // 227 tc_20a4bbec
  { 1, 178, 180, 3102, 3104 }, // 228 tc_5cdf8c84
  { 1, 178, 180, 3104, 3107 }, // 229 tc_c127de3a
  { 1, 202, 204, 3107, 3110 }, // 230 tc_05ca8cfd
  { 1, 188, 190, 3110, 3113 }, // 231 tc_d8287c14
  { 1, 164, 166, 3113, 3117 }, // 232 tc_257f6f7c
  { 1, 164, 166, 3117, 3122 }, // 233 tc_7e6a3e89
  { 1, 164, 166, 3122, 3126 }, // 234 tc_e35c1e93
  { 1, 188, 190, 3126, 3130 }, // 235 tc_08a4f1b6
  { 1, 186, 188, 3130, 3134 }, // 236 tc_56e64202
  { 1, 178, 180, 3134, 3137 }, // 237 tc_ac4046bc
  { 1, 178, 180, 3137, 3141 }, // 238 tc_2e8f5f6e
  { 1, 202, 204, 3141, 3144 }, // 239 tc_7417e785
  { 1, 202, 204, 3144, 3148 }, // 240 tc_309dbb4f
  { 1, 204, 206, 3148, 3152 }, // 241 tc_df80eeb0
  { 1, 202, 204, 3152, 3156 }, // 242 tc_16ff9ef8
  { 1, 158, 159, 3156, 3158 }, // 243 tc_2120355e
  { 1, 202, 204, 3158, 3160 }, // 244 tc_51d0ecc3
  { 1, 158, 159, 3160, 3163 }, // 245 tc_aa047364
  { 1, 178, 180, 3163, 3165 }, // 246 tc_3c8c15d0
  { 1, 188, 190, 3165, 3167 }, // 247 tc_0afc8be9
  { 1, 204, 206, 3167, 3172 }, // 248 tc_561aaa58
  { 1, 186, 188, 3172, 3174 }, // 249 tc_946013d8
  { 1, 186, 188, 3174, 3177 }, // 250 tc_46d6c3e0
  { 1, 204, 206, 3177, 3181 }, // 251 tc_87adc037
  { 1, 178, 180, 3181, 3185 }, // 252 tc_a19b9305
  { 1, 178, 180, 3185, 3188 }, // 253 tc_649072c2
  { 1, 178, 180, 3188, 3192 }, // 254 tc_b091f1c6
  { 1, 188, 190, 3192, 3195 }, // 255 tc_0b04c6c7
  { 1, 188, 190, 3195, 3199 }, // 256 tc_660769f1
  { 1, 188, 190, 3199, 3202 }, // 257 tc_dcca380f
  { 1, 188, 190, 3202, 3206 }, // 258 tc_72e2b393
  { 1, 188, 190, 3206, 3209 }, // 259 tc_73efe966
  { 1, 178, 180, 3209, 3212 }, // 260 tc_cda936da
  { 1, 206, 209, 3212, 3215 }, // 261 tc_a28f32b5
  { 1, 206, 209, 3215, 3219 }, // 262 tc_7d68d5c2
  { 1, 209, 212, 3219, 3222 }, // 263 tc_7095ecba
  { 1, 209, 212, 3222, 3226 }, // 264 tc_a69eeee1
  { 1, 212, 214, 0, 0 }, // 265 tc_1381a97c
  { 1, 212, 214, 3226, 3227 }, // 266 tc_e3f68a46
  { 1, 214, 216, 3227, 3230 }, // 267 tc_f1de44ef
  { 1, 204, 206, 3230, 3235 }, // 268 tc_9d1dc972
  { 1, 214, 216, 3235, 3239 }, // 269 tc_90bcc1db
  { 1, 216, 219, 3239, 3242 }, // 270 tc_cd94bfe0
  { 1, 216, 219, 3242, 3246 }, // 271 tc_15fdf750
  { 1, 188, 190, 3246, 3250 }, // 272 tc_1ad8a370
  { 1, 188, 190, 3250, 3255 }, // 273 tc_e675c45a
  { 1, 188, 190, 3255, 3259 }, // 274 tc_37820f4c
  { 1, 219, 221, 3259, 3262 }, // 275 tc_61bf7c03
  { 1, 219, 221, 3262, 3266 }, // 276 tc_933f2b39
  { 1, 219, 221, 3266, 3270 }, // 277 tc_26a377fe
  { 1, 219, 221, 3270, 3275 }, // 278 tc_2d4051cd
  { 1, 186, 188, 3275, 3278 }, // 279 tc_6e7fa133
  { 1, 164, 166, 3278, 3281 }, // 280 tc_8772086c
  { 1, 166, 168, 3281, 3283 }, // 281 tc_b4416217
  { 1, 173, 176, 3283, 3287 }, // 282 tc_9f363d21
  { 1, 173, 176, 3287, 3292 }, // 283 tc_8e420e4d
  { 1, 221, 224, 3292, 3296 }, // 284 tc_7273323b
  { 1, 221, 224, 3296, 3301 }, // 285 tc_58d21193
  { 1, 166, 168, 3301, 3305 }, // 286 tc_71646d06
  { 1, 204, 206, 3305, 3307 }, // 287 tc_04da405a
  { 1, 204, 206, 3307, 3310 }, // 288 tc_2c745bb8
  { 1, 212, 214, 3310, 3311 }, // 289 tc_b28e51aa
  { 1, 212, 214, 3311, 3313 }, // 290 tc_767c4e9d
  { 1, 224, 226, 3313, 3315 }, // 291 tc_e699ae41
  { 1, 224, 226, 3315, 3318 }, // 292 tc_a0dbea28
  { 1, 224, 226, 3318, 3321 }, // 293 tc_dd5b0695
  { 1, 224, 226, 3321, 3325 }, // 294 tc_3ad719fb
  { 1, 159, 160, 0, 0 }, // 295 tc_77f94a5e
  { 1, 163, 164, 0, 0 }, // 296 tc_55255f2b
  { 1, 159, 160, 3325, 3326 }, // 297 tc_b1ae5f67
  { 1, 159, 160, 3326, 3328 }, // 298 tc_2237d952
  { 1, 161, 162, 3328, 3329 }, // 299 tc_0ba0d5da
  { 1, 161, 162, 0, 0 }, // 300 tc_9b34f5e0
  { 1, 163, 164, 3329, 3330 }, // 301 tc_2c3e17fc
  { 1, 159, 160, 3330, 3332 }, // 302 tc_a3070909
  { 1, 163, 164, 3332, 3333 }, // 303 tc_d7718fbe
  { 1, 163, 164, 3333, 3335 }, // 304 tc_28e55c6f
  { 1, 159, 160, 3335, 3336 }, // 305 tc_4bf903b0
  { 0, 0, 0, 0, 0 }, // 306 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV66[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 226, 227, 3336, 3339 }, // 1 tc_01d44cb2
  { 1, 227, 228, 3339, 3342 }, // 2 PSEUDO
  { 1, 227, 228, 3342, 3344 }, // 3 tc_c57d9f39
  { 1, 227, 228, 3344, 3348 }, // 4 tc_1c2c7a4a
  { 1, 227, 228, 3348, 3352 }, // 5 tc_442395f3
  { 1, 227, 228, 3352, 3355 }, // 6 tc_713b66bf
  { 1, 227, 228, 3355, 3358 }, // 7 tc_86173609
  { 1, 226, 227, 3358, 3361 }, // 8 tc_5da50c4b
  { 1, 226, 227, 3361, 3364 }, // 9 tc_4a55d03c
  { 1, 227, 228, 3364, 3367 }, // 10 tc_d33e5eee
  { 1, 226, 227, 3367, 3370 }, // 11 tc_651cbe02
  { 1, 228, 229, 3370, 3373 }, // 12 DUPLEX
  { 1, 229, 230, 3373, 3374 }, // 13 tc_ENDLOOP
  { 1, 227, 228, 0, 0 }, // 14 tc_23708a21
  { 1, 227, 228, 3374, 3376 }, // 15 tc_56a124a7
  { 1, 230, 231, 3376, 3378 }, // 16 tc_2f573607
  { 1, 230, 231, 3378, 3381 }, // 17 tc_53c851ab
  { 1, 231, 232, 3381, 3385 }, // 18 tc_fedb7e19
  { 1, 231, 232, 3385, 3388 }, // 19 tc_4222e6bf
  { 1, 231, 232, 3388, 3392 }, // 20 tc_075c8dd8
  { 1, 228, 229, 3392, 3395 }, // 21 tc_9bcfb2ee
  { 1, 228, 229, 3395, 3398 }, // 22 tc_158aa3f7
  { 1, 228, 229, 3398, 3401 }, // 23 tc_df5d53f9
  { 1, 228, 229, 3401, 3404 }, // 24 tc_14ab4f41
  { 1, 228, 229, 3404, 3405 }, // 25 tc_f38f92e1
  { 1, 228, 229, 3405, 3406 }, // 26 tc_1981450d
  { 1, 231, 232, 3406, 3408 }, // 27 tc_e9170fb7
  { 1, 228, 229, 3408, 3410 }, // 28 tc_40d64c94
  { 1, 231, 232, 3410, 3412 }, // 29 LD_tc_ld_SLOT01
  { 1, 226, 227, 3412, 3415 }, // 30 tc_38382228
  { 1, 226, 227, 3415, 3418 }, // 31 tc_c21d7447
  { 1, 226, 227, 3418, 3422 }, // 32 tc_7f8ae742
  { 1, 232, 233, 3422, 3425 }, // 33 tc_5a4b5e58
  { 1, 232, 233, 3425, 3429 }, // 34 tc_197dce51
  { 1, 226, 227, 3429, 3430 }, // 35 tc_44fffc58
  { 1, 231, 232, 3430, 3435 }, // 36 tc_5ceb2f9e
  { 1, 233, 235, 3435, 3438 }, // 37 tc_56c4f9fe
  { 1, 231, 232, 3438, 3443 }, // 38 tc_b4dc7630
  { 1, 231, 232, 3443, 3447 }, // 39 tc_a2b365d2
  { 1, 230, 231, 3447, 3448 }, // 40 tc_60e324ff
  { 1, 235, 237, 3448, 3451 }, // 41 tc_db5555f3
  { 1, 237, 240, 3451, 3454 }, // 42 tc_c0749f3c
  { 1, 240, 242, 3454, 3457 }, // 43 PSEUDOM
  { 1, 233, 235, 3457, 3460 }, // 44 tc_3aacf4a8
  { 1, 242, 245, 3460, 3463 }, // 45 tc_c5dba46e
  { 1, 235, 237, 3463, 3467 }, // 46 tc_af25efd9
  { 1, 226, 227, 3467, 3470 }, // 47 tc_0dfac0a7
  { 1, 231, 232, 3470, 3474 }, // 48 tc_8035e91f
  { 1, 228, 229, 3474, 3478 }, // 49 tc_011e0e9d
  { 1, 231, 232, 3478, 3481 }, // 50 tc_ae5babd7
  { 1, 228, 229, 3481, 3484 }, // 51 tc_5deb5e47
  { 1, 226, 227, 3484, 3489 }, // 52 tc_bb831a7c
  { 1, 228, 229, 3489, 3493 }, // 53 tc_92240447
  { 1, 231, 232, 3493, 3496 }, // 54 tc_7c31e19a
  { 1, 231, 232, 3496, 3500 }, // 55 tc_d03278fd
  { 1, 231, 232, 3500, 3504 }, // 56 tc_65cbd974
  { 1, 228, 229, 3504, 3507 }, // 57 tc_934753bb
  { 1, 231, 232, 3507, 3510 }, // 58 ST_tc_st_SLOT01
  { 1, 245, 247, 3510, 3514 }, // 59 CVI_VA
  { 1, 247, 249, 3514, 3518 }, // 60 tc_f175e046
  { 1, 247, 249, 3518, 3523 }, // 61 tc_4942646a
  { 1, 233, 235, 3523, 3525 }, // 62 tc_0ec46cf9
  { 1, 235, 237, 3525, 3526 }, // 63 tc_718b5c53
  { 1, 249, 253, 0, 0 }, // 64 CVI_GATHER_PSEUDO
  { 1, 228, 229, 3526, 3527 }, // 65 tc_d45ba9cd
  { 1, 227, 228, 3527, 3530 }, // 66 tc_388f9897
  { 1, 227, 228, 3530, 3532 }, // 67 tc_9124c04f
  { 1, 227, 228, 3532, 3535 }, // 68 tc_4ac61d92
  { 1, 231, 232, 3535, 3537 }, // 69 tc_aee6250c
  { 1, 231, 232, 3537, 3540 }, // 70 tc_eed07714
  { 1, 231, 232, 3540, 3543 }, // 71 tc_74a42bda
  { 1, 231, 232, 3543, 3546 }, // 72 tc_a9edeffa
  { 1, 231, 232, 3546, 3549 }, // 73 tc_838c4d7a
  { 1, 226, 227, 3549, 3551 }, // 74 tc_d61dfdc3
  { 1, 226, 227, 3551, 3554 }, // 75 tc_8a825db2
  { 1, 226, 227, 3554, 3557 }, // 76 tc_f34c1c21
  { 1, 227, 228, 3557, 3560 }, // 77 tc_95a33176
  { 1, 226, 227, 3560, 3562 }, // 78 tc_9f6cd987
  { 1, 227, 228, 0, 0 }, // 79 tc_b837298f
  { 1, 227, 228, 3562, 3565 }, // 80 tc_8b5bd4f5
  { 1, 227, 228, 3565, 3568 }, // 81 tc_84a7500d
  { 1, 232, 233, 3568, 3570 }, // 82 tc_7476d766
  { 1, 232, 233, 3570, 3572 }, // 83 tc_49fdfd4b
  { 1, 226, 227, 3572, 3575 }, // 84 tc_f098b237
  { 1, 226, 227, 3575, 3578 }, // 85 tc_20131976
  { 1, 226, 227, 3578, 3583 }, // 86 tc_1d41f8b7
  { 1, 226, 227, 3583, 3586 }, // 87 tc_a1297125
  { 1, 227, 228, 3586, 3587 }, // 88 tc_112d30d6
  { 1, 226, 227, 3587, 3590 }, // 89 tc_d68dca5c
  { 1, 226, 227, 3590, 3594 }, // 90 tc_788b1d09
  { 1, 226, 227, 3594, 3599 }, // 91 tc_38e0bae9
  { 1, 226, 227, 3599, 3602 }, // 92 tc_407e96f9
  { 1, 226, 227, 3602, 3606 }, // 93 tc_7401744f
  { 1, 226, 227, 3606, 3609 }, // 94 tc_9b3c0462
  { 1, 226, 227, 3609, 3611 }, // 95 tc_151bf368
  { 1, 227, 228, 3611, 3614 }, // 96 tc_9c52f549
  { 1, 226, 227, 3614, 3616 }, // 97 tc_55b33fda
  { 1, 226, 227, 3616, 3620 }, // 98 tc_6fc5dbea
  { 1, 232, 233, 3620, 3622 }, // 99 tc_3edca78f
  { 1, 226, 227, 3622, 3626 }, // 100 tc_a7a13fac
  { 1, 226, 227, 3626, 3628 }, // 101 tc_9783714b
  { 1, 226, 227, 3628, 3631 }, // 102 tc_f0e8e832
  { 1, 226, 227, 3631, 3633 }, // 103 tc_65279839
  { 1, 226, 227, 3633, 3637 }, // 104 tc_0a195f2c
  { 1, 226, 227, 3637, 3641 }, // 105 tc_01e1be3b
  { 1, 226, 227, 3641, 3644 }, // 106 tc_556f6577
  { 1, 226, 227, 3644, 3647 }, // 107 tc_02fe1c65
  { 1, 226, 227, 3647, 3651 }, // 108 tc_9e72dc89
  { 1, 226, 227, 3651, 3656 }, // 109 tc_9edb7c77
  { 1, 226, 227, 3656, 3659 }, // 110 tc_7f7f45f5
  { 1, 226, 227, 3659, 3662 }, // 111 tc_c20701f0
  { 1, 226, 227, 3662, 3666 }, // 112 tc_f7569068
  { 1, 232, 233, 3666, 3668 }, // 113 tc_fae9dfa5
  { 1, 232, 233, 3668, 3670 }, // 114 tc_6ae3426b
  { 1, 226, 227, 3670, 3672 }, // 115 tc_69bfb303
  { 1, 230, 231, 3672, 3673 }, // 116 tc_362b0be2
  { 1, 230, 231, 3673, 3675 }, // 117 tc_dc51281d
  { 1, 227, 228, 3675, 3676 }, // 118 tc_decdde8a
  { 1, 227, 228, 3676, 3678 }, // 119 tc_eeda4109
  { 1, 227, 228, 3678, 3680 }, // 120 tc_711c805f
  { 1, 230, 231, 3680, 3682 }, // 121 tc_ed03645c
  { 1, 230, 231, 3682, 3684 }, // 122 tc_42ff66ba
  { 1, 232, 233, 3684, 3686 }, // 123 tc_57a55b54
  { 1, 232, 233, 3686, 3688 }, // 124 tc_1248597c
  { 1, 232, 233, 3688, 3690 }, // 125 tc_9406230a
  { 1, 230, 231, 3690, 3691 }, // 126 tc_d57d649c
  { 1, 232, 233, 3691, 3693 }, // 127 tc_4abdbdc6
  { 1, 232, 233, 3693, 3695 }, // 128 tc_6d861a95
  { 1, 230, 231, 3695, 3696 }, // 129 tc_45f9d1be
  { 1, 228, 229, 3696, 3699 }, // 130 tc_24e109c7
  { 1, 227, 228, 3699, 3702 }, // 131 tc_9e27f2f9
  { 1, 228, 229, 3702, 3705 }, // 132 tc_f6e2aff9
  { 1, 227, 228, 3705, 3708 }, // 133 tc_24f426ab
  { 1, 228, 229, 3708, 3711 }, // 134 tc_975a4e54
  { 1, 226, 227, 3711, 3714 }, // 135 tc_5502c366
  { 1, 228, 229, 3714, 3716 }, // 136 tc_7b9187d3
  { 1, 227, 228, 3716, 3718 }, // 137 tc_f999c66e
  { 1, 231, 232, 3718, 3723 }, // 138 tc_1c7522a8
  { 1, 231, 232, 3723, 3729 }, // 139 tc_76bb5435
  { 1, 231, 232, 3729, 3731 }, // 140 tc_8a6d0d94
  { 1, 228, 229, 3731, 3733 }, // 141 tc_2471c1c8
  { 1, 228, 229, 3733, 3735 }, // 142 tc_64b00d8a
  { 1, 231, 232, 3735, 3740 }, // 143 tc_5f2afaf7
  { 1, 231, 232, 3740, 3744 }, // 144 tc_ac65613f
  { 1, 231, 232, 3744, 3749 }, // 145 tc_a32e03e7
  { 1, 231, 232, 3749, 3752 }, // 146 tc_822c3c68
  { 1, 231, 232, 3752, 3756 }, // 147 tc_abfd9a6d
  { 1, 231, 232, 3756, 3760 }, // 148 tc_bf2ffc0f
  { 1, 231, 232, 3760, 3763 }, // 149 tc_7c6d32e4
  { 1, 231, 232, 3763, 3768 }, // 150 tc_45791fb8
  { 1, 231, 232, 3768, 3773 }, // 151 tc_b7c4062a
  { 1, 231, 232, 3773, 3776 }, // 152 tc_5944960d
  { 1, 226, 227, 3776, 3780 }, // 153 tc_2c13e7f5
  { 1, 226, 227, 3780, 3784 }, // 154 tc_a154b476
  { 1, 226, 227, 3784, 3788 }, // 155 tc_a4e22bbd
  { 1, 226, 227, 3788, 3792 }, // 156 tc_503ce0f3
  { 1, 231, 232, 3792, 3794 }, // 157 tc_0655b949
  { 1, 228, 229, 3794, 3796 }, // 158 tc_6e20402a
  { 1, 228, 229, 3796, 3797 }, // 159 tc_db96aa6b
  { 1, 226, 227, 3797, 3799 }, // 160 tc_a7bdb22c
  { 1, 226, 227, 3799, 3802 }, // 161 tc_db596beb
  { 1, 226, 227, 3802, 3805 }, // 162 tc_a08b630b
  { 1, 226, 227, 3805, 3808 }, // 163 tc_1fcb8495
  { 1, 231, 232, 3808, 3813 }, // 164 tc_9edefe01
  { 1, 231, 232, 3813, 3818 }, // 165 tc_449acf79
  { 1, 228, 229, 3818, 3823 }, // 166 tc_ce59038e
  { 1, 228, 229, 3823, 3828 }, // 167 tc_f529831b
  { 1, 228, 229, 3828, 3833 }, // 168 tc_addc37a8
  { 1, 228, 229, 3833, 3836 }, // 169 tc_6f42bc60
  { 1, 228, 229, 3836, 3838 }, // 170 tc_7af3a37e
  { 1, 226, 227, 3838, 3840 }, // 171 tc_e3d699e3
  { 1, 231, 232, 3840, 3843 }, // 172 tc_ba9255a6
  { 1, 231, 232, 3843, 3848 }, // 173 tc_1fe4ab69
  { 1, 231, 232, 3848, 3851 }, // 174 tc_bb07f2c5
  { 1, 231, 232, 3851, 3856 }, // 175 tc_8e82e8ca
  { 1, 228, 229, 3856, 3859 }, // 176 tc_cfa0e29b
  { 1, 228, 229, 3859, 3864 }, // 177 tc_0a6c20ae
  { 1, 228, 229, 3864, 3867 }, // 178 tc_0fac1eb8
  { 1, 228, 229, 3867, 3872 }, // 179 tc_829d8a86
  { 1, 231, 232, 3872, 3876 }, // 180 tc_280f7fe1
  { 1, 231, 232, 3876, 3880 }, // 181 tc_887d1bb7
  { 1, 228, 229, 3880, 3884 }, // 182 tc_96ef76ef
  { 1, 228, 229, 3884, 3888 }, // 183 tc_55a9a350
  { 1, 226, 227, 3888, 3892 }, // 184 tc_f0cdeccf
  { 1, 226, 227, 3892, 3897 }, // 185 tc_a38c45dc
  { 1, 226, 227, 3897, 3899 }, // 186 tc_d3632d88
  { 1, 226, 227, 3899, 3903 }, // 187 tc_5e4cf0e8
  { 1, 226, 227, 3903, 3905 }, // 188 tc_ef921005
  { 1, 231, 232, 3905, 3908 }, // 189 tc_5b347363
  { 1, 231, 232, 3908, 3910 }, // 190 tc_3d14a17b
  { 1, 231, 232, 3910, 3911 }, // 191 tc_3fbf1042
  { 1, 231, 232, 3911, 3912 }, // 192 tc_63567288
  { 1, 231, 232, 3912, 3914 }, // 193 tc_59a7822c
  { 1, 231, 232, 0, 0 }, // 194 tc_937dd41c
  { 1, 228, 229, 0, 0 }, // 195 tc_a4ee89db
  { 1, 228, 229, 0, 0 }, // 196 tc_c818ff7f
  { 1, 228, 229, 3914, 3915 }, // 197 tc_1242dc2a
  { 1, 231, 232, 3915, 3917 }, // 198 tc_44d5a428
  { 1, 253, 255, 3917, 3920 }, // 199 tc_540c3da3
  { 1, 247, 249, 3920, 3922 }, // 200 tc_c4edf264
  { 1, 255, 257, 3922, 3924 }, // 201 tc_5bf8afbb
  { 1, 257, 259, 3924, 3928 }, // 202 tc_2b4c548e
  { 1, 257, 259, 3928, 3933 }, // 203 tc_bb599486
  { 1, 259, 263, 3933, 3936 }, // 204 tc_a7e6707d
  { 1, 259, 263, 3936, 3940 }, // 205 tc_3c56e5ce
  { 1, 237, 240, 3940, 3944 }, // 206 tc_abe8c3b2
  { 1, 237, 240, 3944, 3949 }, // 207 tc_453fe68d
  { 1, 237, 240, 3949, 3953 }, // 208 tc_1ba8a0cd
  { 1, 263, 265, 3953, 3956 }, // 209 tc_52447ecc
  { 1, 263, 265, 3956, 3960 }, // 210 tc_3904b926
  { 1, 263, 265, 3960, 3965 }, // 211 tc_b9db8205
  { 1, 263, 265, 3965, 3969 }, // 212 tc_663c80a7
  { 1, 265, 269, 3969, 3972 }, // 213 tc_f21e8abb
  { 1, 265, 269, 3972, 3976 }, // 214 tc_131f1c81
  { 1, 265, 269, 3976, 3981 }, // 215 tc_c7039829
  { 1, 265, 269, 3981, 3985 }, // 216 tc_e2d2e9e5
  { 1, 269, 271, 3985, 3988 }, // 217 tc_ab23f776
  { 1, 269, 271, 3988, 3992 }, // 218 tc_7177e272
  { 1, 269, 271, 3992, 3997 }, // 219 tc_e99d4c2e
  { 1, 269, 271, 3997, 4001 }, // 220 tc_6942b6e0
  { 1, 242, 245, 4001, 4005 }, // 221 tc_a02a10a8
  { 1, 242, 245, 4005, 4010 }, // 222 tc_54a0dc47
  { 1, 242, 245, 4010, 4014 }, // 223 tc_447d9895
  { 1, 242, 245, 4014, 4019 }, // 224 tc_191381c1
  { 1, 242, 245, 4019, 4023 }, // 225 tc_3e2aaafc
  { 1, 269, 271, 4023, 4025 }, // 226 tc_3ce09744
  { 1, 269, 271, 4025, 4028 }, // 227 tc_20a4bbec
  { 1, 247, 249, 4028, 4030 }, // 228 tc_5cdf8c84
  { 1, 247, 249, 4030, 4033 }, // 229 tc_c127de3a
  { 1, 271, 273, 4033, 4036 }, // 230 tc_05ca8cfd
  { 1, 257, 259, 4036, 4039 }, // 231 tc_d8287c14
  { 1, 233, 235, 4039, 4043 }, // 232 tc_257f6f7c
  { 1, 233, 235, 4043, 4048 }, // 233 tc_7e6a3e89
  { 1, 233, 235, 4048, 4052 }, // 234 tc_e35c1e93
  { 1, 257, 259, 4052, 4056 }, // 235 tc_08a4f1b6
  { 1, 255, 257, 4056, 4060 }, // 236 tc_56e64202
  { 1, 247, 249, 4060, 4063 }, // 237 tc_ac4046bc
  { 1, 247, 249, 4063, 4067 }, // 238 tc_2e8f5f6e
  { 1, 271, 273, 4067, 4070 }, // 239 tc_7417e785
  { 1, 271, 273, 4070, 4074 }, // 240 tc_309dbb4f
  { 1, 273, 275, 4074, 4078 }, // 241 tc_df80eeb0
  { 1, 271, 273, 4078, 4082 }, // 242 tc_16ff9ef8
  { 1, 227, 228, 4082, 4084 }, // 243 tc_2120355e
  { 1, 271, 273, 4084, 4086 }, // 244 tc_51d0ecc3
  { 1, 227, 228, 4086, 4089 }, // 245 tc_aa047364
  { 1, 247, 249, 4089, 4091 }, // 246 tc_3c8c15d0
  { 1, 257, 259, 4091, 4093 }, // 247 tc_0afc8be9
  { 1, 273, 275, 4093, 4098 }, // 248 tc_561aaa58
  { 1, 255, 257, 4098, 4100 }, // 249 tc_946013d8
  { 1, 255, 257, 4100, 4103 }, // 250 tc_46d6c3e0
  { 1, 273, 275, 4103, 4107 }, // 251 tc_87adc037
  { 1, 247, 249, 4107, 4111 }, // 252 tc_a19b9305
  { 1, 247, 249, 4111, 4114 }, // 253 tc_649072c2
  { 1, 247, 249, 4114, 4118 }, // 254 tc_b091f1c6
  { 1, 257, 259, 4118, 4121 }, // 255 tc_0b04c6c7
  { 1, 257, 259, 4121, 4125 }, // 256 tc_660769f1
  { 1, 257, 259, 4125, 4128 }, // 257 tc_dcca380f
  { 1, 257, 259, 4128, 4132 }, // 258 tc_72e2b393
  { 1, 257, 259, 4132, 4135 }, // 259 tc_73efe966
  { 1, 247, 249, 4135, 4138 }, // 260 tc_cda936da
  { 1, 275, 278, 4138, 4141 }, // 261 tc_a28f32b5
  { 1, 275, 278, 4141, 4145 }, // 262 tc_7d68d5c2
  { 1, 278, 281, 4145, 4148 }, // 263 tc_7095ecba
  { 1, 278, 281, 4148, 4152 }, // 264 tc_a69eeee1
  { 1, 281, 283, 0, 0 }, // 265 tc_1381a97c
  { 1, 281, 283, 4152, 4153 }, // 266 tc_e3f68a46
  { 1, 283, 285, 4153, 4156 }, // 267 tc_f1de44ef
  { 1, 273, 275, 4156, 4161 }, // 268 tc_9d1dc972
  { 1, 283, 285, 4161, 4165 }, // 269 tc_90bcc1db
  { 1, 285, 288, 4165, 4168 }, // 270 tc_cd94bfe0
  { 1, 285, 288, 4168, 4172 }, // 271 tc_15fdf750
  { 1, 257, 259, 4172, 4176 }, // 272 tc_1ad8a370
  { 1, 257, 259, 4176, 4181 }, // 273 tc_e675c45a
  { 1, 257, 259, 4181, 4185 }, // 274 tc_37820f4c
  { 1, 288, 290, 4185, 4188 }, // 275 tc_61bf7c03
  { 1, 288, 290, 4188, 4192 }, // 276 tc_933f2b39
  { 1, 288, 290, 4192, 4196 }, // 277 tc_26a377fe
  { 1, 288, 290, 4196, 4201 }, // 278 tc_2d4051cd
  { 1, 255, 257, 4201, 4204 }, // 279 tc_6e7fa133
  { 1, 233, 235, 4204, 4207 }, // 280 tc_8772086c
  { 1, 235, 237, 4207, 4209 }, // 281 tc_b4416217
  { 1, 242, 245, 4209, 4213 }, // 282 tc_9f363d21
  { 1, 242, 245, 4213, 4218 }, // 283 tc_8e420e4d
  { 1, 290, 293, 4218, 4222 }, // 284 tc_7273323b
  { 1, 290, 293, 4222, 4227 }, // 285 tc_58d21193
  { 1, 235, 237, 4227, 4231 }, // 286 tc_71646d06
  { 1, 273, 275, 4231, 4233 }, // 287 tc_04da405a
  { 1, 273, 275, 4233, 4236 }, // 288 tc_2c745bb8
  { 1, 281, 283, 4236, 4237 }, // 289 tc_b28e51aa
  { 1, 281, 283, 4237, 4239 }, // 290 tc_767c4e9d
  { 1, 293, 295, 4239, 4241 }, // 291 tc_e699ae41
  { 1, 293, 295, 4241, 4244 }, // 292 tc_a0dbea28
  { 1, 293, 295, 4244, 4247 }, // 293 tc_dd5b0695
  { 1, 293, 295, 4247, 4251 }, // 294 tc_3ad719fb
  { 1, 228, 229, 0, 0 }, // 295 tc_77f94a5e
  { 1, 232, 233, 0, 0 }, // 296 tc_55255f2b
  { 1, 228, 229, 4251, 4252 }, // 297 tc_b1ae5f67
  { 1, 228, 229, 4252, 4254 }, // 298 tc_2237d952
  { 1, 230, 231, 4254, 4255 }, // 299 tc_0ba0d5da
  { 1, 230, 231, 0, 0 }, // 300 tc_9b34f5e0
  { 1, 232, 233, 4255, 4256 }, // 301 tc_2c3e17fc
  { 1, 228, 229, 4256, 4258 }, // 302 tc_a3070909
  { 1, 232, 233, 4258, 4259 }, // 303 tc_d7718fbe
  { 1, 232, 233, 4259, 4261 }, // 304 tc_28e55c6f
  { 1, 228, 229, 4261, 4262 }, // 305 tc_4bf903b0
  { 0, 0, 0, 0, 0 }, // 306 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV67[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 295, 296, 4262, 4265 }, // 1 tc_01d44cb2
  { 1, 296, 297, 4265, 4268 }, // 2 PSEUDO
  { 1, 296, 297, 4268, 4270 }, // 3 tc_c57d9f39
  { 1, 296, 297, 4270, 4274 }, // 4 tc_1c2c7a4a
  { 1, 296, 297, 4274, 4278 }, // 5 tc_442395f3
  { 1, 296, 297, 4278, 4281 }, // 6 tc_713b66bf
  { 1, 296, 297, 4281, 4284 }, // 7 tc_86173609
  { 1, 295, 296, 4284, 4287 }, // 8 tc_5da50c4b
  { 1, 295, 296, 4287, 4290 }, // 9 tc_4a55d03c
  { 1, 296, 297, 4290, 4293 }, // 10 tc_d33e5eee
  { 1, 295, 296, 4293, 4296 }, // 11 tc_651cbe02
  { 1, 297, 298, 4296, 4299 }, // 12 DUPLEX
  { 1, 298, 299, 4299, 4300 }, // 13 tc_ENDLOOP
  { 1, 296, 297, 0, 0 }, // 14 tc_23708a21
  { 1, 296, 297, 4300, 4302 }, // 15 tc_56a124a7
  { 1, 299, 300, 4302, 4304 }, // 16 tc_2f573607
  { 1, 299, 300, 4304, 4307 }, // 17 tc_53c851ab
  { 1, 300, 301, 4307, 4311 }, // 18 tc_fedb7e19
  { 1, 300, 301, 4311, 4314 }, // 19 tc_4222e6bf
  { 1, 300, 301, 4314, 4318 }, // 20 tc_075c8dd8
  { 1, 297, 298, 4318, 4321 }, // 21 tc_9bcfb2ee
  { 1, 297, 298, 4321, 4324 }, // 22 tc_158aa3f7
  { 1, 297, 298, 4324, 4327 }, // 23 tc_df5d53f9
  { 1, 297, 298, 4327, 4330 }, // 24 tc_14ab4f41
  { 1, 297, 298, 4330, 4331 }, // 25 tc_f38f92e1
  { 1, 297, 298, 4331, 4332 }, // 26 tc_1981450d
  { 1, 300, 301, 4332, 4334 }, // 27 tc_e9170fb7
  { 1, 297, 298, 4334, 4336 }, // 28 tc_40d64c94
  { 1, 300, 301, 4336, 4338 }, // 29 LD_tc_ld_SLOT01
  { 1, 295, 296, 4338, 4341 }, // 30 tc_38382228
  { 1, 295, 296, 4341, 4344 }, // 31 tc_c21d7447
  { 1, 295, 296, 4344, 4348 }, // 32 tc_7f8ae742
  { 1, 301, 302, 4348, 4351 }, // 33 tc_5a4b5e58
  { 1, 301, 302, 4351, 4355 }, // 34 tc_197dce51
  { 1, 295, 296, 4355, 4356 }, // 35 tc_44fffc58
  { 1, 300, 301, 4356, 4361 }, // 36 tc_5ceb2f9e
  { 1, 302, 304, 4361, 4364 }, // 37 tc_56c4f9fe
  { 1, 300, 301, 4364, 4369 }, // 38 tc_b4dc7630
  { 1, 300, 301, 4369, 4373 }, // 39 tc_a2b365d2
  { 1, 299, 300, 4373, 4374 }, // 40 tc_60e324ff
  { 1, 304, 306, 4374, 4377 }, // 41 tc_db5555f3
  { 1, 306, 309, 4377, 4380 }, // 42 tc_c0749f3c
  { 1, 309, 311, 4380, 4383 }, // 43 PSEUDOM
  { 1, 302, 304, 4383, 4386 }, // 44 tc_3aacf4a8
  { 1, 311, 314, 4386, 4389 }, // 45 tc_c5dba46e
  { 1, 304, 306, 4389, 4393 }, // 46 tc_af25efd9
  { 1, 295, 296, 4393, 4396 }, // 47 tc_0dfac0a7
  { 1, 300, 301, 4396, 4400 }, // 48 tc_8035e91f
  { 1, 297, 298, 4400, 4404 }, // 49 tc_011e0e9d
  { 1, 300, 301, 4404, 4407 }, // 50 tc_ae5babd7
  { 1, 297, 298, 4407, 4410 }, // 51 tc_5deb5e47
  { 1, 295, 296, 4410, 4415 }, // 52 tc_bb831a7c
  { 1, 297, 298, 4415, 4419 }, // 53 tc_92240447
  { 1, 300, 301, 4419, 4422 }, // 54 tc_7c31e19a
  { 1, 300, 301, 4422, 4426 }, // 55 tc_d03278fd
  { 1, 300, 301, 4426, 4430 }, // 56 tc_65cbd974
  { 1, 297, 298, 4430, 4433 }, // 57 tc_934753bb
  { 1, 300, 301, 4433, 4436 }, // 58 ST_tc_st_SLOT01
  { 1, 314, 316, 4436, 4440 }, // 59 CVI_VA
  { 1, 316, 318, 4440, 4444 }, // 60 tc_f175e046
  { 1, 316, 318, 4444, 4449 }, // 61 tc_4942646a
  { 1, 302, 304, 4449, 4451 }, // 62 tc_0ec46cf9
  { 1, 304, 306, 4451, 4452 }, // 63 tc_718b5c53
  { 1, 318, 322, 0, 0 }, // 64 CVI_GATHER_PSEUDO
  { 1, 297, 298, 4452, 4453 }, // 65 tc_d45ba9cd
  { 1, 296, 297, 4453, 4456 }, // 66 tc_388f9897
  { 1, 296, 297, 4456, 4458 }, // 67 tc_9124c04f
  { 1, 296, 297, 4458, 4461 }, // 68 tc_4ac61d92
  { 1, 300, 301, 4461, 4463 }, // 69 tc_aee6250c
  { 1, 300, 301, 4463, 4466 }, // 70 tc_eed07714
  { 1, 300, 301, 4466, 4469 }, // 71 tc_74a42bda
  { 1, 300, 301, 4469, 4472 }, // 72 tc_a9edeffa
  { 1, 300, 301, 4472, 4475 }, // 73 tc_838c4d7a
  { 1, 295, 296, 4475, 4477 }, // 74 tc_d61dfdc3
  { 1, 295, 296, 4477, 4480 }, // 75 tc_8a825db2
  { 1, 295, 296, 4480, 4483 }, // 76 tc_f34c1c21
  { 1, 296, 297, 4483, 4486 }, // 77 tc_95a33176
  { 1, 295, 296, 4486, 4488 }, // 78 tc_9f6cd987
  { 1, 296, 297, 0, 0 }, // 79 tc_b837298f
  { 1, 296, 297, 4488, 4491 }, // 80 tc_8b5bd4f5
  { 1, 296, 297, 4491, 4494 }, // 81 tc_84a7500d
  { 1, 301, 302, 4494, 4496 }, // 82 tc_7476d766
  { 1, 301, 302, 4496, 4498 }, // 83 tc_49fdfd4b
  { 1, 295, 296, 4498, 4501 }, // 84 tc_f098b237
  { 1, 295, 296, 4501, 4504 }, // 85 tc_20131976
  { 1, 295, 296, 4504, 4509 }, // 86 tc_1d41f8b7
  { 1, 295, 296, 4509, 4512 }, // 87 tc_a1297125
  { 1, 296, 297, 4512, 4513 }, // 88 tc_112d30d6
  { 1, 295, 296, 4513, 4516 }, // 89 tc_d68dca5c
  { 1, 295, 296, 4516, 4520 }, // 90 tc_788b1d09
  { 1, 295, 296, 4520, 4525 }, // 91 tc_38e0bae9
  { 1, 295, 296, 4525, 4528 }, // 92 tc_407e96f9
  { 1, 295, 296, 4528, 4532 }, // 93 tc_7401744f
  { 1, 295, 296, 4532, 4535 }, // 94 tc_9b3c0462
  { 1, 295, 296, 4535, 4537 }, // 95 tc_151bf368
  { 1, 296, 297, 4537, 4540 }, // 96 tc_9c52f549
  { 1, 295, 296, 4540, 4542 }, // 97 tc_55b33fda
  { 1, 295, 296, 4542, 4546 }, // 98 tc_6fc5dbea
  { 1, 301, 302, 4546, 4548 }, // 99 tc_3edca78f
  { 1, 295, 296, 4548, 4552 }, // 100 tc_a7a13fac
  { 1, 295, 296, 4552, 4554 }, // 101 tc_9783714b
  { 1, 295, 296, 4554, 4557 }, // 102 tc_f0e8e832
  { 1, 295, 296, 4557, 4559 }, // 103 tc_65279839
  { 1, 295, 296, 4559, 4563 }, // 104 tc_0a195f2c
  { 1, 295, 296, 4563, 4567 }, // 105 tc_01e1be3b
  { 1, 295, 296, 4567, 4570 }, // 106 tc_556f6577
  { 1, 295, 296, 4570, 4573 }, // 107 tc_02fe1c65
  { 1, 295, 296, 4573, 4577 }, // 108 tc_9e72dc89
  { 1, 295, 296, 4577, 4582 }, // 109 tc_9edb7c77
  { 1, 295, 296, 4582, 4585 }, // 110 tc_7f7f45f5
  { 1, 295, 296, 4585, 4588 }, // 111 tc_c20701f0
  { 1, 295, 296, 4588, 4592 }, // 112 tc_f7569068
  { 1, 301, 302, 4592, 4594 }, // 113 tc_fae9dfa5
  { 1, 301, 302, 4594, 4596 }, // 114 tc_6ae3426b
  { 1, 295, 296, 4596, 4598 }, // 115 tc_69bfb303
  { 1, 299, 300, 4598, 4599 }, // 116 tc_362b0be2
  { 1, 299, 300, 4599, 4601 }, // 117 tc_dc51281d
  { 1, 296, 297, 4601, 4602 }, // 118 tc_decdde8a
  { 1, 296, 297, 4602, 4604 }, // 119 tc_eeda4109
  { 1, 296, 297, 4604, 4606 }, // 120 tc_711c805f
  { 1, 299, 300, 4606, 4608 }, // 121 tc_ed03645c
  { 1, 299, 300, 4608, 4610 }, // 122 tc_42ff66ba
  { 1, 301, 302, 4610, 4612 }, // 123 tc_57a55b54
  { 1, 301, 302, 4612, 4614 }, // 124 tc_1248597c
  { 1, 301, 302, 4614, 4616 }, // 125 tc_9406230a
  { 1, 299, 300, 4616, 4617 }, // 126 tc_d57d649c
  { 1, 301, 302, 4617, 4619 }, // 127 tc_4abdbdc6
  { 1, 301, 302, 4619, 4621 }, // 128 tc_6d861a95
  { 1, 299, 300, 4621, 4622 }, // 129 tc_45f9d1be
  { 1, 297, 298, 4622, 4625 }, // 130 tc_24e109c7
  { 1, 296, 297, 4625, 4628 }, // 131 tc_9e27f2f9
  { 1, 297, 298, 4628, 4631 }, // 132 tc_f6e2aff9
  { 1, 296, 297, 4631, 4634 }, // 133 tc_24f426ab
  { 1, 297, 298, 4634, 4637 }, // 134 tc_975a4e54
  { 1, 295, 296, 4637, 4640 }, // 135 tc_5502c366
  { 1, 297, 298, 4640, 4642 }, // 136 tc_7b9187d3
  { 1, 296, 297, 4642, 4644 }, // 137 tc_f999c66e
  { 1, 300, 301, 4644, 4649 }, // 138 tc_1c7522a8
  { 1, 300, 301, 4649, 4655 }, // 139 tc_76bb5435
  { 1, 300, 301, 4655, 4657 }, // 140 tc_8a6d0d94
  { 1, 297, 298, 4657, 4659 }, // 141 tc_2471c1c8
  { 1, 297, 298, 4659, 4661 }, // 142 tc_64b00d8a
  { 1, 300, 301, 4661, 4666 }, // 143 tc_5f2afaf7
  { 1, 300, 301, 4666, 4670 }, // 144 tc_ac65613f
  { 1, 300, 301, 4670, 4675 }, // 145 tc_a32e03e7
  { 1, 300, 301, 4675, 4678 }, // 146 tc_822c3c68
  { 1, 300, 301, 4678, 4682 }, // 147 tc_abfd9a6d
  { 1, 300, 301, 4682, 4686 }, // 148 tc_bf2ffc0f
  { 1, 300, 301, 4686, 4689 }, // 149 tc_7c6d32e4
  { 1, 300, 301, 4689, 4694 }, // 150 tc_45791fb8
  { 1, 300, 301, 4694, 4699 }, // 151 tc_b7c4062a
  { 1, 300, 301, 4699, 4702 }, // 152 tc_5944960d
  { 1, 295, 296, 4702, 4706 }, // 153 tc_2c13e7f5
  { 1, 295, 296, 4706, 4710 }, // 154 tc_a154b476
  { 1, 295, 296, 4710, 4714 }, // 155 tc_a4e22bbd
  { 1, 295, 296, 4714, 4718 }, // 156 tc_503ce0f3
  { 1, 300, 301, 4718, 4720 }, // 157 tc_0655b949
  { 1, 297, 298, 4720, 4722 }, // 158 tc_6e20402a
  { 1, 297, 298, 4722, 4723 }, // 159 tc_db96aa6b
  { 1, 295, 296, 4723, 4725 }, // 160 tc_a7bdb22c
  { 1, 295, 296, 4725, 4728 }, // 161 tc_db596beb
  { 1, 295, 296, 4728, 4731 }, // 162 tc_a08b630b
  { 1, 295, 296, 4731, 4734 }, // 163 tc_1fcb8495
  { 1, 300, 301, 4734, 4739 }, // 164 tc_9edefe01
  { 1, 300, 301, 4739, 4744 }, // 165 tc_449acf79
  { 1, 297, 298, 4744, 4749 }, // 166 tc_ce59038e
  { 1, 297, 298, 4749, 4754 }, // 167 tc_f529831b
  { 1, 297, 298, 4754, 4759 }, // 168 tc_addc37a8
  { 1, 297, 298, 4759, 4762 }, // 169 tc_6f42bc60
  { 1, 297, 298, 4762, 4764 }, // 170 tc_7af3a37e
  { 1, 295, 296, 4764, 4766 }, // 171 tc_e3d699e3
  { 1, 300, 301, 4766, 4769 }, // 172 tc_ba9255a6
  { 1, 300, 301, 4769, 4774 }, // 173 tc_1fe4ab69
  { 1, 300, 301, 4774, 4777 }, // 174 tc_bb07f2c5
  { 1, 300, 301, 4777, 4782 }, // 175 tc_8e82e8ca
  { 1, 297, 298, 4782, 4785 }, // 176 tc_cfa0e29b
  { 1, 297, 298, 4785, 4790 }, // 177 tc_0a6c20ae
  { 1, 297, 298, 4790, 4793 }, // 178 tc_0fac1eb8
  { 1, 297, 298, 4793, 4798 }, // 179 tc_829d8a86
  { 1, 300, 301, 4798, 4802 }, // 180 tc_280f7fe1
  { 1, 300, 301, 4802, 4806 }, // 181 tc_887d1bb7
  { 1, 297, 298, 4806, 4810 }, // 182 tc_96ef76ef
  { 1, 297, 298, 4810, 4814 }, // 183 tc_55a9a350
  { 1, 295, 296, 4814, 4818 }, // 184 tc_f0cdeccf
  { 1, 295, 296, 4818, 4823 }, // 185 tc_a38c45dc
  { 1, 295, 296, 4823, 4825 }, // 186 tc_d3632d88
  { 1, 295, 296, 4825, 4829 }, // 187 tc_5e4cf0e8
  { 1, 295, 296, 4829, 4831 }, // 188 tc_ef921005
  { 1, 300, 301, 4831, 4834 }, // 189 tc_5b347363
  { 1, 300, 301, 4834, 4836 }, // 190 tc_3d14a17b
  { 1, 300, 301, 4836, 4837 }, // 191 tc_3fbf1042
  { 1, 300, 301, 4837, 4838 }, // 192 tc_63567288
  { 1, 300, 301, 4838, 4840 }, // 193 tc_59a7822c
  { 1, 300, 301, 0, 0 }, // 194 tc_937dd41c
  { 1, 297, 298, 0, 0 }, // 195 tc_a4ee89db
  { 1, 297, 298, 0, 0 }, // 196 tc_c818ff7f
  { 1, 297, 298, 4840, 4841 }, // 197 tc_1242dc2a
  { 1, 300, 301, 4841, 4843 }, // 198 tc_44d5a428
  { 1, 322, 324, 4843, 4846 }, // 199 tc_540c3da3
  { 1, 316, 318, 4846, 4848 }, // 200 tc_c4edf264
  { 1, 324, 326, 4848, 4850 }, // 201 tc_5bf8afbb
  { 1, 326, 328, 4850, 4854 }, // 202 tc_2b4c548e
  { 1, 326, 328, 4854, 4859 }, // 203 tc_bb599486
  { 1, 328, 332, 4859, 4862 }, // 204 tc_a7e6707d
  { 1, 328, 332, 4862, 4866 }, // 205 tc_3c56e5ce
  { 1, 306, 309, 4866, 4870 }, // 206 tc_abe8c3b2
  { 1, 306, 309, 4870, 4875 }, // 207 tc_453fe68d
  { 1, 306, 309, 4875, 4879 }, // 208 tc_1ba8a0cd
  { 1, 332, 334, 4879, 4882 }, // 209 tc_52447ecc
  { 1, 332, 334, 4882, 4886 }, // 210 tc_3904b926
  { 1, 332, 334, 4886, 4891 }, // 211 tc_b9db8205
  { 1, 332, 334, 4891, 4895 }, // 212 tc_663c80a7
  { 1, 334, 338, 4895, 4898 }, // 213 tc_f21e8abb
  { 1, 334, 338, 4898, 4902 }, // 214 tc_131f1c81
  { 1, 334, 338, 4902, 4907 }, // 215 tc_c7039829
  { 1, 334, 338, 4907, 4911 }, // 216 tc_e2d2e9e5
  { 1, 338, 340, 4911, 4914 }, // 217 tc_ab23f776
  { 1, 338, 340, 4914, 4918 }, // 218 tc_7177e272
  { 1, 338, 340, 4918, 4923 }, // 219 tc_e99d4c2e
  { 1, 338, 340, 4923, 4927 }, // 220 tc_6942b6e0
  { 1, 311, 314, 4927, 4931 }, // 221 tc_a02a10a8
  { 1, 311, 314, 4931, 4936 }, // 222 tc_54a0dc47
  { 1, 311, 314, 4936, 4940 }, // 223 tc_447d9895
  { 1, 311, 314, 4940, 4945 }, // 224 tc_191381c1
  { 1, 311, 314, 4945, 4949 }, // 225 tc_3e2aaafc
  { 1, 338, 340, 4949, 4951 }, // 226 tc_3ce09744
  { 1, 338, 340, 4951, 4954 }, // 227 tc_20a4bbec
  { 1, 316, 318, 4954, 4956 }, // 228 tc_5cdf8c84
  { 1, 316, 318, 4956, 4959 }, // 229 tc_c127de3a
  { 1, 340, 342, 4959, 4962 }, // 230 tc_05ca8cfd
  { 1, 326, 328, 4962, 4965 }, // 231 tc_d8287c14
  { 1, 302, 304, 4965, 4969 }, // 232 tc_257f6f7c
  { 1, 302, 304, 4969, 4974 }, // 233 tc_7e6a3e89
  { 1, 302, 304, 4974, 4978 }, // 234 tc_e35c1e93
  { 1, 326, 328, 4978, 4982 }, // 235 tc_08a4f1b6
  { 1, 324, 326, 4982, 4986 }, // 236 tc_56e64202
  { 1, 316, 318, 4986, 4989 }, // 237 tc_ac4046bc
  { 1, 316, 318, 4989, 4993 }, // 238 tc_2e8f5f6e
  { 1, 340, 342, 4993, 4996 }, // 239 tc_7417e785
  { 1, 340, 342, 4996, 5000 }, // 240 tc_309dbb4f
  { 1, 342, 344, 5000, 5004 }, // 241 tc_df80eeb0
  { 1, 340, 342, 5004, 5008 }, // 242 tc_16ff9ef8
  { 1, 296, 297, 5008, 5010 }, // 243 tc_2120355e
  { 1, 340, 342, 5010, 5012 }, // 244 tc_51d0ecc3
  { 1, 296, 297, 5012, 5015 }, // 245 tc_aa047364
  { 1, 316, 318, 5015, 5017 }, // 246 tc_3c8c15d0
  { 1, 326, 328, 5017, 5019 }, // 247 tc_0afc8be9
  { 1, 342, 344, 5019, 5024 }, // 248 tc_561aaa58
  { 1, 324, 326, 5024, 5026 }, // 249 tc_946013d8
  { 1, 324, 326, 5026, 5029 }, // 250 tc_46d6c3e0
  { 1, 342, 344, 5029, 5033 }, // 251 tc_87adc037
  { 1, 316, 318, 5033, 5037 }, // 252 tc_a19b9305
  { 1, 316, 318, 5037, 5040 }, // 253 tc_649072c2
  { 1, 316, 318, 5040, 5044 }, // 254 tc_b091f1c6
  { 1, 326, 328, 5044, 5047 }, // 255 tc_0b04c6c7
  { 1, 326, 328, 5047, 5051 }, // 256 tc_660769f1
  { 1, 326, 328, 5051, 5054 }, // 257 tc_dcca380f
  { 1, 326, 328, 5054, 5058 }, // 258 tc_72e2b393
  { 1, 326, 328, 5058, 5061 }, // 259 tc_73efe966
  { 1, 316, 318, 5061, 5064 }, // 260 tc_cda936da
  { 1, 344, 347, 5064, 5067 }, // 261 tc_a28f32b5
  { 1, 344, 347, 5067, 5071 }, // 262 tc_7d68d5c2
  { 1, 347, 350, 5071, 5074 }, // 263 tc_7095ecba
  { 1, 347, 350, 5074, 5078 }, // 264 tc_a69eeee1
  { 1, 350, 352, 0, 0 }, // 265 tc_1381a97c
  { 1, 350, 352, 5078, 5079 }, // 266 tc_e3f68a46
  { 1, 352, 354, 5079, 5082 }, // 267 tc_f1de44ef
  { 1, 342, 344, 5082, 5087 }, // 268 tc_9d1dc972
  { 1, 352, 354, 5087, 5091 }, // 269 tc_90bcc1db
  { 1, 354, 357, 5091, 5094 }, // 270 tc_cd94bfe0
  { 1, 354, 357, 5094, 5098 }, // 271 tc_15fdf750
  { 1, 326, 328, 5098, 5102 }, // 272 tc_1ad8a370
  { 1, 326, 328, 5102, 5107 }, // 273 tc_e675c45a
  { 1, 326, 328, 5107, 5111 }, // 274 tc_37820f4c
  { 1, 357, 359, 5111, 5114 }, // 275 tc_61bf7c03
  { 1, 357, 359, 5114, 5118 }, // 276 tc_933f2b39
  { 1, 357, 359, 5118, 5122 }, // 277 tc_26a377fe
  { 1, 357, 359, 5122, 5127 }, // 278 tc_2d4051cd
  { 1, 324, 326, 5127, 5130 }, // 279 tc_6e7fa133
  { 1, 302, 304, 5130, 5133 }, // 280 tc_8772086c
  { 1, 304, 306, 5133, 5135 }, // 281 tc_b4416217
  { 1, 311, 314, 5135, 5139 }, // 282 tc_9f363d21
  { 1, 311, 314, 5139, 5144 }, // 283 tc_8e420e4d
  { 1, 359, 362, 5144, 5148 }, // 284 tc_7273323b
  { 1, 359, 362, 5148, 5153 }, // 285 tc_58d21193
  { 1, 304, 306, 5153, 5157 }, // 286 tc_71646d06
  { 1, 342, 344, 5157, 5159 }, // 287 tc_04da405a
  { 1, 342, 344, 5159, 5162 }, // 288 tc_2c745bb8
  { 1, 350, 352, 5162, 5163 }, // 289 tc_b28e51aa
  { 1, 350, 352, 5163, 5165 }, // 290 tc_767c4e9d
  { 1, 362, 364, 5165, 5167 }, // 291 tc_e699ae41
  { 1, 362, 364, 5167, 5170 }, // 292 tc_a0dbea28
  { 1, 362, 364, 5170, 5173 }, // 293 tc_dd5b0695
  { 1, 362, 364, 5173, 5177 }, // 294 tc_3ad719fb
  { 1, 297, 298, 0, 0 }, // 295 tc_77f94a5e
  { 1, 301, 302, 0, 0 }, // 296 tc_55255f2b
  { 1, 297, 298, 5177, 5178 }, // 297 tc_b1ae5f67
  { 1, 297, 298, 5178, 5180 }, // 298 tc_2237d952
  { 1, 299, 300, 5180, 5181 }, // 299 tc_0ba0d5da
  { 1, 299, 300, 0, 0 }, // 300 tc_9b34f5e0
  { 1, 301, 302, 5181, 5182 }, // 301 tc_2c3e17fc
  { 1, 297, 298, 5182, 5184 }, // 302 tc_a3070909
  { 1, 301, 302, 5184, 5185 }, // 303 tc_d7718fbe
  { 1, 301, 302, 5185, 5187 }, // 304 tc_28e55c6f
  { 1, 297, 298, 5187, 5188 }, // 305 tc_4bf903b0
  { 0, 0, 0, 0, 0 }, // 306 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV67T[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 364, 365, 5188, 5191 }, // 1 tc_01d44cb2
  { 1, 365, 366, 5191, 5194 }, // 2 PSEUDO
  { 1, 365, 366, 5194, 5196 }, // 3 tc_c57d9f39
  { 1, 365, 366, 5196, 5200 }, // 4 tc_1c2c7a4a
  { 1, 365, 366, 5200, 5204 }, // 5 tc_442395f3
  { 1, 365, 366, 5204, 5207 }, // 6 tc_713b66bf
  { 1, 365, 366, 5207, 5210 }, // 7 tc_86173609
  { 1, 364, 365, 5210, 5213 }, // 8 tc_5da50c4b
  { 1, 364, 365, 5213, 5216 }, // 9 tc_4a55d03c
  { 1, 365, 366, 5216, 5219 }, // 10 tc_d33e5eee
  { 1, 364, 365, 5219, 5222 }, // 11 tc_651cbe02
  { 1, 366, 367, 5222, 5225 }, // 12 DUPLEX
  { 1, 367, 368, 5225, 5226 }, // 13 tc_ENDLOOP
  { 1, 365, 366, 0, 0 }, // 14 tc_23708a21
  { 1, 365, 366, 5226, 5228 }, // 15 tc_56a124a7
  { 1, 368, 369, 5228, 5230 }, // 16 tc_2f573607
  { 1, 368, 369, 5230, 5233 }, // 17 tc_53c851ab
  { 1, 366, 367, 5233, 5237 }, // 18 tc_fedb7e19
  { 1, 366, 367, 5237, 5240 }, // 19 tc_4222e6bf
  { 1, 366, 367, 5240, 5244 }, // 20 tc_075c8dd8
  { 1, 366, 367, 5244, 5247 }, // 21 tc_9bcfb2ee
  { 1, 366, 367, 5247, 5250 }, // 22 tc_158aa3f7
  { 1, 366, 367, 5250, 5253 }, // 23 tc_df5d53f9
  { 1, 366, 367, 5253, 5256 }, // 24 tc_14ab4f41
  { 1, 366, 367, 5256, 5257 }, // 25 tc_f38f92e1
  { 1, 366, 367, 5257, 5258 }, // 26 tc_1981450d
  { 1, 366, 367, 5258, 5260 }, // 27 tc_e9170fb7
  { 1, 366, 367, 5260, 5262 }, // 28 tc_40d64c94
  { 1, 366, 367, 5262, 5265 }, // 29 LD_tc_ld_SLOT01
  { 1, 369, 370, 5265, 5268 }, // 30 tc_38382228
  { 1, 369, 370, 5268, 5271 }, // 31 tc_c21d7447
  { 1, 369, 370, 5271, 5275 }, // 32 tc_7f8ae742
  { 1, 369, 370, 5275, 5278 }, // 33 tc_5a4b5e58
  { 1, 369, 370, 5278, 5282 }, // 34 tc_197dce51
  { 1, 364, 365, 5282, 5283 }, // 35 tc_44fffc58
  { 1, 366, 367, 5283, 5288 }, // 36 tc_5ceb2f9e
  { 1, 370, 372, 5288, 5291 }, // 37 tc_56c4f9fe
  { 1, 366, 367, 5291, 5296 }, // 38 tc_b4dc7630
  { 1, 366, 367, 5296, 5300 }, // 39 tc_a2b365d2
  { 1, 368, 369, 5300, 5301 }, // 40 tc_60e324ff
  { 1, 372, 374, 5301, 5304 }, // 41 tc_db5555f3
  { 1, 374, 377, 5304, 5307 }, // 42 tc_c0749f3c
  { 1, 377, 379, 5307, 5310 }, // 43 PSEUDOM
  { 1, 370, 372, 5310, 5313 }, // 44 tc_3aacf4a8
  { 1, 379, 382, 5313, 5316 }, // 45 tc_c5dba46e
  { 1, 372, 374, 5316, 5320 }, // 46 tc_af25efd9
  { 1, 364, 365, 5320, 5323 }, // 47 tc_0dfac0a7
  { 1, 366, 367, 5323, 5327 }, // 48 tc_8035e91f
  { 1, 366, 367, 5327, 5331 }, // 49 tc_011e0e9d
  { 1, 366, 367, 5331, 5334 }, // 50 tc_ae5babd7
  { 1, 366, 367, 5334, 5337 }, // 51 tc_5deb5e47
  { 1, 369, 370, 5337, 5342 }, // 52 tc_bb831a7c
  { 1, 366, 367, 5342, 5346 }, // 53 tc_92240447
  { 1, 366, 367, 5346, 5349 }, // 54 tc_7c31e19a
  { 1, 366, 367, 5349, 5353 }, // 55 tc_d03278fd
  { 1, 366, 367, 5353, 5357 }, // 56 tc_65cbd974
  { 1, 366, 367, 5357, 5360 }, // 57 tc_934753bb
  { 1, 366, 367, 5360, 5364 }, // 58 ST_tc_st_SLOT01
  { 1, 382, 384, 5364, 5368 }, // 59 CVI_VA
  { 1, 384, 386, 5368, 5372 }, // 60 tc_f175e046
  { 1, 384, 386, 5372, 5377 }, // 61 tc_4942646a
  { 1, 370, 372, 5377, 5379 }, // 62 tc_0ec46cf9
  { 1, 372, 374, 5379, 5380 }, // 63 tc_718b5c53
  { 1, 386, 390, 0, 0 }, // 64 CVI_GATHER_PSEUDO
  { 1, 366, 367, 5380, 5381 }, // 65 tc_d45ba9cd
  { 1, 390, 391, 5381, 5384 }, // 66 tc_388f9897
  { 1, 390, 391, 5384, 5386 }, // 67 tc_9124c04f
  { 1, 390, 391, 5386, 5389 }, // 68 tc_4ac61d92
  { 1, 391, 392, 5389, 5391 }, // 69 tc_aee6250c
  { 1, 391, 392, 5391, 5394 }, // 70 tc_eed07714
  { 1, 391, 392, 5394, 5397 }, // 71 tc_74a42bda
  { 1, 391, 392, 5397, 5400 }, // 72 tc_a9edeffa
  { 1, 391, 392, 5400, 5403 }, // 73 tc_838c4d7a
  { 1, 364, 365, 5403, 5405 }, // 74 tc_d61dfdc3
  { 1, 364, 365, 5405, 5408 }, // 75 tc_8a825db2
  { 1, 364, 365, 5408, 5411 }, // 76 tc_f34c1c21
  { 1, 365, 366, 5411, 5414 }, // 77 tc_95a33176
  { 1, 364, 365, 5414, 5416 }, // 78 tc_9f6cd987
  { 1, 365, 366, 0, 0 }, // 79 tc_b837298f
  { 1, 365, 366, 5416, 5419 }, // 80 tc_8b5bd4f5
  { 1, 365, 366, 5419, 5422 }, // 81 tc_84a7500d
  { 1, 369, 370, 5422, 5424 }, // 82 tc_7476d766
  { 1, 369, 370, 5424, 5426 }, // 83 tc_49fdfd4b
  { 1, 364, 365, 5426, 5429 }, // 84 tc_f098b237
  { 1, 364, 365, 5429, 5432 }, // 85 tc_20131976
  { 1, 364, 365, 5432, 5437 }, // 86 tc_1d41f8b7
  { 1, 364, 365, 5437, 5440 }, // 87 tc_a1297125
  { 1, 365, 366, 5440, 5441 }, // 88 tc_112d30d6
  { 1, 369, 370, 5441, 5444 }, // 89 tc_d68dca5c
  { 1, 369, 370, 5444, 5448 }, // 90 tc_788b1d09
  { 1, 369, 370, 5448, 5453 }, // 91 tc_38e0bae9
  { 1, 364, 365, 5453, 5456 }, // 92 tc_407e96f9
  { 1, 369, 370, 5456, 5460 }, // 93 tc_7401744f
  { 1, 364, 365, 5460, 5463 }, // 94 tc_9b3c0462
  { 1, 364, 365, 5463, 5465 }, // 95 tc_151bf368
  { 1, 365, 366, 5465, 5468 }, // 96 tc_9c52f549
  { 1, 364, 365, 5468, 5470 }, // 97 tc_55b33fda
  { 1, 364, 365, 5470, 5474 }, // 98 tc_6fc5dbea
  { 1, 369, 370, 5474, 5476 }, // 99 tc_3edca78f
  { 1, 364, 365, 5476, 5480 }, // 100 tc_a7a13fac
  { 1, 369, 370, 5480, 5482 }, // 101 tc_9783714b
  { 1, 369, 370, 5482, 5485 }, // 102 tc_f0e8e832
  { 1, 364, 365, 5485, 5487 }, // 103 tc_65279839
  { 1, 369, 370, 5487, 5491 }, // 104 tc_0a195f2c
  { 1, 369, 370, 5491, 5495 }, // 105 tc_01e1be3b
  { 1, 369, 370, 5495, 5498 }, // 106 tc_556f6577
  { 1, 369, 370, 5498, 5501 }, // 107 tc_02fe1c65
  { 1, 369, 370, 5501, 5505 }, // 108 tc_9e72dc89
  { 1, 369, 370, 5505, 5510 }, // 109 tc_9edb7c77
  { 1, 369, 370, 5510, 5513 }, // 110 tc_7f7f45f5
  { 1, 364, 365, 5513, 5516 }, // 111 tc_c20701f0
  { 1, 369, 370, 5516, 5520 }, // 112 tc_f7569068
  { 1, 369, 370, 5520, 5522 }, // 113 tc_fae9dfa5
  { 1, 369, 370, 5522, 5524 }, // 114 tc_6ae3426b
  { 1, 364, 365, 5524, 5526 }, // 115 tc_69bfb303
  { 1, 368, 369, 5526, 5527 }, // 116 tc_362b0be2
  { 1, 368, 369, 5527, 5529 }, // 117 tc_dc51281d
  { 1, 365, 366, 5529, 5530 }, // 118 tc_decdde8a
  { 1, 365, 366, 5530, 5532 }, // 119 tc_eeda4109
  { 1, 365, 366, 5532, 5534 }, // 120 tc_711c805f
  { 1, 368, 369, 5534, 5536 }, // 121 tc_ed03645c
  { 1, 368, 369, 5536, 5538 }, // 122 tc_42ff66ba
  { 1, 369, 370, 5538, 5540 }, // 123 tc_57a55b54
  { 1, 369, 370, 5540, 5542 }, // 124 tc_1248597c
  { 1, 369, 370, 5542, 5544 }, // 125 tc_9406230a
  { 1, 368, 369, 5544, 5545 }, // 126 tc_d57d649c
  { 1, 369, 370, 5545, 5547 }, // 127 tc_4abdbdc6
  { 1, 369, 370, 5547, 5549 }, // 128 tc_6d861a95
  { 1, 368, 369, 5549, 5550 }, // 129 tc_45f9d1be
  { 1, 366, 367, 5550, 5553 }, // 130 tc_24e109c7
  { 1, 365, 366, 5553, 5556 }, // 131 tc_9e27f2f9
  { 1, 366, 367, 5556, 5559 }, // 132 tc_f6e2aff9
  { 1, 365, 366, 5559, 5562 }, // 133 tc_24f426ab
  { 1, 366, 367, 5562, 5565 }, // 134 tc_975a4e54
  { 1, 364, 365, 5565, 5568 }, // 135 tc_5502c366
  { 1, 366, 367, 5568, 5570 }, // 136 tc_7b9187d3
  { 1, 365, 366, 5570, 5572 }, // 137 tc_f999c66e
  { 1, 366, 367, 5572, 5577 }, // 138 tc_1c7522a8
  { 1, 366, 367, 5577, 5583 }, // 139 tc_76bb5435
  { 1, 366, 367, 5583, 5585 }, // 140 tc_8a6d0d94
  { 1, 366, 367, 5585, 5587 }, // 141 tc_2471c1c8
  { 1, 366, 367, 5587, 5589 }, // 142 tc_64b00d8a
  { 1, 366, 367, 5589, 5594 }, // 143 tc_5f2afaf7
  { 1, 366, 367, 5594, 5598 }, // 144 tc_ac65613f
  { 1, 366, 367, 5598, 5603 }, // 145 tc_a32e03e7
  { 1, 366, 367, 5603, 5606 }, // 146 tc_822c3c68
  { 1, 366, 367, 5606, 5610 }, // 147 tc_abfd9a6d
  { 1, 366, 367, 5610, 5614 }, // 148 tc_bf2ffc0f
  { 1, 366, 367, 5614, 5617 }, // 149 tc_7c6d32e4
  { 1, 366, 367, 5617, 5622 }, // 150 tc_45791fb8
  { 1, 366, 367, 5622, 5627 }, // 151 tc_b7c4062a
  { 1, 366, 367, 5627, 5630 }, // 152 tc_5944960d
  { 1, 369, 370, 5630, 5634 }, // 153 tc_2c13e7f5
  { 1, 369, 370, 5634, 5638 }, // 154 tc_a154b476
  { 1, 369, 370, 5638, 5642 }, // 155 tc_a4e22bbd
  { 1, 369, 370, 5642, 5646 }, // 156 tc_503ce0f3
  { 1, 366, 367, 5646, 5648 }, // 157 tc_0655b949
  { 1, 366, 367, 5648, 5650 }, // 158 tc_6e20402a
  { 1, 366, 367, 5650, 5651 }, // 159 tc_db96aa6b
  { 1, 369, 370, 5651, 5653 }, // 160 tc_a7bdb22c
  { 1, 369, 370, 5653, 5656 }, // 161 tc_db596beb
  { 1, 369, 370, 5656, 5659 }, // 162 tc_a08b630b
  { 1, 369, 370, 5659, 5662 }, // 163 tc_1fcb8495
  { 1, 366, 367, 5662, 5667 }, // 164 tc_9edefe01
  { 1, 366, 367, 5667, 5672 }, // 165 tc_449acf79
  { 1, 366, 367, 5672, 5677 }, // 166 tc_ce59038e
  { 1, 366, 367, 5677, 5682 }, // 167 tc_f529831b
  { 1, 366, 367, 5682, 5687 }, // 168 tc_addc37a8
  { 1, 366, 367, 5687, 5690 }, // 169 tc_6f42bc60
  { 1, 366, 367, 5690, 5692 }, // 170 tc_7af3a37e
  { 1, 364, 365, 5692, 5694 }, // 171 tc_e3d699e3
  { 1, 366, 367, 5694, 5697 }, // 172 tc_ba9255a6
  { 1, 366, 367, 5697, 5702 }, // 173 tc_1fe4ab69
  { 1, 366, 367, 5702, 5705 }, // 174 tc_bb07f2c5
  { 1, 366, 367, 5705, 5710 }, // 175 tc_8e82e8ca
  { 1, 366, 367, 5710, 5713 }, // 176 tc_cfa0e29b
  { 1, 366, 367, 5713, 5718 }, // 177 tc_0a6c20ae
  { 1, 366, 367, 5718, 5721 }, // 178 tc_0fac1eb8
  { 1, 366, 367, 5721, 5726 }, // 179 tc_829d8a86
  { 1, 366, 367, 5726, 5730 }, // 180 tc_280f7fe1
  { 1, 366, 367, 5730, 5734 }, // 181 tc_887d1bb7
  { 1, 366, 367, 5734, 5738 }, // 182 tc_96ef76ef
  { 1, 366, 367, 5738, 5742 }, // 183 tc_55a9a350
  { 1, 369, 370, 5742, 5746 }, // 184 tc_f0cdeccf
  { 1, 369, 370, 5746, 5751 }, // 185 tc_a38c45dc
  { 1, 369, 370, 5751, 5753 }, // 186 tc_d3632d88
  { 1, 369, 370, 5753, 5757 }, // 187 tc_5e4cf0e8
  { 1, 364, 365, 5757, 5759 }, // 188 tc_ef921005
  { 1, 366, 367, 5759, 5762 }, // 189 tc_5b347363
  { 1, 366, 367, 5762, 5764 }, // 190 tc_3d14a17b
  { 1, 366, 367, 5764, 5765 }, // 191 tc_3fbf1042
  { 1, 366, 367, 5765, 5766 }, // 192 tc_63567288
  { 1, 366, 367, 5766, 5768 }, // 193 tc_59a7822c
  { 1, 366, 367, 0, 0 }, // 194 tc_937dd41c
  { 1, 366, 367, 0, 0 }, // 195 tc_a4ee89db
  { 1, 366, 367, 0, 0 }, // 196 tc_c818ff7f
  { 1, 366, 367, 5768, 5769 }, // 197 tc_1242dc2a
  { 1, 366, 367, 5769, 5771 }, // 198 tc_44d5a428
  { 1, 392, 394, 5771, 5774 }, // 199 tc_540c3da3
  { 1, 384, 386, 5774, 5776 }, // 200 tc_c4edf264
  { 1, 394, 396, 5776, 5778 }, // 201 tc_5bf8afbb
  { 1, 396, 398, 5778, 5782 }, // 202 tc_2b4c548e
  { 1, 396, 398, 5782, 5787 }, // 203 tc_bb599486
  { 1, 398, 402, 5787, 5790 }, // 204 tc_a7e6707d
  { 1, 398, 402, 5790, 5794 }, // 205 tc_3c56e5ce
  { 1, 374, 377, 5794, 5798 }, // 206 tc_abe8c3b2
  { 1, 374, 377, 5798, 5803 }, // 207 tc_453fe68d
  { 1, 374, 377, 5803, 5807 }, // 208 tc_1ba8a0cd
  { 1, 402, 404, 5807, 5810 }, // 209 tc_52447ecc
  { 1, 402, 404, 5810, 5814 }, // 210 tc_3904b926
  { 1, 402, 404, 5814, 5819 }, // 211 tc_b9db8205
  { 1, 402, 404, 5819, 5823 }, // 212 tc_663c80a7
  { 1, 404, 408, 5823, 5826 }, // 213 tc_f21e8abb
  { 1, 404, 408, 5826, 5830 }, // 214 tc_131f1c81
  { 1, 404, 408, 5830, 5835 }, // 215 tc_c7039829
  { 1, 404, 408, 5835, 5839 }, // 216 tc_e2d2e9e5
  { 1, 408, 410, 5839, 5842 }, // 217 tc_ab23f776
  { 1, 408, 410, 5842, 5846 }, // 218 tc_7177e272
  { 1, 408, 410, 5846, 5851 }, // 219 tc_e99d4c2e
  { 1, 408, 410, 5851, 5855 }, // 220 tc_6942b6e0
  { 1, 379, 382, 5855, 5859 }, // 221 tc_a02a10a8
  { 1, 379, 382, 5859, 5864 }, // 222 tc_54a0dc47
  { 1, 379, 382, 5864, 5868 }, // 223 tc_447d9895
  { 1, 379, 382, 5868, 5873 }, // 224 tc_191381c1
  { 1, 379, 382, 5873, 5877 }, // 225 tc_3e2aaafc
  { 1, 408, 410, 5877, 5879 }, // 226 tc_3ce09744
  { 1, 408, 410, 5879, 5882 }, // 227 tc_20a4bbec
  { 1, 384, 386, 5882, 5884 }, // 228 tc_5cdf8c84
  { 1, 384, 386, 5884, 5887 }, // 229 tc_c127de3a
  { 1, 410, 412, 5887, 5890 }, // 230 tc_05ca8cfd
  { 1, 396, 398, 5890, 5893 }, // 231 tc_d8287c14
  { 1, 370, 372, 5893, 5897 }, // 232 tc_257f6f7c
  { 1, 370, 372, 5897, 5902 }, // 233 tc_7e6a3e89
  { 1, 370, 372, 5902, 5906 }, // 234 tc_e35c1e93
  { 1, 396, 398, 5906, 5910 }, // 235 tc_08a4f1b6
  { 1, 394, 396, 5910, 5914 }, // 236 tc_56e64202
  { 1, 384, 386, 5914, 5917 }, // 237 tc_ac4046bc
  { 1, 384, 386, 5917, 5921 }, // 238 tc_2e8f5f6e
  { 1, 410, 412, 5921, 5924 }, // 239 tc_7417e785
  { 1, 410, 412, 5924, 5928 }, // 240 tc_309dbb4f
  { 1, 412, 414, 5928, 5932 }, // 241 tc_df80eeb0
  { 1, 410, 412, 5932, 5936 }, // 242 tc_16ff9ef8
  { 1, 390, 391, 5936, 5938 }, // 243 tc_2120355e
  { 1, 410, 412, 5938, 5940 }, // 244 tc_51d0ecc3
  { 1, 390, 391, 5940, 5943 }, // 245 tc_aa047364
  { 1, 384, 386, 5943, 5945 }, // 246 tc_3c8c15d0
  { 1, 396, 398, 5945, 5947 }, // 247 tc_0afc8be9
  { 1, 412, 414, 5947, 5952 }, // 248 tc_561aaa58
  { 1, 394, 396, 5952, 5954 }, // 249 tc_946013d8
  { 1, 394, 396, 5954, 5957 }, // 250 tc_46d6c3e0
  { 1, 412, 414, 5957, 5961 }, // 251 tc_87adc037
  { 1, 384, 386, 5961, 5965 }, // 252 tc_a19b9305
  { 1, 384, 386, 5965, 5968 }, // 253 tc_649072c2
  { 1, 384, 386, 5968, 5972 }, // 254 tc_b091f1c6
  { 1, 396, 398, 5972, 5975 }, // 255 tc_0b04c6c7
  { 1, 396, 398, 5975, 5979 }, // 256 tc_660769f1
  { 1, 396, 398, 5979, 5982 }, // 257 tc_dcca380f
  { 1, 396, 398, 5982, 5986 }, // 258 tc_72e2b393
  { 1, 396, 398, 5986, 5989 }, // 259 tc_73efe966
  { 1, 384, 386, 5989, 5992 }, // 260 tc_cda936da
  { 1, 414, 417, 5992, 5995 }, // 261 tc_a28f32b5
  { 1, 414, 417, 5995, 5999 }, // 262 tc_7d68d5c2
  { 1, 417, 420, 5999, 6002 }, // 263 tc_7095ecba
  { 1, 417, 420, 6002, 6006 }, // 264 tc_a69eeee1
  { 1, 420, 422, 0, 0 }, // 265 tc_1381a97c
  { 1, 420, 422, 6006, 6007 }, // 266 tc_e3f68a46
  { 1, 422, 424, 6007, 6010 }, // 267 tc_f1de44ef
  { 1, 412, 414, 6010, 6015 }, // 268 tc_9d1dc972
  { 1, 422, 424, 6015, 6019 }, // 269 tc_90bcc1db
  { 1, 424, 427, 6019, 6022 }, // 270 tc_cd94bfe0
  { 1, 424, 427, 6022, 6026 }, // 271 tc_15fdf750
  { 1, 396, 398, 6026, 6030 }, // 272 tc_1ad8a370
  { 1, 396, 398, 6030, 6035 }, // 273 tc_e675c45a
  { 1, 396, 398, 6035, 6039 }, // 274 tc_37820f4c
  { 1, 427, 429, 6039, 6042 }, // 275 tc_61bf7c03
  { 1, 427, 429, 6042, 6046 }, // 276 tc_933f2b39
  { 1, 427, 429, 6046, 6050 }, // 277 tc_26a377fe
  { 1, 427, 429, 6050, 6055 }, // 278 tc_2d4051cd
  { 1, 394, 396, 6055, 6058 }, // 279 tc_6e7fa133
  { 1, 370, 372, 6058, 6061 }, // 280 tc_8772086c
  { 1, 372, 374, 6061, 6063 }, // 281 tc_b4416217
  { 1, 379, 382, 6063, 6067 }, // 282 tc_9f363d21
  { 1, 379, 382, 6067, 6072 }, // 283 tc_8e420e4d
  { 1, 429, 432, 6072, 6076 }, // 284 tc_7273323b
  { 1, 429, 432, 6076, 6081 }, // 285 tc_58d21193
  { 1, 372, 374, 6081, 6085 }, // 286 tc_71646d06
  { 1, 412, 414, 6085, 6087 }, // 287 tc_04da405a
  { 1, 412, 414, 6087, 6090 }, // 288 tc_2c745bb8
  { 1, 420, 422, 6090, 6091 }, // 289 tc_b28e51aa
  { 1, 420, 422, 6091, 6093 }, // 290 tc_767c4e9d
  { 1, 432, 434, 6093, 6095 }, // 291 tc_e699ae41
  { 1, 432, 434, 6095, 6098 }, // 292 tc_a0dbea28
  { 1, 432, 434, 6098, 6101 }, // 293 tc_dd5b0695
  { 1, 432, 434, 6101, 6105 }, // 294 tc_3ad719fb
  { 1, 366, 367, 0, 0 }, // 295 tc_77f94a5e
  { 1, 369, 370, 0, 0 }, // 296 tc_55255f2b
  { 1, 366, 367, 6105, 6106 }, // 297 tc_b1ae5f67
  { 1, 366, 367, 6106, 6108 }, // 298 tc_2237d952
  { 1, 368, 369, 6108, 6109 }, // 299 tc_0ba0d5da
  { 1, 368, 369, 0, 0 }, // 300 tc_9b34f5e0
  { 1, 369, 370, 6109, 6110 }, // 301 tc_2c3e17fc
  { 1, 366, 367, 6110, 6112 }, // 302 tc_a3070909
  { 1, 369, 370, 6112, 6113 }, // 303 tc_d7718fbe
  { 1, 369, 370, 6113, 6115 }, // 304 tc_28e55c6f
  { 1, 366, 367, 6115, 6116 }, // 305 tc_4bf903b0
  { 0, 0, 0, 0, 0 }, // 306 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV68[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 434, 435, 6116, 6119 }, // 1 tc_01d44cb2
  { 1, 435, 436, 6119, 6122 }, // 2 PSEUDO
  { 1, 435, 436, 6122, 6124 }, // 3 tc_c57d9f39
  { 1, 435, 436, 6124, 6128 }, // 4 tc_1c2c7a4a
  { 1, 435, 436, 6128, 6132 }, // 5 tc_442395f3
  { 1, 435, 436, 6132, 6135 }, // 6 tc_713b66bf
  { 1, 435, 436, 6135, 6138 }, // 7 tc_86173609
  { 1, 434, 435, 6138, 6141 }, // 8 tc_5da50c4b
  { 1, 434, 435, 6141, 6144 }, // 9 tc_4a55d03c
  { 1, 435, 436, 6144, 6147 }, // 10 tc_d33e5eee
  { 1, 434, 435, 6147, 6150 }, // 11 tc_651cbe02
  { 1, 436, 437, 6150, 6153 }, // 12 DUPLEX
  { 1, 437, 438, 6153, 6154 }, // 13 tc_ENDLOOP
  { 1, 435, 436, 0, 0 }, // 14 tc_23708a21
  { 1, 435, 436, 6154, 6156 }, // 15 tc_56a124a7
  { 1, 438, 439, 6156, 6158 }, // 16 tc_2f573607
  { 1, 438, 439, 6158, 6161 }, // 17 tc_53c851ab
  { 1, 439, 440, 6161, 6165 }, // 18 tc_fedb7e19
  { 1, 439, 440, 6165, 6168 }, // 19 tc_4222e6bf
  { 1, 439, 440, 6168, 6172 }, // 20 tc_075c8dd8
  { 1, 436, 437, 6172, 6175 }, // 21 tc_9bcfb2ee
  { 1, 436, 437, 6175, 6178 }, // 22 tc_158aa3f7
  { 1, 436, 437, 6178, 6181 }, // 23 tc_df5d53f9
  { 1, 436, 437, 6181, 6184 }, // 24 tc_14ab4f41
  { 1, 436, 437, 6184, 6185 }, // 25 tc_f38f92e1
  { 1, 436, 437, 6185, 6186 }, // 26 tc_1981450d
  { 1, 439, 440, 6186, 6188 }, // 27 tc_e9170fb7
  { 1, 436, 437, 6188, 6190 }, // 28 tc_40d64c94
  { 1, 439, 440, 6190, 6192 }, // 29 LD_tc_ld_SLOT01
  { 1, 434, 435, 6192, 6195 }, // 30 tc_38382228
  { 1, 434, 435, 6195, 6198 }, // 31 tc_c21d7447
  { 1, 434, 435, 6198, 6202 }, // 32 tc_7f8ae742
  { 1, 440, 441, 6202, 6205 }, // 33 tc_5a4b5e58
  { 1, 440, 441, 6205, 6209 }, // 34 tc_197dce51
  { 1, 434, 435, 6209, 6210 }, // 35 tc_44fffc58
  { 1, 439, 440, 6210, 6215 }, // 36 tc_5ceb2f9e
  { 1, 441, 443, 6215, 6218 }, // 37 tc_56c4f9fe
  { 1, 439, 440, 6218, 6223 }, // 38 tc_b4dc7630
  { 1, 439, 440, 6223, 6227 }, // 39 tc_a2b365d2
  { 1, 438, 439, 6227, 6228 }, // 40 tc_60e324ff
  { 1, 443, 445, 6228, 6231 }, // 41 tc_db5555f3
  { 1, 445, 448, 6231, 6234 }, // 42 tc_c0749f3c
  { 1, 448, 450, 6234, 6237 }, // 43 PSEUDOM
  { 1, 441, 443, 6237, 6240 }, // 44 tc_3aacf4a8
  { 1, 450, 453, 6240, 6243 }, // 45 tc_c5dba46e
  { 1, 443, 445, 6243, 6247 }, // 46 tc_af25efd9
  { 1, 434, 435, 6247, 6250 }, // 47 tc_0dfac0a7
  { 1, 439, 440, 6250, 6254 }, // 48 tc_8035e91f
  { 1, 436, 437, 6254, 6258 }, // 49 tc_011e0e9d
  { 1, 439, 440, 6258, 6261 }, // 50 tc_ae5babd7
  { 1, 436, 437, 6261, 6264 }, // 51 tc_5deb5e47
  { 1, 434, 435, 6264, 6269 }, // 52 tc_bb831a7c
  { 1, 436, 437, 6269, 6273 }, // 53 tc_92240447
  { 1, 439, 440, 6273, 6276 }, // 54 tc_7c31e19a
  { 1, 439, 440, 6276, 6280 }, // 55 tc_d03278fd
  { 1, 439, 440, 6280, 6284 }, // 56 tc_65cbd974
  { 1, 436, 437, 6284, 6287 }, // 57 tc_934753bb
  { 1, 439, 440, 6287, 6290 }, // 58 ST_tc_st_SLOT01
  { 1, 453, 455, 6290, 6294 }, // 59 CVI_VA
  { 1, 455, 457, 6294, 6298 }, // 60 tc_f175e046
  { 1, 455, 457, 6298, 6303 }, // 61 tc_4942646a
  { 1, 441, 443, 6303, 6305 }, // 62 tc_0ec46cf9
  { 1, 443, 445, 6305, 6306 }, // 63 tc_718b5c53
  { 1, 457, 461, 0, 0 }, // 64 CVI_GATHER_PSEUDO
  { 1, 436, 437, 6306, 6307 }, // 65 tc_d45ba9cd
  { 1, 435, 436, 6307, 6310 }, // 66 tc_388f9897
  { 1, 435, 436, 6310, 6312 }, // 67 tc_9124c04f
  { 1, 435, 436, 6312, 6315 }, // 68 tc_4ac61d92
  { 1, 439, 440, 6315, 6317 }, // 69 tc_aee6250c
  { 1, 439, 440, 6317, 6320 }, // 70 tc_eed07714
  { 1, 439, 440, 6320, 6323 }, // 71 tc_74a42bda
  { 1, 439, 440, 6323, 6326 }, // 72 tc_a9edeffa
  { 1, 439, 440, 6326, 6329 }, // 73 tc_838c4d7a
  { 1, 434, 435, 6329, 6331 }, // 74 tc_d61dfdc3
  { 1, 434, 435, 6331, 6334 }, // 75 tc_8a825db2
  { 1, 434, 435, 6334, 6337 }, // 76 tc_f34c1c21
  { 1, 435, 436, 6337, 6340 }, // 77 tc_95a33176
  { 1, 434, 435, 6340, 6342 }, // 78 tc_9f6cd987
  { 1, 435, 436, 0, 0 }, // 79 tc_b837298f
  { 1, 435, 436, 6342, 6345 }, // 80 tc_8b5bd4f5
  { 1, 435, 436, 6345, 6348 }, // 81 tc_84a7500d
  { 1, 440, 441, 6348, 6350 }, // 82 tc_7476d766
  { 1, 440, 441, 6350, 6352 }, // 83 tc_49fdfd4b
  { 1, 434, 435, 6352, 6355 }, // 84 tc_f098b237
  { 1, 434, 435, 6355, 6358 }, // 85 tc_20131976
  { 1, 434, 435, 6358, 6363 }, // 86 tc_1d41f8b7
  { 1, 434, 435, 6363, 6366 }, // 87 tc_a1297125
  { 1, 435, 436, 6366, 6367 }, // 88 tc_112d30d6
  { 1, 434, 435, 6367, 6370 }, // 89 tc_d68dca5c
  { 1, 434, 435, 6370, 6374 }, // 90 tc_788b1d09
  { 1, 434, 435, 6374, 6379 }, // 91 tc_38e0bae9
  { 1, 434, 435, 6379, 6382 }, // 92 tc_407e96f9
  { 1, 434, 435, 6382, 6386 }, // 93 tc_7401744f
  { 1, 434, 435, 6386, 6389 }, // 94 tc_9b3c0462
  { 1, 434, 435, 6389, 6391 }, // 95 tc_151bf368
  { 1, 435, 436, 6391, 6394 }, // 96 tc_9c52f549
  { 1, 434, 435, 6394, 6396 }, // 97 tc_55b33fda
  { 1, 434, 435, 6396, 6400 }, // 98 tc_6fc5dbea
  { 1, 440, 441, 6400, 6402 }, // 99 tc_3edca78f
  { 1, 434, 435, 6402, 6406 }, // 100 tc_a7a13fac
  { 1, 434, 435, 6406, 6408 }, // 101 tc_9783714b
  { 1, 434, 435, 6408, 6411 }, // 102 tc_f0e8e832
  { 1, 434, 435, 6411, 6413 }, // 103 tc_65279839
  { 1, 434, 435, 6413, 6417 }, // 104 tc_0a195f2c
  { 1, 434, 435, 6417, 6421 }, // 105 tc_01e1be3b
  { 1, 434, 435, 6421, 6424 }, // 106 tc_556f6577
  { 1, 434, 435, 6424, 6427 }, // 107 tc_02fe1c65
  { 1, 434, 435, 6427, 6431 }, // 108 tc_9e72dc89
  { 1, 434, 435, 6431, 6436 }, // 109 tc_9edb7c77
  { 1, 434, 435, 6436, 6439 }, // 110 tc_7f7f45f5
  { 1, 434, 435, 6439, 6442 }, // 111 tc_c20701f0
  { 1, 434, 435, 6442, 6446 }, // 112 tc_f7569068
  { 1, 440, 441, 6446, 6448 }, // 113 tc_fae9dfa5
  { 1, 440, 441, 6448, 6450 }, // 114 tc_6ae3426b
  { 1, 434, 435, 6450, 6452 }, // 115 tc_69bfb303
  { 1, 438, 439, 6452, 6453 }, // 116 tc_362b0be2
  { 1, 438, 439, 6453, 6455 }, // 117 tc_dc51281d
  { 1, 435, 436, 6455, 6456 }, // 118 tc_decdde8a
  { 1, 435, 436, 6456, 6458 }, // 119 tc_eeda4109
  { 1, 435, 436, 6458, 6460 }, // 120 tc_711c805f
  { 1, 438, 439, 6460, 6462 }, // 121 tc_ed03645c
  { 1, 438, 439, 6462, 6464 }, // 122 tc_42ff66ba
  { 1, 440, 441, 6464, 6466 }, // 123 tc_57a55b54
  { 1, 440, 441, 6466, 6468 }, // 124 tc_1248597c
  { 1, 440, 441, 6468, 6470 }, // 125 tc_9406230a
  { 1, 438, 439, 6470, 6471 }, // 126 tc_d57d649c
  { 1, 440, 441, 6471, 6473 }, // 127 tc_4abdbdc6
  { 1, 440, 441, 6473, 6475 }, // 128 tc_6d861a95
  { 1, 438, 439, 6475, 6476 }, // 129 tc_45f9d1be
  { 1, 436, 437, 6476, 6479 }, // 130 tc_24e109c7
  { 1, 435, 436, 6479, 6482 }, // 131 tc_9e27f2f9
  { 1, 436, 437, 6482, 6485 }, // 132 tc_f6e2aff9
  { 1, 435, 436, 6485, 6488 }, // 133 tc_24f426ab
  { 1, 436, 437, 6488, 6491 }, // 134 tc_975a4e54
  { 1, 434, 435, 6491, 6494 }, // 135 tc_5502c366
  { 1, 436, 437, 6494, 6496 }, // 136 tc_7b9187d3
  { 1, 435, 436, 6496, 6498 }, // 137 tc_f999c66e
  { 1, 439, 440, 6498, 6503 }, // 138 tc_1c7522a8
  { 1, 439, 440, 6503, 6509 }, // 139 tc_76bb5435
  { 1, 439, 440, 6509, 6511 }, // 140 tc_8a6d0d94
  { 1, 436, 437, 6511, 6513 }, // 141 tc_2471c1c8
  { 1, 436, 437, 6513, 6515 }, // 142 tc_64b00d8a
  { 1, 439, 440, 6515, 6520 }, // 143 tc_5f2afaf7
  { 1, 439, 440, 6520, 6524 }, // 144 tc_ac65613f
  { 1, 439, 440, 6524, 6529 }, // 145 tc_a32e03e7
  { 1, 439, 440, 6529, 6532 }, // 146 tc_822c3c68
  { 1, 439, 440, 6532, 6536 }, // 147 tc_abfd9a6d
  { 1, 439, 440, 6536, 6540 }, // 148 tc_bf2ffc0f
  { 1, 439, 440, 6540, 6543 }, // 149 tc_7c6d32e4
  { 1, 439, 440, 6543, 6548 }, // 150 tc_45791fb8
  { 1, 439, 440, 6548, 6553 }, // 151 tc_b7c4062a
  { 1, 439, 440, 6553, 6556 }, // 152 tc_5944960d
  { 1, 434, 435, 6556, 6560 }, // 153 tc_2c13e7f5
  { 1, 434, 435, 6560, 6564 }, // 154 tc_a154b476
  { 1, 434, 435, 6564, 6568 }, // 155 tc_a4e22bbd
  { 1, 434, 435, 6568, 6572 }, // 156 tc_503ce0f3
  { 1, 439, 440, 6572, 6574 }, // 157 tc_0655b949
  { 1, 436, 437, 6574, 6576 }, // 158 tc_6e20402a
  { 1, 436, 437, 6576, 6577 }, // 159 tc_db96aa6b
  { 1, 434, 435, 6577, 6579 }, // 160 tc_a7bdb22c
  { 1, 434, 435, 6579, 6582 }, // 161 tc_db596beb
  { 1, 434, 435, 6582, 6585 }, // 162 tc_a08b630b
  { 1, 434, 435, 6585, 6588 }, // 163 tc_1fcb8495
  { 1, 439, 440, 6588, 6593 }, // 164 tc_9edefe01
  { 1, 439, 440, 6593, 6598 }, // 165 tc_449acf79
  { 1, 436, 437, 6598, 6603 }, // 166 tc_ce59038e
  { 1, 436, 437, 6603, 6608 }, // 167 tc_f529831b
  { 1, 436, 437, 6608, 6613 }, // 168 tc_addc37a8
  { 1, 436, 437, 6613, 6616 }, // 169 tc_6f42bc60
  { 1, 436, 437, 6616, 6618 }, // 170 tc_7af3a37e
  { 1, 434, 435, 6618, 6620 }, // 171 tc_e3d699e3
  { 1, 439, 440, 6620, 6623 }, // 172 tc_ba9255a6
  { 1, 439, 440, 6623, 6628 }, // 173 tc_1fe4ab69
  { 1, 439, 440, 6628, 6631 }, // 174 tc_bb07f2c5
  { 1, 439, 440, 6631, 6636 }, // 175 tc_8e82e8ca
  { 1, 436, 437, 6636, 6639 }, // 176 tc_cfa0e29b
  { 1, 436, 437, 6639, 6644 }, // 177 tc_0a6c20ae
  { 1, 436, 437, 6644, 6647 }, // 178 tc_0fac1eb8
  { 1, 436, 437, 6647, 6652 }, // 179 tc_829d8a86
  { 1, 439, 440, 6652, 6656 }, // 180 tc_280f7fe1
  { 1, 439, 440, 6656, 6660 }, // 181 tc_887d1bb7
  { 1, 436, 437, 6660, 6664 }, // 182 tc_96ef76ef
  { 1, 436, 437, 6664, 6668 }, // 183 tc_55a9a350
  { 1, 434, 435, 6668, 6672 }, // 184 tc_f0cdeccf
  { 1, 434, 435, 6672, 6677 }, // 185 tc_a38c45dc
  { 1, 434, 435, 6677, 6679 }, // 186 tc_d3632d88
  { 1, 434, 435, 6679, 6683 }, // 187 tc_5e4cf0e8
  { 1, 434, 435, 6683, 6685 }, // 188 tc_ef921005
  { 1, 439, 440, 6685, 6688 }, // 189 tc_5b347363
  { 1, 439, 440, 6688, 6690 }, // 190 tc_3d14a17b
  { 1, 439, 440, 6690, 6691 }, // 191 tc_3fbf1042
  { 1, 439, 440, 6691, 6692 }, // 192 tc_63567288
  { 1, 439, 440, 6692, 6694 }, // 193 tc_59a7822c
  { 1, 439, 440, 0, 0 }, // 194 tc_937dd41c
  { 1, 436, 437, 0, 0 }, // 195 tc_a4ee89db
  { 1, 436, 437, 0, 0 }, // 196 tc_c818ff7f
  { 1, 436, 437, 6694, 6695 }, // 197 tc_1242dc2a
  { 1, 439, 440, 6695, 6697 }, // 198 tc_44d5a428
  { 1, 461, 463, 6697, 6700 }, // 199 tc_540c3da3
  { 1, 455, 457, 6700, 6702 }, // 200 tc_c4edf264
  { 1, 463, 465, 6702, 6704 }, // 201 tc_5bf8afbb
  { 1, 465, 467, 6704, 6708 }, // 202 tc_2b4c548e
  { 1, 465, 467, 6708, 6713 }, // 203 tc_bb599486
  { 1, 467, 471, 6713, 6716 }, // 204 tc_a7e6707d
  { 1, 467, 471, 6716, 6720 }, // 205 tc_3c56e5ce
  { 1, 445, 448, 6720, 6724 }, // 206 tc_abe8c3b2
  { 1, 445, 448, 6724, 6729 }, // 207 tc_453fe68d
  { 1, 445, 448, 6729, 6733 }, // 208 tc_1ba8a0cd
  { 1, 471, 473, 6733, 6736 }, // 209 tc_52447ecc
  { 1, 471, 473, 6736, 6740 }, // 210 tc_3904b926
  { 1, 471, 473, 6740, 6745 }, // 211 tc_b9db8205
  { 1, 471, 473, 6745, 6749 }, // 212 tc_663c80a7
  { 1, 473, 477, 6749, 6752 }, // 213 tc_f21e8abb
  { 1, 473, 477, 6752, 6756 }, // 214 tc_131f1c81
  { 1, 473, 477, 6756, 6761 }, // 215 tc_c7039829
  { 1, 473, 477, 6761, 6765 }, // 216 tc_e2d2e9e5
  { 1, 477, 479, 6765, 6768 }, // 217 tc_ab23f776
  { 1, 477, 479, 6768, 6772 }, // 218 tc_7177e272
  { 1, 477, 479, 6772, 6777 }, // 219 tc_e99d4c2e
  { 1, 477, 479, 6777, 6781 }, // 220 tc_6942b6e0
  { 1, 450, 453, 6781, 6785 }, // 221 tc_a02a10a8
  { 1, 450, 453, 6785, 6790 }, // 222 tc_54a0dc47
  { 1, 450, 453, 6790, 6794 }, // 223 tc_447d9895
  { 1, 450, 453, 6794, 6799 }, // 224 tc_191381c1
  { 1, 450, 453, 6799, 6803 }, // 225 tc_3e2aaafc
  { 1, 477, 479, 6803, 6805 }, // 226 tc_3ce09744
  { 1, 477, 479, 6805, 6808 }, // 227 tc_20a4bbec
  { 1, 455, 457, 6808, 6810 }, // 228 tc_5cdf8c84
  { 1, 455, 457, 6810, 6813 }, // 229 tc_c127de3a
  { 1, 479, 481, 6813, 6816 }, // 230 tc_05ca8cfd
  { 1, 465, 467, 6816, 6819 }, // 231 tc_d8287c14
  { 1, 441, 443, 6819, 6823 }, // 232 tc_257f6f7c
  { 1, 441, 443, 6823, 6828 }, // 233 tc_7e6a3e89
  { 1, 441, 443, 6828, 6832 }, // 234 tc_e35c1e93
  { 1, 465, 467, 6832, 6836 }, // 235 tc_08a4f1b6
  { 1, 463, 465, 6836, 6840 }, // 236 tc_56e64202
  { 1, 455, 457, 6840, 6843 }, // 237 tc_ac4046bc
  { 1, 455, 457, 6843, 6847 }, // 238 tc_2e8f5f6e
  { 1, 479, 481, 6847, 6850 }, // 239 tc_7417e785
  { 1, 479, 481, 6850, 6854 }, // 240 tc_309dbb4f
  { 1, 481, 483, 6854, 6858 }, // 241 tc_df80eeb0
  { 1, 479, 481, 6858, 6862 }, // 242 tc_16ff9ef8
  { 1, 435, 436, 6862, 6864 }, // 243 tc_2120355e
  { 1, 479, 481, 6864, 6866 }, // 244 tc_51d0ecc3
  { 1, 435, 436, 6866, 6869 }, // 245 tc_aa047364
  { 1, 455, 457, 6869, 6871 }, // 246 tc_3c8c15d0
  { 1, 465, 467, 6871, 6873 }, // 247 tc_0afc8be9
  { 1, 481, 483, 6873, 6878 }, // 248 tc_561aaa58
  { 1, 463, 465, 6878, 6880 }, // 249 tc_946013d8
  { 1, 463, 465, 6880, 6883 }, // 250 tc_46d6c3e0
  { 1, 481, 483, 6883, 6887 }, // 251 tc_87adc037
  { 1, 455, 457, 6887, 6891 }, // 252 tc_a19b9305
  { 1, 455, 457, 6891, 6894 }, // 253 tc_649072c2
  { 1, 455, 457, 6894, 6898 }, // 254 tc_b091f1c6
  { 1, 465, 467, 6898, 6901 }, // 255 tc_0b04c6c7
  { 1, 465, 467, 6901, 6905 }, // 256 tc_660769f1
  { 1, 465, 467, 6905, 6908 }, // 257 tc_dcca380f
  { 1, 465, 467, 6908, 6912 }, // 258 tc_72e2b393
  { 1, 465, 467, 6912, 6915 }, // 259 tc_73efe966
  { 1, 455, 457, 6915, 6918 }, // 260 tc_cda936da
  { 1, 445, 448, 6918, 6921 }, // 261 tc_a28f32b5
  { 1, 445, 448, 6921, 6925 }, // 262 tc_7d68d5c2
  { 1, 483, 486, 6925, 6928 }, // 263 tc_7095ecba
  { 1, 483, 486, 6928, 6932 }, // 264 tc_a69eeee1
  { 1, 486, 488, 0, 0 }, // 265 tc_1381a97c
  { 1, 486, 488, 6932, 6933 }, // 266 tc_e3f68a46
  { 1, 488, 490, 6933, 6936 }, // 267 tc_f1de44ef
  { 1, 481, 483, 6936, 6941 }, // 268 tc_9d1dc972
  { 1, 488, 490, 6941, 6945 }, // 269 tc_90bcc1db
  { 1, 490, 493, 6945, 6948 }, // 270 tc_cd94bfe0
  { 1, 490, 493, 6948, 6952 }, // 271 tc_15fdf750
  { 1, 465, 467, 6952, 6956 }, // 272 tc_1ad8a370
  { 1, 465, 467, 6956, 6961 }, // 273 tc_e675c45a
  { 1, 465, 467, 6961, 6965 }, // 274 tc_37820f4c
  { 1, 493, 495, 6965, 6968 }, // 275 tc_61bf7c03
  { 1, 493, 495, 6968, 6972 }, // 276 tc_933f2b39
  { 1, 493, 495, 6972, 6976 }, // 277 tc_26a377fe
  { 1, 493, 495, 6976, 6981 }, // 278 tc_2d4051cd
  { 1, 463, 465, 6981, 6984 }, // 279 tc_6e7fa133
  { 1, 441, 443, 6984, 6987 }, // 280 tc_8772086c
  { 1, 443, 445, 6987, 6989 }, // 281 tc_b4416217
  { 1, 450, 453, 6989, 6993 }, // 282 tc_9f363d21
  { 1, 450, 453, 6993, 6998 }, // 283 tc_8e420e4d
  { 1, 495, 498, 6998, 7002 }, // 284 tc_7273323b
  { 1, 495, 498, 7002, 7007 }, // 285 tc_58d21193
  { 1, 443, 445, 7007, 7011 }, // 286 tc_71646d06
  { 1, 481, 483, 7011, 7013 }, // 287 tc_04da405a
  { 1, 481, 483, 7013, 7016 }, // 288 tc_2c745bb8
  { 1, 486, 488, 7016, 7017 }, // 289 tc_b28e51aa
  { 1, 486, 488, 7017, 7019 }, // 290 tc_767c4e9d
  { 1, 498, 500, 7019, 7021 }, // 291 tc_e699ae41
  { 1, 498, 500, 7021, 7024 }, // 292 tc_a0dbea28
  { 1, 498, 500, 7024, 7027 }, // 293 tc_dd5b0695
  { 1, 498, 500, 7027, 7031 }, // 294 tc_3ad719fb
  { 1, 436, 437, 0, 0 }, // 295 tc_77f94a5e
  { 1, 440, 441, 0, 0 }, // 296 tc_55255f2b
  { 1, 436, 437, 7031, 7032 }, // 297 tc_b1ae5f67
  { 1, 436, 437, 7032, 7034 }, // 298 tc_2237d952
  { 1, 438, 439, 7034, 7035 }, // 299 tc_0ba0d5da
  { 1, 438, 439, 0, 0 }, // 300 tc_9b34f5e0
  { 1, 440, 441, 7035, 7036 }, // 301 tc_2c3e17fc
  { 1, 436, 437, 7036, 7038 }, // 302 tc_a3070909
  { 1, 440, 441, 7038, 7039 }, // 303 tc_d7718fbe
  { 1, 440, 441, 7039, 7041 }, // 304 tc_28e55c6f
  { 1, 436, 437, 7041, 7042 }, // 305 tc_4bf903b0
  { 0, 0, 0, 0, 0 }, // 306 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV69[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 500, 501, 7042, 7045 }, // 1 tc_01d44cb2
  { 1, 501, 502, 7045, 7048 }, // 2 PSEUDO
  { 1, 501, 502, 7048, 7050 }, // 3 tc_c57d9f39
  { 1, 501, 502, 7050, 7054 }, // 4 tc_1c2c7a4a
  { 1, 501, 502, 7054, 7058 }, // 5 tc_442395f3
  { 1, 501, 502, 7058, 7061 }, // 6 tc_713b66bf
  { 1, 501, 502, 7061, 7064 }, // 7 tc_86173609
  { 1, 500, 501, 7064, 7067 }, // 8 tc_5da50c4b
  { 1, 500, 501, 7067, 7070 }, // 9 tc_4a55d03c
  { 1, 501, 502, 7070, 7073 }, // 10 tc_d33e5eee
  { 1, 500, 501, 7073, 7076 }, // 11 tc_651cbe02
  { 1, 502, 503, 7076, 7079 }, // 12 DUPLEX
  { 1, 503, 504, 7079, 7080 }, // 13 tc_ENDLOOP
  { 1, 501, 502, 0, 0 }, // 14 tc_23708a21
  { 1, 501, 502, 7080, 7082 }, // 15 tc_56a124a7
  { 1, 504, 505, 7082, 7084 }, // 16 tc_2f573607
  { 1, 504, 505, 7084, 7087 }, // 17 tc_53c851ab
  { 1, 505, 506, 7087, 7091 }, // 18 tc_fedb7e19
  { 1, 505, 506, 7091, 7094 }, // 19 tc_4222e6bf
  { 1, 505, 506, 7094, 7098 }, // 20 tc_075c8dd8
  { 1, 502, 503, 7098, 7101 }, // 21 tc_9bcfb2ee
  { 1, 502, 503, 7101, 7104 }, // 22 tc_158aa3f7
  { 1, 502, 503, 7104, 7107 }, // 23 tc_df5d53f9
  { 1, 502, 503, 7107, 7110 }, // 24 tc_14ab4f41
  { 1, 502, 503, 7110, 7111 }, // 25 tc_f38f92e1
  { 1, 502, 503, 7111, 7112 }, // 26 tc_1981450d
  { 1, 505, 506, 7112, 7114 }, // 27 tc_e9170fb7
  { 1, 502, 503, 7114, 7116 }, // 28 tc_40d64c94
  { 1, 505, 506, 7116, 7118 }, // 29 LD_tc_ld_SLOT01
  { 1, 500, 501, 7118, 7121 }, // 30 tc_38382228
  { 1, 500, 501, 7121, 7124 }, // 31 tc_c21d7447
  { 1, 500, 501, 7124, 7128 }, // 32 tc_7f8ae742
  { 1, 506, 507, 7128, 7131 }, // 33 tc_5a4b5e58
  { 1, 506, 507, 7131, 7135 }, // 34 tc_197dce51
  { 1, 500, 501, 7135, 7136 }, // 35 tc_44fffc58
  { 1, 505, 506, 7136, 7141 }, // 36 tc_5ceb2f9e
  { 1, 507, 509, 7141, 7144 }, // 37 tc_56c4f9fe
  { 1, 505, 506, 7144, 7149 }, // 38 tc_b4dc7630
  { 1, 505, 506, 7149, 7153 }, // 39 tc_a2b365d2
  { 1, 504, 505, 7153, 7154 }, // 40 tc_60e324ff
  { 1, 509, 511, 7154, 7157 }, // 41 tc_db5555f3
  { 1, 511, 514, 7157, 7160 }, // 42 tc_c0749f3c
  { 1, 514, 516, 7160, 7163 }, // 43 PSEUDOM
  { 1, 507, 509, 7163, 7166 }, // 44 tc_3aacf4a8
  { 1, 516, 519, 7166, 7169 }, // 45 tc_c5dba46e
  { 1, 509, 511, 7169, 7173 }, // 46 tc_af25efd9
  { 1, 500, 501, 7173, 7176 }, // 47 tc_0dfac0a7
  { 1, 505, 506, 7176, 7180 }, // 48 tc_8035e91f
  { 1, 502, 503, 7180, 7184 }, // 49 tc_011e0e9d
  { 1, 505, 506, 7184, 7187 }, // 50 tc_ae5babd7
  { 1, 502, 503, 7187, 7190 }, // 51 tc_5deb5e47
  { 1, 500, 501, 7190, 7195 }, // 52 tc_bb831a7c
  { 1, 502, 503, 7195, 7199 }, // 53 tc_92240447
  { 1, 505, 506, 7199, 7202 }, // 54 tc_7c31e19a
  { 1, 505, 506, 7202, 7206 }, // 55 tc_d03278fd
  { 1, 505, 506, 7206, 7210 }, // 56 tc_65cbd974
  { 1, 502, 503, 7210, 7213 }, // 57 tc_934753bb
  { 1, 505, 506, 7213, 7216 }, // 58 ST_tc_st_SLOT01
  { 1, 519, 521, 7216, 7220 }, // 59 CVI_VA
  { 1, 521, 523, 7220, 7224 }, // 60 tc_f175e046
  { 1, 521, 523, 7224, 7229 }, // 61 tc_4942646a
  { 1, 507, 509, 7229, 7231 }, // 62 tc_0ec46cf9
  { 1, 509, 511, 7231, 7232 }, // 63 tc_718b5c53
  { 1, 523, 527, 0, 0 }, // 64 CVI_GATHER_PSEUDO
  { 1, 502, 503, 7232, 7233 }, // 65 tc_d45ba9cd
  { 1, 501, 502, 7233, 7236 }, // 66 tc_388f9897
  { 1, 501, 502, 7236, 7238 }, // 67 tc_9124c04f
  { 1, 501, 502, 7238, 7241 }, // 68 tc_4ac61d92
  { 1, 505, 506, 7241, 7243 }, // 69 tc_aee6250c
  { 1, 505, 506, 7243, 7246 }, // 70 tc_eed07714
  { 1, 505, 506, 7246, 7249 }, // 71 tc_74a42bda
  { 1, 505, 506, 7249, 7252 }, // 72 tc_a9edeffa
  { 1, 505, 506, 7252, 7255 }, // 73 tc_838c4d7a
  { 1, 500, 501, 7255, 7257 }, // 74 tc_d61dfdc3
  { 1, 500, 501, 7257, 7260 }, // 75 tc_8a825db2
  { 1, 500, 501, 7260, 7263 }, // 76 tc_f34c1c21
  { 1, 501, 502, 7263, 7266 }, // 77 tc_95a33176
  { 1, 500, 501, 7266, 7268 }, // 78 tc_9f6cd987
  { 1, 501, 502, 0, 0 }, // 79 tc_b837298f
  { 1, 501, 502, 7268, 7271 }, // 80 tc_8b5bd4f5
  { 1, 501, 502, 7271, 7274 }, // 81 tc_84a7500d
  { 1, 506, 507, 7274, 7276 }, // 82 tc_7476d766
  { 1, 506, 507, 7276, 7278 }, // 83 tc_49fdfd4b
  { 1, 500, 501, 7278, 7281 }, // 84 tc_f098b237
  { 1, 500, 501, 7281, 7284 }, // 85 tc_20131976
  { 1, 500, 501, 7284, 7289 }, // 86 tc_1d41f8b7
  { 1, 500, 501, 7289, 7292 }, // 87 tc_a1297125
  { 1, 501, 502, 7292, 7293 }, // 88 tc_112d30d6
  { 1, 500, 501, 7293, 7296 }, // 89 tc_d68dca5c
  { 1, 500, 501, 7296, 7300 }, // 90 tc_788b1d09
  { 1, 500, 501, 7300, 7305 }, // 91 tc_38e0bae9
  { 1, 500, 501, 7305, 7308 }, // 92 tc_407e96f9
  { 1, 500, 501, 7308, 7312 }, // 93 tc_7401744f
  { 1, 500, 501, 7312, 7315 }, // 94 tc_9b3c0462
  { 1, 500, 501, 7315, 7317 }, // 95 tc_151bf368
  { 1, 501, 502, 7317, 7320 }, // 96 tc_9c52f549
  { 1, 500, 501, 7320, 7322 }, // 97 tc_55b33fda
  { 1, 500, 501, 7322, 7326 }, // 98 tc_6fc5dbea
  { 1, 506, 507, 7326, 7328 }, // 99 tc_3edca78f
  { 1, 500, 501, 7328, 7332 }, // 100 tc_a7a13fac
  { 1, 500, 501, 7332, 7334 }, // 101 tc_9783714b
  { 1, 500, 501, 7334, 7337 }, // 102 tc_f0e8e832
  { 1, 500, 501, 7337, 7339 }, // 103 tc_65279839
  { 1, 500, 501, 7339, 7343 }, // 104 tc_0a195f2c
  { 1, 500, 501, 7343, 7347 }, // 105 tc_01e1be3b
  { 1, 500, 501, 7347, 7350 }, // 106 tc_556f6577
  { 1, 500, 501, 7350, 7353 }, // 107 tc_02fe1c65
  { 1, 500, 501, 7353, 7357 }, // 108 tc_9e72dc89
  { 1, 500, 501, 7357, 7362 }, // 109 tc_9edb7c77
  { 1, 500, 501, 7362, 7365 }, // 110 tc_7f7f45f5
  { 1, 500, 501, 7365, 7368 }, // 111 tc_c20701f0
  { 1, 500, 501, 7368, 7372 }, // 112 tc_f7569068
  { 1, 506, 507, 7372, 7374 }, // 113 tc_fae9dfa5
  { 1, 506, 507, 7374, 7376 }, // 114 tc_6ae3426b
  { 1, 500, 501, 7376, 7378 }, // 115 tc_69bfb303
  { 1, 504, 505, 7378, 7379 }, // 116 tc_362b0be2
  { 1, 504, 505, 7379, 7381 }, // 117 tc_dc51281d
  { 1, 501, 502, 7381, 7382 }, // 118 tc_decdde8a
  { 1, 501, 502, 7382, 7384 }, // 119 tc_eeda4109
  { 1, 501, 502, 7384, 7386 }, // 120 tc_711c805f
  { 1, 504, 505, 7386, 7388 }, // 121 tc_ed03645c
  { 1, 504, 505, 7388, 7390 }, // 122 tc_42ff66ba
  { 1, 506, 507, 7390, 7392 }, // 123 tc_57a55b54
  { 1, 506, 507, 7392, 7394 }, // 124 tc_1248597c
  { 1, 506, 507, 7394, 7396 }, // 125 tc_9406230a
  { 1, 504, 505, 7396, 7397 }, // 126 tc_d57d649c
  { 1, 506, 507, 7397, 7399 }, // 127 tc_4abdbdc6
  { 1, 506, 507, 7399, 7401 }, // 128 tc_6d861a95
  { 1, 504, 505, 7401, 7402 }, // 129 tc_45f9d1be
  { 1, 502, 503, 7402, 7405 }, // 130 tc_24e109c7
  { 1, 501, 502, 7405, 7408 }, // 131 tc_9e27f2f9
  { 1, 502, 503, 7408, 7411 }, // 132 tc_f6e2aff9
  { 1, 501, 502, 7411, 7414 }, // 133 tc_24f426ab
  { 1, 502, 503, 7414, 7417 }, // 134 tc_975a4e54
  { 1, 500, 501, 7417, 7420 }, // 135 tc_5502c366
  { 1, 502, 503, 7420, 7422 }, // 136 tc_7b9187d3
  { 1, 501, 502, 7422, 7424 }, // 137 tc_f999c66e
  { 1, 505, 506, 7424, 7429 }, // 138 tc_1c7522a8
  { 1, 505, 506, 7429, 7435 }, // 139 tc_76bb5435
  { 1, 505, 506, 7435, 7437 }, // 140 tc_8a6d0d94
  { 1, 502, 503, 7437, 7439 }, // 141 tc_2471c1c8
  { 1, 502, 503, 7439, 7441 }, // 142 tc_64b00d8a
  { 1, 505, 506, 7441, 7446 }, // 143 tc_5f2afaf7
  { 1, 505, 506, 7446, 7450 }, // 144 tc_ac65613f
  { 1, 505, 506, 7450, 7455 }, // 145 tc_a32e03e7
  { 1, 505, 506, 7455, 7458 }, // 146 tc_822c3c68
  { 1, 505, 506, 7458, 7462 }, // 147 tc_abfd9a6d
  { 1, 505, 506, 7462, 7466 }, // 148 tc_bf2ffc0f
  { 1, 505, 506, 7466, 7469 }, // 149 tc_7c6d32e4
  { 1, 505, 506, 7469, 7474 }, // 150 tc_45791fb8
  { 1, 505, 506, 7474, 7479 }, // 151 tc_b7c4062a
  { 1, 505, 506, 7479, 7482 }, // 152 tc_5944960d
  { 1, 500, 501, 7482, 7486 }, // 153 tc_2c13e7f5
  { 1, 500, 501, 7486, 7490 }, // 154 tc_a154b476
  { 1, 500, 501, 7490, 7494 }, // 155 tc_a4e22bbd
  { 1, 500, 501, 7494, 7498 }, // 156 tc_503ce0f3
  { 1, 505, 506, 7498, 7500 }, // 157 tc_0655b949
  { 1, 502, 503, 7500, 7502 }, // 158 tc_6e20402a
  { 1, 502, 503, 7502, 7503 }, // 159 tc_db96aa6b
  { 1, 500, 501, 7503, 7505 }, // 160 tc_a7bdb22c
  { 1, 500, 501, 7505, 7508 }, // 161 tc_db596beb
  { 1, 500, 501, 7508, 7511 }, // 162 tc_a08b630b
  { 1, 500, 501, 7511, 7514 }, // 163 tc_1fcb8495
  { 1, 505, 506, 7514, 7519 }, // 164 tc_9edefe01
  { 1, 505, 506, 7519, 7524 }, // 165 tc_449acf79
  { 1, 502, 503, 7524, 7529 }, // 166 tc_ce59038e
  { 1, 502, 503, 7529, 7534 }, // 167 tc_f529831b
  { 1, 502, 503, 7534, 7539 }, // 168 tc_addc37a8
  { 1, 502, 503, 7539, 7542 }, // 169 tc_6f42bc60
  { 1, 502, 503, 7542, 7544 }, // 170 tc_7af3a37e
  { 1, 500, 501, 7544, 7546 }, // 171 tc_e3d699e3
  { 1, 505, 506, 7546, 7549 }, // 172 tc_ba9255a6
  { 1, 505, 506, 7549, 7554 }, // 173 tc_1fe4ab69
  { 1, 505, 506, 7554, 7557 }, // 174 tc_bb07f2c5
  { 1, 505, 506, 7557, 7562 }, // 175 tc_8e82e8ca
  { 1, 502, 503, 7562, 7565 }, // 176 tc_cfa0e29b
  { 1, 502, 503, 7565, 7570 }, // 177 tc_0a6c20ae
  { 1, 502, 503, 7570, 7573 }, // 178 tc_0fac1eb8
  { 1, 502, 503, 7573, 7578 }, // 179 tc_829d8a86
  { 1, 505, 506, 7578, 7582 }, // 180 tc_280f7fe1
  { 1, 505, 506, 7582, 7586 }, // 181 tc_887d1bb7
  { 1, 502, 503, 7586, 7590 }, // 182 tc_96ef76ef
  { 1, 502, 503, 7590, 7594 }, // 183 tc_55a9a350
  { 1, 500, 501, 7594, 7598 }, // 184 tc_f0cdeccf
  { 1, 500, 501, 7598, 7603 }, // 185 tc_a38c45dc
  { 1, 500, 501, 7603, 7605 }, // 186 tc_d3632d88
  { 1, 500, 501, 7605, 7609 }, // 187 tc_5e4cf0e8
  { 1, 500, 501, 7609, 7611 }, // 188 tc_ef921005
  { 1, 505, 506, 7611, 7614 }, // 189 tc_5b347363
  { 1, 505, 506, 7614, 7616 }, // 190 tc_3d14a17b
  { 1, 505, 506, 7616, 7617 }, // 191 tc_3fbf1042
  { 1, 505, 506, 7617, 7618 }, // 192 tc_63567288
  { 1, 505, 506, 7618, 7620 }, // 193 tc_59a7822c
  { 1, 505, 506, 0, 0 }, // 194 tc_937dd41c
  { 1, 502, 503, 0, 0 }, // 195 tc_a4ee89db
  { 1, 502, 503, 0, 0 }, // 196 tc_c818ff7f
  { 1, 502, 503, 7620, 7621 }, // 197 tc_1242dc2a
  { 1, 505, 506, 7621, 7623 }, // 198 tc_44d5a428
  { 1, 527, 529, 7623, 7626 }, // 199 tc_540c3da3
  { 1, 521, 523, 7626, 7628 }, // 200 tc_c4edf264
  { 1, 529, 531, 7628, 7630 }, // 201 tc_5bf8afbb
  { 1, 531, 533, 7630, 7634 }, // 202 tc_2b4c548e
  { 1, 531, 533, 7634, 7639 }, // 203 tc_bb599486
  { 1, 533, 537, 7639, 7642 }, // 204 tc_a7e6707d
  { 1, 533, 537, 7642, 7646 }, // 205 tc_3c56e5ce
  { 1, 511, 514, 7646, 7650 }, // 206 tc_abe8c3b2
  { 1, 511, 514, 7650, 7655 }, // 207 tc_453fe68d
  { 1, 511, 514, 7655, 7659 }, // 208 tc_1ba8a0cd
  { 1, 537, 539, 7659, 7662 }, // 209 tc_52447ecc
  { 1, 537, 539, 7662, 7666 }, // 210 tc_3904b926
  { 1, 537, 539, 7666, 7671 }, // 211 tc_b9db8205
  { 1, 537, 539, 7671, 7675 }, // 212 tc_663c80a7
  { 1, 539, 543, 7675, 7678 }, // 213 tc_f21e8abb
  { 1, 539, 543, 7678, 7682 }, // 214 tc_131f1c81
  { 1, 539, 543, 7682, 7687 }, // 215 tc_c7039829
  { 1, 539, 543, 7687, 7691 }, // 216 tc_e2d2e9e5
  { 1, 543, 545, 7691, 7694 }, // 217 tc_ab23f776
  { 1, 543, 545, 7694, 7698 }, // 218 tc_7177e272
  { 1, 543, 545, 7698, 7703 }, // 219 tc_e99d4c2e
  { 1, 543, 545, 7703, 7707 }, // 220 tc_6942b6e0
  { 1, 516, 519, 7707, 7711 }, // 221 tc_a02a10a8
  { 1, 516, 519, 7711, 7716 }, // 222 tc_54a0dc47
  { 1, 516, 519, 7716, 7720 }, // 223 tc_447d9895
  { 1, 516, 519, 7720, 7725 }, // 224 tc_191381c1
  { 1, 516, 519, 7725, 7729 }, // 225 tc_3e2aaafc
  { 1, 543, 545, 7729, 7731 }, // 226 tc_3ce09744
  { 1, 543, 545, 7731, 7734 }, // 227 tc_20a4bbec
  { 1, 521, 523, 7734, 7736 }, // 228 tc_5cdf8c84
  { 1, 521, 523, 7736, 7739 }, // 229 tc_c127de3a
  { 1, 545, 547, 7739, 7742 }, // 230 tc_05ca8cfd
  { 1, 531, 533, 7742, 7745 }, // 231 tc_d8287c14
  { 1, 507, 509, 7745, 7749 }, // 232 tc_257f6f7c
  { 1, 507, 509, 7749, 7754 }, // 233 tc_7e6a3e89
  { 1, 507, 509, 7754, 7758 }, // 234 tc_e35c1e93
  { 1, 531, 533, 7758, 7762 }, // 235 tc_08a4f1b6
  { 1, 529, 531, 7762, 7766 }, // 236 tc_56e64202
  { 1, 521, 523, 7766, 7769 }, // 237 tc_ac4046bc
  { 1, 521, 523, 7769, 7773 }, // 238 tc_2e8f5f6e
  { 1, 545, 547, 7773, 7776 }, // 239 tc_7417e785
  { 1, 545, 547, 7776, 7780 }, // 240 tc_309dbb4f
  { 1, 547, 549, 7780, 7784 }, // 241 tc_df80eeb0
  { 1, 545, 547, 7784, 7788 }, // 242 tc_16ff9ef8
  { 1, 501, 502, 7788, 7790 }, // 243 tc_2120355e
  { 1, 545, 547, 7790, 7792 }, // 244 tc_51d0ecc3
  { 1, 501, 502, 7792, 7795 }, // 245 tc_aa047364
  { 1, 521, 523, 7795, 7797 }, // 246 tc_3c8c15d0
  { 1, 531, 533, 7797, 7799 }, // 247 tc_0afc8be9
  { 1, 547, 549, 7799, 7804 }, // 248 tc_561aaa58
  { 1, 529, 531, 7804, 7806 }, // 249 tc_946013d8
  { 1, 529, 531, 7806, 7809 }, // 250 tc_46d6c3e0
  { 1, 547, 549, 7809, 7813 }, // 251 tc_87adc037
  { 1, 521, 523, 7813, 7817 }, // 252 tc_a19b9305
  { 1, 521, 523, 7817, 7820 }, // 253 tc_649072c2
  { 1, 521, 523, 7820, 7824 }, // 254 tc_b091f1c6
  { 1, 531, 533, 7824, 7827 }, // 255 tc_0b04c6c7
  { 1, 531, 533, 7827, 7831 }, // 256 tc_660769f1
  { 1, 521, 523, 7831, 7834 }, // 257 tc_dcca380f
  { 1, 521, 523, 7834, 7838 }, // 258 tc_72e2b393
  { 1, 521, 523, 7838, 7841 }, // 259 tc_73efe966
  { 1, 521, 523, 7841, 7844 }, // 260 tc_cda936da
  { 1, 511, 514, 7844, 7847 }, // 261 tc_a28f32b5
  { 1, 511, 514, 7847, 7851 }, // 262 tc_7d68d5c2
  { 1, 549, 552, 7851, 7854 }, // 263 tc_7095ecba
  { 1, 549, 552, 7854, 7858 }, // 264 tc_a69eeee1
  { 1, 552, 554, 0, 0 }, // 265 tc_1381a97c
  { 1, 552, 554, 7858, 7859 }, // 266 tc_e3f68a46
  { 1, 554, 556, 7859, 7862 }, // 267 tc_f1de44ef
  { 1, 547, 549, 7862, 7867 }, // 268 tc_9d1dc972
  { 1, 554, 556, 7867, 7871 }, // 269 tc_90bcc1db
  { 1, 556, 559, 7871, 7874 }, // 270 tc_cd94bfe0
  { 1, 556, 559, 7874, 7878 }, // 271 tc_15fdf750
  { 1, 531, 533, 7878, 7882 }, // 272 tc_1ad8a370
  { 1, 531, 533, 7882, 7887 }, // 273 tc_e675c45a
  { 1, 521, 523, 7887, 7891 }, // 274 tc_37820f4c
  { 1, 559, 561, 7891, 7894 }, // 275 tc_61bf7c03
  { 1, 559, 561, 7894, 7898 }, // 276 tc_933f2b39
  { 1, 559, 561, 7898, 7902 }, // 277 tc_26a377fe
  { 1, 559, 561, 7902, 7907 }, // 278 tc_2d4051cd
  { 1, 529, 531, 7907, 7910 }, // 279 tc_6e7fa133
  { 1, 507, 509, 7910, 7913 }, // 280 tc_8772086c
  { 1, 509, 511, 7913, 7915 }, // 281 tc_b4416217
  { 1, 516, 519, 7915, 7919 }, // 282 tc_9f363d21
  { 1, 516, 519, 7919, 7924 }, // 283 tc_8e420e4d
  { 1, 561, 564, 7924, 7928 }, // 284 tc_7273323b
  { 1, 561, 564, 7928, 7933 }, // 285 tc_58d21193
  { 1, 509, 511, 7933, 7937 }, // 286 tc_71646d06
  { 1, 547, 549, 7937, 7939 }, // 287 tc_04da405a
  { 1, 547, 549, 7939, 7942 }, // 288 tc_2c745bb8
  { 1, 552, 554, 7942, 7943 }, // 289 tc_b28e51aa
  { 1, 552, 554, 7943, 7945 }, // 290 tc_767c4e9d
  { 1, 564, 566, 7945, 7947 }, // 291 tc_e699ae41
  { 1, 564, 566, 7947, 7950 }, // 292 tc_a0dbea28
  { 1, 564, 566, 7950, 7953 }, // 293 tc_dd5b0695
  { 1, 564, 566, 7953, 7957 }, // 294 tc_3ad719fb
  { 1, 502, 503, 0, 0 }, // 295 tc_77f94a5e
  { 1, 506, 507, 0, 0 }, // 296 tc_55255f2b
  { 1, 502, 503, 7957, 7958 }, // 297 tc_b1ae5f67
  { 1, 502, 503, 7958, 7960 }, // 298 tc_2237d952
  { 1, 504, 505, 7960, 7961 }, // 299 tc_0ba0d5da
  { 1, 504, 505, 0, 0 }, // 300 tc_9b34f5e0
  { 1, 506, 507, 7961, 7962 }, // 301 tc_2c3e17fc
  { 1, 502, 503, 7962, 7964 }, // 302 tc_a3070909
  { 1, 506, 507, 7964, 7965 }, // 303 tc_d7718fbe
  { 1, 506, 507, 7965, 7967 }, // 304 tc_28e55c6f
  { 1, 502, 503, 7967, 7968 }, // 305 tc_4bf903b0
  { 0, 0, 0, 0, 0 }, // 306 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry HexagonWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // HexagonWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry HexagonWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // HexagonWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry HexagonReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // HexagonReadAdvanceTable

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

static const llvm::MCSchedModel HexagonModelV60 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  1, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV60,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV5 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  2, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV5,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV55 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  3, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV55,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV62 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  4, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV62,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV65 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  5, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV65,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV66 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  6, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV66,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV67 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  7, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV67,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV67T = {
  3, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  8, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV67T,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV68 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  9, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV68,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV69 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  10, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV69,
  nullptr // No extra processor descriptor
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetSubTypeKV HexagonSubTypeKV[] = {
 { "generic", { { { 0xb73800007ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV60 },
 { "hexagonv5", { { { 0xb73800001ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV5 },
 { "hexagonv55", { { { 0xb73800003ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV55 },
 { "hexagonv60", { { { 0xb73800007ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV60 },
 { "hexagonv62", { { { 0xb7380000fULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV62 },
 { "hexagonv65", { { { 0x97b80001fULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV65 },
 { "hexagonv66", { { { 0x97b80003fULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV66 },
 { "hexagonv67", { { { 0x97b80007fULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV67 },
 { "hexagonv67t", { { { 0x295900027fULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV67T },
 { "hexagonv68", { { { 0x97b8000ffULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV68 },
 { "hexagonv69", { { { 0x97b8001ffULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV69 },
};

namespace Hexagon_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass,
    const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID) {
  // Don't know how to resolve this scheduling class.
  return 0;
}
} // end namespace Hexagon_MC

struct HexagonGenMCSubtargetInfo : public MCSubtargetInfo {
  HexagonGenMCSubtargetInfo(const Triple &TT,
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
    return Hexagon_MC::resolveVariantSchedClassImpl(SchedClass, MI, MCII, CPUID);
  }
  unsigned getHwMode() const override;
};
unsigned HexagonGenMCSubtargetInfo::getHwMode() const {
  if (checkFeatures("+hvx-length128b")) return 1;
  if (checkFeatures("+hvx-length64b")) return 2;
  return 0;
}

static inline MCSubtargetInfo *createHexagonMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef TuneCPU, StringRef FS) {
  return new HexagonGenMCSubtargetInfo(TT, CPU, TuneCPU, FS, HexagonFeatureKV, HexagonSubTypeKV, 
                      HexagonWriteProcResTable, HexagonWriteLatencyTable, HexagonReadAdvanceTable, 
                      HexagonStages, HexagonOperandCycles, HexagonForwardingPaths);
}

} // end namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::HexagonSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef TuneCPU, StringRef FS) {
  LLVM_DEBUG(dbgs() << "\nFeatures:" << FS);
  LLVM_DEBUG(dbgs() << "\nCPU:" << CPU);
  LLVM_DEBUG(dbgs() << "\nTuneCPU:" << TuneCPU << "\n\n");
  InitMCProcessorInfo(CPU, TuneCPU, FS);
  const FeatureBitset &Bits = getFeatureBits();
  if (Bits[Hexagon::ArchV5] && HexagonArchVersion < Hexagon::ArchEnum::V5) HexagonArchVersion = Hexagon::ArchEnum::V5;
  if (Bits[Hexagon::ArchV55] && HexagonArchVersion < Hexagon::ArchEnum::V55) HexagonArchVersion = Hexagon::ArchEnum::V55;
  if (Bits[Hexagon::ArchV60] && HexagonArchVersion < Hexagon::ArchEnum::V60) HexagonArchVersion = Hexagon::ArchEnum::V60;
  if (Bits[Hexagon::ArchV62] && HexagonArchVersion < Hexagon::ArchEnum::V62) HexagonArchVersion = Hexagon::ArchEnum::V62;
  if (Bits[Hexagon::ArchV65] && HexagonArchVersion < Hexagon::ArchEnum::V65) HexagonArchVersion = Hexagon::ArchEnum::V65;
  if (Bits[Hexagon::ArchV66] && HexagonArchVersion < Hexagon::ArchEnum::V66) HexagonArchVersion = Hexagon::ArchEnum::V66;
  if (Bits[Hexagon::ArchV67] && HexagonArchVersion < Hexagon::ArchEnum::V67) HexagonArchVersion = Hexagon::ArchEnum::V67;
  if (Bits[Hexagon::ArchV68] && HexagonArchVersion < Hexagon::ArchEnum::V68) HexagonArchVersion = Hexagon::ArchEnum::V68;
  if (Bits[Hexagon::ArchV69] && HexagonArchVersion < Hexagon::ArchEnum::V69) HexagonArchVersion = Hexagon::ArchEnum::V69;
  if (Bits[Hexagon::ExtensionAudio]) UseAudioOps = true;
  if (Bits[Hexagon::ExtensionHVX] && HexagonHVXVersion < Hexagon::ArchEnum::V60) HexagonHVXVersion = Hexagon::ArchEnum::V60;
  if (Bits[Hexagon::ExtensionHVX64B]) UseHVX64BOps = true;
  if (Bits[Hexagon::ExtensionHVX128B]) UseHVX128BOps = true;
  if (Bits[Hexagon::ExtensionHVXIEEEFP]) UseHVXIEEEFPOps = true;
  if (Bits[Hexagon::ExtensionHVXQFloat]) UseHVXQFloatOps = true;
  if (Bits[Hexagon::ExtensionHVXV60] && HexagonHVXVersion < Hexagon::ArchEnum::V60) HexagonHVXVersion = Hexagon::ArchEnum::V60;
  if (Bits[Hexagon::ExtensionHVXV62] && HexagonHVXVersion < Hexagon::ArchEnum::V62) HexagonHVXVersion = Hexagon::ArchEnum::V62;
  if (Bits[Hexagon::ExtensionHVXV65] && HexagonHVXVersion < Hexagon::ArchEnum::V65) HexagonHVXVersion = Hexagon::ArchEnum::V65;
  if (Bits[Hexagon::ExtensionHVXV66] && HexagonHVXVersion < Hexagon::ArchEnum::V66) HexagonHVXVersion = Hexagon::ArchEnum::V66;
  if (Bits[Hexagon::ExtensionHVXV67] && HexagonHVXVersion < Hexagon::ArchEnum::V67) HexagonHVXVersion = Hexagon::ArchEnum::V67;
  if (Bits[Hexagon::ExtensionHVXV68] && HexagonHVXVersion < Hexagon::ArchEnum::V68) HexagonHVXVersion = Hexagon::ArchEnum::V68;
  if (Bits[Hexagon::ExtensionHVXV69] && HexagonHVXVersion < Hexagon::ArchEnum::V69) HexagonHVXVersion = Hexagon::ArchEnum::V69;
  if (Bits[Hexagon::ExtensionZReg]) UseZRegOps = true;
  if (Bits[Hexagon::FeatureCabac]) UseCabac = false;
  if (Bits[Hexagon::FeatureCompound]) UseCompound = true;
  if (Bits[Hexagon::FeatureDuplex]) EnableDuplex = true;
  if (Bits[Hexagon::FeatureLongCalls]) UseLongCalls = true;
  if (Bits[Hexagon::FeatureMemNoShuf]) HasMemNoShuf = false;
  if (Bits[Hexagon::FeatureMemops]) UseMemops = true;
  if (Bits[Hexagon::FeatureNVJ]) UseNewValueJumps = true;
  if (Bits[Hexagon::FeatureNVS]) UseNewValueStores = true;
  if (Bits[Hexagon::FeatureNoreturnStackElim]) NoreturnStackElim = true;
  if (Bits[Hexagon::FeaturePackets]) UsePackets = true;
  if (Bits[Hexagon::FeaturePreV65]) HasPreV65 = true;
  if (Bits[Hexagon::FeatureReservedR19]) ReservedR19 = true;
  if (Bits[Hexagon::FeatureSmallData]) UseSmallData = true;
  if (Bits[Hexagon::FeatureUnsafeFP]) UseUnsafeMath = true;
  if (Bits[Hexagon::ProcTinyCore] && HexagonProcFamily < TinyCore) HexagonProcFamily = TinyCore;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
namespace Hexagon_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass, const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID);
} // end namespace Hexagon_MC

struct HexagonGenSubtargetInfo : public TargetSubtargetInfo {
  explicit HexagonGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef TuneCPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass,  const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const override;
  unsigned resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID) const override;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
  unsigned getHwMode() const override;
};
} // end namespace llvm

#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR

#include "llvm/CodeGen/TargetSchedule.h"

namespace llvm {
extern const llvm::SubtargetFeatureKV HexagonFeatureKV[];
extern const llvm::SubtargetSubTypeKV HexagonSubTypeKV[];
extern const llvm::MCWriteProcResEntry HexagonWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry HexagonWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry HexagonReadAdvanceTable[];
extern const llvm::InstrStage HexagonStages[];
extern const unsigned HexagonOperandCycles[];
extern const unsigned HexagonForwardingPaths[];
HexagonGenSubtargetInfo::HexagonGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef TuneCPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, TuneCPU, FS, makeArrayRef(HexagonFeatureKV, 38), makeArrayRef(HexagonSubTypeKV, 11), 
                        HexagonWriteProcResTable, HexagonWriteLatencyTable, HexagonReadAdvanceTable, 
                        HexagonStages, HexagonOperandCycles, HexagonForwardingPaths) {}

unsigned HexagonGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // HexagonGenSubtargetInfo::resolveSchedClass

unsigned HexagonGenSubtargetInfo
::resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID) const {
  return Hexagon_MC::resolveVariantSchedClassImpl(SchedClass, MI, MCII, CPUID);
} // HexagonGenSubtargetInfo::resolveVariantSchedClass

unsigned HexagonGenSubtargetInfo::getHwMode() const {
  if (checkFeatures("+hvx-length128b")) return 1;
  if (checkFeatures("+hvx-length64b")) return 2;
  return 0;
}
} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR


#ifdef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS


#ifdef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS

