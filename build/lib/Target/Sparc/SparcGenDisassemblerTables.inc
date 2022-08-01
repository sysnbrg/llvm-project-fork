/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * Sparc Disassembler                                                      *|
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

static const uint8_t DecoderTableSparc32[] = {
/* 0 */       MCD::OPC_ExtractField, 30, 2,  // Inst{31-30} ...
/* 3 */       MCD::OPC_FilterValue, 0, 155, 2, 0, // Skip to: 675
/* 8 */       MCD::OPC_ExtractField, 22, 3,  // Inst{24-22} ...
/* 11 */      MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 27
/* 16 */      MCD::OPC_CheckField, 25, 5, 0, 97, 31, 0, // Skip to: 8056
/* 23 */      MCD::OPC_Decode, 242, 5, 0, // Opcode: UNIMP
/* 27 */      MCD::OPC_FilterValue, 1, 127, 0, 0, // Skip to: 159
/* 32 */      MCD::OPC_ExtractField, 19, 3,  // Inst{21-19} ...
/* 35 */      MCD::OPC_FilterValue, 0, 31, 0, 0, // Skip to: 71
/* 40 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 43 */      MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 57
/* 48 */      MCD::OPC_CheckPredicate, 0, 67, 31, 0, // Skip to: 8056
/* 53 */      MCD::OPC_Decode, 184, 2, 1, // Opcode: BPICCNT
/* 57 */      MCD::OPC_FilterValue, 1, 58, 31, 0, // Skip to: 8056
/* 62 */      MCD::OPC_CheckPredicate, 0, 53, 31, 0, // Skip to: 8056
/* 67 */      MCD::OPC_Decode, 183, 2, 1, // Opcode: BPICCANT
/* 71 */      MCD::OPC_FilterValue, 1, 31, 0, 0, // Skip to: 107
/* 76 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 79 */      MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 93
/* 84 */      MCD::OPC_CheckPredicate, 0, 31, 31, 0, // Skip to: 8056
/* 89 */      MCD::OPC_Decode, 181, 2, 1, // Opcode: BPICC
/* 93 */      MCD::OPC_FilterValue, 1, 22, 31, 0, // Skip to: 8056
/* 98 */      MCD::OPC_CheckPredicate, 0, 17, 31, 0, // Skip to: 8056
/* 103 */     MCD::OPC_Decode, 182, 2, 1, // Opcode: BPICCA
/* 107 */     MCD::OPC_FilterValue, 4, 21, 0, 0, // Skip to: 133
/* 112 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 115 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 124
/* 120 */     MCD::OPC_Decode, 200, 2, 1, // Opcode: BPXCCNT
/* 124 */     MCD::OPC_FilterValue, 1, 247, 30, 0, // Skip to: 8056
/* 129 */     MCD::OPC_Decode, 199, 2, 1, // Opcode: BPXCCANT
/* 133 */     MCD::OPC_FilterValue, 5, 238, 30, 0, // Skip to: 8056
/* 138 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 141 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 150
/* 146 */     MCD::OPC_Decode, 197, 2, 1, // Opcode: BPXCC
/* 150 */     MCD::OPC_FilterValue, 1, 221, 30, 0, // Skip to: 8056
/* 155 */     MCD::OPC_Decode, 198, 2, 1, // Opcode: BPXCCA
/* 159 */     MCD::OPC_FilterValue, 2, 32, 0, 0, // Skip to: 196
/* 164 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 167 */     MCD::OPC_FilterValue, 0, 15, 0, 0, // Skip to: 187
/* 172 */     MCD::OPC_CheckField, 25, 4, 8, 4, 0, 0, // Skip to: 183
/* 179 */     MCD::OPC_Decode, 163, 2, 0, // Opcode: BA
/* 183 */     MCD::OPC_Decode, 164, 2, 2, // Opcode: BCOND
/* 187 */     MCD::OPC_FilterValue, 1, 184, 30, 0, // Skip to: 8056
/* 192 */     MCD::OPC_Decode, 165, 2, 2, // Opcode: BCONDA
/* 196 */     MCD::OPC_FilterValue, 3, 59, 1, 0, // Skip to: 516
/* 201 */     MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 204 */     MCD::OPC_FilterValue, 1, 21, 0, 0, // Skip to: 230
/* 209 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 212 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 221
/* 217 */     MCD::OPC_Decode, 203, 2, 3, // Opcode: BPZnapn
/* 221 */     MCD::OPC_FilterValue, 1, 150, 30, 0, // Skip to: 8056
/* 226 */     MCD::OPC_Decode, 204, 2, 3, // Opcode: BPZnapt
/* 230 */     MCD::OPC_FilterValue, 2, 21, 0, 0, // Skip to: 256
/* 235 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 238 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 247
/* 243 */     MCD::OPC_Decode, 187, 2, 3, // Opcode: BPLEZnapn
/* 247 */     MCD::OPC_FilterValue, 1, 124, 30, 0, // Skip to: 8056
/* 252 */     MCD::OPC_Decode, 188, 2, 3, // Opcode: BPLEZnapt
/* 256 */     MCD::OPC_FilterValue, 3, 21, 0, 0, // Skip to: 282
/* 261 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 264 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 273
/* 269 */     MCD::OPC_Decode, 191, 2, 3, // Opcode: BPLZnapn
/* 273 */     MCD::OPC_FilterValue, 1, 98, 30, 0, // Skip to: 8056
/* 278 */     MCD::OPC_Decode, 192, 2, 3, // Opcode: BPLZnapt
/* 282 */     MCD::OPC_FilterValue, 5, 21, 0, 0, // Skip to: 308
/* 287 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 290 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 299
/* 295 */     MCD::OPC_Decode, 195, 2, 3, // Opcode: BPNZnapn
/* 299 */     MCD::OPC_FilterValue, 1, 72, 30, 0, // Skip to: 8056
/* 304 */     MCD::OPC_Decode, 196, 2, 3, // Opcode: BPNZnapt
/* 308 */     MCD::OPC_FilterValue, 6, 21, 0, 0, // Skip to: 334
/* 313 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 316 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 325
/* 321 */     MCD::OPC_Decode, 179, 2, 3, // Opcode: BPGZnapn
/* 325 */     MCD::OPC_FilterValue, 1, 46, 30, 0, // Skip to: 8056
/* 330 */     MCD::OPC_Decode, 180, 2, 3, // Opcode: BPGZnapt
/* 334 */     MCD::OPC_FilterValue, 7, 21, 0, 0, // Skip to: 360
/* 339 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 342 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 351
/* 347 */     MCD::OPC_Decode, 175, 2, 3, // Opcode: BPGEZnapn
/* 351 */     MCD::OPC_FilterValue, 1, 20, 30, 0, // Skip to: 8056
/* 356 */     MCD::OPC_Decode, 176, 2, 3, // Opcode: BPGEZnapt
/* 360 */     MCD::OPC_FilterValue, 17, 21, 0, 0, // Skip to: 386
/* 365 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 368 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 377
/* 373 */     MCD::OPC_Decode, 201, 2, 3, // Opcode: BPZapn
/* 377 */     MCD::OPC_FilterValue, 1, 250, 29, 0, // Skip to: 8056
/* 382 */     MCD::OPC_Decode, 202, 2, 3, // Opcode: BPZapt
/* 386 */     MCD::OPC_FilterValue, 18, 21, 0, 0, // Skip to: 412
/* 391 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 394 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 403
/* 399 */     MCD::OPC_Decode, 185, 2, 3, // Opcode: BPLEZapn
/* 403 */     MCD::OPC_FilterValue, 1, 224, 29, 0, // Skip to: 8056
/* 408 */     MCD::OPC_Decode, 186, 2, 3, // Opcode: BPLEZapt
/* 412 */     MCD::OPC_FilterValue, 19, 21, 0, 0, // Skip to: 438
/* 417 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 420 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 429
/* 425 */     MCD::OPC_Decode, 189, 2, 3, // Opcode: BPLZapn
/* 429 */     MCD::OPC_FilterValue, 1, 198, 29, 0, // Skip to: 8056
/* 434 */     MCD::OPC_Decode, 190, 2, 3, // Opcode: BPLZapt
/* 438 */     MCD::OPC_FilterValue, 21, 21, 0, 0, // Skip to: 464
/* 443 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 446 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 455
/* 451 */     MCD::OPC_Decode, 193, 2, 3, // Opcode: BPNZapn
/* 455 */     MCD::OPC_FilterValue, 1, 172, 29, 0, // Skip to: 8056
/* 460 */     MCD::OPC_Decode, 194, 2, 3, // Opcode: BPNZapt
/* 464 */     MCD::OPC_FilterValue, 22, 21, 0, 0, // Skip to: 490
/* 469 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 472 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 481
/* 477 */     MCD::OPC_Decode, 177, 2, 3, // Opcode: BPGZapn
/* 481 */     MCD::OPC_FilterValue, 1, 146, 29, 0, // Skip to: 8056
/* 486 */     MCD::OPC_Decode, 178, 2, 3, // Opcode: BPGZapt
/* 490 */     MCD::OPC_FilterValue, 23, 137, 29, 0, // Skip to: 8056
/* 495 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 498 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 507
/* 503 */     MCD::OPC_Decode, 173, 2, 3, // Opcode: BPGEZapn
/* 507 */     MCD::OPC_FilterValue, 1, 120, 29, 0, // Skip to: 8056
/* 512 */     MCD::OPC_Decode, 174, 2, 3, // Opcode: BPGEZapt
/* 516 */     MCD::OPC_FilterValue, 4, 22, 0, 0, // Skip to: 543
/* 521 */     MCD::OPC_CheckField, 25, 5, 0, 11, 0, 0, // Skip to: 539
/* 528 */     MCD::OPC_CheckField, 0, 22, 0, 4, 0, 0, // Skip to: 539
/* 535 */     MCD::OPC_Decode, 220, 4, 4, // Opcode: NOP
/* 539 */     MCD::OPC_Decode, 132, 5, 5, // Opcode: SETHIi
/* 543 */     MCD::OPC_FilterValue, 5, 75, 0, 0, // Skip to: 623
/* 548 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 551 */     MCD::OPC_FilterValue, 0, 31, 0, 0, // Skip to: 587
/* 556 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 559 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 573
/* 564 */     MCD::OPC_CheckPredicate, 0, 63, 29, 0, // Skip to: 8056
/* 569 */     MCD::OPC_Decode, 172, 2, 6, // Opcode: BPFCCNT
/* 573 */     MCD::OPC_FilterValue, 1, 54, 29, 0, // Skip to: 8056
/* 578 */     MCD::OPC_CheckPredicate, 0, 49, 29, 0, // Skip to: 8056
/* 583 */     MCD::OPC_Decode, 171, 2, 6, // Opcode: BPFCCANT
/* 587 */     MCD::OPC_FilterValue, 1, 40, 29, 0, // Skip to: 8056
/* 592 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 595 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 609
/* 600 */     MCD::OPC_CheckPredicate, 0, 27, 29, 0, // Skip to: 8056
/* 605 */     MCD::OPC_Decode, 169, 2, 6, // Opcode: BPFCC
/* 609 */     MCD::OPC_FilterValue, 1, 18, 29, 0, // Skip to: 8056
/* 614 */     MCD::OPC_CheckPredicate, 0, 13, 29, 0, // Skip to: 8056
/* 619 */     MCD::OPC_Decode, 170, 2, 6, // Opcode: BPFCCA
/* 623 */     MCD::OPC_FilterValue, 6, 21, 0, 0, // Skip to: 649
/* 628 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 631 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 640
/* 636 */     MCD::OPC_Decode, 245, 2, 2, // Opcode: FBCOND
/* 640 */     MCD::OPC_FilterValue, 1, 243, 28, 0, // Skip to: 8056
/* 645 */     MCD::OPC_Decode, 246, 2, 2, // Opcode: FBCONDA
/* 649 */     MCD::OPC_FilterValue, 7, 234, 28, 0, // Skip to: 8056
/* 654 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 657 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 666
/* 662 */     MCD::OPC_Decode, 213, 2, 2, // Opcode: CBCOND
/* 666 */     MCD::OPC_FilterValue, 1, 217, 28, 0, // Skip to: 8056
/* 671 */     MCD::OPC_Decode, 214, 2, 2, // Opcode: CBCONDA
/* 675 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 684
/* 680 */     MCD::OPC_Decode, 206, 2, 7, // Opcode: CALL
/* 684 */     MCD::OPC_FilterValue, 2, 188, 22, 0, // Skip to: 6509
/* 689 */     MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 692 */     MCD::OPC_FilterValue, 0, 28, 0, 0, // Skip to: 725
/* 697 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 700 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 716
/* 705 */     MCD::OPC_CheckField, 5, 8, 0, 176, 28, 0, // Skip to: 8056
/* 712 */     MCD::OPC_Decode, 146, 2, 8, // Opcode: ADDrr
/* 716 */     MCD::OPC_FilterValue, 1, 167, 28, 0, // Skip to: 8056
/* 721 */     MCD::OPC_Decode, 145, 2, 9, // Opcode: ADDri
/* 725 */     MCD::OPC_FilterValue, 1, 28, 0, 0, // Skip to: 758
/* 730 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 733 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 749
/* 738 */     MCD::OPC_CheckField, 5, 8, 0, 143, 28, 0, // Skip to: 8056
/* 745 */     MCD::OPC_Decode, 159, 2, 8, // Opcode: ANDrr
/* 749 */     MCD::OPC_FilterValue, 1, 134, 28, 0, // Skip to: 8056
/* 754 */     MCD::OPC_Decode, 158, 2, 9, // Opcode: ANDri
/* 758 */     MCD::OPC_FilterValue, 2, 28, 0, 0, // Skip to: 791
/* 763 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 766 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 782
/* 771 */     MCD::OPC_CheckField, 5, 8, 0, 110, 28, 0, // Skip to: 8056
/* 778 */     MCD::OPC_Decode, 231, 4, 8, // Opcode: ORrr
/* 782 */     MCD::OPC_FilterValue, 1, 101, 28, 0, // Skip to: 8056
/* 787 */     MCD::OPC_Decode, 230, 4, 9, // Opcode: ORri
/* 791 */     MCD::OPC_FilterValue, 3, 28, 0, 0, // Skip to: 824
/* 796 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 799 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 815
/* 804 */     MCD::OPC_CheckField, 5, 8, 0, 77, 28, 0, // Skip to: 8056
/* 811 */     MCD::OPC_Decode, 148, 6, 8, // Opcode: XORrr
/* 815 */     MCD::OPC_FilterValue, 1, 68, 28, 0, // Skip to: 8056
/* 820 */     MCD::OPC_Decode, 147, 6, 9, // Opcode: XORri
/* 824 */     MCD::OPC_FilterValue, 4, 28, 0, 0, // Skip to: 857
/* 829 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 832 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 848
/* 837 */     MCD::OPC_CheckField, 5, 8, 0, 44, 28, 0, // Skip to: 8056
/* 844 */     MCD::OPC_Decode, 201, 5, 8, // Opcode: SUBrr
/* 848 */     MCD::OPC_FilterValue, 1, 35, 28, 0, // Skip to: 8056
/* 853 */     MCD::OPC_Decode, 200, 5, 9, // Opcode: SUBri
/* 857 */     MCD::OPC_FilterValue, 5, 28, 0, 0, // Skip to: 890
/* 862 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 865 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 881
/* 870 */     MCD::OPC_CheckField, 5, 8, 0, 11, 28, 0, // Skip to: 8056
/* 877 */     MCD::OPC_Decode, 154, 2, 8, // Opcode: ANDNrr
/* 881 */     MCD::OPC_FilterValue, 1, 2, 28, 0, // Skip to: 8056
/* 886 */     MCD::OPC_Decode, 153, 2, 9, // Opcode: ANDNri
/* 890 */     MCD::OPC_FilterValue, 6, 28, 0, 0, // Skip to: 923
/* 895 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 898 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 914
/* 903 */     MCD::OPC_CheckField, 5, 8, 0, 234, 27, 0, // Skip to: 8056
/* 910 */     MCD::OPC_Decode, 226, 4, 8, // Opcode: ORNrr
/* 914 */     MCD::OPC_FilterValue, 1, 225, 27, 0, // Skip to: 8056
/* 919 */     MCD::OPC_Decode, 225, 4, 9, // Opcode: ORNri
/* 923 */     MCD::OPC_FilterValue, 7, 28, 0, 0, // Skip to: 956
/* 928 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 931 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 947
/* 936 */     MCD::OPC_CheckField, 5, 8, 0, 201, 27, 0, // Skip to: 8056
/* 943 */     MCD::OPC_Decode, 142, 6, 8, // Opcode: XNORrr
/* 947 */     MCD::OPC_FilterValue, 1, 192, 27, 0, // Skip to: 8056
/* 952 */     MCD::OPC_Decode, 141, 6, 9, // Opcode: XNORri
/* 956 */     MCD::OPC_FilterValue, 8, 28, 0, 0, // Skip to: 989
/* 961 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 964 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 980
/* 969 */     MCD::OPC_CheckField, 5, 8, 0, 168, 27, 0, // Skip to: 8056
/* 976 */     MCD::OPC_Decode, 138, 2, 8, // Opcode: ADDCrr
/* 980 */     MCD::OPC_FilterValue, 1, 159, 27, 0, // Skip to: 8056
/* 985 */     MCD::OPC_Decode, 137, 2, 9, // Opcode: ADDCri
/* 989 */     MCD::OPC_FilterValue, 9, 28, 0, 0, // Skip to: 1022
/* 994 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 997 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1013
/* 1002 */    MCD::OPC_CheckField, 5, 8, 0, 135, 27, 0, // Skip to: 8056
/* 1009 */    MCD::OPC_Decode, 219, 4, 10, // Opcode: MULXrr
/* 1013 */    MCD::OPC_FilterValue, 1, 126, 27, 0, // Skip to: 8056
/* 1018 */    MCD::OPC_Decode, 218, 4, 11, // Opcode: MULXri
/* 1022 */    MCD::OPC_FilterValue, 10, 28, 0, 0, // Skip to: 1055
/* 1027 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1030 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1046
/* 1035 */    MCD::OPC_CheckField, 5, 8, 0, 102, 27, 0, // Skip to: 8056
/* 1042 */    MCD::OPC_Decode, 241, 5, 8, // Opcode: UMULrr
/* 1046 */    MCD::OPC_FilterValue, 1, 93, 27, 0, // Skip to: 8056
/* 1051 */    MCD::OPC_Decode, 240, 5, 9, // Opcode: UMULri
/* 1055 */    MCD::OPC_FilterValue, 11, 28, 0, 0, // Skip to: 1088
/* 1060 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1063 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1079
/* 1068 */    MCD::OPC_CheckField, 5, 8, 0, 69, 27, 0, // Skip to: 8056
/* 1075 */    MCD::OPC_Decode, 145, 5, 8, // Opcode: SMULrr
/* 1079 */    MCD::OPC_FilterValue, 1, 60, 27, 0, // Skip to: 8056
/* 1084 */    MCD::OPC_Decode, 144, 5, 9, // Opcode: SMULri
/* 1088 */    MCD::OPC_FilterValue, 12, 28, 0, 0, // Skip to: 1121
/* 1093 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1096 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1112
/* 1101 */    MCD::OPC_CheckField, 5, 8, 0, 36, 27, 0, // Skip to: 8056
/* 1108 */    MCD::OPC_Decode, 195, 5, 8, // Opcode: SUBCrr
/* 1112 */    MCD::OPC_FilterValue, 1, 27, 27, 0, // Skip to: 8056
/* 1117 */    MCD::OPC_Decode, 194, 5, 9, // Opcode: SUBCri
/* 1121 */    MCD::OPC_FilterValue, 13, 28, 0, 0, // Skip to: 1154
/* 1126 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1129 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1145
/* 1134 */    MCD::OPC_CheckField, 5, 8, 0, 3, 27, 0, // Skip to: 8056
/* 1141 */    MCD::OPC_Decode, 232, 5, 10, // Opcode: UDIVXrr
/* 1145 */    MCD::OPC_FilterValue, 1, 250, 26, 0, // Skip to: 8056
/* 1150 */    MCD::OPC_Decode, 231, 5, 11, // Opcode: UDIVXri
/* 1154 */    MCD::OPC_FilterValue, 14, 28, 0, 0, // Skip to: 1187
/* 1159 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1162 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1178
/* 1167 */    MCD::OPC_CheckField, 5, 8, 0, 226, 26, 0, // Skip to: 8056
/* 1174 */    MCD::OPC_Decode, 234, 5, 8, // Opcode: UDIVrr
/* 1178 */    MCD::OPC_FilterValue, 1, 217, 26, 0, // Skip to: 8056
/* 1183 */    MCD::OPC_Decode, 233, 5, 9, // Opcode: UDIVri
/* 1187 */    MCD::OPC_FilterValue, 15, 28, 0, 0, // Skip to: 1220
/* 1192 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1195 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1211
/* 1200 */    MCD::OPC_CheckField, 5, 8, 0, 193, 26, 0, // Skip to: 8056
/* 1207 */    MCD::OPC_Decode, 130, 5, 8, // Opcode: SDIVrr
/* 1211 */    MCD::OPC_FilterValue, 1, 184, 26, 0, // Skip to: 8056
/* 1216 */    MCD::OPC_Decode, 129, 5, 9, // Opcode: SDIVri
/* 1220 */    MCD::OPC_FilterValue, 16, 28, 0, 0, // Skip to: 1253
/* 1225 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1228 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1244
/* 1233 */    MCD::OPC_CheckField, 5, 8, 0, 160, 26, 0, // Skip to: 8056
/* 1240 */    MCD::OPC_Decode, 136, 2, 8, // Opcode: ADDCCrr
/* 1244 */    MCD::OPC_FilterValue, 1, 151, 26, 0, // Skip to: 8056
/* 1249 */    MCD::OPC_Decode, 135, 2, 9, // Opcode: ADDCCri
/* 1253 */    MCD::OPC_FilterValue, 17, 28, 0, 0, // Skip to: 1286
/* 1258 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1261 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1277
/* 1266 */    MCD::OPC_CheckField, 5, 8, 0, 127, 26, 0, // Skip to: 8056
/* 1273 */    MCD::OPC_Decode, 150, 2, 8, // Opcode: ANDCCrr
/* 1277 */    MCD::OPC_FilterValue, 1, 118, 26, 0, // Skip to: 8056
/* 1282 */    MCD::OPC_Decode, 149, 2, 9, // Opcode: ANDCCri
/* 1286 */    MCD::OPC_FilterValue, 18, 28, 0, 0, // Skip to: 1319
/* 1291 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1294 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1310
/* 1299 */    MCD::OPC_CheckField, 5, 8, 0, 94, 26, 0, // Skip to: 8056
/* 1306 */    MCD::OPC_Decode, 222, 4, 8, // Opcode: ORCCrr
/* 1310 */    MCD::OPC_FilterValue, 1, 85, 26, 0, // Skip to: 8056
/* 1315 */    MCD::OPC_Decode, 221, 4, 9, // Opcode: ORCCri
/* 1319 */    MCD::OPC_FilterValue, 19, 28, 0, 0, // Skip to: 1352
/* 1324 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1327 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1343
/* 1332 */    MCD::OPC_CheckField, 5, 8, 0, 61, 26, 0, // Skip to: 8056
/* 1339 */    MCD::OPC_Decode, 144, 6, 8, // Opcode: XORCCrr
/* 1343 */    MCD::OPC_FilterValue, 1, 52, 26, 0, // Skip to: 8056
/* 1348 */    MCD::OPC_Decode, 143, 6, 9, // Opcode: XORCCri
/* 1352 */    MCD::OPC_FilterValue, 20, 51, 0, 0, // Skip to: 1408
/* 1357 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1360 */    MCD::OPC_FilterValue, 0, 23, 0, 0, // Skip to: 1388
/* 1365 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 1368 */    MCD::OPC_FilterValue, 0, 27, 26, 0, // Skip to: 8056
/* 1373 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 1384
/* 1380 */    MCD::OPC_Decode, 219, 2, 12, // Opcode: CMPrr
/* 1384 */    MCD::OPC_Decode, 193, 5, 8, // Opcode: SUBCCrr
/* 1388 */    MCD::OPC_FilterValue, 1, 7, 26, 0, // Skip to: 8056
/* 1393 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 1404
/* 1400 */    MCD::OPC_Decode, 218, 2, 13, // Opcode: CMPri
/* 1404 */    MCD::OPC_Decode, 192, 5, 9, // Opcode: SUBCCri
/* 1408 */    MCD::OPC_FilterValue, 21, 28, 0, 0, // Skip to: 1441
/* 1413 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1416 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1432
/* 1421 */    MCD::OPC_CheckField, 5, 8, 0, 228, 25, 0, // Skip to: 8056
/* 1428 */    MCD::OPC_Decode, 152, 2, 8, // Opcode: ANDNCCrr
/* 1432 */    MCD::OPC_FilterValue, 1, 219, 25, 0, // Skip to: 8056
/* 1437 */    MCD::OPC_Decode, 151, 2, 9, // Opcode: ANDNCCri
/* 1441 */    MCD::OPC_FilterValue, 22, 28, 0, 0, // Skip to: 1474
/* 1446 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1449 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1465
/* 1454 */    MCD::OPC_CheckField, 5, 8, 0, 195, 25, 0, // Skip to: 8056
/* 1461 */    MCD::OPC_Decode, 224, 4, 8, // Opcode: ORNCCrr
/* 1465 */    MCD::OPC_FilterValue, 1, 186, 25, 0, // Skip to: 8056
/* 1470 */    MCD::OPC_Decode, 223, 4, 9, // Opcode: ORNCCri
/* 1474 */    MCD::OPC_FilterValue, 23, 28, 0, 0, // Skip to: 1507
/* 1479 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1482 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1498
/* 1487 */    MCD::OPC_CheckField, 5, 8, 0, 162, 25, 0, // Skip to: 8056
/* 1494 */    MCD::OPC_Decode, 139, 6, 8, // Opcode: XNORCCrr
/* 1498 */    MCD::OPC_FilterValue, 1, 153, 25, 0, // Skip to: 8056
/* 1503 */    MCD::OPC_Decode, 138, 6, 9, // Opcode: XNORCCri
/* 1507 */    MCD::OPC_FilterValue, 24, 28, 0, 0, // Skip to: 1540
/* 1512 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1515 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1531
/* 1520 */    MCD::OPC_CheckField, 5, 8, 0, 129, 25, 0, // Skip to: 8056
/* 1527 */    MCD::OPC_Decode, 140, 2, 8, // Opcode: ADDErr
/* 1531 */    MCD::OPC_FilterValue, 1, 120, 25, 0, // Skip to: 8056
/* 1536 */    MCD::OPC_Decode, 139, 2, 9, // Opcode: ADDEri
/* 1540 */    MCD::OPC_FilterValue, 26, 28, 0, 0, // Skip to: 1573
/* 1545 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1548 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1564
/* 1553 */    MCD::OPC_CheckField, 5, 8, 0, 96, 25, 0, // Skip to: 8056
/* 1560 */    MCD::OPC_Decode, 238, 5, 8, // Opcode: UMULCCrr
/* 1564 */    MCD::OPC_FilterValue, 1, 87, 25, 0, // Skip to: 8056
/* 1569 */    MCD::OPC_Decode, 237, 5, 9, // Opcode: UMULCCri
/* 1573 */    MCD::OPC_FilterValue, 27, 28, 0, 0, // Skip to: 1606
/* 1578 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1581 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1597
/* 1586 */    MCD::OPC_CheckField, 5, 8, 0, 63, 25, 0, // Skip to: 8056
/* 1593 */    MCD::OPC_Decode, 143, 5, 8, // Opcode: SMULCCrr
/* 1597 */    MCD::OPC_FilterValue, 1, 54, 25, 0, // Skip to: 8056
/* 1602 */    MCD::OPC_Decode, 142, 5, 9, // Opcode: SMULCCri
/* 1606 */    MCD::OPC_FilterValue, 28, 28, 0, 0, // Skip to: 1639
/* 1611 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1614 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1630
/* 1619 */    MCD::OPC_CheckField, 5, 8, 0, 30, 25, 0, // Skip to: 8056
/* 1626 */    MCD::OPC_Decode, 197, 5, 8, // Opcode: SUBErr
/* 1630 */    MCD::OPC_FilterValue, 1, 21, 25, 0, // Skip to: 8056
/* 1635 */    MCD::OPC_Decode, 196, 5, 9, // Opcode: SUBEri
/* 1639 */    MCD::OPC_FilterValue, 30, 28, 0, 0, // Skip to: 1672
/* 1644 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1647 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1663
/* 1652 */    MCD::OPC_CheckField, 5, 8, 0, 253, 24, 0, // Skip to: 8056
/* 1659 */    MCD::OPC_Decode, 230, 5, 8, // Opcode: UDIVCCrr
/* 1663 */    MCD::OPC_FilterValue, 1, 244, 24, 0, // Skip to: 8056
/* 1668 */    MCD::OPC_Decode, 229, 5, 9, // Opcode: UDIVCCri
/* 1672 */    MCD::OPC_FilterValue, 31, 28, 0, 0, // Skip to: 1705
/* 1677 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1680 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1696
/* 1685 */    MCD::OPC_CheckField, 5, 8, 0, 220, 24, 0, // Skip to: 8056
/* 1692 */    MCD::OPC_Decode, 254, 4, 8, // Opcode: SDIVCCrr
/* 1696 */    MCD::OPC_FilterValue, 1, 211, 24, 0, // Skip to: 8056
/* 1701 */    MCD::OPC_Decode, 253, 4, 9, // Opcode: SDIVCCri
/* 1705 */    MCD::OPC_FilterValue, 32, 28, 0, 0, // Skip to: 1738
/* 1710 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1713 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1729
/* 1718 */    MCD::OPC_CheckField, 5, 8, 0, 187, 24, 0, // Skip to: 8056
/* 1725 */    MCD::OPC_Decode, 211, 5, 8, // Opcode: TADDCCrr
/* 1729 */    MCD::OPC_FilterValue, 1, 178, 24, 0, // Skip to: 8056
/* 1734 */    MCD::OPC_Decode, 210, 5, 9, // Opcode: TADDCCri
/* 1738 */    MCD::OPC_FilterValue, 33, 28, 0, 0, // Skip to: 1771
/* 1743 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1746 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1762
/* 1751 */    MCD::OPC_CheckField, 5, 8, 0, 154, 24, 0, // Skip to: 8056
/* 1758 */    MCD::OPC_Decode, 226, 5, 8, // Opcode: TSUBCCrr
/* 1762 */    MCD::OPC_FilterValue, 1, 145, 24, 0, // Skip to: 8056
/* 1767 */    MCD::OPC_Decode, 225, 5, 9, // Opcode: TSUBCCri
/* 1771 */    MCD::OPC_FilterValue, 34, 28, 0, 0, // Skip to: 1804
/* 1776 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1779 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1795
/* 1784 */    MCD::OPC_CheckField, 5, 8, 0, 121, 24, 0, // Skip to: 8056
/* 1791 */    MCD::OPC_Decode, 209, 5, 8, // Opcode: TADDCCTVrr
/* 1795 */    MCD::OPC_FilterValue, 1, 112, 24, 0, // Skip to: 8056
/* 1800 */    MCD::OPC_Decode, 208, 5, 9, // Opcode: TADDCCTVri
/* 1804 */    MCD::OPC_FilterValue, 35, 28, 0, 0, // Skip to: 1837
/* 1809 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1812 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1828
/* 1817 */    MCD::OPC_CheckField, 5, 8, 0, 88, 24, 0, // Skip to: 8056
/* 1824 */    MCD::OPC_Decode, 224, 5, 8, // Opcode: TSUBCCTVrr
/* 1828 */    MCD::OPC_FilterValue, 1, 79, 24, 0, // Skip to: 8056
/* 1833 */    MCD::OPC_Decode, 223, 5, 9, // Opcode: TSUBCCTVri
/* 1837 */    MCD::OPC_FilterValue, 36, 28, 0, 0, // Skip to: 1870
/* 1842 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1845 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1861
/* 1850 */    MCD::OPC_CheckField, 5, 8, 0, 55, 24, 0, // Skip to: 8056
/* 1857 */    MCD::OPC_Decode, 217, 4, 8, // Opcode: MULSCCrr
/* 1861 */    MCD::OPC_FilterValue, 1, 46, 24, 0, // Skip to: 8056
/* 1866 */    MCD::OPC_Decode, 216, 4, 9, // Opcode: MULSCCri
/* 1870 */    MCD::OPC_FilterValue, 37, 39, 0, 0, // Skip to: 1914
/* 1875 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1878 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1887
/* 1883 */    MCD::OPC_Decode, 139, 5, 8, // Opcode: SLLrr
/* 1887 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 1896
/* 1892 */    MCD::OPC_Decode, 137, 5, 14, // Opcode: SLLXrr
/* 1896 */    MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 1905
/* 1901 */    MCD::OPC_Decode, 138, 5, 15, // Opcode: SLLri
/* 1905 */    MCD::OPC_FilterValue, 3, 2, 24, 0, // Skip to: 8056
/* 1910 */    MCD::OPC_Decode, 136, 5, 16, // Opcode: SLLXri
/* 1914 */    MCD::OPC_FilterValue, 38, 39, 0, 0, // Skip to: 1958
/* 1919 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1922 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1931
/* 1927 */    MCD::OPC_Decode, 153, 5, 8, // Opcode: SRLrr
/* 1931 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 1940
/* 1936 */    MCD::OPC_Decode, 151, 5, 14, // Opcode: SRLXrr
/* 1940 */    MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 1949
/* 1945 */    MCD::OPC_Decode, 152, 5, 15, // Opcode: SRLri
/* 1949 */    MCD::OPC_FilterValue, 3, 214, 23, 0, // Skip to: 8056
/* 1954 */    MCD::OPC_Decode, 150, 5, 16, // Opcode: SRLXri
/* 1958 */    MCD::OPC_FilterValue, 39, 39, 0, 0, // Skip to: 2002
/* 1963 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1966 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1975
/* 1971 */    MCD::OPC_Decode, 149, 5, 8, // Opcode: SRArr
/* 1975 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 1984
/* 1980 */    MCD::OPC_Decode, 147, 5, 14, // Opcode: SRAXrr
/* 1984 */    MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 1993
/* 1989 */    MCD::OPC_Decode, 148, 5, 15, // Opcode: SRAri
/* 1993 */    MCD::OPC_FilterValue, 3, 170, 23, 0, // Skip to: 8056
/* 1998 */    MCD::OPC_Decode, 146, 5, 16, // Opcode: SRAXri
/* 2002 */    MCD::OPC_FilterValue, 40, 81, 0, 0, // Skip to: 2088
/* 2007 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2010 */    MCD::OPC_FilterValue, 0, 45, 0, 0, // Skip to: 2060
/* 2015 */    MCD::OPC_ExtractField, 0, 13,  // Inst{12-0} ...
/* 2018 */    MCD::OPC_FilterValue, 0, 145, 23, 0, // Skip to: 8056
/* 2023 */    MCD::OPC_ExtractField, 14, 5,  // Inst{18-14} ...
/* 2026 */    MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 2040
/* 2031 */    MCD::OPC_CheckPredicate, 0, 20, 0, 0, // Skip to: 2056
/* 2036 */    MCD::OPC_Decode, 240, 4, 17, // Opcode: RDPC
/* 2040 */    MCD::OPC_FilterValue, 15, 11, 0, 0, // Skip to: 2056
/* 2045 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 2056
/* 2052 */    MCD::OPC_Decode, 155, 5, 4, // Opcode: STBAR
/* 2056 */    MCD::OPC_Decode, 239, 4, 18, // Opcode: RDASR
/* 2060 */    MCD::OPC_FilterValue, 1, 103, 23, 0, // Skip to: 8056
/* 2065 */    MCD::OPC_CheckPredicate, 0, 98, 23, 0, // Skip to: 8056
/* 2070 */    MCD::OPC_CheckField, 25, 5, 0, 91, 23, 0, // Skip to: 8056
/* 2077 */    MCD::OPC_CheckField, 14, 5, 15, 84, 23, 0, // Skip to: 8056
/* 2084 */    MCD::OPC_Decode, 192, 4, 19, // Opcode: MEMBARi
/* 2088 */    MCD::OPC_FilterValue, 41, 11, 0, 0, // Skip to: 2104
/* 2093 */    MCD::OPC_CheckField, 0, 19, 0, 68, 23, 0, // Skip to: 8056
/* 2100 */    MCD::OPC_Decode, 242, 4, 17, // Opcode: RDPSR
/* 2104 */    MCD::OPC_FilterValue, 42, 28, 0, 0, // Skip to: 2137
/* 2109 */    MCD::OPC_ExtractField, 0, 14,  // Inst{13-0} ...
/* 2112 */    MCD::OPC_FilterValue, 0, 51, 23, 0, // Skip to: 8056
/* 2117 */    MCD::OPC_CheckField, 14, 5, 0, 4, 0, 0, // Skip to: 2128
/* 2124 */    MCD::OPC_Decode, 244, 4, 17, // Opcode: RDWIM
/* 2128 */    MCD::OPC_CheckPredicate, 0, 35, 23, 0, // Skip to: 8056
/* 2133 */    MCD::OPC_Decode, 241, 4, 20, // Opcode: RDPR
/* 2137 */    MCD::OPC_FilterValue, 43, 28, 0, 0, // Skip to: 2170
/* 2142 */    MCD::OPC_ExtractField, 0, 19,  // Inst{18-0} ...
/* 2145 */    MCD::OPC_FilterValue, 0, 18, 23, 0, // Skip to: 8056
/* 2150 */    MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 2166
/* 2155 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 2166
/* 2162 */    MCD::OPC_Decode, 150, 3, 4, // Opcode: FLUSHW
/* 2166 */    MCD::OPC_Decode, 243, 4, 17, // Opcode: RDTBR
/* 2170 */    MCD::OPC_FilterValue, 44, 141, 0, 0, // Skip to: 2316
/* 2175 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2178 */    MCD::OPC_FilterValue, 0, 64, 0, 0, // Skip to: 2247
/* 2183 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 2186 */    MCD::OPC_FilterValue, 0, 25, 0, 0, // Skip to: 2216
/* 2191 */    MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 2207
/* 2196 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, 0, // Skip to: 2207
/* 2203 */    MCD::OPC_Decode, 195, 4, 21, // Opcode: MOVFCCrr
/* 2207 */    MCD::OPC_CheckPredicate, 0, 212, 22, 0, // Skip to: 8056
/* 2212 */    MCD::OPC_Decode, 253, 5, 22, // Opcode: V9MOVFCCrr
/* 2216 */    MCD::OPC_FilterValue, 1, 203, 22, 0, // Skip to: 8056
/* 2221 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 2224 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 2238
/* 2229 */    MCD::OPC_CheckPredicate, 0, 190, 22, 0, // Skip to: 8056
/* 2234 */    MCD::OPC_Decode, 197, 4, 21, // Opcode: MOVICCrr
/* 2238 */    MCD::OPC_FilterValue, 2, 181, 22, 0, // Skip to: 8056
/* 2243 */    MCD::OPC_Decode, 214, 4, 21, // Opcode: MOVXCCrr
/* 2247 */    MCD::OPC_FilterValue, 1, 172, 22, 0, // Skip to: 8056
/* 2252 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 2255 */    MCD::OPC_FilterValue, 0, 25, 0, 0, // Skip to: 2285
/* 2260 */    MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 2276
/* 2265 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, 0, // Skip to: 2276
/* 2272 */    MCD::OPC_Decode, 194, 4, 23, // Opcode: MOVFCCri
/* 2276 */    MCD::OPC_CheckPredicate, 0, 143, 22, 0, // Skip to: 8056
/* 2281 */    MCD::OPC_Decode, 252, 5, 24, // Opcode: V9MOVFCCri
/* 2285 */    MCD::OPC_FilterValue, 1, 134, 22, 0, // Skip to: 8056
/* 2290 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 2293 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 2307
/* 2298 */    MCD::OPC_CheckPredicate, 0, 121, 22, 0, // Skip to: 8056
/* 2303 */    MCD::OPC_Decode, 196, 4, 23, // Opcode: MOVICCri
/* 2307 */    MCD::OPC_FilterValue, 2, 112, 22, 0, // Skip to: 8056
/* 2312 */    MCD::OPC_Decode, 213, 4, 23, // Opcode: MOVXCCri
/* 2316 */    MCD::OPC_FilterValue, 45, 28, 0, 0, // Skip to: 2349
/* 2321 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2324 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 2340
/* 2329 */    MCD::OPC_CheckField, 5, 8, 0, 88, 22, 0, // Skip to: 8056
/* 2336 */    MCD::OPC_Decode, 128, 5, 10, // Opcode: SDIVXrr
/* 2340 */    MCD::OPC_FilterValue, 1, 79, 22, 0, // Skip to: 8056
/* 2345 */    MCD::OPC_Decode, 255, 4, 11, // Opcode: SDIVXri
/* 2349 */    MCD::OPC_FilterValue, 46, 16, 0, 0, // Skip to: 2370
/* 2354 */    MCD::OPC_CheckPredicate, 0, 65, 22, 0, // Skip to: 8056
/* 2359 */    MCD::OPC_CheckField, 5, 14, 0, 58, 22, 0, // Skip to: 8056
/* 2366 */    MCD::OPC_Decode, 234, 4, 25, // Opcode: POPCrr
/* 2370 */    MCD::OPC_FilterValue, 47, 153, 0, 0, // Skip to: 2528
/* 2375 */    MCD::OPC_ExtractField, 10, 4,  // Inst{13-10} ...
/* 2378 */    MCD::OPC_FilterValue, 1, 11, 0, 0, // Skip to: 2394
/* 2383 */    MCD::OPC_CheckField, 5, 5, 0, 34, 22, 0, // Skip to: 8056
/* 2390 */    MCD::OPC_Decode, 209, 4, 14, // Opcode: MOVRRZrr
/* 2394 */    MCD::OPC_FilterValue, 2, 11, 0, 0, // Skip to: 2410
/* 2399 */    MCD::OPC_CheckField, 5, 5, 0, 18, 22, 0, // Skip to: 8056
/* 2406 */    MCD::OPC_Decode, 203, 4, 14, // Opcode: MOVRLEZrr
/* 2410 */    MCD::OPC_FilterValue, 3, 11, 0, 0, // Skip to: 2426
/* 2415 */    MCD::OPC_CheckField, 5, 5, 0, 2, 22, 0, // Skip to: 8056
/* 2422 */    MCD::OPC_Decode, 205, 4, 14, // Opcode: MOVRLZrr
/* 2426 */    MCD::OPC_FilterValue, 5, 11, 0, 0, // Skip to: 2442
/* 2431 */    MCD::OPC_CheckField, 5, 5, 0, 242, 21, 0, // Skip to: 8056
/* 2438 */    MCD::OPC_Decode, 207, 4, 14, // Opcode: MOVRNZrr
/* 2442 */    MCD::OPC_FilterValue, 6, 11, 0, 0, // Skip to: 2458
/* 2447 */    MCD::OPC_CheckField, 5, 5, 0, 226, 21, 0, // Skip to: 8056
/* 2454 */    MCD::OPC_Decode, 201, 4, 14, // Opcode: MOVRGZrr
/* 2458 */    MCD::OPC_FilterValue, 7, 11, 0, 0, // Skip to: 2474
/* 2463 */    MCD::OPC_CheckField, 5, 5, 0, 210, 21, 0, // Skip to: 8056
/* 2470 */    MCD::OPC_Decode, 199, 4, 14, // Opcode: MOVRGEZrr
/* 2474 */    MCD::OPC_FilterValue, 9, 4, 0, 0, // Skip to: 2483
/* 2479 */    MCD::OPC_Decode, 208, 4, 26, // Opcode: MOVRRZri
/* 2483 */    MCD::OPC_FilterValue, 10, 4, 0, 0, // Skip to: 2492
/* 2488 */    MCD::OPC_Decode, 202, 4, 26, // Opcode: MOVRLEZri
/* 2492 */    MCD::OPC_FilterValue, 11, 4, 0, 0, // Skip to: 2501
/* 2497 */    MCD::OPC_Decode, 204, 4, 26, // Opcode: MOVRLZri
/* 2501 */    MCD::OPC_FilterValue, 13, 4, 0, 0, // Skip to: 2510
/* 2506 */    MCD::OPC_Decode, 206, 4, 26, // Opcode: MOVRNZri
/* 2510 */    MCD::OPC_FilterValue, 14, 4, 0, 0, // Skip to: 2519
/* 2515 */    MCD::OPC_Decode, 200, 4, 26, // Opcode: MOVRGZri
/* 2519 */    MCD::OPC_FilterValue, 15, 156, 21, 0, // Skip to: 8056
/* 2524 */    MCD::OPC_Decode, 198, 4, 26, // Opcode: MOVRGEZri
/* 2528 */    MCD::OPC_FilterValue, 48, 51, 0, 0, // Skip to: 2584
/* 2533 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2536 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 2552
/* 2541 */    MCD::OPC_CheckField, 5, 8, 0, 132, 21, 0, // Skip to: 8056
/* 2548 */    MCD::OPC_Decode, 255, 5, 27, // Opcode: WRASRrr
/* 2552 */    MCD::OPC_FilterValue, 1, 123, 21, 0, // Skip to: 8056
/* 2557 */    MCD::OPC_CheckPredicate, 0, 18, 0, 0, // Skip to: 2580
/* 2562 */    MCD::OPC_CheckField, 25, 5, 15, 11, 0, 0, // Skip to: 2580
/* 2569 */    MCD::OPC_CheckField, 14, 5, 0, 4, 0, 0, // Skip to: 2580
/* 2576 */    MCD::OPC_Decode, 135, 5, 28, // Opcode: SIR
/* 2580 */    MCD::OPC_Decode, 254, 5, 29, // Opcode: WRASRri
/* 2584 */    MCD::OPC_FilterValue, 49, 79, 0, 0, // Skip to: 2668
/* 2589 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2592 */    MCD::OPC_FilterValue, 0, 40, 0, 0, // Skip to: 2637
/* 2597 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 2600 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 2616
/* 2605 */    MCD::OPC_CheckField, 5, 8, 0, 68, 21, 0, // Skip to: 8056
/* 2612 */    MCD::OPC_Decode, 131, 6, 12, // Opcode: WRPSRrr
/* 2616 */    MCD::OPC_FilterValue, 1, 59, 21, 0, // Skip to: 8056
/* 2621 */    MCD::OPC_CheckPredicate, 1, 54, 21, 0, // Skip to: 8056
/* 2626 */    MCD::OPC_CheckField, 5, 8, 0, 47, 21, 0, // Skip to: 8056
/* 2633 */    MCD::OPC_Decode, 238, 4, 12, // Opcode: PWRPSRrr
/* 2637 */    MCD::OPC_FilterValue, 1, 38, 21, 0, // Skip to: 8056
/* 2642 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 2645 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 2654
/* 2650 */    MCD::OPC_Decode, 130, 6, 13, // Opcode: WRPSRri
/* 2654 */    MCD::OPC_FilterValue, 1, 21, 21, 0, // Skip to: 8056
/* 2659 */    MCD::OPC_CheckPredicate, 1, 16, 21, 0, // Skip to: 8056
/* 2664 */    MCD::OPC_Decode, 237, 4, 13, // Opcode: PWRPSRri
/* 2668 */    MCD::OPC_FilterValue, 50, 61, 0, 0, // Skip to: 2734
/* 2673 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2676 */    MCD::OPC_FilterValue, 0, 28, 0, 0, // Skip to: 2709
/* 2681 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 2684 */    MCD::OPC_FilterValue, 0, 247, 20, 0, // Skip to: 8056
/* 2689 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 2700
/* 2696 */    MCD::OPC_Decode, 135, 6, 12, // Opcode: WRWIMrr
/* 2700 */    MCD::OPC_CheckPredicate, 0, 231, 20, 0, // Skip to: 8056
/* 2705 */    MCD::OPC_Decode, 129, 6, 30, // Opcode: WRPRrr
/* 2709 */    MCD::OPC_FilterValue, 1, 222, 20, 0, // Skip to: 8056
/* 2714 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 2725
/* 2721 */    MCD::OPC_Decode, 134, 6, 13, // Opcode: WRWIMri
/* 2725 */    MCD::OPC_CheckPredicate, 0, 206, 20, 0, // Skip to: 8056
/* 2730 */    MCD::OPC_Decode, 128, 6, 31, // Opcode: WRPRri
/* 2734 */    MCD::OPC_FilterValue, 51, 42, 0, 0, // Skip to: 2781
/* 2739 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2742 */    MCD::OPC_FilterValue, 0, 18, 0, 0, // Skip to: 2765
/* 2747 */    MCD::OPC_CheckField, 25, 5, 0, 182, 20, 0, // Skip to: 8056
/* 2754 */    MCD::OPC_CheckField, 5, 8, 0, 175, 20, 0, // Skip to: 8056
/* 2761 */    MCD::OPC_Decode, 133, 6, 12, // Opcode: WRTBRrr
/* 2765 */    MCD::OPC_FilterValue, 1, 166, 20, 0, // Skip to: 8056
/* 2770 */    MCD::OPC_CheckField, 25, 5, 0, 159, 20, 0, // Skip to: 8056
/* 2777 */    MCD::OPC_Decode, 132, 6, 13, // Opcode: WRTBRri
/* 2781 */    MCD::OPC_FilterValue, 52, 43, 3, 0, // Skip to: 3597
/* 2786 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 2789 */    MCD::OPC_FilterValue, 1, 11, 0, 0, // Skip to: 2805
/* 2794 */    MCD::OPC_CheckField, 14, 5, 0, 135, 20, 0, // Skip to: 8056
/* 2801 */    MCD::OPC_Decode, 180, 3, 32, // Opcode: FMOVS
/* 2805 */    MCD::OPC_FilterValue, 2, 16, 0, 0, // Skip to: 2826
/* 2810 */    MCD::OPC_CheckPredicate, 0, 121, 20, 0, // Skip to: 8056
/* 2815 */    MCD::OPC_CheckField, 14, 5, 0, 114, 20, 0, // Skip to: 8056
/* 2822 */    MCD::OPC_Decode, 154, 3, 33, // Opcode: FMOVD
/* 2826 */    MCD::OPC_FilterValue, 3, 16, 0, 0, // Skip to: 2847
/* 2831 */    MCD::OPC_CheckPredicate, 0, 100, 20, 0, // Skip to: 8056
/* 2836 */    MCD::OPC_CheckField, 14, 5, 0, 93, 20, 0, // Skip to: 8056
/* 2843 */    MCD::OPC_Decode, 158, 3, 34, // Opcode: FMOVQ
/* 2847 */    MCD::OPC_FilterValue, 5, 11, 0, 0, // Skip to: 2863
/* 2852 */    MCD::OPC_CheckField, 14, 5, 0, 77, 20, 0, // Skip to: 8056
/* 2859 */    MCD::OPC_Decode, 200, 3, 32, // Opcode: FNEGS
/* 2863 */    MCD::OPC_FilterValue, 6, 16, 0, 0, // Skip to: 2884
/* 2868 */    MCD::OPC_CheckPredicate, 0, 63, 20, 0, // Skip to: 8056
/* 2873 */    MCD::OPC_CheckField, 14, 5, 0, 56, 20, 0, // Skip to: 8056
/* 2880 */    MCD::OPC_Decode, 198, 3, 33, // Opcode: FNEGD
/* 2884 */    MCD::OPC_FilterValue, 7, 16, 0, 0, // Skip to: 2905
/* 2889 */    MCD::OPC_CheckPredicate, 0, 42, 20, 0, // Skip to: 8056
/* 2894 */    MCD::OPC_CheckField, 14, 5, 0, 35, 20, 0, // Skip to: 8056
/* 2901 */    MCD::OPC_Decode, 199, 3, 34, // Opcode: FNEGQ
/* 2905 */    MCD::OPC_FilterValue, 9, 11, 0, 0, // Skip to: 2921
/* 2910 */    MCD::OPC_CheckField, 14, 5, 0, 19, 20, 0, // Skip to: 8056
/* 2917 */    MCD::OPC_Decode, 234, 2, 32, // Opcode: FABSS
/* 2921 */    MCD::OPC_FilterValue, 10, 16, 0, 0, // Skip to: 2942
/* 2926 */    MCD::OPC_CheckPredicate, 0, 5, 20, 0, // Skip to: 8056
/* 2931 */    MCD::OPC_CheckField, 14, 5, 0, 254, 19, 0, // Skip to: 8056
/* 2938 */    MCD::OPC_Decode, 232, 2, 33, // Opcode: FABSD
/* 2942 */    MCD::OPC_FilterValue, 11, 16, 0, 0, // Skip to: 2963
/* 2947 */    MCD::OPC_CheckPredicate, 0, 240, 19, 0, // Skip to: 8056
/* 2952 */    MCD::OPC_CheckField, 14, 5, 0, 233, 19, 0, // Skip to: 8056
/* 2959 */    MCD::OPC_Decode, 233, 2, 34, // Opcode: FABSQ
/* 2963 */    MCD::OPC_FilterValue, 41, 11, 0, 0, // Skip to: 2979
/* 2968 */    MCD::OPC_CheckField, 14, 5, 0, 217, 19, 0, // Skip to: 8056
/* 2975 */    MCD::OPC_Decode, 244, 3, 32, // Opcode: FSQRTS
/* 2979 */    MCD::OPC_FilterValue, 42, 11, 0, 0, // Skip to: 2995
/* 2984 */    MCD::OPC_CheckField, 14, 5, 0, 201, 19, 0, // Skip to: 8056
/* 2991 */    MCD::OPC_Decode, 242, 3, 33, // Opcode: FSQRTD
/* 2995 */    MCD::OPC_FilterValue, 43, 11, 0, 0, // Skip to: 3011
/* 3000 */    MCD::OPC_CheckField, 14, 5, 0, 185, 19, 0, // Skip to: 8056
/* 3007 */    MCD::OPC_Decode, 243, 3, 34, // Opcode: FSQRTQ
/* 3011 */    MCD::OPC_FilterValue, 65, 4, 0, 0, // Skip to: 3020
/* 3016 */    MCD::OPC_Decode, 237, 2, 35, // Opcode: FADDS
/* 3020 */    MCD::OPC_FilterValue, 66, 4, 0, 0, // Skip to: 3029
/* 3025 */    MCD::OPC_Decode, 235, 2, 36, // Opcode: FADDD
/* 3029 */    MCD::OPC_FilterValue, 67, 4, 0, 0, // Skip to: 3038
/* 3034 */    MCD::OPC_Decode, 236, 2, 37, // Opcode: FADDQ
/* 3038 */    MCD::OPC_FilterValue, 69, 4, 0, 0, // Skip to: 3047
/* 3043 */    MCD::OPC_Decode, 131, 4, 35, // Opcode: FSUBS
/* 3047 */    MCD::OPC_FilterValue, 70, 4, 0, 0, // Skip to: 3056
/* 3052 */    MCD::OPC_Decode, 129, 4, 36, // Opcode: FSUBD
/* 3056 */    MCD::OPC_FilterValue, 71, 4, 0, 0, // Skip to: 3065
/* 3061 */    MCD::OPC_Decode, 130, 4, 37, // Opcode: FSUBQ
/* 3065 */    MCD::OPC_FilterValue, 73, 4, 0, 0, // Skip to: 3074
/* 3070 */    MCD::OPC_Decode, 193, 3, 35, // Opcode: FMULS
/* 3074 */    MCD::OPC_FilterValue, 74, 4, 0, 0, // Skip to: 3083
/* 3079 */    MCD::OPC_Decode, 189, 3, 36, // Opcode: FMULD
/* 3083 */    MCD::OPC_FilterValue, 75, 4, 0, 0, // Skip to: 3092
/* 3088 */    MCD::OPC_Decode, 192, 3, 37, // Opcode: FMULQ
/* 3092 */    MCD::OPC_FilterValue, 77, 4, 0, 0, // Skip to: 3101
/* 3097 */    MCD::OPC_Decode, 133, 3, 35, // Opcode: FDIVS
/* 3101 */    MCD::OPC_FilterValue, 78, 4, 0, 0, // Skip to: 3110
/* 3106 */    MCD::OPC_Decode, 131, 3, 36, // Opcode: FDIVD
/* 3110 */    MCD::OPC_FilterValue, 79, 4, 0, 0, // Skip to: 3119
/* 3115 */    MCD::OPC_Decode, 132, 3, 37, // Opcode: FDIVQ
/* 3119 */    MCD::OPC_FilterValue, 81, 9, 0, 0, // Skip to: 3133
/* 3124 */    MCD::OPC_CheckPredicate, 2, 63, 19, 0, // Skip to: 8056
/* 3129 */    MCD::OPC_Decode, 195, 3, 36, // Opcode: FNADDS
/* 3133 */    MCD::OPC_FilterValue, 82, 9, 0, 0, // Skip to: 3147
/* 3138 */    MCD::OPC_CheckPredicate, 2, 49, 19, 0, // Skip to: 8056
/* 3143 */    MCD::OPC_Decode, 194, 3, 36, // Opcode: FNADDD
/* 3147 */    MCD::OPC_FilterValue, 89, 9, 0, 0, // Skip to: 3161
/* 3152 */    MCD::OPC_CheckPredicate, 2, 35, 19, 0, // Skip to: 8056
/* 3157 */    MCD::OPC_Decode, 204, 3, 36, // Opcode: FNMULS
/* 3161 */    MCD::OPC_FilterValue, 90, 9, 0, 0, // Skip to: 3175
/* 3166 */    MCD::OPC_CheckPredicate, 2, 21, 19, 0, // Skip to: 8056
/* 3171 */    MCD::OPC_Decode, 203, 3, 36, // Opcode: FNMULD
/* 3175 */    MCD::OPC_FilterValue, 97, 9, 0, 0, // Skip to: 3189
/* 3180 */    MCD::OPC_CheckPredicate, 2, 7, 19, 0, // Skip to: 8056
/* 3185 */    MCD::OPC_Decode, 141, 3, 36, // Opcode: FHADDS
/* 3189 */    MCD::OPC_FilterValue, 98, 9, 0, 0, // Skip to: 3203
/* 3194 */    MCD::OPC_CheckPredicate, 2, 249, 18, 0, // Skip to: 8056
/* 3199 */    MCD::OPC_Decode, 140, 3, 36, // Opcode: FHADDD
/* 3203 */    MCD::OPC_FilterValue, 101, 9, 0, 0, // Skip to: 3217
/* 3208 */    MCD::OPC_CheckPredicate, 2, 235, 18, 0, // Skip to: 8056
/* 3213 */    MCD::OPC_Decode, 143, 3, 36, // Opcode: FHSUBS
/* 3217 */    MCD::OPC_FilterValue, 102, 9, 0, 0, // Skip to: 3231
/* 3222 */    MCD::OPC_CheckPredicate, 2, 221, 18, 0, // Skip to: 8056
/* 3227 */    MCD::OPC_Decode, 142, 3, 36, // Opcode: FHSUBD
/* 3231 */    MCD::OPC_FilterValue, 105, 4, 0, 0, // Skip to: 3240
/* 3236 */    MCD::OPC_Decode, 241, 3, 38, // Opcode: FSMULD
/* 3240 */    MCD::OPC_FilterValue, 110, 4, 0, 0, // Skip to: 3249
/* 3245 */    MCD::OPC_Decode, 134, 3, 39, // Opcode: FDMULQ
/* 3249 */    MCD::OPC_FilterValue, 113, 9, 0, 0, // Skip to: 3263
/* 3254 */    MCD::OPC_CheckPredicate, 2, 189, 18, 0, // Skip to: 8056
/* 3259 */    MCD::OPC_Decode, 202, 3, 36, // Opcode: FNHADDS
/* 3263 */    MCD::OPC_FilterValue, 114, 9, 0, 0, // Skip to: 3277
/* 3268 */    MCD::OPC_CheckPredicate, 2, 175, 18, 0, // Skip to: 8056
/* 3273 */    MCD::OPC_Decode, 201, 3, 36, // Opcode: FNHADDD
/* 3277 */    MCD::OPC_FilterValue, 121, 9, 0, 0, // Skip to: 3291
/* 3282 */    MCD::OPC_CheckPredicate, 2, 161, 18, 0, // Skip to: 8056
/* 3287 */    MCD::OPC_Decode, 211, 3, 36, // Opcode: FNSMULD
/* 3291 */    MCD::OPC_FilterValue, 129, 1, 11, 0, 0, // Skip to: 3308
/* 3297 */    MCD::OPC_CheckField, 14, 5, 0, 144, 18, 0, // Skip to: 8056
/* 3304 */    MCD::OPC_Decode, 128, 4, 40, // Opcode: FSTOX
/* 3308 */    MCD::OPC_FilterValue, 130, 1, 11, 0, 0, // Skip to: 3325
/* 3314 */    MCD::OPC_CheckField, 14, 5, 0, 127, 18, 0, // Skip to: 8056
/* 3321 */    MCD::OPC_Decode, 138, 3, 33, // Opcode: FDTOX
/* 3325 */    MCD::OPC_FilterValue, 131, 1, 11, 0, 0, // Skip to: 3342
/* 3331 */    MCD::OPC_CheckField, 14, 5, 0, 110, 18, 0, // Skip to: 8056
/* 3338 */    MCD::OPC_Decode, 236, 3, 41, // Opcode: FQTOX
/* 3342 */    MCD::OPC_FilterValue, 132, 1, 11, 0, 0, // Skip to: 3359
/* 3348 */    MCD::OPC_CheckField, 14, 5, 0, 93, 18, 0, // Skip to: 8056
/* 3355 */    MCD::OPC_Decode, 138, 4, 42, // Opcode: FXTOS
/* 3359 */    MCD::OPC_FilterValue, 136, 1, 11, 0, 0, // Skip to: 3376
/* 3365 */    MCD::OPC_CheckField, 14, 5, 0, 76, 18, 0, // Skip to: 8056
/* 3372 */    MCD::OPC_Decode, 136, 4, 33, // Opcode: FXTOD
/* 3376 */    MCD::OPC_FilterValue, 140, 1, 11, 0, 0, // Skip to: 3393
/* 3382 */    MCD::OPC_CheckField, 14, 5, 0, 59, 18, 0, // Skip to: 8056
/* 3389 */    MCD::OPC_Decode, 137, 4, 43, // Opcode: FXTOQ
/* 3393 */    MCD::OPC_FilterValue, 196, 1, 11, 0, 0, // Skip to: 3410
/* 3399 */    MCD::OPC_CheckField, 14, 5, 0, 42, 18, 0, // Skip to: 8056
/* 3406 */    MCD::OPC_Decode, 146, 3, 32, // Opcode: FITOS
/* 3410 */    MCD::OPC_FilterValue, 198, 1, 11, 0, 0, // Skip to: 3427
/* 3416 */    MCD::OPC_CheckField, 14, 5, 0, 25, 18, 0, // Skip to: 8056
/* 3423 */    MCD::OPC_Decode, 137, 3, 42, // Opcode: FDTOS
/* 3427 */    MCD::OPC_FilterValue, 199, 1, 11, 0, 0, // Skip to: 3444
/* 3433 */    MCD::OPC_CheckField, 14, 5, 0, 8, 18, 0, // Skip to: 8056
/* 3440 */    MCD::OPC_Decode, 235, 3, 44, // Opcode: FQTOS
/* 3444 */    MCD::OPC_FilterValue, 200, 1, 11, 0, 0, // Skip to: 3461
/* 3450 */    MCD::OPC_CheckField, 14, 5, 0, 247, 17, 0, // Skip to: 8056
/* 3457 */    MCD::OPC_Decode, 144, 3, 40, // Opcode: FITOD
/* 3461 */    MCD::OPC_FilterValue, 201, 1, 11, 0, 0, // Skip to: 3478
/* 3467 */    MCD::OPC_CheckField, 14, 5, 0, 230, 17, 0, // Skip to: 8056
/* 3474 */    MCD::OPC_Decode, 253, 3, 40, // Opcode: FSTOD
/* 3478 */    MCD::OPC_FilterValue, 203, 1, 11, 0, 0, // Skip to: 3495
/* 3484 */    MCD::OPC_CheckField, 14, 5, 0, 213, 17, 0, // Skip to: 8056
/* 3491 */    MCD::OPC_Decode, 233, 3, 41, // Opcode: FQTOD
/* 3495 */    MCD::OPC_FilterValue, 204, 1, 11, 0, 0, // Skip to: 3512
/* 3501 */    MCD::OPC_CheckField, 14, 5, 0, 196, 17, 0, // Skip to: 8056
/* 3508 */    MCD::OPC_Decode, 145, 3, 45, // Opcode: FITOQ
/* 3512 */    MCD::OPC_FilterValue, 205, 1, 11, 0, 0, // Skip to: 3529
/* 3518 */    MCD::OPC_CheckField, 14, 5, 0, 179, 17, 0, // Skip to: 8056
/* 3525 */    MCD::OPC_Decode, 255, 3, 45, // Opcode: FSTOQ
/* 3529 */    MCD::OPC_FilterValue, 206, 1, 11, 0, 0, // Skip to: 3546
/* 3535 */    MCD::OPC_CheckField, 14, 5, 0, 162, 17, 0, // Skip to: 8056
/* 3542 */    MCD::OPC_Decode, 136, 3, 43, // Opcode: FDTOQ
/* 3546 */    MCD::OPC_FilterValue, 209, 1, 11, 0, 0, // Skip to: 3563
/* 3552 */    MCD::OPC_CheckField, 14, 5, 0, 145, 17, 0, // Skip to: 8056
/* 3559 */    MCD::OPC_Decode, 254, 3, 32, // Opcode: FSTOI
/* 3563 */    MCD::OPC_FilterValue, 210, 1, 11, 0, 0, // Skip to: 3580
/* 3569 */    MCD::OPC_CheckField, 14, 5, 0, 128, 17, 0, // Skip to: 8056
/* 3576 */    MCD::OPC_Decode, 135, 3, 42, // Opcode: FDTOI
/* 3580 */    MCD::OPC_FilterValue, 211, 1, 118, 17, 0, // Skip to: 8056
/* 3586 */    MCD::OPC_CheckField, 14, 5, 0, 111, 17, 0, // Skip to: 8056
/* 3593 */    MCD::OPC_Decode, 234, 3, 44, // Opcode: FQTOI
/* 3597 */    MCD::OPC_FilterValue, 53, 160, 2, 0, // Skip to: 4274
/* 3602 */    MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 3605 */    MCD::OPC_FilterValue, 1, 86, 0, 0, // Skip to: 3696
/* 3610 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3613 */    MCD::OPC_FilterValue, 0, 33, 0, 0, // Skip to: 3651
/* 3618 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3621 */    MCD::OPC_FilterValue, 0, 78, 17, 0, // Skip to: 8056
/* 3626 */    MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 3642
/* 3631 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, 0, // Skip to: 3642
/* 3638 */    MCD::OPC_Decode, 181, 3, 46, // Opcode: FMOVS_FCC
/* 3642 */    MCD::OPC_CheckPredicate, 0, 57, 17, 0, // Skip to: 8056
/* 3647 */    MCD::OPC_Decode, 251, 5, 47, // Opcode: V9FMOVS_FCC
/* 3651 */    MCD::OPC_FilterValue, 1, 48, 17, 0, // Skip to: 8056
/* 3656 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3659 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 3680
/* 3664 */    MCD::OPC_CheckPredicate, 0, 35, 17, 0, // Skip to: 8056
/* 3669 */    MCD::OPC_CheckField, 18, 1, 0, 28, 17, 0, // Skip to: 8056
/* 3676 */    MCD::OPC_Decode, 182, 3, 46, // Opcode: FMOVS_ICC
/* 3680 */    MCD::OPC_FilterValue, 2, 19, 17, 0, // Skip to: 8056
/* 3685 */    MCD::OPC_CheckField, 18, 1, 0, 12, 17, 0, // Skip to: 8056
/* 3692 */    MCD::OPC_Decode, 183, 3, 46, // Opcode: FMOVS_XCC
/* 3696 */    MCD::OPC_FilterValue, 2, 86, 0, 0, // Skip to: 3787
/* 3701 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3704 */    MCD::OPC_FilterValue, 0, 33, 0, 0, // Skip to: 3742
/* 3709 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3712 */    MCD::OPC_FilterValue, 0, 243, 16, 0, // Skip to: 8056
/* 3717 */    MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 3733
/* 3722 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, 0, // Skip to: 3733
/* 3729 */    MCD::OPC_Decode, 155, 3, 48, // Opcode: FMOVD_FCC
/* 3733 */    MCD::OPC_CheckPredicate, 0, 222, 16, 0, // Skip to: 8056
/* 3738 */    MCD::OPC_Decode, 249, 5, 49, // Opcode: V9FMOVD_FCC
/* 3742 */    MCD::OPC_FilterValue, 1, 213, 16, 0, // Skip to: 8056
/* 3747 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3750 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 3771
/* 3755 */    MCD::OPC_CheckPredicate, 0, 200, 16, 0, // Skip to: 8056
/* 3760 */    MCD::OPC_CheckField, 18, 1, 0, 193, 16, 0, // Skip to: 8056
/* 3767 */    MCD::OPC_Decode, 156, 3, 48, // Opcode: FMOVD_ICC
/* 3771 */    MCD::OPC_FilterValue, 2, 184, 16, 0, // Skip to: 8056
/* 3776 */    MCD::OPC_CheckField, 18, 1, 0, 177, 16, 0, // Skip to: 8056
/* 3783 */    MCD::OPC_Decode, 157, 3, 48, // Opcode: FMOVD_XCC
/* 3787 */    MCD::OPC_FilterValue, 3, 86, 0, 0, // Skip to: 3878
/* 3792 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3795 */    MCD::OPC_FilterValue, 0, 33, 0, 0, // Skip to: 3833
/* 3800 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3803 */    MCD::OPC_FilterValue, 0, 152, 16, 0, // Skip to: 8056
/* 3808 */    MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 3824
/* 3813 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, 0, // Skip to: 3824
/* 3820 */    MCD::OPC_Decode, 159, 3, 50, // Opcode: FMOVQ_FCC
/* 3824 */    MCD::OPC_CheckPredicate, 0, 131, 16, 0, // Skip to: 8056
/* 3829 */    MCD::OPC_Decode, 250, 5, 51, // Opcode: V9FMOVQ_FCC
/* 3833 */    MCD::OPC_FilterValue, 1, 122, 16, 0, // Skip to: 8056
/* 3838 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3841 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 3862
/* 3846 */    MCD::OPC_CheckPredicate, 0, 109, 16, 0, // Skip to: 8056
/* 3851 */    MCD::OPC_CheckField, 18, 1, 0, 102, 16, 0, // Skip to: 8056
/* 3858 */    MCD::OPC_Decode, 160, 3, 50, // Opcode: FMOVQ_ICC
/* 3862 */    MCD::OPC_FilterValue, 2, 93, 16, 0, // Skip to: 8056
/* 3867 */    MCD::OPC_CheckField, 18, 1, 0, 86, 16, 0, // Skip to: 8056
/* 3874 */    MCD::OPC_Decode, 161, 3, 50, // Opcode: FMOVQ_XCC
/* 3878 */    MCD::OPC_FilterValue, 5, 31, 0, 0, // Skip to: 3914
/* 3883 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3886 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 3900
/* 3891 */    MCD::OPC_CheckPredicate, 0, 64, 16, 0, // Skip to: 8056
/* 3896 */    MCD::OPC_Decode, 170, 3, 52, // Opcode: FMOVRLEZS
/* 3900 */    MCD::OPC_FilterValue, 3, 55, 16, 0, // Skip to: 8056
/* 3905 */    MCD::OPC_CheckPredicate, 0, 50, 16, 0, // Skip to: 8056
/* 3910 */    MCD::OPC_Decode, 167, 3, 52, // Opcode: FMOVRGZS
/* 3914 */    MCD::OPC_FilterValue, 6, 31, 0, 0, // Skip to: 3950
/* 3919 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3922 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 3936
/* 3927 */    MCD::OPC_CheckPredicate, 0, 28, 16, 0, // Skip to: 8056
/* 3932 */    MCD::OPC_Decode, 168, 3, 52, // Opcode: FMOVRLEZD
/* 3936 */    MCD::OPC_FilterValue, 3, 19, 16, 0, // Skip to: 8056
/* 3941 */    MCD::OPC_CheckPredicate, 0, 14, 16, 0, // Skip to: 8056
/* 3946 */    MCD::OPC_Decode, 165, 3, 52, // Opcode: FMOVRGZD
/* 3950 */    MCD::OPC_FilterValue, 7, 31, 0, 0, // Skip to: 3986
/* 3955 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3958 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 3972
/* 3963 */    MCD::OPC_CheckPredicate, 0, 248, 15, 0, // Skip to: 8056
/* 3968 */    MCD::OPC_Decode, 169, 3, 52, // Opcode: FMOVRLEZQ
/* 3972 */    MCD::OPC_FilterValue, 3, 239, 15, 0, // Skip to: 8056
/* 3977 */    MCD::OPC_CheckPredicate, 0, 234, 15, 0, // Skip to: 8056
/* 3982 */    MCD::OPC_Decode, 166, 3, 52, // Opcode: FMOVRGZQ
/* 3986 */    MCD::OPC_FilterValue, 17, 11, 0, 0, // Skip to: 4002
/* 3991 */    MCD::OPC_CheckField, 11, 3, 1, 218, 15, 0, // Skip to: 8056
/* 3998 */    MCD::OPC_Decode, 248, 5, 53, // Opcode: V9FCMPS
/* 4002 */    MCD::OPC_FilterValue, 18, 11, 0, 0, // Skip to: 4018
/* 4007 */    MCD::OPC_CheckField, 11, 3, 1, 202, 15, 0, // Skip to: 8056
/* 4014 */    MCD::OPC_Decode, 243, 5, 54, // Opcode: V9FCMPD
/* 4018 */    MCD::OPC_FilterValue, 19, 11, 0, 0, // Skip to: 4034
/* 4023 */    MCD::OPC_CheckField, 11, 3, 1, 186, 15, 0, // Skip to: 8056
/* 4030 */    MCD::OPC_Decode, 247, 5, 55, // Opcode: V9FCMPQ
/* 4034 */    MCD::OPC_FilterValue, 21, 11, 0, 0, // Skip to: 4050
/* 4039 */    MCD::OPC_CheckField, 11, 3, 1, 170, 15, 0, // Skip to: 8056
/* 4046 */    MCD::OPC_Decode, 246, 5, 53, // Opcode: V9FCMPES
/* 4050 */    MCD::OPC_FilterValue, 22, 11, 0, 0, // Skip to: 4066
/* 4055 */    MCD::OPC_CheckField, 11, 3, 1, 154, 15, 0, // Skip to: 8056
/* 4062 */    MCD::OPC_Decode, 244, 5, 54, // Opcode: V9FCMPED
/* 4066 */    MCD::OPC_FilterValue, 23, 11, 0, 0, // Skip to: 4082
/* 4071 */    MCD::OPC_CheckField, 11, 3, 1, 138, 15, 0, // Skip to: 8056
/* 4078 */    MCD::OPC_Decode, 245, 5, 55, // Opcode: V9FCMPEQ
/* 4082 */    MCD::OPC_FilterValue, 37, 59, 0, 0, // Skip to: 4146
/* 4087 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 4090 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 4104
/* 4095 */    MCD::OPC_CheckPredicate, 0, 116, 15, 0, // Skip to: 8056
/* 4100 */    MCD::OPC_Decode, 179, 3, 52, // Opcode: FMOVRZS
/* 4104 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 4118
/* 4109 */    MCD::OPC_CheckPredicate, 0, 102, 15, 0, // Skip to: 8056
/* 4114 */    MCD::OPC_Decode, 173, 3, 52, // Opcode: FMOVRLZS
/* 4118 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 4132
/* 4123 */    MCD::OPC_CheckPredicate, 0, 88, 15, 0, // Skip to: 8056
/* 4128 */    MCD::OPC_Decode, 176, 3, 52, // Opcode: FMOVRNZS
/* 4132 */    MCD::OPC_FilterValue, 3, 79, 15, 0, // Skip to: 8056
/* 4137 */    MCD::OPC_CheckPredicate, 0, 74, 15, 0, // Skip to: 8056
/* 4142 */    MCD::OPC_Decode, 164, 3, 52, // Opcode: FMOVRGEZS
/* 4146 */    MCD::OPC_FilterValue, 38, 59, 0, 0, // Skip to: 4210
/* 4151 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 4154 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 4168
/* 4159 */    MCD::OPC_CheckPredicate, 0, 52, 15, 0, // Skip to: 8056
/* 4164 */    MCD::OPC_Decode, 177, 3, 52, // Opcode: FMOVRZD
/* 4168 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 4182
/* 4173 */    MCD::OPC_CheckPredicate, 0, 38, 15, 0, // Skip to: 8056
/* 4178 */    MCD::OPC_Decode, 171, 3, 52, // Opcode: FMOVRLZD
/* 4182 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 4196
/* 4187 */    MCD::OPC_CheckPredicate, 0, 24, 15, 0, // Skip to: 8056
/* 4192 */    MCD::OPC_Decode, 174, 3, 52, // Opcode: FMOVRNZD
/* 4196 */    MCD::OPC_FilterValue, 3, 15, 15, 0, // Skip to: 8056
/* 4201 */    MCD::OPC_CheckPredicate, 0, 10, 15, 0, // Skip to: 8056
/* 4206 */    MCD::OPC_Decode, 162, 3, 52, // Opcode: FMOVRGEZD
/* 4210 */    MCD::OPC_FilterValue, 39, 1, 15, 0, // Skip to: 8056
/* 4215 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 4218 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 4232
/* 4223 */    MCD::OPC_CheckPredicate, 0, 244, 14, 0, // Skip to: 8056
/* 4228 */    MCD::OPC_Decode, 178, 3, 52, // Opcode: FMOVRZQ
/* 4232 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 4246
/* 4237 */    MCD::OPC_CheckPredicate, 0, 230, 14, 0, // Skip to: 8056
/* 4242 */    MCD::OPC_Decode, 172, 3, 52, // Opcode: FMOVRLZQ
/* 4246 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 4260
/* 4251 */    MCD::OPC_CheckPredicate, 0, 216, 14, 0, // Skip to: 8056
/* 4256 */    MCD::OPC_Decode, 175, 3, 52, // Opcode: FMOVRNZQ
/* 4260 */    MCD::OPC_FilterValue, 3, 207, 14, 0, // Skip to: 8056
/* 4265 */    MCD::OPC_CheckPredicate, 0, 202, 14, 0, // Skip to: 8056
/* 4270 */    MCD::OPC_Decode, 163, 3, 52, // Opcode: FMOVRGEZQ
/* 4274 */    MCD::OPC_FilterValue, 54, 35, 7, 0, // Skip to: 6106
/* 4279 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 4282 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 4296
/* 4287 */    MCD::OPC_CheckPredicate, 3, 180, 14, 0, // Skip to: 8056
/* 4292 */    MCD::OPC_Decode, 228, 2, 10, // Opcode: EDGE8
/* 4296 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 4310
/* 4301 */    MCD::OPC_CheckPredicate, 4, 166, 14, 0, // Skip to: 8056
/* 4306 */    MCD::OPC_Decode, 231, 2, 10, // Opcode: EDGE8N
/* 4310 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 4324
/* 4315 */    MCD::OPC_CheckPredicate, 3, 152, 14, 0, // Skip to: 8056
/* 4320 */    MCD::OPC_Decode, 229, 2, 10, // Opcode: EDGE8L
/* 4324 */    MCD::OPC_FilterValue, 3, 9, 0, 0, // Skip to: 4338
/* 4329 */    MCD::OPC_CheckPredicate, 4, 138, 14, 0, // Skip to: 8056
/* 4334 */    MCD::OPC_Decode, 230, 2, 10, // Opcode: EDGE8LN
/* 4338 */    MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 4352
/* 4343 */    MCD::OPC_CheckPredicate, 3, 124, 14, 0, // Skip to: 8056
/* 4348 */    MCD::OPC_Decode, 220, 2, 10, // Opcode: EDGE16
/* 4352 */    MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 4366
/* 4357 */    MCD::OPC_CheckPredicate, 4, 110, 14, 0, // Skip to: 8056
/* 4362 */    MCD::OPC_Decode, 223, 2, 10, // Opcode: EDGE16N
/* 4366 */    MCD::OPC_FilterValue, 6, 9, 0, 0, // Skip to: 4380
/* 4371 */    MCD::OPC_CheckPredicate, 3, 96, 14, 0, // Skip to: 8056
/* 4376 */    MCD::OPC_Decode, 221, 2, 10, // Opcode: EDGE16L
/* 4380 */    MCD::OPC_FilterValue, 7, 9, 0, 0, // Skip to: 4394
/* 4385 */    MCD::OPC_CheckPredicate, 4, 82, 14, 0, // Skip to: 8056
/* 4390 */    MCD::OPC_Decode, 222, 2, 10, // Opcode: EDGE16LN
/* 4394 */    MCD::OPC_FilterValue, 8, 9, 0, 0, // Skip to: 4408
/* 4399 */    MCD::OPC_CheckPredicate, 3, 68, 14, 0, // Skip to: 8056
/* 4404 */    MCD::OPC_Decode, 224, 2, 10, // Opcode: EDGE32
/* 4408 */    MCD::OPC_FilterValue, 9, 9, 0, 0, // Skip to: 4422
/* 4413 */    MCD::OPC_CheckPredicate, 4, 54, 14, 0, // Skip to: 8056
/* 4418 */    MCD::OPC_Decode, 227, 2, 10, // Opcode: EDGE32N
/* 4422 */    MCD::OPC_FilterValue, 10, 9, 0, 0, // Skip to: 4436
/* 4427 */    MCD::OPC_CheckPredicate, 3, 40, 14, 0, // Skip to: 8056
/* 4432 */    MCD::OPC_Decode, 225, 2, 10, // Opcode: EDGE32L
/* 4436 */    MCD::OPC_FilterValue, 11, 9, 0, 0, // Skip to: 4450
/* 4441 */    MCD::OPC_CheckPredicate, 4, 26, 14, 0, // Skip to: 8056
/* 4446 */    MCD::OPC_Decode, 226, 2, 10, // Opcode: EDGE32LN
/* 4450 */    MCD::OPC_FilterValue, 16, 9, 0, 0, // Skip to: 4464
/* 4455 */    MCD::OPC_CheckPredicate, 3, 12, 14, 0, // Skip to: 8056
/* 4460 */    MCD::OPC_Decode, 162, 2, 10, // Opcode: ARRAY8
/* 4464 */    MCD::OPC_FilterValue, 17, 9, 0, 0, // Skip to: 4478
/* 4469 */    MCD::OPC_CheckPredicate, 2, 254, 13, 0, // Skip to: 8056
/* 4474 */    MCD::OPC_Decode, 141, 2, 10, // Opcode: ADDXC
/* 4478 */    MCD::OPC_FilterValue, 18, 9, 0, 0, // Skip to: 4492
/* 4483 */    MCD::OPC_CheckPredicate, 3, 240, 13, 0, // Skip to: 8056
/* 4488 */    MCD::OPC_Decode, 160, 2, 10, // Opcode: ARRAY16
/* 4492 */    MCD::OPC_FilterValue, 19, 9, 0, 0, // Skip to: 4506
/* 4497 */    MCD::OPC_CheckPredicate, 2, 226, 13, 0, // Skip to: 8056
/* 4502 */    MCD::OPC_Decode, 142, 2, 10, // Opcode: ADDXCCC
/* 4506 */    MCD::OPC_FilterValue, 20, 9, 0, 0, // Skip to: 4520
/* 4511 */    MCD::OPC_CheckPredicate, 3, 212, 13, 0, // Skip to: 8056
/* 4516 */    MCD::OPC_Decode, 161, 2, 10, // Opcode: ARRAY32
/* 4520 */    MCD::OPC_FilterValue, 22, 9, 0, 0, // Skip to: 4534
/* 4525 */    MCD::OPC_CheckPredicate, 2, 198, 13, 0, // Skip to: 8056
/* 4530 */    MCD::OPC_Decode, 239, 5, 10, // Opcode: UMULXHI
/* 4534 */    MCD::OPC_FilterValue, 23, 16, 0, 0, // Skip to: 4555
/* 4539 */    MCD::OPC_CheckPredicate, 2, 184, 13, 0, // Skip to: 8056
/* 4544 */    MCD::OPC_CheckField, 14, 5, 0, 177, 13, 0, // Skip to: 8056
/* 4551 */    MCD::OPC_Decode, 191, 4, 56, // Opcode: LZCNT
/* 4555 */    MCD::OPC_FilterValue, 24, 9, 0, 0, // Skip to: 4569
/* 4560 */    MCD::OPC_CheckPredicate, 3, 163, 13, 0, // Skip to: 8056
/* 4565 */    MCD::OPC_Decode, 147, 2, 10, // Opcode: ALIGNADDR
/* 4569 */    MCD::OPC_FilterValue, 25, 9, 0, 0, // Skip to: 4583
/* 4574 */    MCD::OPC_CheckPredicate, 4, 149, 13, 0, // Skip to: 8056
/* 4579 */    MCD::OPC_Decode, 168, 2, 10, // Opcode: BMASK
/* 4583 */    MCD::OPC_FilterValue, 26, 9, 0, 0, // Skip to: 4597
/* 4588 */    MCD::OPC_CheckPredicate, 3, 135, 13, 0, // Skip to: 8056
/* 4593 */    MCD::OPC_Decode, 148, 2, 10, // Opcode: ALIGNADDRL
/* 4597 */    MCD::OPC_FilterValue, 27, 23, 0, 0, // Skip to: 4625
/* 4602 */    MCD::OPC_CheckPredicate, 2, 121, 13, 0, // Skip to: 8056
/* 4607 */    MCD::OPC_CheckField, 25, 5, 0, 114, 13, 0, // Skip to: 8056
/* 4614 */    MCD::OPC_CheckField, 14, 5, 0, 107, 13, 0, // Skip to: 8056
/* 4621 */    MCD::OPC_Decode, 217, 2, 57, // Opcode: CMASK8
/* 4625 */    MCD::OPC_FilterValue, 28, 9, 0, 0, // Skip to: 4639
/* 4630 */    MCD::OPC_CheckPredicate, 4, 93, 13, 0, // Skip to: 8056
/* 4635 */    MCD::OPC_Decode, 205, 2, 36, // Opcode: BSHUFFLE
/* 4639 */    MCD::OPC_FilterValue, 29, 23, 0, 0, // Skip to: 4667
/* 4644 */    MCD::OPC_CheckPredicate, 2, 79, 13, 0, // Skip to: 8056
/* 4649 */    MCD::OPC_CheckField, 25, 5, 0, 72, 13, 0, // Skip to: 8056
/* 4656 */    MCD::OPC_CheckField, 14, 5, 0, 65, 13, 0, // Skip to: 8056
/* 4663 */    MCD::OPC_Decode, 215, 2, 57, // Opcode: CMASK16
/* 4667 */    MCD::OPC_FilterValue, 31, 23, 0, 0, // Skip to: 4695
/* 4672 */    MCD::OPC_CheckPredicate, 2, 51, 13, 0, // Skip to: 8056
/* 4677 */    MCD::OPC_CheckField, 25, 5, 0, 44, 13, 0, // Skip to: 8056
/* 4684 */    MCD::OPC_CheckField, 14, 5, 0, 37, 13, 0, // Skip to: 8056
/* 4691 */    MCD::OPC_Decode, 216, 2, 57, // Opcode: CMASK32
/* 4695 */    MCD::OPC_FilterValue, 32, 9, 0, 0, // Skip to: 4709
/* 4700 */    MCD::OPC_CheckPredicate, 3, 23, 13, 0, // Skip to: 8056
/* 4705 */    MCD::OPC_Decode, 253, 2, 58, // Opcode: FCMPLE16
/* 4709 */    MCD::OPC_FilterValue, 33, 9, 0, 0, // Skip to: 4723
/* 4714 */    MCD::OPC_CheckPredicate, 2, 9, 13, 0, // Skip to: 8056
/* 4719 */    MCD::OPC_Decode, 239, 3, 36, // Opcode: FSLL16
/* 4723 */    MCD::OPC_FilterValue, 34, 9, 0, 0, // Skip to: 4737
/* 4728 */    MCD::OPC_CheckPredicate, 3, 251, 12, 0, // Skip to: 8056
/* 4733 */    MCD::OPC_Decode, 255, 2, 58, // Opcode: FCMPNE16
/* 4737 */    MCD::OPC_FilterValue, 35, 9, 0, 0, // Skip to: 4751
/* 4742 */    MCD::OPC_CheckPredicate, 2, 237, 12, 0, // Skip to: 8056
/* 4747 */    MCD::OPC_Decode, 251, 3, 36, // Opcode: FSRL16
/* 4751 */    MCD::OPC_FilterValue, 36, 9, 0, 0, // Skip to: 4765
/* 4756 */    MCD::OPC_CheckPredicate, 3, 223, 12, 0, // Skip to: 8056
/* 4761 */    MCD::OPC_Decode, 254, 2, 58, // Opcode: FCMPLE32
/* 4765 */    MCD::OPC_FilterValue, 37, 9, 0, 0, // Skip to: 4779
/* 4770 */    MCD::OPC_CheckPredicate, 2, 209, 12, 0, // Skip to: 8056
/* 4775 */    MCD::OPC_Decode, 240, 3, 36, // Opcode: FSLL32
/* 4779 */    MCD::OPC_FilterValue, 38, 9, 0, 0, // Skip to: 4793
/* 4784 */    MCD::OPC_CheckPredicate, 3, 195, 12, 0, // Skip to: 8056
/* 4789 */    MCD::OPC_Decode, 128, 3, 58, // Opcode: FCMPNE32
/* 4793 */    MCD::OPC_FilterValue, 39, 9, 0, 0, // Skip to: 4807
/* 4798 */    MCD::OPC_CheckPredicate, 2, 181, 12, 0, // Skip to: 8056
/* 4803 */    MCD::OPC_Decode, 252, 3, 36, // Opcode: FSRL32
/* 4807 */    MCD::OPC_FilterValue, 40, 9, 0, 0, // Skip to: 4821
/* 4812 */    MCD::OPC_CheckPredicate, 3, 167, 12, 0, // Skip to: 8056
/* 4817 */    MCD::OPC_Decode, 251, 2, 58, // Opcode: FCMPGT16
/* 4821 */    MCD::OPC_FilterValue, 41, 9, 0, 0, // Skip to: 4835
/* 4826 */    MCD::OPC_CheckPredicate, 2, 153, 12, 0, // Skip to: 8056
/* 4831 */    MCD::OPC_Decode, 237, 3, 36, // Opcode: FSLAS16
/* 4835 */    MCD::OPC_FilterValue, 42, 9, 0, 0, // Skip to: 4849
/* 4840 */    MCD::OPC_CheckPredicate, 3, 139, 12, 0, // Skip to: 8056
/* 4845 */    MCD::OPC_Decode, 249, 2, 58, // Opcode: FCMPEQ16
/* 4849 */    MCD::OPC_FilterValue, 43, 9, 0, 0, // Skip to: 4863
/* 4854 */    MCD::OPC_CheckPredicate, 2, 125, 12, 0, // Skip to: 8056
/* 4859 */    MCD::OPC_Decode, 245, 3, 36, // Opcode: FSRA16
/* 4863 */    MCD::OPC_FilterValue, 44, 9, 0, 0, // Skip to: 4877
/* 4868 */    MCD::OPC_CheckPredicate, 3, 111, 12, 0, // Skip to: 8056
/* 4873 */    MCD::OPC_Decode, 252, 2, 58, // Opcode: FCMPGT32
/* 4877 */    MCD::OPC_FilterValue, 45, 9, 0, 0, // Skip to: 4891
/* 4882 */    MCD::OPC_CheckPredicate, 2, 97, 12, 0, // Skip to: 8056
/* 4887 */    MCD::OPC_Decode, 238, 3, 36, // Opcode: FSLAS32
/* 4891 */    MCD::OPC_FilterValue, 46, 9, 0, 0, // Skip to: 4905
/* 4896 */    MCD::OPC_CheckPredicate, 3, 83, 12, 0, // Skip to: 8056
/* 4901 */    MCD::OPC_Decode, 250, 2, 58, // Opcode: FCMPEQ32
/* 4905 */    MCD::OPC_FilterValue, 47, 9, 0, 0, // Skip to: 4919
/* 4910 */    MCD::OPC_CheckPredicate, 2, 69, 12, 0, // Skip to: 8056
/* 4915 */    MCD::OPC_Decode, 246, 3, 36, // Opcode: FSRA32
/* 4919 */    MCD::OPC_FilterValue, 49, 9, 0, 0, // Skip to: 4933
/* 4924 */    MCD::OPC_CheckPredicate, 3, 55, 12, 0, // Skip to: 8056
/* 4929 */    MCD::OPC_Decode, 186, 3, 36, // Opcode: FMUL8X16
/* 4933 */    MCD::OPC_FilterValue, 51, 9, 0, 0, // Skip to: 4947
/* 4938 */    MCD::OPC_CheckPredicate, 3, 41, 12, 0, // Skip to: 8056
/* 4943 */    MCD::OPC_Decode, 188, 3, 36, // Opcode: FMUL8X16AU
/* 4947 */    MCD::OPC_FilterValue, 53, 9, 0, 0, // Skip to: 4961
/* 4952 */    MCD::OPC_CheckPredicate, 3, 27, 12, 0, // Skip to: 8056
/* 4957 */    MCD::OPC_Decode, 187, 3, 36, // Opcode: FMUL8X16AL
/* 4961 */    MCD::OPC_FilterValue, 54, 9, 0, 0, // Skip to: 4975
/* 4966 */    MCD::OPC_CheckPredicate, 3, 13, 12, 0, // Skip to: 8056
/* 4971 */    MCD::OPC_Decode, 184, 3, 36, // Opcode: FMUL8SUX16
/* 4975 */    MCD::OPC_FilterValue, 55, 9, 0, 0, // Skip to: 4989
/* 4980 */    MCD::OPC_CheckPredicate, 3, 255, 11, 0, // Skip to: 8056
/* 4985 */    MCD::OPC_Decode, 185, 3, 36, // Opcode: FMUL8ULX16
/* 4989 */    MCD::OPC_FilterValue, 56, 9, 0, 0, // Skip to: 5003
/* 4994 */    MCD::OPC_CheckPredicate, 3, 241, 11, 0, // Skip to: 8056
/* 4999 */    MCD::OPC_Decode, 190, 3, 36, // Opcode: FMULD8SUX16
/* 5003 */    MCD::OPC_FilterValue, 57, 9, 0, 0, // Skip to: 5017
/* 5008 */    MCD::OPC_CheckPredicate, 3, 227, 11, 0, // Skip to: 8056
/* 5013 */    MCD::OPC_Decode, 191, 3, 36, // Opcode: FMULD8ULX16
/* 5017 */    MCD::OPC_FilterValue, 58, 9, 0, 0, // Skip to: 5031
/* 5022 */    MCD::OPC_CheckPredicate, 3, 213, 11, 0, // Skip to: 8056
/* 5027 */    MCD::OPC_Decode, 221, 3, 36, // Opcode: FPACK32
/* 5031 */    MCD::OPC_FilterValue, 59, 16, 0, 0, // Skip to: 5052
/* 5036 */    MCD::OPC_CheckPredicate, 3, 199, 11, 0, // Skip to: 8056
/* 5041 */    MCD::OPC_CheckField, 14, 5, 0, 192, 11, 0, // Skip to: 8056
/* 5048 */    MCD::OPC_Decode, 220, 3, 33, // Opcode: FPACK16
/* 5052 */    MCD::OPC_FilterValue, 61, 16, 0, 0, // Skip to: 5073
/* 5057 */    MCD::OPC_CheckPredicate, 3, 178, 11, 0, // Skip to: 8056
/* 5062 */    MCD::OPC_CheckField, 14, 5, 0, 171, 11, 0, // Skip to: 8056
/* 5069 */    MCD::OPC_Decode, 222, 3, 33, // Opcode: FPACKFIX
/* 5073 */    MCD::OPC_FilterValue, 62, 9, 0, 0, // Skip to: 5087
/* 5078 */    MCD::OPC_CheckPredicate, 3, 157, 11, 0, // Skip to: 8056
/* 5083 */    MCD::OPC_Decode, 232, 4, 36, // Opcode: PDIST
/* 5087 */    MCD::OPC_FilterValue, 63, 9, 0, 0, // Skip to: 5101
/* 5092 */    MCD::OPC_CheckPredicate, 2, 143, 11, 0, // Skip to: 8056
/* 5097 */    MCD::OPC_Decode, 233, 4, 36, // Opcode: PDISTN
/* 5101 */    MCD::OPC_FilterValue, 64, 9, 0, 0, // Skip to: 5115
/* 5106 */    MCD::OPC_CheckPredicate, 2, 129, 11, 0, // Skip to: 8056
/* 5111 */    MCD::OPC_Decode, 153, 3, 36, // Opcode: FMEAN16
/* 5115 */    MCD::OPC_FilterValue, 66, 9, 0, 0, // Skip to: 5129
/* 5120 */    MCD::OPC_CheckPredicate, 2, 115, 11, 0, // Skip to: 8056
/* 5125 */    MCD::OPC_Decode, 227, 3, 36, // Opcode: FPADD64
/* 5129 */    MCD::OPC_FilterValue, 68, 9, 0, 0, // Skip to: 5143
/* 5134 */    MCD::OPC_CheckPredicate, 2, 101, 11, 0, // Skip to: 8056
/* 5139 */    MCD::OPC_Decode, 247, 2, 36, // Opcode: FCHKSM16
/* 5143 */    MCD::OPC_FilterValue, 72, 9, 0, 0, // Skip to: 5157
/* 5148 */    MCD::OPC_CheckPredicate, 3, 87, 11, 0, // Skip to: 8056
/* 5153 */    MCD::OPC_Decode, 238, 2, 36, // Opcode: FALIGNADATA
/* 5157 */    MCD::OPC_FilterValue, 75, 9, 0, 0, // Skip to: 5171
/* 5162 */    MCD::OPC_CheckPredicate, 3, 73, 11, 0, // Skip to: 8056
/* 5167 */    MCD::OPC_Decode, 228, 3, 36, // Opcode: FPMERGE
/* 5171 */    MCD::OPC_FilterValue, 77, 16, 0, 0, // Skip to: 5192
/* 5176 */    MCD::OPC_CheckPredicate, 3, 59, 11, 0, // Skip to: 8056
/* 5181 */    MCD::OPC_CheckField, 14, 5, 0, 52, 11, 0, // Skip to: 8056
/* 5188 */    MCD::OPC_Decode, 139, 3, 33, // Opcode: FEXPAND
/* 5192 */    MCD::OPC_FilterValue, 80, 9, 0, 0, // Skip to: 5206
/* 5197 */    MCD::OPC_CheckPredicate, 3, 38, 11, 0, // Skip to: 8056
/* 5202 */    MCD::OPC_Decode, 223, 3, 36, // Opcode: FPADD16
/* 5206 */    MCD::OPC_FilterValue, 81, 9, 0, 0, // Skip to: 5220
/* 5211 */    MCD::OPC_CheckPredicate, 3, 24, 11, 0, // Skip to: 8056
/* 5216 */    MCD::OPC_Decode, 224, 3, 36, // Opcode: FPADD16S
/* 5220 */    MCD::OPC_FilterValue, 82, 9, 0, 0, // Skip to: 5234
/* 5225 */    MCD::OPC_CheckPredicate, 3, 10, 11, 0, // Skip to: 8056
/* 5230 */    MCD::OPC_Decode, 225, 3, 36, // Opcode: FPADD32
/* 5234 */    MCD::OPC_FilterValue, 83, 9, 0, 0, // Skip to: 5248
/* 5239 */    MCD::OPC_CheckPredicate, 3, 252, 10, 0, // Skip to: 8056
/* 5244 */    MCD::OPC_Decode, 226, 3, 36, // Opcode: FPADD32S
/* 5248 */    MCD::OPC_FilterValue, 84, 9, 0, 0, // Skip to: 5262
/* 5253 */    MCD::OPC_CheckPredicate, 3, 238, 10, 0, // Skip to: 8056
/* 5258 */    MCD::OPC_Decode, 229, 3, 36, // Opcode: FPSUB16
/* 5262 */    MCD::OPC_FilterValue, 85, 9, 0, 0, // Skip to: 5276
/* 5267 */    MCD::OPC_CheckPredicate, 3, 224, 10, 0, // Skip to: 8056
/* 5272 */    MCD::OPC_Decode, 230, 3, 36, // Opcode: FPSUB16S
/* 5276 */    MCD::OPC_FilterValue, 86, 9, 0, 0, // Skip to: 5290
/* 5281 */    MCD::OPC_CheckPredicate, 3, 210, 10, 0, // Skip to: 8056
/* 5286 */    MCD::OPC_Decode, 231, 3, 36, // Opcode: FPSUB32
/* 5290 */    MCD::OPC_FilterValue, 87, 9, 0, 0, // Skip to: 5304
/* 5295 */    MCD::OPC_CheckPredicate, 3, 196, 10, 0, // Skip to: 8056
/* 5300 */    MCD::OPC_Decode, 232, 3, 36, // Opcode: FPSUB32S
/* 5304 */    MCD::OPC_FilterValue, 96, 23, 0, 0, // Skip to: 5332
/* 5309 */    MCD::OPC_CheckPredicate, 3, 182, 10, 0, // Skip to: 8056
/* 5314 */    MCD::OPC_CheckField, 14, 5, 0, 175, 10, 0, // Skip to: 8056
/* 5321 */    MCD::OPC_CheckField, 0, 5, 0, 168, 10, 0, // Skip to: 8056
/* 5328 */    MCD::OPC_Decode, 139, 4, 59, // Opcode: FZERO
/* 5332 */    MCD::OPC_FilterValue, 97, 23, 0, 0, // Skip to: 5360
/* 5337 */    MCD::OPC_CheckPredicate, 3, 154, 10, 0, // Skip to: 8056
/* 5342 */    MCD::OPC_CheckField, 14, 5, 0, 147, 10, 0, // Skip to: 8056
/* 5349 */    MCD::OPC_CheckField, 0, 5, 0, 140, 10, 0, // Skip to: 8056
/* 5356 */    MCD::OPC_Decode, 140, 4, 60, // Opcode: FZEROS
/* 5360 */    MCD::OPC_FilterValue, 98, 9, 0, 0, // Skip to: 5374
/* 5365 */    MCD::OPC_CheckPredicate, 3, 126, 10, 0, // Skip to: 8056
/* 5370 */    MCD::OPC_Decode, 205, 3, 36, // Opcode: FNOR
/* 5374 */    MCD::OPC_FilterValue, 99, 9, 0, 0, // Skip to: 5388
/* 5379 */    MCD::OPC_CheckPredicate, 3, 112, 10, 0, // Skip to: 8056
/* 5384 */    MCD::OPC_Decode, 206, 3, 35, // Opcode: FNORS
/* 5388 */    MCD::OPC_FilterValue, 100, 9, 0, 0, // Skip to: 5402
/* 5393 */    MCD::OPC_CheckPredicate, 3, 98, 10, 0, // Skip to: 8056
/* 5398 */    MCD::OPC_Decode, 242, 2, 36, // Opcode: FANDNOT2
/* 5402 */    MCD::OPC_FilterValue, 101, 9, 0, 0, // Skip to: 5416
/* 5407 */    MCD::OPC_CheckPredicate, 3, 84, 10, 0, // Skip to: 8056
/* 5412 */    MCD::OPC_Decode, 243, 2, 35, // Opcode: FANDNOT2S
/* 5416 */    MCD::OPC_FilterValue, 102, 16, 0, 0, // Skip to: 5437
/* 5421 */    MCD::OPC_CheckPredicate, 3, 70, 10, 0, // Skip to: 8056
/* 5426 */    MCD::OPC_CheckField, 14, 5, 0, 63, 10, 0, // Skip to: 8056
/* 5433 */    MCD::OPC_Decode, 209, 3, 33, // Opcode: FNOT2
/* 5437 */    MCD::OPC_FilterValue, 103, 16, 0, 0, // Skip to: 5458
/* 5442 */    MCD::OPC_CheckPredicate, 3, 49, 10, 0, // Skip to: 8056
/* 5447 */    MCD::OPC_CheckField, 14, 5, 0, 42, 10, 0, // Skip to: 8056
/* 5454 */    MCD::OPC_Decode, 210, 3, 32, // Opcode: FNOT2S
/* 5458 */    MCD::OPC_FilterValue, 104, 9, 0, 0, // Skip to: 5472
/* 5463 */    MCD::OPC_CheckPredicate, 3, 28, 10, 0, // Skip to: 8056
/* 5468 */    MCD::OPC_Decode, 240, 2, 36, // Opcode: FANDNOT1
/* 5472 */    MCD::OPC_FilterValue, 105, 9, 0, 0, // Skip to: 5486
/* 5477 */    MCD::OPC_CheckPredicate, 3, 14, 10, 0, // Skip to: 8056
/* 5482 */    MCD::OPC_Decode, 241, 2, 35, // Opcode: FANDNOT1S
/* 5486 */    MCD::OPC_FilterValue, 106, 16, 0, 0, // Skip to: 5507
/* 5491 */    MCD::OPC_CheckPredicate, 3, 0, 10, 0, // Skip to: 8056
/* 5496 */    MCD::OPC_CheckField, 0, 5, 0, 249, 9, 0, // Skip to: 8056
/* 5503 */    MCD::OPC_Decode, 207, 3, 61, // Opcode: FNOT1
/* 5507 */    MCD::OPC_FilterValue, 107, 16, 0, 0, // Skip to: 5528
/* 5512 */    MCD::OPC_CheckPredicate, 3, 235, 9, 0, // Skip to: 8056
/* 5517 */    MCD::OPC_CheckField, 0, 5, 0, 228, 9, 0, // Skip to: 8056
/* 5524 */    MCD::OPC_Decode, 208, 3, 62, // Opcode: FNOT1S
/* 5528 */    MCD::OPC_FilterValue, 108, 9, 0, 0, // Skip to: 5542
/* 5533 */    MCD::OPC_CheckPredicate, 3, 214, 9, 0, // Skip to: 8056
/* 5538 */    MCD::OPC_Decode, 134, 4, 36, // Opcode: FXOR
/* 5542 */    MCD::OPC_FilterValue, 109, 9, 0, 0, // Skip to: 5556
/* 5547 */    MCD::OPC_CheckPredicate, 3, 200, 9, 0, // Skip to: 8056
/* 5552 */    MCD::OPC_Decode, 135, 4, 35, // Opcode: FXORS
/* 5556 */    MCD::OPC_FilterValue, 110, 9, 0, 0, // Skip to: 5570
/* 5561 */    MCD::OPC_CheckPredicate, 3, 186, 9, 0, // Skip to: 8056
/* 5566 */    MCD::OPC_Decode, 196, 3, 36, // Opcode: FNAND
/* 5570 */    MCD::OPC_FilterValue, 111, 9, 0, 0, // Skip to: 5584
/* 5575 */    MCD::OPC_CheckPredicate, 3, 172, 9, 0, // Skip to: 8056
/* 5580 */    MCD::OPC_Decode, 197, 3, 35, // Opcode: FNANDS
/* 5584 */    MCD::OPC_FilterValue, 112, 9, 0, 0, // Skip to: 5598
/* 5589 */    MCD::OPC_CheckPredicate, 3, 158, 9, 0, // Skip to: 8056
/* 5594 */    MCD::OPC_Decode, 239, 2, 36, // Opcode: FAND
/* 5598 */    MCD::OPC_FilterValue, 113, 9, 0, 0, // Skip to: 5612
/* 5603 */    MCD::OPC_CheckPredicate, 3, 144, 9, 0, // Skip to: 8056
/* 5608 */    MCD::OPC_Decode, 244, 2, 35, // Opcode: FANDS
/* 5612 */    MCD::OPC_FilterValue, 114, 9, 0, 0, // Skip to: 5626
/* 5617 */    MCD::OPC_CheckPredicate, 3, 130, 9, 0, // Skip to: 8056
/* 5622 */    MCD::OPC_Decode, 132, 4, 36, // Opcode: FXNOR
/* 5626 */    MCD::OPC_FilterValue, 115, 9, 0, 0, // Skip to: 5640
/* 5631 */    MCD::OPC_CheckPredicate, 3, 116, 9, 0, // Skip to: 8056
/* 5636 */    MCD::OPC_Decode, 133, 4, 35, // Opcode: FXNORS
/* 5640 */    MCD::OPC_FilterValue, 116, 16, 0, 0, // Skip to: 5661
/* 5645 */    MCD::OPC_CheckPredicate, 3, 102, 9, 0, // Skip to: 8056
/* 5650 */    MCD::OPC_CheckField, 0, 5, 0, 95, 9, 0, // Skip to: 8056
/* 5657 */    MCD::OPC_Decode, 247, 3, 61, // Opcode: FSRC1
/* 5661 */    MCD::OPC_FilterValue, 117, 16, 0, 0, // Skip to: 5682
/* 5666 */    MCD::OPC_CheckPredicate, 3, 81, 9, 0, // Skip to: 8056
/* 5671 */    MCD::OPC_CheckField, 0, 5, 0, 74, 9, 0, // Skip to: 8056
/* 5678 */    MCD::OPC_Decode, 248, 3, 62, // Opcode: FSRC1S
/* 5682 */    MCD::OPC_FilterValue, 118, 9, 0, 0, // Skip to: 5696
/* 5687 */    MCD::OPC_CheckPredicate, 3, 60, 9, 0, // Skip to: 8056
/* 5692 */    MCD::OPC_Decode, 217, 3, 36, // Opcode: FORNOT2
/* 5696 */    MCD::OPC_FilterValue, 119, 9, 0, 0, // Skip to: 5710
/* 5701 */    MCD::OPC_CheckPredicate, 3, 46, 9, 0, // Skip to: 8056
/* 5706 */    MCD::OPC_Decode, 218, 3, 35, // Opcode: FORNOT2S
/* 5710 */    MCD::OPC_FilterValue, 120, 16, 0, 0, // Skip to: 5731
/* 5715 */    MCD::OPC_CheckPredicate, 3, 32, 9, 0, // Skip to: 8056
/* 5720 */    MCD::OPC_CheckField, 14, 5, 0, 25, 9, 0, // Skip to: 8056
/* 5727 */    MCD::OPC_Decode, 249, 3, 33, // Opcode: FSRC2
/* 5731 */    MCD::OPC_FilterValue, 121, 16, 0, 0, // Skip to: 5752
/* 5736 */    MCD::OPC_CheckPredicate, 3, 11, 9, 0, // Skip to: 8056
/* 5741 */    MCD::OPC_CheckField, 14, 5, 0, 4, 9, 0, // Skip to: 8056
/* 5748 */    MCD::OPC_Decode, 250, 3, 32, // Opcode: FSRC2S
/* 5752 */    MCD::OPC_FilterValue, 122, 9, 0, 0, // Skip to: 5766
/* 5757 */    MCD::OPC_CheckPredicate, 3, 246, 8, 0, // Skip to: 8056
/* 5762 */    MCD::OPC_Decode, 215, 3, 36, // Opcode: FORNOT1
/* 5766 */    MCD::OPC_FilterValue, 123, 9, 0, 0, // Skip to: 5780
/* 5771 */    MCD::OPC_CheckPredicate, 3, 232, 8, 0, // Skip to: 8056
/* 5776 */    MCD::OPC_Decode, 216, 3, 35, // Opcode: FORNOT1S
/* 5780 */    MCD::OPC_FilterValue, 124, 9, 0, 0, // Skip to: 5794
/* 5785 */    MCD::OPC_CheckPredicate, 3, 218, 8, 0, // Skip to: 8056
/* 5790 */    MCD::OPC_Decode, 214, 3, 36, // Opcode: FOR
/* 5794 */    MCD::OPC_FilterValue, 125, 9, 0, 0, // Skip to: 5808
/* 5799 */    MCD::OPC_CheckPredicate, 3, 204, 8, 0, // Skip to: 8056
/* 5804 */    MCD::OPC_Decode, 219, 3, 35, // Opcode: FORS
/* 5808 */    MCD::OPC_FilterValue, 126, 23, 0, 0, // Skip to: 5836
/* 5813 */    MCD::OPC_CheckPredicate, 3, 190, 8, 0, // Skip to: 8056
/* 5818 */    MCD::OPC_CheckField, 14, 5, 0, 183, 8, 0, // Skip to: 8056
/* 5825 */    MCD::OPC_CheckField, 0, 5, 0, 176, 8, 0, // Skip to: 8056
/* 5832 */    MCD::OPC_Decode, 212, 3, 59, // Opcode: FONE
/* 5836 */    MCD::OPC_FilterValue, 127, 23, 0, 0, // Skip to: 5864
/* 5841 */    MCD::OPC_CheckPredicate, 3, 162, 8, 0, // Skip to: 8056
/* 5846 */    MCD::OPC_CheckField, 14, 5, 0, 155, 8, 0, // Skip to: 8056
/* 5853 */    MCD::OPC_CheckField, 0, 5, 0, 148, 8, 0, // Skip to: 8056
/* 5860 */    MCD::OPC_Decode, 213, 3, 60, // Opcode: FONES
/* 5864 */    MCD::OPC_FilterValue, 128, 1, 30, 0, 0, // Skip to: 5900
/* 5870 */    MCD::OPC_CheckPredicate, 3, 133, 8, 0, // Skip to: 8056
/* 5875 */    MCD::OPC_CheckField, 25, 5, 0, 126, 8, 0, // Skip to: 8056
/* 5882 */    MCD::OPC_CheckField, 14, 5, 0, 119, 8, 0, // Skip to: 8056
/* 5889 */    MCD::OPC_CheckField, 0, 5, 0, 112, 8, 0, // Skip to: 8056
/* 5896 */    MCD::OPC_Decode, 133, 5, 4, // Opcode: SHUTDOWN
/* 5900 */    MCD::OPC_FilterValue, 129, 1, 30, 0, 0, // Skip to: 5936
/* 5906 */    MCD::OPC_CheckPredicate, 4, 97, 8, 0, // Skip to: 8056
/* 5911 */    MCD::OPC_CheckField, 25, 5, 0, 90, 8, 0, // Skip to: 8056
/* 5918 */    MCD::OPC_CheckField, 14, 5, 0, 83, 8, 0, // Skip to: 8056
/* 5925 */    MCD::OPC_CheckField, 0, 5, 0, 76, 8, 0, // Skip to: 8056
/* 5932 */    MCD::OPC_Decode, 134, 5, 4, // Opcode: SIAM
/* 5936 */    MCD::OPC_FilterValue, 144, 2, 16, 0, 0, // Skip to: 5958
/* 5942 */    MCD::OPC_CheckPredicate, 2, 61, 8, 0, // Skip to: 8056
/* 5947 */    MCD::OPC_CheckField, 14, 5, 0, 54, 8, 0, // Skip to: 8056
/* 5954 */    MCD::OPC_Decode, 193, 4, 63, // Opcode: MOVDTOX
/* 5958 */    MCD::OPC_FilterValue, 145, 2, 16, 0, 0, // Skip to: 5980
/* 5964 */    MCD::OPC_CheckPredicate, 2, 39, 8, 0, // Skip to: 8056
/* 5969 */    MCD::OPC_CheckField, 14, 5, 0, 32, 8, 0, // Skip to: 8056
/* 5976 */    MCD::OPC_Decode, 211, 4, 63, // Opcode: MOVSTOUW
/* 5980 */    MCD::OPC_FilterValue, 147, 2, 16, 0, 0, // Skip to: 6002
/* 5986 */    MCD::OPC_CheckPredicate, 2, 17, 8, 0, // Skip to: 8056
/* 5991 */    MCD::OPC_CheckField, 14, 5, 0, 10, 8, 0, // Skip to: 8056
/* 5998 */    MCD::OPC_Decode, 210, 4, 63, // Opcode: MOVSTOSW
/* 6002 */    MCD::OPC_FilterValue, 149, 2, 9, 0, 0, // Skip to: 6017
/* 6008 */    MCD::OPC_CheckPredicate, 2, 251, 7, 0, // Skip to: 8056
/* 6013 */    MCD::OPC_Decode, 136, 6, 10, // Opcode: XMULX
/* 6017 */    MCD::OPC_FilterValue, 151, 2, 9, 0, 0, // Skip to: 6032
/* 6023 */    MCD::OPC_CheckPredicate, 2, 236, 7, 0, // Skip to: 8056
/* 6028 */    MCD::OPC_Decode, 137, 6, 10, // Opcode: XMULXHI
/* 6032 */    MCD::OPC_FilterValue, 152, 2, 16, 0, 0, // Skip to: 6054
/* 6038 */    MCD::OPC_CheckPredicate, 2, 221, 7, 0, // Skip to: 8056
/* 6043 */    MCD::OPC_CheckField, 14, 5, 0, 214, 7, 0, // Skip to: 8056
/* 6050 */    MCD::OPC_Decode, 215, 4, 64, // Opcode: MOVXTOD
/* 6054 */    MCD::OPC_FilterValue, 153, 2, 16, 0, 0, // Skip to: 6076
/* 6060 */    MCD::OPC_CheckPredicate, 2, 199, 7, 0, // Skip to: 8056
/* 6065 */    MCD::OPC_CheckField, 14, 5, 0, 192, 7, 0, // Skip to: 8056
/* 6072 */    MCD::OPC_Decode, 212, 4, 64, // Opcode: MOVWTOS
/* 6076 */    MCD::OPC_FilterValue, 209, 2, 9, 0, 0, // Skip to: 6091
/* 6082 */    MCD::OPC_CheckPredicate, 2, 177, 7, 0, // Skip to: 8056
/* 6087 */    MCD::OPC_Decode, 148, 3, 54, // Opcode: FLCMPS
/* 6091 */    MCD::OPC_FilterValue, 210, 2, 167, 7, 0, // Skip to: 8056
/* 6097 */    MCD::OPC_CheckPredicate, 2, 162, 7, 0, // Skip to: 8056
/* 6102 */    MCD::OPC_Decode, 147, 3, 54, // Opcode: FLCMPD
/* 6106 */    MCD::OPC_FilterValue, 56, 28, 0, 0, // Skip to: 6139
/* 6111 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6114 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6130
/* 6119 */    MCD::OPC_CheckField, 5, 8, 0, 138, 7, 0, // Skip to: 8056
/* 6126 */    MCD::OPC_Decode, 144, 4, 65, // Opcode: JMPLrr
/* 6130 */    MCD::OPC_FilterValue, 1, 129, 7, 0, // Skip to: 8056
/* 6135 */    MCD::OPC_Decode, 143, 4, 65, // Opcode: JMPLri
/* 6139 */    MCD::OPC_FilterValue, 57, 42, 0, 0, // Skip to: 6186
/* 6144 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6147 */    MCD::OPC_FilterValue, 0, 18, 0, 0, // Skip to: 6170
/* 6152 */    MCD::OPC_CheckField, 25, 5, 0, 105, 7, 0, // Skip to: 8056
/* 6159 */    MCD::OPC_CheckField, 5, 8, 0, 98, 7, 0, // Skip to: 8056
/* 6166 */    MCD::OPC_Decode, 250, 4, 66, // Opcode: RETTrr
/* 6170 */    MCD::OPC_FilterValue, 1, 89, 7, 0, // Skip to: 8056
/* 6175 */    MCD::OPC_CheckField, 25, 5, 0, 82, 7, 0, // Skip to: 8056
/* 6182 */    MCD::OPC_Decode, 249, 4, 66, // Opcode: RETTri
/* 6186 */    MCD::OPC_FilterValue, 58, 119, 0, 0, // Skip to: 6310
/* 6191 */    MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 6194 */    MCD::OPC_FilterValue, 16, 18, 0, 0, // Skip to: 6217
/* 6199 */    MCD::OPC_CheckField, 29, 1, 0, 58, 7, 0, // Skip to: 8056
/* 6206 */    MCD::OPC_CheckField, 5, 3, 0, 51, 7, 0, // Skip to: 8056
/* 6213 */    MCD::OPC_Decode, 228, 5, 67, // Opcode: TXCCrr
/* 6217 */    MCD::OPC_FilterValue, 32, 72, 0, 0, // Skip to: 6294
/* 6222 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 6225 */    MCD::OPC_FilterValue, 1, 18, 0, 0, // Skip to: 6248
/* 6230 */    MCD::OPC_CheckField, 25, 5, 8, 27, 7, 0, // Skip to: 8056
/* 6237 */    MCD::OPC_CheckField, 14, 5, 0, 20, 7, 0, // Skip to: 8056
/* 6244 */    MCD::OPC_Decode, 205, 5, 4, // Opcode: TA1
/* 6248 */    MCD::OPC_FilterValue, 3, 18, 0, 0, // Skip to: 6271
/* 6253 */    MCD::OPC_CheckField, 25, 5, 8, 4, 7, 0, // Skip to: 8056
/* 6260 */    MCD::OPC_CheckField, 14, 5, 0, 253, 6, 0, // Skip to: 8056
/* 6267 */    MCD::OPC_Decode, 206, 5, 4, // Opcode: TA3
/* 6271 */    MCD::OPC_FilterValue, 5, 244, 6, 0, // Skip to: 8056
/* 6276 */    MCD::OPC_CheckField, 25, 5, 8, 237, 6, 0, // Skip to: 8056
/* 6283 */    MCD::OPC_CheckField, 14, 5, 0, 230, 6, 0, // Skip to: 8056
/* 6290 */    MCD::OPC_Decode, 207, 5, 4, // Opcode: TA5
/* 6294 */    MCD::OPC_FilterValue, 48, 221, 6, 0, // Skip to: 8056
/* 6299 */    MCD::OPC_CheckField, 29, 1, 0, 214, 6, 0, // Skip to: 8056
/* 6306 */    MCD::OPC_Decode, 227, 5, 68, // Opcode: TXCCri
/* 6310 */    MCD::OPC_FilterValue, 59, 62, 0, 0, // Skip to: 6377
/* 6315 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6318 */    MCD::OPC_FilterValue, 0, 38, 0, 0, // Skip to: 6361
/* 6323 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 6326 */    MCD::OPC_FilterValue, 0, 189, 6, 0, // Skip to: 8056
/* 6331 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6334 */    MCD::OPC_FilterValue, 0, 181, 6, 0, // Skip to: 8056
/* 6339 */    MCD::OPC_CheckField, 14, 5, 0, 11, 0, 0, // Skip to: 6357
/* 6346 */    MCD::OPC_CheckField, 0, 5, 0, 4, 0, 0, // Skip to: 6357
/* 6353 */    MCD::OPC_Decode, 149, 3, 4, // Opcode: FLUSH
/* 6357 */    MCD::OPC_Decode, 152, 3, 4, // Opcode: FLUSHrr
/* 6361 */    MCD::OPC_FilterValue, 1, 154, 6, 0, // Skip to: 8056
/* 6366 */    MCD::OPC_CheckField, 25, 5, 0, 147, 6, 0, // Skip to: 8056
/* 6373 */    MCD::OPC_Decode, 151, 3, 4, // Opcode: FLUSHri
/* 6377 */    MCD::OPC_FilterValue, 60, 28, 0, 0, // Skip to: 6410
/* 6382 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6385 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6401
/* 6390 */    MCD::OPC_CheckField, 5, 8, 0, 123, 6, 0, // Skip to: 8056
/* 6397 */    MCD::OPC_Decode, 252, 4, 8, // Opcode: SAVErr
/* 6401 */    MCD::OPC_FilterValue, 1, 114, 6, 0, // Skip to: 8056
/* 6406 */    MCD::OPC_Decode, 251, 4, 9, // Opcode: SAVEri
/* 6410 */    MCD::OPC_FilterValue, 61, 28, 0, 0, // Skip to: 6443
/* 6415 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6418 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6434
/* 6423 */    MCD::OPC_CheckField, 5, 8, 0, 90, 6, 0, // Skip to: 8056
/* 6430 */    MCD::OPC_Decode, 246, 4, 8, // Opcode: RESTORErr
/* 6434 */    MCD::OPC_FilterValue, 1, 81, 6, 0, // Skip to: 8056
/* 6439 */    MCD::OPC_Decode, 245, 4, 9, // Opcode: RESTOREri
/* 6443 */    MCD::OPC_FilterValue, 62, 28, 0, 0, // Skip to: 6476
/* 6448 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6451 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6467
/* 6456 */    MCD::OPC_CheckField, 5, 8, 0, 57, 6, 0, // Skip to: 8056
/* 6463 */    MCD::OPC_Decode, 236, 5, 8, // Opcode: UMACrr
/* 6467 */    MCD::OPC_FilterValue, 1, 48, 6, 0, // Skip to: 8056
/* 6472 */    MCD::OPC_Decode, 235, 5, 9, // Opcode: UMACri
/* 6476 */    MCD::OPC_FilterValue, 63, 39, 6, 0, // Skip to: 8056
/* 6481 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6484 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6500
/* 6489 */    MCD::OPC_CheckField, 5, 8, 0, 24, 6, 0, // Skip to: 8056
/* 6496 */    MCD::OPC_Decode, 141, 5, 8, // Opcode: SMACrr
/* 6500 */    MCD::OPC_FilterValue, 1, 15, 6, 0, // Skip to: 8056
/* 6505 */    MCD::OPC_Decode, 140, 5, 9, // Opcode: SMACri
/* 6509 */    MCD::OPC_FilterValue, 3, 6, 6, 0, // Skip to: 8056
/* 6514 */    MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 6517 */    MCD::OPC_FilterValue, 0, 28, 0, 0, // Skip to: 6550
/* 6522 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6525 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6541
/* 6530 */    MCD::OPC_CheckField, 5, 8, 0, 239, 5, 0, // Skip to: 8056
/* 6537 */    MCD::OPC_Decode, 188, 4, 69, // Opcode: LDrr
/* 6541 */    MCD::OPC_FilterValue, 1, 230, 5, 0, // Skip to: 8056
/* 6546 */    MCD::OPC_Decode, 187, 4, 69, // Opcode: LDri
/* 6550 */    MCD::OPC_FilterValue, 1, 28, 0, 0, // Skip to: 6583
/* 6555 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6558 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6574
/* 6563 */    MCD::OPC_CheckField, 5, 8, 0, 206, 5, 0, // Skip to: 8056
/* 6570 */    MCD::OPC_Decode, 179, 4, 69, // Opcode: LDUBrr
/* 6574 */    MCD::OPC_FilterValue, 1, 197, 5, 0, // Skip to: 8056
/* 6579 */    MCD::OPC_Decode, 178, 4, 69, // Opcode: LDUBri
/* 6583 */    MCD::OPC_FilterValue, 2, 28, 0, 0, // Skip to: 6616
/* 6588 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6591 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6607
/* 6596 */    MCD::OPC_CheckField, 5, 8, 0, 173, 5, 0, // Skip to: 8056
/* 6603 */    MCD::OPC_Decode, 182, 4, 69, // Opcode: LDUHrr
/* 6607 */    MCD::OPC_FilterValue, 1, 164, 5, 0, // Skip to: 8056
/* 6612 */    MCD::OPC_Decode, 181, 4, 69, // Opcode: LDUHri
/* 6616 */    MCD::OPC_FilterValue, 3, 28, 0, 0, // Skip to: 6649
/* 6621 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6624 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6640
/* 6629 */    MCD::OPC_CheckField, 5, 8, 0, 140, 5, 0, // Skip to: 8056
/* 6636 */    MCD::OPC_Decode, 157, 4, 70, // Opcode: LDDrr
/* 6640 */    MCD::OPC_FilterValue, 1, 131, 5, 0, // Skip to: 8056
/* 6645 */    MCD::OPC_Decode, 156, 4, 70, // Opcode: LDDri
/* 6649 */    MCD::OPC_FilterValue, 4, 28, 0, 0, // Skip to: 6682
/* 6654 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6657 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6673
/* 6662 */    MCD::OPC_CheckField, 5, 8, 0, 107, 5, 0, // Skip to: 8056
/* 6669 */    MCD::OPC_Decode, 191, 5, 71, // Opcode: STrr
/* 6673 */    MCD::OPC_FilterValue, 1, 98, 5, 0, // Skip to: 8056
/* 6678 */    MCD::OPC_Decode, 190, 5, 71, // Opcode: STri
/* 6682 */    MCD::OPC_FilterValue, 5, 28, 0, 0, // Skip to: 6715
/* 6687 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6690 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6706
/* 6695 */    MCD::OPC_CheckField, 5, 8, 0, 74, 5, 0, // Skip to: 8056
/* 6702 */    MCD::OPC_Decode, 158, 5, 71, // Opcode: STBrr
/* 6706 */    MCD::OPC_FilterValue, 1, 65, 5, 0, // Skip to: 8056
/* 6711 */    MCD::OPC_Decode, 157, 5, 71, // Opcode: STBri
/* 6715 */    MCD::OPC_FilterValue, 6, 28, 0, 0, // Skip to: 6748
/* 6720 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6723 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6739
/* 6728 */    MCD::OPC_CheckField, 5, 8, 0, 41, 5, 0, // Skip to: 8056
/* 6735 */    MCD::OPC_Decode, 182, 5, 71, // Opcode: STHrr
/* 6739 */    MCD::OPC_FilterValue, 1, 32, 5, 0, // Skip to: 8056
/* 6744 */    MCD::OPC_Decode, 181, 5, 71, // Opcode: STHri
/* 6748 */    MCD::OPC_FilterValue, 7, 28, 0, 0, // Skip to: 6781
/* 6753 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6756 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6772
/* 6761 */    MCD::OPC_CheckField, 5, 8, 0, 8, 5, 0, // Skip to: 8056
/* 6768 */    MCD::OPC_Decode, 174, 5, 72, // Opcode: STDrr
/* 6772 */    MCD::OPC_FilterValue, 1, 255, 4, 0, // Skip to: 8056
/* 6777 */    MCD::OPC_Decode, 173, 5, 72, // Opcode: STDri
/* 6781 */    MCD::OPC_FilterValue, 8, 28, 0, 0, // Skip to: 6814
/* 6786 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6789 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6805
/* 6794 */    MCD::OPC_CheckField, 5, 8, 0, 231, 4, 0, // Skip to: 8056
/* 6801 */    MCD::OPC_Decode, 176, 4, 69, // Opcode: LDSWrr
/* 6805 */    MCD::OPC_FilterValue, 1, 222, 4, 0, // Skip to: 8056
/* 6810 */    MCD::OPC_Decode, 175, 4, 69, // Opcode: LDSWri
/* 6814 */    MCD::OPC_FilterValue, 9, 28, 0, 0, // Skip to: 6847
/* 6819 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6822 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6838
/* 6827 */    MCD::OPC_CheckField, 5, 8, 0, 198, 4, 0, // Skip to: 8056
/* 6834 */    MCD::OPC_Decode, 168, 4, 69, // Opcode: LDSBrr
/* 6838 */    MCD::OPC_FilterValue, 1, 189, 4, 0, // Skip to: 8056
/* 6843 */    MCD::OPC_Decode, 167, 4, 69, // Opcode: LDSBri
/* 6847 */    MCD::OPC_FilterValue, 10, 28, 0, 0, // Skip to: 6880
/* 6852 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6855 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6871
/* 6860 */    MCD::OPC_CheckField, 5, 8, 0, 165, 4, 0, // Skip to: 8056
/* 6867 */    MCD::OPC_Decode, 171, 4, 69, // Opcode: LDSHrr
/* 6871 */    MCD::OPC_FilterValue, 1, 156, 4, 0, // Skip to: 8056
/* 6876 */    MCD::OPC_Decode, 170, 4, 69, // Opcode: LDSHri
/* 6880 */    MCD::OPC_FilterValue, 11, 28, 0, 0, // Skip to: 6913
/* 6885 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6888 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6904
/* 6893 */    MCD::OPC_CheckField, 5, 8, 0, 132, 4, 0, // Skip to: 8056
/* 6900 */    MCD::OPC_Decode, 186, 4, 69, // Opcode: LDXrr
/* 6904 */    MCD::OPC_FilterValue, 1, 123, 4, 0, // Skip to: 8056
/* 6909 */    MCD::OPC_Decode, 185, 4, 69, // Opcode: LDXri
/* 6913 */    MCD::OPC_FilterValue, 13, 28, 0, 0, // Skip to: 6946
/* 6918 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6921 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6937
/* 6926 */    MCD::OPC_CheckField, 5, 8, 0, 99, 4, 0, // Skip to: 8056
/* 6933 */    MCD::OPC_Decode, 174, 4, 4, // Opcode: LDSTUBrr
/* 6937 */    MCD::OPC_FilterValue, 1, 90, 4, 0, // Skip to: 8056
/* 6942 */    MCD::OPC_Decode, 173, 4, 4, // Opcode: LDSTUBri
/* 6946 */    MCD::OPC_FilterValue, 14, 28, 0, 0, // Skip to: 6979
/* 6951 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6954 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6970
/* 6959 */    MCD::OPC_CheckField, 5, 8, 0, 66, 4, 0, // Skip to: 8056
/* 6966 */    MCD::OPC_Decode, 189, 5, 71, // Opcode: STXrr
/* 6970 */    MCD::OPC_FilterValue, 1, 57, 4, 0, // Skip to: 8056
/* 6975 */    MCD::OPC_Decode, 188, 5, 71, // Opcode: STXri
/* 6979 */    MCD::OPC_FilterValue, 15, 28, 0, 0, // Skip to: 7012
/* 6984 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6987 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 7003
/* 6992 */    MCD::OPC_CheckField, 5, 8, 0, 33, 4, 0, // Skip to: 8056
/* 6999 */    MCD::OPC_Decode, 204, 5, 73, // Opcode: SWAPrr
/* 7003 */    MCD::OPC_FilterValue, 1, 24, 4, 0, // Skip to: 8056
/* 7008 */    MCD::OPC_Decode, 203, 5, 73, // Opcode: SWAPri
/* 7012 */    MCD::OPC_FilterValue, 16, 11, 0, 0, // Skip to: 7028
/* 7017 */    MCD::OPC_CheckField, 13, 1, 0, 8, 4, 0, // Skip to: 8056
/* 7024 */    MCD::OPC_Decode, 145, 4, 69, // Opcode: LDArr
/* 7028 */    MCD::OPC_FilterValue, 17, 11, 0, 0, // Skip to: 7044
/* 7033 */    MCD::OPC_CheckField, 13, 1, 0, 248, 3, 0, // Skip to: 8056
/* 7040 */    MCD::OPC_Decode, 177, 4, 69, // Opcode: LDUBArr
/* 7044 */    MCD::OPC_FilterValue, 18, 11, 0, 0, // Skip to: 7060
/* 7049 */    MCD::OPC_CheckField, 13, 1, 0, 232, 3, 0, // Skip to: 8056
/* 7056 */    MCD::OPC_Decode, 180, 4, 69, // Opcode: LDUHArr
/* 7060 */    MCD::OPC_FilterValue, 19, 11, 0, 0, // Skip to: 7076
/* 7065 */    MCD::OPC_CheckField, 13, 1, 0, 216, 3, 0, // Skip to: 8056
/* 7072 */    MCD::OPC_Decode, 150, 4, 70, // Opcode: LDDArr
/* 7076 */    MCD::OPC_FilterValue, 20, 11, 0, 0, // Skip to: 7092
/* 7081 */    MCD::OPC_CheckField, 13, 1, 0, 200, 3, 0, // Skip to: 8056
/* 7088 */    MCD::OPC_Decode, 154, 5, 71, // Opcode: STArr
/* 7092 */    MCD::OPC_FilterValue, 21, 11, 0, 0, // Skip to: 7108
/* 7097 */    MCD::OPC_CheckField, 13, 1, 0, 184, 3, 0, // Skip to: 8056
/* 7104 */    MCD::OPC_Decode, 156, 5, 71, // Opcode: STBArr
/* 7108 */    MCD::OPC_FilterValue, 22, 11, 0, 0, // Skip to: 7124
/* 7113 */    MCD::OPC_CheckField, 13, 1, 0, 168, 3, 0, // Skip to: 8056
/* 7120 */    MCD::OPC_Decode, 180, 5, 71, // Opcode: STHArr
/* 7124 */    MCD::OPC_FilterValue, 23, 11, 0, 0, // Skip to: 7140
/* 7129 */    MCD::OPC_CheckField, 13, 1, 0, 152, 3, 0, // Skip to: 8056
/* 7136 */    MCD::OPC_Decode, 163, 5, 72, // Opcode: STDArr
/* 7140 */    MCD::OPC_FilterValue, 25, 11, 0, 0, // Skip to: 7156
/* 7145 */    MCD::OPC_CheckField, 13, 1, 0, 136, 3, 0, // Skip to: 8056
/* 7152 */    MCD::OPC_Decode, 166, 4, 69, // Opcode: LDSBArr
/* 7156 */    MCD::OPC_FilterValue, 26, 11, 0, 0, // Skip to: 7172
/* 7161 */    MCD::OPC_CheckField, 13, 1, 0, 120, 3, 0, // Skip to: 8056
/* 7168 */    MCD::OPC_Decode, 169, 4, 69, // Opcode: LDSHArr
/* 7172 */    MCD::OPC_FilterValue, 29, 11, 0, 0, // Skip to: 7188
/* 7177 */    MCD::OPC_CheckField, 13, 1, 0, 104, 3, 0, // Skip to: 8056
/* 7184 */    MCD::OPC_Decode, 172, 4, 74, // Opcode: LDSTUBArr
/* 7188 */    MCD::OPC_FilterValue, 31, 11, 0, 0, // Skip to: 7204
/* 7193 */    MCD::OPC_CheckField, 13, 1, 0, 88, 3, 0, // Skip to: 8056
/* 7200 */    MCD::OPC_Decode, 202, 5, 73, // Opcode: SWAPArr
/* 7204 */    MCD::OPC_FilterValue, 32, 28, 0, 0, // Skip to: 7237
/* 7209 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7212 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 7228
/* 7217 */    MCD::OPC_CheckField, 5, 8, 0, 64, 3, 0, // Skip to: 8056
/* 7224 */    MCD::OPC_Decode, 162, 4, 75, // Opcode: LDFrr
/* 7228 */    MCD::OPC_FilterValue, 1, 55, 3, 0, // Skip to: 8056
/* 7233 */    MCD::OPC_Decode, 161, 4, 75, // Opcode: LDFri
/* 7237 */    MCD::OPC_FilterValue, 33, 79, 0, 0, // Skip to: 7321
/* 7242 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7245 */    MCD::OPC_FilterValue, 0, 40, 0, 0, // Skip to: 7290
/* 7250 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 7253 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 7269
/* 7258 */    MCD::OPC_CheckField, 5, 8, 0, 23, 3, 0, // Skip to: 8056
/* 7265 */    MCD::OPC_Decode, 160, 4, 75, // Opcode: LDFSRrr
/* 7269 */    MCD::OPC_FilterValue, 1, 14, 3, 0, // Skip to: 8056
/* 7274 */    MCD::OPC_CheckPredicate, 0, 9, 3, 0, // Skip to: 8056
/* 7279 */    MCD::OPC_CheckField, 5, 8, 0, 2, 3, 0, // Skip to: 8056
/* 7286 */    MCD::OPC_Decode, 184, 4, 75, // Opcode: LDXFSRrr
/* 7290 */    MCD::OPC_FilterValue, 1, 249, 2, 0, // Skip to: 8056
/* 7295 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 7298 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 7307
/* 7303 */    MCD::OPC_Decode, 159, 4, 75, // Opcode: LDFSRri
/* 7307 */    MCD::OPC_FilterValue, 1, 232, 2, 0, // Skip to: 8056
/* 7312 */    MCD::OPC_CheckPredicate, 0, 227, 2, 0, // Skip to: 8056
/* 7317 */    MCD::OPC_Decode, 183, 4, 75, // Opcode: LDXFSRri
/* 7321 */    MCD::OPC_FilterValue, 34, 38, 0, 0, // Skip to: 7364
/* 7326 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7329 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 7350
/* 7334 */    MCD::OPC_CheckPredicate, 0, 205, 2, 0, // Skip to: 8056
/* 7339 */    MCD::OPC_CheckField, 5, 8, 0, 198, 2, 0, // Skip to: 8056
/* 7346 */    MCD::OPC_Decode, 165, 4, 76, // Opcode: LDQFrr
/* 7350 */    MCD::OPC_FilterValue, 1, 189, 2, 0, // Skip to: 8056
/* 7355 */    MCD::OPC_CheckPredicate, 0, 184, 2, 0, // Skip to: 8056
/* 7360 */    MCD::OPC_Decode, 164, 4, 76, // Opcode: LDQFri
/* 7364 */    MCD::OPC_FilterValue, 35, 28, 0, 0, // Skip to: 7397
/* 7369 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7372 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 7388
/* 7377 */    MCD::OPC_CheckField, 5, 8, 0, 160, 2, 0, // Skip to: 8056
/* 7384 */    MCD::OPC_Decode, 155, 4, 77, // Opcode: LDDFrr
/* 7388 */    MCD::OPC_FilterValue, 1, 151, 2, 0, // Skip to: 8056
/* 7393 */    MCD::OPC_Decode, 154, 4, 77, // Opcode: LDDFri
/* 7397 */    MCD::OPC_FilterValue, 36, 28, 0, 0, // Skip to: 7430
/* 7402 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7405 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 7421
/* 7410 */    MCD::OPC_CheckField, 5, 8, 0, 127, 2, 0, // Skip to: 8056
/* 7417 */    MCD::OPC_Decode, 179, 5, 78, // Opcode: STFrr
/* 7421 */    MCD::OPC_FilterValue, 1, 118, 2, 0, // Skip to: 8056
/* 7426 */    MCD::OPC_Decode, 178, 5, 78, // Opcode: STFri
/* 7430 */    MCD::OPC_FilterValue, 37, 79, 0, 0, // Skip to: 7514
/* 7435 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7438 */    MCD::OPC_FilterValue, 0, 40, 0, 0, // Skip to: 7483
/* 7443 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 7446 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 7462
/* 7451 */    MCD::OPC_CheckField, 5, 8, 0, 86, 2, 0, // Skip to: 8056
/* 7458 */    MCD::OPC_Decode, 177, 5, 78, // Opcode: STFSRrr
/* 7462 */    MCD::OPC_FilterValue, 1, 77, 2, 0, // Skip to: 8056
/* 7467 */    MCD::OPC_CheckPredicate, 0, 72, 2, 0, // Skip to: 8056
/* 7472 */    MCD::OPC_CheckField, 5, 8, 0, 65, 2, 0, // Skip to: 8056
/* 7479 */    MCD::OPC_Decode, 187, 5, 78, // Opcode: STXFSRrr
/* 7483 */    MCD::OPC_FilterValue, 1, 56, 2, 0, // Skip to: 8056
/* 7488 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 7491 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 7500
/* 7496 */    MCD::OPC_Decode, 176, 5, 78, // Opcode: STFSRri
/* 7500 */    MCD::OPC_FilterValue, 1, 39, 2, 0, // Skip to: 8056
/* 7505 */    MCD::OPC_CheckPredicate, 0, 34, 2, 0, // Skip to: 8056
/* 7510 */    MCD::OPC_Decode, 186, 5, 78, // Opcode: STXFSRri
/* 7514 */    MCD::OPC_FilterValue, 38, 61, 0, 0, // Skip to: 7580
/* 7519 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7522 */    MCD::OPC_FilterValue, 0, 28, 0, 0, // Skip to: 7555
/* 7527 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 7530 */    MCD::OPC_FilterValue, 0, 9, 2, 0, // Skip to: 8056
/* 7535 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 7546
/* 7542 */    MCD::OPC_Decode, 170, 5, 78, // Opcode: STDFQrr
/* 7546 */    MCD::OPC_CheckPredicate, 0, 249, 1, 0, // Skip to: 8056
/* 7551 */    MCD::OPC_Decode, 185, 5, 79, // Opcode: STQFrr
/* 7555 */    MCD::OPC_FilterValue, 1, 240, 1, 0, // Skip to: 8056
/* 7560 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 7571
/* 7567 */    MCD::OPC_Decode, 169, 5, 78, // Opcode: STDFQri
/* 7571 */    MCD::OPC_CheckPredicate, 0, 224, 1, 0, // Skip to: 8056
/* 7576 */    MCD::OPC_Decode, 184, 5, 79, // Opcode: STQFri
/* 7580 */    MCD::OPC_FilterValue, 39, 28, 0, 0, // Skip to: 7613
/* 7585 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7588 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 7604
/* 7593 */    MCD::OPC_CheckField, 5, 8, 0, 200, 1, 0, // Skip to: 8056
/* 7600 */    MCD::OPC_Decode, 172, 5, 80, // Opcode: STDFrr
/* 7604 */    MCD::OPC_FilterValue, 1, 191, 1, 0, // Skip to: 8056
/* 7609 */    MCD::OPC_Decode, 171, 5, 80, // Opcode: STDFri
/* 7613 */    MCD::OPC_FilterValue, 45, 38, 0, 0, // Skip to: 7656
/* 7618 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7621 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 7642
/* 7626 */    MCD::OPC_CheckPredicate, 0, 169, 1, 0, // Skip to: 8056
/* 7631 */    MCD::OPC_CheckField, 5, 8, 0, 162, 1, 0, // Skip to: 8056
/* 7638 */    MCD::OPC_Decode, 236, 4, 81, // Opcode: PREFETCHr
/* 7642 */    MCD::OPC_FilterValue, 1, 153, 1, 0, // Skip to: 8056
/* 7647 */    MCD::OPC_CheckPredicate, 0, 148, 1, 0, // Skip to: 8056
/* 7652 */    MCD::OPC_Decode, 235, 4, 81, // Opcode: PREFETCHi
/* 7656 */    MCD::OPC_FilterValue, 48, 37, 0, 0, // Skip to: 7698
/* 7661 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7664 */    MCD::OPC_FilterValue, 0, 20, 0, 0, // Skip to: 7689
/* 7669 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, 0, // Skip to: 7680
/* 7676 */    MCD::OPC_Decode, 149, 4, 82, // Opcode: LDCrr
/* 7680 */    MCD::OPC_CheckPredicate, 0, 115, 1, 0, // Skip to: 8056
/* 7685 */    MCD::OPC_Decode, 158, 4, 75, // Opcode: LDFArr
/* 7689 */    MCD::OPC_FilterValue, 1, 106, 1, 0, // Skip to: 8056
/* 7694 */    MCD::OPC_Decode, 148, 4, 82, // Opcode: LDCri
/* 7698 */    MCD::OPC_FilterValue, 49, 42, 0, 0, // Skip to: 7745
/* 7703 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7706 */    MCD::OPC_FilterValue, 0, 18, 0, 0, // Skip to: 7729
/* 7711 */    MCD::OPC_CheckField, 25, 5, 0, 82, 1, 0, // Skip to: 8056
/* 7718 */    MCD::OPC_CheckField, 5, 8, 0, 75, 1, 0, // Skip to: 8056
/* 7725 */    MCD::OPC_Decode, 147, 4, 82, // Opcode: LDCSRrr
/* 7729 */    MCD::OPC_FilterValue, 1, 66, 1, 0, // Skip to: 8056
/* 7734 */    MCD::OPC_CheckField, 25, 5, 0, 59, 1, 0, // Skip to: 8056
/* 7741 */    MCD::OPC_Decode, 146, 4, 82, // Opcode: LDCSRri
/* 7745 */    MCD::OPC_FilterValue, 50, 16, 0, 0, // Skip to: 7766
/* 7750 */    MCD::OPC_CheckPredicate, 0, 45, 1, 0, // Skip to: 8056
/* 7755 */    MCD::OPC_CheckField, 13, 1, 0, 38, 1, 0, // Skip to: 8056
/* 7762 */    MCD::OPC_Decode, 163, 4, 76, // Opcode: LDQFArr
/* 7766 */    MCD::OPC_FilterValue, 51, 37, 0, 0, // Skip to: 7808
/* 7771 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7774 */    MCD::OPC_FilterValue, 0, 20, 0, 0, // Skip to: 7799
/* 7779 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, 0, // Skip to: 7790
/* 7786 */    MCD::OPC_Decode, 152, 4, 83, // Opcode: LDDCrr
/* 7790 */    MCD::OPC_CheckPredicate, 0, 5, 1, 0, // Skip to: 8056
/* 7795 */    MCD::OPC_Decode, 153, 4, 77, // Opcode: LDDFArr
/* 7799 */    MCD::OPC_FilterValue, 1, 252, 0, 0, // Skip to: 8056
/* 7804 */    MCD::OPC_Decode, 151, 4, 83, // Opcode: LDDCri
/* 7808 */    MCD::OPC_FilterValue, 52, 37, 0, 0, // Skip to: 7850
/* 7813 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7816 */    MCD::OPC_FilterValue, 0, 20, 0, 0, // Skip to: 7841
/* 7821 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, 0, // Skip to: 7832
/* 7828 */    MCD::OPC_Decode, 162, 5, 84, // Opcode: STCrr
/* 7832 */    MCD::OPC_CheckPredicate, 0, 219, 0, 0, // Skip to: 8056
/* 7837 */    MCD::OPC_Decode, 175, 5, 78, // Opcode: STFArr
/* 7841 */    MCD::OPC_FilterValue, 1, 210, 0, 0, // Skip to: 8056
/* 7846 */    MCD::OPC_Decode, 161, 5, 84, // Opcode: STCri
/* 7850 */    MCD::OPC_FilterValue, 53, 42, 0, 0, // Skip to: 7897
/* 7855 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7858 */    MCD::OPC_FilterValue, 0, 18, 0, 0, // Skip to: 7881
/* 7863 */    MCD::OPC_CheckField, 25, 5, 0, 186, 0, 0, // Skip to: 8056
/* 7870 */    MCD::OPC_CheckField, 5, 8, 0, 179, 0, 0, // Skip to: 8056
/* 7877 */    MCD::OPC_Decode, 160, 5, 84, // Opcode: STCSRrr
/* 7881 */    MCD::OPC_FilterValue, 1, 170, 0, 0, // Skip to: 8056
/* 7886 */    MCD::OPC_CheckField, 25, 5, 0, 163, 0, 0, // Skip to: 8056
/* 7893 */    MCD::OPC_Decode, 159, 5, 84, // Opcode: STCSRri
/* 7897 */    MCD::OPC_FilterValue, 54, 51, 0, 0, // Skip to: 7953
/* 7902 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7905 */    MCD::OPC_FilterValue, 0, 27, 0, 0, // Skip to: 7937
/* 7910 */    MCD::OPC_CheckField, 25, 5, 0, 11, 0, 0, // Skip to: 7928
/* 7917 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, 0, // Skip to: 7928
/* 7924 */    MCD::OPC_Decode, 165, 5, 84, // Opcode: STDCQrr
/* 7928 */    MCD::OPC_CheckPredicate, 0, 123, 0, 0, // Skip to: 8056
/* 7933 */    MCD::OPC_Decode, 183, 5, 79, // Opcode: STQFArr
/* 7937 */    MCD::OPC_FilterValue, 1, 114, 0, 0, // Skip to: 8056
/* 7942 */    MCD::OPC_CheckField, 25, 5, 0, 107, 0, 0, // Skip to: 8056
/* 7949 */    MCD::OPC_Decode, 164, 5, 84, // Opcode: STDCQri
/* 7953 */    MCD::OPC_FilterValue, 55, 37, 0, 0, // Skip to: 7995
/* 7958 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7961 */    MCD::OPC_FilterValue, 0, 20, 0, 0, // Skip to: 7986
/* 7966 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, 0, // Skip to: 7977
/* 7973 */    MCD::OPC_Decode, 167, 5, 85, // Opcode: STDCrr
/* 7977 */    MCD::OPC_CheckPredicate, 0, 74, 0, 0, // Skip to: 8056
/* 7982 */    MCD::OPC_Decode, 168, 5, 80, // Opcode: STDFArr
/* 7986 */    MCD::OPC_FilterValue, 1, 65, 0, 0, // Skip to: 8056
/* 7991 */    MCD::OPC_Decode, 166, 5, 85, // Opcode: STDCri
/* 7995 */    MCD::OPC_FilterValue, 60, 39, 0, 0, // Skip to: 8039
/* 8000 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 8003 */    MCD::OPC_FilterValue, 0, 48, 0, 0, // Skip to: 8056
/* 8008 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 8011 */    MCD::OPC_FilterValue, 10, 4, 0, 0, // Skip to: 8020
/* 8016 */    MCD::OPC_Decode, 209, 2, 86, // Opcode: CASAasi10
/* 8020 */    MCD::OPC_FilterValue, 128, 1, 9, 0, 0, // Skip to: 8035
/* 8026 */    MCD::OPC_CheckPredicate, 0, 4, 0, 0, // Skip to: 8035
/* 8031 */    MCD::OPC_Decode, 212, 2, 86, // Opcode: CASrr
/* 8035 */    MCD::OPC_Decode, 210, 2, 87, // Opcode: CASArr
/* 8039 */    MCD::OPC_FilterValue, 62, 12, 0, 0, // Skip to: 8056
/* 8044 */    MCD::OPC_CheckField, 5, 9, 128, 1, 4, 0, 0, // Skip to: 8056
/* 8052 */    MCD::OPC_Decode, 211, 2, 88, // Opcode: CASXrr
/* 8056 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableSparcV832[] = {
/* 0 */       MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 3 */       MCD::OPC_FilterValue, 0, 25, 0, 0, // Skip to: 33
/* 8 */       MCD::OPC_CheckField, 29, 3, 4, 41, 0, 0, // Skip to: 56
/* 15 */      MCD::OPC_CheckField, 19, 6, 58, 34, 0, 0, // Skip to: 56
/* 22 */      MCD::OPC_CheckField, 5, 3, 0, 27, 0, 0, // Skip to: 56
/* 29 */      MCD::OPC_Decode, 222, 5, 89, // Opcode: TRAPrr
/* 33 */      MCD::OPC_FilterValue, 32, 18, 0, 0, // Skip to: 56
/* 38 */      MCD::OPC_CheckField, 29, 3, 4, 11, 0, 0, // Skip to: 56
/* 45 */      MCD::OPC_CheckField, 19, 6, 58, 4, 0, 0, // Skip to: 56
/* 52 */      MCD::OPC_Decode, 221, 5, 89, // Opcode: TRAPri
/* 56 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableSparcV932[] = {
/* 0 */       MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 3 */       MCD::OPC_FilterValue, 0, 30, 0, 0, // Skip to: 38
/* 8 */       MCD::OPC_CheckPredicate, 0, 53, 0, 0, // Skip to: 66
/* 13 */      MCD::OPC_CheckField, 29, 3, 4, 46, 0, 0, // Skip to: 66
/* 20 */      MCD::OPC_CheckField, 19, 6, 58, 39, 0, 0, // Skip to: 66
/* 27 */      MCD::OPC_CheckField, 5, 3, 0, 32, 0, 0, // Skip to: 66
/* 34 */      MCD::OPC_Decode, 215, 5, 89, // Opcode: TICCrr
/* 38 */      MCD::OPC_FilterValue, 32, 23, 0, 0, // Skip to: 66
/* 43 */      MCD::OPC_CheckPredicate, 0, 18, 0, 0, // Skip to: 66
/* 48 */      MCD::OPC_CheckField, 29, 3, 4, 11, 0, 0, // Skip to: 66
/* 55 */      MCD::OPC_CheckField, 19, 6, 58, 4, 0, 0, // Skip to: 66
/* 62 */      MCD::OPC_Decode, 214, 5, 89, // Opcode: TICCri
/* 66 */      MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset &Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return (Bits[Sparc::FeatureV9]);
  case 1:
    return (Bits[Sparc::FeaturePWRPSR]);
  case 2:
    return (Bits[Sparc::FeatureVIS3]);
  case 3:
    return (Bits[Sparc::FeatureVIS]);
  case 4:
    return (Bits[Sparc::FeatureVIS2]);
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
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 0, 19);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    insertBits(tmp, fieldFromInstruction(insn, 0, 14), 0, 14);
    insertBits(tmp, fieldFromInstruction(insn, 20, 2), 14, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 4:
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 0, 19);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 20, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 0, 30);
    if (DecodeCall(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodePRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 11);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 11);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodePRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodePRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 65:
    if (DecodeJMPL(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 66:
    if (DecodeReturn(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 69:
    if (DecodeLoadInt(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 70:
    if (DecodeLoadIntPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 71:
    if (DecodeStoreInt(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 72:
    if (DecodeStoreIntPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 73:
    if (DecodeSWAP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 75:
    if (DecodeLoadFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 76:
    if (DecodeLoadQFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 77:
    if (DecodeLoadDFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 78:
    if (DecodeStoreFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 79:
    if (DecodeStoreQFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 80:
    if (DecodeStoreDFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 25, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 82:
    if (DecodeLoadCP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 83:
    if (DecodeLoadCPPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 84:
    if (DecodeStoreCP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 85:
    if (DecodeStoreCPPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 89:
    if (DecodeTRAP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
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
