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
namespace AMDGPU {
enum {
  Feature16BitInsts = 0,
  Feature64BitDPP = 1,
  FeatureAddNoCarryInsts = 2,
  FeatureApertureRegs = 3,
  FeatureArchitectedFlatScratch = 4,
  FeatureAtomicFaddNoRtnInsts = 5,
  FeatureAtomicFaddRtnInsts = 6,
  FeatureAtomicPkFaddNoRtnInsts = 7,
  FeatureAutoWaitcntBeforeBarrier = 8,
  FeatureCIInsts = 9,
  FeatureCuMode = 10,
  FeatureDLInsts = 11,
  FeatureDPP = 12,
  FeatureDPP8 = 13,
  FeatureDisable = 14,
  FeatureDot1Insts = 15,
  FeatureDot2Insts = 16,
  FeatureDot3Insts = 17,
  FeatureDot4Insts = 18,
  FeatureDot5Insts = 19,
  FeatureDot6Insts = 20,
  FeatureDot7Insts = 21,
  FeatureDot8Insts = 22,
  FeatureDsSrc2Insts = 23,
  FeatureDumpCode = 24,
  FeatureDumpCodeLower = 25,
  FeatureEnableDS128 = 26,
  FeatureEnableFlatScratch = 27,
  FeatureEnableLoadStoreOpt = 28,
  FeatureEnablePRTStrictNull = 29,
  FeatureEnableSIScheduler = 30,
  FeatureEnableUnsafeDSOffsetFolding = 31,
  FeatureExtendedImageInsts = 32,
  FeatureFMA = 33,
  FeatureFP8Insts = 34,
  FeatureFP64 = 35,
  FeatureFastDenormalF32 = 36,
  FeatureFastFMAF32 = 37,
  FeatureFlatAddressSpace = 38,
  FeatureFlatForGlobal = 39,
  FeatureFlatGlobalInsts = 40,
  FeatureFlatInstOffsets = 41,
  FeatureFlatScratchInsts = 42,
  FeatureFlatSegmentOffsetBug = 43,
  FeatureFmaMixInsts = 44,
  FeatureG16 = 45,
  FeatureGCN3Encoding = 46,
  FeatureGFX7GFX8GFX9Insts = 47,
  FeatureGFX8Insts = 48,
  FeatureGFX9 = 49,
  FeatureGFX9Insts = 50,
  FeatureGFX10 = 51,
  FeatureGFX10A16 = 52,
  FeatureGFX10Insts = 53,
  FeatureGFX10_3Insts = 54,
  FeatureGFX10_AEncoding = 55,
  FeatureGFX10_BEncoding = 56,
  FeatureGFX11 = 57,
  FeatureGFX11Insts = 58,
  FeatureGFX90AInsts = 59,
  FeatureGFX940Insts = 60,
  FeatureGetWaveIdInst = 61,
  FeatureImageGather4D16Bug = 62,
  FeatureImageInsts = 63,
  FeatureImageStoreD16Bug = 64,
  FeatureInstFwdPrefetchBug = 65,
  FeatureIntClamp = 66,
  FeatureInv2PiInlineImm = 67,
  FeatureLDSBankCount16 = 68,
  FeatureLDSBankCount32 = 69,
  FeatureLdsBranchVmemWARHazard = 70,
  FeatureLdsMisalignedBug = 71,
  FeatureLocalMemorySize32768 = 72,
  FeatureLocalMemorySize65536 = 73,
  FeatureMAIInsts = 74,
  FeatureMFMAInlineLiteralBug = 75,
  FeatureMIMG_R128 = 76,
  FeatureMadMacF32Insts = 77,
  FeatureMadMixInsts = 78,
  FeatureMaxPrivateElementSize4 = 79,
  FeatureMaxPrivateElementSize8 = 80,
  FeatureMaxPrivateElementSize16 = 81,
  FeatureMovrel = 82,
  FeatureNSAClauseBug = 83,
  FeatureNSAEncoding = 84,
  FeatureNSAMaxSize5 = 85,
  FeatureNSAMaxSize13 = 86,
  FeatureNSAtoVMEMBug = 87,
  FeatureNegativeScratchOffsetBug = 88,
  FeatureNegativeUnalignedScratchOffsetBug = 89,
  FeatureNoDataDepHazard = 90,
  FeatureNoSdstCMPX = 91,
  FeatureOffset3fBug = 92,
  FeaturePackedFP32Ops = 93,
  FeaturePackedTID = 94,
  FeaturePkFmacF16Inst = 95,
  FeaturePromoteAlloca = 96,
  FeatureR128A16 = 97,
  FeatureSDWA = 98,
  FeatureSDWAMac = 99,
  FeatureSDWAOmod = 100,
  FeatureSDWAOutModsVOPC = 101,
  FeatureSDWAScalar = 102,
  FeatureSDWASdst = 103,
  FeatureSGPRInitBug = 104,
  FeatureSMEMtoVectorWriteHazard = 105,
  FeatureSMemRealTime = 106,
  FeatureSMemTimeInst = 107,
  FeatureSRAMECC = 108,
  FeatureScalarAtomics = 109,
  FeatureScalarFlatScratchInsts = 110,
  FeatureScalarStores = 111,
  FeatureSeaIslands = 112,
  FeatureShaderCyclesRegister = 113,
  FeatureSouthernIslands = 114,
  FeatureSupportsSRAMECC = 115,
  FeatureSupportsXNACK = 116,
  FeatureTgSplit = 117,
  FeatureTrapHandler = 118,
  FeatureTrigReducedRange = 119,
  FeatureTrue16BitInsts = 120,
  FeatureUnalignedAccessMode = 121,
  FeatureUnalignedBufferAccess = 122,
  FeatureUnalignedDSAccess = 123,
  FeatureUnalignedScratchAccess = 124,
  FeatureUnpackedD16VMem = 125,
  FeatureUserSGPRInit16Bug = 126,
  FeatureVGPRIndexMode = 127,
  FeatureVMEMtoScalarWriteHazard = 128,
  FeatureVOP3Literal = 129,
  FeatureVOP3P = 130,
  FeatureVOPD = 131,
  FeatureVcmpxExecWARHazard = 132,
  FeatureVcmpxPermlaneHazard = 133,
  FeatureVolcanicIslands = 134,
  FeatureVscnt = 135,
  FeatureWavefrontSize16 = 136,
  FeatureWavefrontSize32 = 137,
  FeatureWavefrontSize64 = 138,
  FeatureXNACK = 139,
  FullRate64Ops = 140,
  HalfRate64Ops = 141,
  NumSubtargetFeatures = 142
};
} // end namespace AMDGPU
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MACRO
GET_SUBTARGETINFO_MACRO(FeatureDisable, false, featureDisable)
GET_SUBTARGETINFO_MACRO(Has16BitInsts, false, has16BitInsts)
GET_SUBTARGETINFO_MACRO(DumpCode, false, dumpCode)
GET_SUBTARGETINFO_MACRO(HasGFX10A16, false, hasGFX10A16)
GET_SUBTARGETINFO_MACRO(AddNoCarryInsts, false, addNoCarryInsts)
GET_SUBTARGETINFO_MACRO(HasApertureRegs, false, hasApertureRegs)
GET_SUBTARGETINFO_MACRO(HasArchitectedFlatScratch, false, hasArchitectedFlatScratch)
GET_SUBTARGETINFO_MACRO(HasAtomicFaddNoRtnInsts, false, hasAtomicFaddNoRtnInsts)
GET_SUBTARGETINFO_MACRO(HasAtomicFaddRtnInsts, false, hasAtomicFaddRtnInsts)
GET_SUBTARGETINFO_MACRO(HasAtomicPkFaddNoRtnInsts, false, hasAtomicPkFaddNoRtnInsts)
GET_SUBTARGETINFO_MACRO(AutoWaitcntBeforeBarrier, false, autoWaitcntBeforeBarrier)
GET_SUBTARGETINFO_MACRO(CIInsts, false, cIInsts)
GET_SUBTARGETINFO_MACRO(EnableCuMode, false, enableCuMode)
GET_SUBTARGETINFO_MACRO(HasDLInsts, false, hasDLInsts)
GET_SUBTARGETINFO_MACRO(HasDot1Insts, false, hasDot1Insts)
GET_SUBTARGETINFO_MACRO(HasDot2Insts, false, hasDot2Insts)
GET_SUBTARGETINFO_MACRO(HasDot3Insts, false, hasDot3Insts)
GET_SUBTARGETINFO_MACRO(HasDot4Insts, false, hasDot4Insts)
GET_SUBTARGETINFO_MACRO(HasDot5Insts, false, hasDot5Insts)
GET_SUBTARGETINFO_MACRO(HasDot6Insts, false, hasDot6Insts)
GET_SUBTARGETINFO_MACRO(HasDot7Insts, false, hasDot7Insts)
GET_SUBTARGETINFO_MACRO(HasDot8Insts, false, hasDot8Insts)
GET_SUBTARGETINFO_MACRO(HasDPP, false, hasDPP)
GET_SUBTARGETINFO_MACRO(Has64BitDPP, false, has64BitDPP)
GET_SUBTARGETINFO_MACRO(HasDPP8, false, hasDPP8)
GET_SUBTARGETINFO_MACRO(HasDsSrc2Insts, false, hasDsSrc2Insts)
GET_SUBTARGETINFO_MACRO(DumpCode, false, dumpCode)
GET_SUBTARGETINFO_MACRO(EnableDS128, false, enableDS128)
GET_SUBTARGETINFO_MACRO(EnableFlatScratch, false, enableFlatScratch)
GET_SUBTARGETINFO_MACRO(EnablePRTStrictNull, false, enablePRTStrictNull)
GET_SUBTARGETINFO_MACRO(HasExtendedImageInsts, false, hasExtendedImageInsts)
GET_SUBTARGETINFO_MACRO(FastDenormalF32, false, fastDenormalF32)
GET_SUBTARGETINFO_MACRO(FastFMAF32, false, fastFMAF32)
GET_SUBTARGETINFO_MACRO(FlatAddressSpace, false, flatAddressSpace)
GET_SUBTARGETINFO_MACRO(FlatForGlobal, false, flatForGlobal)
GET_SUBTARGETINFO_MACRO(FlatGlobalInsts, false, flatGlobalInsts)
GET_SUBTARGETINFO_MACRO(FlatInstOffsets, false, flatInstOffsets)
GET_SUBTARGETINFO_MACRO(FlatScratchInsts, false, flatScratchInsts)
GET_SUBTARGETINFO_MACRO(HasFlatSegmentOffsetBug, false, hasFlatSegmentOffsetBug)
GET_SUBTARGETINFO_MACRO(HasFmaMixInsts, false, hasFmaMixInsts)
GET_SUBTARGETINFO_MACRO(FMA, false, fMA)
GET_SUBTARGETINFO_MACRO(FP64, false, fP64)
GET_SUBTARGETINFO_MACRO(HasFP8Insts, false, hasFP8Insts)
GET_SUBTARGETINFO_MACRO(FullRate64Ops, false, fullRate64Ops)
GET_SUBTARGETINFO_MACRO(HasG16, false, hasG16)
GET_SUBTARGETINFO_MACRO(GCN3Encoding, false, gCN3Encoding)
GET_SUBTARGETINFO_MACRO(HasGetWaveIdInst, false, hasGetWaveIdInst)
GET_SUBTARGETINFO_MACRO(GFX10_3Insts, false, gFX10_3Insts)
GET_SUBTARGETINFO_MACRO(GFX10Insts, false, gFX10Insts)
GET_SUBTARGETINFO_MACRO(GFX10_AEncoding, false, gFX10_AEncoding)
GET_SUBTARGETINFO_MACRO(GFX10_BEncoding, false, gFX10_BEncoding)
GET_SUBTARGETINFO_MACRO(GFX11Insts, false, gFX11Insts)
GET_SUBTARGETINFO_MACRO(GFX7GFX8GFX9Insts, false, gFX7GFX8GFX9Insts)
GET_SUBTARGETINFO_MACRO(GFX8Insts, false, gFX8Insts)
GET_SUBTARGETINFO_MACRO(GFX9Insts, false, gFX9Insts)
GET_SUBTARGETINFO_MACRO(GFX90AInsts, false, gFX90AInsts)
GET_SUBTARGETINFO_MACRO(GFX940Insts, false, gFX940Insts)
GET_SUBTARGETINFO_MACRO(HalfRate64Ops, false, halfRate64Ops)
GET_SUBTARGETINFO_MACRO(HasImageGather4D16Bug, false, hasImageGather4D16Bug)
GET_SUBTARGETINFO_MACRO(HasImageInsts, false, hasImageInsts)
GET_SUBTARGETINFO_MACRO(HasImageStoreD16Bug, false, hasImageStoreD16Bug)
GET_SUBTARGETINFO_MACRO(HasInstFwdPrefetchBug, false, hasInstFwdPrefetchBug)
GET_SUBTARGETINFO_MACRO(HasIntClamp, false, hasIntClamp)
GET_SUBTARGETINFO_MACRO(HasInv2PiInlineImm, false, hasInv2PiInlineImm)
GET_SUBTARGETINFO_MACRO(HasLdsBranchVmemWARHazard, false, hasLdsBranchVmemWARHazard)
GET_SUBTARGETINFO_MACRO(LDSMisalignedBug, false, lDSMisalignedBug)
GET_SUBTARGETINFO_MACRO(EnableLoadStoreOpt, false, enableLoadStoreOpt)
GET_SUBTARGETINFO_MACRO(HasMadMacF32Insts, false, hasMadMacF32Insts)
GET_SUBTARGETINFO_MACRO(HasMadMixInsts, false, hasMadMixInsts)
GET_SUBTARGETINFO_MACRO(HasMAIInsts, false, hasMAIInsts)
GET_SUBTARGETINFO_MACRO(HasMFMAInlineLiteralBug, false, hasMFMAInlineLiteralBug)
GET_SUBTARGETINFO_MACRO(MIMG_R128, false, mIMG_R128)
GET_SUBTARGETINFO_MACRO(HasMovrel, false, hasMovrel)
GET_SUBTARGETINFO_MACRO(NegativeScratchOffsetBug, false, negativeScratchOffsetBug)
GET_SUBTARGETINFO_MACRO(NegativeUnalignedScratchOffsetBug, false, negativeUnalignedScratchOffsetBug)
GET_SUBTARGETINFO_MACRO(HasNoDataDepHazard, false, hasNoDataDepHazard)
GET_SUBTARGETINFO_MACRO(HasNoSdstCMPX, false, hasNoSdstCMPX)
GET_SUBTARGETINFO_MACRO(HasNSAClauseBug, false, hasNSAClauseBug)
GET_SUBTARGETINFO_MACRO(HasNSAEncoding, false, hasNSAEncoding)
GET_SUBTARGETINFO_MACRO(HasNSAtoVMEMBug, false, hasNSAtoVMEMBug)
GET_SUBTARGETINFO_MACRO(HasOffset3fBug, false, hasOffset3fBug)
GET_SUBTARGETINFO_MACRO(HasPackedFP32Ops, false, hasPackedFP32Ops)
GET_SUBTARGETINFO_MACRO(HasPackedTID, false, hasPackedTID)
GET_SUBTARGETINFO_MACRO(HasPkFmacF16Inst, false, hasPkFmacF16Inst)
GET_SUBTARGETINFO_MACRO(EnablePromoteAlloca, false, enablePromoteAlloca)
GET_SUBTARGETINFO_MACRO(HasR128A16, false, hasR128A16)
GET_SUBTARGETINFO_MACRO(HasSMemRealTime, false, hasSMemRealTime)
GET_SUBTARGETINFO_MACRO(HasSMemTimeInst, false, hasSMemTimeInst)
GET_SUBTARGETINFO_MACRO(HasScalarAtomics, false, hasScalarAtomics)
GET_SUBTARGETINFO_MACRO(ScalarFlatScratchInsts, false, scalarFlatScratchInsts)
GET_SUBTARGETINFO_MACRO(HasScalarStores, false, hasScalarStores)
GET_SUBTARGETINFO_MACRO(HasSDWA, false, hasSDWA)
GET_SUBTARGETINFO_MACRO(HasSDWAMac, false, hasSDWAMac)
GET_SUBTARGETINFO_MACRO(HasSDWAOmod, false, hasSDWAOmod)
GET_SUBTARGETINFO_MACRO(HasSDWAOutModsVOPC, false, hasSDWAOutModsVOPC)
GET_SUBTARGETINFO_MACRO(HasSDWAScalar, false, hasSDWAScalar)
GET_SUBTARGETINFO_MACRO(HasSDWASdst, false, hasSDWASdst)
GET_SUBTARGETINFO_MACRO(SGPRInitBug, false, sGPRInitBug)
GET_SUBTARGETINFO_MACRO(HasShaderCyclesRegister, false, hasShaderCyclesRegister)
GET_SUBTARGETINFO_MACRO(EnableSIScheduler, false, enableSIScheduler)
GET_SUBTARGETINFO_MACRO(HasSMEMtoVectorWriteHazard, false, hasSMEMtoVectorWriteHazard)
GET_SUBTARGETINFO_MACRO(EnableSRAMECC, false, enableSRAMECC)
GET_SUBTARGETINFO_MACRO(SupportsSRAMECC, false, supportsSRAMECC)
GET_SUBTARGETINFO_MACRO(EnableTgSplit, false, enableTgSplit)
GET_SUBTARGETINFO_MACRO(TrapHandler, false, trapHandler)
GET_SUBTARGETINFO_MACRO(HasTrigReducedRange, false, hasTrigReducedRange)
GET_SUBTARGETINFO_MACRO(HasTrue16BitInsts, false, hasTrue16BitInsts)
GET_SUBTARGETINFO_MACRO(UnalignedAccessMode, false, unalignedAccessMode)
GET_SUBTARGETINFO_MACRO(UnalignedBufferAccess, false, unalignedBufferAccess)
GET_SUBTARGETINFO_MACRO(UnalignedDSAccess, false, unalignedDSAccess)
GET_SUBTARGETINFO_MACRO(UnalignedScratchAccess, false, unalignedScratchAccess)
GET_SUBTARGETINFO_MACRO(HasUnpackedD16VMem, false, hasUnpackedD16VMem)
GET_SUBTARGETINFO_MACRO(EnableUnsafeDSOffsetFolding, false, enableUnsafeDSOffsetFolding)
GET_SUBTARGETINFO_MACRO(UserSGPRInit16Bug, false, userSGPRInit16Bug)
GET_SUBTARGETINFO_MACRO(HasVcmpxExecWARHazard, false, hasVcmpxExecWARHazard)
GET_SUBTARGETINFO_MACRO(HasVcmpxPermlaneHazard, false, hasVcmpxPermlaneHazard)
GET_SUBTARGETINFO_MACRO(HasVGPRIndexMode, false, hasVGPRIndexMode)
GET_SUBTARGETINFO_MACRO(HasVMEMtoScalarWriteHazard, false, hasVMEMtoScalarWriteHazard)
GET_SUBTARGETINFO_MACRO(HasVOP3Literal, false, hasVOP3Literal)
GET_SUBTARGETINFO_MACRO(HasVOP3PInsts, false, hasVOP3PInsts)
GET_SUBTARGETINFO_MACRO(HasVOPDInsts, false, hasVOPDInsts)
GET_SUBTARGETINFO_MACRO(HasVscnt, false, hasVscnt)
GET_SUBTARGETINFO_MACRO(EnableXNACK, false, enableXNACK)
GET_SUBTARGETINFO_MACRO(SupportsXNACK, false, supportsXNACK)
#undef GET_SUBTARGETINFO_MACRO
#endif // GET_SUBTARGETINFO_MACRO


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV AMDGPUFeatureKV[] = {
  { "16-bit-insts", "Has i16/f16 instructions", AMDGPU::Feature16BitInsts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "DumpCode", "Dump MachineInstrs in the CodeEmitter", AMDGPU::FeatureDumpCode, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "a16", "Support gfx10-style A16 for 16-bit coordinates/gradients/lod/clamp/mip image operands", AMDGPU::FeatureGFX10A16, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "add-no-carry-insts", "Have VALU add/sub instructions without carry out", AMDGPU::FeatureAddNoCarryInsts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "aperture-regs", "Has Memory Aperture Base and Size Registers", AMDGPU::FeatureApertureRegs, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "architected-flat-scratch", "Flat Scratch register is a readonly SPI initialized architected register", AMDGPU::FeatureArchitectedFlatScratch, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "atomic-fadd-no-rtn-insts", "Has buffer_atomic_add_f32 and global_atomic_add_f32 instructions that don't return original value", AMDGPU::FeatureAtomicFaddNoRtnInsts, { { { 0x10000000000ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "atomic-fadd-rtn-insts", "Has buffer_atomic_add_f32 and global_atomic_add_f32 instructions that return original value", AMDGPU::FeatureAtomicFaddRtnInsts, { { { 0x10000000000ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "atomic-pk-fadd-no-rtn-insts", "Has buffer_atomic_pk_add_f16 and global_atomic_pk_add_f16 instructions that don't return original value", AMDGPU::FeatureAtomicPkFaddNoRtnInsts, { { { 0x10000000000ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "auto-waitcnt-before-barrier", "Hardware automatically inserts waitcnt before barrier", AMDGPU::FeatureAutoWaitcntBeforeBarrier, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "ci-insts", "Additional instructions for CI+", AMDGPU::FeatureCIInsts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "cumode", "Enable CU wavefront execution mode", AMDGPU::FeatureCuMode, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "dl-insts", "Has v_fmac_f32 and v_xnor_b32 instructions", AMDGPU::FeatureDLInsts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "dot1-insts", "Has v_dot4_i32_i8 and v_dot8_i32_i4 instructions", AMDGPU::FeatureDot1Insts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "dot2-insts", "Has v_dot2_i32_i16, v_dot2_u32_u16 instructions", AMDGPU::FeatureDot2Insts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "dot3-insts", "Has v_dot8c_i32_i4 instruction", AMDGPU::FeatureDot3Insts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "dot4-insts", "Has v_dot2c_i32_i16 instruction", AMDGPU::FeatureDot4Insts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "dot5-insts", "Has v_dot2c_f32_f16 instruction", AMDGPU::FeatureDot5Insts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "dot6-insts", "Has v_dot4c_i32_i8 instruction", AMDGPU::FeatureDot6Insts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "dot7-insts", "Has v_dot2_f32_f16, v_dot4_u32_u8, v_dot8_u32_u4 instructions", AMDGPU::FeatureDot7Insts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "dot8-insts", "Has v_dot2_f16_f16, v_dot2_bf16_bf16, v_dot2_f32_bf16, v_dot4_i32_iu8, v_dot8_i32_iu4 instructions", AMDGPU::FeatureDot8Insts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "dpp", "Support DPP (Data Parallel Primitives) extension", AMDGPU::FeatureDPP, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "dpp-64bit", "Support DPP (Data Parallel Primitives) extension", AMDGPU::Feature64BitDPP, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "dpp8", "Support DPP8 (Data Parallel Primitives) extension", AMDGPU::FeatureDPP8, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "ds-src2-insts", "Has ds_*_src2 instructions", AMDGPU::FeatureDsSrc2Insts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "dumpcode", "Dump MachineInstrs in the CodeEmitter", AMDGPU::FeatureDumpCodeLower, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "enable-ds128", "Use ds_{read|write}_b128", AMDGPU::FeatureEnableDS128, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "enable-flat-scratch", "Use scratch_* flat memory instructions to access scratch", AMDGPU::FeatureEnableFlatScratch, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "enable-prt-strict-null", "Enable zeroing of result registers for sparse texture fetches", AMDGPU::FeatureEnablePRTStrictNull, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "extended-image-insts", "Support mips != 0, lod != 0, gather4, and get_lod", AMDGPU::FeatureExtendedImageInsts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "fast-denormal-f32", "Enabling denormals does not cause f32 instructions to run at f64 rates", AMDGPU::FeatureFastDenormalF32, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "fast-fmaf", "Assuming f32 fma is at least as fast as mul + add", AMDGPU::FeatureFastFMAF32, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "flat-address-space", "Support flat address space", AMDGPU::FeatureFlatAddressSpace, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "flat-for-global", "Force to generate flat instruction for global", AMDGPU::FeatureFlatForGlobal, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "flat-global-insts", "Have global_* flat memory instructions", AMDGPU::FeatureFlatGlobalInsts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "flat-inst-offsets", "Flat instructions have immediate offset addressing mode", AMDGPU::FeatureFlatInstOffsets, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "flat-scratch-insts", "Have scratch_* flat memory instructions", AMDGPU::FeatureFlatScratchInsts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "flat-segment-offset-bug", "GFX10 bug where inst_offset is ignored when flat instructions access global memory", AMDGPU::FeatureFlatSegmentOffsetBug, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "fma-mix-insts", "Has v_fma_mix_f32, v_fma_mixlo_f16, v_fma_mixhi_f16 instructions", AMDGPU::FeatureFmaMixInsts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "fmaf", "Enable single precision FMA (not as fast as mul+add, but fused)", AMDGPU::FeatureFMA, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "fp64", "Enable double precision operations", AMDGPU::FeatureFP64, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "fp8-insts", "Has fp8 and bf8 instructions", AMDGPU::FeatureFP8Insts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "full-rate-64-ops", "Most fp64 instructions are full rate", AMDGPU::FullRate64Ops, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "g16", "Support G16 for 16-bit gradient image operands", AMDGPU::FeatureG16, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "gcn3-encoding", "Encoding format for VI", AMDGPU::FeatureGCN3Encoding, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "get-wave-id-inst", "Has s_get_waveid_in_workgroup instruction", AMDGPU::FeatureGetWaveIdInst, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "gfx10", "GFX10 GPU generation", AMDGPU::FeatureGFX10, { { { 0x803537790000320dULL, 0xc000cd48c04120cULL, 0x86ULL, 0x0ULL, } } } },
  { "gfx10-3-insts", "Additional instructions for GFX10.3", AMDGPU::FeatureGFX10_3Insts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "gfx10-insts", "Additional instructions for GFX10+", AMDGPU::FeatureGFX10Insts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "gfx10_a-encoding", "Has BVH ray tracing instructions", AMDGPU::FeatureGFX10_AEncoding, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "gfx10_b-encoding", "Encoding format GFX10_B", AMDGPU::FeatureGFX10_BEncoding, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "gfx11", "GFX11 GPU generation", AMDGPU::FeatureGFX11, { { { 0x5f537790000320dULL, 0xd0000008c04120cULL, 0x8eULL, 0x0ULL, } } } },
  { "gfx11-insts", "Additional instructions for GFX11+", AMDGPU::FeatureGFX11Insts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "gfx7-gfx8-gfx9-insts", "Instructions shared in GFX7, GFX8, GFX9", AMDGPU::FeatureGFX7GFX8GFX9Insts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "gfx8-insts", "Additional instructions for GFX8+", AMDGPU::FeatureGFX8Insts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "gfx9", "GFX9 GPU generation", AMDGPU::FeatureGFX9, { { { 0x5c7780000120dULL, 0x8c10ecd60100020cULL, 0x404ULL, 0x0ULL, } } } },
  { "gfx9-insts", "Additional instructions for GFX9+", AMDGPU::FeatureGFX9Insts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "gfx90a-insts", "Additional instructions for GFX90A+", AMDGPU::FeatureGFX90AInsts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "gfx940-insts", "Additional instructions for GFX940+", AMDGPU::FeatureGFX940Insts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "half-rate-64-ops", "Most fp64 instructions are half rate instead of quarter", AMDGPU::HalfRate64Ops, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "image-gather4-d16-bug", "Image Gather4 D16 hardware bug", AMDGPU::FeatureImageGather4D16Bug, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "image-insts", "Support image instructions", AMDGPU::FeatureImageInsts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "image-store-d16-bug", "Image Store D16 hardware bug", AMDGPU::FeatureImageStoreD16Bug, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "inst-fwd-prefetch-bug", "S_INST_PREFETCH instruction causes shader to hang", AMDGPU::FeatureInstFwdPrefetchBug, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "int-clamp-insts", "Support clamp for integer destination", AMDGPU::FeatureIntClamp, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "inv-2pi-inline-imm", "Has 1 / (2 * pi) as inline immediate", AMDGPU::FeatureInv2PiInlineImm, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "lds-branch-vmem-war-hazard", "Switching between LDS and VMEM-tex not waiting VM_VSRC=0", AMDGPU::FeatureLdsBranchVmemWARHazard, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "lds-misaligned-bug", "Some GFX10 bug with multi-dword LDS and flat access that is not naturally aligned in WGP mode", AMDGPU::FeatureLdsMisalignedBug, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "ldsbankcount16", "The number of LDS banks per compute unit.", AMDGPU::FeatureLDSBankCount16, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "ldsbankcount32", "The number of LDS banks per compute unit.", AMDGPU::FeatureLDSBankCount32, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "load-store-opt", "Enable SI load/store optimizer pass", AMDGPU::FeatureEnableLoadStoreOpt, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "localmemorysize32768", "The size of local memory in bytes", AMDGPU::FeatureLocalMemorySize32768, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "localmemorysize65536", "The size of local memory in bytes", AMDGPU::FeatureLocalMemorySize65536, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "mad-mac-f32-insts", "Has v_mad_f32/v_mac_f32/v_madak_f32/v_madmk_f32 instructions", AMDGPU::FeatureMadMacF32Insts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "mad-mix-insts", "Has v_mad_mix_f32, v_mad_mixlo_f16, v_mad_mixhi_f16 instructions", AMDGPU::FeatureMadMixInsts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "mai-insts", "Has mAI instructions", AMDGPU::FeatureMAIInsts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "max-private-element-size-16", "Maximum private access size may be 16", AMDGPU::FeatureMaxPrivateElementSize16, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "max-private-element-size-4", "Maximum private access size may be 4", AMDGPU::FeatureMaxPrivateElementSize4, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "max-private-element-size-8", "Maximum private access size may be 8", AMDGPU::FeatureMaxPrivateElementSize8, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "mfma-inline-literal-bug", "MFMA cannot use inline literal as SrcC", AMDGPU::FeatureMFMAInlineLiteralBug, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "mimg-r128", "Support 128-bit texture resources", AMDGPU::FeatureMIMG_R128, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "movrel", "Has v_movrel*_b32 instructions", AMDGPU::FeatureMovrel, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "negative-scratch-offset-bug", "Negative immediate offsets in scratch instructions with an SGPR offset page fault on GFX9", AMDGPU::FeatureNegativeScratchOffsetBug, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "negative-unaligned-scratch-offset-bug", "Scratch instructions with a VGPR offset and a negative immediate offset that is not a multiple of 4 read wrong memory on GFX10", AMDGPU::FeatureNegativeUnalignedScratchOffsetBug, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "no-data-dep-hazard", "Does not need SW waitstates", AMDGPU::FeatureNoDataDepHazard, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "no-sdst-cmpx", "V_CMPX does not write VCC/SGPR in addition to EXEC", AMDGPU::FeatureNoSdstCMPX, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "nsa-clause-bug", "MIMG-NSA in a hard clause has unpredictable results on GFX10.1", AMDGPU::FeatureNSAClauseBug, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "nsa-encoding", "Support NSA encoding for image instructions", AMDGPU::FeatureNSAEncoding, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "nsa-max-size-13", "The maximum non-sequential address size in VGPRs.", AMDGPU::FeatureNSAMaxSize13, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "nsa-max-size-5", "The maximum non-sequential address size in VGPRs.", AMDGPU::FeatureNSAMaxSize5, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "nsa-to-vmem-bug", "MIMG-NSA followed by VMEM fail if EXEC_LO or EXEC_HI equals zero", AMDGPU::FeatureNSAtoVMEMBug, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "offset-3f-bug", "Branch offset of 3f hardware bug", AMDGPU::FeatureOffset3fBug, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "packed-fp32-ops", "Support packed fp32 instructions", AMDGPU::FeaturePackedFP32Ops, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "packed-tid", "Workitem IDs are packed into v0 at kernel launch", AMDGPU::FeaturePackedTID, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "pk-fmac-f16-inst", "Has v_pk_fmac_f16 instruction", AMDGPU::FeaturePkFmacF16Inst, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "promote-alloca", "Enable promote alloca pass", AMDGPU::FeaturePromoteAlloca, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "r128-a16", "Support gfx9-style A16 for 16-bit coordinates/gradients/lod/clamp/mip image operands, where a16 is aliased with r128", AMDGPU::FeatureR128A16, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "s-memrealtime", "Has s_memrealtime instruction", AMDGPU::FeatureSMemRealTime, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "s-memtime-inst", "Has s_memtime instruction", AMDGPU::FeatureSMemTimeInst, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "scalar-atomics", "Has atomic scalar memory instructions", AMDGPU::FeatureScalarAtomics, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "scalar-flat-scratch-insts", "Have s_scratch_* flat memory instructions", AMDGPU::FeatureScalarFlatScratchInsts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "scalar-stores", "Has store scalar memory instructions", AMDGPU::FeatureScalarStores, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "sdwa", "Support SDWA (Sub-DWORD Addressing) extension", AMDGPU::FeatureSDWA, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "sdwa-mav", "Support v_mac_f32/f16 with SDWA (Sub-DWORD Addressing) extension", AMDGPU::FeatureSDWAMac, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "sdwa-omod", "Support OMod with SDWA (Sub-DWORD Addressing) extension", AMDGPU::FeatureSDWAOmod, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "sdwa-out-mods-vopc", "Support clamp for VOPC with SDWA (Sub-DWORD Addressing) extension", AMDGPU::FeatureSDWAOutModsVOPC, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "sdwa-scalar", "Support scalar register with SDWA (Sub-DWORD Addressing) extension", AMDGPU::FeatureSDWAScalar, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "sdwa-sdst", "Support scalar dst for VOPC with SDWA (Sub-DWORD Addressing) extension", AMDGPU::FeatureSDWASdst, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "sea-islands", "SEA_ISLANDS GPU generation", AMDGPU::FeatureSeaIslands, { { { 0x8000804900800200ULL, 0x480080000043200ULL, 0x400ULL, 0x0ULL, } } } },
  { "sgpr-init-bug", "VI SGPR initialization bug requiring a fixed SGPR allocation size", AMDGPU::FeatureSGPRInitBug, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "shader-cycles-register", "Has SHADER_CYCLES hardware register", AMDGPU::FeatureShaderCyclesRegister, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "si-scheduler", "Enable SI Machine Scheduler", AMDGPU::FeatureEnableSIScheduler, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "smem-to-vector-write-hazard", "s_load_dword followed by v_cmp page faults", AMDGPU::FeatureSMEMtoVectorWriteHazard, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "southern-islands", "SOUTHERN_ISLANDS GPU generation", AMDGPU::FeatureSouthernIslands, { { { 0x8000000900800000ULL, 0x80080000043120ULL, 0x400ULL, 0x0ULL, } } } },
  { "sramecc", "Enable SRAMECC", AMDGPU::FeatureSRAMECC, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "sramecc-support", "Hardware supports SRAMECC", AMDGPU::FeatureSupportsSRAMECC, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "tgsplit", "Enable threadgroup split execution", AMDGPU::FeatureTgSplit, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "trap-handler", "Trap handler support", AMDGPU::FeatureTrapHandler, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "trig-reduced-range", "Requires use of fract on arguments to trig instructions", AMDGPU::FeatureTrigReducedRange, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "true16", "True 16-bit operand instructions", AMDGPU::FeatureTrue16BitInsts, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "unaligned-access-mode", "Enable unaligned global, local and region loads and stores if the hardware supports it", AMDGPU::FeatureUnalignedAccessMode, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "unaligned-buffer-access", "Hardware supports unaligned global loads and stores", AMDGPU::FeatureUnalignedBufferAccess, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "unaligned-ds-access", "Hardware supports unaligned local and region loads and stores", AMDGPU::FeatureUnalignedDSAccess, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "unaligned-scratch-access", "Support unaligned scratch loads and stores", AMDGPU::FeatureUnalignedScratchAccess, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "unpacked-d16-vmem", "Has unpacked d16 vmem instructions", AMDGPU::FeatureUnpackedD16VMem, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "unsafe-ds-offset-folding", "Force using DS instruction immediate offsets on SI", AMDGPU::FeatureEnableUnsafeDSOffsetFolding, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "user-sgpr-init16-bug", "Bug requiring at least 16 user+system SGPRs to be enabled", AMDGPU::FeatureUserSGPRInit16Bug, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "vcmpx-exec-war-hazard", "V_CMPX WAR hazard on EXEC (V_CMPX issue ONLY)", AMDGPU::FeatureVcmpxExecWARHazard, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "vcmpx-permlane-hazard", "TODO: describe me", AMDGPU::FeatureVcmpxPermlaneHazard, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "vgpr-index-mode", "Has VGPR mode register indexing", AMDGPU::FeatureVGPRIndexMode, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "vmem-to-scalar-write-hazard", "VMEM instruction followed by scalar writing to EXEC mask, M0 or SGPR leads to incorrect execution.", AMDGPU::FeatureVMEMtoScalarWriteHazard, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "volcanic-islands", "VOLCANIC_ISLANDS GPU generation", AMDGPU::FeatureVolcanicIslands, { { { 0x8001c05900801201ULL, 0x84808c2c0004320cULL, 0x400ULL, 0x0ULL, } } } },
  { "vop3-literal", "Can use one literal in VOP3", AMDGPU::FeatureVOP3Literal, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "vop3p", "Has VOP3P packed instructions", AMDGPU::FeatureVOP3P, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "vopd", "Has VOPD dual issue wave32 instructions", AMDGPU::FeatureVOPD, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "vscnt", "Has separate store vscnt counter", AMDGPU::FeatureVscnt, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "wavefrontsize16", "The number of threads per wavefront", AMDGPU::FeatureWavefrontSize16, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "wavefrontsize32", "The number of threads per wavefront", AMDGPU::FeatureWavefrontSize32, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "wavefrontsize64", "The number of threads per wavefront", AMDGPU::FeatureWavefrontSize64, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "xnack", "Enable XNACK support", AMDGPU::FeatureXNACK, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "xnack-support", "Hardware supports XNACK", AMDGPU::FeatureSupportsXNACK, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
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
extern const llvm::MCWriteProcResEntry AMDGPUWriteProcResTable[] = {
  { 0,  0}, // Invalid
  { 4,  1}, // #1
  { 5,  1}, // #2
  { 6,  1}, // #3
  { 3,  1}, // #4
  { 2,  1}, // #5
  { 3,  1}, // #6
  { 6,  1}, // #7
  { 1,  1}, // #8
  { 5,  2}, // #9
  { 7,  2}, // #10
  { 7,  8}, // #11
  { 7, 16}, // #12
  { 4,  1}, // #13
  { 7,  1}, // #14
  { 4,  1}, // #15
  { 8,  1}, // #16
  { 3,  1}, // #17
  { 4,  1}, // #18
  { 2,  1}, // #19
  { 4,  1}, // #20
  { 3,  1}, // #21
  { 4,  2}, // #22
  { 8,  1}, // #23
  { 4,  2}, // #24
  { 5,  1}, // #25
  { 7,  1}, // #26
  { 4,  1}, // #27
  { 6,  1}, // #28
  { 4,  1}, // #29
  { 6,  1}, // #30
  { 7,  1}, // #31
  { 4,  2}, // #32
  { 7,  2}, // #33
  { 3,  1}, // #34
  { 4,  2}, // #35
  { 7,  1}, // #36
  { 4,  2}, // #37
  { 5,  1}, // #38
  { 6,  1}, // #39
  { 4,  2}, // #40
  { 6,  2}, // #41
  { 7,  4} // #42
}; // AMDGPUWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry AMDGPUWriteLatencyTable[] = {
  { 0,  0}, // Invalid
  { 1,  0}, // #1 WriteSALU_Write32Bit_WriteFloatFMA_WriteDoubleAdd_Write64Bit_WriteDoubleCvt_WriteIntMul
  {80,  0}, // #2 WriteVMEM
  { 5,  0}, // #3 WriteLDS_WriteSMEM_Write32Bit_WriteFloatCvt_WriteFloatFMA
  { 4,  0}, // #4 WriteExport_WriteTrans32_WriteFloatCvt_WriteDoubleCvt_WriteQuarterRate32_WriteIntMul_WriteTrans64_Write4PassDGEMM_Write4PassMAI
  { 8,  0}, // #5 WriteBranch_WriteDoubleAdd_Write8PassMAI_WriteQuarterRate32_WriteIntMul
  {500,  0}, // #6 WriteBarrier
  { 1,  0}, // #7 WriteSALU
  { 2,  0}, // #8 Write64Bit_Write2PassMAI_WriteSALU_WriteDoubleAdd
  { 1,  0}, // #9 Write32Bit_WriteFloatFMA_WriteSALU_WriteDouble_WriteIntMul_Write64Bit
  { 1,  0}, // #10 WriteSALU_Write32Bit_Write64Bit
  {16,  0}, // #11 WriteFloatFMA_WriteDouble_WriteTrans64_Write16PassMAI_WriteExport_Write8PassDGEMM
  {16,  0}, // #12 WriteFloatFMA_WriteDouble
  { 1,  0}, // #13 WriteSALU
  { 4,  0}, // #14 WriteIntMul_WriteDouble
  { 1,  0}, // #15 WriteSALU
  { 2,  0}, // #16 Write64Bit
  { 2,  0}, // #17 Write64Bit
  {320,  0}, // #18 WriteVMEM
  {20,  0}, // #19 WriteLDS_WriteSMEM
  {32,  0}, // #20 WriteBranch
  {2000,  0}, // #21 WriteBarrier
  { 2,  0}, // #22 WriteSALU
  { 6,  0}, // #23 Write64Bit
  { 5,  0}, // #24 Write32Bit_WriteFloatFMA
  { 2,  0}, // #25 WriteSALU
  {22,  0}, // #26 WriteDoubleAdd_WriteDoubleCvt
  {10,  0}, // #27 WriteTrans32
  {22,  0}, // #28 WriteDouble
  { 2,  0}, // #29 WriteSALU
  { 8,  0}, // #30 WriteIntMul
  { 2,  0}, // #31 WriteSALU
  {24,  0}, // #32 WriteTrans64
  { 6,  0}, // #33 Write64Bit
  { 6,  0}, // #34 Write64Bit
  { 5,  0}, // #35 Write32Bit
  { 5,  0}, // #36 Write32Bit
  {38,  0}, // #37 WriteDoubleAdd_WriteDoubleCvt
  {38,  0}, // #38 WriteDouble
  { 2,  0}, // #39 WriteSALU
  {40,  0} // #40 WriteTrans64
}; // AMDGPUWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry AMDGPUReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
  {0,  0, -4}, // #1
  {0,  0, -2} // #2
}; // AMDGPUReadAdvanceTable

// {Name, NumMicroOps, BeginGroup, EndGroup, RetireOOO, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc SIQuarterSpeedModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  8191, false, false, false, 0, 0,  0, 0,  0, 0},
  {DBGFIELD("NullALU_WriteSALU")  1, false, false, true,  1, 1,  1, 1,  0, 0}, // #1
  {DBGFIELD("NullALU_Write32Bit") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #2
  {DBGFIELD("NullALU_WriteVMEM")  1, false, false, true,  3, 1,  2, 1,  0, 0}, // #3
  {DBGFIELD("NullALU_WriteLDS")   1, false, false, true,  4, 1,  3, 1,  0, 0}, // #4
  {DBGFIELD("NullALU_WriteExport") 1, false, false, true,  5, 1,  4, 1,  0, 0}, // #5
  {DBGFIELD("NullALU_WriteVMEM_WriteLDS") 2, false, false, true,  6, 2,  2, 2,  0, 0}, // #6
  {DBGFIELD("WriteBranch")        1, false, false, true,  8, 1,  5, 1,  0, 0}, // #7
  {DBGFIELD("NullALU")            8191, false, false, false,  0, 0,  0, 0,  0, 0}, // #8
  {DBGFIELD("NullALU_WriteBranch") 1, false, false, true,  8, 1,  5, 1,  0, 0}, // #9
  {DBGFIELD("NullALU_WriteSMEM")  1, false, false, true,  4, 1,  3, 1,  0, 0}, // #10
  {DBGFIELD("NullALU_WriteBarrier") 1, false, false, true,  8, 1,  6, 1,  0, 0}, // #11
  {DBGFIELD("NullALU_WriteSALU_Write64Bit") 2, false, false, true,  1, 2,  7, 2,  0, 0}, // #12
  {DBGFIELD("NullALU_Write32Bit_WriteSALU") 2, false, false, true,  1, 2,  9, 2,  0, 0}, // #13
  {DBGFIELD("NullALU_WriteDoubleAdd") 1, false, false, true,  2, 1,  5, 1,  0, 0}, // #14
  {DBGFIELD("NullALU_Write64Bit") 1, false, false, true,  2, 1,  8, 1,  0, 0}, // #15
  {DBGFIELD("NullALU_WriteTrans32") 1, false, false, true,  2, 1,  4, 1,  0, 0}, // #16
  {DBGFIELD("NullALU_WriteFloatCvt") 1, false, false, true,  2, 1,  4, 1,  0, 0}, // #17
  {DBGFIELD("NullALU_WriteDoubleCvt") 1, false, false, true,  2, 1,  4, 1,  0, 0}, // #18
  {DBGFIELD("NullALU_WriteFloatFMA") 1, false, false, true,  2, 1, 11, 1,  0, 0}, // #19
  {DBGFIELD("NullALU_WriteDouble") 1, false, false, true,  2, 1, 11, 1,  0, 0}, // #20
  {DBGFIELD("NullALU_WriteFloatFMA_WriteSALU") 2, false, false, true,  1, 2, 12, 2,  0, 0}, // #21
  {DBGFIELD("NullALU_WriteDouble_WriteSALU") 2, false, false, true,  1, 2, 12, 2,  0, 0}, // #22
  {DBGFIELD("NullALU_WriteIntMul_WriteSALU") 2, false, false, true,  1, 2, 14, 2,  0, 0}, // #23
  {DBGFIELD("NullALU_WriteQuarterRate32") 1, false, false, true,  2, 1,  4, 1,  0, 0}, // #24
  {DBGFIELD("NullALU_WriteIntMul") 1, false, false, true,  2, 1,  4, 1,  0, 0}, // #25
  {DBGFIELD("NullALU_WriteTrans64") 1, false, false, true,  2, 1, 11, 1,  0, 0}, // #26
  {DBGFIELD("NullALU_Write64Bit_Write64Bit") 2, false, false, true,  9, 1, 16, 2,  0, 0}, // #27
  {DBGFIELD("NullALU_Write32Bit_Write32Bit") 2, false, false, true,  9, 1,  9, 2,  0, 0}, // #28
  {DBGFIELD("COPY")               8190, false, false, false,  0, 0,  0, 0,  0, 0}, // #29
  {DBGFIELD("V_ACCVGPR_WRITE_B32_e64") 8190, false, false, false,  0, 0,  0, 0,  0, 0}, // #30
  {DBGFIELD("V_MFMA_F32_4X4X1F32_e64_V_MFMA_F32_4X4X1F32_vgprcd_e64_V_MFMA_F32_4X4X2BF16_e64_V_MFMA_F32_4X4X2BF16_vgprcd_e64_V_MFMA_F32_4X4X4BF16_1K_e64_V_MFMA_F32_4X4X4BF16_1K_vgprcd_e64_V_MFMA_F32_4X4X4F16_e64_V_MFMA_F32_4X4X4F16_vgprcd_e64_V_MFMA_F64_4X4X4F64_e64_V_MFMA_F64_4X4X4F64_vgprcd_e64_V_MFMA_I32_4X4X4I8_e64_V_MFMA_I32_4X4X4I8_vgprcd_e64_V_MFMA_F32_4X4X1F32_gfx90a_acd_V_MFMA_F32_4X4X1F32_gfx90a_vcd_V_MFMA_F32_4X4X1F32_gfx940_acd_V_MFMA_F32_4X4X1F32_gfx940_vcd_V_MFMA_F32_4X4X1F32_vi_V_MFMA_F32_4X4X2BF16_gfx90a_acd_V_MFMA_F32_4X4X2BF16_gfx90a_vcd_V_MFMA_F32_4X4X2BF16_gfx940_acd_V_MFMA_F32_4X4X2BF16_gfx940_vcd_V_MFMA_F32_4X4X2BF16_vi_V_MFMA_F32_4X4X4BF16_1K_gfx90a_acd_V_MFMA_F32_4X4X4BF16_1K_gfx90a_vcd_V_MFMA_F32_4X4X4BF16_1K_gfx940_acd_V_MFMA_F32_4X4X4BF16_1K_gfx940_vcd_V_MFMA_F32_4X4X4F16_gfx90a_acd_V_MFMA_F32_4X4X4F16_gfx90a_vcd_V_MFMA_F32_4X4X4F16_gfx940_acd_V_MFMA_F32_4X4X4F16_gfx940_vcd_V_MFMA_F32_4X4X4F16_vi_V_MFMA_F64_4X4X4F64_gfx90a_acd_V_MFMA_F64_4X4X4F64_gfx90a_vcd_V_MFMA_F64_4X4X4F64_gfx940_acd_V_MFMA_F64_4X4X4F64_gfx940_vcd_V_MFMA_I32_4X4X4I8_gfx90a_acd_V_MFMA_I32_4X4X4I8_gfx90a_vcd_V_MFMA_I32_4X4X4I8_gfx940_acd_V_MFMA_I32_4X4X4I8_gfx940_vcd_V_MFMA_I32_4X4X4I8_vi") 1, false, false, true, 10, 1,  8, 1,  1, 1}, // #31
  {DBGFIELD("V_MFMA_F32_16X16X16BF16_1K_e64_V_MFMA_F32_16X16X16BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X16F16_e64_V_MFMA_F32_16X16X16F16_vgprcd_e64_V_MFMA_F32_16X16X1F32_e64_V_MFMA_F32_16X16X1F32_mac_e64_V_MFMA_F32_16X16X1F32_mac_vgprcd_e64_V_MFMA_F32_16X16X1F32_vgprcd_e64_V_MFMA_F32_16X16X2BF16_e64_V_MFMA_F32_16X16X2BF16_mac_e64_V_MFMA_F32_16X16X2BF16_mac_vgprcd_e64_V_MFMA_F32_16X16X2BF16_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_BF8_e64_V_MFMA_F32_16X16X32_BF8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_FP8_e64_V_MFMA_F32_16X16X32_BF8_FP8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_BF8_e64_V_MFMA_F32_16X16X32_FP8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_FP8_e64_V_MFMA_F32_16X16X32_FP8_FP8_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_e64_V_MFMA_F32_16X16X4BF16_1K_mac_e64_V_MFMA_F32_16X16X4BF16_1K_mac_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X4F16_e64_V_MFMA_F32_16X16X4F16_mac_e64_V_MFMA_F32_16X16X4F16_mac_vgprcd_e64_V_MFMA_F32_16X16X4F16_vgprcd_e64_V_MFMA_F32_16X16X4F32_e64_V_MFMA_F32_16X16X4F32_vgprcd_e64_V_MFMA_F32_16X16X8BF16_e64_V_MFMA_F32_16X16X8BF16_vgprcd_e64_V_MFMA_F32_16X16X8XF32_e64_V_MFMA_F32_16X16X8XF32_vgprcd_e64_V_MFMA_F64_16X16X4F64_e64_V_MFMA_F64_16X16X4F64_mac_e64_V_MFMA_F64_16X16X4F64_mac_vgprcd_e64_V_MFMA_F64_16X16X4F64_vgprcd_e64_V_MFMA_I32_16X16X16I8_e64_V_MFMA_I32_16X16X16I8_vgprcd_e64_V_MFMA_I32_16X16X32I8_e64_V_MFMA_I32_16X16X32I8_vgprcd_e64_V_MFMA_I32_16X16X4I8_e64_V_MFMA_I32_16X16X4I8_mac_e64_V_MFMA_I32_16X16X4I8_mac_vgprcd_e64_V_MFMA_I32_16X16X4I8_vgprcd_e64_V_MFMA_F32_16X16X16BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X16BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X16BF16_1K_gfx940_acd_V_MFMA_F32_16X16X16BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X16F16_gfx90a_acd_V_MFMA_F32_16X16X16F16_gfx90a_vcd_V_MFMA_F32_16X16X16F16_gfx940_acd_V_MFMA_F32_16X16X16F16_gfx940_vcd_V_MFMA_F32_16X16X16F16_vi_V_MFMA_F32_16X16X1F32_gfx90a_acd_V_MFMA_F32_16X16X1F32_gfx90a_vcd_V_MFMA_F32_16X16X1F32_gfx940_acd_V_MFMA_F32_16X16X1F32_gfx940_vcd_V_MFMA_F32_16X16X1F32_vi_V_MFMA_F32_16X16X2BF16_gfx90a_acd_V_MFMA_F32_16X16X2BF16_gfx90a_vcd_V_MFMA_F32_16X16X2BF16_gfx940_acd_V_MFMA_F32_16X16X2BF16_gfx940_vcd_V_MFMA_F32_16X16X2BF16_vi_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx940_acd_V_MFMA_F32_16X16X4BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X4F16_gfx90a_acd_V_MFMA_F32_16X16X4F16_gfx90a_vcd_V_MFMA_F32_16X16X4F16_gfx940_acd_V_MFMA_F32_16X16X4F16_gfx940_vcd_V_MFMA_F32_16X16X4F16_vi_V_MFMA_F32_16X16X4F32_gfx90a_acd_V_MFMA_F32_16X16X4F32_gfx90a_vcd_V_MFMA_F32_16X16X4F32_gfx940_acd_V_MFMA_F32_16X16X4F32_gfx940_vcd_V_MFMA_F32_16X16X4F32_vi_V_MFMA_F32_16X16X8BF16_gfx90a_acd_V_MFMA_F32_16X16X8BF16_gfx90a_vcd_V_MFMA_F32_16X16X8BF16_gfx940_acd_V_MFMA_F32_16X16X8BF16_gfx940_vcd_V_MFMA_F32_16X16X8BF16_vi_V_MFMA_F32_16X16X8XF32_gfx940_acd_V_MFMA_F32_16X16X8XF32_gfx940_vcd_V_MFMA_F64_16X16X4F64_gfx90a_acd_V_MFMA_F64_16X16X4F64_gfx90a_vcd_V_MFMA_F64_16X16X4F64_gfx940_acd_V_MFMA_F64_16X16X4F64_gfx940_vcd_V_MFMA_I32_16X16X16I8_gfx90a_acd_V_MFMA_I32_16X16X16I8_gfx90a_vcd_V_MFMA_I32_16X16X16I8_gfx940_acd_V_MFMA_I32_16X16X16I8_gfx940_vcd_V_MFMA_I32_16X16X16I8_vi_V_MFMA_I32_16X16X32I8_gfx940_acd_V_MFMA_I32_16X16X32I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_gfx90a_acd_V_MFMA_I32_16X16X4I8_gfx90a_vcd_V_MFMA_I32_16X16X4I8_gfx940_acd_V_MFMA_I32_16X16X4I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_vi") 1, false, false, true, 11, 1,  5, 1,  1, 1}, // #32
  {DBGFIELD("V_MFMA_F32_32X32X16_BF8_BF8_e64_V_MFMA_F32_32X32X16_BF8_BF8_mac_e64_V_MFMA_F32_32X32X16_BF8_BF8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_BF8_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_FP8_e64_V_MFMA_F32_32X32X16_BF8_FP8_mac_e64_V_MFMA_F32_32X32X16_BF8_FP8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_FP8_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_BF8_e64_V_MFMA_F32_32X32X16_FP8_BF8_mac_e64_V_MFMA_F32_32X32X16_FP8_BF8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_BF8_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_FP8_e64_V_MFMA_F32_32X32X16_FP8_FP8_mac_e64_V_MFMA_F32_32X32X16_FP8_FP8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_FP8_vgprcd_e64_V_MFMA_F32_32X32X1F32_e64_V_MFMA_F32_32X32X1F32_mac_e64_V_MFMA_F32_32X32X1F32_mac_vgprcd_e64_V_MFMA_F32_32X32X1F32_vgprcd_e64_V_MFMA_F32_32X32X2BF16_e64_V_MFMA_F32_32X32X2BF16_mac_e64_V_MFMA_F32_32X32X2BF16_mac_vgprcd_e64_V_MFMA_F32_32X32X2BF16_vgprcd_e64_V_MFMA_F32_32X32X2F32_e64_V_MFMA_F32_32X32X2F32_mac_e64_V_MFMA_F32_32X32X2F32_mac_vgprcd_e64_V_MFMA_F32_32X32X2F32_vgprcd_e64_V_MFMA_F32_32X32X4BF16_1K_e64_V_MFMA_F32_32X32X4BF16_1K_mac_e64_V_MFMA_F32_32X32X4BF16_1K_mac_vgprcd_e64_V_MFMA_F32_32X32X4BF16_1K_vgprcd_e64_V_MFMA_F32_32X32X4BF16_e64_V_MFMA_F32_32X32X4BF16_mac_e64_V_MFMA_F32_32X32X4BF16_mac_vgprcd_e64_V_MFMA_F32_32X32X4BF16_vgprcd_e64_V_MFMA_F32_32X32X4F16_e64_V_MFMA_F32_32X32X4F16_mac_e64_V_MFMA_F32_32X32X4F16_mac_vgprcd_e64_V_MFMA_F32_32X32X4F16_vgprcd_e64_V_MFMA_F32_32X32X4XF32_e64_V_MFMA_F32_32X32X4XF32_mac_e64_V_MFMA_F32_32X32X4XF32_mac_vgprcd_e64_V_MFMA_F32_32X32X4XF32_vgprcd_e64_V_MFMA_F32_32X32X8BF16_1K_e64_V_MFMA_F32_32X32X8BF16_1K_mac_e64_V_MFMA_F32_32X32X8BF16_1K_mac_vgprcd_e64_V_MFMA_F32_32X32X8BF16_1K_vgprcd_e64_V_MFMA_F32_32X32X8F16_e64_V_MFMA_F32_32X32X8F16_mac_e64_V_MFMA_F32_32X32X8F16_mac_vgprcd_e64_V_MFMA_F32_32X32X8F16_vgprcd_e64_V_MFMA_I32_32X32X16I8_e64_V_MFMA_I32_32X32X16I8_mac_e64_V_MFMA_I32_32X32X16I8_mac_vgprcd_e64_V_MFMA_I32_32X32X16I8_vgprcd_e64_V_MFMA_I32_32X32X4I8_e64_V_MFMA_I32_32X32X4I8_mac_e64_V_MFMA_I32_32X32X4I8_mac_vgprcd_e64_V_MFMA_I32_32X32X4I8_vgprcd_e64_V_MFMA_I32_32X32X8I8_e64_V_MFMA_I32_32X32X8I8_mac_e64_V_MFMA_I32_32X32X8I8_mac_vgprcd_e64_V_MFMA_I32_32X32X8I8_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_BF8_gfx940_acd_V_MFMA_F32_32X32X16_BF8_BF8_gfx940_vcd_V_MFMA_F32_32X32X16_BF8_FP8_gfx940_acd_V_MFMA_F32_32X32X16_BF8_FP8_gfx940_vcd_V_MFMA_F32_32X32X16_FP8_BF8_gfx940_acd_V_MFMA_F32_32X32X16_FP8_BF8_gfx940_vcd_V_MFMA_F32_32X32X16_FP8_FP8_gfx940_acd_V_MFMA_F32_32X32X16_FP8_FP8_gfx940_vcd_V_MFMA_F32_32X32X1F32_gfx90a_acd_V_MFMA_F32_32X32X1F32_gfx90a_vcd_V_MFMA_F32_32X32X1F32_gfx940_acd_V_MFMA_F32_32X32X1F32_gfx940_vcd_V_MFMA_F32_32X32X1F32_vi_V_MFMA_F32_32X32X2BF16_gfx90a_acd_V_MFMA_F32_32X32X2BF16_gfx90a_vcd_V_MFMA_F32_32X32X2BF16_gfx940_acd_V_MFMA_F32_32X32X2BF16_gfx940_vcd_V_MFMA_F32_32X32X2BF16_vi_V_MFMA_F32_32X32X2F32_gfx90a_acd_V_MFMA_F32_32X32X2F32_gfx90a_vcd_V_MFMA_F32_32X32X2F32_gfx940_acd_V_MFMA_F32_32X32X2F32_gfx940_vcd_V_MFMA_F32_32X32X2F32_vi_V_MFMA_F32_32X32X4BF16_1K_gfx90a_acd_V_MFMA_F32_32X32X4BF16_1K_gfx90a_vcd_V_MFMA_F32_32X32X4BF16_1K_gfx940_acd_V_MFMA_F32_32X32X4BF16_1K_gfx940_vcd_V_MFMA_F32_32X32X4BF16_gfx90a_acd_V_MFMA_F32_32X32X4BF16_gfx90a_vcd_V_MFMA_F32_32X32X4BF16_gfx940_acd_V_MFMA_F32_32X32X4BF16_gfx940_vcd_V_MFMA_F32_32X32X4BF16_vi_V_MFMA_F32_32X32X4F16_gfx90a_acd_V_MFMA_F32_32X32X4F16_gfx90a_vcd_V_MFMA_F32_32X32X4F16_gfx940_acd_V_MFMA_F32_32X32X4F16_gfx940_vcd_V_MFMA_F32_32X32X4F16_vi_V_MFMA_F32_32X32X4XF32_gfx940_acd_V_MFMA_F32_32X32X4XF32_gfx940_vcd_V_MFMA_F32_32X32X8BF16_1K_gfx90a_acd_V_MFMA_F32_32X32X8BF16_1K_gfx90a_vcd_V_MFMA_F32_32X32X8BF16_1K_gfx940_acd_V_MFMA_F32_32X32X8BF16_1K_gfx940_vcd_V_MFMA_F32_32X32X8F16_gfx90a_acd_V_MFMA_F32_32X32X8F16_gfx90a_vcd_V_MFMA_F32_32X32X8F16_gfx940_acd_V_MFMA_F32_32X32X8F16_gfx940_vcd_V_MFMA_F32_32X32X8F16_vi_V_MFMA_I32_32X32X16I8_gfx940_acd_V_MFMA_I32_32X32X16I8_gfx940_vcd_V_MFMA_I32_32X32X4I8_gfx90a_acd_V_MFMA_I32_32X32X4I8_gfx90a_vcd_V_MFMA_I32_32X32X4I8_gfx940_acd_V_MFMA_I32_32X32X4I8_gfx940_vcd_V_MFMA_I32_32X32X4I8_vi_V_MFMA_I32_32X32X8I8_gfx90a_acd_V_MFMA_I32_32X32X8I8_gfx90a_vcd_V_MFMA_I32_32X32X8I8_gfx940_acd_V_MFMA_I32_32X32X8I8_gfx940_vcd_V_MFMA_I32_32X32X8I8_vi") 1, false, false, true, 12, 1, 11, 1,  1, 1}, // #33
  {DBGFIELD("V_MFMA_F32_4X4X1F32_e64_V_MFMA_F32_4X4X1F32_vgprcd_e64_V_MFMA_F32_4X4X2BF16_e64_V_MFMA_F32_4X4X2BF16_vgprcd_e64_V_MFMA_F32_4X4X4BF16_1K_e64_V_MFMA_F32_4X4X4BF16_1K_vgprcd_e64_V_MFMA_F32_4X4X4F16_e64_V_MFMA_F32_4X4X4F16_vgprcd_e64_V_MFMA_I32_4X4X4I8_e64_V_MFMA_I32_4X4X4I8_vgprcd_e64_V_MFMA_F32_4X4X1F32_gfx90a_acd_V_MFMA_F32_4X4X1F32_gfx90a_vcd_V_MFMA_F32_4X4X1F32_gfx940_acd_V_MFMA_F32_4X4X1F32_gfx940_vcd_V_MFMA_F32_4X4X1F32_vi_V_MFMA_F32_4X4X2BF16_gfx90a_acd_V_MFMA_F32_4X4X2BF16_gfx90a_vcd_V_MFMA_F32_4X4X2BF16_gfx940_acd_V_MFMA_F32_4X4X2BF16_gfx940_vcd_V_MFMA_F32_4X4X2BF16_vi_V_MFMA_F32_4X4X4BF16_1K_gfx90a_acd_V_MFMA_F32_4X4X4BF16_1K_gfx90a_vcd_V_MFMA_F32_4X4X4BF16_1K_gfx940_acd_V_MFMA_F32_4X4X4BF16_1K_gfx940_vcd_V_MFMA_F32_4X4X4F16_gfx90a_acd_V_MFMA_F32_4X4X4F16_gfx90a_vcd_V_MFMA_F32_4X4X4F16_gfx940_acd_V_MFMA_F32_4X4X4F16_gfx940_vcd_V_MFMA_F32_4X4X4F16_vi_V_MFMA_I32_4X4X4I8_gfx90a_acd_V_MFMA_I32_4X4X4I8_gfx90a_vcd_V_MFMA_I32_4X4X4I8_gfx940_acd_V_MFMA_I32_4X4X4I8_gfx940_vcd_V_MFMA_I32_4X4X4I8_vi") 1, false, false, true, 10, 1,  8, 1,  1, 1}, // #34
  {DBGFIELD("V_MFMA_F32_16X16X16BF16_1K_e64_V_MFMA_F32_16X16X16BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X16F16_e64_V_MFMA_F32_16X16X16F16_vgprcd_e64_V_MFMA_F32_16X16X1F32_e64_V_MFMA_F32_16X16X1F32_mac_e64_V_MFMA_F32_16X16X1F32_mac_vgprcd_e64_V_MFMA_F32_16X16X1F32_vgprcd_e64_V_MFMA_F32_16X16X2BF16_e64_V_MFMA_F32_16X16X2BF16_mac_e64_V_MFMA_F32_16X16X2BF16_mac_vgprcd_e64_V_MFMA_F32_16X16X2BF16_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_BF8_e64_V_MFMA_F32_16X16X32_BF8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_FP8_e64_V_MFMA_F32_16X16X32_BF8_FP8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_BF8_e64_V_MFMA_F32_16X16X32_FP8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_FP8_e64_V_MFMA_F32_16X16X32_FP8_FP8_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_e64_V_MFMA_F32_16X16X4BF16_1K_mac_e64_V_MFMA_F32_16X16X4BF16_1K_mac_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X4F16_e64_V_MFMA_F32_16X16X4F16_mac_e64_V_MFMA_F32_16X16X4F16_mac_vgprcd_e64_V_MFMA_F32_16X16X4F16_vgprcd_e64_V_MFMA_F32_16X16X4F32_e64_V_MFMA_F32_16X16X4F32_vgprcd_e64_V_MFMA_F32_16X16X8BF16_e64_V_MFMA_F32_16X16X8BF16_vgprcd_e64_V_MFMA_F32_16X16X8XF32_e64_V_MFMA_F32_16X16X8XF32_vgprcd_e64_V_MFMA_I32_16X16X16I8_e64_V_MFMA_I32_16X16X16I8_vgprcd_e64_V_MFMA_I32_16X16X32I8_e64_V_MFMA_I32_16X16X32I8_vgprcd_e64_V_MFMA_I32_16X16X4I8_e64_V_MFMA_I32_16X16X4I8_mac_e64_V_MFMA_I32_16X16X4I8_mac_vgprcd_e64_V_MFMA_I32_16X16X4I8_vgprcd_e64_V_MFMA_F32_16X16X16BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X16BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X16BF16_1K_gfx940_acd_V_MFMA_F32_16X16X16BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X16F16_gfx90a_acd_V_MFMA_F32_16X16X16F16_gfx90a_vcd_V_MFMA_F32_16X16X16F16_gfx940_acd_V_MFMA_F32_16X16X16F16_gfx940_vcd_V_MFMA_F32_16X16X16F16_vi_V_MFMA_F32_16X16X1F32_gfx90a_acd_V_MFMA_F32_16X16X1F32_gfx90a_vcd_V_MFMA_F32_16X16X1F32_gfx940_acd_V_MFMA_F32_16X16X1F32_gfx940_vcd_V_MFMA_F32_16X16X1F32_vi_V_MFMA_F32_16X16X2BF16_gfx90a_acd_V_MFMA_F32_16X16X2BF16_gfx90a_vcd_V_MFMA_F32_16X16X2BF16_gfx940_acd_V_MFMA_F32_16X16X2BF16_gfx940_vcd_V_MFMA_F32_16X16X2BF16_vi_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx940_acd_V_MFMA_F32_16X16X4BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X4F16_gfx90a_acd_V_MFMA_F32_16X16X4F16_gfx90a_vcd_V_MFMA_F32_16X16X4F16_gfx940_acd_V_MFMA_F32_16X16X4F16_gfx940_vcd_V_MFMA_F32_16X16X4F16_vi_V_MFMA_F32_16X16X4F32_gfx90a_acd_V_MFMA_F32_16X16X4F32_gfx90a_vcd_V_MFMA_F32_16X16X4F32_gfx940_acd_V_MFMA_F32_16X16X4F32_gfx940_vcd_V_MFMA_F32_16X16X4F32_vi_V_MFMA_F32_16X16X8BF16_gfx90a_acd_V_MFMA_F32_16X16X8BF16_gfx90a_vcd_V_MFMA_F32_16X16X8BF16_gfx940_acd_V_MFMA_F32_16X16X8BF16_gfx940_vcd_V_MFMA_F32_16X16X8BF16_vi_V_MFMA_F32_16X16X8XF32_gfx940_acd_V_MFMA_F32_16X16X8XF32_gfx940_vcd_V_MFMA_I32_16X16X16I8_gfx90a_acd_V_MFMA_I32_16X16X16I8_gfx90a_vcd_V_MFMA_I32_16X16X16I8_gfx940_acd_V_MFMA_I32_16X16X16I8_gfx940_vcd_V_MFMA_I32_16X16X16I8_vi_V_MFMA_I32_16X16X32I8_gfx940_acd_V_MFMA_I32_16X16X32I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_gfx90a_acd_V_MFMA_I32_16X16X4I8_gfx90a_vcd_V_MFMA_I32_16X16X4I8_gfx940_acd_V_MFMA_I32_16X16X4I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_vi") 1, false, false, true, 11, 1,  5, 1,  1, 1}, // #35
  {DBGFIELD("V_MFMA_F32_16X16X8XF32_e64_V_MFMA_F32_16X16X8XF32_vgprcd_e64_V_MFMA_F32_16X16X8XF32_gfx940_acd_V_MFMA_F32_16X16X8XF32_gfx940_vcd") 1, false, false, true, 11, 1,  5, 1,  1, 1}, // #36
  {DBGFIELD("V_MFMA_F32_16X16X16BF16_1K_e64_V_MFMA_F32_16X16X16BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X16F16_e64_V_MFMA_F32_16X16X16F16_vgprcd_e64_V_MFMA_I32_16X16X16I8_e64_V_MFMA_I32_16X16X16I8_vgprcd_e64_V_MFMA_F32_16X16X16BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X16BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X16BF16_1K_gfx940_acd_V_MFMA_F32_16X16X16BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X16F16_gfx90a_acd_V_MFMA_F32_16X16X16F16_gfx90a_vcd_V_MFMA_F32_16X16X16F16_gfx940_acd_V_MFMA_F32_16X16X16F16_gfx940_vcd_V_MFMA_F32_16X16X16F16_vi_V_MFMA_I32_16X16X16I8_gfx90a_acd_V_MFMA_I32_16X16X16I8_gfx90a_vcd_V_MFMA_I32_16X16X16I8_gfx940_acd_V_MFMA_I32_16X16X16I8_gfx940_vcd_V_MFMA_I32_16X16X16I8_vi") 1, false, false, true, 11, 1,  5, 1,  1, 1}, // #37
  {DBGFIELD("V_MFMA_F32_16X16X32_BF8_BF8_e64_V_MFMA_F32_16X16X32_BF8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_FP8_e64_V_MFMA_F32_16X16X32_BF8_FP8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_BF8_e64_V_MFMA_F32_16X16X32_FP8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_FP8_e64_V_MFMA_F32_16X16X32_FP8_FP8_vgprcd_e64_V_MFMA_I32_16X16X32I8_e64_V_MFMA_I32_16X16X32I8_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_vcd_V_MFMA_I32_16X16X32I8_gfx940_acd_V_MFMA_I32_16X16X32I8_gfx940_vcd") 1, false, false, true, 11, 1,  5, 1,  1, 1}, // #38
  {DBGFIELD("V_MFMA_F32_16X16X1F32_e64_V_MFMA_F32_16X16X1F32_mac_e64_V_MFMA_F32_16X16X1F32_mac_vgprcd_e64_V_MFMA_F32_16X16X1F32_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_e64_V_MFMA_F32_16X16X4BF16_1K_mac_e64_V_MFMA_F32_16X16X4BF16_1K_mac_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X4F16_e64_V_MFMA_F32_16X16X4F16_mac_e64_V_MFMA_F32_16X16X4F16_mac_vgprcd_e64_V_MFMA_F32_16X16X4F16_vgprcd_e64_V_MFMA_F32_16X16X4F32_e64_V_MFMA_F32_16X16X4F32_vgprcd_e64_V_MFMA_I32_16X16X4I8_e64_V_MFMA_I32_16X16X4I8_mac_e64_V_MFMA_I32_16X16X4I8_mac_vgprcd_e64_V_MFMA_I32_16X16X4I8_vgprcd_e64_V_MFMA_F32_16X16X1F32_gfx90a_acd_V_MFMA_F32_16X16X1F32_gfx90a_vcd_V_MFMA_F32_16X16X1F32_gfx940_acd_V_MFMA_F32_16X16X1F32_gfx940_vcd_V_MFMA_F32_16X16X1F32_vi_V_MFMA_F32_16X16X4BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx940_acd_V_MFMA_F32_16X16X4BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X4F16_gfx90a_acd_V_MFMA_F32_16X16X4F16_gfx90a_vcd_V_MFMA_F32_16X16X4F16_gfx940_acd_V_MFMA_F32_16X16X4F16_gfx940_vcd_V_MFMA_F32_16X16X4F16_vi_V_MFMA_F32_16X16X4F32_gfx90a_acd_V_MFMA_F32_16X16X4F32_gfx90a_vcd_V_MFMA_F32_16X16X4F32_gfx940_acd_V_MFMA_F32_16X16X4F32_gfx940_vcd_V_MFMA_F32_16X16X4F32_vi_V_MFMA_I32_16X16X4I8_gfx90a_acd_V_MFMA_I32_16X16X4I8_gfx90a_vcd_V_MFMA_I32_16X16X4I8_gfx940_acd_V_MFMA_I32_16X16X4I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_vi") 1, false, false, true, 11, 1,  5, 1,  1, 1}, // #39
  {DBGFIELD("V_MFMA_F32_32X32X4XF32_e64_V_MFMA_F32_32X32X4XF32_mac_e64_V_MFMA_F32_32X32X4XF32_mac_vgprcd_e64_V_MFMA_F32_32X32X4XF32_vgprcd_e64_V_MFMA_F32_32X32X4XF32_gfx940_acd_V_MFMA_F32_32X32X4XF32_gfx940_vcd") 1, false, false, true, 12, 1, 11, 1,  1, 1}, // #40
  {DBGFIELD("V_MFMA_F32_32X32X8BF16_1K_e64_V_MFMA_F32_32X32X8BF16_1K_mac_e64_V_MFMA_F32_32X32X8BF16_1K_mac_vgprcd_e64_V_MFMA_F32_32X32X8BF16_1K_vgprcd_e64_V_MFMA_F32_32X32X8F16_e64_V_MFMA_F32_32X32X8F16_mac_e64_V_MFMA_F32_32X32X8F16_mac_vgprcd_e64_V_MFMA_F32_32X32X8F16_vgprcd_e64_V_MFMA_I32_32X32X8I8_e64_V_MFMA_I32_32X32X8I8_mac_e64_V_MFMA_I32_32X32X8I8_mac_vgprcd_e64_V_MFMA_I32_32X32X8I8_vgprcd_e64_V_MFMA_F32_32X32X8BF16_1K_gfx90a_acd_V_MFMA_F32_32X32X8BF16_1K_gfx90a_vcd_V_MFMA_F32_32X32X8BF16_1K_gfx940_acd_V_MFMA_F32_32X32X8BF16_1K_gfx940_vcd_V_MFMA_F32_32X32X8F16_gfx90a_acd_V_MFMA_F32_32X32X8F16_gfx90a_vcd_V_MFMA_F32_32X32X8F16_gfx940_acd_V_MFMA_F32_32X32X8F16_gfx940_vcd_V_MFMA_F32_32X32X8F16_vi_V_MFMA_I32_32X32X8I8_gfx90a_acd_V_MFMA_I32_32X32X8I8_gfx90a_vcd_V_MFMA_I32_32X32X8I8_gfx940_acd_V_MFMA_I32_32X32X8I8_gfx940_vcd_V_MFMA_I32_32X32X8I8_vi") 1, false, false, true, 12, 1, 11, 1,  1, 1}, // #41
  {DBGFIELD("V_MFMA_F32_32X32X16_BF8_BF8_e64_V_MFMA_F32_32X32X16_BF8_BF8_mac_e64_V_MFMA_F32_32X32X16_BF8_BF8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_BF8_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_FP8_e64_V_MFMA_F32_32X32X16_BF8_FP8_mac_e64_V_MFMA_F32_32X32X16_BF8_FP8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_FP8_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_BF8_e64_V_MFMA_F32_32X32X16_FP8_BF8_mac_e64_V_MFMA_F32_32X32X16_FP8_BF8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_BF8_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_FP8_e64_V_MFMA_F32_32X32X16_FP8_FP8_mac_e64_V_MFMA_F32_32X32X16_FP8_FP8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_FP8_vgprcd_e64_V_MFMA_I32_32X32X16I8_e64_V_MFMA_I32_32X32X16I8_mac_e64_V_MFMA_I32_32X32X16I8_mac_vgprcd_e64_V_MFMA_I32_32X32X16I8_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_BF8_gfx940_acd_V_MFMA_F32_32X32X16_BF8_BF8_gfx940_vcd_V_MFMA_F32_32X32X16_BF8_FP8_gfx940_acd_V_MFMA_F32_32X32X16_BF8_FP8_gfx940_vcd_V_MFMA_F32_32X32X16_FP8_BF8_gfx940_acd_V_MFMA_F32_32X32X16_FP8_BF8_gfx940_vcd_V_MFMA_F32_32X32X16_FP8_FP8_gfx940_acd_V_MFMA_F32_32X32X16_FP8_FP8_gfx940_vcd_V_MFMA_I32_32X32X16I8_gfx940_acd_V_MFMA_I32_32X32X16I8_gfx940_vcd") 1, false, false, true, 12, 1, 11, 1,  1, 1}, // #42
  {DBGFIELD("V_SMFMAC_F32_16X16X32_BF16_e64_V_SMFMAC_F32_16X16X32_F16_e64_V_SMFMAC_F32_16X16X64_BF8_BF8_e64_V_SMFMAC_F32_16X16X64_BF8_FP8_e64_V_SMFMAC_F32_16X16X64_FP8_BF8_e64_V_SMFMAC_F32_16X16X64_FP8_FP8_e64_V_SMFMAC_I32_16X16X64_I8_e64_V_SMFMAC_F32_16X16X32_BF16_gfx940_V_SMFMAC_F32_16X16X32_F16_gfx940_V_SMFMAC_F32_16X16X64_BF8_BF8_gfx940_V_SMFMAC_F32_16X16X64_BF8_FP8_gfx940_V_SMFMAC_F32_16X16X64_FP8_BF8_gfx940_V_SMFMAC_F32_16X16X64_FP8_FP8_gfx940_V_SMFMAC_I32_16X16X64_I8_gfx940") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #43
  {DBGFIELD("V_SMFMAC_F32_32X32X16_BF16_e64_V_SMFMAC_F32_32X32X16_F16_e64_V_SMFMAC_F32_32X32X32_BF8_BF8_e64_V_SMFMAC_F32_32X32X32_BF8_FP8_e64_V_SMFMAC_F32_32X32X32_FP8_BF8_e64_V_SMFMAC_F32_32X32X32_FP8_FP8_e64_V_SMFMAC_I32_32X32X32_I8_e64_V_SMFMAC_F32_32X32X16_BF16_gfx940_V_SMFMAC_F32_32X32X16_F16_gfx940_V_SMFMAC_F32_32X32X32_BF8_BF8_gfx940_V_SMFMAC_F32_32X32X32_BF8_FP8_gfx940_V_SMFMAC_F32_32X32X32_FP8_BF8_gfx940_V_SMFMAC_F32_32X32X32_FP8_FP8_gfx940_V_SMFMAC_I32_32X32X32_I8_gfx940") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #44
  {DBGFIELD("Write32Bit")         1, false, false, true,  2, 1,  1, 1,  0, 0}, // #45
  {DBGFIELD("Write64Bit")         1, false, false, true,  2, 1,  8, 1,  0, 0}, // #46
  {DBGFIELD("WriteSALU")          1, false, false, true,  1, 1,  1, 1,  0, 0}, // #47
  {DBGFIELD("Write64Bit_MIVGPRRead") 1, false, false, true,  2, 1,  8, 1,  2, 1}, // #48
  {DBGFIELD("Write64Bit_ReadDefault") 1, false, false, true,  2, 1,  8, 1,  0, 0}, // #49
}; // SIQuarterSpeedModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, RetireOOO, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc GFX10SpeedModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  8191, false, false, false, 0, 0,  0, 0,  0, 0},
  {DBGFIELD("NullALU_WriteSALU")  1, false, false, true,  1, 2,  8, 1,  0, 0}, // #1
  {DBGFIELD("NullALU_Write32Bit") 1, false, false, true, 13, 2,  3, 1,  0, 0}, // #2
  {DBGFIELD("NullALU_WriteVMEM")  1, false, false, true, 15, 2, 18, 1,  0, 0}, // #3
  {DBGFIELD("NullALU_WriteLDS")   1, false, false, true, 17, 2, 19, 1,  0, 0}, // #4
  {DBGFIELD("NullALU_WriteExport") 1, false, false, true, 19, 2, 11, 1,  0, 0}, // #5
  {DBGFIELD("NullALU_WriteVMEM_WriteLDS") 2, false, false, true, 21, 3, 18, 2,  0, 0}, // #6
  {DBGFIELD("WriteBranch")        1, false, false, true,  8, 1, 20, 1,  0, 0}, // #7
  {DBGFIELD("NullALU")            8191, false, false, false,  0, 0,  0, 0,  0, 0}, // #8
  {DBGFIELD("NullALU_WriteBranch") 1, false, false, true,  8, 1, 20, 1,  0, 0}, // #9
  {DBGFIELD("NullALU_WriteSMEM")  1, false, false, true, 17, 2, 19, 1,  0, 0}, // #10
  {DBGFIELD("NullALU_WriteBarrier") 1, false, false, true,  8, 1, 21, 1,  0, 0}, // #11
  {DBGFIELD("NullALU_WriteSALU_Write64Bit") 2, false, false, true, 24, 3, 22, 2,  0, 0}, // #12
  {DBGFIELD("NullALU_Write32Bit_WriteSALU") 2, false, false, true, 24, 3, 24, 2,  0, 0}, // #13
  {DBGFIELD("NullALU_WriteDoubleAdd") 1, false, false, true, 13, 2, 26, 1,  0, 0}, // #14
  {DBGFIELD("NullALU_Write64Bit") 1, false, false, true, 13, 2, 23, 1,  0, 0}, // #15
  {DBGFIELD("NullALU_WriteTrans32") 1, false, false, true, 27, 2, 27, 1,  0, 0}, // #16
  {DBGFIELD("NullALU_WriteFloatCvt") 1, false, false, true, 13, 2,  3, 1,  0, 0}, // #17
  {DBGFIELD("NullALU_WriteDoubleCvt") 1, false, false, true, 13, 2, 26, 1,  0, 0}, // #18
  {DBGFIELD("NullALU_WriteFloatFMA") 1, false, false, true, 13, 2,  3, 1,  0, 0}, // #19
  {DBGFIELD("NullALU_WriteDouble") 1, false, false, true, 13, 2, 26, 1,  0, 0}, // #20
  {DBGFIELD("NullALU_WriteFloatFMA_WriteSALU") 2, false, false, true, 24, 3, 24, 2,  0, 0}, // #21
  {DBGFIELD("NullALU_WriteDouble_WriteSALU") 2, false, false, true, 24, 3, 28, 2,  0, 0}, // #22
  {DBGFIELD("NullALU_WriteIntMul_WriteSALU") 2, false, false, true, 24, 3, 30, 2,  0, 0}, // #23
  {DBGFIELD("NullALU_WriteQuarterRate32") 1, false, false, true, 13, 2,  5, 1,  0, 0}, // #24
  {DBGFIELD("NullALU_WriteIntMul") 1, false, false, true, 13, 2,  5, 1,  0, 0}, // #25
  {DBGFIELD("NullALU_WriteTrans64") 1, false, false, true, 29, 3, 32, 1,  0, 0}, // #26
  {DBGFIELD("NullALU_Write64Bit_Write64Bit") 2, false, false, true, 32, 2, 33, 2,  0, 0}, // #27
  {DBGFIELD("NullALU_Write32Bit_Write32Bit") 2, false, false, true, 32, 2, 35, 2,  0, 0}, // #28
  {DBGFIELD("COPY")               8190, false, false, false,  0, 0,  0, 0,  0, 0}, // #29
  {DBGFIELD("V_ACCVGPR_WRITE_B32_e64") 1, false, false, true, 13, 2,  3, 1,  0, 0}, // #30
  {DBGFIELD("V_MFMA_F32_4X4X1F32_e64_V_MFMA_F32_4X4X1F32_vgprcd_e64_V_MFMA_F32_4X4X2BF16_e64_V_MFMA_F32_4X4X2BF16_vgprcd_e64_V_MFMA_F32_4X4X4BF16_1K_e64_V_MFMA_F32_4X4X4BF16_1K_vgprcd_e64_V_MFMA_F32_4X4X4F16_e64_V_MFMA_F32_4X4X4F16_vgprcd_e64_V_MFMA_F64_4X4X4F64_e64_V_MFMA_F64_4X4X4F64_vgprcd_e64_V_MFMA_I32_4X4X4I8_e64_V_MFMA_I32_4X4X4I8_vgprcd_e64_V_MFMA_F32_4X4X1F32_gfx90a_acd_V_MFMA_F32_4X4X1F32_gfx90a_vcd_V_MFMA_F32_4X4X1F32_gfx940_acd_V_MFMA_F32_4X4X1F32_gfx940_vcd_V_MFMA_F32_4X4X1F32_vi_V_MFMA_F32_4X4X2BF16_gfx90a_acd_V_MFMA_F32_4X4X2BF16_gfx90a_vcd_V_MFMA_F32_4X4X2BF16_gfx940_acd_V_MFMA_F32_4X4X2BF16_gfx940_vcd_V_MFMA_F32_4X4X2BF16_vi_V_MFMA_F32_4X4X4BF16_1K_gfx90a_acd_V_MFMA_F32_4X4X4BF16_1K_gfx90a_vcd_V_MFMA_F32_4X4X4BF16_1K_gfx940_acd_V_MFMA_F32_4X4X4BF16_1K_gfx940_vcd_V_MFMA_F32_4X4X4F16_gfx90a_acd_V_MFMA_F32_4X4X4F16_gfx90a_vcd_V_MFMA_F32_4X4X4F16_gfx940_acd_V_MFMA_F32_4X4X4F16_gfx940_vcd_V_MFMA_F32_4X4X4F16_vi_V_MFMA_F64_4X4X4F64_gfx90a_acd_V_MFMA_F64_4X4X4F64_gfx90a_vcd_V_MFMA_F64_4X4X4F64_gfx940_acd_V_MFMA_F64_4X4X4F64_gfx940_vcd_V_MFMA_I32_4X4X4I8_gfx90a_acd_V_MFMA_I32_4X4X4I8_gfx90a_vcd_V_MFMA_I32_4X4X4I8_gfx940_acd_V_MFMA_I32_4X4X4I8_gfx940_vcd_V_MFMA_I32_4X4X4I8_vi") 1, false, false, true, 13, 2,  3, 1,  0, 0}, // #31
  {DBGFIELD("V_MFMA_F32_16X16X16BF16_1K_e64_V_MFMA_F32_16X16X16BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X16F16_e64_V_MFMA_F32_16X16X16F16_vgprcd_e64_V_MFMA_F32_16X16X1F32_e64_V_MFMA_F32_16X16X1F32_mac_e64_V_MFMA_F32_16X16X1F32_mac_vgprcd_e64_V_MFMA_F32_16X16X1F32_vgprcd_e64_V_MFMA_F32_16X16X2BF16_e64_V_MFMA_F32_16X16X2BF16_mac_e64_V_MFMA_F32_16X16X2BF16_mac_vgprcd_e64_V_MFMA_F32_16X16X2BF16_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_BF8_e64_V_MFMA_F32_16X16X32_BF8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_FP8_e64_V_MFMA_F32_16X16X32_BF8_FP8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_BF8_e64_V_MFMA_F32_16X16X32_FP8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_FP8_e64_V_MFMA_F32_16X16X32_FP8_FP8_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_e64_V_MFMA_F32_16X16X4BF16_1K_mac_e64_V_MFMA_F32_16X16X4BF16_1K_mac_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X4F16_e64_V_MFMA_F32_16X16X4F16_mac_e64_V_MFMA_F32_16X16X4F16_mac_vgprcd_e64_V_MFMA_F32_16X16X4F16_vgprcd_e64_V_MFMA_F32_16X16X4F32_e64_V_MFMA_F32_16X16X4F32_vgprcd_e64_V_MFMA_F32_16X16X8BF16_e64_V_MFMA_F32_16X16X8BF16_vgprcd_e64_V_MFMA_F32_16X16X8XF32_e64_V_MFMA_F32_16X16X8XF32_vgprcd_e64_V_MFMA_F64_16X16X4F64_e64_V_MFMA_F64_16X16X4F64_mac_e64_V_MFMA_F64_16X16X4F64_mac_vgprcd_e64_V_MFMA_F64_16X16X4F64_vgprcd_e64_V_MFMA_I32_16X16X16I8_e64_V_MFMA_I32_16X16X16I8_vgprcd_e64_V_MFMA_I32_16X16X32I8_e64_V_MFMA_I32_16X16X32I8_vgprcd_e64_V_MFMA_I32_16X16X4I8_e64_V_MFMA_I32_16X16X4I8_mac_e64_V_MFMA_I32_16X16X4I8_mac_vgprcd_e64_V_MFMA_I32_16X16X4I8_vgprcd_e64_V_MFMA_F32_16X16X16BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X16BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X16BF16_1K_gfx940_acd_V_MFMA_F32_16X16X16BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X16F16_gfx90a_acd_V_MFMA_F32_16X16X16F16_gfx90a_vcd_V_MFMA_F32_16X16X16F16_gfx940_acd_V_MFMA_F32_16X16X16F16_gfx940_vcd_V_MFMA_F32_16X16X16F16_vi_V_MFMA_F32_16X16X1F32_gfx90a_acd_V_MFMA_F32_16X16X1F32_gfx90a_vcd_V_MFMA_F32_16X16X1F32_gfx940_acd_V_MFMA_F32_16X16X1F32_gfx940_vcd_V_MFMA_F32_16X16X1F32_vi_V_MFMA_F32_16X16X2BF16_gfx90a_acd_V_MFMA_F32_16X16X2BF16_gfx90a_vcd_V_MFMA_F32_16X16X2BF16_gfx940_acd_V_MFMA_F32_16X16X2BF16_gfx940_vcd_V_MFMA_F32_16X16X2BF16_vi_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx940_acd_V_MFMA_F32_16X16X4BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X4F16_gfx90a_acd_V_MFMA_F32_16X16X4F16_gfx90a_vcd_V_MFMA_F32_16X16X4F16_gfx940_acd_V_MFMA_F32_16X16X4F16_gfx940_vcd_V_MFMA_F32_16X16X4F16_vi_V_MFMA_F32_16X16X4F32_gfx90a_acd_V_MFMA_F32_16X16X4F32_gfx90a_vcd_V_MFMA_F32_16X16X4F32_gfx940_acd_V_MFMA_F32_16X16X4F32_gfx940_vcd_V_MFMA_F32_16X16X4F32_vi_V_MFMA_F32_16X16X8BF16_gfx90a_acd_V_MFMA_F32_16X16X8BF16_gfx90a_vcd_V_MFMA_F32_16X16X8BF16_gfx940_acd_V_MFMA_F32_16X16X8BF16_gfx940_vcd_V_MFMA_F32_16X16X8BF16_vi_V_MFMA_F32_16X16X8XF32_gfx940_acd_V_MFMA_F32_16X16X8XF32_gfx940_vcd_V_MFMA_F64_16X16X4F64_gfx90a_acd_V_MFMA_F64_16X16X4F64_gfx90a_vcd_V_MFMA_F64_16X16X4F64_gfx940_acd_V_MFMA_F64_16X16X4F64_gfx940_vcd_V_MFMA_I32_16X16X16I8_gfx90a_acd_V_MFMA_I32_16X16X16I8_gfx90a_vcd_V_MFMA_I32_16X16X16I8_gfx940_acd_V_MFMA_I32_16X16X16I8_gfx940_vcd_V_MFMA_I32_16X16X16I8_vi_V_MFMA_I32_16X16X32I8_gfx940_acd_V_MFMA_I32_16X16X32I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_gfx90a_acd_V_MFMA_I32_16X16X4I8_gfx90a_vcd_V_MFMA_I32_16X16X4I8_gfx940_acd_V_MFMA_I32_16X16X4I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_vi") 1, false, false, true, 13, 2,  3, 1,  0, 0}, // #32
  {DBGFIELD("V_MFMA_F32_32X32X16_BF8_BF8_e64_V_MFMA_F32_32X32X16_BF8_BF8_mac_e64_V_MFMA_F32_32X32X16_BF8_BF8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_BF8_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_FP8_e64_V_MFMA_F32_32X32X16_BF8_FP8_mac_e64_V_MFMA_F32_32X32X16_BF8_FP8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_FP8_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_BF8_e64_V_MFMA_F32_32X32X16_FP8_BF8_mac_e64_V_MFMA_F32_32X32X16_FP8_BF8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_BF8_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_FP8_e64_V_MFMA_F32_32X32X16_FP8_FP8_mac_e64_V_MFMA_F32_32X32X16_FP8_FP8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_FP8_vgprcd_e64_V_MFMA_F32_32X32X1F32_e64_V_MFMA_F32_32X32X1F32_mac_e64_V_MFMA_F32_32X32X1F32_mac_vgprcd_e64_V_MFMA_F32_32X32X1F32_vgprcd_e64_V_MFMA_F32_32X32X2BF16_e64_V_MFMA_F32_32X32X2BF16_mac_e64_V_MFMA_F32_32X32X2BF16_mac_vgprcd_e64_V_MFMA_F32_32X32X2BF16_vgprcd_e64_V_MFMA_F32_32X32X2F32_e64_V_MFMA_F32_32X32X2F32_mac_e64_V_MFMA_F32_32X32X2F32_mac_vgprcd_e64_V_MFMA_F32_32X32X2F32_vgprcd_e64_V_MFMA_F32_32X32X4BF16_1K_e64_V_MFMA_F32_32X32X4BF16_1K_mac_e64_V_MFMA_F32_32X32X4BF16_1K_mac_vgprcd_e64_V_MFMA_F32_32X32X4BF16_1K_vgprcd_e64_V_MFMA_F32_32X32X4BF16_e64_V_MFMA_F32_32X32X4BF16_mac_e64_V_MFMA_F32_32X32X4BF16_mac_vgprcd_e64_V_MFMA_F32_32X32X4BF16_vgprcd_e64_V_MFMA_F32_32X32X4F16_e64_V_MFMA_F32_32X32X4F16_mac_e64_V_MFMA_F32_32X32X4F16_mac_vgprcd_e64_V_MFMA_F32_32X32X4F16_vgprcd_e64_V_MFMA_F32_32X32X4XF32_e64_V_MFMA_F32_32X32X4XF32_mac_e64_V_MFMA_F32_32X32X4XF32_mac_vgprcd_e64_V_MFMA_F32_32X32X4XF32_vgprcd_e64_V_MFMA_F32_32X32X8BF16_1K_e64_V_MFMA_F32_32X32X8BF16_1K_mac_e64_V_MFMA_F32_32X32X8BF16_1K_mac_vgprcd_e64_V_MFMA_F32_32X32X8BF16_1K_vgprcd_e64_V_MFMA_F32_32X32X8F16_e64_V_MFMA_F32_32X32X8F16_mac_e64_V_MFMA_F32_32X32X8F16_mac_vgprcd_e64_V_MFMA_F32_32X32X8F16_vgprcd_e64_V_MFMA_I32_32X32X16I8_e64_V_MFMA_I32_32X32X16I8_mac_e64_V_MFMA_I32_32X32X16I8_mac_vgprcd_e64_V_MFMA_I32_32X32X16I8_vgprcd_e64_V_MFMA_I32_32X32X4I8_e64_V_MFMA_I32_32X32X4I8_mac_e64_V_MFMA_I32_32X32X4I8_mac_vgprcd_e64_V_MFMA_I32_32X32X4I8_vgprcd_e64_V_MFMA_I32_32X32X8I8_e64_V_MFMA_I32_32X32X8I8_mac_e64_V_MFMA_I32_32X32X8I8_mac_vgprcd_e64_V_MFMA_I32_32X32X8I8_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_BF8_gfx940_acd_V_MFMA_F32_32X32X16_BF8_BF8_gfx940_vcd_V_MFMA_F32_32X32X16_BF8_FP8_gfx940_acd_V_MFMA_F32_32X32X16_BF8_FP8_gfx940_vcd_V_MFMA_F32_32X32X16_FP8_BF8_gfx940_acd_V_MFMA_F32_32X32X16_FP8_BF8_gfx940_vcd_V_MFMA_F32_32X32X16_FP8_FP8_gfx940_acd_V_MFMA_F32_32X32X16_FP8_FP8_gfx940_vcd_V_MFMA_F32_32X32X1F32_gfx90a_acd_V_MFMA_F32_32X32X1F32_gfx90a_vcd_V_MFMA_F32_32X32X1F32_gfx940_acd_V_MFMA_F32_32X32X1F32_gfx940_vcd_V_MFMA_F32_32X32X1F32_vi_V_MFMA_F32_32X32X2BF16_gfx90a_acd_V_MFMA_F32_32X32X2BF16_gfx90a_vcd_V_MFMA_F32_32X32X2BF16_gfx940_acd_V_MFMA_F32_32X32X2BF16_gfx940_vcd_V_MFMA_F32_32X32X2BF16_vi_V_MFMA_F32_32X32X2F32_gfx90a_acd_V_MFMA_F32_32X32X2F32_gfx90a_vcd_V_MFMA_F32_32X32X2F32_gfx940_acd_V_MFMA_F32_32X32X2F32_gfx940_vcd_V_MFMA_F32_32X32X2F32_vi_V_MFMA_F32_32X32X4BF16_1K_gfx90a_acd_V_MFMA_F32_32X32X4BF16_1K_gfx90a_vcd_V_MFMA_F32_32X32X4BF16_1K_gfx940_acd_V_MFMA_F32_32X32X4BF16_1K_gfx940_vcd_V_MFMA_F32_32X32X4BF16_gfx90a_acd_V_MFMA_F32_32X32X4BF16_gfx90a_vcd_V_MFMA_F32_32X32X4BF16_gfx940_acd_V_MFMA_F32_32X32X4BF16_gfx940_vcd_V_MFMA_F32_32X32X4BF16_vi_V_MFMA_F32_32X32X4F16_gfx90a_acd_V_MFMA_F32_32X32X4F16_gfx90a_vcd_V_MFMA_F32_32X32X4F16_gfx940_acd_V_MFMA_F32_32X32X4F16_gfx940_vcd_V_MFMA_F32_32X32X4F16_vi_V_MFMA_F32_32X32X4XF32_gfx940_acd_V_MFMA_F32_32X32X4XF32_gfx940_vcd_V_MFMA_F32_32X32X8BF16_1K_gfx90a_acd_V_MFMA_F32_32X32X8BF16_1K_gfx90a_vcd_V_MFMA_F32_32X32X8BF16_1K_gfx940_acd_V_MFMA_F32_32X32X8BF16_1K_gfx940_vcd_V_MFMA_F32_32X32X8F16_gfx90a_acd_V_MFMA_F32_32X32X8F16_gfx90a_vcd_V_MFMA_F32_32X32X8F16_gfx940_acd_V_MFMA_F32_32X32X8F16_gfx940_vcd_V_MFMA_F32_32X32X8F16_vi_V_MFMA_I32_32X32X16I8_gfx940_acd_V_MFMA_I32_32X32X16I8_gfx940_vcd_V_MFMA_I32_32X32X4I8_gfx90a_acd_V_MFMA_I32_32X32X4I8_gfx90a_vcd_V_MFMA_I32_32X32X4I8_gfx940_acd_V_MFMA_I32_32X32X4I8_gfx940_vcd_V_MFMA_I32_32X32X4I8_vi_V_MFMA_I32_32X32X8I8_gfx90a_acd_V_MFMA_I32_32X32X8I8_gfx90a_vcd_V_MFMA_I32_32X32X8I8_gfx940_acd_V_MFMA_I32_32X32X8I8_gfx940_vcd_V_MFMA_I32_32X32X8I8_vi") 1, false, false, true, 13, 2,  3, 1,  0, 0}, // #33
  {DBGFIELD("V_MFMA_F32_4X4X1F32_e64_V_MFMA_F32_4X4X1F32_vgprcd_e64_V_MFMA_F32_4X4X2BF16_e64_V_MFMA_F32_4X4X2BF16_vgprcd_e64_V_MFMA_F32_4X4X4BF16_1K_e64_V_MFMA_F32_4X4X4BF16_1K_vgprcd_e64_V_MFMA_F32_4X4X4F16_e64_V_MFMA_F32_4X4X4F16_vgprcd_e64_V_MFMA_I32_4X4X4I8_e64_V_MFMA_I32_4X4X4I8_vgprcd_e64_V_MFMA_F32_4X4X1F32_gfx90a_acd_V_MFMA_F32_4X4X1F32_gfx90a_vcd_V_MFMA_F32_4X4X1F32_gfx940_acd_V_MFMA_F32_4X4X1F32_gfx940_vcd_V_MFMA_F32_4X4X1F32_vi_V_MFMA_F32_4X4X2BF16_gfx90a_acd_V_MFMA_F32_4X4X2BF16_gfx90a_vcd_V_MFMA_F32_4X4X2BF16_gfx940_acd_V_MFMA_F32_4X4X2BF16_gfx940_vcd_V_MFMA_F32_4X4X2BF16_vi_V_MFMA_F32_4X4X4BF16_1K_gfx90a_acd_V_MFMA_F32_4X4X4BF16_1K_gfx90a_vcd_V_MFMA_F32_4X4X4BF16_1K_gfx940_acd_V_MFMA_F32_4X4X4BF16_1K_gfx940_vcd_V_MFMA_F32_4X4X4F16_gfx90a_acd_V_MFMA_F32_4X4X4F16_gfx90a_vcd_V_MFMA_F32_4X4X4F16_gfx940_acd_V_MFMA_F32_4X4X4F16_gfx940_vcd_V_MFMA_F32_4X4X4F16_vi_V_MFMA_I32_4X4X4I8_gfx90a_acd_V_MFMA_I32_4X4X4I8_gfx90a_vcd_V_MFMA_I32_4X4X4I8_gfx940_acd_V_MFMA_I32_4X4X4I8_gfx940_vcd_V_MFMA_I32_4X4X4I8_vi") 1, false, false, true, 13, 2,  3, 1,  0, 0}, // #34
  {DBGFIELD("V_MFMA_F32_16X16X16BF16_1K_e64_V_MFMA_F32_16X16X16BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X16F16_e64_V_MFMA_F32_16X16X16F16_vgprcd_e64_V_MFMA_F32_16X16X1F32_e64_V_MFMA_F32_16X16X1F32_mac_e64_V_MFMA_F32_16X16X1F32_mac_vgprcd_e64_V_MFMA_F32_16X16X1F32_vgprcd_e64_V_MFMA_F32_16X16X2BF16_e64_V_MFMA_F32_16X16X2BF16_mac_e64_V_MFMA_F32_16X16X2BF16_mac_vgprcd_e64_V_MFMA_F32_16X16X2BF16_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_BF8_e64_V_MFMA_F32_16X16X32_BF8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_FP8_e64_V_MFMA_F32_16X16X32_BF8_FP8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_BF8_e64_V_MFMA_F32_16X16X32_FP8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_FP8_e64_V_MFMA_F32_16X16X32_FP8_FP8_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_e64_V_MFMA_F32_16X16X4BF16_1K_mac_e64_V_MFMA_F32_16X16X4BF16_1K_mac_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X4F16_e64_V_MFMA_F32_16X16X4F16_mac_e64_V_MFMA_F32_16X16X4F16_mac_vgprcd_e64_V_MFMA_F32_16X16X4F16_vgprcd_e64_V_MFMA_F32_16X16X4F32_e64_V_MFMA_F32_16X16X4F32_vgprcd_e64_V_MFMA_F32_16X16X8BF16_e64_V_MFMA_F32_16X16X8BF16_vgprcd_e64_V_MFMA_F32_16X16X8XF32_e64_V_MFMA_F32_16X16X8XF32_vgprcd_e64_V_MFMA_I32_16X16X16I8_e64_V_MFMA_I32_16X16X16I8_vgprcd_e64_V_MFMA_I32_16X16X32I8_e64_V_MFMA_I32_16X16X32I8_vgprcd_e64_V_MFMA_I32_16X16X4I8_e64_V_MFMA_I32_16X16X4I8_mac_e64_V_MFMA_I32_16X16X4I8_mac_vgprcd_e64_V_MFMA_I32_16X16X4I8_vgprcd_e64_V_MFMA_F32_16X16X16BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X16BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X16BF16_1K_gfx940_acd_V_MFMA_F32_16X16X16BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X16F16_gfx90a_acd_V_MFMA_F32_16X16X16F16_gfx90a_vcd_V_MFMA_F32_16X16X16F16_gfx940_acd_V_MFMA_F32_16X16X16F16_gfx940_vcd_V_MFMA_F32_16X16X16F16_vi_V_MFMA_F32_16X16X1F32_gfx90a_acd_V_MFMA_F32_16X16X1F32_gfx90a_vcd_V_MFMA_F32_16X16X1F32_gfx940_acd_V_MFMA_F32_16X16X1F32_gfx940_vcd_V_MFMA_F32_16X16X1F32_vi_V_MFMA_F32_16X16X2BF16_gfx90a_acd_V_MFMA_F32_16X16X2BF16_gfx90a_vcd_V_MFMA_F32_16X16X2BF16_gfx940_acd_V_MFMA_F32_16X16X2BF16_gfx940_vcd_V_MFMA_F32_16X16X2BF16_vi_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx940_acd_V_MFMA_F32_16X16X4BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X4F16_gfx90a_acd_V_MFMA_F32_16X16X4F16_gfx90a_vcd_V_MFMA_F32_16X16X4F16_gfx940_acd_V_MFMA_F32_16X16X4F16_gfx940_vcd_V_MFMA_F32_16X16X4F16_vi_V_MFMA_F32_16X16X4F32_gfx90a_acd_V_MFMA_F32_16X16X4F32_gfx90a_vcd_V_MFMA_F32_16X16X4F32_gfx940_acd_V_MFMA_F32_16X16X4F32_gfx940_vcd_V_MFMA_F32_16X16X4F32_vi_V_MFMA_F32_16X16X8BF16_gfx90a_acd_V_MFMA_F32_16X16X8BF16_gfx90a_vcd_V_MFMA_F32_16X16X8BF16_gfx940_acd_V_MFMA_F32_16X16X8BF16_gfx940_vcd_V_MFMA_F32_16X16X8BF16_vi_V_MFMA_F32_16X16X8XF32_gfx940_acd_V_MFMA_F32_16X16X8XF32_gfx940_vcd_V_MFMA_I32_16X16X16I8_gfx90a_acd_V_MFMA_I32_16X16X16I8_gfx90a_vcd_V_MFMA_I32_16X16X16I8_gfx940_acd_V_MFMA_I32_16X16X16I8_gfx940_vcd_V_MFMA_I32_16X16X16I8_vi_V_MFMA_I32_16X16X32I8_gfx940_acd_V_MFMA_I32_16X16X32I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_gfx90a_acd_V_MFMA_I32_16X16X4I8_gfx90a_vcd_V_MFMA_I32_16X16X4I8_gfx940_acd_V_MFMA_I32_16X16X4I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_vi") 1, false, false, true, 13, 2,  3, 1,  0, 0}, // #35
  {DBGFIELD("V_MFMA_F32_16X16X8XF32_e64_V_MFMA_F32_16X16X8XF32_vgprcd_e64_V_MFMA_F32_16X16X8XF32_gfx940_acd_V_MFMA_F32_16X16X8XF32_gfx940_vcd") 1, false, false, true, 13, 2,  3, 1,  0, 0}, // #36
  {DBGFIELD("V_MFMA_F32_16X16X16BF16_1K_e64_V_MFMA_F32_16X16X16BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X16F16_e64_V_MFMA_F32_16X16X16F16_vgprcd_e64_V_MFMA_I32_16X16X16I8_e64_V_MFMA_I32_16X16X16I8_vgprcd_e64_V_MFMA_F32_16X16X16BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X16BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X16BF16_1K_gfx940_acd_V_MFMA_F32_16X16X16BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X16F16_gfx90a_acd_V_MFMA_F32_16X16X16F16_gfx90a_vcd_V_MFMA_F32_16X16X16F16_gfx940_acd_V_MFMA_F32_16X16X16F16_gfx940_vcd_V_MFMA_F32_16X16X16F16_vi_V_MFMA_I32_16X16X16I8_gfx90a_acd_V_MFMA_I32_16X16X16I8_gfx90a_vcd_V_MFMA_I32_16X16X16I8_gfx940_acd_V_MFMA_I32_16X16X16I8_gfx940_vcd_V_MFMA_I32_16X16X16I8_vi") 1, false, false, true, 13, 2,  3, 1,  0, 0}, // #37
  {DBGFIELD("V_MFMA_F32_16X16X32_BF8_BF8_e64_V_MFMA_F32_16X16X32_BF8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_FP8_e64_V_MFMA_F32_16X16X32_BF8_FP8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_BF8_e64_V_MFMA_F32_16X16X32_FP8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_FP8_e64_V_MFMA_F32_16X16X32_FP8_FP8_vgprcd_e64_V_MFMA_I32_16X16X32I8_e64_V_MFMA_I32_16X16X32I8_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_vcd_V_MFMA_I32_16X16X32I8_gfx940_acd_V_MFMA_I32_16X16X32I8_gfx940_vcd") 1, false, false, true, 13, 2,  3, 1,  0, 0}, // #38
  {DBGFIELD("V_MFMA_F32_16X16X1F32_e64_V_MFMA_F32_16X16X1F32_mac_e64_V_MFMA_F32_16X16X1F32_mac_vgprcd_e64_V_MFMA_F32_16X16X1F32_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_e64_V_MFMA_F32_16X16X4BF16_1K_mac_e64_V_MFMA_F32_16X16X4BF16_1K_mac_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X4F16_e64_V_MFMA_F32_16X16X4F16_mac_e64_V_MFMA_F32_16X16X4F16_mac_vgprcd_e64_V_MFMA_F32_16X16X4F16_vgprcd_e64_V_MFMA_F32_16X16X4F32_e64_V_MFMA_F32_16X16X4F32_vgprcd_e64_V_MFMA_I32_16X16X4I8_e64_V_MFMA_I32_16X16X4I8_mac_e64_V_MFMA_I32_16X16X4I8_mac_vgprcd_e64_V_MFMA_I32_16X16X4I8_vgprcd_e64_V_MFMA_F32_16X16X1F32_gfx90a_acd_V_MFMA_F32_16X16X1F32_gfx90a_vcd_V_MFMA_F32_16X16X1F32_gfx940_acd_V_MFMA_F32_16X16X1F32_gfx940_vcd_V_MFMA_F32_16X16X1F32_vi_V_MFMA_F32_16X16X4BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx940_acd_V_MFMA_F32_16X16X4BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X4F16_gfx90a_acd_V_MFMA_F32_16X16X4F16_gfx90a_vcd_V_MFMA_F32_16X16X4F16_gfx940_acd_V_MFMA_F32_16X16X4F16_gfx940_vcd_V_MFMA_F32_16X16X4F16_vi_V_MFMA_F32_16X16X4F32_gfx90a_acd_V_MFMA_F32_16X16X4F32_gfx90a_vcd_V_MFMA_F32_16X16X4F32_gfx940_acd_V_MFMA_F32_16X16X4F32_gfx940_vcd_V_MFMA_F32_16X16X4F32_vi_V_MFMA_I32_16X16X4I8_gfx90a_acd_V_MFMA_I32_16X16X4I8_gfx90a_vcd_V_MFMA_I32_16X16X4I8_gfx940_acd_V_MFMA_I32_16X16X4I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_vi") 1, false, false, true, 13, 2,  3, 1,  0, 0}, // #39
  {DBGFIELD("V_MFMA_F32_32X32X4XF32_e64_V_MFMA_F32_32X32X4XF32_mac_e64_V_MFMA_F32_32X32X4XF32_mac_vgprcd_e64_V_MFMA_F32_32X32X4XF32_vgprcd_e64_V_MFMA_F32_32X32X4XF32_gfx940_acd_V_MFMA_F32_32X32X4XF32_gfx940_vcd") 1, false, false, true, 13, 2,  3, 1,  0, 0}, // #40
  {DBGFIELD("V_MFMA_F32_32X32X8BF16_1K_e64_V_MFMA_F32_32X32X8BF16_1K_mac_e64_V_MFMA_F32_32X32X8BF16_1K_mac_vgprcd_e64_V_MFMA_F32_32X32X8BF16_1K_vgprcd_e64_V_MFMA_F32_32X32X8F16_e64_V_MFMA_F32_32X32X8F16_mac_e64_V_MFMA_F32_32X32X8F16_mac_vgprcd_e64_V_MFMA_F32_32X32X8F16_vgprcd_e64_V_MFMA_I32_32X32X8I8_e64_V_MFMA_I32_32X32X8I8_mac_e64_V_MFMA_I32_32X32X8I8_mac_vgprcd_e64_V_MFMA_I32_32X32X8I8_vgprcd_e64_V_MFMA_F32_32X32X8BF16_1K_gfx90a_acd_V_MFMA_F32_32X32X8BF16_1K_gfx90a_vcd_V_MFMA_F32_32X32X8BF16_1K_gfx940_acd_V_MFMA_F32_32X32X8BF16_1K_gfx940_vcd_V_MFMA_F32_32X32X8F16_gfx90a_acd_V_MFMA_F32_32X32X8F16_gfx90a_vcd_V_MFMA_F32_32X32X8F16_gfx940_acd_V_MFMA_F32_32X32X8F16_gfx940_vcd_V_MFMA_F32_32X32X8F16_vi_V_MFMA_I32_32X32X8I8_gfx90a_acd_V_MFMA_I32_32X32X8I8_gfx90a_vcd_V_MFMA_I32_32X32X8I8_gfx940_acd_V_MFMA_I32_32X32X8I8_gfx940_vcd_V_MFMA_I32_32X32X8I8_vi") 1, false, false, true, 13, 2,  3, 1,  0, 0}, // #41
  {DBGFIELD("V_MFMA_F32_32X32X16_BF8_BF8_e64_V_MFMA_F32_32X32X16_BF8_BF8_mac_e64_V_MFMA_F32_32X32X16_BF8_BF8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_BF8_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_FP8_e64_V_MFMA_F32_32X32X16_BF8_FP8_mac_e64_V_MFMA_F32_32X32X16_BF8_FP8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_FP8_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_BF8_e64_V_MFMA_F32_32X32X16_FP8_BF8_mac_e64_V_MFMA_F32_32X32X16_FP8_BF8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_BF8_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_FP8_e64_V_MFMA_F32_32X32X16_FP8_FP8_mac_e64_V_MFMA_F32_32X32X16_FP8_FP8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_FP8_vgprcd_e64_V_MFMA_I32_32X32X16I8_e64_V_MFMA_I32_32X32X16I8_mac_e64_V_MFMA_I32_32X32X16I8_mac_vgprcd_e64_V_MFMA_I32_32X32X16I8_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_BF8_gfx940_acd_V_MFMA_F32_32X32X16_BF8_BF8_gfx940_vcd_V_MFMA_F32_32X32X16_BF8_FP8_gfx940_acd_V_MFMA_F32_32X32X16_BF8_FP8_gfx940_vcd_V_MFMA_F32_32X32X16_FP8_BF8_gfx940_acd_V_MFMA_F32_32X32X16_FP8_BF8_gfx940_vcd_V_MFMA_F32_32X32X16_FP8_FP8_gfx940_acd_V_MFMA_F32_32X32X16_FP8_FP8_gfx940_vcd_V_MFMA_I32_32X32X16I8_gfx940_acd_V_MFMA_I32_32X32X16I8_gfx940_vcd") 1, false, false, true, 13, 2,  3, 1,  0, 0}, // #42
  {DBGFIELD("V_SMFMAC_F32_16X16X32_BF16_e64_V_SMFMAC_F32_16X16X32_F16_e64_V_SMFMAC_F32_16X16X64_BF8_BF8_e64_V_SMFMAC_F32_16X16X64_BF8_FP8_e64_V_SMFMAC_F32_16X16X64_FP8_BF8_e64_V_SMFMAC_F32_16X16X64_FP8_FP8_e64_V_SMFMAC_I32_16X16X64_I8_e64_V_SMFMAC_F32_16X16X32_BF16_gfx940_V_SMFMAC_F32_16X16X32_F16_gfx940_V_SMFMAC_F32_16X16X64_BF8_BF8_gfx940_V_SMFMAC_F32_16X16X64_BF8_FP8_gfx940_V_SMFMAC_F32_16X16X64_FP8_BF8_gfx940_V_SMFMAC_F32_16X16X64_FP8_FP8_gfx940_V_SMFMAC_I32_16X16X64_I8_gfx940") 1, false, false, true, 13, 2,  3, 1,  0, 0}, // #43
  {DBGFIELD("V_SMFMAC_F32_32X32X16_BF16_e64_V_SMFMAC_F32_32X32X16_F16_e64_V_SMFMAC_F32_32X32X32_BF8_BF8_e64_V_SMFMAC_F32_32X32X32_BF8_FP8_e64_V_SMFMAC_F32_32X32X32_FP8_BF8_e64_V_SMFMAC_F32_32X32X32_FP8_FP8_e64_V_SMFMAC_I32_32X32X32_I8_e64_V_SMFMAC_F32_32X32X16_BF16_gfx940_V_SMFMAC_F32_32X32X16_F16_gfx940_V_SMFMAC_F32_32X32X32_BF8_BF8_gfx940_V_SMFMAC_F32_32X32X32_BF8_FP8_gfx940_V_SMFMAC_F32_32X32X32_FP8_BF8_gfx940_V_SMFMAC_F32_32X32X32_FP8_FP8_gfx940_V_SMFMAC_I32_32X32X32_I8_gfx940") 1, false, false, true, 13, 2,  3, 1,  0, 0}, // #44
  {DBGFIELD("Write32Bit")         1, false, false, true, 13, 2,  3, 1,  0, 0}, // #45
  {DBGFIELD("Write64Bit")         1, false, false, true, 13, 2, 23, 1,  0, 0}, // #46
  {DBGFIELD("WriteSALU")          1, false, false, true,  1, 2,  8, 1,  0, 0}, // #47
  {DBGFIELD("Write64Bit_MIVGPRRead") 0, false, false, false,  0, 0,  0, 0,  0, 0}, // #48
  {DBGFIELD("Write64Bit_ReadDefault") 0, false, false, false,  0, 0,  0, 0,  0, 0}, // #49
}; // GFX10SpeedModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, RetireOOO, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc GFX11SpeedModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  8191, false, false, false, 0, 0,  0, 0,  0, 0},
  {DBGFIELD("NullALU_WriteSALU")  1, false, false, false,  1, 2,  8, 1,  0, 0}, // #1
  {DBGFIELD("NullALU_Write32Bit") 1, false, false, false, 27, 2,  3, 1,  0, 0}, // #2
  {DBGFIELD("NullALU_WriteVMEM")  1, false, false, false, 13, 2, 18, 1,  0, 0}, // #3
  {DBGFIELD("NullALU_WriteLDS")   1, false, false, false, 17, 2, 19, 1,  0, 0}, // #4
  {DBGFIELD("NullALU_WriteExport") 1, false, false, false, 19, 2, 11, 1,  0, 0}, // #5
  {DBGFIELD("NullALU_WriteVMEM_WriteLDS") 2, false, false, false, 34, 3, 18, 2,  0, 0}, // #6
  {DBGFIELD("WriteBranch")        1, false, false, false,  8, 1, 20, 1,  0, 0}, // #7
  {DBGFIELD("NullALU")            8191, false, false, false,  0, 0,  0, 0,  0, 0}, // #8
  {DBGFIELD("NullALU_WriteBranch") 1, false, false, false,  8, 1, 20, 1,  0, 0}, // #9
  {DBGFIELD("NullALU_WriteSMEM")  1, false, false, false, 17, 2, 19, 1,  0, 0}, // #10
  {DBGFIELD("NullALU_WriteBarrier") 1, false, false, false,  8, 1, 21, 1,  0, 0}, // #11
  {DBGFIELD("NullALU_WriteSALU_Write64Bit") 2, false, false, false, 37, 3, 22, 2,  0, 0}, // #12
  {DBGFIELD("NullALU_Write32Bit_WriteSALU") 2, false, false, false, 37, 3, 24, 2,  0, 0}, // #13
  {DBGFIELD("NullALU_WriteDoubleAdd") 1, false, false, false, 27, 2, 37, 1,  0, 0}, // #14
  {DBGFIELD("NullALU_Write64Bit") 1, false, false, false, 27, 2, 23, 1,  0, 0}, // #15
  {DBGFIELD("NullALU_WriteTrans32") 1, false, false, false, 27, 2, 27, 1,  0, 0}, // #16
  {DBGFIELD("NullALU_WriteFloatCvt") 1, false, false, false, 27, 2,  3, 1,  0, 0}, // #17
  {DBGFIELD("NullALU_WriteDoubleCvt") 1, false, false, false, 27, 2, 37, 1,  0, 0}, // #18
  {DBGFIELD("NullALU_WriteFloatFMA") 1, false, false, false, 27, 2,  3, 1,  0, 0}, // #19
  {DBGFIELD("NullALU_WriteDouble") 1, false, false, false, 27, 2, 37, 1,  0, 0}, // #20
  {DBGFIELD("NullALU_WriteFloatFMA_WriteSALU") 2, false, false, false, 37, 3, 24, 2,  0, 0}, // #21
  {DBGFIELD("NullALU_WriteDouble_WriteSALU") 2, false, false, false, 37, 3, 38, 2,  0, 0}, // #22
  {DBGFIELD("NullALU_WriteIntMul_WriteSALU") 2, false, false, false, 37, 3, 30, 2,  0, 0}, // #23
  {DBGFIELD("NullALU_WriteQuarterRate32") 1, false, false, false, 27, 2,  5, 1,  0, 0}, // #24
  {DBGFIELD("NullALU_WriteIntMul") 1, false, false, false, 27, 2,  5, 1,  0, 0}, // #25
  {DBGFIELD("NullALU_WriteTrans64") 1, false, false, false, 27, 2, 40, 1,  0, 0}, // #26
  {DBGFIELD("NullALU_Write64Bit_Write64Bit") 2, false, false, false, 40, 2, 33, 2,  0, 0}, // #27
  {DBGFIELD("NullALU_Write32Bit_Write32Bit") 2, false, false, false, 40, 2, 35, 2,  0, 0}, // #28
  {DBGFIELD("COPY")               8190, false, false, false,  0, 0,  0, 0,  0, 0}, // #29
  {DBGFIELD("V_ACCVGPR_WRITE_B32_e64") 1, false, false, false, 27, 2,  3, 1,  0, 0}, // #30
  {DBGFIELD("V_MFMA_F32_4X4X1F32_e64_V_MFMA_F32_4X4X1F32_vgprcd_e64_V_MFMA_F32_4X4X2BF16_e64_V_MFMA_F32_4X4X2BF16_vgprcd_e64_V_MFMA_F32_4X4X4BF16_1K_e64_V_MFMA_F32_4X4X4BF16_1K_vgprcd_e64_V_MFMA_F32_4X4X4F16_e64_V_MFMA_F32_4X4X4F16_vgprcd_e64_V_MFMA_F64_4X4X4F64_e64_V_MFMA_F64_4X4X4F64_vgprcd_e64_V_MFMA_I32_4X4X4I8_e64_V_MFMA_I32_4X4X4I8_vgprcd_e64_V_MFMA_F32_4X4X1F32_gfx90a_acd_V_MFMA_F32_4X4X1F32_gfx90a_vcd_V_MFMA_F32_4X4X1F32_gfx940_acd_V_MFMA_F32_4X4X1F32_gfx940_vcd_V_MFMA_F32_4X4X1F32_vi_V_MFMA_F32_4X4X2BF16_gfx90a_acd_V_MFMA_F32_4X4X2BF16_gfx90a_vcd_V_MFMA_F32_4X4X2BF16_gfx940_acd_V_MFMA_F32_4X4X2BF16_gfx940_vcd_V_MFMA_F32_4X4X2BF16_vi_V_MFMA_F32_4X4X4BF16_1K_gfx90a_acd_V_MFMA_F32_4X4X4BF16_1K_gfx90a_vcd_V_MFMA_F32_4X4X4BF16_1K_gfx940_acd_V_MFMA_F32_4X4X4BF16_1K_gfx940_vcd_V_MFMA_F32_4X4X4F16_gfx90a_acd_V_MFMA_F32_4X4X4F16_gfx90a_vcd_V_MFMA_F32_4X4X4F16_gfx940_acd_V_MFMA_F32_4X4X4F16_gfx940_vcd_V_MFMA_F32_4X4X4F16_vi_V_MFMA_F64_4X4X4F64_gfx90a_acd_V_MFMA_F64_4X4X4F64_gfx90a_vcd_V_MFMA_F64_4X4X4F64_gfx940_acd_V_MFMA_F64_4X4X4F64_gfx940_vcd_V_MFMA_I32_4X4X4I8_gfx90a_acd_V_MFMA_I32_4X4X4I8_gfx90a_vcd_V_MFMA_I32_4X4X4I8_gfx940_acd_V_MFMA_I32_4X4X4I8_gfx940_vcd_V_MFMA_I32_4X4X4I8_vi") 1, false, false, false, 27, 2,  3, 1,  0, 0}, // #31
  {DBGFIELD("V_MFMA_F32_16X16X16BF16_1K_e64_V_MFMA_F32_16X16X16BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X16F16_e64_V_MFMA_F32_16X16X16F16_vgprcd_e64_V_MFMA_F32_16X16X1F32_e64_V_MFMA_F32_16X16X1F32_mac_e64_V_MFMA_F32_16X16X1F32_mac_vgprcd_e64_V_MFMA_F32_16X16X1F32_vgprcd_e64_V_MFMA_F32_16X16X2BF16_e64_V_MFMA_F32_16X16X2BF16_mac_e64_V_MFMA_F32_16X16X2BF16_mac_vgprcd_e64_V_MFMA_F32_16X16X2BF16_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_BF8_e64_V_MFMA_F32_16X16X32_BF8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_FP8_e64_V_MFMA_F32_16X16X32_BF8_FP8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_BF8_e64_V_MFMA_F32_16X16X32_FP8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_FP8_e64_V_MFMA_F32_16X16X32_FP8_FP8_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_e64_V_MFMA_F32_16X16X4BF16_1K_mac_e64_V_MFMA_F32_16X16X4BF16_1K_mac_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X4F16_e64_V_MFMA_F32_16X16X4F16_mac_e64_V_MFMA_F32_16X16X4F16_mac_vgprcd_e64_V_MFMA_F32_16X16X4F16_vgprcd_e64_V_MFMA_F32_16X16X4F32_e64_V_MFMA_F32_16X16X4F32_vgprcd_e64_V_MFMA_F32_16X16X8BF16_e64_V_MFMA_F32_16X16X8BF16_vgprcd_e64_V_MFMA_F32_16X16X8XF32_e64_V_MFMA_F32_16X16X8XF32_vgprcd_e64_V_MFMA_F64_16X16X4F64_e64_V_MFMA_F64_16X16X4F64_mac_e64_V_MFMA_F64_16X16X4F64_mac_vgprcd_e64_V_MFMA_F64_16X16X4F64_vgprcd_e64_V_MFMA_I32_16X16X16I8_e64_V_MFMA_I32_16X16X16I8_vgprcd_e64_V_MFMA_I32_16X16X32I8_e64_V_MFMA_I32_16X16X32I8_vgprcd_e64_V_MFMA_I32_16X16X4I8_e64_V_MFMA_I32_16X16X4I8_mac_e64_V_MFMA_I32_16X16X4I8_mac_vgprcd_e64_V_MFMA_I32_16X16X4I8_vgprcd_e64_V_MFMA_F32_16X16X16BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X16BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X16BF16_1K_gfx940_acd_V_MFMA_F32_16X16X16BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X16F16_gfx90a_acd_V_MFMA_F32_16X16X16F16_gfx90a_vcd_V_MFMA_F32_16X16X16F16_gfx940_acd_V_MFMA_F32_16X16X16F16_gfx940_vcd_V_MFMA_F32_16X16X16F16_vi_V_MFMA_F32_16X16X1F32_gfx90a_acd_V_MFMA_F32_16X16X1F32_gfx90a_vcd_V_MFMA_F32_16X16X1F32_gfx940_acd_V_MFMA_F32_16X16X1F32_gfx940_vcd_V_MFMA_F32_16X16X1F32_vi_V_MFMA_F32_16X16X2BF16_gfx90a_acd_V_MFMA_F32_16X16X2BF16_gfx90a_vcd_V_MFMA_F32_16X16X2BF16_gfx940_acd_V_MFMA_F32_16X16X2BF16_gfx940_vcd_V_MFMA_F32_16X16X2BF16_vi_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx940_acd_V_MFMA_F32_16X16X4BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X4F16_gfx90a_acd_V_MFMA_F32_16X16X4F16_gfx90a_vcd_V_MFMA_F32_16X16X4F16_gfx940_acd_V_MFMA_F32_16X16X4F16_gfx940_vcd_V_MFMA_F32_16X16X4F16_vi_V_MFMA_F32_16X16X4F32_gfx90a_acd_V_MFMA_F32_16X16X4F32_gfx90a_vcd_V_MFMA_F32_16X16X4F32_gfx940_acd_V_MFMA_F32_16X16X4F32_gfx940_vcd_V_MFMA_F32_16X16X4F32_vi_V_MFMA_F32_16X16X8BF16_gfx90a_acd_V_MFMA_F32_16X16X8BF16_gfx90a_vcd_V_MFMA_F32_16X16X8BF16_gfx940_acd_V_MFMA_F32_16X16X8BF16_gfx940_vcd_V_MFMA_F32_16X16X8BF16_vi_V_MFMA_F32_16X16X8XF32_gfx940_acd_V_MFMA_F32_16X16X8XF32_gfx940_vcd_V_MFMA_F64_16X16X4F64_gfx90a_acd_V_MFMA_F64_16X16X4F64_gfx90a_vcd_V_MFMA_F64_16X16X4F64_gfx940_acd_V_MFMA_F64_16X16X4F64_gfx940_vcd_V_MFMA_I32_16X16X16I8_gfx90a_acd_V_MFMA_I32_16X16X16I8_gfx90a_vcd_V_MFMA_I32_16X16X16I8_gfx940_acd_V_MFMA_I32_16X16X16I8_gfx940_vcd_V_MFMA_I32_16X16X16I8_vi_V_MFMA_I32_16X16X32I8_gfx940_acd_V_MFMA_I32_16X16X32I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_gfx90a_acd_V_MFMA_I32_16X16X4I8_gfx90a_vcd_V_MFMA_I32_16X16X4I8_gfx940_acd_V_MFMA_I32_16X16X4I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_vi") 1, false, false, false, 27, 2,  3, 1,  0, 0}, // #32
  {DBGFIELD("V_MFMA_F32_32X32X16_BF8_BF8_e64_V_MFMA_F32_32X32X16_BF8_BF8_mac_e64_V_MFMA_F32_32X32X16_BF8_BF8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_BF8_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_FP8_e64_V_MFMA_F32_32X32X16_BF8_FP8_mac_e64_V_MFMA_F32_32X32X16_BF8_FP8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_FP8_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_BF8_e64_V_MFMA_F32_32X32X16_FP8_BF8_mac_e64_V_MFMA_F32_32X32X16_FP8_BF8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_BF8_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_FP8_e64_V_MFMA_F32_32X32X16_FP8_FP8_mac_e64_V_MFMA_F32_32X32X16_FP8_FP8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_FP8_vgprcd_e64_V_MFMA_F32_32X32X1F32_e64_V_MFMA_F32_32X32X1F32_mac_e64_V_MFMA_F32_32X32X1F32_mac_vgprcd_e64_V_MFMA_F32_32X32X1F32_vgprcd_e64_V_MFMA_F32_32X32X2BF16_e64_V_MFMA_F32_32X32X2BF16_mac_e64_V_MFMA_F32_32X32X2BF16_mac_vgprcd_e64_V_MFMA_F32_32X32X2BF16_vgprcd_e64_V_MFMA_F32_32X32X2F32_e64_V_MFMA_F32_32X32X2F32_mac_e64_V_MFMA_F32_32X32X2F32_mac_vgprcd_e64_V_MFMA_F32_32X32X2F32_vgprcd_e64_V_MFMA_F32_32X32X4BF16_1K_e64_V_MFMA_F32_32X32X4BF16_1K_mac_e64_V_MFMA_F32_32X32X4BF16_1K_mac_vgprcd_e64_V_MFMA_F32_32X32X4BF16_1K_vgprcd_e64_V_MFMA_F32_32X32X4BF16_e64_V_MFMA_F32_32X32X4BF16_mac_e64_V_MFMA_F32_32X32X4BF16_mac_vgprcd_e64_V_MFMA_F32_32X32X4BF16_vgprcd_e64_V_MFMA_F32_32X32X4F16_e64_V_MFMA_F32_32X32X4F16_mac_e64_V_MFMA_F32_32X32X4F16_mac_vgprcd_e64_V_MFMA_F32_32X32X4F16_vgprcd_e64_V_MFMA_F32_32X32X4XF32_e64_V_MFMA_F32_32X32X4XF32_mac_e64_V_MFMA_F32_32X32X4XF32_mac_vgprcd_e64_V_MFMA_F32_32X32X4XF32_vgprcd_e64_V_MFMA_F32_32X32X8BF16_1K_e64_V_MFMA_F32_32X32X8BF16_1K_mac_e64_V_MFMA_F32_32X32X8BF16_1K_mac_vgprcd_e64_V_MFMA_F32_32X32X8BF16_1K_vgprcd_e64_V_MFMA_F32_32X32X8F16_e64_V_MFMA_F32_32X32X8F16_mac_e64_V_MFMA_F32_32X32X8F16_mac_vgprcd_e64_V_MFMA_F32_32X32X8F16_vgprcd_e64_V_MFMA_I32_32X32X16I8_e64_V_MFMA_I32_32X32X16I8_mac_e64_V_MFMA_I32_32X32X16I8_mac_vgprcd_e64_V_MFMA_I32_32X32X16I8_vgprcd_e64_V_MFMA_I32_32X32X4I8_e64_V_MFMA_I32_32X32X4I8_mac_e64_V_MFMA_I32_32X32X4I8_mac_vgprcd_e64_V_MFMA_I32_32X32X4I8_vgprcd_e64_V_MFMA_I32_32X32X8I8_e64_V_MFMA_I32_32X32X8I8_mac_e64_V_MFMA_I32_32X32X8I8_mac_vgprcd_e64_V_MFMA_I32_32X32X8I8_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_BF8_gfx940_acd_V_MFMA_F32_32X32X16_BF8_BF8_gfx940_vcd_V_MFMA_F32_32X32X16_BF8_FP8_gfx940_acd_V_MFMA_F32_32X32X16_BF8_FP8_gfx940_vcd_V_MFMA_F32_32X32X16_FP8_BF8_gfx940_acd_V_MFMA_F32_32X32X16_FP8_BF8_gfx940_vcd_V_MFMA_F32_32X32X16_FP8_FP8_gfx940_acd_V_MFMA_F32_32X32X16_FP8_FP8_gfx940_vcd_V_MFMA_F32_32X32X1F32_gfx90a_acd_V_MFMA_F32_32X32X1F32_gfx90a_vcd_V_MFMA_F32_32X32X1F32_gfx940_acd_V_MFMA_F32_32X32X1F32_gfx940_vcd_V_MFMA_F32_32X32X1F32_vi_V_MFMA_F32_32X32X2BF16_gfx90a_acd_V_MFMA_F32_32X32X2BF16_gfx90a_vcd_V_MFMA_F32_32X32X2BF16_gfx940_acd_V_MFMA_F32_32X32X2BF16_gfx940_vcd_V_MFMA_F32_32X32X2BF16_vi_V_MFMA_F32_32X32X2F32_gfx90a_acd_V_MFMA_F32_32X32X2F32_gfx90a_vcd_V_MFMA_F32_32X32X2F32_gfx940_acd_V_MFMA_F32_32X32X2F32_gfx940_vcd_V_MFMA_F32_32X32X2F32_vi_V_MFMA_F32_32X32X4BF16_1K_gfx90a_acd_V_MFMA_F32_32X32X4BF16_1K_gfx90a_vcd_V_MFMA_F32_32X32X4BF16_1K_gfx940_acd_V_MFMA_F32_32X32X4BF16_1K_gfx940_vcd_V_MFMA_F32_32X32X4BF16_gfx90a_acd_V_MFMA_F32_32X32X4BF16_gfx90a_vcd_V_MFMA_F32_32X32X4BF16_gfx940_acd_V_MFMA_F32_32X32X4BF16_gfx940_vcd_V_MFMA_F32_32X32X4BF16_vi_V_MFMA_F32_32X32X4F16_gfx90a_acd_V_MFMA_F32_32X32X4F16_gfx90a_vcd_V_MFMA_F32_32X32X4F16_gfx940_acd_V_MFMA_F32_32X32X4F16_gfx940_vcd_V_MFMA_F32_32X32X4F16_vi_V_MFMA_F32_32X32X4XF32_gfx940_acd_V_MFMA_F32_32X32X4XF32_gfx940_vcd_V_MFMA_F32_32X32X8BF16_1K_gfx90a_acd_V_MFMA_F32_32X32X8BF16_1K_gfx90a_vcd_V_MFMA_F32_32X32X8BF16_1K_gfx940_acd_V_MFMA_F32_32X32X8BF16_1K_gfx940_vcd_V_MFMA_F32_32X32X8F16_gfx90a_acd_V_MFMA_F32_32X32X8F16_gfx90a_vcd_V_MFMA_F32_32X32X8F16_gfx940_acd_V_MFMA_F32_32X32X8F16_gfx940_vcd_V_MFMA_F32_32X32X8F16_vi_V_MFMA_I32_32X32X16I8_gfx940_acd_V_MFMA_I32_32X32X16I8_gfx940_vcd_V_MFMA_I32_32X32X4I8_gfx90a_acd_V_MFMA_I32_32X32X4I8_gfx90a_vcd_V_MFMA_I32_32X32X4I8_gfx940_acd_V_MFMA_I32_32X32X4I8_gfx940_vcd_V_MFMA_I32_32X32X4I8_vi_V_MFMA_I32_32X32X8I8_gfx90a_acd_V_MFMA_I32_32X32X8I8_gfx90a_vcd_V_MFMA_I32_32X32X8I8_gfx940_acd_V_MFMA_I32_32X32X8I8_gfx940_vcd_V_MFMA_I32_32X32X8I8_vi") 1, false, false, false, 27, 2,  3, 1,  0, 0}, // #33
  {DBGFIELD("V_MFMA_F32_4X4X1F32_e64_V_MFMA_F32_4X4X1F32_vgprcd_e64_V_MFMA_F32_4X4X2BF16_e64_V_MFMA_F32_4X4X2BF16_vgprcd_e64_V_MFMA_F32_4X4X4BF16_1K_e64_V_MFMA_F32_4X4X4BF16_1K_vgprcd_e64_V_MFMA_F32_4X4X4F16_e64_V_MFMA_F32_4X4X4F16_vgprcd_e64_V_MFMA_I32_4X4X4I8_e64_V_MFMA_I32_4X4X4I8_vgprcd_e64_V_MFMA_F32_4X4X1F32_gfx90a_acd_V_MFMA_F32_4X4X1F32_gfx90a_vcd_V_MFMA_F32_4X4X1F32_gfx940_acd_V_MFMA_F32_4X4X1F32_gfx940_vcd_V_MFMA_F32_4X4X1F32_vi_V_MFMA_F32_4X4X2BF16_gfx90a_acd_V_MFMA_F32_4X4X2BF16_gfx90a_vcd_V_MFMA_F32_4X4X2BF16_gfx940_acd_V_MFMA_F32_4X4X2BF16_gfx940_vcd_V_MFMA_F32_4X4X2BF16_vi_V_MFMA_F32_4X4X4BF16_1K_gfx90a_acd_V_MFMA_F32_4X4X4BF16_1K_gfx90a_vcd_V_MFMA_F32_4X4X4BF16_1K_gfx940_acd_V_MFMA_F32_4X4X4BF16_1K_gfx940_vcd_V_MFMA_F32_4X4X4F16_gfx90a_acd_V_MFMA_F32_4X4X4F16_gfx90a_vcd_V_MFMA_F32_4X4X4F16_gfx940_acd_V_MFMA_F32_4X4X4F16_gfx940_vcd_V_MFMA_F32_4X4X4F16_vi_V_MFMA_I32_4X4X4I8_gfx90a_acd_V_MFMA_I32_4X4X4I8_gfx90a_vcd_V_MFMA_I32_4X4X4I8_gfx940_acd_V_MFMA_I32_4X4X4I8_gfx940_vcd_V_MFMA_I32_4X4X4I8_vi") 1, false, false, false, 27, 2,  3, 1,  0, 0}, // #34
  {DBGFIELD("V_MFMA_F32_16X16X16BF16_1K_e64_V_MFMA_F32_16X16X16BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X16F16_e64_V_MFMA_F32_16X16X16F16_vgprcd_e64_V_MFMA_F32_16X16X1F32_e64_V_MFMA_F32_16X16X1F32_mac_e64_V_MFMA_F32_16X16X1F32_mac_vgprcd_e64_V_MFMA_F32_16X16X1F32_vgprcd_e64_V_MFMA_F32_16X16X2BF16_e64_V_MFMA_F32_16X16X2BF16_mac_e64_V_MFMA_F32_16X16X2BF16_mac_vgprcd_e64_V_MFMA_F32_16X16X2BF16_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_BF8_e64_V_MFMA_F32_16X16X32_BF8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_FP8_e64_V_MFMA_F32_16X16X32_BF8_FP8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_BF8_e64_V_MFMA_F32_16X16X32_FP8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_FP8_e64_V_MFMA_F32_16X16X32_FP8_FP8_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_e64_V_MFMA_F32_16X16X4BF16_1K_mac_e64_V_MFMA_F32_16X16X4BF16_1K_mac_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X4F16_e64_V_MFMA_F32_16X16X4F16_mac_e64_V_MFMA_F32_16X16X4F16_mac_vgprcd_e64_V_MFMA_F32_16X16X4F16_vgprcd_e64_V_MFMA_F32_16X16X4F32_e64_V_MFMA_F32_16X16X4F32_vgprcd_e64_V_MFMA_F32_16X16X8BF16_e64_V_MFMA_F32_16X16X8BF16_vgprcd_e64_V_MFMA_F32_16X16X8XF32_e64_V_MFMA_F32_16X16X8XF32_vgprcd_e64_V_MFMA_I32_16X16X16I8_e64_V_MFMA_I32_16X16X16I8_vgprcd_e64_V_MFMA_I32_16X16X32I8_e64_V_MFMA_I32_16X16X32I8_vgprcd_e64_V_MFMA_I32_16X16X4I8_e64_V_MFMA_I32_16X16X4I8_mac_e64_V_MFMA_I32_16X16X4I8_mac_vgprcd_e64_V_MFMA_I32_16X16X4I8_vgprcd_e64_V_MFMA_F32_16X16X16BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X16BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X16BF16_1K_gfx940_acd_V_MFMA_F32_16X16X16BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X16F16_gfx90a_acd_V_MFMA_F32_16X16X16F16_gfx90a_vcd_V_MFMA_F32_16X16X16F16_gfx940_acd_V_MFMA_F32_16X16X16F16_gfx940_vcd_V_MFMA_F32_16X16X16F16_vi_V_MFMA_F32_16X16X1F32_gfx90a_acd_V_MFMA_F32_16X16X1F32_gfx90a_vcd_V_MFMA_F32_16X16X1F32_gfx940_acd_V_MFMA_F32_16X16X1F32_gfx940_vcd_V_MFMA_F32_16X16X1F32_vi_V_MFMA_F32_16X16X2BF16_gfx90a_acd_V_MFMA_F32_16X16X2BF16_gfx90a_vcd_V_MFMA_F32_16X16X2BF16_gfx940_acd_V_MFMA_F32_16X16X2BF16_gfx940_vcd_V_MFMA_F32_16X16X2BF16_vi_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx940_acd_V_MFMA_F32_16X16X4BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X4F16_gfx90a_acd_V_MFMA_F32_16X16X4F16_gfx90a_vcd_V_MFMA_F32_16X16X4F16_gfx940_acd_V_MFMA_F32_16X16X4F16_gfx940_vcd_V_MFMA_F32_16X16X4F16_vi_V_MFMA_F32_16X16X4F32_gfx90a_acd_V_MFMA_F32_16X16X4F32_gfx90a_vcd_V_MFMA_F32_16X16X4F32_gfx940_acd_V_MFMA_F32_16X16X4F32_gfx940_vcd_V_MFMA_F32_16X16X4F32_vi_V_MFMA_F32_16X16X8BF16_gfx90a_acd_V_MFMA_F32_16X16X8BF16_gfx90a_vcd_V_MFMA_F32_16X16X8BF16_gfx940_acd_V_MFMA_F32_16X16X8BF16_gfx940_vcd_V_MFMA_F32_16X16X8BF16_vi_V_MFMA_F32_16X16X8XF32_gfx940_acd_V_MFMA_F32_16X16X8XF32_gfx940_vcd_V_MFMA_I32_16X16X16I8_gfx90a_acd_V_MFMA_I32_16X16X16I8_gfx90a_vcd_V_MFMA_I32_16X16X16I8_gfx940_acd_V_MFMA_I32_16X16X16I8_gfx940_vcd_V_MFMA_I32_16X16X16I8_vi_V_MFMA_I32_16X16X32I8_gfx940_acd_V_MFMA_I32_16X16X32I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_gfx90a_acd_V_MFMA_I32_16X16X4I8_gfx90a_vcd_V_MFMA_I32_16X16X4I8_gfx940_acd_V_MFMA_I32_16X16X4I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_vi") 1, false, false, false, 27, 2,  3, 1,  0, 0}, // #35
  {DBGFIELD("V_MFMA_F32_16X16X8XF32_e64_V_MFMA_F32_16X16X8XF32_vgprcd_e64_V_MFMA_F32_16X16X8XF32_gfx940_acd_V_MFMA_F32_16X16X8XF32_gfx940_vcd") 1, false, false, false, 27, 2,  3, 1,  0, 0}, // #36
  {DBGFIELD("V_MFMA_F32_16X16X16BF16_1K_e64_V_MFMA_F32_16X16X16BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X16F16_e64_V_MFMA_F32_16X16X16F16_vgprcd_e64_V_MFMA_I32_16X16X16I8_e64_V_MFMA_I32_16X16X16I8_vgprcd_e64_V_MFMA_F32_16X16X16BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X16BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X16BF16_1K_gfx940_acd_V_MFMA_F32_16X16X16BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X16F16_gfx90a_acd_V_MFMA_F32_16X16X16F16_gfx90a_vcd_V_MFMA_F32_16X16X16F16_gfx940_acd_V_MFMA_F32_16X16X16F16_gfx940_vcd_V_MFMA_F32_16X16X16F16_vi_V_MFMA_I32_16X16X16I8_gfx90a_acd_V_MFMA_I32_16X16X16I8_gfx90a_vcd_V_MFMA_I32_16X16X16I8_gfx940_acd_V_MFMA_I32_16X16X16I8_gfx940_vcd_V_MFMA_I32_16X16X16I8_vi") 1, false, false, false, 27, 2,  3, 1,  0, 0}, // #37
  {DBGFIELD("V_MFMA_F32_16X16X32_BF8_BF8_e64_V_MFMA_F32_16X16X32_BF8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_FP8_e64_V_MFMA_F32_16X16X32_BF8_FP8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_BF8_e64_V_MFMA_F32_16X16X32_FP8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_FP8_e64_V_MFMA_F32_16X16X32_FP8_FP8_vgprcd_e64_V_MFMA_I32_16X16X32I8_e64_V_MFMA_I32_16X16X32I8_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_vcd_V_MFMA_I32_16X16X32I8_gfx940_acd_V_MFMA_I32_16X16X32I8_gfx940_vcd") 1, false, false, false, 27, 2,  3, 1,  0, 0}, // #38
  {DBGFIELD("V_MFMA_F32_16X16X1F32_e64_V_MFMA_F32_16X16X1F32_mac_e64_V_MFMA_F32_16X16X1F32_mac_vgprcd_e64_V_MFMA_F32_16X16X1F32_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_e64_V_MFMA_F32_16X16X4BF16_1K_mac_e64_V_MFMA_F32_16X16X4BF16_1K_mac_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X4F16_e64_V_MFMA_F32_16X16X4F16_mac_e64_V_MFMA_F32_16X16X4F16_mac_vgprcd_e64_V_MFMA_F32_16X16X4F16_vgprcd_e64_V_MFMA_F32_16X16X4F32_e64_V_MFMA_F32_16X16X4F32_vgprcd_e64_V_MFMA_I32_16X16X4I8_e64_V_MFMA_I32_16X16X4I8_mac_e64_V_MFMA_I32_16X16X4I8_mac_vgprcd_e64_V_MFMA_I32_16X16X4I8_vgprcd_e64_V_MFMA_F32_16X16X1F32_gfx90a_acd_V_MFMA_F32_16X16X1F32_gfx90a_vcd_V_MFMA_F32_16X16X1F32_gfx940_acd_V_MFMA_F32_16X16X1F32_gfx940_vcd_V_MFMA_F32_16X16X1F32_vi_V_MFMA_F32_16X16X4BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx940_acd_V_MFMA_F32_16X16X4BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X4F16_gfx90a_acd_V_MFMA_F32_16X16X4F16_gfx90a_vcd_V_MFMA_F32_16X16X4F16_gfx940_acd_V_MFMA_F32_16X16X4F16_gfx940_vcd_V_MFMA_F32_16X16X4F16_vi_V_MFMA_F32_16X16X4F32_gfx90a_acd_V_MFMA_F32_16X16X4F32_gfx90a_vcd_V_MFMA_F32_16X16X4F32_gfx940_acd_V_MFMA_F32_16X16X4F32_gfx940_vcd_V_MFMA_F32_16X16X4F32_vi_V_MFMA_I32_16X16X4I8_gfx90a_acd_V_MFMA_I32_16X16X4I8_gfx90a_vcd_V_MFMA_I32_16X16X4I8_gfx940_acd_V_MFMA_I32_16X16X4I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_vi") 1, false, false, false, 27, 2,  3, 1,  0, 0}, // #39
  {DBGFIELD("V_MFMA_F32_32X32X4XF32_e64_V_MFMA_F32_32X32X4XF32_mac_e64_V_MFMA_F32_32X32X4XF32_mac_vgprcd_e64_V_MFMA_F32_32X32X4XF32_vgprcd_e64_V_MFMA_F32_32X32X4XF32_gfx940_acd_V_MFMA_F32_32X32X4XF32_gfx940_vcd") 1, false, false, false, 27, 2,  3, 1,  0, 0}, // #40
  {DBGFIELD("V_MFMA_F32_32X32X8BF16_1K_e64_V_MFMA_F32_32X32X8BF16_1K_mac_e64_V_MFMA_F32_32X32X8BF16_1K_mac_vgprcd_e64_V_MFMA_F32_32X32X8BF16_1K_vgprcd_e64_V_MFMA_F32_32X32X8F16_e64_V_MFMA_F32_32X32X8F16_mac_e64_V_MFMA_F32_32X32X8F16_mac_vgprcd_e64_V_MFMA_F32_32X32X8F16_vgprcd_e64_V_MFMA_I32_32X32X8I8_e64_V_MFMA_I32_32X32X8I8_mac_e64_V_MFMA_I32_32X32X8I8_mac_vgprcd_e64_V_MFMA_I32_32X32X8I8_vgprcd_e64_V_MFMA_F32_32X32X8BF16_1K_gfx90a_acd_V_MFMA_F32_32X32X8BF16_1K_gfx90a_vcd_V_MFMA_F32_32X32X8BF16_1K_gfx940_acd_V_MFMA_F32_32X32X8BF16_1K_gfx940_vcd_V_MFMA_F32_32X32X8F16_gfx90a_acd_V_MFMA_F32_32X32X8F16_gfx90a_vcd_V_MFMA_F32_32X32X8F16_gfx940_acd_V_MFMA_F32_32X32X8F16_gfx940_vcd_V_MFMA_F32_32X32X8F16_vi_V_MFMA_I32_32X32X8I8_gfx90a_acd_V_MFMA_I32_32X32X8I8_gfx90a_vcd_V_MFMA_I32_32X32X8I8_gfx940_acd_V_MFMA_I32_32X32X8I8_gfx940_vcd_V_MFMA_I32_32X32X8I8_vi") 1, false, false, false, 27, 2,  3, 1,  0, 0}, // #41
  {DBGFIELD("V_MFMA_F32_32X32X16_BF8_BF8_e64_V_MFMA_F32_32X32X16_BF8_BF8_mac_e64_V_MFMA_F32_32X32X16_BF8_BF8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_BF8_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_FP8_e64_V_MFMA_F32_32X32X16_BF8_FP8_mac_e64_V_MFMA_F32_32X32X16_BF8_FP8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_FP8_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_BF8_e64_V_MFMA_F32_32X32X16_FP8_BF8_mac_e64_V_MFMA_F32_32X32X16_FP8_BF8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_BF8_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_FP8_e64_V_MFMA_F32_32X32X16_FP8_FP8_mac_e64_V_MFMA_F32_32X32X16_FP8_FP8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_FP8_vgprcd_e64_V_MFMA_I32_32X32X16I8_e64_V_MFMA_I32_32X32X16I8_mac_e64_V_MFMA_I32_32X32X16I8_mac_vgprcd_e64_V_MFMA_I32_32X32X16I8_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_BF8_gfx940_acd_V_MFMA_F32_32X32X16_BF8_BF8_gfx940_vcd_V_MFMA_F32_32X32X16_BF8_FP8_gfx940_acd_V_MFMA_F32_32X32X16_BF8_FP8_gfx940_vcd_V_MFMA_F32_32X32X16_FP8_BF8_gfx940_acd_V_MFMA_F32_32X32X16_FP8_BF8_gfx940_vcd_V_MFMA_F32_32X32X16_FP8_FP8_gfx940_acd_V_MFMA_F32_32X32X16_FP8_FP8_gfx940_vcd_V_MFMA_I32_32X32X16I8_gfx940_acd_V_MFMA_I32_32X32X16I8_gfx940_vcd") 1, false, false, false, 27, 2,  3, 1,  0, 0}, // #42
  {DBGFIELD("V_SMFMAC_F32_16X16X32_BF16_e64_V_SMFMAC_F32_16X16X32_F16_e64_V_SMFMAC_F32_16X16X64_BF8_BF8_e64_V_SMFMAC_F32_16X16X64_BF8_FP8_e64_V_SMFMAC_F32_16X16X64_FP8_BF8_e64_V_SMFMAC_F32_16X16X64_FP8_FP8_e64_V_SMFMAC_I32_16X16X64_I8_e64_V_SMFMAC_F32_16X16X32_BF16_gfx940_V_SMFMAC_F32_16X16X32_F16_gfx940_V_SMFMAC_F32_16X16X64_BF8_BF8_gfx940_V_SMFMAC_F32_16X16X64_BF8_FP8_gfx940_V_SMFMAC_F32_16X16X64_FP8_BF8_gfx940_V_SMFMAC_F32_16X16X64_FP8_FP8_gfx940_V_SMFMAC_I32_16X16X64_I8_gfx940") 1, false, false, false, 27, 2,  3, 1,  0, 0}, // #43
  {DBGFIELD("V_SMFMAC_F32_32X32X16_BF16_e64_V_SMFMAC_F32_32X32X16_F16_e64_V_SMFMAC_F32_32X32X32_BF8_BF8_e64_V_SMFMAC_F32_32X32X32_BF8_FP8_e64_V_SMFMAC_F32_32X32X32_FP8_BF8_e64_V_SMFMAC_F32_32X32X32_FP8_FP8_e64_V_SMFMAC_I32_32X32X32_I8_e64_V_SMFMAC_F32_32X32X16_BF16_gfx940_V_SMFMAC_F32_32X32X16_F16_gfx940_V_SMFMAC_F32_32X32X32_BF8_BF8_gfx940_V_SMFMAC_F32_32X32X32_BF8_FP8_gfx940_V_SMFMAC_F32_32X32X32_FP8_BF8_gfx940_V_SMFMAC_F32_32X32X32_FP8_FP8_gfx940_V_SMFMAC_I32_32X32X32_I8_gfx940") 1, false, false, false, 27, 2,  3, 1,  0, 0}, // #44
  {DBGFIELD("Write32Bit")         1, false, false, false, 27, 2,  3, 1,  0, 0}, // #45
  {DBGFIELD("Write64Bit")         1, false, false, false, 27, 2, 23, 1,  0, 0}, // #46
  {DBGFIELD("WriteSALU")          1, false, false, false,  1, 2,  8, 1,  0, 0}, // #47
  {DBGFIELD("Write64Bit_MIVGPRRead") 0, false, false, false,  0, 0,  0, 0,  0, 0}, // #48
  {DBGFIELD("Write64Bit_ReadDefault") 0, false, false, false,  0, 0,  0, 0,  0, 0}, // #49
}; // GFX11SpeedModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, RetireOOO, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc SIFullSpeedModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  8191, false, false, false, 0, 0,  0, 0,  0, 0},
  {DBGFIELD("NullALU_WriteSALU")  1, false, false, true,  1, 1,  1, 1,  0, 0}, // #1
  {DBGFIELD("NullALU_Write32Bit") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #2
  {DBGFIELD("NullALU_WriteVMEM")  1, false, false, true,  3, 1,  2, 1,  0, 0}, // #3
  {DBGFIELD("NullALU_WriteLDS")   1, false, false, true,  4, 1,  3, 1,  0, 0}, // #4
  {DBGFIELD("NullALU_WriteExport") 1, false, false, true,  5, 1,  4, 1,  0, 0}, // #5
  {DBGFIELD("NullALU_WriteVMEM_WriteLDS") 2, false, false, true,  6, 2,  2, 2,  0, 0}, // #6
  {DBGFIELD("WriteBranch")        1, false, false, true,  8, 1,  5, 1,  0, 0}, // #7
  {DBGFIELD("NullALU")            8191, false, false, false,  0, 0,  0, 0,  0, 0}, // #8
  {DBGFIELD("NullALU_WriteBranch") 1, false, false, true,  8, 1,  5, 1,  0, 0}, // #9
  {DBGFIELD("NullALU_WriteSMEM")  1, false, false, true,  4, 1,  3, 1,  0, 0}, // #10
  {DBGFIELD("NullALU_WriteBarrier") 1, false, false, true,  8, 1,  6, 1,  0, 0}, // #11
  {DBGFIELD("NullALU_WriteSALU_Write64Bit") 2, false, false, true,  1, 2,  7, 2,  0, 0}, // #12
  {DBGFIELD("NullALU_Write32Bit_WriteSALU") 2, false, false, true,  1, 2,  9, 2,  0, 0}, // #13
  {DBGFIELD("NullALU_WriteDoubleAdd") 1, false, false, true,  2, 1,  8, 1,  0, 0}, // #14
  {DBGFIELD("NullALU_Write64Bit") 1, false, false, true,  2, 1,  8, 1,  0, 0}, // #15
  {DBGFIELD("NullALU_WriteTrans32") 1, false, false, true,  2, 1,  4, 1,  0, 0}, // #16
  {DBGFIELD("NullALU_WriteFloatCvt") 1, false, false, true,  2, 1,  4, 1,  0, 0}, // #17
  {DBGFIELD("NullALU_WriteDoubleCvt") 1, false, false, true,  2, 1,  4, 1,  0, 0}, // #18
  {DBGFIELD("NullALU_WriteFloatFMA") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #19
  {DBGFIELD("NullALU_WriteDouble") 1, false, false, true,  2, 1,  4, 1,  0, 0}, // #20
  {DBGFIELD("NullALU_WriteFloatFMA_WriteSALU") 2, false, false, true,  1, 2,  9, 2,  0, 0}, // #21
  {DBGFIELD("NullALU_WriteDouble_WriteSALU") 2, false, false, true,  1, 2, 14, 2,  0, 0}, // #22
  {DBGFIELD("NullALU_WriteIntMul_WriteSALU") 2, false, false, true,  1, 2, 14, 2,  0, 0}, // #23
  {DBGFIELD("NullALU_WriteQuarterRate32") 1, false, false, true,  2, 1,  4, 1,  0, 0}, // #24
  {DBGFIELD("NullALU_WriteIntMul") 1, false, false, true,  2, 1,  4, 1,  0, 0}, // #25
  {DBGFIELD("NullALU_WriteTrans64") 1, false, false, true,  2, 1,  4, 1,  0, 0}, // #26
  {DBGFIELD("NullALU_Write64Bit_Write64Bit") 2, false, false, true,  9, 1, 16, 2,  0, 0}, // #27
  {DBGFIELD("NullALU_Write32Bit_Write32Bit") 2, false, false, true,  9, 1,  9, 2,  0, 0}, // #28
  {DBGFIELD("COPY")               8190, false, false, false,  0, 0,  0, 0,  0, 0}, // #29
  {DBGFIELD("V_ACCVGPR_WRITE_B32_e64") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #30
  {DBGFIELD("V_MFMA_F32_4X4X1F32_e64_V_MFMA_F32_4X4X1F32_vgprcd_e64_V_MFMA_F32_4X4X2BF16_e64_V_MFMA_F32_4X4X2BF16_vgprcd_e64_V_MFMA_F32_4X4X4BF16_1K_e64_V_MFMA_F32_4X4X4BF16_1K_vgprcd_e64_V_MFMA_F32_4X4X4F16_e64_V_MFMA_F32_4X4X4F16_vgprcd_e64_V_MFMA_F64_4X4X4F64_e64_V_MFMA_F64_4X4X4F64_vgprcd_e64_V_MFMA_I32_4X4X4I8_e64_V_MFMA_I32_4X4X4I8_vgprcd_e64_V_MFMA_F32_4X4X1F32_gfx90a_acd_V_MFMA_F32_4X4X1F32_gfx90a_vcd_V_MFMA_F32_4X4X1F32_gfx940_acd_V_MFMA_F32_4X4X1F32_gfx940_vcd_V_MFMA_F32_4X4X1F32_vi_V_MFMA_F32_4X4X2BF16_gfx90a_acd_V_MFMA_F32_4X4X2BF16_gfx90a_vcd_V_MFMA_F32_4X4X2BF16_gfx940_acd_V_MFMA_F32_4X4X2BF16_gfx940_vcd_V_MFMA_F32_4X4X2BF16_vi_V_MFMA_F32_4X4X4BF16_1K_gfx90a_acd_V_MFMA_F32_4X4X4BF16_1K_gfx90a_vcd_V_MFMA_F32_4X4X4BF16_1K_gfx940_acd_V_MFMA_F32_4X4X4BF16_1K_gfx940_vcd_V_MFMA_F32_4X4X4F16_gfx90a_acd_V_MFMA_F32_4X4X4F16_gfx90a_vcd_V_MFMA_F32_4X4X4F16_gfx940_acd_V_MFMA_F32_4X4X4F16_gfx940_vcd_V_MFMA_F32_4X4X4F16_vi_V_MFMA_F64_4X4X4F64_gfx90a_acd_V_MFMA_F64_4X4X4F64_gfx90a_vcd_V_MFMA_F64_4X4X4F64_gfx940_acd_V_MFMA_F64_4X4X4F64_gfx940_vcd_V_MFMA_I32_4X4X4I8_gfx90a_acd_V_MFMA_I32_4X4X4I8_gfx90a_vcd_V_MFMA_I32_4X4X4I8_gfx940_acd_V_MFMA_I32_4X4X4I8_gfx940_vcd_V_MFMA_I32_4X4X4I8_vi") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #31
  {DBGFIELD("V_MFMA_F32_16X16X16BF16_1K_e64_V_MFMA_F32_16X16X16BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X16F16_e64_V_MFMA_F32_16X16X16F16_vgprcd_e64_V_MFMA_F32_16X16X1F32_e64_V_MFMA_F32_16X16X1F32_mac_e64_V_MFMA_F32_16X16X1F32_mac_vgprcd_e64_V_MFMA_F32_16X16X1F32_vgprcd_e64_V_MFMA_F32_16X16X2BF16_e64_V_MFMA_F32_16X16X2BF16_mac_e64_V_MFMA_F32_16X16X2BF16_mac_vgprcd_e64_V_MFMA_F32_16X16X2BF16_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_BF8_e64_V_MFMA_F32_16X16X32_BF8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_FP8_e64_V_MFMA_F32_16X16X32_BF8_FP8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_BF8_e64_V_MFMA_F32_16X16X32_FP8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_FP8_e64_V_MFMA_F32_16X16X32_FP8_FP8_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_e64_V_MFMA_F32_16X16X4BF16_1K_mac_e64_V_MFMA_F32_16X16X4BF16_1K_mac_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X4F16_e64_V_MFMA_F32_16X16X4F16_mac_e64_V_MFMA_F32_16X16X4F16_mac_vgprcd_e64_V_MFMA_F32_16X16X4F16_vgprcd_e64_V_MFMA_F32_16X16X4F32_e64_V_MFMA_F32_16X16X4F32_vgprcd_e64_V_MFMA_F32_16X16X8BF16_e64_V_MFMA_F32_16X16X8BF16_vgprcd_e64_V_MFMA_F32_16X16X8XF32_e64_V_MFMA_F32_16X16X8XF32_vgprcd_e64_V_MFMA_F64_16X16X4F64_e64_V_MFMA_F64_16X16X4F64_mac_e64_V_MFMA_F64_16X16X4F64_mac_vgprcd_e64_V_MFMA_F64_16X16X4F64_vgprcd_e64_V_MFMA_I32_16X16X16I8_e64_V_MFMA_I32_16X16X16I8_vgprcd_e64_V_MFMA_I32_16X16X32I8_e64_V_MFMA_I32_16X16X32I8_vgprcd_e64_V_MFMA_I32_16X16X4I8_e64_V_MFMA_I32_16X16X4I8_mac_e64_V_MFMA_I32_16X16X4I8_mac_vgprcd_e64_V_MFMA_I32_16X16X4I8_vgprcd_e64_V_MFMA_F32_16X16X16BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X16BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X16BF16_1K_gfx940_acd_V_MFMA_F32_16X16X16BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X16F16_gfx90a_acd_V_MFMA_F32_16X16X16F16_gfx90a_vcd_V_MFMA_F32_16X16X16F16_gfx940_acd_V_MFMA_F32_16X16X16F16_gfx940_vcd_V_MFMA_F32_16X16X16F16_vi_V_MFMA_F32_16X16X1F32_gfx90a_acd_V_MFMA_F32_16X16X1F32_gfx90a_vcd_V_MFMA_F32_16X16X1F32_gfx940_acd_V_MFMA_F32_16X16X1F32_gfx940_vcd_V_MFMA_F32_16X16X1F32_vi_V_MFMA_F32_16X16X2BF16_gfx90a_acd_V_MFMA_F32_16X16X2BF16_gfx90a_vcd_V_MFMA_F32_16X16X2BF16_gfx940_acd_V_MFMA_F32_16X16X2BF16_gfx940_vcd_V_MFMA_F32_16X16X2BF16_vi_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx940_acd_V_MFMA_F32_16X16X4BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X4F16_gfx90a_acd_V_MFMA_F32_16X16X4F16_gfx90a_vcd_V_MFMA_F32_16X16X4F16_gfx940_acd_V_MFMA_F32_16X16X4F16_gfx940_vcd_V_MFMA_F32_16X16X4F16_vi_V_MFMA_F32_16X16X4F32_gfx90a_acd_V_MFMA_F32_16X16X4F32_gfx90a_vcd_V_MFMA_F32_16X16X4F32_gfx940_acd_V_MFMA_F32_16X16X4F32_gfx940_vcd_V_MFMA_F32_16X16X4F32_vi_V_MFMA_F32_16X16X8BF16_gfx90a_acd_V_MFMA_F32_16X16X8BF16_gfx90a_vcd_V_MFMA_F32_16X16X8BF16_gfx940_acd_V_MFMA_F32_16X16X8BF16_gfx940_vcd_V_MFMA_F32_16X16X8BF16_vi_V_MFMA_F32_16X16X8XF32_gfx940_acd_V_MFMA_F32_16X16X8XF32_gfx940_vcd_V_MFMA_F64_16X16X4F64_gfx90a_acd_V_MFMA_F64_16X16X4F64_gfx90a_vcd_V_MFMA_F64_16X16X4F64_gfx940_acd_V_MFMA_F64_16X16X4F64_gfx940_vcd_V_MFMA_I32_16X16X16I8_gfx90a_acd_V_MFMA_I32_16X16X16I8_gfx90a_vcd_V_MFMA_I32_16X16X16I8_gfx940_acd_V_MFMA_I32_16X16X16I8_gfx940_vcd_V_MFMA_I32_16X16X16I8_vi_V_MFMA_I32_16X16X32I8_gfx940_acd_V_MFMA_I32_16X16X32I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_gfx90a_acd_V_MFMA_I32_16X16X4I8_gfx90a_vcd_V_MFMA_I32_16X16X4I8_gfx940_acd_V_MFMA_I32_16X16X4I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_vi") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #32
  {DBGFIELD("V_MFMA_F32_32X32X16_BF8_BF8_e64_V_MFMA_F32_32X32X16_BF8_BF8_mac_e64_V_MFMA_F32_32X32X16_BF8_BF8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_BF8_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_FP8_e64_V_MFMA_F32_32X32X16_BF8_FP8_mac_e64_V_MFMA_F32_32X32X16_BF8_FP8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_FP8_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_BF8_e64_V_MFMA_F32_32X32X16_FP8_BF8_mac_e64_V_MFMA_F32_32X32X16_FP8_BF8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_BF8_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_FP8_e64_V_MFMA_F32_32X32X16_FP8_FP8_mac_e64_V_MFMA_F32_32X32X16_FP8_FP8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_FP8_vgprcd_e64_V_MFMA_F32_32X32X1F32_e64_V_MFMA_F32_32X32X1F32_mac_e64_V_MFMA_F32_32X32X1F32_mac_vgprcd_e64_V_MFMA_F32_32X32X1F32_vgprcd_e64_V_MFMA_F32_32X32X2BF16_e64_V_MFMA_F32_32X32X2BF16_mac_e64_V_MFMA_F32_32X32X2BF16_mac_vgprcd_e64_V_MFMA_F32_32X32X2BF16_vgprcd_e64_V_MFMA_F32_32X32X2F32_e64_V_MFMA_F32_32X32X2F32_mac_e64_V_MFMA_F32_32X32X2F32_mac_vgprcd_e64_V_MFMA_F32_32X32X2F32_vgprcd_e64_V_MFMA_F32_32X32X4BF16_1K_e64_V_MFMA_F32_32X32X4BF16_1K_mac_e64_V_MFMA_F32_32X32X4BF16_1K_mac_vgprcd_e64_V_MFMA_F32_32X32X4BF16_1K_vgprcd_e64_V_MFMA_F32_32X32X4BF16_e64_V_MFMA_F32_32X32X4BF16_mac_e64_V_MFMA_F32_32X32X4BF16_mac_vgprcd_e64_V_MFMA_F32_32X32X4BF16_vgprcd_e64_V_MFMA_F32_32X32X4F16_e64_V_MFMA_F32_32X32X4F16_mac_e64_V_MFMA_F32_32X32X4F16_mac_vgprcd_e64_V_MFMA_F32_32X32X4F16_vgprcd_e64_V_MFMA_F32_32X32X4XF32_e64_V_MFMA_F32_32X32X4XF32_mac_e64_V_MFMA_F32_32X32X4XF32_mac_vgprcd_e64_V_MFMA_F32_32X32X4XF32_vgprcd_e64_V_MFMA_F32_32X32X8BF16_1K_e64_V_MFMA_F32_32X32X8BF16_1K_mac_e64_V_MFMA_F32_32X32X8BF16_1K_mac_vgprcd_e64_V_MFMA_F32_32X32X8BF16_1K_vgprcd_e64_V_MFMA_F32_32X32X8F16_e64_V_MFMA_F32_32X32X8F16_mac_e64_V_MFMA_F32_32X32X8F16_mac_vgprcd_e64_V_MFMA_F32_32X32X8F16_vgprcd_e64_V_MFMA_I32_32X32X16I8_e64_V_MFMA_I32_32X32X16I8_mac_e64_V_MFMA_I32_32X32X16I8_mac_vgprcd_e64_V_MFMA_I32_32X32X16I8_vgprcd_e64_V_MFMA_I32_32X32X4I8_e64_V_MFMA_I32_32X32X4I8_mac_e64_V_MFMA_I32_32X32X4I8_mac_vgprcd_e64_V_MFMA_I32_32X32X4I8_vgprcd_e64_V_MFMA_I32_32X32X8I8_e64_V_MFMA_I32_32X32X8I8_mac_e64_V_MFMA_I32_32X32X8I8_mac_vgprcd_e64_V_MFMA_I32_32X32X8I8_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_BF8_gfx940_acd_V_MFMA_F32_32X32X16_BF8_BF8_gfx940_vcd_V_MFMA_F32_32X32X16_BF8_FP8_gfx940_acd_V_MFMA_F32_32X32X16_BF8_FP8_gfx940_vcd_V_MFMA_F32_32X32X16_FP8_BF8_gfx940_acd_V_MFMA_F32_32X32X16_FP8_BF8_gfx940_vcd_V_MFMA_F32_32X32X16_FP8_FP8_gfx940_acd_V_MFMA_F32_32X32X16_FP8_FP8_gfx940_vcd_V_MFMA_F32_32X32X1F32_gfx90a_acd_V_MFMA_F32_32X32X1F32_gfx90a_vcd_V_MFMA_F32_32X32X1F32_gfx940_acd_V_MFMA_F32_32X32X1F32_gfx940_vcd_V_MFMA_F32_32X32X1F32_vi_V_MFMA_F32_32X32X2BF16_gfx90a_acd_V_MFMA_F32_32X32X2BF16_gfx90a_vcd_V_MFMA_F32_32X32X2BF16_gfx940_acd_V_MFMA_F32_32X32X2BF16_gfx940_vcd_V_MFMA_F32_32X32X2BF16_vi_V_MFMA_F32_32X32X2F32_gfx90a_acd_V_MFMA_F32_32X32X2F32_gfx90a_vcd_V_MFMA_F32_32X32X2F32_gfx940_acd_V_MFMA_F32_32X32X2F32_gfx940_vcd_V_MFMA_F32_32X32X2F32_vi_V_MFMA_F32_32X32X4BF16_1K_gfx90a_acd_V_MFMA_F32_32X32X4BF16_1K_gfx90a_vcd_V_MFMA_F32_32X32X4BF16_1K_gfx940_acd_V_MFMA_F32_32X32X4BF16_1K_gfx940_vcd_V_MFMA_F32_32X32X4BF16_gfx90a_acd_V_MFMA_F32_32X32X4BF16_gfx90a_vcd_V_MFMA_F32_32X32X4BF16_gfx940_acd_V_MFMA_F32_32X32X4BF16_gfx940_vcd_V_MFMA_F32_32X32X4BF16_vi_V_MFMA_F32_32X32X4F16_gfx90a_acd_V_MFMA_F32_32X32X4F16_gfx90a_vcd_V_MFMA_F32_32X32X4F16_gfx940_acd_V_MFMA_F32_32X32X4F16_gfx940_vcd_V_MFMA_F32_32X32X4F16_vi_V_MFMA_F32_32X32X4XF32_gfx940_acd_V_MFMA_F32_32X32X4XF32_gfx940_vcd_V_MFMA_F32_32X32X8BF16_1K_gfx90a_acd_V_MFMA_F32_32X32X8BF16_1K_gfx90a_vcd_V_MFMA_F32_32X32X8BF16_1K_gfx940_acd_V_MFMA_F32_32X32X8BF16_1K_gfx940_vcd_V_MFMA_F32_32X32X8F16_gfx90a_acd_V_MFMA_F32_32X32X8F16_gfx90a_vcd_V_MFMA_F32_32X32X8F16_gfx940_acd_V_MFMA_F32_32X32X8F16_gfx940_vcd_V_MFMA_F32_32X32X8F16_vi_V_MFMA_I32_32X32X16I8_gfx940_acd_V_MFMA_I32_32X32X16I8_gfx940_vcd_V_MFMA_I32_32X32X4I8_gfx90a_acd_V_MFMA_I32_32X32X4I8_gfx90a_vcd_V_MFMA_I32_32X32X4I8_gfx940_acd_V_MFMA_I32_32X32X4I8_gfx940_vcd_V_MFMA_I32_32X32X4I8_vi_V_MFMA_I32_32X32X8I8_gfx90a_acd_V_MFMA_I32_32X32X8I8_gfx90a_vcd_V_MFMA_I32_32X32X8I8_gfx940_acd_V_MFMA_I32_32X32X8I8_gfx940_vcd_V_MFMA_I32_32X32X8I8_vi") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #33
  {DBGFIELD("V_MFMA_F32_4X4X1F32_e64_V_MFMA_F32_4X4X1F32_vgprcd_e64_V_MFMA_F32_4X4X2BF16_e64_V_MFMA_F32_4X4X2BF16_vgprcd_e64_V_MFMA_F32_4X4X4BF16_1K_e64_V_MFMA_F32_4X4X4BF16_1K_vgprcd_e64_V_MFMA_F32_4X4X4F16_e64_V_MFMA_F32_4X4X4F16_vgprcd_e64_V_MFMA_I32_4X4X4I8_e64_V_MFMA_I32_4X4X4I8_vgprcd_e64_V_MFMA_F32_4X4X1F32_gfx90a_acd_V_MFMA_F32_4X4X1F32_gfx90a_vcd_V_MFMA_F32_4X4X1F32_gfx940_acd_V_MFMA_F32_4X4X1F32_gfx940_vcd_V_MFMA_F32_4X4X1F32_vi_V_MFMA_F32_4X4X2BF16_gfx90a_acd_V_MFMA_F32_4X4X2BF16_gfx90a_vcd_V_MFMA_F32_4X4X2BF16_gfx940_acd_V_MFMA_F32_4X4X2BF16_gfx940_vcd_V_MFMA_F32_4X4X2BF16_vi_V_MFMA_F32_4X4X4BF16_1K_gfx90a_acd_V_MFMA_F32_4X4X4BF16_1K_gfx90a_vcd_V_MFMA_F32_4X4X4BF16_1K_gfx940_acd_V_MFMA_F32_4X4X4BF16_1K_gfx940_vcd_V_MFMA_F32_4X4X4F16_gfx90a_acd_V_MFMA_F32_4X4X4F16_gfx90a_vcd_V_MFMA_F32_4X4X4F16_gfx940_acd_V_MFMA_F32_4X4X4F16_gfx940_vcd_V_MFMA_F32_4X4X4F16_vi_V_MFMA_I32_4X4X4I8_gfx90a_acd_V_MFMA_I32_4X4X4I8_gfx90a_vcd_V_MFMA_I32_4X4X4I8_gfx940_acd_V_MFMA_I32_4X4X4I8_gfx940_vcd_V_MFMA_I32_4X4X4I8_vi") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #34
  {DBGFIELD("V_MFMA_F32_16X16X16BF16_1K_e64_V_MFMA_F32_16X16X16BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X16F16_e64_V_MFMA_F32_16X16X16F16_vgprcd_e64_V_MFMA_F32_16X16X1F32_e64_V_MFMA_F32_16X16X1F32_mac_e64_V_MFMA_F32_16X16X1F32_mac_vgprcd_e64_V_MFMA_F32_16X16X1F32_vgprcd_e64_V_MFMA_F32_16X16X2BF16_e64_V_MFMA_F32_16X16X2BF16_mac_e64_V_MFMA_F32_16X16X2BF16_mac_vgprcd_e64_V_MFMA_F32_16X16X2BF16_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_BF8_e64_V_MFMA_F32_16X16X32_BF8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_FP8_e64_V_MFMA_F32_16X16X32_BF8_FP8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_BF8_e64_V_MFMA_F32_16X16X32_FP8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_FP8_e64_V_MFMA_F32_16X16X32_FP8_FP8_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_e64_V_MFMA_F32_16X16X4BF16_1K_mac_e64_V_MFMA_F32_16X16X4BF16_1K_mac_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X4F16_e64_V_MFMA_F32_16X16X4F16_mac_e64_V_MFMA_F32_16X16X4F16_mac_vgprcd_e64_V_MFMA_F32_16X16X4F16_vgprcd_e64_V_MFMA_F32_16X16X4F32_e64_V_MFMA_F32_16X16X4F32_vgprcd_e64_V_MFMA_F32_16X16X8BF16_e64_V_MFMA_F32_16X16X8BF16_vgprcd_e64_V_MFMA_F32_16X16X8XF32_e64_V_MFMA_F32_16X16X8XF32_vgprcd_e64_V_MFMA_I32_16X16X16I8_e64_V_MFMA_I32_16X16X16I8_vgprcd_e64_V_MFMA_I32_16X16X32I8_e64_V_MFMA_I32_16X16X32I8_vgprcd_e64_V_MFMA_I32_16X16X4I8_e64_V_MFMA_I32_16X16X4I8_mac_e64_V_MFMA_I32_16X16X4I8_mac_vgprcd_e64_V_MFMA_I32_16X16X4I8_vgprcd_e64_V_MFMA_F32_16X16X16BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X16BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X16BF16_1K_gfx940_acd_V_MFMA_F32_16X16X16BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X16F16_gfx90a_acd_V_MFMA_F32_16X16X16F16_gfx90a_vcd_V_MFMA_F32_16X16X16F16_gfx940_acd_V_MFMA_F32_16X16X16F16_gfx940_vcd_V_MFMA_F32_16X16X16F16_vi_V_MFMA_F32_16X16X1F32_gfx90a_acd_V_MFMA_F32_16X16X1F32_gfx90a_vcd_V_MFMA_F32_16X16X1F32_gfx940_acd_V_MFMA_F32_16X16X1F32_gfx940_vcd_V_MFMA_F32_16X16X1F32_vi_V_MFMA_F32_16X16X2BF16_gfx90a_acd_V_MFMA_F32_16X16X2BF16_gfx90a_vcd_V_MFMA_F32_16X16X2BF16_gfx940_acd_V_MFMA_F32_16X16X2BF16_gfx940_vcd_V_MFMA_F32_16X16X2BF16_vi_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx940_acd_V_MFMA_F32_16X16X4BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X4F16_gfx90a_acd_V_MFMA_F32_16X16X4F16_gfx90a_vcd_V_MFMA_F32_16X16X4F16_gfx940_acd_V_MFMA_F32_16X16X4F16_gfx940_vcd_V_MFMA_F32_16X16X4F16_vi_V_MFMA_F32_16X16X4F32_gfx90a_acd_V_MFMA_F32_16X16X4F32_gfx90a_vcd_V_MFMA_F32_16X16X4F32_gfx940_acd_V_MFMA_F32_16X16X4F32_gfx940_vcd_V_MFMA_F32_16X16X4F32_vi_V_MFMA_F32_16X16X8BF16_gfx90a_acd_V_MFMA_F32_16X16X8BF16_gfx90a_vcd_V_MFMA_F32_16X16X8BF16_gfx940_acd_V_MFMA_F32_16X16X8BF16_gfx940_vcd_V_MFMA_F32_16X16X8BF16_vi_V_MFMA_F32_16X16X8XF32_gfx940_acd_V_MFMA_F32_16X16X8XF32_gfx940_vcd_V_MFMA_I32_16X16X16I8_gfx90a_acd_V_MFMA_I32_16X16X16I8_gfx90a_vcd_V_MFMA_I32_16X16X16I8_gfx940_acd_V_MFMA_I32_16X16X16I8_gfx940_vcd_V_MFMA_I32_16X16X16I8_vi_V_MFMA_I32_16X16X32I8_gfx940_acd_V_MFMA_I32_16X16X32I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_gfx90a_acd_V_MFMA_I32_16X16X4I8_gfx90a_vcd_V_MFMA_I32_16X16X4I8_gfx940_acd_V_MFMA_I32_16X16X4I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_vi") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #35
  {DBGFIELD("V_MFMA_F32_16X16X8XF32_e64_V_MFMA_F32_16X16X8XF32_vgprcd_e64_V_MFMA_F32_16X16X8XF32_gfx940_acd_V_MFMA_F32_16X16X8XF32_gfx940_vcd") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #36
  {DBGFIELD("V_MFMA_F32_16X16X16BF16_1K_e64_V_MFMA_F32_16X16X16BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X16F16_e64_V_MFMA_F32_16X16X16F16_vgprcd_e64_V_MFMA_I32_16X16X16I8_e64_V_MFMA_I32_16X16X16I8_vgprcd_e64_V_MFMA_F32_16X16X16BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X16BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X16BF16_1K_gfx940_acd_V_MFMA_F32_16X16X16BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X16F16_gfx90a_acd_V_MFMA_F32_16X16X16F16_gfx90a_vcd_V_MFMA_F32_16X16X16F16_gfx940_acd_V_MFMA_F32_16X16X16F16_gfx940_vcd_V_MFMA_F32_16X16X16F16_vi_V_MFMA_I32_16X16X16I8_gfx90a_acd_V_MFMA_I32_16X16X16I8_gfx90a_vcd_V_MFMA_I32_16X16X16I8_gfx940_acd_V_MFMA_I32_16X16X16I8_gfx940_vcd_V_MFMA_I32_16X16X16I8_vi") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #37
  {DBGFIELD("V_MFMA_F32_16X16X32_BF8_BF8_e64_V_MFMA_F32_16X16X32_BF8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_FP8_e64_V_MFMA_F32_16X16X32_BF8_FP8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_BF8_e64_V_MFMA_F32_16X16X32_FP8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_FP8_e64_V_MFMA_F32_16X16X32_FP8_FP8_vgprcd_e64_V_MFMA_I32_16X16X32I8_e64_V_MFMA_I32_16X16X32I8_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_vcd_V_MFMA_I32_16X16X32I8_gfx940_acd_V_MFMA_I32_16X16X32I8_gfx940_vcd") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #38
  {DBGFIELD("V_MFMA_F32_16X16X1F32_e64_V_MFMA_F32_16X16X1F32_mac_e64_V_MFMA_F32_16X16X1F32_mac_vgprcd_e64_V_MFMA_F32_16X16X1F32_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_e64_V_MFMA_F32_16X16X4BF16_1K_mac_e64_V_MFMA_F32_16X16X4BF16_1K_mac_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X4F16_e64_V_MFMA_F32_16X16X4F16_mac_e64_V_MFMA_F32_16X16X4F16_mac_vgprcd_e64_V_MFMA_F32_16X16X4F16_vgprcd_e64_V_MFMA_F32_16X16X4F32_e64_V_MFMA_F32_16X16X4F32_vgprcd_e64_V_MFMA_I32_16X16X4I8_e64_V_MFMA_I32_16X16X4I8_mac_e64_V_MFMA_I32_16X16X4I8_mac_vgprcd_e64_V_MFMA_I32_16X16X4I8_vgprcd_e64_V_MFMA_F32_16X16X1F32_gfx90a_acd_V_MFMA_F32_16X16X1F32_gfx90a_vcd_V_MFMA_F32_16X16X1F32_gfx940_acd_V_MFMA_F32_16X16X1F32_gfx940_vcd_V_MFMA_F32_16X16X1F32_vi_V_MFMA_F32_16X16X4BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx940_acd_V_MFMA_F32_16X16X4BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X4F16_gfx90a_acd_V_MFMA_F32_16X16X4F16_gfx90a_vcd_V_MFMA_F32_16X16X4F16_gfx940_acd_V_MFMA_F32_16X16X4F16_gfx940_vcd_V_MFMA_F32_16X16X4F16_vi_V_MFMA_F32_16X16X4F32_gfx90a_acd_V_MFMA_F32_16X16X4F32_gfx90a_vcd_V_MFMA_F32_16X16X4F32_gfx940_acd_V_MFMA_F32_16X16X4F32_gfx940_vcd_V_MFMA_F32_16X16X4F32_vi_V_MFMA_I32_16X16X4I8_gfx90a_acd_V_MFMA_I32_16X16X4I8_gfx90a_vcd_V_MFMA_I32_16X16X4I8_gfx940_acd_V_MFMA_I32_16X16X4I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_vi") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #39
  {DBGFIELD("V_MFMA_F32_32X32X4XF32_e64_V_MFMA_F32_32X32X4XF32_mac_e64_V_MFMA_F32_32X32X4XF32_mac_vgprcd_e64_V_MFMA_F32_32X32X4XF32_vgprcd_e64_V_MFMA_F32_32X32X4XF32_gfx940_acd_V_MFMA_F32_32X32X4XF32_gfx940_vcd") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #40
  {DBGFIELD("V_MFMA_F32_32X32X8BF16_1K_e64_V_MFMA_F32_32X32X8BF16_1K_mac_e64_V_MFMA_F32_32X32X8BF16_1K_mac_vgprcd_e64_V_MFMA_F32_32X32X8BF16_1K_vgprcd_e64_V_MFMA_F32_32X32X8F16_e64_V_MFMA_F32_32X32X8F16_mac_e64_V_MFMA_F32_32X32X8F16_mac_vgprcd_e64_V_MFMA_F32_32X32X8F16_vgprcd_e64_V_MFMA_I32_32X32X8I8_e64_V_MFMA_I32_32X32X8I8_mac_e64_V_MFMA_I32_32X32X8I8_mac_vgprcd_e64_V_MFMA_I32_32X32X8I8_vgprcd_e64_V_MFMA_F32_32X32X8BF16_1K_gfx90a_acd_V_MFMA_F32_32X32X8BF16_1K_gfx90a_vcd_V_MFMA_F32_32X32X8BF16_1K_gfx940_acd_V_MFMA_F32_32X32X8BF16_1K_gfx940_vcd_V_MFMA_F32_32X32X8F16_gfx90a_acd_V_MFMA_F32_32X32X8F16_gfx90a_vcd_V_MFMA_F32_32X32X8F16_gfx940_acd_V_MFMA_F32_32X32X8F16_gfx940_vcd_V_MFMA_F32_32X32X8F16_vi_V_MFMA_I32_32X32X8I8_gfx90a_acd_V_MFMA_I32_32X32X8I8_gfx90a_vcd_V_MFMA_I32_32X32X8I8_gfx940_acd_V_MFMA_I32_32X32X8I8_gfx940_vcd_V_MFMA_I32_32X32X8I8_vi") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #41
  {DBGFIELD("V_MFMA_F32_32X32X16_BF8_BF8_e64_V_MFMA_F32_32X32X16_BF8_BF8_mac_e64_V_MFMA_F32_32X32X16_BF8_BF8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_BF8_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_FP8_e64_V_MFMA_F32_32X32X16_BF8_FP8_mac_e64_V_MFMA_F32_32X32X16_BF8_FP8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_FP8_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_BF8_e64_V_MFMA_F32_32X32X16_FP8_BF8_mac_e64_V_MFMA_F32_32X32X16_FP8_BF8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_BF8_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_FP8_e64_V_MFMA_F32_32X32X16_FP8_FP8_mac_e64_V_MFMA_F32_32X32X16_FP8_FP8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_FP8_vgprcd_e64_V_MFMA_I32_32X32X16I8_e64_V_MFMA_I32_32X32X16I8_mac_e64_V_MFMA_I32_32X32X16I8_mac_vgprcd_e64_V_MFMA_I32_32X32X16I8_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_BF8_gfx940_acd_V_MFMA_F32_32X32X16_BF8_BF8_gfx940_vcd_V_MFMA_F32_32X32X16_BF8_FP8_gfx940_acd_V_MFMA_F32_32X32X16_BF8_FP8_gfx940_vcd_V_MFMA_F32_32X32X16_FP8_BF8_gfx940_acd_V_MFMA_F32_32X32X16_FP8_BF8_gfx940_vcd_V_MFMA_F32_32X32X16_FP8_FP8_gfx940_acd_V_MFMA_F32_32X32X16_FP8_FP8_gfx940_vcd_V_MFMA_I32_32X32X16I8_gfx940_acd_V_MFMA_I32_32X32X16I8_gfx940_vcd") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #42
  {DBGFIELD("V_SMFMAC_F32_16X16X32_BF16_e64_V_SMFMAC_F32_16X16X32_F16_e64_V_SMFMAC_F32_16X16X64_BF8_BF8_e64_V_SMFMAC_F32_16X16X64_BF8_FP8_e64_V_SMFMAC_F32_16X16X64_FP8_BF8_e64_V_SMFMAC_F32_16X16X64_FP8_FP8_e64_V_SMFMAC_I32_16X16X64_I8_e64_V_SMFMAC_F32_16X16X32_BF16_gfx940_V_SMFMAC_F32_16X16X32_F16_gfx940_V_SMFMAC_F32_16X16X64_BF8_BF8_gfx940_V_SMFMAC_F32_16X16X64_BF8_FP8_gfx940_V_SMFMAC_F32_16X16X64_FP8_BF8_gfx940_V_SMFMAC_F32_16X16X64_FP8_FP8_gfx940_V_SMFMAC_I32_16X16X64_I8_gfx940") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #43
  {DBGFIELD("V_SMFMAC_F32_32X32X16_BF16_e64_V_SMFMAC_F32_32X32X16_F16_e64_V_SMFMAC_F32_32X32X32_BF8_BF8_e64_V_SMFMAC_F32_32X32X32_BF8_FP8_e64_V_SMFMAC_F32_32X32X32_FP8_BF8_e64_V_SMFMAC_F32_32X32X32_FP8_FP8_e64_V_SMFMAC_I32_32X32X32_I8_e64_V_SMFMAC_F32_32X32X16_BF16_gfx940_V_SMFMAC_F32_32X32X16_F16_gfx940_V_SMFMAC_F32_32X32X32_BF8_BF8_gfx940_V_SMFMAC_F32_32X32X32_BF8_FP8_gfx940_V_SMFMAC_F32_32X32X32_FP8_BF8_gfx940_V_SMFMAC_F32_32X32X32_FP8_FP8_gfx940_V_SMFMAC_I32_32X32X32_I8_gfx940") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #44
  {DBGFIELD("Write32Bit")         1, false, false, true,  2, 1,  1, 1,  0, 0}, // #45
  {DBGFIELD("Write64Bit")         1, false, false, true,  2, 1,  8, 1,  0, 0}, // #46
  {DBGFIELD("WriteSALU")          1, false, false, true,  1, 1,  1, 1,  0, 0}, // #47
  {DBGFIELD("Write64Bit_MIVGPRRead") 0, false, false, false,  0, 0,  0, 0,  0, 0}, // #48
  {DBGFIELD("Write64Bit_ReadDefault") 0, false, false, false,  0, 0,  0, 0,  0, 0}, // #49
}; // SIFullSpeedModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, RetireOOO, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc SIDPFullSpeedModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  8191, false, false, false, 0, 0,  0, 0,  0, 0},
  {DBGFIELD("NullALU_WriteSALU")  1, false, false, true,  1, 1,  1, 1,  0, 0}, // #1
  {DBGFIELD("NullALU_Write32Bit") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #2
  {DBGFIELD("NullALU_WriteVMEM")  1, false, false, true,  3, 1,  2, 1,  0, 0}, // #3
  {DBGFIELD("NullALU_WriteLDS")   1, false, false, true,  4, 1,  3, 1,  0, 0}, // #4
  {DBGFIELD("NullALU_WriteExport") 1, false, false, true,  5, 1,  4, 1,  0, 0}, // #5
  {DBGFIELD("NullALU_WriteVMEM_WriteLDS") 2, false, false, true,  6, 2,  2, 2,  0, 0}, // #6
  {DBGFIELD("WriteBranch")        1, false, false, true,  8, 1,  5, 1,  0, 0}, // #7
  {DBGFIELD("NullALU")            8191, false, false, false,  0, 0,  0, 0,  0, 0}, // #8
  {DBGFIELD("NullALU_WriteBranch") 1, false, false, true,  8, 1,  5, 1,  0, 0}, // #9
  {DBGFIELD("NullALU_WriteSMEM")  1, false, false, true,  4, 1,  3, 1,  0, 0}, // #10
  {DBGFIELD("NullALU_WriteBarrier") 1, false, false, true,  8, 1,  6, 1,  0, 0}, // #11
  {DBGFIELD("NullALU_WriteSALU_Write64Bit") 2, false, false, true,  1, 2,  9, 2,  0, 0}, // #12
  {DBGFIELD("NullALU_Write32Bit_WriteSALU") 2, false, false, true,  1, 2,  9, 2,  0, 0}, // #13
  {DBGFIELD("NullALU_WriteDoubleAdd") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #14
  {DBGFIELD("NullALU_Write64Bit") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #15
  {DBGFIELD("NullALU_WriteTrans32") 1, false, false, true,  2, 1,  4, 1,  0, 0}, // #16
  {DBGFIELD("NullALU_WriteFloatCvt") 1, false, false, true,  2, 1,  4, 1,  0, 0}, // #17
  {DBGFIELD("NullALU_WriteDoubleCvt") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #18
  {DBGFIELD("NullALU_WriteFloatFMA") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #19
  {DBGFIELD("NullALU_WriteDouble") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #20
  {DBGFIELD("NullALU_WriteFloatFMA_WriteSALU") 2, false, false, true,  1, 2,  9, 2,  0, 0}, // #21
  {DBGFIELD("NullALU_WriteDouble_WriteSALU") 2, false, false, true,  1, 2,  9, 2,  0, 0}, // #22
  {DBGFIELD("NullALU_WriteIntMul_WriteSALU") 2, false, false, true,  1, 2,  9, 2,  0, 0}, // #23
  {DBGFIELD("NullALU_WriteQuarterRate32") 1, false, false, true,  2, 1,  4, 1,  0, 0}, // #24
  {DBGFIELD("NullALU_WriteIntMul") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #25
  {DBGFIELD("NullALU_WriteTrans64") 1, false, false, true,  2, 1,  4, 1,  0, 0}, // #26
  {DBGFIELD("NullALU_Write64Bit_Write64Bit") 2, false, false, true,  9, 1,  9, 2,  0, 0}, // #27
  {DBGFIELD("NullALU_Write32Bit_Write32Bit") 2, false, false, true,  9, 1,  9, 2,  0, 0}, // #28
  {DBGFIELD("COPY")               8190, false, false, false,  0, 0,  0, 0,  0, 0}, // #29
  {DBGFIELD("V_ACCVGPR_WRITE_B32_e64") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #30
  {DBGFIELD("V_MFMA_F32_4X4X1F32_e64_V_MFMA_F32_4X4X1F32_vgprcd_e64_V_MFMA_F32_4X4X2BF16_e64_V_MFMA_F32_4X4X2BF16_vgprcd_e64_V_MFMA_F32_4X4X4BF16_1K_e64_V_MFMA_F32_4X4X4BF16_1K_vgprcd_e64_V_MFMA_F32_4X4X4F16_e64_V_MFMA_F32_4X4X4F16_vgprcd_e64_V_MFMA_F64_4X4X4F64_e64_V_MFMA_F64_4X4X4F64_vgprcd_e64_V_MFMA_I32_4X4X4I8_e64_V_MFMA_I32_4X4X4I8_vgprcd_e64_V_MFMA_F32_4X4X1F32_gfx90a_acd_V_MFMA_F32_4X4X1F32_gfx90a_vcd_V_MFMA_F32_4X4X1F32_gfx940_acd_V_MFMA_F32_4X4X1F32_gfx940_vcd_V_MFMA_F32_4X4X1F32_vi_V_MFMA_F32_4X4X2BF16_gfx90a_acd_V_MFMA_F32_4X4X2BF16_gfx90a_vcd_V_MFMA_F32_4X4X2BF16_gfx940_acd_V_MFMA_F32_4X4X2BF16_gfx940_vcd_V_MFMA_F32_4X4X2BF16_vi_V_MFMA_F32_4X4X4BF16_1K_gfx90a_acd_V_MFMA_F32_4X4X4BF16_1K_gfx90a_vcd_V_MFMA_F32_4X4X4BF16_1K_gfx940_acd_V_MFMA_F32_4X4X4BF16_1K_gfx940_vcd_V_MFMA_F32_4X4X4F16_gfx90a_acd_V_MFMA_F32_4X4X4F16_gfx90a_vcd_V_MFMA_F32_4X4X4F16_gfx940_acd_V_MFMA_F32_4X4X4F16_gfx940_vcd_V_MFMA_F32_4X4X4F16_vi_V_MFMA_F64_4X4X4F64_gfx90a_acd_V_MFMA_F64_4X4X4F64_gfx90a_vcd_V_MFMA_F64_4X4X4F64_gfx940_acd_V_MFMA_F64_4X4X4F64_gfx940_vcd_V_MFMA_I32_4X4X4I8_gfx90a_acd_V_MFMA_I32_4X4X4I8_gfx90a_vcd_V_MFMA_I32_4X4X4I8_gfx940_acd_V_MFMA_I32_4X4X4I8_gfx940_vcd_V_MFMA_I32_4X4X4I8_vi") 1, false, false, true,  2, 1,  4, 1,  1, 1}, // #31
  {DBGFIELD("V_MFMA_F32_16X16X16BF16_1K_e64_V_MFMA_F32_16X16X16BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X16F16_e64_V_MFMA_F32_16X16X16F16_vgprcd_e64_V_MFMA_F32_16X16X1F32_e64_V_MFMA_F32_16X16X1F32_mac_e64_V_MFMA_F32_16X16X1F32_mac_vgprcd_e64_V_MFMA_F32_16X16X1F32_vgprcd_e64_V_MFMA_F32_16X16X2BF16_e64_V_MFMA_F32_16X16X2BF16_mac_e64_V_MFMA_F32_16X16X2BF16_mac_vgprcd_e64_V_MFMA_F32_16X16X2BF16_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_BF8_e64_V_MFMA_F32_16X16X32_BF8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_FP8_e64_V_MFMA_F32_16X16X32_BF8_FP8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_BF8_e64_V_MFMA_F32_16X16X32_FP8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_FP8_e64_V_MFMA_F32_16X16X32_FP8_FP8_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_e64_V_MFMA_F32_16X16X4BF16_1K_mac_e64_V_MFMA_F32_16X16X4BF16_1K_mac_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X4F16_e64_V_MFMA_F32_16X16X4F16_mac_e64_V_MFMA_F32_16X16X4F16_mac_vgprcd_e64_V_MFMA_F32_16X16X4F16_vgprcd_e64_V_MFMA_F32_16X16X4F32_e64_V_MFMA_F32_16X16X4F32_vgprcd_e64_V_MFMA_F32_16X16X8BF16_e64_V_MFMA_F32_16X16X8BF16_vgprcd_e64_V_MFMA_F32_16X16X8XF32_e64_V_MFMA_F32_16X16X8XF32_vgprcd_e64_V_MFMA_F64_16X16X4F64_e64_V_MFMA_F64_16X16X4F64_mac_e64_V_MFMA_F64_16X16X4F64_mac_vgprcd_e64_V_MFMA_F64_16X16X4F64_vgprcd_e64_V_MFMA_I32_16X16X16I8_e64_V_MFMA_I32_16X16X16I8_vgprcd_e64_V_MFMA_I32_16X16X32I8_e64_V_MFMA_I32_16X16X32I8_vgprcd_e64_V_MFMA_I32_16X16X4I8_e64_V_MFMA_I32_16X16X4I8_mac_e64_V_MFMA_I32_16X16X4I8_mac_vgprcd_e64_V_MFMA_I32_16X16X4I8_vgprcd_e64_V_MFMA_F32_16X16X16BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X16BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X16BF16_1K_gfx940_acd_V_MFMA_F32_16X16X16BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X16F16_gfx90a_acd_V_MFMA_F32_16X16X16F16_gfx90a_vcd_V_MFMA_F32_16X16X16F16_gfx940_acd_V_MFMA_F32_16X16X16F16_gfx940_vcd_V_MFMA_F32_16X16X16F16_vi_V_MFMA_F32_16X16X1F32_gfx90a_acd_V_MFMA_F32_16X16X1F32_gfx90a_vcd_V_MFMA_F32_16X16X1F32_gfx940_acd_V_MFMA_F32_16X16X1F32_gfx940_vcd_V_MFMA_F32_16X16X1F32_vi_V_MFMA_F32_16X16X2BF16_gfx90a_acd_V_MFMA_F32_16X16X2BF16_gfx90a_vcd_V_MFMA_F32_16X16X2BF16_gfx940_acd_V_MFMA_F32_16X16X2BF16_gfx940_vcd_V_MFMA_F32_16X16X2BF16_vi_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx940_acd_V_MFMA_F32_16X16X4BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X4F16_gfx90a_acd_V_MFMA_F32_16X16X4F16_gfx90a_vcd_V_MFMA_F32_16X16X4F16_gfx940_acd_V_MFMA_F32_16X16X4F16_gfx940_vcd_V_MFMA_F32_16X16X4F16_vi_V_MFMA_F32_16X16X4F32_gfx90a_acd_V_MFMA_F32_16X16X4F32_gfx90a_vcd_V_MFMA_F32_16X16X4F32_gfx940_acd_V_MFMA_F32_16X16X4F32_gfx940_vcd_V_MFMA_F32_16X16X4F32_vi_V_MFMA_F32_16X16X8BF16_gfx90a_acd_V_MFMA_F32_16X16X8BF16_gfx90a_vcd_V_MFMA_F32_16X16X8BF16_gfx940_acd_V_MFMA_F32_16X16X8BF16_gfx940_vcd_V_MFMA_F32_16X16X8BF16_vi_V_MFMA_F32_16X16X8XF32_gfx940_acd_V_MFMA_F32_16X16X8XF32_gfx940_vcd_V_MFMA_F64_16X16X4F64_gfx90a_acd_V_MFMA_F64_16X16X4F64_gfx90a_vcd_V_MFMA_F64_16X16X4F64_gfx940_acd_V_MFMA_F64_16X16X4F64_gfx940_vcd_V_MFMA_I32_16X16X16I8_gfx90a_acd_V_MFMA_I32_16X16X16I8_gfx90a_vcd_V_MFMA_I32_16X16X16I8_gfx940_acd_V_MFMA_I32_16X16X16I8_gfx940_vcd_V_MFMA_I32_16X16X16I8_vi_V_MFMA_I32_16X16X32I8_gfx940_acd_V_MFMA_I32_16X16X32I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_gfx90a_acd_V_MFMA_I32_16X16X4I8_gfx90a_vcd_V_MFMA_I32_16X16X4I8_gfx940_acd_V_MFMA_I32_16X16X4I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_vi") 1, false, false, true,  2, 1, 11, 1,  1, 1}, // #32
  {DBGFIELD("V_MFMA_F32_32X32X16_BF8_BF8_e64_V_MFMA_F32_32X32X16_BF8_BF8_mac_e64_V_MFMA_F32_32X32X16_BF8_BF8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_BF8_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_FP8_e64_V_MFMA_F32_32X32X16_BF8_FP8_mac_e64_V_MFMA_F32_32X32X16_BF8_FP8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_FP8_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_BF8_e64_V_MFMA_F32_32X32X16_FP8_BF8_mac_e64_V_MFMA_F32_32X32X16_FP8_BF8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_BF8_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_FP8_e64_V_MFMA_F32_32X32X16_FP8_FP8_mac_e64_V_MFMA_F32_32X32X16_FP8_FP8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_FP8_vgprcd_e64_V_MFMA_F32_32X32X1F32_e64_V_MFMA_F32_32X32X1F32_mac_e64_V_MFMA_F32_32X32X1F32_mac_vgprcd_e64_V_MFMA_F32_32X32X1F32_vgprcd_e64_V_MFMA_F32_32X32X2BF16_e64_V_MFMA_F32_32X32X2BF16_mac_e64_V_MFMA_F32_32X32X2BF16_mac_vgprcd_e64_V_MFMA_F32_32X32X2BF16_vgprcd_e64_V_MFMA_F32_32X32X2F32_e64_V_MFMA_F32_32X32X2F32_mac_e64_V_MFMA_F32_32X32X2F32_mac_vgprcd_e64_V_MFMA_F32_32X32X2F32_vgprcd_e64_V_MFMA_F32_32X32X4BF16_1K_e64_V_MFMA_F32_32X32X4BF16_1K_mac_e64_V_MFMA_F32_32X32X4BF16_1K_mac_vgprcd_e64_V_MFMA_F32_32X32X4BF16_1K_vgprcd_e64_V_MFMA_F32_32X32X4BF16_e64_V_MFMA_F32_32X32X4BF16_mac_e64_V_MFMA_F32_32X32X4BF16_mac_vgprcd_e64_V_MFMA_F32_32X32X4BF16_vgprcd_e64_V_MFMA_F32_32X32X4F16_e64_V_MFMA_F32_32X32X4F16_mac_e64_V_MFMA_F32_32X32X4F16_mac_vgprcd_e64_V_MFMA_F32_32X32X4F16_vgprcd_e64_V_MFMA_F32_32X32X4XF32_e64_V_MFMA_F32_32X32X4XF32_mac_e64_V_MFMA_F32_32X32X4XF32_mac_vgprcd_e64_V_MFMA_F32_32X32X4XF32_vgprcd_e64_V_MFMA_F32_32X32X8BF16_1K_e64_V_MFMA_F32_32X32X8BF16_1K_mac_e64_V_MFMA_F32_32X32X8BF16_1K_mac_vgprcd_e64_V_MFMA_F32_32X32X8BF16_1K_vgprcd_e64_V_MFMA_F32_32X32X8F16_e64_V_MFMA_F32_32X32X8F16_mac_e64_V_MFMA_F32_32X32X8F16_mac_vgprcd_e64_V_MFMA_F32_32X32X8F16_vgprcd_e64_V_MFMA_I32_32X32X16I8_e64_V_MFMA_I32_32X32X16I8_mac_e64_V_MFMA_I32_32X32X16I8_mac_vgprcd_e64_V_MFMA_I32_32X32X16I8_vgprcd_e64_V_MFMA_I32_32X32X4I8_e64_V_MFMA_I32_32X32X4I8_mac_e64_V_MFMA_I32_32X32X4I8_mac_vgprcd_e64_V_MFMA_I32_32X32X4I8_vgprcd_e64_V_MFMA_I32_32X32X8I8_e64_V_MFMA_I32_32X32X8I8_mac_e64_V_MFMA_I32_32X32X8I8_mac_vgprcd_e64_V_MFMA_I32_32X32X8I8_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_BF8_gfx940_acd_V_MFMA_F32_32X32X16_BF8_BF8_gfx940_vcd_V_MFMA_F32_32X32X16_BF8_FP8_gfx940_acd_V_MFMA_F32_32X32X16_BF8_FP8_gfx940_vcd_V_MFMA_F32_32X32X16_FP8_BF8_gfx940_acd_V_MFMA_F32_32X32X16_FP8_BF8_gfx940_vcd_V_MFMA_F32_32X32X16_FP8_FP8_gfx940_acd_V_MFMA_F32_32X32X16_FP8_FP8_gfx940_vcd_V_MFMA_F32_32X32X1F32_gfx90a_acd_V_MFMA_F32_32X32X1F32_gfx90a_vcd_V_MFMA_F32_32X32X1F32_gfx940_acd_V_MFMA_F32_32X32X1F32_gfx940_vcd_V_MFMA_F32_32X32X1F32_vi_V_MFMA_F32_32X32X2BF16_gfx90a_acd_V_MFMA_F32_32X32X2BF16_gfx90a_vcd_V_MFMA_F32_32X32X2BF16_gfx940_acd_V_MFMA_F32_32X32X2BF16_gfx940_vcd_V_MFMA_F32_32X32X2BF16_vi_V_MFMA_F32_32X32X2F32_gfx90a_acd_V_MFMA_F32_32X32X2F32_gfx90a_vcd_V_MFMA_F32_32X32X2F32_gfx940_acd_V_MFMA_F32_32X32X2F32_gfx940_vcd_V_MFMA_F32_32X32X2F32_vi_V_MFMA_F32_32X32X4BF16_1K_gfx90a_acd_V_MFMA_F32_32X32X4BF16_1K_gfx90a_vcd_V_MFMA_F32_32X32X4BF16_1K_gfx940_acd_V_MFMA_F32_32X32X4BF16_1K_gfx940_vcd_V_MFMA_F32_32X32X4BF16_gfx90a_acd_V_MFMA_F32_32X32X4BF16_gfx90a_vcd_V_MFMA_F32_32X32X4BF16_gfx940_acd_V_MFMA_F32_32X32X4BF16_gfx940_vcd_V_MFMA_F32_32X32X4BF16_vi_V_MFMA_F32_32X32X4F16_gfx90a_acd_V_MFMA_F32_32X32X4F16_gfx90a_vcd_V_MFMA_F32_32X32X4F16_gfx940_acd_V_MFMA_F32_32X32X4F16_gfx940_vcd_V_MFMA_F32_32X32X4F16_vi_V_MFMA_F32_32X32X4XF32_gfx940_acd_V_MFMA_F32_32X32X4XF32_gfx940_vcd_V_MFMA_F32_32X32X8BF16_1K_gfx90a_acd_V_MFMA_F32_32X32X8BF16_1K_gfx90a_vcd_V_MFMA_F32_32X32X8BF16_1K_gfx940_acd_V_MFMA_F32_32X32X8BF16_1K_gfx940_vcd_V_MFMA_F32_32X32X8F16_gfx90a_acd_V_MFMA_F32_32X32X8F16_gfx90a_vcd_V_MFMA_F32_32X32X8F16_gfx940_acd_V_MFMA_F32_32X32X8F16_gfx940_vcd_V_MFMA_F32_32X32X8F16_vi_V_MFMA_I32_32X32X16I8_gfx940_acd_V_MFMA_I32_32X32X16I8_gfx940_vcd_V_MFMA_I32_32X32X4I8_gfx90a_acd_V_MFMA_I32_32X32X4I8_gfx90a_vcd_V_MFMA_I32_32X32X4I8_gfx940_acd_V_MFMA_I32_32X32X4I8_gfx940_vcd_V_MFMA_I32_32X32X4I8_vi_V_MFMA_I32_32X32X8I8_gfx90a_acd_V_MFMA_I32_32X32X8I8_gfx90a_vcd_V_MFMA_I32_32X32X8I8_gfx940_acd_V_MFMA_I32_32X32X8I8_gfx940_vcd_V_MFMA_I32_32X32X8I8_vi") 1, false, false, true, 12, 1, 11, 1,  1, 1}, // #33
  {DBGFIELD("V_MFMA_F32_4X4X1F32_e64_V_MFMA_F32_4X4X1F32_vgprcd_e64_V_MFMA_F32_4X4X2BF16_e64_V_MFMA_F32_4X4X2BF16_vgprcd_e64_V_MFMA_F32_4X4X4BF16_1K_e64_V_MFMA_F32_4X4X4BF16_1K_vgprcd_e64_V_MFMA_F32_4X4X4F16_e64_V_MFMA_F32_4X4X4F16_vgprcd_e64_V_MFMA_I32_4X4X4I8_e64_V_MFMA_I32_4X4X4I8_vgprcd_e64_V_MFMA_F32_4X4X1F32_gfx90a_acd_V_MFMA_F32_4X4X1F32_gfx90a_vcd_V_MFMA_F32_4X4X1F32_gfx940_acd_V_MFMA_F32_4X4X1F32_gfx940_vcd_V_MFMA_F32_4X4X1F32_vi_V_MFMA_F32_4X4X2BF16_gfx90a_acd_V_MFMA_F32_4X4X2BF16_gfx90a_vcd_V_MFMA_F32_4X4X2BF16_gfx940_acd_V_MFMA_F32_4X4X2BF16_gfx940_vcd_V_MFMA_F32_4X4X2BF16_vi_V_MFMA_F32_4X4X4BF16_1K_gfx90a_acd_V_MFMA_F32_4X4X4BF16_1K_gfx90a_vcd_V_MFMA_F32_4X4X4BF16_1K_gfx940_acd_V_MFMA_F32_4X4X4BF16_1K_gfx940_vcd_V_MFMA_F32_4X4X4F16_gfx90a_acd_V_MFMA_F32_4X4X4F16_gfx90a_vcd_V_MFMA_F32_4X4X4F16_gfx940_acd_V_MFMA_F32_4X4X4F16_gfx940_vcd_V_MFMA_F32_4X4X4F16_vi_V_MFMA_I32_4X4X4I8_gfx90a_acd_V_MFMA_I32_4X4X4I8_gfx90a_vcd_V_MFMA_I32_4X4X4I8_gfx940_acd_V_MFMA_I32_4X4X4I8_gfx940_vcd_V_MFMA_I32_4X4X4I8_vi") 1, false, false, true, 10, 1,  8, 1,  1, 1}, // #34
  {DBGFIELD("V_MFMA_F32_16X16X16BF16_1K_e64_V_MFMA_F32_16X16X16BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X16F16_e64_V_MFMA_F32_16X16X16F16_vgprcd_e64_V_MFMA_F32_16X16X1F32_e64_V_MFMA_F32_16X16X1F32_mac_e64_V_MFMA_F32_16X16X1F32_mac_vgprcd_e64_V_MFMA_F32_16X16X1F32_vgprcd_e64_V_MFMA_F32_16X16X2BF16_e64_V_MFMA_F32_16X16X2BF16_mac_e64_V_MFMA_F32_16X16X2BF16_mac_vgprcd_e64_V_MFMA_F32_16X16X2BF16_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_BF8_e64_V_MFMA_F32_16X16X32_BF8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_FP8_e64_V_MFMA_F32_16X16X32_BF8_FP8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_BF8_e64_V_MFMA_F32_16X16X32_FP8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_FP8_e64_V_MFMA_F32_16X16X32_FP8_FP8_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_e64_V_MFMA_F32_16X16X4BF16_1K_mac_e64_V_MFMA_F32_16X16X4BF16_1K_mac_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X4F16_e64_V_MFMA_F32_16X16X4F16_mac_e64_V_MFMA_F32_16X16X4F16_mac_vgprcd_e64_V_MFMA_F32_16X16X4F16_vgprcd_e64_V_MFMA_F32_16X16X4F32_e64_V_MFMA_F32_16X16X4F32_vgprcd_e64_V_MFMA_F32_16X16X8BF16_e64_V_MFMA_F32_16X16X8BF16_vgprcd_e64_V_MFMA_F32_16X16X8XF32_e64_V_MFMA_F32_16X16X8XF32_vgprcd_e64_V_MFMA_I32_16X16X16I8_e64_V_MFMA_I32_16X16X16I8_vgprcd_e64_V_MFMA_I32_16X16X32I8_e64_V_MFMA_I32_16X16X32I8_vgprcd_e64_V_MFMA_I32_16X16X4I8_e64_V_MFMA_I32_16X16X4I8_mac_e64_V_MFMA_I32_16X16X4I8_mac_vgprcd_e64_V_MFMA_I32_16X16X4I8_vgprcd_e64_V_MFMA_F32_16X16X16BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X16BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X16BF16_1K_gfx940_acd_V_MFMA_F32_16X16X16BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X16F16_gfx90a_acd_V_MFMA_F32_16X16X16F16_gfx90a_vcd_V_MFMA_F32_16X16X16F16_gfx940_acd_V_MFMA_F32_16X16X16F16_gfx940_vcd_V_MFMA_F32_16X16X16F16_vi_V_MFMA_F32_16X16X1F32_gfx90a_acd_V_MFMA_F32_16X16X1F32_gfx90a_vcd_V_MFMA_F32_16X16X1F32_gfx940_acd_V_MFMA_F32_16X16X1F32_gfx940_vcd_V_MFMA_F32_16X16X1F32_vi_V_MFMA_F32_16X16X2BF16_gfx90a_acd_V_MFMA_F32_16X16X2BF16_gfx90a_vcd_V_MFMA_F32_16X16X2BF16_gfx940_acd_V_MFMA_F32_16X16X2BF16_gfx940_vcd_V_MFMA_F32_16X16X2BF16_vi_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx940_acd_V_MFMA_F32_16X16X4BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X4F16_gfx90a_acd_V_MFMA_F32_16X16X4F16_gfx90a_vcd_V_MFMA_F32_16X16X4F16_gfx940_acd_V_MFMA_F32_16X16X4F16_gfx940_vcd_V_MFMA_F32_16X16X4F16_vi_V_MFMA_F32_16X16X4F32_gfx90a_acd_V_MFMA_F32_16X16X4F32_gfx90a_vcd_V_MFMA_F32_16X16X4F32_gfx940_acd_V_MFMA_F32_16X16X4F32_gfx940_vcd_V_MFMA_F32_16X16X4F32_vi_V_MFMA_F32_16X16X8BF16_gfx90a_acd_V_MFMA_F32_16X16X8BF16_gfx90a_vcd_V_MFMA_F32_16X16X8BF16_gfx940_acd_V_MFMA_F32_16X16X8BF16_gfx940_vcd_V_MFMA_F32_16X16X8BF16_vi_V_MFMA_F32_16X16X8XF32_gfx940_acd_V_MFMA_F32_16X16X8XF32_gfx940_vcd_V_MFMA_I32_16X16X16I8_gfx90a_acd_V_MFMA_I32_16X16X16I8_gfx90a_vcd_V_MFMA_I32_16X16X16I8_gfx940_acd_V_MFMA_I32_16X16X16I8_gfx940_vcd_V_MFMA_I32_16X16X16I8_vi_V_MFMA_I32_16X16X32I8_gfx940_acd_V_MFMA_I32_16X16X32I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_gfx90a_acd_V_MFMA_I32_16X16X4I8_gfx90a_vcd_V_MFMA_I32_16X16X4I8_gfx940_acd_V_MFMA_I32_16X16X4I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_vi") 1, false, false, true, 11, 1,  5, 1,  1, 1}, // #35
  {DBGFIELD("V_MFMA_F32_16X16X8XF32_e64_V_MFMA_F32_16X16X8XF32_vgprcd_e64_V_MFMA_F32_16X16X8XF32_gfx940_acd_V_MFMA_F32_16X16X8XF32_gfx940_vcd") 1, false, false, true, 11, 1,  5, 1,  1, 1}, // #36
  {DBGFIELD("V_MFMA_F32_16X16X16BF16_1K_e64_V_MFMA_F32_16X16X16BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X16F16_e64_V_MFMA_F32_16X16X16F16_vgprcd_e64_V_MFMA_I32_16X16X16I8_e64_V_MFMA_I32_16X16X16I8_vgprcd_e64_V_MFMA_F32_16X16X16BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X16BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X16BF16_1K_gfx940_acd_V_MFMA_F32_16X16X16BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X16F16_gfx90a_acd_V_MFMA_F32_16X16X16F16_gfx90a_vcd_V_MFMA_F32_16X16X16F16_gfx940_acd_V_MFMA_F32_16X16X16F16_gfx940_vcd_V_MFMA_F32_16X16X16F16_vi_V_MFMA_I32_16X16X16I8_gfx90a_acd_V_MFMA_I32_16X16X16I8_gfx90a_vcd_V_MFMA_I32_16X16X16I8_gfx940_acd_V_MFMA_I32_16X16X16I8_gfx940_vcd_V_MFMA_I32_16X16X16I8_vi") 1, false, false, true, 11, 1,  5, 1,  1, 1}, // #37
  {DBGFIELD("V_MFMA_F32_16X16X32_BF8_BF8_e64_V_MFMA_F32_16X16X32_BF8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_FP8_e64_V_MFMA_F32_16X16X32_BF8_FP8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_BF8_e64_V_MFMA_F32_16X16X32_FP8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_FP8_e64_V_MFMA_F32_16X16X32_FP8_FP8_vgprcd_e64_V_MFMA_I32_16X16X32I8_e64_V_MFMA_I32_16X16X32I8_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_vcd_V_MFMA_I32_16X16X32I8_gfx940_acd_V_MFMA_I32_16X16X32I8_gfx940_vcd") 1, false, false, true, 11, 1,  5, 1,  1, 1}, // #38
  {DBGFIELD("V_MFMA_F32_16X16X1F32_e64_V_MFMA_F32_16X16X1F32_mac_e64_V_MFMA_F32_16X16X1F32_mac_vgprcd_e64_V_MFMA_F32_16X16X1F32_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_e64_V_MFMA_F32_16X16X4BF16_1K_mac_e64_V_MFMA_F32_16X16X4BF16_1K_mac_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X4F16_e64_V_MFMA_F32_16X16X4F16_mac_e64_V_MFMA_F32_16X16X4F16_mac_vgprcd_e64_V_MFMA_F32_16X16X4F16_vgprcd_e64_V_MFMA_F32_16X16X4F32_e64_V_MFMA_F32_16X16X4F32_vgprcd_e64_V_MFMA_I32_16X16X4I8_e64_V_MFMA_I32_16X16X4I8_mac_e64_V_MFMA_I32_16X16X4I8_mac_vgprcd_e64_V_MFMA_I32_16X16X4I8_vgprcd_e64_V_MFMA_F32_16X16X1F32_gfx90a_acd_V_MFMA_F32_16X16X1F32_gfx90a_vcd_V_MFMA_F32_16X16X1F32_gfx940_acd_V_MFMA_F32_16X16X1F32_gfx940_vcd_V_MFMA_F32_16X16X1F32_vi_V_MFMA_F32_16X16X4BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx940_acd_V_MFMA_F32_16X16X4BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X4F16_gfx90a_acd_V_MFMA_F32_16X16X4F16_gfx90a_vcd_V_MFMA_F32_16X16X4F16_gfx940_acd_V_MFMA_F32_16X16X4F16_gfx940_vcd_V_MFMA_F32_16X16X4F16_vi_V_MFMA_F32_16X16X4F32_gfx90a_acd_V_MFMA_F32_16X16X4F32_gfx90a_vcd_V_MFMA_F32_16X16X4F32_gfx940_acd_V_MFMA_F32_16X16X4F32_gfx940_vcd_V_MFMA_F32_16X16X4F32_vi_V_MFMA_I32_16X16X4I8_gfx90a_acd_V_MFMA_I32_16X16X4I8_gfx90a_vcd_V_MFMA_I32_16X16X4I8_gfx940_acd_V_MFMA_I32_16X16X4I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_vi") 1, false, false, true, 11, 1,  5, 1,  1, 1}, // #39
  {DBGFIELD("V_MFMA_F32_32X32X4XF32_e64_V_MFMA_F32_32X32X4XF32_mac_e64_V_MFMA_F32_32X32X4XF32_mac_vgprcd_e64_V_MFMA_F32_32X32X4XF32_vgprcd_e64_V_MFMA_F32_32X32X4XF32_gfx940_acd_V_MFMA_F32_32X32X4XF32_gfx940_vcd") 1, false, false, true, 12, 1, 11, 1,  1, 1}, // #40
  {DBGFIELD("V_MFMA_F32_32X32X8BF16_1K_e64_V_MFMA_F32_32X32X8BF16_1K_mac_e64_V_MFMA_F32_32X32X8BF16_1K_mac_vgprcd_e64_V_MFMA_F32_32X32X8BF16_1K_vgprcd_e64_V_MFMA_F32_32X32X8F16_e64_V_MFMA_F32_32X32X8F16_mac_e64_V_MFMA_F32_32X32X8F16_mac_vgprcd_e64_V_MFMA_F32_32X32X8F16_vgprcd_e64_V_MFMA_I32_32X32X8I8_e64_V_MFMA_I32_32X32X8I8_mac_e64_V_MFMA_I32_32X32X8I8_mac_vgprcd_e64_V_MFMA_I32_32X32X8I8_vgprcd_e64_V_MFMA_F32_32X32X8BF16_1K_gfx90a_acd_V_MFMA_F32_32X32X8BF16_1K_gfx90a_vcd_V_MFMA_F32_32X32X8BF16_1K_gfx940_acd_V_MFMA_F32_32X32X8BF16_1K_gfx940_vcd_V_MFMA_F32_32X32X8F16_gfx90a_acd_V_MFMA_F32_32X32X8F16_gfx90a_vcd_V_MFMA_F32_32X32X8F16_gfx940_acd_V_MFMA_F32_32X32X8F16_gfx940_vcd_V_MFMA_F32_32X32X8F16_vi_V_MFMA_I32_32X32X8I8_gfx90a_acd_V_MFMA_I32_32X32X8I8_gfx90a_vcd_V_MFMA_I32_32X32X8I8_gfx940_acd_V_MFMA_I32_32X32X8I8_gfx940_vcd_V_MFMA_I32_32X32X8I8_vi") 1, false, false, true, 12, 1, 11, 1,  1, 1}, // #41
  {DBGFIELD("V_MFMA_F32_32X32X16_BF8_BF8_e64_V_MFMA_F32_32X32X16_BF8_BF8_mac_e64_V_MFMA_F32_32X32X16_BF8_BF8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_BF8_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_FP8_e64_V_MFMA_F32_32X32X16_BF8_FP8_mac_e64_V_MFMA_F32_32X32X16_BF8_FP8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_FP8_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_BF8_e64_V_MFMA_F32_32X32X16_FP8_BF8_mac_e64_V_MFMA_F32_32X32X16_FP8_BF8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_BF8_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_FP8_e64_V_MFMA_F32_32X32X16_FP8_FP8_mac_e64_V_MFMA_F32_32X32X16_FP8_FP8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_FP8_vgprcd_e64_V_MFMA_I32_32X32X16I8_e64_V_MFMA_I32_32X32X16I8_mac_e64_V_MFMA_I32_32X32X16I8_mac_vgprcd_e64_V_MFMA_I32_32X32X16I8_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_BF8_gfx940_acd_V_MFMA_F32_32X32X16_BF8_BF8_gfx940_vcd_V_MFMA_F32_32X32X16_BF8_FP8_gfx940_acd_V_MFMA_F32_32X32X16_BF8_FP8_gfx940_vcd_V_MFMA_F32_32X32X16_FP8_BF8_gfx940_acd_V_MFMA_F32_32X32X16_FP8_BF8_gfx940_vcd_V_MFMA_F32_32X32X16_FP8_FP8_gfx940_acd_V_MFMA_F32_32X32X16_FP8_FP8_gfx940_vcd_V_MFMA_I32_32X32X16I8_gfx940_acd_V_MFMA_I32_32X32X16I8_gfx940_vcd") 1, false, false, true, 12, 1, 11, 1,  1, 1}, // #42
  {DBGFIELD("V_SMFMAC_F32_16X16X32_BF16_e64_V_SMFMAC_F32_16X16X32_F16_e64_V_SMFMAC_F32_16X16X64_BF8_BF8_e64_V_SMFMAC_F32_16X16X64_BF8_FP8_e64_V_SMFMAC_F32_16X16X64_FP8_BF8_e64_V_SMFMAC_F32_16X16X64_FP8_FP8_e64_V_SMFMAC_I32_16X16X64_I8_e64_V_SMFMAC_F32_16X16X32_BF16_gfx940_V_SMFMAC_F32_16X16X32_F16_gfx940_V_SMFMAC_F32_16X16X64_BF8_BF8_gfx940_V_SMFMAC_F32_16X16X64_BF8_FP8_gfx940_V_SMFMAC_F32_16X16X64_FP8_BF8_gfx940_V_SMFMAC_F32_16X16X64_FP8_FP8_gfx940_V_SMFMAC_I32_16X16X64_I8_gfx940") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #43
  {DBGFIELD("V_SMFMAC_F32_32X32X16_BF16_e64_V_SMFMAC_F32_32X32X16_F16_e64_V_SMFMAC_F32_32X32X32_BF8_BF8_e64_V_SMFMAC_F32_32X32X32_BF8_FP8_e64_V_SMFMAC_F32_32X32X32_FP8_BF8_e64_V_SMFMAC_F32_32X32X32_FP8_FP8_e64_V_SMFMAC_I32_32X32X32_I8_e64_V_SMFMAC_F32_32X32X16_BF16_gfx940_V_SMFMAC_F32_32X32X16_F16_gfx940_V_SMFMAC_F32_32X32X32_BF8_BF8_gfx940_V_SMFMAC_F32_32X32X32_BF8_FP8_gfx940_V_SMFMAC_F32_32X32X32_FP8_BF8_gfx940_V_SMFMAC_F32_32X32X32_FP8_FP8_gfx940_V_SMFMAC_I32_32X32X32_I8_gfx940") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #44
  {DBGFIELD("Write32Bit")         1, false, false, true,  2, 1,  1, 1,  0, 0}, // #45
  {DBGFIELD("Write64Bit")         1, false, false, true,  2, 1,  1, 1,  0, 0}, // #46
  {DBGFIELD("WriteSALU")          1, false, false, true,  1, 1,  1, 1,  0, 0}, // #47
  {DBGFIELD("Write64Bit_MIVGPRRead") 0, false, false, false,  0, 0,  0, 0,  0, 0}, // #48
  {DBGFIELD("Write64Bit_ReadDefault") 0, false, false, false,  0, 0,  0, 0,  0, 0}, // #49
}; // SIDPFullSpeedModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, RetireOOO, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc SIDPGFX940FullSpeedModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  8191, false, false, false, 0, 0,  0, 0,  0, 0},
  {DBGFIELD("NullALU_WriteSALU")  1, false, false, true,  1, 1,  1, 1,  0, 0}, // #1
  {DBGFIELD("NullALU_Write32Bit") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #2
  {DBGFIELD("NullALU_WriteVMEM")  1, false, false, true,  3, 1,  2, 1,  0, 0}, // #3
  {DBGFIELD("NullALU_WriteLDS")   1, false, false, true,  4, 1,  3, 1,  0, 0}, // #4
  {DBGFIELD("NullALU_WriteExport") 1, false, false, true,  5, 1,  4, 1,  0, 0}, // #5
  {DBGFIELD("NullALU_WriteVMEM_WriteLDS") 2, false, false, true,  6, 2,  2, 2,  0, 0}, // #6
  {DBGFIELD("WriteBranch")        1, false, false, true,  8, 1,  5, 1,  0, 0}, // #7
  {DBGFIELD("NullALU")            8191, false, false, false,  0, 0,  0, 0,  0, 0}, // #8
  {DBGFIELD("NullALU_WriteBranch") 1, false, false, true,  8, 1,  5, 1,  0, 0}, // #9
  {DBGFIELD("NullALU_WriteSMEM")  1, false, false, true,  4, 1,  3, 1,  0, 0}, // #10
  {DBGFIELD("NullALU_WriteBarrier") 1, false, false, true,  8, 1,  6, 1,  0, 0}, // #11
  {DBGFIELD("NullALU_WriteSALU_Write64Bit") 2, false, false, true,  1, 2,  9, 2,  0, 0}, // #12
  {DBGFIELD("NullALU_Write32Bit_WriteSALU") 2, false, false, true,  1, 2,  9, 2,  0, 0}, // #13
  {DBGFIELD("NullALU_WriteDoubleAdd") 1, false, false, false,  2, 1,  1, 1,  0, 0}, // #14
  {DBGFIELD("NullALU_Write64Bit") 1, false, false, false,  2, 1,  1, 1,  0, 0}, // #15
  {DBGFIELD("NullALU_WriteTrans32") 1, false, false, true,  2, 1,  4, 1,  0, 0}, // #16
  {DBGFIELD("NullALU_WriteFloatCvt") 1, false, false, true,  2, 1,  4, 1,  0, 0}, // #17
  {DBGFIELD("NullALU_WriteDoubleCvt") 1, false, false, false,  2, 1,  1, 1,  0, 0}, // #18
  {DBGFIELD("NullALU_WriteFloatFMA") 1, false, false, false,  2, 1,  1, 1,  0, 0}, // #19
  {DBGFIELD("NullALU_WriteDouble") 1, false, false, false,  2, 1,  1, 1,  0, 0}, // #20
  {DBGFIELD("NullALU_WriteFloatFMA_WriteSALU") 2, false, false, true,  1, 2,  9, 2,  0, 0}, // #21
  {DBGFIELD("NullALU_WriteDouble_WriteSALU") 2, false, false, true,  1, 2,  9, 2,  0, 0}, // #22
  {DBGFIELD("NullALU_WriteIntMul_WriteSALU") 2, false, false, true,  1, 2,  9, 2,  0, 0}, // #23
  {DBGFIELD("NullALU_WriteQuarterRate32") 1, false, false, true,  2, 1,  4, 1,  0, 0}, // #24
  {DBGFIELD("NullALU_WriteIntMul") 1, false, false, false,  2, 1,  1, 1,  0, 0}, // #25
  {DBGFIELD("NullALU_WriteTrans64") 1, false, false, false,  2, 1,  4, 1,  0, 0}, // #26
  {DBGFIELD("NullALU_Write64Bit_Write64Bit") 2, false, false, false,  9, 1,  9, 2,  0, 0}, // #27
  {DBGFIELD("NullALU_Write32Bit_Write32Bit") 2, false, false, true,  9, 1,  9, 2,  0, 0}, // #28
  {DBGFIELD("COPY")               8190, false, false, false,  0, 0,  0, 0,  0, 0}, // #29
  {DBGFIELD("V_ACCVGPR_WRITE_B32_e64") 1, false, false, false,  2, 1,  1, 1,  0, 0}, // #30
  {DBGFIELD("V_MFMA_F32_4X4X1F32_e64_V_MFMA_F32_4X4X1F32_vgprcd_e64_V_MFMA_F32_4X4X2BF16_e64_V_MFMA_F32_4X4X2BF16_vgprcd_e64_V_MFMA_F32_4X4X4BF16_1K_e64_V_MFMA_F32_4X4X4BF16_1K_vgprcd_e64_V_MFMA_F32_4X4X4F16_e64_V_MFMA_F32_4X4X4F16_vgprcd_e64_V_MFMA_F64_4X4X4F64_e64_V_MFMA_F64_4X4X4F64_vgprcd_e64_V_MFMA_I32_4X4X4I8_e64_V_MFMA_I32_4X4X4I8_vgprcd_e64_V_MFMA_F32_4X4X1F32_gfx90a_acd_V_MFMA_F32_4X4X1F32_gfx90a_vcd_V_MFMA_F32_4X4X1F32_gfx940_acd_V_MFMA_F32_4X4X1F32_gfx940_vcd_V_MFMA_F32_4X4X1F32_vi_V_MFMA_F32_4X4X2BF16_gfx90a_acd_V_MFMA_F32_4X4X2BF16_gfx90a_vcd_V_MFMA_F32_4X4X2BF16_gfx940_acd_V_MFMA_F32_4X4X2BF16_gfx940_vcd_V_MFMA_F32_4X4X2BF16_vi_V_MFMA_F32_4X4X4BF16_1K_gfx90a_acd_V_MFMA_F32_4X4X4BF16_1K_gfx90a_vcd_V_MFMA_F32_4X4X4BF16_1K_gfx940_acd_V_MFMA_F32_4X4X4BF16_1K_gfx940_vcd_V_MFMA_F32_4X4X4F16_gfx90a_acd_V_MFMA_F32_4X4X4F16_gfx90a_vcd_V_MFMA_F32_4X4X4F16_gfx940_acd_V_MFMA_F32_4X4X4F16_gfx940_vcd_V_MFMA_F32_4X4X4F16_vi_V_MFMA_F64_4X4X4F64_gfx90a_acd_V_MFMA_F64_4X4X4F64_gfx90a_vcd_V_MFMA_F64_4X4X4F64_gfx940_acd_V_MFMA_F64_4X4X4F64_gfx940_vcd_V_MFMA_I32_4X4X4I8_gfx90a_acd_V_MFMA_I32_4X4X4I8_gfx90a_vcd_V_MFMA_I32_4X4X4I8_gfx940_acd_V_MFMA_I32_4X4X4I8_gfx940_vcd_V_MFMA_I32_4X4X4I8_vi") 1, false, false, true,  2, 1,  4, 1,  1, 1}, // #31
  {DBGFIELD("V_MFMA_F32_16X16X16BF16_1K_e64_V_MFMA_F32_16X16X16BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X16F16_e64_V_MFMA_F32_16X16X16F16_vgprcd_e64_V_MFMA_F32_16X16X1F32_e64_V_MFMA_F32_16X16X1F32_mac_e64_V_MFMA_F32_16X16X1F32_mac_vgprcd_e64_V_MFMA_F32_16X16X1F32_vgprcd_e64_V_MFMA_F32_16X16X2BF16_e64_V_MFMA_F32_16X16X2BF16_mac_e64_V_MFMA_F32_16X16X2BF16_mac_vgprcd_e64_V_MFMA_F32_16X16X2BF16_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_BF8_e64_V_MFMA_F32_16X16X32_BF8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_FP8_e64_V_MFMA_F32_16X16X32_BF8_FP8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_BF8_e64_V_MFMA_F32_16X16X32_FP8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_FP8_e64_V_MFMA_F32_16X16X32_FP8_FP8_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_e64_V_MFMA_F32_16X16X4BF16_1K_mac_e64_V_MFMA_F32_16X16X4BF16_1K_mac_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X4F16_e64_V_MFMA_F32_16X16X4F16_mac_e64_V_MFMA_F32_16X16X4F16_mac_vgprcd_e64_V_MFMA_F32_16X16X4F16_vgprcd_e64_V_MFMA_F32_16X16X4F32_e64_V_MFMA_F32_16X16X4F32_vgprcd_e64_V_MFMA_F32_16X16X8BF16_e64_V_MFMA_F32_16X16X8BF16_vgprcd_e64_V_MFMA_F32_16X16X8XF32_e64_V_MFMA_F32_16X16X8XF32_vgprcd_e64_V_MFMA_F64_16X16X4F64_e64_V_MFMA_F64_16X16X4F64_mac_e64_V_MFMA_F64_16X16X4F64_mac_vgprcd_e64_V_MFMA_F64_16X16X4F64_vgprcd_e64_V_MFMA_I32_16X16X16I8_e64_V_MFMA_I32_16X16X16I8_vgprcd_e64_V_MFMA_I32_16X16X32I8_e64_V_MFMA_I32_16X16X32I8_vgprcd_e64_V_MFMA_I32_16X16X4I8_e64_V_MFMA_I32_16X16X4I8_mac_e64_V_MFMA_I32_16X16X4I8_mac_vgprcd_e64_V_MFMA_I32_16X16X4I8_vgprcd_e64_V_MFMA_F32_16X16X16BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X16BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X16BF16_1K_gfx940_acd_V_MFMA_F32_16X16X16BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X16F16_gfx90a_acd_V_MFMA_F32_16X16X16F16_gfx90a_vcd_V_MFMA_F32_16X16X16F16_gfx940_acd_V_MFMA_F32_16X16X16F16_gfx940_vcd_V_MFMA_F32_16X16X16F16_vi_V_MFMA_F32_16X16X1F32_gfx90a_acd_V_MFMA_F32_16X16X1F32_gfx90a_vcd_V_MFMA_F32_16X16X1F32_gfx940_acd_V_MFMA_F32_16X16X1F32_gfx940_vcd_V_MFMA_F32_16X16X1F32_vi_V_MFMA_F32_16X16X2BF16_gfx90a_acd_V_MFMA_F32_16X16X2BF16_gfx90a_vcd_V_MFMA_F32_16X16X2BF16_gfx940_acd_V_MFMA_F32_16X16X2BF16_gfx940_vcd_V_MFMA_F32_16X16X2BF16_vi_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx940_acd_V_MFMA_F32_16X16X4BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X4F16_gfx90a_acd_V_MFMA_F32_16X16X4F16_gfx90a_vcd_V_MFMA_F32_16X16X4F16_gfx940_acd_V_MFMA_F32_16X16X4F16_gfx940_vcd_V_MFMA_F32_16X16X4F16_vi_V_MFMA_F32_16X16X4F32_gfx90a_acd_V_MFMA_F32_16X16X4F32_gfx90a_vcd_V_MFMA_F32_16X16X4F32_gfx940_acd_V_MFMA_F32_16X16X4F32_gfx940_vcd_V_MFMA_F32_16X16X4F32_vi_V_MFMA_F32_16X16X8BF16_gfx90a_acd_V_MFMA_F32_16X16X8BF16_gfx90a_vcd_V_MFMA_F32_16X16X8BF16_gfx940_acd_V_MFMA_F32_16X16X8BF16_gfx940_vcd_V_MFMA_F32_16X16X8BF16_vi_V_MFMA_F32_16X16X8XF32_gfx940_acd_V_MFMA_F32_16X16X8XF32_gfx940_vcd_V_MFMA_F64_16X16X4F64_gfx90a_acd_V_MFMA_F64_16X16X4F64_gfx90a_vcd_V_MFMA_F64_16X16X4F64_gfx940_acd_V_MFMA_F64_16X16X4F64_gfx940_vcd_V_MFMA_I32_16X16X16I8_gfx90a_acd_V_MFMA_I32_16X16X16I8_gfx90a_vcd_V_MFMA_I32_16X16X16I8_gfx940_acd_V_MFMA_I32_16X16X16I8_gfx940_vcd_V_MFMA_I32_16X16X16I8_vi_V_MFMA_I32_16X16X32I8_gfx940_acd_V_MFMA_I32_16X16X32I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_gfx90a_acd_V_MFMA_I32_16X16X4I8_gfx90a_vcd_V_MFMA_I32_16X16X4I8_gfx940_acd_V_MFMA_I32_16X16X4I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_vi") 1, false, false, true,  2, 1, 11, 1,  1, 1}, // #32
  {DBGFIELD("V_MFMA_F32_32X32X16_BF8_BF8_e64_V_MFMA_F32_32X32X16_BF8_BF8_mac_e64_V_MFMA_F32_32X32X16_BF8_BF8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_BF8_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_FP8_e64_V_MFMA_F32_32X32X16_BF8_FP8_mac_e64_V_MFMA_F32_32X32X16_BF8_FP8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_FP8_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_BF8_e64_V_MFMA_F32_32X32X16_FP8_BF8_mac_e64_V_MFMA_F32_32X32X16_FP8_BF8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_BF8_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_FP8_e64_V_MFMA_F32_32X32X16_FP8_FP8_mac_e64_V_MFMA_F32_32X32X16_FP8_FP8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_FP8_vgprcd_e64_V_MFMA_F32_32X32X1F32_e64_V_MFMA_F32_32X32X1F32_mac_e64_V_MFMA_F32_32X32X1F32_mac_vgprcd_e64_V_MFMA_F32_32X32X1F32_vgprcd_e64_V_MFMA_F32_32X32X2BF16_e64_V_MFMA_F32_32X32X2BF16_mac_e64_V_MFMA_F32_32X32X2BF16_mac_vgprcd_e64_V_MFMA_F32_32X32X2BF16_vgprcd_e64_V_MFMA_F32_32X32X2F32_e64_V_MFMA_F32_32X32X2F32_mac_e64_V_MFMA_F32_32X32X2F32_mac_vgprcd_e64_V_MFMA_F32_32X32X2F32_vgprcd_e64_V_MFMA_F32_32X32X4BF16_1K_e64_V_MFMA_F32_32X32X4BF16_1K_mac_e64_V_MFMA_F32_32X32X4BF16_1K_mac_vgprcd_e64_V_MFMA_F32_32X32X4BF16_1K_vgprcd_e64_V_MFMA_F32_32X32X4BF16_e64_V_MFMA_F32_32X32X4BF16_mac_e64_V_MFMA_F32_32X32X4BF16_mac_vgprcd_e64_V_MFMA_F32_32X32X4BF16_vgprcd_e64_V_MFMA_F32_32X32X4F16_e64_V_MFMA_F32_32X32X4F16_mac_e64_V_MFMA_F32_32X32X4F16_mac_vgprcd_e64_V_MFMA_F32_32X32X4F16_vgprcd_e64_V_MFMA_F32_32X32X4XF32_e64_V_MFMA_F32_32X32X4XF32_mac_e64_V_MFMA_F32_32X32X4XF32_mac_vgprcd_e64_V_MFMA_F32_32X32X4XF32_vgprcd_e64_V_MFMA_F32_32X32X8BF16_1K_e64_V_MFMA_F32_32X32X8BF16_1K_mac_e64_V_MFMA_F32_32X32X8BF16_1K_mac_vgprcd_e64_V_MFMA_F32_32X32X8BF16_1K_vgprcd_e64_V_MFMA_F32_32X32X8F16_e64_V_MFMA_F32_32X32X8F16_mac_e64_V_MFMA_F32_32X32X8F16_mac_vgprcd_e64_V_MFMA_F32_32X32X8F16_vgprcd_e64_V_MFMA_I32_32X32X16I8_e64_V_MFMA_I32_32X32X16I8_mac_e64_V_MFMA_I32_32X32X16I8_mac_vgprcd_e64_V_MFMA_I32_32X32X16I8_vgprcd_e64_V_MFMA_I32_32X32X4I8_e64_V_MFMA_I32_32X32X4I8_mac_e64_V_MFMA_I32_32X32X4I8_mac_vgprcd_e64_V_MFMA_I32_32X32X4I8_vgprcd_e64_V_MFMA_I32_32X32X8I8_e64_V_MFMA_I32_32X32X8I8_mac_e64_V_MFMA_I32_32X32X8I8_mac_vgprcd_e64_V_MFMA_I32_32X32X8I8_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_BF8_gfx940_acd_V_MFMA_F32_32X32X16_BF8_BF8_gfx940_vcd_V_MFMA_F32_32X32X16_BF8_FP8_gfx940_acd_V_MFMA_F32_32X32X16_BF8_FP8_gfx940_vcd_V_MFMA_F32_32X32X16_FP8_BF8_gfx940_acd_V_MFMA_F32_32X32X16_FP8_BF8_gfx940_vcd_V_MFMA_F32_32X32X16_FP8_FP8_gfx940_acd_V_MFMA_F32_32X32X16_FP8_FP8_gfx940_vcd_V_MFMA_F32_32X32X1F32_gfx90a_acd_V_MFMA_F32_32X32X1F32_gfx90a_vcd_V_MFMA_F32_32X32X1F32_gfx940_acd_V_MFMA_F32_32X32X1F32_gfx940_vcd_V_MFMA_F32_32X32X1F32_vi_V_MFMA_F32_32X32X2BF16_gfx90a_acd_V_MFMA_F32_32X32X2BF16_gfx90a_vcd_V_MFMA_F32_32X32X2BF16_gfx940_acd_V_MFMA_F32_32X32X2BF16_gfx940_vcd_V_MFMA_F32_32X32X2BF16_vi_V_MFMA_F32_32X32X2F32_gfx90a_acd_V_MFMA_F32_32X32X2F32_gfx90a_vcd_V_MFMA_F32_32X32X2F32_gfx940_acd_V_MFMA_F32_32X32X2F32_gfx940_vcd_V_MFMA_F32_32X32X2F32_vi_V_MFMA_F32_32X32X4BF16_1K_gfx90a_acd_V_MFMA_F32_32X32X4BF16_1K_gfx90a_vcd_V_MFMA_F32_32X32X4BF16_1K_gfx940_acd_V_MFMA_F32_32X32X4BF16_1K_gfx940_vcd_V_MFMA_F32_32X32X4BF16_gfx90a_acd_V_MFMA_F32_32X32X4BF16_gfx90a_vcd_V_MFMA_F32_32X32X4BF16_gfx940_acd_V_MFMA_F32_32X32X4BF16_gfx940_vcd_V_MFMA_F32_32X32X4BF16_vi_V_MFMA_F32_32X32X4F16_gfx90a_acd_V_MFMA_F32_32X32X4F16_gfx90a_vcd_V_MFMA_F32_32X32X4F16_gfx940_acd_V_MFMA_F32_32X32X4F16_gfx940_vcd_V_MFMA_F32_32X32X4F16_vi_V_MFMA_F32_32X32X4XF32_gfx940_acd_V_MFMA_F32_32X32X4XF32_gfx940_vcd_V_MFMA_F32_32X32X8BF16_1K_gfx90a_acd_V_MFMA_F32_32X32X8BF16_1K_gfx90a_vcd_V_MFMA_F32_32X32X8BF16_1K_gfx940_acd_V_MFMA_F32_32X32X8BF16_1K_gfx940_vcd_V_MFMA_F32_32X32X8F16_gfx90a_acd_V_MFMA_F32_32X32X8F16_gfx90a_vcd_V_MFMA_F32_32X32X8F16_gfx940_acd_V_MFMA_F32_32X32X8F16_gfx940_vcd_V_MFMA_F32_32X32X8F16_vi_V_MFMA_I32_32X32X16I8_gfx940_acd_V_MFMA_I32_32X32X16I8_gfx940_vcd_V_MFMA_I32_32X32X4I8_gfx90a_acd_V_MFMA_I32_32X32X4I8_gfx90a_vcd_V_MFMA_I32_32X32X4I8_gfx940_acd_V_MFMA_I32_32X32X4I8_gfx940_vcd_V_MFMA_I32_32X32X4I8_vi_V_MFMA_I32_32X32X8I8_gfx90a_acd_V_MFMA_I32_32X32X8I8_gfx90a_vcd_V_MFMA_I32_32X32X8I8_gfx940_acd_V_MFMA_I32_32X32X8I8_gfx940_vcd_V_MFMA_I32_32X32X8I8_vi") 1, false, false, true, 12, 1, 11, 1,  1, 1}, // #33
  {DBGFIELD("V_MFMA_F32_4X4X1F32_e64_V_MFMA_F32_4X4X1F32_vgprcd_e64_V_MFMA_F32_4X4X2BF16_e64_V_MFMA_F32_4X4X2BF16_vgprcd_e64_V_MFMA_F32_4X4X4BF16_1K_e64_V_MFMA_F32_4X4X4BF16_1K_vgprcd_e64_V_MFMA_F32_4X4X4F16_e64_V_MFMA_F32_4X4X4F16_vgprcd_e64_V_MFMA_I32_4X4X4I8_e64_V_MFMA_I32_4X4X4I8_vgprcd_e64_V_MFMA_F32_4X4X1F32_gfx90a_acd_V_MFMA_F32_4X4X1F32_gfx90a_vcd_V_MFMA_F32_4X4X1F32_gfx940_acd_V_MFMA_F32_4X4X1F32_gfx940_vcd_V_MFMA_F32_4X4X1F32_vi_V_MFMA_F32_4X4X2BF16_gfx90a_acd_V_MFMA_F32_4X4X2BF16_gfx90a_vcd_V_MFMA_F32_4X4X2BF16_gfx940_acd_V_MFMA_F32_4X4X2BF16_gfx940_vcd_V_MFMA_F32_4X4X2BF16_vi_V_MFMA_F32_4X4X4BF16_1K_gfx90a_acd_V_MFMA_F32_4X4X4BF16_1K_gfx90a_vcd_V_MFMA_F32_4X4X4BF16_1K_gfx940_acd_V_MFMA_F32_4X4X4BF16_1K_gfx940_vcd_V_MFMA_F32_4X4X4F16_gfx90a_acd_V_MFMA_F32_4X4X4F16_gfx90a_vcd_V_MFMA_F32_4X4X4F16_gfx940_acd_V_MFMA_F32_4X4X4F16_gfx940_vcd_V_MFMA_F32_4X4X4F16_vi_V_MFMA_I32_4X4X4I8_gfx90a_acd_V_MFMA_I32_4X4X4I8_gfx90a_vcd_V_MFMA_I32_4X4X4I8_gfx940_acd_V_MFMA_I32_4X4X4I8_gfx940_vcd_V_MFMA_I32_4X4X4I8_vi") 1, false, false, true, 10, 1,  8, 1,  1, 1}, // #34
  {DBGFIELD("V_MFMA_F32_16X16X16BF16_1K_e64_V_MFMA_F32_16X16X16BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X16F16_e64_V_MFMA_F32_16X16X16F16_vgprcd_e64_V_MFMA_F32_16X16X1F32_e64_V_MFMA_F32_16X16X1F32_mac_e64_V_MFMA_F32_16X16X1F32_mac_vgprcd_e64_V_MFMA_F32_16X16X1F32_vgprcd_e64_V_MFMA_F32_16X16X2BF16_e64_V_MFMA_F32_16X16X2BF16_mac_e64_V_MFMA_F32_16X16X2BF16_mac_vgprcd_e64_V_MFMA_F32_16X16X2BF16_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_BF8_e64_V_MFMA_F32_16X16X32_BF8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_FP8_e64_V_MFMA_F32_16X16X32_BF8_FP8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_BF8_e64_V_MFMA_F32_16X16X32_FP8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_FP8_e64_V_MFMA_F32_16X16X32_FP8_FP8_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_e64_V_MFMA_F32_16X16X4BF16_1K_mac_e64_V_MFMA_F32_16X16X4BF16_1K_mac_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X4F16_e64_V_MFMA_F32_16X16X4F16_mac_e64_V_MFMA_F32_16X16X4F16_mac_vgprcd_e64_V_MFMA_F32_16X16X4F16_vgprcd_e64_V_MFMA_F32_16X16X4F32_e64_V_MFMA_F32_16X16X4F32_vgprcd_e64_V_MFMA_F32_16X16X8BF16_e64_V_MFMA_F32_16X16X8BF16_vgprcd_e64_V_MFMA_F32_16X16X8XF32_e64_V_MFMA_F32_16X16X8XF32_vgprcd_e64_V_MFMA_I32_16X16X16I8_e64_V_MFMA_I32_16X16X16I8_vgprcd_e64_V_MFMA_I32_16X16X32I8_e64_V_MFMA_I32_16X16X32I8_vgprcd_e64_V_MFMA_I32_16X16X4I8_e64_V_MFMA_I32_16X16X4I8_mac_e64_V_MFMA_I32_16X16X4I8_mac_vgprcd_e64_V_MFMA_I32_16X16X4I8_vgprcd_e64_V_MFMA_F32_16X16X16BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X16BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X16BF16_1K_gfx940_acd_V_MFMA_F32_16X16X16BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X16F16_gfx90a_acd_V_MFMA_F32_16X16X16F16_gfx90a_vcd_V_MFMA_F32_16X16X16F16_gfx940_acd_V_MFMA_F32_16X16X16F16_gfx940_vcd_V_MFMA_F32_16X16X16F16_vi_V_MFMA_F32_16X16X1F32_gfx90a_acd_V_MFMA_F32_16X16X1F32_gfx90a_vcd_V_MFMA_F32_16X16X1F32_gfx940_acd_V_MFMA_F32_16X16X1F32_gfx940_vcd_V_MFMA_F32_16X16X1F32_vi_V_MFMA_F32_16X16X2BF16_gfx90a_acd_V_MFMA_F32_16X16X2BF16_gfx90a_vcd_V_MFMA_F32_16X16X2BF16_gfx940_acd_V_MFMA_F32_16X16X2BF16_gfx940_vcd_V_MFMA_F32_16X16X2BF16_vi_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx940_acd_V_MFMA_F32_16X16X4BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X4F16_gfx90a_acd_V_MFMA_F32_16X16X4F16_gfx90a_vcd_V_MFMA_F32_16X16X4F16_gfx940_acd_V_MFMA_F32_16X16X4F16_gfx940_vcd_V_MFMA_F32_16X16X4F16_vi_V_MFMA_F32_16X16X4F32_gfx90a_acd_V_MFMA_F32_16X16X4F32_gfx90a_vcd_V_MFMA_F32_16X16X4F32_gfx940_acd_V_MFMA_F32_16X16X4F32_gfx940_vcd_V_MFMA_F32_16X16X4F32_vi_V_MFMA_F32_16X16X8BF16_gfx90a_acd_V_MFMA_F32_16X16X8BF16_gfx90a_vcd_V_MFMA_F32_16X16X8BF16_gfx940_acd_V_MFMA_F32_16X16X8BF16_gfx940_vcd_V_MFMA_F32_16X16X8BF16_vi_V_MFMA_F32_16X16X8XF32_gfx940_acd_V_MFMA_F32_16X16X8XF32_gfx940_vcd_V_MFMA_I32_16X16X16I8_gfx90a_acd_V_MFMA_I32_16X16X16I8_gfx90a_vcd_V_MFMA_I32_16X16X16I8_gfx940_acd_V_MFMA_I32_16X16X16I8_gfx940_vcd_V_MFMA_I32_16X16X16I8_vi_V_MFMA_I32_16X16X32I8_gfx940_acd_V_MFMA_I32_16X16X32I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_gfx90a_acd_V_MFMA_I32_16X16X4I8_gfx90a_vcd_V_MFMA_I32_16X16X4I8_gfx940_acd_V_MFMA_I32_16X16X4I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_vi") 1, false, false, true,  2, 1,  1, 1,  0, 0}, // #35
  {DBGFIELD("V_MFMA_F32_16X16X8XF32_e64_V_MFMA_F32_16X16X8XF32_vgprcd_e64_V_MFMA_F32_16X16X8XF32_gfx940_acd_V_MFMA_F32_16X16X8XF32_gfx940_vcd") 1, false, false, true, 42, 1,  4, 1,  1, 1}, // #36
  {DBGFIELD("V_MFMA_F32_16X16X16BF16_1K_e64_V_MFMA_F32_16X16X16BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X16F16_e64_V_MFMA_F32_16X16X16F16_vgprcd_e64_V_MFMA_I32_16X16X16I8_e64_V_MFMA_I32_16X16X16I8_vgprcd_e64_V_MFMA_F32_16X16X16BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X16BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X16BF16_1K_gfx940_acd_V_MFMA_F32_16X16X16BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X16F16_gfx90a_acd_V_MFMA_F32_16X16X16F16_gfx90a_vcd_V_MFMA_F32_16X16X16F16_gfx940_acd_V_MFMA_F32_16X16X16F16_gfx940_vcd_V_MFMA_F32_16X16X16F16_vi_V_MFMA_I32_16X16X16I8_gfx90a_acd_V_MFMA_I32_16X16X16I8_gfx90a_vcd_V_MFMA_I32_16X16X16I8_gfx940_acd_V_MFMA_I32_16X16X16I8_gfx940_vcd_V_MFMA_I32_16X16X16I8_vi") 1, false, false, true, 42, 1,  4, 1,  1, 1}, // #37
  {DBGFIELD("V_MFMA_F32_16X16X32_BF8_BF8_e64_V_MFMA_F32_16X16X32_BF8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_FP8_e64_V_MFMA_F32_16X16X32_BF8_FP8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_BF8_e64_V_MFMA_F32_16X16X32_FP8_BF8_vgprcd_e64_V_MFMA_F32_16X16X32_FP8_FP8_e64_V_MFMA_F32_16X16X32_FP8_FP8_vgprcd_e64_V_MFMA_I32_16X16X32I8_e64_V_MFMA_I32_16X16X32I8_vgprcd_e64_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_BF8_FP8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_BF8_gfx940_vcd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_acd_V_MFMA_F32_16X16X32_FP8_FP8_gfx940_vcd_V_MFMA_I32_16X16X32I8_gfx940_acd_V_MFMA_I32_16X16X32I8_gfx940_vcd") 1, false, false, true, 42, 1,  4, 1,  1, 1}, // #38
  {DBGFIELD("V_MFMA_F32_16X16X1F32_e64_V_MFMA_F32_16X16X1F32_mac_e64_V_MFMA_F32_16X16X1F32_mac_vgprcd_e64_V_MFMA_F32_16X16X1F32_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_e64_V_MFMA_F32_16X16X4BF16_1K_mac_e64_V_MFMA_F32_16X16X4BF16_1K_mac_vgprcd_e64_V_MFMA_F32_16X16X4BF16_1K_vgprcd_e64_V_MFMA_F32_16X16X4F16_e64_V_MFMA_F32_16X16X4F16_mac_e64_V_MFMA_F32_16X16X4F16_mac_vgprcd_e64_V_MFMA_F32_16X16X4F16_vgprcd_e64_V_MFMA_F32_16X16X4F32_e64_V_MFMA_F32_16X16X4F32_vgprcd_e64_V_MFMA_I32_16X16X4I8_e64_V_MFMA_I32_16X16X4I8_mac_e64_V_MFMA_I32_16X16X4I8_mac_vgprcd_e64_V_MFMA_I32_16X16X4I8_vgprcd_e64_V_MFMA_F32_16X16X1F32_gfx90a_acd_V_MFMA_F32_16X16X1F32_gfx90a_vcd_V_MFMA_F32_16X16X1F32_gfx940_acd_V_MFMA_F32_16X16X1F32_gfx940_vcd_V_MFMA_F32_16X16X1F32_vi_V_MFMA_F32_16X16X4BF16_1K_gfx90a_acd_V_MFMA_F32_16X16X4BF16_1K_gfx90a_vcd_V_MFMA_F32_16X16X4BF16_1K_gfx940_acd_V_MFMA_F32_16X16X4BF16_1K_gfx940_vcd_V_MFMA_F32_16X16X4F16_gfx90a_acd_V_MFMA_F32_16X16X4F16_gfx90a_vcd_V_MFMA_F32_16X16X4F16_gfx940_acd_V_MFMA_F32_16X16X4F16_gfx940_vcd_V_MFMA_F32_16X16X4F16_vi_V_MFMA_F32_16X16X4F32_gfx90a_acd_V_MFMA_F32_16X16X4F32_gfx90a_vcd_V_MFMA_F32_16X16X4F32_gfx940_acd_V_MFMA_F32_16X16X4F32_gfx940_vcd_V_MFMA_F32_16X16X4F32_vi_V_MFMA_I32_16X16X4I8_gfx90a_acd_V_MFMA_I32_16X16X4I8_gfx90a_vcd_V_MFMA_I32_16X16X4I8_gfx940_acd_V_MFMA_I32_16X16X4I8_gfx940_vcd_V_MFMA_I32_16X16X4I8_vi") 1, false, false, true, 11, 1,  5, 1,  1, 1}, // #39
  {DBGFIELD("V_MFMA_F32_32X32X4XF32_e64_V_MFMA_F32_32X32X4XF32_mac_e64_V_MFMA_F32_32X32X4XF32_mac_vgprcd_e64_V_MFMA_F32_32X32X4XF32_vgprcd_e64_V_MFMA_F32_32X32X4XF32_gfx940_acd_V_MFMA_F32_32X32X4XF32_gfx940_vcd") 1, false, false, true, 11, 1,  5, 1,  1, 1}, // #40
  {DBGFIELD("V_MFMA_F32_32X32X8BF16_1K_e64_V_MFMA_F32_32X32X8BF16_1K_mac_e64_V_MFMA_F32_32X32X8BF16_1K_mac_vgprcd_e64_V_MFMA_F32_32X32X8BF16_1K_vgprcd_e64_V_MFMA_F32_32X32X8F16_e64_V_MFMA_F32_32X32X8F16_mac_e64_V_MFMA_F32_32X32X8F16_mac_vgprcd_e64_V_MFMA_F32_32X32X8F16_vgprcd_e64_V_MFMA_I32_32X32X8I8_e64_V_MFMA_I32_32X32X8I8_mac_e64_V_MFMA_I32_32X32X8I8_mac_vgprcd_e64_V_MFMA_I32_32X32X8I8_vgprcd_e64_V_MFMA_F32_32X32X8BF16_1K_gfx90a_acd_V_MFMA_F32_32X32X8BF16_1K_gfx90a_vcd_V_MFMA_F32_32X32X8BF16_1K_gfx940_acd_V_MFMA_F32_32X32X8BF16_1K_gfx940_vcd_V_MFMA_F32_32X32X8F16_gfx90a_acd_V_MFMA_F32_32X32X8F16_gfx90a_vcd_V_MFMA_F32_32X32X8F16_gfx940_acd_V_MFMA_F32_32X32X8F16_gfx940_vcd_V_MFMA_F32_32X32X8F16_vi_V_MFMA_I32_32X32X8I8_gfx90a_acd_V_MFMA_I32_32X32X8I8_gfx90a_vcd_V_MFMA_I32_32X32X8I8_gfx940_acd_V_MFMA_I32_32X32X8I8_gfx940_vcd_V_MFMA_I32_32X32X8I8_vi") 1, false, false, true, 11, 1,  5, 1,  1, 1}, // #41
  {DBGFIELD("V_MFMA_F32_32X32X16_BF8_BF8_e64_V_MFMA_F32_32X32X16_BF8_BF8_mac_e64_V_MFMA_F32_32X32X16_BF8_BF8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_BF8_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_FP8_e64_V_MFMA_F32_32X32X16_BF8_FP8_mac_e64_V_MFMA_F32_32X32X16_BF8_FP8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_FP8_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_BF8_e64_V_MFMA_F32_32X32X16_FP8_BF8_mac_e64_V_MFMA_F32_32X32X16_FP8_BF8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_BF8_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_FP8_e64_V_MFMA_F32_32X32X16_FP8_FP8_mac_e64_V_MFMA_F32_32X32X16_FP8_FP8_mac_vgprcd_e64_V_MFMA_F32_32X32X16_FP8_FP8_vgprcd_e64_V_MFMA_I32_32X32X16I8_e64_V_MFMA_I32_32X32X16I8_mac_e64_V_MFMA_I32_32X32X16I8_mac_vgprcd_e64_V_MFMA_I32_32X32X16I8_vgprcd_e64_V_MFMA_F32_32X32X16_BF8_BF8_gfx940_acd_V_MFMA_F32_32X32X16_BF8_BF8_gfx940_vcd_V_MFMA_F32_32X32X16_BF8_FP8_gfx940_acd_V_MFMA_F32_32X32X16_BF8_FP8_gfx940_vcd_V_MFMA_F32_32X32X16_FP8_BF8_gfx940_acd_V_MFMA_F32_32X32X16_FP8_BF8_gfx940_vcd_V_MFMA_F32_32X32X16_FP8_FP8_gfx940_acd_V_MFMA_F32_32X32X16_FP8_FP8_gfx940_vcd_V_MFMA_I32_32X32X16I8_gfx940_acd_V_MFMA_I32_32X32X16I8_gfx940_vcd") 1, false, false, true, 11, 1,  5, 1,  1, 1}, // #42
  {DBGFIELD("V_SMFMAC_F32_16X16X32_BF16_e64_V_SMFMAC_F32_16X16X32_F16_e64_V_SMFMAC_F32_16X16X64_BF8_BF8_e64_V_SMFMAC_F32_16X16X64_BF8_FP8_e64_V_SMFMAC_F32_16X16X64_FP8_BF8_e64_V_SMFMAC_F32_16X16X64_FP8_FP8_e64_V_SMFMAC_I32_16X16X64_I8_e64_V_SMFMAC_F32_16X16X32_BF16_gfx940_V_SMFMAC_F32_16X16X32_F16_gfx940_V_SMFMAC_F32_16X16X64_BF8_BF8_gfx940_V_SMFMAC_F32_16X16X64_BF8_FP8_gfx940_V_SMFMAC_F32_16X16X64_FP8_BF8_gfx940_V_SMFMAC_F32_16X16X64_FP8_FP8_gfx940_V_SMFMAC_I32_16X16X64_I8_gfx940") 1, false, false, true, 42, 1,  4, 1,  1, 1}, // #43
  {DBGFIELD("V_SMFMAC_F32_32X32X16_BF16_e64_V_SMFMAC_F32_32X32X16_F16_e64_V_SMFMAC_F32_32X32X32_BF8_BF8_e64_V_SMFMAC_F32_32X32X32_BF8_FP8_e64_V_SMFMAC_F32_32X32X32_FP8_BF8_e64_V_SMFMAC_F32_32X32X32_FP8_FP8_e64_V_SMFMAC_I32_32X32X32_I8_e64_V_SMFMAC_F32_32X32X16_BF16_gfx940_V_SMFMAC_F32_32X32X16_F16_gfx940_V_SMFMAC_F32_32X32X32_BF8_BF8_gfx940_V_SMFMAC_F32_32X32X32_BF8_FP8_gfx940_V_SMFMAC_F32_32X32X32_FP8_BF8_gfx940_V_SMFMAC_F32_32X32X32_FP8_FP8_gfx940_V_SMFMAC_I32_32X32X32_I8_gfx940") 1, false, false, true, 11, 1,  5, 1,  1, 1}, // #44
  {DBGFIELD("Write32Bit")         1, false, false, true,  2, 1,  1, 1,  0, 0}, // #45
  {DBGFIELD("Write64Bit")         1, false, false, false,  2, 1,  1, 1,  0, 0}, // #46
  {DBGFIELD("WriteSALU")          1, false, false, true,  1, 1,  1, 1,  0, 0}, // #47
  {DBGFIELD("Write64Bit_MIVGPRRead") 0, false, false, false,  0, 0,  0, 0,  0, 0}, // #48
  {DBGFIELD("Write64Bit_ReadDefault") 0, false, false, false,  0, 0,  0, 0,  0, 0}, // #49
}; // SIDPGFX940FullSpeedModelSchedClasses

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

static const unsigned SIQuarterSpeedModelProcResourceSubUnits[] = {
  0,  // Invalid
};

// {Name, NumUnits, SuperIdx, BufferSize, SubUnitsIdxBegin}
static const llvm::MCProcResourceDesc SIQuarterSpeedModelProcResources[] = {
  {"InvalidUnit", 0, 0, 0, 0},
  {"HWBranch",        1, 0, 1, nullptr}, // #1
  {"HWExport",        1, 0, 1, nullptr}, // #2
  {"HWLGKM",          1, 0, 1, nullptr}, // #3
  {"HWSALU",          1, 0, 1, nullptr}, // #4
  {"HWVALU",          1, 0, 1, nullptr}, // #5
  {"HWVMEM",          1, 0, 1, nullptr}, // #6
  {"HWXDL",           1, 0, 0, nullptr}, // #7
};

static const llvm::MCSchedModel SIQuarterSpeedModel = {
  1, // IssueWidth
  1, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  20, // MispredictPenalty
  true, // PostRAScheduler
  true, // CompleteModel
  1, // Processor ID
  SIQuarterSpeedModelProcResources,
  SIQuarterSpeedModelSchedClasses,
  8,
  50,
  nullptr, // No Itinerary
  nullptr // No extra processor descriptor
};

static const unsigned GFX10SpeedModelProcResourceSubUnits[] = {
  0,  // Invalid
};

// {Name, NumUnits, SuperIdx, BufferSize, SubUnitsIdxBegin}
static const llvm::MCProcResourceDesc GFX10SpeedModelProcResources[] = {
  {"InvalidUnit", 0, 0, 0, 0},
  {"HWBranch",        1, 0, 1, nullptr}, // #1
  {"HWExport",        1, 0, 1, nullptr}, // #2
  {"HWLGKM",          1, 0, 1, nullptr}, // #3
  {"HWRC",            1, 0, 1, nullptr}, // #4
  {"HWSALU",          1, 0, 1, nullptr}, // #5
  {"HWTransVALU",     1, 0, 1, nullptr}, // #6
  {"HWVALU",          1, 0, 1, nullptr}, // #7
  {"HWVMEM",          1, 0, 1, nullptr}, // #8
};

static const llvm::MCSchedModel GFX10SpeedModel = {
  1, // IssueWidth
  1, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  20, // MispredictPenalty
  true, // PostRAScheduler
  true, // CompleteModel
  2, // Processor ID
  GFX10SpeedModelProcResources,
  GFX10SpeedModelSchedClasses,
  9,
  50,
  nullptr, // No Itinerary
  nullptr // No extra processor descriptor
};

static const unsigned GFX11SpeedModelProcResourceSubUnits[] = {
  0,  // Invalid
};

// {Name, NumUnits, SuperIdx, BufferSize, SubUnitsIdxBegin}
static const llvm::MCProcResourceDesc GFX11SpeedModelProcResources[] = {
  {"InvalidUnit", 0, 0, 0, 0},
  {"HWBranch",        1, 0, 1, nullptr}, // #1
  {"HWExport",        1, 0, 1, nullptr}, // #2
  {"HWLGKM",          1, 0, 1, nullptr}, // #3
  {"HWRC",            1, 0, 1, nullptr}, // #4
  {"HWSALU",          1, 0, 1, nullptr}, // #5
  {"HWVALU",          1, 0, 1, nullptr}, // #6
  {"HWVMEM",          1, 0, 1, nullptr}, // #7
};

static const llvm::MCSchedModel GFX11SpeedModel = {
  1, // IssueWidth
  1, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  20, // MispredictPenalty
  true, // PostRAScheduler
  true, // CompleteModel
  3, // Processor ID
  GFX11SpeedModelProcResources,
  GFX11SpeedModelSchedClasses,
  8,
  50,
  nullptr, // No Itinerary
  nullptr // No extra processor descriptor
};

static const unsigned SIFullSpeedModelProcResourceSubUnits[] = {
  0,  // Invalid
};

// {Name, NumUnits, SuperIdx, BufferSize, SubUnitsIdxBegin}
static const llvm::MCProcResourceDesc SIFullSpeedModelProcResources[] = {
  {"InvalidUnit", 0, 0, 0, 0},
  {"HWBranch",        1, 0, 1, nullptr}, // #1
  {"HWExport",        1, 0, 1, nullptr}, // #2
  {"HWLGKM",          1, 0, 1, nullptr}, // #3
  {"HWSALU",          1, 0, 1, nullptr}, // #4
  {"HWVALU",          1, 0, 1, nullptr}, // #5
  {"HWVMEM",          1, 0, 1, nullptr}, // #6
  {"HWXDL",           1, 0, 0, nullptr}, // #7
};

static const llvm::MCSchedModel SIFullSpeedModel = {
  1, // IssueWidth
  1, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  20, // MispredictPenalty
  true, // PostRAScheduler
  true, // CompleteModel
  4, // Processor ID
  SIFullSpeedModelProcResources,
  SIFullSpeedModelSchedClasses,
  8,
  50,
  nullptr, // No Itinerary
  nullptr // No extra processor descriptor
};

static const unsigned SIDPFullSpeedModelProcResourceSubUnits[] = {
  0,  // Invalid
};

// {Name, NumUnits, SuperIdx, BufferSize, SubUnitsIdxBegin}
static const llvm::MCProcResourceDesc SIDPFullSpeedModelProcResources[] = {
  {"InvalidUnit", 0, 0, 0, 0},
  {"HWBranch",        1, 0, 1, nullptr}, // #1
  {"HWExport",        1, 0, 1, nullptr}, // #2
  {"HWLGKM",          1, 0, 1, nullptr}, // #3
  {"HWSALU",          1, 0, 1, nullptr}, // #4
  {"HWVALU",          1, 0, 1, nullptr}, // #5
  {"HWVMEM",          1, 0, 1, nullptr}, // #6
  {"HWXDL",           1, 0, 0, nullptr}, // #7
};

static const llvm::MCSchedModel SIDPFullSpeedModel = {
  1, // IssueWidth
  1, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  20, // MispredictPenalty
  true, // PostRAScheduler
  true, // CompleteModel
  5, // Processor ID
  SIDPFullSpeedModelProcResources,
  SIDPFullSpeedModelSchedClasses,
  8,
  50,
  nullptr, // No Itinerary
  nullptr // No extra processor descriptor
};

static const unsigned SIDPGFX940FullSpeedModelProcResourceSubUnits[] = {
  0,  // Invalid
};

// {Name, NumUnits, SuperIdx, BufferSize, SubUnitsIdxBegin}
static const llvm::MCProcResourceDesc SIDPGFX940FullSpeedModelProcResources[] = {
  {"InvalidUnit", 0, 0, 0, 0},
  {"HWBranch",        1, 0, 1, nullptr}, // #1
  {"HWExport",        1, 0, 1, nullptr}, // #2
  {"HWLGKM",          1, 0, 1, nullptr}, // #3
  {"HWSALU",          1, 0, 1, nullptr}, // #4
  {"HWVALU",          1, 0, 1, nullptr}, // #5
  {"HWVMEM",          1, 0, 1, nullptr}, // #6
  {"HWXDL",           1, 0, 0, nullptr}, // #7
};

static const llvm::MCSchedModel SIDPGFX940FullSpeedModel = {
  1, // IssueWidth
  1, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  20, // MispredictPenalty
  true, // PostRAScheduler
  true, // CompleteModel
  6, // Processor ID
  SIDPGFX940FullSpeedModelProcResources,
  SIDPGFX940FullSpeedModelSchedClasses,
  8,
  50,
  nullptr, // No Itinerary
  nullptr // No extra processor descriptor
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetSubTypeKV AMDGPUSubTypeKV[] = {
 { "bonaire", { { { 0x0ULL, 0x1000000000020ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "carrizo", { { { 0x2000000000ULL, 0x2010000000000020ULL, 0x2040ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "fiji", { { { 0x0ULL, 0x2000000000000020ULL, 0x40ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "generic", { { { 0x0ULL, 0x0ULL, 0x400ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "generic-hsa", { { { 0x4000000000ULL, 0x0ULL, 0x400ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "gfx1010", { { { 0x2008080000800800ULL, 0x10e20012b820e2ULL, 0x231ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &GFX10SpeedModel },
 { "gfx1011", { { { 0x2008080000b98800ULL, 0x10e20012b820e2ULL, 0x231ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &GFX10SpeedModel },
 { "gfx1012", { { { 0x2008080000b98800ULL, 0x10e20012b820e2ULL, 0x231ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &GFX10SpeedModel },
 { "gfx1013", { { { 0x2088080000800800ULL, 0x10e20012b820e2ULL, 0x231ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &GFX10SpeedModel },
 { "gfx1030", { { { 0x1c8000000398800ULL, 0x2000000500020ULL, 0x200ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &GFX10SpeedModel },
 { "gfx1031", { { { 0x1c8000000398800ULL, 0x2000000500020ULL, 0x200ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &GFX10SpeedModel },
 { "gfx1032", { { { 0x1c8000000398800ULL, 0x2000000500020ULL, 0x200ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &GFX10SpeedModel },
 { "gfx1033", { { { 0x1c8000000398800ULL, 0x2000000500020ULL, 0x200ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &GFX10SpeedModel },
 { "gfx1034", { { { 0x1c8000000398800ULL, 0x2000000500020ULL, 0x200ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &GFX10SpeedModel },
 { "gfx1035", { { { 0x1c8000000398800ULL, 0x2000000500020ULL, 0x200ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &GFX10SpeedModel },
 { "gfx1036", { { { 0x1c8000000398800ULL, 0x2000000500020ULL, 0x200ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &GFX10SpeedModel },
 { "gfx1100", { { { 0x8200000000680870ULL, 0x4002000040300020ULL, 0x220ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &GFX11SpeedModel },
 { "gfx1101", { { { 0x8200000000680870ULL, 0x2000040300020ULL, 0x220ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &GFX11SpeedModel },
 { "gfx1102", { { { 0x8200000000680870ULL, 0x4002000040300020ULL, 0x220ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &GFX11SpeedModel },
 { "gfx1103", { { { 0x8200000000680870ULL, 0x4002000040300020ULL, 0x220ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &GFX11SpeedModel },
 { "gfx600", { { { 0x2000000000ULL, 0x4000000000020ULL, 0x2000ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIFullSpeedModel },
 { "gfx601", { { { 0x0ULL, 0x4000000000020ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "gfx602", { { { 0x0ULL, 0x4000000000020ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "gfx700", { { { 0x0ULL, 0x1000000000020ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "gfx701", { { { 0x2000000000ULL, 0x1000000000020ULL, 0x2000ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIFullSpeedModel },
 { "gfx702", { { { 0x2000000000ULL, 0x1000000000010ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "gfx703", { { { 0x0ULL, 0x1000000000010ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "gfx704", { { { 0x0ULL, 0x1000000000020ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "gfx705", { { { 0x0ULL, 0x1000000000010ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "gfx801", { { { 0x2000000000ULL, 0x2010000000000020ULL, 0x2040ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "gfx802", { { { 0x0ULL, 0x2000010000000020ULL, 0x40ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "gfx803", { { { 0x0ULL, 0x2000000000000020ULL, 0x40ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "gfx805", { { { 0x0ULL, 0x2000010000000020ULL, 0x40ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "gfx810", { { { 0x4000000000000000ULL, 0x10000000000011ULL, 0x40ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "gfx900", { { { 0xc002000100800000ULL, 0x6020ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "gfx902", { { { 0xc002000100800000ULL, 0x6020ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "gfx904", { { { 0xc002100100800000ULL, 0x2020ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "gfx906", { { { 0xc002100100a18800ULL, 0x8000000002020ULL, 0x2000ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "gfx908", { { { 0xc002100100bf88a0ULL, 0x8000080002c20ULL, 0x2000ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "gfx909", { { { 0xc002000100800000ULL, 0x6020ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "gfx90a", { { { 0x88021000003f88e2ULL, 0x80000e0002420ULL, 0x1000ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIDPFullSpeedModel },
 { "gfx90c", { { { 0xc002000100800000ULL, 0x6020ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "gfx940", { { { 0x18021004003f88f2ULL, 0x80000e0000420ULL, 0x1000ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIDPGFX940FullSpeedModel },
 { "hainan", { { { 0x0ULL, 0x4000000000020ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "hawaii", { { { 0x2000000000ULL, 0x1000000000020ULL, 0x2000ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIFullSpeedModel },
 { "iceland", { { { 0x0ULL, 0x2000010000000020ULL, 0x40ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "kabini", { { { 0x0ULL, 0x1000000000010ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "kaveri", { { { 0x0ULL, 0x1000000000020ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "mullins", { { { 0x0ULL, 0x1000000000010ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "oland", { { { 0x0ULL, 0x4000000000020ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "pitcairn", { { { 0x0ULL, 0x4000000000020ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "polaris10", { { { 0x0ULL, 0x2000000000000020ULL, 0x40ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "polaris11", { { { 0x0ULL, 0x2000000000000020ULL, 0x40ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "stoney", { { { 0x4000000000000000ULL, 0x10000000000011ULL, 0x40ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "tahiti", { { { 0x2000000000ULL, 0x4000000000020ULL, 0x2000ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIFullSpeedModel },
 { "tonga", { { { 0x0ULL, 0x2000010000000020ULL, 0x40ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "tongapro", { { { 0x0ULL, 0x2000010000000020ULL, 0x40ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
 { "verde", { { { 0x0ULL, 0x4000000000020ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &SIQuarterSpeedModel },
};

namespace AMDGPU_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass,
    const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID) {
  switch (SchedClass) {
  case 29: // COPY
    if (CPUID == 1) { // SIQuarterSpeedModel
  return 47; // WriteSALU
    }
    if (CPUID == 2) { // GFX10SpeedModel
  return 47; // WriteSALU
    }
    if (CPUID == 3) { // GFX11SpeedModel
  return 47; // WriteSALU
    }
    if (CPUID == 4) { // SIFullSpeedModel
  return 47; // WriteSALU
    }
    if (CPUID == 5) { // SIDPFullSpeedModel
  return 47; // WriteSALU
    }
    if (CPUID == 6) { // SIDPGFX940FullSpeedModel
  return 47; // WriteSALU
    }
    break;
  case 30: // V_ACCVGPR_WRITE_B32_e64
    if (CPUID == 1) { // SIQuarterSpeedModel
  return 49; // Write64Bit_ReadDefault
    }
    break;
  };
  // Don't know how to resolve this scheduling class.
  return 0;
}
} // end namespace AMDGPU_MC

struct AMDGPUGenMCSubtargetInfo : public MCSubtargetInfo {
  AMDGPUGenMCSubtargetInfo(const Triple &TT,
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
    return AMDGPU_MC::resolveVariantSchedClassImpl(SchedClass, MI, MCII, CPUID);
  }
};

static inline MCSubtargetInfo *createAMDGPUMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef TuneCPU, StringRef FS) {
  return new AMDGPUGenMCSubtargetInfo(TT, CPU, TuneCPU, FS, AMDGPUFeatureKV, AMDGPUSubTypeKV, 
                      AMDGPUWriteProcResTable, AMDGPUWriteLatencyTable, AMDGPUReadAdvanceTable, 
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
void llvm::AMDGPUSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef TuneCPU, StringRef FS) {
  LLVM_DEBUG(dbgs() << "\nFeatures:" << FS);
  LLVM_DEBUG(dbgs() << "\nCPU:" << CPU);
  LLVM_DEBUG(dbgs() << "\nTuneCPU:" << TuneCPU << "\n\n");
  InitMCProcessorInfo(CPU, TuneCPU, FS);
  const FeatureBitset &Bits = getFeatureBits();
  if (Bits[AMDGPU::Feature16BitInsts]) Has16BitInsts = true;
  if (Bits[AMDGPU::Feature64BitDPP]) Has64BitDPP = true;
  if (Bits[AMDGPU::FeatureAddNoCarryInsts]) AddNoCarryInsts = true;
  if (Bits[AMDGPU::FeatureApertureRegs]) HasApertureRegs = true;
  if (Bits[AMDGPU::FeatureArchitectedFlatScratch]) HasArchitectedFlatScratch = true;
  if (Bits[AMDGPU::FeatureAtomicFaddNoRtnInsts]) HasAtomicFaddNoRtnInsts = true;
  if (Bits[AMDGPU::FeatureAtomicFaddRtnInsts]) HasAtomicFaddRtnInsts = true;
  if (Bits[AMDGPU::FeatureAtomicPkFaddNoRtnInsts]) HasAtomicPkFaddNoRtnInsts = true;
  if (Bits[AMDGPU::FeatureAutoWaitcntBeforeBarrier]) AutoWaitcntBeforeBarrier = true;
  if (Bits[AMDGPU::FeatureCIInsts]) CIInsts = true;
  if (Bits[AMDGPU::FeatureCuMode]) EnableCuMode = true;
  if (Bits[AMDGPU::FeatureDLInsts]) HasDLInsts = true;
  if (Bits[AMDGPU::FeatureDPP]) HasDPP = true;
  if (Bits[AMDGPU::FeatureDPP8]) HasDPP8 = true;
  if (Bits[AMDGPU::FeatureDisable]) FeatureDisable = true;
  if (Bits[AMDGPU::FeatureDot1Insts]) HasDot1Insts = true;
  if (Bits[AMDGPU::FeatureDot2Insts]) HasDot2Insts = true;
  if (Bits[AMDGPU::FeatureDot3Insts]) HasDot3Insts = true;
  if (Bits[AMDGPU::FeatureDot4Insts]) HasDot4Insts = true;
  if (Bits[AMDGPU::FeatureDot5Insts]) HasDot5Insts = true;
  if (Bits[AMDGPU::FeatureDot6Insts]) HasDot6Insts = true;
  if (Bits[AMDGPU::FeatureDot7Insts]) HasDot7Insts = true;
  if (Bits[AMDGPU::FeatureDot8Insts]) HasDot8Insts = true;
  if (Bits[AMDGPU::FeatureDsSrc2Insts]) HasDsSrc2Insts = true;
  if (Bits[AMDGPU::FeatureDumpCode]) DumpCode = true;
  if (Bits[AMDGPU::FeatureDumpCodeLower]) DumpCode = true;
  if (Bits[AMDGPU::FeatureEnableDS128]) EnableDS128 = true;
  if (Bits[AMDGPU::FeatureEnableFlatScratch]) EnableFlatScratch = true;
  if (Bits[AMDGPU::FeatureEnableLoadStoreOpt]) EnableLoadStoreOpt = true;
  if (Bits[AMDGPU::FeatureEnablePRTStrictNull]) EnablePRTStrictNull = true;
  if (Bits[AMDGPU::FeatureEnableSIScheduler]) EnableSIScheduler = true;
  if (Bits[AMDGPU::FeatureEnableUnsafeDSOffsetFolding]) EnableUnsafeDSOffsetFolding = true;
  if (Bits[AMDGPU::FeatureExtendedImageInsts]) HasExtendedImageInsts = true;
  if (Bits[AMDGPU::FeatureFMA]) FMA = true;
  if (Bits[AMDGPU::FeatureFP8Insts]) HasFP8Insts = true;
  if (Bits[AMDGPU::FeatureFP64]) FP64 = true;
  if (Bits[AMDGPU::FeatureFastDenormalF32]) FastDenormalF32 = true;
  if (Bits[AMDGPU::FeatureFastFMAF32]) FastFMAF32 = true;
  if (Bits[AMDGPU::FeatureFlatAddressSpace]) FlatAddressSpace = true;
  if (Bits[AMDGPU::FeatureFlatForGlobal]) FlatForGlobal = true;
  if (Bits[AMDGPU::FeatureFlatGlobalInsts]) FlatGlobalInsts = true;
  if (Bits[AMDGPU::FeatureFlatInstOffsets]) FlatInstOffsets = true;
  if (Bits[AMDGPU::FeatureFlatScratchInsts]) FlatScratchInsts = true;
  if (Bits[AMDGPU::FeatureFlatSegmentOffsetBug]) HasFlatSegmentOffsetBug = true;
  if (Bits[AMDGPU::FeatureFmaMixInsts]) HasFmaMixInsts = true;
  if (Bits[AMDGPU::FeatureG16]) HasG16 = true;
  if (Bits[AMDGPU::FeatureGCN3Encoding]) GCN3Encoding = true;
  if (Bits[AMDGPU::FeatureGFX7GFX8GFX9Insts]) GFX7GFX8GFX9Insts = true;
  if (Bits[AMDGPU::FeatureGFX8Insts]) GFX8Insts = true;
  if (Bits[AMDGPU::FeatureGFX9] && Gen < GCNSubtarget::GFX9) Gen = GCNSubtarget::GFX9;
  if (Bits[AMDGPU::FeatureGFX9Insts]) GFX9Insts = true;
  if (Bits[AMDGPU::FeatureGFX10] && Gen < GCNSubtarget::GFX10) Gen = GCNSubtarget::GFX10;
  if (Bits[AMDGPU::FeatureGFX10A16]) HasGFX10A16 = true;
  if (Bits[AMDGPU::FeatureGFX10Insts]) GFX10Insts = true;
  if (Bits[AMDGPU::FeatureGFX10_3Insts]) GFX10_3Insts = true;
  if (Bits[AMDGPU::FeatureGFX10_AEncoding]) GFX10_AEncoding = true;
  if (Bits[AMDGPU::FeatureGFX10_BEncoding]) GFX10_BEncoding = true;
  if (Bits[AMDGPU::FeatureGFX11] && Gen < GCNSubtarget::GFX11) Gen = GCNSubtarget::GFX11;
  if (Bits[AMDGPU::FeatureGFX11Insts]) GFX11Insts = true;
  if (Bits[AMDGPU::FeatureGFX90AInsts]) GFX90AInsts = true;
  if (Bits[AMDGPU::FeatureGFX940Insts]) GFX940Insts = true;
  if (Bits[AMDGPU::FeatureGetWaveIdInst]) HasGetWaveIdInst = true;
  if (Bits[AMDGPU::FeatureImageGather4D16Bug]) HasImageGather4D16Bug = true;
  if (Bits[AMDGPU::FeatureImageInsts]) HasImageInsts = true;
  if (Bits[AMDGPU::FeatureImageStoreD16Bug]) HasImageStoreD16Bug = true;
  if (Bits[AMDGPU::FeatureInstFwdPrefetchBug]) HasInstFwdPrefetchBug = true;
  if (Bits[AMDGPU::FeatureIntClamp]) HasIntClamp = true;
  if (Bits[AMDGPU::FeatureInv2PiInlineImm]) HasInv2PiInlineImm = true;
  if (Bits[AMDGPU::FeatureLDSBankCount16] && LDSBankCount < 16) LDSBankCount = 16;
  if (Bits[AMDGPU::FeatureLDSBankCount32] && LDSBankCount < 32) LDSBankCount = 32;
  if (Bits[AMDGPU::FeatureLdsBranchVmemWARHazard]) HasLdsBranchVmemWARHazard = true;
  if (Bits[AMDGPU::FeatureLdsMisalignedBug]) LDSMisalignedBug = true;
  if (Bits[AMDGPU::FeatureLocalMemorySize32768] && LocalMemorySize < 32768) LocalMemorySize = 32768;
  if (Bits[AMDGPU::FeatureLocalMemorySize65536] && LocalMemorySize < 65536) LocalMemorySize = 65536;
  if (Bits[AMDGPU::FeatureMAIInsts]) HasMAIInsts = true;
  if (Bits[AMDGPU::FeatureMFMAInlineLiteralBug]) HasMFMAInlineLiteralBug = true;
  if (Bits[AMDGPU::FeatureMIMG_R128]) MIMG_R128 = true;
  if (Bits[AMDGPU::FeatureMadMacF32Insts]) HasMadMacF32Insts = true;
  if (Bits[AMDGPU::FeatureMadMixInsts]) HasMadMixInsts = true;
  if (Bits[AMDGPU::FeatureMaxPrivateElementSize4] && MaxPrivateElementSize < 4) MaxPrivateElementSize = 4;
  if (Bits[AMDGPU::FeatureMaxPrivateElementSize8] && MaxPrivateElementSize < 8) MaxPrivateElementSize = 8;
  if (Bits[AMDGPU::FeatureMaxPrivateElementSize16] && MaxPrivateElementSize < 16) MaxPrivateElementSize = 16;
  if (Bits[AMDGPU::FeatureMovrel]) HasMovrel = true;
  if (Bits[AMDGPU::FeatureNSAClauseBug]) HasNSAClauseBug = true;
  if (Bits[AMDGPU::FeatureNSAEncoding]) HasNSAEncoding = true;
  if (Bits[AMDGPU::FeatureNSAMaxSize5] && NSAMaxSize < 5) NSAMaxSize = 5;
  if (Bits[AMDGPU::FeatureNSAMaxSize13] && NSAMaxSize < 13) NSAMaxSize = 13;
  if (Bits[AMDGPU::FeatureNSAtoVMEMBug]) HasNSAtoVMEMBug = true;
  if (Bits[AMDGPU::FeatureNegativeScratchOffsetBug]) NegativeScratchOffsetBug = true;
  if (Bits[AMDGPU::FeatureNegativeUnalignedScratchOffsetBug]) NegativeUnalignedScratchOffsetBug = true;
  if (Bits[AMDGPU::FeatureNoDataDepHazard]) HasNoDataDepHazard = true;
  if (Bits[AMDGPU::FeatureNoSdstCMPX]) HasNoSdstCMPX = true;
  if (Bits[AMDGPU::FeatureOffset3fBug]) HasOffset3fBug = true;
  if (Bits[AMDGPU::FeaturePackedFP32Ops]) HasPackedFP32Ops = true;
  if (Bits[AMDGPU::FeaturePackedTID]) HasPackedTID = true;
  if (Bits[AMDGPU::FeaturePkFmacF16Inst]) HasPkFmacF16Inst = true;
  if (Bits[AMDGPU::FeaturePromoteAlloca]) EnablePromoteAlloca = true;
  if (Bits[AMDGPU::FeatureR128A16]) HasR128A16 = true;
  if (Bits[AMDGPU::FeatureSDWA]) HasSDWA = true;
  if (Bits[AMDGPU::FeatureSDWAMac]) HasSDWAMac = true;
  if (Bits[AMDGPU::FeatureSDWAOmod]) HasSDWAOmod = true;
  if (Bits[AMDGPU::FeatureSDWAOutModsVOPC]) HasSDWAOutModsVOPC = true;
  if (Bits[AMDGPU::FeatureSDWAScalar]) HasSDWAScalar = true;
  if (Bits[AMDGPU::FeatureSDWASdst]) HasSDWASdst = true;
  if (Bits[AMDGPU::FeatureSGPRInitBug]) SGPRInitBug = true;
  if (Bits[AMDGPU::FeatureSMEMtoVectorWriteHazard]) HasSMEMtoVectorWriteHazard = true;
  if (Bits[AMDGPU::FeatureSMemRealTime]) HasSMemRealTime = true;
  if (Bits[AMDGPU::FeatureSMemTimeInst]) HasSMemTimeInst = true;
  if (Bits[AMDGPU::FeatureSRAMECC]) EnableSRAMECC = true;
  if (Bits[AMDGPU::FeatureScalarAtomics]) HasScalarAtomics = true;
  if (Bits[AMDGPU::FeatureScalarFlatScratchInsts]) ScalarFlatScratchInsts = true;
  if (Bits[AMDGPU::FeatureScalarStores]) HasScalarStores = true;
  if (Bits[AMDGPU::FeatureSeaIslands] && Gen < GCNSubtarget::SEA_ISLANDS) Gen = GCNSubtarget::SEA_ISLANDS;
  if (Bits[AMDGPU::FeatureShaderCyclesRegister]) HasShaderCyclesRegister = true;
  if (Bits[AMDGPU::FeatureSouthernIslands] && Gen < GCNSubtarget::SOUTHERN_ISLANDS) Gen = GCNSubtarget::SOUTHERN_ISLANDS;
  if (Bits[AMDGPU::FeatureSupportsSRAMECC]) SupportsSRAMECC = true;
  if (Bits[AMDGPU::FeatureSupportsXNACK]) SupportsXNACK = true;
  if (Bits[AMDGPU::FeatureTgSplit]) EnableTgSplit = true;
  if (Bits[AMDGPU::FeatureTrapHandler]) TrapHandler = true;
  if (Bits[AMDGPU::FeatureTrigReducedRange]) HasTrigReducedRange = true;
  if (Bits[AMDGPU::FeatureTrue16BitInsts]) HasTrue16BitInsts = true;
  if (Bits[AMDGPU::FeatureUnalignedAccessMode]) UnalignedAccessMode = true;
  if (Bits[AMDGPU::FeatureUnalignedBufferAccess]) UnalignedBufferAccess = true;
  if (Bits[AMDGPU::FeatureUnalignedDSAccess]) UnalignedDSAccess = true;
  if (Bits[AMDGPU::FeatureUnalignedScratchAccess]) UnalignedScratchAccess = true;
  if (Bits[AMDGPU::FeatureUnpackedD16VMem]) HasUnpackedD16VMem = true;
  if (Bits[AMDGPU::FeatureUserSGPRInit16Bug]) UserSGPRInit16Bug = true;
  if (Bits[AMDGPU::FeatureVGPRIndexMode]) HasVGPRIndexMode = true;
  if (Bits[AMDGPU::FeatureVMEMtoScalarWriteHazard]) HasVMEMtoScalarWriteHazard = true;
  if (Bits[AMDGPU::FeatureVOP3Literal]) HasVOP3Literal = true;
  if (Bits[AMDGPU::FeatureVOP3P]) HasVOP3PInsts = true;
  if (Bits[AMDGPU::FeatureVOPD]) HasVOPDInsts = true;
  if (Bits[AMDGPU::FeatureVcmpxExecWARHazard]) HasVcmpxExecWARHazard = true;
  if (Bits[AMDGPU::FeatureVcmpxPermlaneHazard]) HasVcmpxPermlaneHazard = true;
  if (Bits[AMDGPU::FeatureVolcanicIslands] && Gen < GCNSubtarget::VOLCANIC_ISLANDS) Gen = GCNSubtarget::VOLCANIC_ISLANDS;
  if (Bits[AMDGPU::FeatureVscnt]) HasVscnt = true;
  if (Bits[AMDGPU::FeatureWavefrontSize16] && WavefrontSizeLog2 < 4) WavefrontSizeLog2 = 4;
  if (Bits[AMDGPU::FeatureWavefrontSize32] && WavefrontSizeLog2 < 5) WavefrontSizeLog2 = 5;
  if (Bits[AMDGPU::FeatureWavefrontSize64] && WavefrontSizeLog2 < 6) WavefrontSizeLog2 = 6;
  if (Bits[AMDGPU::FeatureXNACK]) EnableXNACK = true;
  if (Bits[AMDGPU::FullRate64Ops]) FullRate64Ops = true;
  if (Bits[AMDGPU::HalfRate64Ops]) HalfRate64Ops = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
namespace AMDGPU_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass, const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID);
} // end namespace AMDGPU_MC

struct AMDGPUGenSubtargetInfo : public TargetSubtargetInfo {
  explicit AMDGPUGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef TuneCPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV AMDGPUFeatureKV[];
extern const llvm::SubtargetSubTypeKV AMDGPUSubTypeKV[];
extern const llvm::MCWriteProcResEntry AMDGPUWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry AMDGPUWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry AMDGPUReadAdvanceTable[];
AMDGPUGenSubtargetInfo::AMDGPUGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef TuneCPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, TuneCPU, FS, makeArrayRef(AMDGPUFeatureKV, 141), makeArrayRef(AMDGPUSubTypeKV, 58), 
                        AMDGPUWriteProcResTable, AMDGPUWriteLatencyTable, AMDGPUReadAdvanceTable, 
                        nullptr, nullptr, nullptr) {}

unsigned AMDGPUGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {

  const SIInstrInfo *TII =
    static_cast<const SIInstrInfo*>(SchedModel->getInstrInfo());
  (void)TII;

  switch (SchedClass) {
  case 29: // COPY
    if (SchedModel->getProcessorID() == 1) { // SIQuarterSpeedModel
      if (TII->isVGPRCopy(*MI) && TII->getOpSize(*MI, 0) <= 32)
        return 45; // Write32Bit
      if (TII->isVGPRCopy(*MI) && TII->getOpSize(*MI, 0) > 32)
        return 46; // Write64Bit
      return 47; // WriteSALU
    }
    if (SchedModel->getProcessorID() == 2) { // GFX10SpeedModel
      if (TII->isVGPRCopy(*MI) && TII->getOpSize(*MI, 0) <= 32)
        return 45; // Write32Bit
      if (TII->isVGPRCopy(*MI) && TII->getOpSize(*MI, 0) > 32)
        return 46; // Write64Bit
      return 47; // WriteSALU
    }
    if (SchedModel->getProcessorID() == 3) { // GFX11SpeedModel
      if (TII->isVGPRCopy(*MI) && TII->getOpSize(*MI, 0) <= 32)
        return 45; // Write32Bit
      if (TII->isVGPRCopy(*MI) && TII->getOpSize(*MI, 0) > 32)
        return 46; // Write64Bit
      return 47; // WriteSALU
    }
    if (SchedModel->getProcessorID() == 4) { // SIFullSpeedModel
      if (TII->isVGPRCopy(*MI) && TII->getOpSize(*MI, 0) <= 32)
        return 45; // Write32Bit
      if (TII->isVGPRCopy(*MI) && TII->getOpSize(*MI, 0) > 32)
        return 46; // Write64Bit
      return 47; // WriteSALU
    }
    if (SchedModel->getProcessorID() == 5) { // SIDPFullSpeedModel
      if (TII->isVGPRCopy(*MI) && TII->getOpSize(*MI, 0) <= 32)
        return 45; // Write32Bit
      if (TII->isVGPRCopy(*MI) && TII->getOpSize(*MI, 0) > 32)
        return 46; // Write64Bit
      return 47; // WriteSALU
    }
    if (SchedModel->getProcessorID() == 6) { // SIDPGFX940FullSpeedModel
      if (TII->isVGPRCopy(*MI) && TII->getOpSize(*MI, 0) <= 32)
        return 45; // Write32Bit
      if (TII->isVGPRCopy(*MI) && TII->getOpSize(*MI, 0) > 32)
        return 46; // Write64Bit
      return 47; // WriteSALU
    }
    break;
  case 30: // V_ACCVGPR_WRITE_B32_e64
    if (SchedModel->getProcessorID() == 1) { // SIQuarterSpeedModel
      if (TII->hasVGPRUses(*MI))
        return 48; // Write64Bit_MIVGPRRead
      return 49; // Write64Bit_ReadDefault
    }
    break;
  };
  report_fatal_error("Expected a variant SchedClass");
} // AMDGPUGenSubtargetInfo::resolveSchedClass

unsigned AMDGPUGenSubtargetInfo
::resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID) const {
  return AMDGPU_MC::resolveVariantSchedClassImpl(SchedClass, MI, MCII, CPUID);
} // AMDGPUGenSubtargetInfo::resolveVariantSchedClass

} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR


#ifdef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS


#ifdef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS

