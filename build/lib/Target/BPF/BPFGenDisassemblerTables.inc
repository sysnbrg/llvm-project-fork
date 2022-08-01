/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * BPF Disassembler                                                        *|
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

static const uint8_t DecoderTableBPF64[] = {
/* 0 */       MCD::OPC_ExtractField, 56, 8,  // Inst{63-56} ...
/* 3 */       MCD::OPC_FilterValue, 4, 4, 0, 0, // Skip to: 12
/* 8 */       MCD::OPC_Decode, 132, 2, 0, // Opcode: ADD_ri_32
/* 12 */      MCD::OPC_FilterValue, 5, 4, 0, 0, // Skip to: 21
/* 17 */      MCD::OPC_Decode, 157, 2, 1, // Opcode: JMP
/* 21 */      MCD::OPC_FilterValue, 7, 4, 0, 0, // Skip to: 30
/* 26 */      MCD::OPC_Decode, 131, 2, 2, // Opcode: ADD_ri
/* 30 */      MCD::OPC_FilterValue, 12, 4, 0, 0, // Skip to: 39
/* 35 */      MCD::OPC_Decode, 134, 2, 3, // Opcode: ADD_rr_32
/* 39 */      MCD::OPC_FilterValue, 15, 4, 0, 0, // Skip to: 48
/* 44 */      MCD::OPC_Decode, 133, 2, 4, // Opcode: ADD_rr
/* 48 */      MCD::OPC_FilterValue, 20, 4, 0, 0, // Skip to: 57
/* 53 */      MCD::OPC_Decode, 253, 2, 0, // Opcode: SUB_ri_32
/* 57 */      MCD::OPC_FilterValue, 21, 4, 0, 0, // Skip to: 66
/* 62 */      MCD::OPC_Decode, 153, 2, 5, // Opcode: JEQ_ri
/* 66 */      MCD::OPC_FilterValue, 22, 4, 0, 0, // Skip to: 75
/* 71 */      MCD::OPC_Decode, 154, 2, 6, // Opcode: JEQ_ri_32
/* 75 */      MCD::OPC_FilterValue, 23, 4, 0, 0, // Skip to: 84
/* 80 */      MCD::OPC_Decode, 252, 2, 2, // Opcode: SUB_ri
/* 84 */      MCD::OPC_FilterValue, 24, 23, 0, 0, // Skip to: 112
/* 89 */      MCD::OPC_ExtractField, 32, 16,  // Inst{47-32} ...
/* 92 */      MCD::OPC_FilterValue, 0, 136, 4, 0, // Skip to: 1257
/* 97 */      MCD::OPC_CheckField, 52, 4, 0, 4, 0, 0, // Skip to: 108
/* 104 */     MCD::OPC_Decode, 207, 2, 7, // Opcode: LD_imm64
/* 108 */     MCD::OPC_Decode, 208, 2, 8, // Opcode: LD_pseudo
/* 112 */     MCD::OPC_FilterValue, 28, 4, 0, 0, // Skip to: 121
/* 117 */     MCD::OPC_Decode, 255, 2, 3, // Opcode: SUB_rr_32
/* 121 */     MCD::OPC_FilterValue, 29, 4, 0, 0, // Skip to: 130
/* 126 */     MCD::OPC_Decode, 155, 2, 9, // Opcode: JEQ_rr
/* 130 */     MCD::OPC_FilterValue, 30, 4, 0, 0, // Skip to: 139
/* 135 */     MCD::OPC_Decode, 156, 2, 10, // Opcode: JEQ_rr_32
/* 139 */     MCD::OPC_FilterValue, 31, 4, 0, 0, // Skip to: 148
/* 144 */     MCD::OPC_Decode, 254, 2, 4, // Opcode: SUB_rr
/* 148 */     MCD::OPC_FilterValue, 32, 4, 0, 0, // Skip to: 157
/* 153 */     MCD::OPC_Decode, 203, 2, 11, // Opcode: LD_ABS_W
/* 157 */     MCD::OPC_FilterValue, 36, 4, 0, 0, // Skip to: 166
/* 162 */     MCD::OPC_Decode, 222, 2, 0, // Opcode: MUL_ri_32
/* 166 */     MCD::OPC_FilterValue, 37, 4, 0, 0, // Skip to: 175
/* 171 */     MCD::OPC_Decode, 182, 2, 5, // Opcode: JUGT_ri
/* 175 */     MCD::OPC_FilterValue, 38, 4, 0, 0, // Skip to: 184
/* 180 */     MCD::OPC_Decode, 183, 2, 6, // Opcode: JUGT_ri_32
/* 184 */     MCD::OPC_FilterValue, 39, 4, 0, 0, // Skip to: 193
/* 189 */     MCD::OPC_Decode, 221, 2, 2, // Opcode: MUL_ri
/* 193 */     MCD::OPC_FilterValue, 40, 4, 0, 0, // Skip to: 202
/* 198 */     MCD::OPC_Decode, 202, 2, 11, // Opcode: LD_ABS_H
/* 202 */     MCD::OPC_FilterValue, 44, 4, 0, 0, // Skip to: 211
/* 207 */     MCD::OPC_Decode, 224, 2, 3, // Opcode: MUL_rr_32
/* 211 */     MCD::OPC_FilterValue, 45, 4, 0, 0, // Skip to: 220
/* 216 */     MCD::OPC_Decode, 184, 2, 9, // Opcode: JUGT_rr
/* 220 */     MCD::OPC_FilterValue, 46, 4, 0, 0, // Skip to: 229
/* 225 */     MCD::OPC_Decode, 185, 2, 10, // Opcode: JUGT_rr_32
/* 229 */     MCD::OPC_FilterValue, 47, 4, 0, 0, // Skip to: 238
/* 234 */     MCD::OPC_Decode, 223, 2, 4, // Opcode: MUL_rr
/* 238 */     MCD::OPC_FilterValue, 48, 4, 0, 0, // Skip to: 247
/* 243 */     MCD::OPC_Decode, 201, 2, 11, // Opcode: LD_ABS_B
/* 247 */     MCD::OPC_FilterValue, 52, 4, 0, 0, // Skip to: 256
/* 252 */     MCD::OPC_Decode, 148, 2, 0, // Opcode: DIV_ri_32
/* 256 */     MCD::OPC_FilterValue, 53, 4, 0, 0, // Skip to: 265
/* 261 */     MCD::OPC_Decode, 178, 2, 5, // Opcode: JUGE_ri
/* 265 */     MCD::OPC_FilterValue, 54, 4, 0, 0, // Skip to: 274
/* 270 */     MCD::OPC_Decode, 179, 2, 6, // Opcode: JUGE_ri_32
/* 274 */     MCD::OPC_FilterValue, 55, 4, 0, 0, // Skip to: 283
/* 279 */     MCD::OPC_Decode, 147, 2, 2, // Opcode: DIV_ri
/* 283 */     MCD::OPC_FilterValue, 60, 4, 0, 0, // Skip to: 292
/* 288 */     MCD::OPC_Decode, 150, 2, 3, // Opcode: DIV_rr_32
/* 292 */     MCD::OPC_FilterValue, 61, 4, 0, 0, // Skip to: 301
/* 297 */     MCD::OPC_Decode, 180, 2, 9, // Opcode: JUGE_rr
/* 301 */     MCD::OPC_FilterValue, 62, 4, 0, 0, // Skip to: 310
/* 306 */     MCD::OPC_Decode, 181, 2, 10, // Opcode: JUGE_rr_32
/* 310 */     MCD::OPC_FilterValue, 63, 4, 0, 0, // Skip to: 319
/* 315 */     MCD::OPC_Decode, 149, 2, 4, // Opcode: DIV_rr
/* 319 */     MCD::OPC_FilterValue, 64, 4, 0, 0, // Skip to: 328
/* 324 */     MCD::OPC_Decode, 206, 2, 12, // Opcode: LD_IND_W
/* 328 */     MCD::OPC_FilterValue, 68, 4, 0, 0, // Skip to: 337
/* 333 */     MCD::OPC_Decode, 229, 2, 0, // Opcode: OR_ri_32
/* 337 */     MCD::OPC_FilterValue, 71, 4, 0, 0, // Skip to: 346
/* 342 */     MCD::OPC_Decode, 228, 2, 2, // Opcode: OR_ri
/* 346 */     MCD::OPC_FilterValue, 72, 4, 0, 0, // Skip to: 355
/* 351 */     MCD::OPC_Decode, 205, 2, 12, // Opcode: LD_IND_H
/* 355 */     MCD::OPC_FilterValue, 76, 4, 0, 0, // Skip to: 364
/* 360 */     MCD::OPC_Decode, 231, 2, 3, // Opcode: OR_rr_32
/* 364 */     MCD::OPC_FilterValue, 79, 4, 0, 0, // Skip to: 373
/* 369 */     MCD::OPC_Decode, 230, 2, 4, // Opcode: OR_rr
/* 373 */     MCD::OPC_FilterValue, 80, 4, 0, 0, // Skip to: 382
/* 378 */     MCD::OPC_Decode, 204, 2, 12, // Opcode: LD_IND_B
/* 382 */     MCD::OPC_FilterValue, 84, 4, 0, 0, // Skip to: 391
/* 387 */     MCD::OPC_Decode, 136, 2, 0, // Opcode: AND_ri_32
/* 391 */     MCD::OPC_FilterValue, 85, 4, 0, 0, // Skip to: 400
/* 396 */     MCD::OPC_Decode, 158, 2, 5, // Opcode: JNE_ri
/* 400 */     MCD::OPC_FilterValue, 86, 4, 0, 0, // Skip to: 409
/* 405 */     MCD::OPC_Decode, 159, 2, 6, // Opcode: JNE_ri_32
/* 409 */     MCD::OPC_FilterValue, 87, 4, 0, 0, // Skip to: 418
/* 414 */     MCD::OPC_Decode, 135, 2, 2, // Opcode: AND_ri
/* 418 */     MCD::OPC_FilterValue, 92, 4, 0, 0, // Skip to: 427
/* 423 */     MCD::OPC_Decode, 138, 2, 3, // Opcode: AND_rr_32
/* 427 */     MCD::OPC_FilterValue, 93, 4, 0, 0, // Skip to: 436
/* 432 */     MCD::OPC_Decode, 160, 2, 9, // Opcode: JNE_rr
/* 436 */     MCD::OPC_FilterValue, 94, 4, 0, 0, // Skip to: 445
/* 441 */     MCD::OPC_Decode, 161, 2, 10, // Opcode: JNE_rr_32
/* 445 */     MCD::OPC_FilterValue, 95, 4, 0, 0, // Skip to: 454
/* 450 */     MCD::OPC_Decode, 137, 2, 4, // Opcode: AND_rr
/* 454 */     MCD::OPC_FilterValue, 97, 4, 0, 0, // Skip to: 463
/* 459 */     MCD::OPC_Decode, 199, 2, 13, // Opcode: LDW
/* 463 */     MCD::OPC_FilterValue, 99, 4, 0, 0, // Skip to: 472
/* 468 */     MCD::OPC_Decode, 250, 2, 14, // Opcode: STW
/* 472 */     MCD::OPC_FilterValue, 100, 4, 0, 0, // Skip to: 481
/* 477 */     MCD::OPC_Decode, 234, 2, 0, // Opcode: SLL_ri_32
/* 481 */     MCD::OPC_FilterValue, 101, 4, 0, 0, // Skip to: 490
/* 486 */     MCD::OPC_Decode, 166, 2, 5, // Opcode: JSGT_ri
/* 490 */     MCD::OPC_FilterValue, 102, 4, 0, 0, // Skip to: 499
/* 495 */     MCD::OPC_Decode, 167, 2, 6, // Opcode: JSGT_ri_32
/* 499 */     MCD::OPC_FilterValue, 103, 4, 0, 0, // Skip to: 508
/* 504 */     MCD::OPC_Decode, 233, 2, 2, // Opcode: SLL_ri
/* 508 */     MCD::OPC_FilterValue, 105, 4, 0, 0, // Skip to: 517
/* 513 */     MCD::OPC_Decode, 197, 2, 13, // Opcode: LDH
/* 517 */     MCD::OPC_FilterValue, 107, 4, 0, 0, // Skip to: 526
/* 522 */     MCD::OPC_Decode, 248, 2, 14, // Opcode: STH
/* 526 */     MCD::OPC_FilterValue, 108, 4, 0, 0, // Skip to: 535
/* 531 */     MCD::OPC_Decode, 236, 2, 3, // Opcode: SLL_rr_32
/* 535 */     MCD::OPC_FilterValue, 109, 4, 0, 0, // Skip to: 544
/* 540 */     MCD::OPC_Decode, 168, 2, 9, // Opcode: JSGT_rr
/* 544 */     MCD::OPC_FilterValue, 110, 4, 0, 0, // Skip to: 553
/* 549 */     MCD::OPC_Decode, 169, 2, 10, // Opcode: JSGT_rr_32
/* 553 */     MCD::OPC_FilterValue, 111, 4, 0, 0, // Skip to: 562
/* 558 */     MCD::OPC_Decode, 235, 2, 4, // Opcode: SLL_rr
/* 562 */     MCD::OPC_FilterValue, 113, 4, 0, 0, // Skip to: 571
/* 567 */     MCD::OPC_Decode, 194, 2, 13, // Opcode: LDB
/* 571 */     MCD::OPC_FilterValue, 115, 4, 0, 0, // Skip to: 580
/* 576 */     MCD::OPC_Decode, 245, 2, 14, // Opcode: STB
/* 580 */     MCD::OPC_FilterValue, 116, 4, 0, 0, // Skip to: 589
/* 585 */     MCD::OPC_Decode, 242, 2, 0, // Opcode: SRL_ri_32
/* 589 */     MCD::OPC_FilterValue, 117, 4, 0, 0, // Skip to: 598
/* 594 */     MCD::OPC_Decode, 162, 2, 5, // Opcode: JSGE_ri
/* 598 */     MCD::OPC_FilterValue, 118, 4, 0, 0, // Skip to: 607
/* 603 */     MCD::OPC_Decode, 163, 2, 6, // Opcode: JSGE_ri_32
/* 607 */     MCD::OPC_FilterValue, 119, 4, 0, 0, // Skip to: 616
/* 612 */     MCD::OPC_Decode, 241, 2, 2, // Opcode: SRL_ri
/* 616 */     MCD::OPC_FilterValue, 121, 4, 0, 0, // Skip to: 625
/* 621 */     MCD::OPC_Decode, 196, 2, 13, // Opcode: LDD
/* 625 */     MCD::OPC_FilterValue, 123, 4, 0, 0, // Skip to: 634
/* 630 */     MCD::OPC_Decode, 247, 2, 14, // Opcode: STD
/* 634 */     MCD::OPC_FilterValue, 124, 4, 0, 0, // Skip to: 643
/* 639 */     MCD::OPC_Decode, 244, 2, 3, // Opcode: SRL_rr_32
/* 643 */     MCD::OPC_FilterValue, 125, 4, 0, 0, // Skip to: 652
/* 648 */     MCD::OPC_Decode, 164, 2, 9, // Opcode: JSGE_rr
/* 652 */     MCD::OPC_FilterValue, 126, 4, 0, 0, // Skip to: 661
/* 657 */     MCD::OPC_Decode, 165, 2, 10, // Opcode: JSGE_rr_32
/* 661 */     MCD::OPC_FilterValue, 127, 4, 0, 0, // Skip to: 670
/* 666 */     MCD::OPC_Decode, 243, 2, 4, // Opcode: SRL_rr
/* 670 */     MCD::OPC_FilterValue, 132, 1, 4, 0, 0, // Skip to: 680
/* 676 */     MCD::OPC_Decode, 225, 2, 15, // Opcode: NEG_32
/* 680 */     MCD::OPC_FilterValue, 133, 1, 4, 0, 0, // Skip to: 690
/* 686 */     MCD::OPC_Decode, 151, 2, 11, // Opcode: JAL
/* 690 */     MCD::OPC_FilterValue, 135, 1, 4, 0, 0, // Skip to: 700
/* 696 */     MCD::OPC_Decode, 226, 2, 16, // Opcode: NEG_64
/* 700 */     MCD::OPC_FilterValue, 141, 1, 4, 0, 0, // Skip to: 710
/* 706 */     MCD::OPC_Decode, 152, 2, 17, // Opcode: JALX
/* 710 */     MCD::OPC_FilterValue, 148, 1, 4, 0, 0, // Skip to: 720
/* 716 */     MCD::OPC_Decode, 213, 2, 0, // Opcode: MOD_ri_32
/* 720 */     MCD::OPC_FilterValue, 149, 1, 11, 0, 0, // Skip to: 737
/* 726 */     MCD::OPC_CheckField, 0, 32, 0, 12, 2, 0, // Skip to: 1257
/* 733 */     MCD::OPC_Decode, 232, 2, 18, // Opcode: RET
/* 737 */     MCD::OPC_FilterValue, 151, 1, 4, 0, 0, // Skip to: 747
/* 743 */     MCD::OPC_Decode, 212, 2, 2, // Opcode: MOD_ri
/* 747 */     MCD::OPC_FilterValue, 156, 1, 4, 0, 0, // Skip to: 757
/* 753 */     MCD::OPC_Decode, 215, 2, 3, // Opcode: MOD_rr_32
/* 757 */     MCD::OPC_FilterValue, 159, 1, 4, 0, 0, // Skip to: 767
/* 763 */     MCD::OPC_Decode, 214, 2, 4, // Opcode: MOD_rr
/* 767 */     MCD::OPC_FilterValue, 164, 1, 4, 0, 0, // Skip to: 777
/* 773 */     MCD::OPC_Decode, 146, 3, 0, // Opcode: XOR_ri_32
/* 777 */     MCD::OPC_FilterValue, 165, 1, 4, 0, 0, // Skip to: 787
/* 783 */     MCD::OPC_Decode, 190, 2, 5, // Opcode: JULT_ri
/* 787 */     MCD::OPC_FilterValue, 166, 1, 4, 0, 0, // Skip to: 797
/* 793 */     MCD::OPC_Decode, 191, 2, 6, // Opcode: JULT_ri_32
/* 797 */     MCD::OPC_FilterValue, 167, 1, 4, 0, 0, // Skip to: 807
/* 803 */     MCD::OPC_Decode, 145, 3, 2, // Opcode: XOR_ri
/* 807 */     MCD::OPC_FilterValue, 172, 1, 4, 0, 0, // Skip to: 817
/* 813 */     MCD::OPC_Decode, 148, 3, 3, // Opcode: XOR_rr_32
/* 817 */     MCD::OPC_FilterValue, 173, 1, 4, 0, 0, // Skip to: 827
/* 823 */     MCD::OPC_Decode, 192, 2, 9, // Opcode: JULT_rr
/* 827 */     MCD::OPC_FilterValue, 174, 1, 4, 0, 0, // Skip to: 837
/* 833 */     MCD::OPC_Decode, 193, 2, 10, // Opcode: JULT_rr_32
/* 837 */     MCD::OPC_FilterValue, 175, 1, 4, 0, 0, // Skip to: 847
/* 843 */     MCD::OPC_Decode, 147, 3, 4, // Opcode: XOR_rr
/* 847 */     MCD::OPC_FilterValue, 180, 1, 4, 0, 0, // Skip to: 857
/* 853 */     MCD::OPC_Decode, 218, 2, 19, // Opcode: MOV_ri_32
/* 857 */     MCD::OPC_FilterValue, 181, 1, 4, 0, 0, // Skip to: 867
/* 863 */     MCD::OPC_Decode, 186, 2, 5, // Opcode: JULE_ri
/* 867 */     MCD::OPC_FilterValue, 182, 1, 4, 0, 0, // Skip to: 877
/* 873 */     MCD::OPC_Decode, 187, 2, 6, // Opcode: JULE_ri_32
/* 877 */     MCD::OPC_FilterValue, 183, 1, 4, 0, 0, // Skip to: 887
/* 883 */     MCD::OPC_Decode, 217, 2, 7, // Opcode: MOV_ri
/* 887 */     MCD::OPC_FilterValue, 188, 1, 4, 0, 0, // Skip to: 897
/* 893 */     MCD::OPC_Decode, 220, 2, 20, // Opcode: MOV_rr_32
/* 897 */     MCD::OPC_FilterValue, 189, 1, 4, 0, 0, // Skip to: 907
/* 903 */     MCD::OPC_Decode, 188, 2, 9, // Opcode: JULE_rr
/* 907 */     MCD::OPC_FilterValue, 190, 1, 4, 0, 0, // Skip to: 917
/* 913 */     MCD::OPC_Decode, 189, 2, 10, // Opcode: JULE_rr_32
/* 917 */     MCD::OPC_FilterValue, 191, 1, 4, 0, 0, // Skip to: 927
/* 923 */     MCD::OPC_Decode, 219, 2, 21, // Opcode: MOV_rr
/* 927 */     MCD::OPC_FilterValue, 195, 1, 11, 0, 0, // Skip to: 944
/* 933 */     MCD::OPC_CheckField, 4, 4, 0, 61, 1, 0, // Skip to: 1257
/* 940 */     MCD::OPC_Decode, 129, 3, 22, // Opcode: XADDW
/* 944 */     MCD::OPC_FilterValue, 196, 1, 4, 0, 0, // Skip to: 954
/* 950 */     MCD::OPC_Decode, 238, 2, 0, // Opcode: SRA_ri_32
/* 954 */     MCD::OPC_FilterValue, 197, 1, 4, 0, 0, // Skip to: 964
/* 960 */     MCD::OPC_Decode, 174, 2, 5, // Opcode: JSLT_ri
/* 964 */     MCD::OPC_FilterValue, 198, 1, 4, 0, 0, // Skip to: 974
/* 970 */     MCD::OPC_Decode, 175, 2, 6, // Opcode: JSLT_ri_32
/* 974 */     MCD::OPC_FilterValue, 199, 1, 4, 0, 0, // Skip to: 984
/* 980 */     MCD::OPC_Decode, 237, 2, 2, // Opcode: SRA_ri
/* 984 */     MCD::OPC_FilterValue, 204, 1, 4, 0, 0, // Skip to: 994
/* 990 */     MCD::OPC_Decode, 240, 2, 3, // Opcode: SRA_rr_32
/* 994 */     MCD::OPC_FilterValue, 205, 1, 4, 0, 0, // Skip to: 1004
/* 1000 */    MCD::OPC_Decode, 176, 2, 9, // Opcode: JSLT_rr
/* 1004 */    MCD::OPC_FilterValue, 206, 1, 4, 0, 0, // Skip to: 1014
/* 1010 */    MCD::OPC_Decode, 177, 2, 10, // Opcode: JSLT_rr_32
/* 1014 */    MCD::OPC_FilterValue, 207, 1, 4, 0, 0, // Skip to: 1024
/* 1020 */    MCD::OPC_Decode, 239, 2, 4, // Opcode: SRA_rr
/* 1024 */    MCD::OPC_FilterValue, 212, 1, 30, 0, 0, // Skip to: 1060
/* 1030 */    MCD::OPC_ExtractField, 0, 32,  // Inst{31-0} ...
/* 1033 */    MCD::OPC_FilterValue, 16, 4, 0, 0, // Skip to: 1042
/* 1038 */    MCD::OPC_Decode, 209, 2, 16, // Opcode: LE16
/* 1042 */    MCD::OPC_FilterValue, 32, 4, 0, 0, // Skip to: 1051
/* 1047 */    MCD::OPC_Decode, 210, 2, 16, // Opcode: LE32
/* 1051 */    MCD::OPC_FilterValue, 64, 201, 0, 0, // Skip to: 1257
/* 1056 */    MCD::OPC_Decode, 211, 2, 16, // Opcode: LE64
/* 1060 */    MCD::OPC_FilterValue, 213, 1, 4, 0, 0, // Skip to: 1070
/* 1066 */    MCD::OPC_Decode, 170, 2, 5, // Opcode: JSLE_ri
/* 1070 */    MCD::OPC_FilterValue, 214, 1, 4, 0, 0, // Skip to: 1080
/* 1076 */    MCD::OPC_Decode, 171, 2, 6, // Opcode: JSLE_ri_32
/* 1080 */    MCD::OPC_FilterValue, 219, 1, 115, 0, 0, // Skip to: 1201
/* 1086 */    MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 1089 */    MCD::OPC_FilterValue, 0, 15, 0, 0, // Skip to: 1109
/* 1094 */    MCD::OPC_CheckField, 0, 4, 1, 4, 0, 0, // Skip to: 1105
/* 1101 */    MCD::OPC_Decode, 135, 3, 22, // Opcode: XFADDD
/* 1105 */    MCD::OPC_Decode, 128, 3, 22, // Opcode: XADDD
/* 1109 */    MCD::OPC_FilterValue, 4, 15, 0, 0, // Skip to: 1129
/* 1114 */    MCD::OPC_CheckField, 0, 4, 1, 4, 0, 0, // Skip to: 1125
/* 1121 */    MCD::OPC_Decode, 139, 3, 22, // Opcode: XFORD
/* 1125 */    MCD::OPC_Decode, 143, 3, 22, // Opcode: XORD
/* 1129 */    MCD::OPC_FilterValue, 5, 15, 0, 0, // Skip to: 1149
/* 1134 */    MCD::OPC_CheckField, 0, 4, 1, 4, 0, 0, // Skip to: 1145
/* 1141 */    MCD::OPC_Decode, 137, 3, 22, // Opcode: XFANDD
/* 1145 */    MCD::OPC_Decode, 131, 3, 22, // Opcode: XANDD
/* 1149 */    MCD::OPC_FilterValue, 10, 15, 0, 0, // Skip to: 1169
/* 1154 */    MCD::OPC_CheckField, 0, 4, 1, 4, 0, 0, // Skip to: 1165
/* 1161 */    MCD::OPC_Decode, 141, 3, 22, // Opcode: XFXORD
/* 1165 */    MCD::OPC_Decode, 149, 3, 22, // Opcode: XXORD
/* 1169 */    MCD::OPC_FilterValue, 14, 11, 0, 0, // Skip to: 1185
/* 1174 */    MCD::OPC_CheckField, 0, 4, 1, 76, 0, 0, // Skip to: 1257
/* 1181 */    MCD::OPC_Decode, 133, 3, 22, // Opcode: XCHGD
/* 1185 */    MCD::OPC_FilterValue, 15, 67, 0, 0, // Skip to: 1257
/* 1190 */    MCD::OPC_CheckField, 0, 4, 1, 60, 0, 0, // Skip to: 1257
/* 1197 */    MCD::OPC_Decode, 142, 2, 23, // Opcode: CMPXCHGD
/* 1201 */    MCD::OPC_FilterValue, 220, 1, 30, 0, 0, // Skip to: 1237
/* 1207 */    MCD::OPC_ExtractField, 0, 32,  // Inst{31-0} ...
/* 1210 */    MCD::OPC_FilterValue, 16, 4, 0, 0, // Skip to: 1219
/* 1215 */    MCD::OPC_Decode, 139, 2, 16, // Opcode: BE16
/* 1219 */    MCD::OPC_FilterValue, 32, 4, 0, 0, // Skip to: 1228
/* 1224 */    MCD::OPC_Decode, 140, 2, 16, // Opcode: BE32
/* 1228 */    MCD::OPC_FilterValue, 64, 24, 0, 0, // Skip to: 1257
/* 1233 */    MCD::OPC_Decode, 141, 2, 16, // Opcode: BE64
/* 1237 */    MCD::OPC_FilterValue, 221, 1, 4, 0, 0, // Skip to: 1247
/* 1243 */    MCD::OPC_Decode, 172, 2, 9, // Opcode: JSLE_rr
/* 1247 */    MCD::OPC_FilterValue, 222, 1, 4, 0, 0, // Skip to: 1257
/* 1253 */    MCD::OPC_Decode, 173, 2, 10, // Opcode: JSLE_rr_32
/* 1257 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableBPFALU3264[] = {
/* 0 */       MCD::OPC_ExtractField, 56, 8,  // Inst{63-56} ...
/* 3 */       MCD::OPC_FilterValue, 97, 4, 0, 0, // Skip to: 12
/* 8 */       MCD::OPC_Decode, 200, 2, 24, // Opcode: LDW32
/* 12 */      MCD::OPC_FilterValue, 99, 4, 0, 0, // Skip to: 21
/* 17 */      MCD::OPC_Decode, 251, 2, 25, // Opcode: STW32
/* 21 */      MCD::OPC_FilterValue, 105, 4, 0, 0, // Skip to: 30
/* 26 */      MCD::OPC_Decode, 198, 2, 24, // Opcode: LDH32
/* 30 */      MCD::OPC_FilterValue, 107, 4, 0, 0, // Skip to: 39
/* 35 */      MCD::OPC_Decode, 249, 2, 25, // Opcode: STH32
/* 39 */      MCD::OPC_FilterValue, 113, 4, 0, 0, // Skip to: 48
/* 44 */      MCD::OPC_Decode, 195, 2, 24, // Opcode: LDB32
/* 48 */      MCD::OPC_FilterValue, 115, 4, 0, 0, // Skip to: 57
/* 53 */      MCD::OPC_Decode, 246, 2, 25, // Opcode: STB32
/* 57 */      MCD::OPC_FilterValue, 195, 1, 115, 0, 0, // Skip to: 178
/* 63 */      MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 66 */      MCD::OPC_FilterValue, 0, 15, 0, 0, // Skip to: 86
/* 71 */      MCD::OPC_CheckField, 0, 4, 1, 4, 0, 0, // Skip to: 82
/* 78 */      MCD::OPC_Decode, 136, 3, 26, // Opcode: XFADDW32
/* 82 */      MCD::OPC_Decode, 130, 3, 26, // Opcode: XADDW32
/* 86 */      MCD::OPC_FilterValue, 4, 15, 0, 0, // Skip to: 106
/* 91 */      MCD::OPC_CheckField, 0, 4, 1, 4, 0, 0, // Skip to: 102
/* 98 */      MCD::OPC_Decode, 140, 3, 26, // Opcode: XFORW32
/* 102 */     MCD::OPC_Decode, 144, 3, 26, // Opcode: XORW32
/* 106 */     MCD::OPC_FilterValue, 5, 15, 0, 0, // Skip to: 126
/* 111 */     MCD::OPC_CheckField, 0, 4, 1, 4, 0, 0, // Skip to: 122
/* 118 */     MCD::OPC_Decode, 138, 3, 26, // Opcode: XFANDW32
/* 122 */     MCD::OPC_Decode, 132, 3, 26, // Opcode: XANDW32
/* 126 */     MCD::OPC_FilterValue, 10, 15, 0, 0, // Skip to: 146
/* 131 */     MCD::OPC_CheckField, 0, 4, 1, 4, 0, 0, // Skip to: 142
/* 138 */     MCD::OPC_Decode, 142, 3, 26, // Opcode: XFXORW32
/* 142 */     MCD::OPC_Decode, 150, 3, 26, // Opcode: XXORW32
/* 146 */     MCD::OPC_FilterValue, 14, 11, 0, 0, // Skip to: 162
/* 151 */     MCD::OPC_CheckField, 0, 4, 1, 20, 0, 0, // Skip to: 178
/* 158 */     MCD::OPC_Decode, 134, 3, 26, // Opcode: XCHGW32
/* 162 */     MCD::OPC_FilterValue, 15, 11, 0, 0, // Skip to: 178
/* 167 */     MCD::OPC_CheckField, 0, 4, 1, 4, 0, 0, // Skip to: 178
/* 174 */     MCD::OPC_Decode, 143, 2, 27, // Opcode: CMPXCHGW32
/* 178 */     MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset &Bits) {
  llvm_unreachable("Invalid index!");
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
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 32, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 32, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 32, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 32, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 32, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    insertBits(tmp, fieldFromInstruction(insn, 32, 16), 0, 16);
    insertBits(tmp, fieldFromInstruction(insn, 52, 4), 16, 4);
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 32, 20);
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 0, 32);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 18:
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 32, 20);
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 32, 20);
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    insertBits(tmp, fieldFromInstruction(insn, 32, 16), 0, 16);
    insertBits(tmp, fieldFromInstruction(insn, 52, 4), 16, 4);
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 32, 20);
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 32, 20);
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 32, 20);
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
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
