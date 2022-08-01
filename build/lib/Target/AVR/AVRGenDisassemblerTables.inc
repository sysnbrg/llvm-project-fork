/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * AVR Disassembler                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/MC/MCSubtargetInfo.h"
#include "llvm/MC/SubtargetFeature.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper functions for extracting fields from encoded instructions.
// InsnType must either be integral or an APInt-like object that must:
// * be default-constructible and copy-constructible
// * be constructible from an APInt (this can be private)
// * Support insertBits(bits, startBit, numBits)
// * Support extractBitsAsZExtValue(numBits, startBit)
// * Support the ~, &, ==, and != operators with other objects of the same type
// * Support the != and bitwise & with uint64_t
// * Support put (<<) to raw_ostream&
template <typename InsnType>
#if defined(_MSC_VER) && !defined(__clang__)
__declspec(noinline)
#endif
static std::enable_if_t<std::is_integral<InsnType>::value, InsnType>
fieldFromInstruction(const InsnType &insn, unsigned startBit,
                     unsigned numBits) {
  assert(startBit + numBits <= 64 && "Cannot support >64-bit extractions!");
  assert(startBit + numBits <= (sizeof(InsnType) * 8) &&
         "Instruction field out of bounds!");
  InsnType fieldMask;
  if (numBits == sizeof(InsnType) * 8)
    fieldMask = (InsnType)(-1LL);
  else
    fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
  return (insn & fieldMask) >> startBit;
}

template <typename InsnType>
static std::enable_if_t<!std::is_integral<InsnType>::value, uint64_t>
fieldFromInstruction(const InsnType &insn, unsigned startBit,
                     unsigned numBits) {
  return insn.extractBitsAsZExtValue(numBits, startBit);
}

// Helper function for inserting bits extracted from an encoded instruction into
// a field.
template <typename InsnType>
static std::enable_if_t<std::is_integral<InsnType>::value>
insertBits(InsnType &field, InsnType bits, unsigned startBit, unsigned numBits) {
  assert(startBit + numBits <= sizeof field * 8);
  field |= (InsnType)bits << startBit;
}

template <typename InsnType>
static std::enable_if_t<!std::is_integral<InsnType>::value>
insertBits(InsnType &field, uint64_t bits, unsigned startBit, unsigned numBits) {
  field.insertBits(bits, startBit, numBits);
}

static const uint8_t DecoderTable16[] = {
/* 0 */       MCD::OPC_ExtractField, 14, 2,  // Inst{15-14} ...
/* 3 */       MCD::OPC_FilterValue, 0, 5, 1, 0, // Skip to: 269
/* 8 */       MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 11 */      MCD::OPC_FilterValue, 0, 156, 0, 0, // Skip to: 172
/* 16 */      MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 19 */      MCD::OPC_FilterValue, 0, 121, 0, 0, // Skip to: 145
/* 24 */      MCD::OPC_ExtractField, 8, 2,  // Inst{9-8} ...
/* 27 */      MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 43
/* 32 */      MCD::OPC_CheckField, 0, 8, 0, 52, 5, 0, // Skip to: 1371
/* 39 */      MCD::OPC_Decode, 144, 3, 0, // Opcode: NOP
/* 43 */      MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 57
/* 48 */      MCD::OPC_CheckPredicate, 0, 38, 5, 0, // Skip to: 1371
/* 53 */      MCD::OPC_Decode, 139, 3, 1, // Opcode: MOVWRdRr
/* 57 */      MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 71
/* 62 */      MCD::OPC_CheckPredicate, 1, 24, 5, 0, // Skip to: 1371
/* 67 */      MCD::OPC_Decode, 141, 3, 2, // Opcode: MULSRdRr
/* 71 */      MCD::OPC_FilterValue, 3, 15, 5, 0, // Skip to: 1371
/* 76 */      MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 79 */      MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 100
/* 84 */      MCD::OPC_CheckPredicate, 1, 47, 0, 0, // Skip to: 136
/* 89 */      MCD::OPC_CheckField, 7, 1, 1, 40, 0, 0, // Skip to: 136
/* 96 */      MCD::OPC_Decode, 246, 2, 3, // Opcode: FMULS
/* 100 */     MCD::OPC_FilterValue, 1, 31, 0, 0, // Skip to: 136
/* 105 */     MCD::OPC_ExtractField, 7, 1,  // Inst{7} ...
/* 108 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 122
/* 113 */     MCD::OPC_CheckPredicate, 1, 18, 0, 0, // Skip to: 136
/* 118 */     MCD::OPC_Decode, 245, 2, 3, // Opcode: FMUL
/* 122 */     MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 136
/* 127 */     MCD::OPC_CheckPredicate, 1, 4, 0, 0, // Skip to: 136
/* 132 */     MCD::OPC_Decode, 247, 2, 3, // Opcode: FMULSU
/* 136 */     MCD::OPC_CheckPredicate, 1, 206, 4, 0, // Skip to: 1371
/* 141 */     MCD::OPC_Decode, 142, 3, 2, // Opcode: MULSURdRr
/* 145 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 154
/* 150 */     MCD::OPC_Decode, 233, 2, 4, // Opcode: CPCRdRr
/* 154 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 163
/* 159 */     MCD::OPC_Decode, 156, 3, 5, // Opcode: SBCRdRr
/* 163 */     MCD::OPC_FilterValue, 3, 179, 4, 0, // Skip to: 1371
/* 168 */     MCD::OPC_Decode, 210, 2, 5, // Opcode: ADDRdRr
/* 172 */     MCD::OPC_FilterValue, 1, 39, 0, 0, // Skip to: 216
/* 177 */     MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 180 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 189
/* 185 */     MCD::OPC_Decode, 236, 2, 4, // Opcode: CPSE
/* 189 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 198
/* 194 */     MCD::OPC_Decode, 235, 2, 4, // Opcode: CPRdRr
/* 198 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 207
/* 203 */     MCD::OPC_Decode, 172, 3, 5, // Opcode: SUBRdRr
/* 207 */     MCD::OPC_FilterValue, 3, 135, 4, 0, // Skip to: 1371
/* 212 */     MCD::OPC_Decode, 209, 2, 5, // Opcode: ADCRdRr
/* 216 */     MCD::OPC_FilterValue, 2, 39, 0, 0, // Skip to: 260
/* 221 */     MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 224 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 233
/* 229 */     MCD::OPC_Decode, 213, 2, 5, // Opcode: ANDRdRr
/* 233 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 242
/* 238 */     MCD::OPC_Decode, 244, 2, 5, // Opcode: EORRdRr
/* 242 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 251
/* 247 */     MCD::OPC_Decode, 146, 3, 5, // Opcode: ORRdRr
/* 251 */     MCD::OPC_FilterValue, 3, 91, 4, 0, // Skip to: 1371
/* 256 */     MCD::OPC_Decode, 138, 3, 4, // Opcode: MOVRdRr
/* 260 */     MCD::OPC_FilterValue, 3, 82, 4, 0, // Skip to: 1371
/* 265 */     MCD::OPC_Decode, 234, 2, 6, // Opcode: CPIRdK
/* 269 */     MCD::OPC_FilterValue, 1, 39, 0, 0, // Skip to: 313
/* 274 */     MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 277 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 286
/* 282 */     MCD::OPC_Decode, 155, 3, 7, // Opcode: SBCIRdK
/* 286 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 295
/* 291 */     MCD::OPC_Decode, 171, 3, 7, // Opcode: SUBIRdK
/* 295 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 304
/* 300 */     MCD::OPC_Decode, 145, 3, 7, // Opcode: ORIRdK
/* 304 */     MCD::OPC_FilterValue, 3, 38, 4, 0, // Skip to: 1371
/* 309 */     MCD::OPC_Decode, 212, 2, 7, // Opcode: ANDIRdK
/* 313 */     MCD::OPC_FilterValue, 2, 66, 3, 0, // Skip to: 1152
/* 318 */     MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 321 */     MCD::OPC_FilterValue, 0, 205, 0, 0, // Skip to: 531
/* 326 */     MCD::OPC_ExtractField, 9, 1,  // Inst{9} ...
/* 329 */     MCD::OPC_FilterValue, 0, 96, 0, 0, // Skip to: 430
/* 334 */     MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 337 */     MCD::OPC_FilterValue, 0, 23, 0, 0, // Skip to: 365
/* 342 */     MCD::OPC_CheckPredicate, 2, 74, 0, 0, // Skip to: 421
/* 347 */     MCD::OPC_CheckField, 13, 1, 0, 67, 0, 0, // Skip to: 421
/* 354 */     MCD::OPC_CheckField, 10, 2, 0, 60, 0, 0, // Skip to: 421
/* 361 */     MCD::OPC_Decode, 130, 3, 8, // Opcode: LDRdPtr
/* 365 */     MCD::OPC_FilterValue, 1, 23, 0, 0, // Skip to: 393
/* 370 */     MCD::OPC_CheckPredicate, 2, 46, 0, 0, // Skip to: 421
/* 375 */     MCD::OPC_CheckField, 13, 1, 0, 39, 0, 0, // Skip to: 421
/* 382 */     MCD::OPC_CheckField, 10, 2, 0, 32, 0, 0, // Skip to: 421
/* 389 */     MCD::OPC_Decode, 132, 3, 8, // Opcode: LDRdPtrPi
/* 393 */     MCD::OPC_FilterValue, 2, 23, 0, 0, // Skip to: 421
/* 398 */     MCD::OPC_CheckPredicate, 2, 18, 0, 0, // Skip to: 421
/* 403 */     MCD::OPC_CheckField, 13, 1, 0, 11, 0, 0, // Skip to: 421
/* 410 */     MCD::OPC_CheckField, 10, 2, 0, 4, 0, 0, // Skip to: 421
/* 417 */     MCD::OPC_Decode, 131, 3, 8, // Opcode: LDRdPtrPd
/* 421 */     MCD::OPC_CheckPredicate, 2, 177, 3, 0, // Skip to: 1371
/* 426 */     MCD::OPC_Decode, 128, 3, 9, // Opcode: LDDRdPtrQ
/* 430 */     MCD::OPC_FilterValue, 1, 168, 3, 0, // Skip to: 1371
/* 435 */     MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 438 */     MCD::OPC_FilterValue, 0, 23, 0, 0, // Skip to: 466
/* 443 */     MCD::OPC_CheckPredicate, 2, 74, 0, 0, // Skip to: 522
/* 448 */     MCD::OPC_CheckField, 13, 1, 0, 67, 0, 0, // Skip to: 522
/* 455 */     MCD::OPC_CheckField, 10, 2, 0, 60, 0, 0, // Skip to: 522
/* 462 */     MCD::OPC_Decode, 169, 3, 8, // Opcode: STPtrRr
/* 466 */     MCD::OPC_FilterValue, 1, 23, 0, 0, // Skip to: 494
/* 471 */     MCD::OPC_CheckPredicate, 2, 46, 0, 0, // Skip to: 522
/* 476 */     MCD::OPC_CheckField, 13, 1, 0, 39, 0, 0, // Skip to: 522
/* 483 */     MCD::OPC_CheckField, 10, 2, 0, 32, 0, 0, // Skip to: 522
/* 490 */     MCD::OPC_Decode, 168, 3, 8, // Opcode: STPtrPiRr
/* 494 */     MCD::OPC_FilterValue, 2, 23, 0, 0, // Skip to: 522
/* 499 */     MCD::OPC_CheckPredicate, 2, 18, 0, 0, // Skip to: 522
/* 504 */     MCD::OPC_CheckField, 13, 1, 0, 11, 0, 0, // Skip to: 522
/* 511 */     MCD::OPC_CheckField, 10, 2, 0, 4, 0, 0, // Skip to: 522
/* 518 */     MCD::OPC_Decode, 167, 3, 8, // Opcode: STPtrPdRr
/* 522 */     MCD::OPC_CheckPredicate, 2, 76, 3, 0, // Skip to: 1371
/* 527 */     MCD::OPC_Decode, 166, 3, 10, // Opcode: STDPtrQRr
/* 531 */     MCD::OPC_FilterValue, 1, 67, 3, 0, // Skip to: 1371
/* 536 */     MCD::OPC_ExtractField, 11, 1,  // Inst{11} ...
/* 539 */     MCD::OPC_FilterValue, 0, 13, 2, 0, // Skip to: 1069
/* 544 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 547 */     MCD::OPC_FilterValue, 0, 252, 1, 0, // Skip to: 1060
/* 552 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 555 */     MCD::OPC_FilterValue, 0, 73, 0, 0, // Skip to: 633
/* 560 */     MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 563 */     MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 577
/* 568 */     MCD::OPC_CheckPredicate, 3, 30, 3, 0, // Skip to: 1371
/* 573 */     MCD::OPC_Decode, 135, 3, 11, // Opcode: LPMRdZ
/* 577 */     MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 591
/* 582 */     MCD::OPC_CheckPredicate, 3, 16, 3, 0, // Skip to: 1371
/* 587 */     MCD::OPC_Decode, 136, 3, 11, // Opcode: LPMRdZPi
/* 591 */     MCD::OPC_FilterValue, 6, 9, 0, 0, // Skip to: 605
/* 596 */     MCD::OPC_CheckPredicate, 4, 2, 3, 0, // Skip to: 1371
/* 601 */     MCD::OPC_Decode, 242, 2, 11, // Opcode: ELPMRdZ
/* 605 */     MCD::OPC_FilterValue, 7, 9, 0, 0, // Skip to: 619
/* 610 */     MCD::OPC_CheckPredicate, 4, 244, 2, 0, // Skip to: 1371
/* 615 */     MCD::OPC_Decode, 243, 2, 11, // Opcode: ELPMRdZPi
/* 619 */     MCD::OPC_FilterValue, 15, 235, 2, 0, // Skip to: 1371
/* 624 */     MCD::OPC_CheckPredicate, 2, 230, 2, 0, // Skip to: 1371
/* 629 */     MCD::OPC_Decode, 148, 3, 12, // Opcode: POPRd
/* 633 */     MCD::OPC_FilterValue, 1, 73, 0, 0, // Skip to: 711
/* 638 */     MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 641 */     MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 655
/* 646 */     MCD::OPC_CheckPredicate, 5, 208, 2, 0, // Skip to: 1371
/* 651 */     MCD::OPC_Decode, 175, 3, 13, // Opcode: XCHZRd
/* 655 */     MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 669
/* 660 */     MCD::OPC_CheckPredicate, 5, 194, 2, 0, // Skip to: 1371
/* 665 */     MCD::OPC_Decode, 254, 2, 13, // Opcode: LASZRd
/* 669 */     MCD::OPC_FilterValue, 6, 9, 0, 0, // Skip to: 683
/* 674 */     MCD::OPC_CheckPredicate, 5, 180, 2, 0, // Skip to: 1371
/* 679 */     MCD::OPC_Decode, 253, 2, 13, // Opcode: LACZRd
/* 683 */     MCD::OPC_FilterValue, 7, 9, 0, 0, // Skip to: 697
/* 688 */     MCD::OPC_CheckPredicate, 5, 166, 2, 0, // Skip to: 1371
/* 693 */     MCD::OPC_Decode, 255, 2, 13, // Opcode: LATZRd
/* 697 */     MCD::OPC_FilterValue, 15, 157, 2, 0, // Skip to: 1371
/* 702 */     MCD::OPC_CheckPredicate, 2, 152, 2, 0, // Skip to: 1371
/* 707 */     MCD::OPC_Decode, 149, 3, 12, // Opcode: PUSHRr
/* 711 */     MCD::OPC_FilterValue, 2, 52, 1, 0, // Skip to: 1024
/* 716 */     MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 719 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 728
/* 724 */     MCD::OPC_Decode, 232, 2, 12, // Opcode: COMRd
/* 728 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 737
/* 733 */     MCD::OPC_Decode, 143, 3, 12, // Opcode: NEGRd
/* 737 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 746
/* 742 */     MCD::OPC_Decode, 173, 3, 12, // Opcode: SWAPRd
/* 746 */     MCD::OPC_FilterValue, 3, 4, 0, 0, // Skip to: 755
/* 751 */     MCD::OPC_Decode, 250, 2, 12, // Opcode: INCRd
/* 755 */     MCD::OPC_FilterValue, 5, 4, 0, 0, // Skip to: 764
/* 760 */     MCD::OPC_Decode, 214, 2, 12, // Opcode: ASRRd
/* 764 */     MCD::OPC_FilterValue, 6, 4, 0, 0, // Skip to: 773
/* 769 */     MCD::OPC_Decode, 137, 3, 12, // Opcode: LSRRd
/* 773 */     MCD::OPC_FilterValue, 7, 4, 0, 0, // Skip to: 782
/* 778 */     MCD::OPC_Decode, 154, 3, 12, // Opcode: RORRd
/* 782 */     MCD::OPC_FilterValue, 8, 143, 0, 0, // Skip to: 930
/* 787 */     MCD::OPC_ExtractField, 7, 2,  // Inst{8-7} ...
/* 790 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 799
/* 795 */     MCD::OPC_Decode, 228, 2, 14, // Opcode: BSETs
/* 799 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 808
/* 804 */     MCD::OPC_Decode, 215, 2, 14, // Opcode: BCLRs
/* 808 */     MCD::OPC_FilterValue, 2, 21, 0, 0, // Skip to: 834
/* 813 */     MCD::OPC_ExtractField, 4, 3,  // Inst{6-4} ...
/* 816 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 825
/* 821 */     MCD::OPC_Decode, 151, 3, 0, // Opcode: RET
/* 825 */     MCD::OPC_FilterValue, 1, 29, 2, 0, // Skip to: 1371
/* 830 */     MCD::OPC_Decode, 152, 3, 0, // Opcode: RETI
/* 834 */     MCD::OPC_FilterValue, 3, 20, 2, 0, // Skip to: 1371
/* 839 */     MCD::OPC_ExtractField, 4, 3,  // Inst{6-4} ...
/* 842 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 851
/* 847 */     MCD::OPC_Decode, 163, 3, 0, // Opcode: SLEEP
/* 851 */     MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 865
/* 856 */     MCD::OPC_CheckPredicate, 6, 254, 1, 0, // Skip to: 1371
/* 861 */     MCD::OPC_Decode, 219, 2, 0, // Opcode: BREAK
/* 865 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 874
/* 870 */     MCD::OPC_Decode, 174, 3, 0, // Opcode: WDR
/* 874 */     MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 888
/* 879 */     MCD::OPC_CheckPredicate, 7, 231, 1, 0, // Skip to: 1371
/* 884 */     MCD::OPC_Decode, 134, 3, 0, // Opcode: LPM
/* 888 */     MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 902
/* 893 */     MCD::OPC_CheckPredicate, 8, 217, 1, 0, // Skip to: 1371
/* 898 */     MCD::OPC_Decode, 241, 2, 0, // Opcode: ELPM
/* 902 */     MCD::OPC_FilterValue, 6, 9, 0, 0, // Skip to: 916
/* 907 */     MCD::OPC_CheckPredicate, 9, 203, 1, 0, // Skip to: 1371
/* 912 */     MCD::OPC_Decode, 164, 3, 0, // Opcode: SPM
/* 916 */     MCD::OPC_FilterValue, 7, 194, 1, 0, // Skip to: 1371
/* 921 */     MCD::OPC_CheckPredicate, 10, 189, 1, 0, // Skip to: 1371
/* 926 */     MCD::OPC_Decode, 165, 3, 0, // Opcode: SPMZPi
/* 930 */     MCD::OPC_FilterValue, 9, 59, 0, 0, // Skip to: 994
/* 935 */     MCD::OPC_ExtractField, 4, 5,  // Inst{8-4} ...
/* 938 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 952
/* 943 */     MCD::OPC_CheckPredicate, 11, 167, 1, 0, // Skip to: 1371
/* 948 */     MCD::OPC_Decode, 249, 2, 0, // Opcode: IJMP
/* 952 */     MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 966
/* 957 */     MCD::OPC_CheckPredicate, 12, 153, 1, 0, // Skip to: 1371
/* 962 */     MCD::OPC_Decode, 240, 2, 0, // Opcode: EIJMP
/* 966 */     MCD::OPC_FilterValue, 16, 9, 0, 0, // Skip to: 980
/* 971 */     MCD::OPC_CheckPredicate, 11, 139, 1, 0, // Skip to: 1371
/* 976 */     MCD::OPC_Decode, 248, 2, 0, // Opcode: ICALL
/* 980 */     MCD::OPC_FilterValue, 17, 130, 1, 0, // Skip to: 1371
/* 985 */     MCD::OPC_CheckPredicate, 12, 125, 1, 0, // Skip to: 1371
/* 990 */     MCD::OPC_Decode, 239, 2, 0, // Opcode: EICALL
/* 994 */     MCD::OPC_FilterValue, 10, 4, 0, 0, // Skip to: 1003
/* 999 */     MCD::OPC_Decode, 237, 2, 12, // Opcode: DECRd
/* 1003 */    MCD::OPC_FilterValue, 11, 107, 1, 0, // Skip to: 1371
/* 1008 */    MCD::OPC_CheckPredicate, 13, 102, 1, 0, // Skip to: 1371
/* 1013 */    MCD::OPC_CheckField, 8, 1, 0, 95, 1, 0, // Skip to: 1371
/* 1020 */    MCD::OPC_Decode, 238, 2, 15, // Opcode: DESK
/* 1024 */    MCD::OPC_FilterValue, 3, 86, 1, 0, // Skip to: 1371
/* 1029 */    MCD::OPC_ExtractField, 8, 1,  // Inst{8} ...
/* 1032 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 1046
/* 1037 */    MCD::OPC_CheckPredicate, 14, 73, 1, 0, // Skip to: 1371
/* 1042 */    MCD::OPC_Decode, 211, 2, 16, // Opcode: ADIWRdK
/* 1046 */    MCD::OPC_FilterValue, 1, 64, 1, 0, // Skip to: 1371
/* 1051 */    MCD::OPC_CheckPredicate, 14, 59, 1, 0, // Skip to: 1371
/* 1056 */    MCD::OPC_Decode, 160, 3, 16, // Opcode: SBIWRdK
/* 1060 */    MCD::OPC_FilterValue, 1, 50, 1, 0, // Skip to: 1371
/* 1065 */    MCD::OPC_Decode, 251, 2, 17, // Opcode: INRdA
/* 1069 */    MCD::OPC_FilterValue, 1, 41, 1, 0, // Skip to: 1371
/* 1074 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1077 */    MCD::OPC_FilterValue, 0, 61, 0, 0, // Skip to: 1143
/* 1082 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 1085 */    MCD::OPC_FilterValue, 0, 39, 0, 0, // Skip to: 1129
/* 1090 */    MCD::OPC_ExtractField, 8, 2,  // Inst{9-8} ...
/* 1093 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1102
/* 1098 */    MCD::OPC_Decode, 231, 2, 18, // Opcode: CBIAb
/* 1102 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 1111
/* 1107 */    MCD::OPC_Decode, 158, 3, 18, // Opcode: SBICAb
/* 1111 */    MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 1120
/* 1116 */    MCD::OPC_Decode, 157, 3, 18, // Opcode: SBIAb
/* 1120 */    MCD::OPC_FilterValue, 3, 246, 0, 0, // Skip to: 1371
/* 1125 */    MCD::OPC_Decode, 159, 3, 18, // Opcode: SBISAb
/* 1129 */    MCD::OPC_FilterValue, 1, 237, 0, 0, // Skip to: 1371
/* 1134 */    MCD::OPC_CheckPredicate, 1, 232, 0, 0, // Skip to: 1371
/* 1139 */    MCD::OPC_Decode, 140, 3, 0, // Opcode: MULRdRr
/* 1143 */    MCD::OPC_FilterValue, 1, 223, 0, 0, // Skip to: 1371
/* 1148 */    MCD::OPC_Decode, 147, 3, 19, // Opcode: OUTARr
/* 1152 */    MCD::OPC_FilterValue, 3, 214, 0, 0, // Skip to: 1371
/* 1157 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1160 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1169
/* 1165 */    MCD::OPC_Decode, 153, 3, 0, // Opcode: RJMPk
/* 1169 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 1178
/* 1174 */    MCD::OPC_Decode, 150, 3, 20, // Opcode: RCALLk
/* 1178 */    MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 1187
/* 1183 */    MCD::OPC_Decode, 129, 3, 6, // Opcode: LDIRdK
/* 1187 */    MCD::OPC_FilterValue, 3, 179, 0, 0, // Skip to: 1371
/* 1192 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 1195 */    MCD::OPC_FilterValue, 0, 43, 0, 0, // Skip to: 1243
/* 1200 */    MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 1203 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1212
/* 1208 */    MCD::OPC_Decode, 222, 2, 0, // Opcode: BRLOk
/* 1212 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 1221
/* 1217 */    MCD::OPC_Decode, 220, 2, 0, // Opcode: BREQk
/* 1221 */    MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 1230
/* 1226 */    MCD::OPC_Decode, 224, 2, 0, // Opcode: BRMIk
/* 1230 */    MCD::OPC_FilterValue, 4, 4, 0, 0, // Skip to: 1239
/* 1235 */    MCD::OPC_Decode, 223, 2, 0, // Opcode: BRLTk
/* 1239 */    MCD::OPC_Decode, 218, 2, 21, // Opcode: BRBSsk
/* 1243 */    MCD::OPC_FilterValue, 1, 43, 0, 0, // Skip to: 1291
/* 1248 */    MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 1251 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1260
/* 1256 */    MCD::OPC_Decode, 227, 2, 0, // Opcode: BRSHk
/* 1260 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 1269
/* 1265 */    MCD::OPC_Decode, 225, 2, 0, // Opcode: BRNEk
/* 1269 */    MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 1278
/* 1274 */    MCD::OPC_Decode, 226, 2, 0, // Opcode: BRPLk
/* 1278 */    MCD::OPC_FilterValue, 4, 4, 0, 0, // Skip to: 1287
/* 1283 */    MCD::OPC_Decode, 221, 2, 0, // Opcode: BRGEk
/* 1287 */    MCD::OPC_Decode, 217, 2, 21, // Opcode: BRBCsk
/* 1291 */    MCD::OPC_FilterValue, 2, 35, 0, 0, // Skip to: 1331
/* 1296 */    MCD::OPC_ExtractField, 9, 1,  // Inst{9} ...
/* 1299 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1315
/* 1304 */    MCD::OPC_CheckField, 3, 1, 0, 60, 0, 0, // Skip to: 1371
/* 1311 */    MCD::OPC_Decode, 216, 2, 22, // Opcode: BLD
/* 1315 */    MCD::OPC_FilterValue, 1, 51, 0, 0, // Skip to: 1371
/* 1320 */    MCD::OPC_CheckField, 3, 1, 0, 44, 0, 0, // Skip to: 1371
/* 1327 */    MCD::OPC_Decode, 229, 2, 23, // Opcode: BST
/* 1331 */    MCD::OPC_FilterValue, 3, 35, 0, 0, // Skip to: 1371
/* 1336 */    MCD::OPC_ExtractField, 9, 1,  // Inst{9} ...
/* 1339 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1355
/* 1344 */    MCD::OPC_CheckField, 3, 1, 0, 20, 0, 0, // Skip to: 1371
/* 1351 */    MCD::OPC_Decode, 161, 3, 24, // Opcode: SBRCRrB
/* 1355 */    MCD::OPC_FilterValue, 1, 11, 0, 0, // Skip to: 1371
/* 1360 */    MCD::OPC_CheckField, 3, 1, 0, 4, 0, 0, // Skip to: 1371
/* 1367 */    MCD::OPC_Decode, 162, 3, 24, // Opcode: SBRSRrB
/* 1371 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 17, 3,  // Inst{19-17} ...
/* 3 */       MCD::OPC_FilterValue, 0, 45, 0, 0, // Skip to: 53
/* 8 */       MCD::OPC_ExtractField, 25, 7,  // Inst{31-25} ...
/* 11 */      MCD::OPC_FilterValue, 72, 16, 0, 0, // Skip to: 32
/* 16 */      MCD::OPC_CheckPredicate, 2, 74, 0, 0, // Skip to: 95
/* 21 */      MCD::OPC_CheckField, 16, 1, 0, 67, 0, 0, // Skip to: 95
/* 28 */      MCD::OPC_Decode, 133, 3, 25, // Opcode: LDSRdK
/* 32 */      MCD::OPC_FilterValue, 73, 58, 0, 0, // Skip to: 95
/* 37 */      MCD::OPC_CheckPredicate, 2, 53, 0, 0, // Skip to: 95
/* 42 */      MCD::OPC_CheckField, 16, 1, 0, 46, 0, 0, // Skip to: 95
/* 49 */      MCD::OPC_Decode, 170, 3, 26, // Opcode: STSKRr
/* 53 */      MCD::OPC_FilterValue, 6, 16, 0, 0, // Skip to: 74
/* 58 */      MCD::OPC_CheckPredicate, 15, 32, 0, 0, // Skip to: 95
/* 63 */      MCD::OPC_CheckField, 25, 7, 74, 25, 0, 0, // Skip to: 95
/* 70 */      MCD::OPC_Decode, 252, 2, 27, // Opcode: JMPk
/* 74 */      MCD::OPC_FilterValue, 7, 16, 0, 0, // Skip to: 95
/* 79 */      MCD::OPC_CheckPredicate, 15, 11, 0, 0, // Skip to: 95
/* 84 */      MCD::OPC_CheckField, 25, 7, 74, 4, 0, 0, // Skip to: 95
/* 91 */      MCD::OPC_Decode, 230, 2, 27, // Opcode: CALLk
/* 95 */      MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset &Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return (Bits[AVR::FeatureMOVW]);
  case 1:
    return (Bits[AVR::FeatureMultiplication]);
  case 2:
    return (Bits[AVR::FeatureSRAM]);
  case 3:
    return (Bits[AVR::FeatureLPMX]);
  case 4:
    return (Bits[AVR::FeatureELPMX]);
  case 5:
    return (Bits[AVR::FeatureRMW]);
  case 6:
    return (Bits[AVR::FeatureBREAK]);
  case 7:
    return (Bits[AVR::FeatureLPM]);
  case 8:
    return (Bits[AVR::FeatureELPM]);
  case 9:
    return (Bits[AVR::FeatureSPM]);
  case 10:
    return (Bits[AVR::FeatureSPMX]);
  case 11:
    return (Bits[AVR::FeatureIJMPCALL]);
  case 12:
    return (Bits[AVR::FeatureEIJMPCALL]);
  case 13:
    return (Bits[AVR::FeatureDES]);
  case 14:
    return (Bits[AVR::FeatureADDSUBIW]);
  case 15:
    return (Bits[AVR::FeatureJMPCALL]);
  }
}

template <typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const MCDisassembler *Decoder, bool &DecodeComplete) {
  DecodeComplete = true;
  using TmpType = std::conditional_t<std::is_integral<InsnType>::value, InsnType, uint64_t>;
  TmpType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return S;
  case 1:
    if (decodeFMOVWRdRr(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 2:
    if (decodeFMUL2RdRr(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 3:
    if (decodeFFMULRdRr(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 4, 5);
    if (DecodeGPR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    insertBits(tmp, fieldFromInstruction(insn, 0, 4), 0, 4);
    insertBits(tmp, fieldFromInstruction(insn, 9, 1), 4, 1);
    if (DecodeGPR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 4, 5);
    if (DecodeGPR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 5);
    if (DecodeGPR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    insertBits(tmp, fieldFromInstruction(insn, 0, 4), 0, 4);
    insertBits(tmp, fieldFromInstruction(insn, 9, 1), 4, 1);
    if (DecodeGPR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeLD8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    insertBits(tmp, fieldFromInstruction(insn, 0, 4), 0, 4);
    insertBits(tmp, fieldFromInstruction(insn, 8, 4), 4, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeLD8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeLD8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    insertBits(tmp, fieldFromInstruction(insn, 0, 4), 0, 4);
    insertBits(tmp, fieldFromInstruction(insn, 8, 4), 4, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 8:
    if (decodeLoadStore(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 4, 5);
    if (DecodeGPR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    insertBits(tmp, fieldFromInstruction(insn, 0, 3), 0, 3);
    insertBits(tmp, fieldFromInstruction(insn, 3, 1), 6, 1);
    insertBits(tmp, fieldFromInstruction(insn, 10, 2), 3, 2);
    insertBits(tmp, fieldFromInstruction(insn, 13, 1), 5, 1);
    if (decodeMemri(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 10:
    tmp = 0x0;
    insertBits(tmp, fieldFromInstruction(insn, 0, 3), 0, 3);
    insertBits(tmp, fieldFromInstruction(insn, 3, 1), 6, 1);
    insertBits(tmp, fieldFromInstruction(insn, 10, 2), 3, 2);
    insertBits(tmp, fieldFromInstruction(insn, 13, 1), 5, 1);
    if (decodeMemri(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 5);
    if (DecodeGPR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 11:
    if (decodeFLPMX(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 12:
    if (decodeFRd(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 4, 5);
    if (DecodeGPR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 4, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 4, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 16:
    if (decodeFWRdK(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 17:
    if (decodeFIORdA(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 18:
    if (decodeFIOBIT(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 19:
    if (decodeFIOARr(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 0, 12);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 3, 7);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 4, 5);
    if (DecodeGPR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 5);
    if (DecodeGPR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 4, 5);
    if (DecodeGPR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeGPR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeGPR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 27:
    tmp = 0x0;
    insertBits(tmp, fieldFromInstruction(insn, 0, 17), 0, 17);
    insertBits(tmp, fieldFromInstruction(insn, 20, 5), 17, 5);
    if (decodeCallTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  }
}

template <typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const MCDisassembler *DisAsm,
                                      const MCSubtargetInfo &STI) {
  const FeatureBitset &Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint64_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  while (true) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      LLVM_DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      uint64_t Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 24-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      NumToSkip |= (*Ptr++) << 16;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      LLVM_DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      uint64_t FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      unsigned PtrLen = 0;
      uint64_t ExpectedValue = decodeULEB128(++Ptr, &PtrLen);
      Ptr += PtrLen;
      // NumToSkip is a plain 24-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      NumToSkip |= (*Ptr++) << 16;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      LLVM_DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 24-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      NumToSkip |= (*Ptr++) << 16;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      LLVM_DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;

      MI.clear();
      MI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm, DecodeComplete);
      assert(DecodeComplete);

      LLVM_DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": "
                   << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
      return S;
    }
    case MCD::OPC_TryDecode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 24-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      NumToSkip |= (*Ptr++) << 16;

      // Perform the decode operation.
      MCInst TmpMI;
      TmpMI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, TmpMI, Address, DisAsm, DecodeComplete);
      LLVM_DEBUG(dbgs() << Loc << ": OPC_TryDecode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": ");

      if (DecodeComplete) {
        // Decoding complete.
        LLVM_DEBUG(dbgs() << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
        MI = TmpMI;
        return S;
      } else {
        assert(S == MCDisassembler::Fail);
        // If the decoding was incomplete, skip.
        Ptr += NumToSkip;
        LLVM_DEBUG(dbgs() << "FAIL: continuing at " << (Ptr - DecodeTable) << "\n");
        // Reset decode status. This also drops a SoftFail status that could be
        // set before the decode attempt.
        S = MCDisassembler::Success;
      }
      break;
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      uint64_t PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      uint64_t NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) != 0 || (~insn & NegativeMask) != 0;
      if (Fail)
        S = MCDisassembler::SoftFail;
      LLVM_DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n" : "PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      LLVM_DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // end namespace llvm
