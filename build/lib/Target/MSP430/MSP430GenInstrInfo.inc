/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Enum Values and Descriptors                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace MSP430 {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    INLINEASM_BR	= 2,
    CFI_INSTRUCTION	= 3,
    EH_LABEL	= 4,
    GC_LABEL	= 5,
    ANNOTATION_LABEL	= 6,
    KILL	= 7,
    EXTRACT_SUBREG	= 8,
    INSERT_SUBREG	= 9,
    IMPLICIT_DEF	= 10,
    SUBREG_TO_REG	= 11,
    COPY_TO_REGCLASS	= 12,
    DBG_VALUE	= 13,
    DBG_VALUE_LIST	= 14,
    DBG_INSTR_REF	= 15,
    DBG_PHI	= 16,
    DBG_LABEL	= 17,
    REG_SEQUENCE	= 18,
    COPY	= 19,
    BUNDLE	= 20,
    LIFETIME_START	= 21,
    LIFETIME_END	= 22,
    PSEUDO_PROBE	= 23,
    ARITH_FENCE	= 24,
    STACKMAP	= 25,
    FENTRY_CALL	= 26,
    PATCHPOINT	= 27,
    LOAD_STACK_GUARD	= 28,
    PREALLOCATED_SETUP	= 29,
    PREALLOCATED_ARG	= 30,
    STATEPOINT	= 31,
    LOCAL_ESCAPE	= 32,
    FAULTING_OP	= 33,
    PATCHABLE_OP	= 34,
    PATCHABLE_FUNCTION_ENTER	= 35,
    PATCHABLE_RET	= 36,
    PATCHABLE_FUNCTION_EXIT	= 37,
    PATCHABLE_TAIL_CALL	= 38,
    PATCHABLE_EVENT_CALL	= 39,
    PATCHABLE_TYPED_EVENT_CALL	= 40,
    ICALL_BRANCH_FUNNEL	= 41,
    G_ASSERT_SEXT	= 42,
    G_ASSERT_ZEXT	= 43,
    G_ASSERT_ALIGN	= 44,
    G_ADD	= 45,
    G_SUB	= 46,
    G_MUL	= 47,
    G_SDIV	= 48,
    G_UDIV	= 49,
    G_SREM	= 50,
    G_UREM	= 51,
    G_SDIVREM	= 52,
    G_UDIVREM	= 53,
    G_AND	= 54,
    G_OR	= 55,
    G_XOR	= 56,
    G_IMPLICIT_DEF	= 57,
    G_PHI	= 58,
    G_FRAME_INDEX	= 59,
    G_GLOBAL_VALUE	= 60,
    G_EXTRACT	= 61,
    G_UNMERGE_VALUES	= 62,
    G_INSERT	= 63,
    G_MERGE_VALUES	= 64,
    G_BUILD_VECTOR	= 65,
    G_BUILD_VECTOR_TRUNC	= 66,
    G_CONCAT_VECTORS	= 67,
    G_PTRTOINT	= 68,
    G_INTTOPTR	= 69,
    G_BITCAST	= 70,
    G_FREEZE	= 71,
    G_INTRINSIC_FPTRUNC_ROUND	= 72,
    G_INTRINSIC_TRUNC	= 73,
    G_INTRINSIC_ROUND	= 74,
    G_INTRINSIC_LRINT	= 75,
    G_INTRINSIC_ROUNDEVEN	= 76,
    G_READCYCLECOUNTER	= 77,
    G_LOAD	= 78,
    G_SEXTLOAD	= 79,
    G_ZEXTLOAD	= 80,
    G_INDEXED_LOAD	= 81,
    G_INDEXED_SEXTLOAD	= 82,
    G_INDEXED_ZEXTLOAD	= 83,
    G_STORE	= 84,
    G_INDEXED_STORE	= 85,
    G_ATOMIC_CMPXCHG_WITH_SUCCESS	= 86,
    G_ATOMIC_CMPXCHG	= 87,
    G_ATOMICRMW_XCHG	= 88,
    G_ATOMICRMW_ADD	= 89,
    G_ATOMICRMW_SUB	= 90,
    G_ATOMICRMW_AND	= 91,
    G_ATOMICRMW_NAND	= 92,
    G_ATOMICRMW_OR	= 93,
    G_ATOMICRMW_XOR	= 94,
    G_ATOMICRMW_MAX	= 95,
    G_ATOMICRMW_MIN	= 96,
    G_ATOMICRMW_UMAX	= 97,
    G_ATOMICRMW_UMIN	= 98,
    G_ATOMICRMW_FADD	= 99,
    G_ATOMICRMW_FSUB	= 100,
    G_ATOMICRMW_FMAX	= 101,
    G_ATOMICRMW_FMIN	= 102,
    G_FENCE	= 103,
    G_BRCOND	= 104,
    G_BRINDIRECT	= 105,
    G_INTRINSIC	= 106,
    G_INTRINSIC_W_SIDE_EFFECTS	= 107,
    G_ANYEXT	= 108,
    G_TRUNC	= 109,
    G_CONSTANT	= 110,
    G_FCONSTANT	= 111,
    G_VASTART	= 112,
    G_VAARG	= 113,
    G_SEXT	= 114,
    G_SEXT_INREG	= 115,
    G_ZEXT	= 116,
    G_SHL	= 117,
    G_LSHR	= 118,
    G_ASHR	= 119,
    G_FSHL	= 120,
    G_FSHR	= 121,
    G_ROTR	= 122,
    G_ROTL	= 123,
    G_ICMP	= 124,
    G_FCMP	= 125,
    G_SELECT	= 126,
    G_UADDO	= 127,
    G_UADDE	= 128,
    G_USUBO	= 129,
    G_USUBE	= 130,
    G_SADDO	= 131,
    G_SADDE	= 132,
    G_SSUBO	= 133,
    G_SSUBE	= 134,
    G_UMULO	= 135,
    G_SMULO	= 136,
    G_UMULH	= 137,
    G_SMULH	= 138,
    G_UADDSAT	= 139,
    G_SADDSAT	= 140,
    G_USUBSAT	= 141,
    G_SSUBSAT	= 142,
    G_USHLSAT	= 143,
    G_SSHLSAT	= 144,
    G_SMULFIX	= 145,
    G_UMULFIX	= 146,
    G_SMULFIXSAT	= 147,
    G_UMULFIXSAT	= 148,
    G_SDIVFIX	= 149,
    G_UDIVFIX	= 150,
    G_SDIVFIXSAT	= 151,
    G_UDIVFIXSAT	= 152,
    G_FADD	= 153,
    G_FSUB	= 154,
    G_FMUL	= 155,
    G_FMA	= 156,
    G_FMAD	= 157,
    G_FDIV	= 158,
    G_FREM	= 159,
    G_FPOW	= 160,
    G_FPOWI	= 161,
    G_FEXP	= 162,
    G_FEXP2	= 163,
    G_FLOG	= 164,
    G_FLOG2	= 165,
    G_FLOG10	= 166,
    G_FNEG	= 167,
    G_FPEXT	= 168,
    G_FPTRUNC	= 169,
    G_FPTOSI	= 170,
    G_FPTOUI	= 171,
    G_SITOFP	= 172,
    G_UITOFP	= 173,
    G_FABS	= 174,
    G_FCOPYSIGN	= 175,
    G_IS_FPCLASS	= 176,
    G_FCANONICALIZE	= 177,
    G_FMINNUM	= 178,
    G_FMAXNUM	= 179,
    G_FMINNUM_IEEE	= 180,
    G_FMAXNUM_IEEE	= 181,
    G_FMINIMUM	= 182,
    G_FMAXIMUM	= 183,
    G_PTR_ADD	= 184,
    G_PTRMASK	= 185,
    G_SMIN	= 186,
    G_SMAX	= 187,
    G_UMIN	= 188,
    G_UMAX	= 189,
    G_ABS	= 190,
    G_LROUND	= 191,
    G_LLROUND	= 192,
    G_BR	= 193,
    G_BRJT	= 194,
    G_INSERT_VECTOR_ELT	= 195,
    G_EXTRACT_VECTOR_ELT	= 196,
    G_SHUFFLE_VECTOR	= 197,
    G_CTTZ	= 198,
    G_CTTZ_ZERO_UNDEF	= 199,
    G_CTLZ	= 200,
    G_CTLZ_ZERO_UNDEF	= 201,
    G_CTPOP	= 202,
    G_BSWAP	= 203,
    G_BITREVERSE	= 204,
    G_FCEIL	= 205,
    G_FCOS	= 206,
    G_FSIN	= 207,
    G_FSQRT	= 208,
    G_FFLOOR	= 209,
    G_FRINT	= 210,
    G_FNEARBYINT	= 211,
    G_ADDRSPACE_CAST	= 212,
    G_BLOCK_ADDR	= 213,
    G_JUMP_TABLE	= 214,
    G_DYN_STACKALLOC	= 215,
    G_STRICT_FADD	= 216,
    G_STRICT_FSUB	= 217,
    G_STRICT_FMUL	= 218,
    G_STRICT_FDIV	= 219,
    G_STRICT_FREM	= 220,
    G_STRICT_FMA	= 221,
    G_STRICT_FSQRT	= 222,
    G_READ_REGISTER	= 223,
    G_WRITE_REGISTER	= 224,
    G_MEMCPY	= 225,
    G_MEMCPY_INLINE	= 226,
    G_MEMMOVE	= 227,
    G_MEMSET	= 228,
    G_BZERO	= 229,
    G_VECREDUCE_SEQ_FADD	= 230,
    G_VECREDUCE_SEQ_FMUL	= 231,
    G_VECREDUCE_FADD	= 232,
    G_VECREDUCE_FMUL	= 233,
    G_VECREDUCE_FMAX	= 234,
    G_VECREDUCE_FMIN	= 235,
    G_VECREDUCE_ADD	= 236,
    G_VECREDUCE_MUL	= 237,
    G_VECREDUCE_AND	= 238,
    G_VECREDUCE_OR	= 239,
    G_VECREDUCE_XOR	= 240,
    G_VECREDUCE_SMAX	= 241,
    G_VECREDUCE_SMIN	= 242,
    G_VECREDUCE_UMAX	= 243,
    G_VECREDUCE_UMIN	= 244,
    G_SBFX	= 245,
    G_UBFX	= 246,
    ADD16mc	= 247,
    ADD16mi	= 248,
    ADD16mm	= 249,
    ADD16mn	= 250,
    ADD16mp	= 251,
    ADD16mr	= 252,
    ADD16rc	= 253,
    ADD16ri	= 254,
    ADD16rm	= 255,
    ADD16rn	= 256,
    ADD16rp	= 257,
    ADD16rr	= 258,
    ADD8mc	= 259,
    ADD8mi	= 260,
    ADD8mm	= 261,
    ADD8mn	= 262,
    ADD8mp	= 263,
    ADD8mr	= 264,
    ADD8rc	= 265,
    ADD8ri	= 266,
    ADD8rm	= 267,
    ADD8rn	= 268,
    ADD8rp	= 269,
    ADD8rr	= 270,
    ADDC16mc	= 271,
    ADDC16mi	= 272,
    ADDC16mm	= 273,
    ADDC16mn	= 274,
    ADDC16mp	= 275,
    ADDC16mr	= 276,
    ADDC16rc	= 277,
    ADDC16ri	= 278,
    ADDC16rm	= 279,
    ADDC16rn	= 280,
    ADDC16rp	= 281,
    ADDC16rr	= 282,
    ADDC8mc	= 283,
    ADDC8mi	= 284,
    ADDC8mm	= 285,
    ADDC8mn	= 286,
    ADDC8mp	= 287,
    ADDC8mr	= 288,
    ADDC8rc	= 289,
    ADDC8ri	= 290,
    ADDC8rm	= 291,
    ADDC8rn	= 292,
    ADDC8rp	= 293,
    ADDC8rr	= 294,
    ADDframe	= 295,
    ADJCALLSTACKDOWN	= 296,
    ADJCALLSTACKUP	= 297,
    AND16mc	= 298,
    AND16mi	= 299,
    AND16mm	= 300,
    AND16mn	= 301,
    AND16mp	= 302,
    AND16mr	= 303,
    AND16rc	= 304,
    AND16ri	= 305,
    AND16rm	= 306,
    AND16rn	= 307,
    AND16rp	= 308,
    AND16rr	= 309,
    AND8mc	= 310,
    AND8mi	= 311,
    AND8mm	= 312,
    AND8mn	= 313,
    AND8mp	= 314,
    AND8mr	= 315,
    AND8rc	= 316,
    AND8ri	= 317,
    AND8rm	= 318,
    AND8rn	= 319,
    AND8rp	= 320,
    AND8rr	= 321,
    BIC16mc	= 322,
    BIC16mi	= 323,
    BIC16mm	= 324,
    BIC16mn	= 325,
    BIC16mp	= 326,
    BIC16mr	= 327,
    BIC16rc	= 328,
    BIC16ri	= 329,
    BIC16rm	= 330,
    BIC16rn	= 331,
    BIC16rp	= 332,
    BIC16rr	= 333,
    BIC8mc	= 334,
    BIC8mi	= 335,
    BIC8mm	= 336,
    BIC8mn	= 337,
    BIC8mp	= 338,
    BIC8mr	= 339,
    BIC8rc	= 340,
    BIC8ri	= 341,
    BIC8rm	= 342,
    BIC8rn	= 343,
    BIC8rp	= 344,
    BIC8rr	= 345,
    BIS16mc	= 346,
    BIS16mi	= 347,
    BIS16mm	= 348,
    BIS16mn	= 349,
    BIS16mp	= 350,
    BIS16mr	= 351,
    BIS16rc	= 352,
    BIS16ri	= 353,
    BIS16rm	= 354,
    BIS16rn	= 355,
    BIS16rp	= 356,
    BIS16rr	= 357,
    BIS8mc	= 358,
    BIS8mi	= 359,
    BIS8mm	= 360,
    BIS8mn	= 361,
    BIS8mp	= 362,
    BIS8mr	= 363,
    BIS8rc	= 364,
    BIS8ri	= 365,
    BIS8rm	= 366,
    BIS8rn	= 367,
    BIS8rp	= 368,
    BIS8rr	= 369,
    BIT16mc	= 370,
    BIT16mi	= 371,
    BIT16mm	= 372,
    BIT16mn	= 373,
    BIT16mp	= 374,
    BIT16mr	= 375,
    BIT16rc	= 376,
    BIT16ri	= 377,
    BIT16rm	= 378,
    BIT16rn	= 379,
    BIT16rp	= 380,
    BIT16rr	= 381,
    BIT8mc	= 382,
    BIT8mi	= 383,
    BIT8mm	= 384,
    BIT8mn	= 385,
    BIT8mp	= 386,
    BIT8mr	= 387,
    BIT8rc	= 388,
    BIT8ri	= 389,
    BIT8rm	= 390,
    BIT8rn	= 391,
    BIT8rp	= 392,
    BIT8rr	= 393,
    Bi	= 394,
    Bm	= 395,
    Br	= 396,
    CALLi	= 397,
    CALLm	= 398,
    CALLn	= 399,
    CALLp	= 400,
    CALLr	= 401,
    CMP16mc	= 402,
    CMP16mi	= 403,
    CMP16mm	= 404,
    CMP16mn	= 405,
    CMP16mp	= 406,
    CMP16mr	= 407,
    CMP16rc	= 408,
    CMP16ri	= 409,
    CMP16rm	= 410,
    CMP16rn	= 411,
    CMP16rp	= 412,
    CMP16rr	= 413,
    CMP8mc	= 414,
    CMP8mi	= 415,
    CMP8mm	= 416,
    CMP8mn	= 417,
    CMP8mp	= 418,
    CMP8mr	= 419,
    CMP8rc	= 420,
    CMP8ri	= 421,
    CMP8rm	= 422,
    CMP8rn	= 423,
    CMP8rp	= 424,
    CMP8rr	= 425,
    DADD16mc	= 426,
    DADD16mi	= 427,
    DADD16mm	= 428,
    DADD16mn	= 429,
    DADD16mp	= 430,
    DADD16mr	= 431,
    DADD16rc	= 432,
    DADD16ri	= 433,
    DADD16rm	= 434,
    DADD16rn	= 435,
    DADD16rp	= 436,
    DADD16rr	= 437,
    DADD8mc	= 438,
    DADD8mi	= 439,
    DADD8mm	= 440,
    DADD8mn	= 441,
    DADD8mp	= 442,
    DADD8mr	= 443,
    DADD8rc	= 444,
    DADD8ri	= 445,
    DADD8rm	= 446,
    DADD8rn	= 447,
    DADD8rp	= 448,
    DADD8rr	= 449,
    JCC	= 450,
    JMP	= 451,
    MOV16mc	= 452,
    MOV16mi	= 453,
    MOV16mm	= 454,
    MOV16mn	= 455,
    MOV16mr	= 456,
    MOV16rc	= 457,
    MOV16ri	= 458,
    MOV16rm	= 459,
    MOV16rn	= 460,
    MOV16rp	= 461,
    MOV16rr	= 462,
    MOV8mc	= 463,
    MOV8mi	= 464,
    MOV8mm	= 465,
    MOV8mn	= 466,
    MOV8mr	= 467,
    MOV8rc	= 468,
    MOV8ri	= 469,
    MOV8rm	= 470,
    MOV8rn	= 471,
    MOV8rp	= 472,
    MOV8rr	= 473,
    MOVZX16rm8	= 474,
    MOVZX16rr8	= 475,
    POP16r	= 476,
    PUSH16c	= 477,
    PUSH16i	= 478,
    PUSH16r	= 479,
    PUSH8r	= 480,
    RET	= 481,
    RETI	= 482,
    RRA16m	= 483,
    RRA16n	= 484,
    RRA16p	= 485,
    RRA16r	= 486,
    RRA8m	= 487,
    RRA8n	= 488,
    RRA8p	= 489,
    RRA8r	= 490,
    RRC16m	= 491,
    RRC16n	= 492,
    RRC16p	= 493,
    RRC16r	= 494,
    RRC8m	= 495,
    RRC8n	= 496,
    RRC8p	= 497,
    RRC8r	= 498,
    Rrcl16	= 499,
    Rrcl8	= 500,
    SEXT16m	= 501,
    SEXT16n	= 502,
    SEXT16p	= 503,
    SEXT16r	= 504,
    SUB16mc	= 505,
    SUB16mi	= 506,
    SUB16mm	= 507,
    SUB16mn	= 508,
    SUB16mp	= 509,
    SUB16mr	= 510,
    SUB16rc	= 511,
    SUB16ri	= 512,
    SUB16rm	= 513,
    SUB16rn	= 514,
    SUB16rp	= 515,
    SUB16rr	= 516,
    SUB8mc	= 517,
    SUB8mi	= 518,
    SUB8mm	= 519,
    SUB8mn	= 520,
    SUB8mp	= 521,
    SUB8mr	= 522,
    SUB8rc	= 523,
    SUB8ri	= 524,
    SUB8rm	= 525,
    SUB8rn	= 526,
    SUB8rp	= 527,
    SUB8rr	= 528,
    SUBC16mc	= 529,
    SUBC16mi	= 530,
    SUBC16mm	= 531,
    SUBC16mn	= 532,
    SUBC16mp	= 533,
    SUBC16mr	= 534,
    SUBC16rc	= 535,
    SUBC16ri	= 536,
    SUBC16rm	= 537,
    SUBC16rn	= 538,
    SUBC16rp	= 539,
    SUBC16rr	= 540,
    SUBC8mc	= 541,
    SUBC8mi	= 542,
    SUBC8mm	= 543,
    SUBC8mn	= 544,
    SUBC8mp	= 545,
    SUBC8mr	= 546,
    SUBC8rc	= 547,
    SUBC8ri	= 548,
    SUBC8rm	= 549,
    SUBC8rn	= 550,
    SUBC8rp	= 551,
    SUBC8rr	= 552,
    SWPB16m	= 553,
    SWPB16n	= 554,
    SWPB16p	= 555,
    SWPB16r	= 556,
    Select16	= 557,
    Select8	= 558,
    Shl16	= 559,
    Shl8	= 560,
    Sra16	= 561,
    Sra8	= 562,
    Srl16	= 563,
    Srl8	= 564,
    XOR16mc	= 565,
    XOR16mi	= 566,
    XOR16mm	= 567,
    XOR16mn	= 568,
    XOR16mp	= 569,
    XOR16mr	= 570,
    XOR16rc	= 571,
    XOR16ri	= 572,
    XOR16rm	= 573,
    XOR16rn	= 574,
    XOR16rp	= 575,
    XOR16rr	= 576,
    XOR8mc	= 577,
    XOR8mi	= 578,
    XOR8mm	= 579,
    XOR8mn	= 580,
    XOR8mp	= 581,
    XOR8mr	= 582,
    XOR8rc	= 583,
    XOR8ri	= 584,
    XOR8rm	= 585,
    XOR8rn	= 586,
    XOR8rp	= 587,
    XOR8rr	= 588,
    ZEXT16r	= 589,
    INSTRUCTION_LIST_END = 590
  };

} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace MSP430 {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // end namespace Sched
} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { MSP430::SR, 0 };
static const MCPhysReg ImplicitList2[] = { MSP430::SP, 0 };
static const MCPhysReg ImplicitList3[] = { MSP430::SP, MSP430::SR, 0 };
static const MCPhysReg ImplicitList4[] = { MSP430::R11, MSP430::R12, MSP430::R13, MSP430::R14, MSP430::R15, MSP430::SR, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo10[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(1) }, };
static const MCOperandInfo OperandInfo56[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(1) }, };
static const MCOperandInfo OperandInfo63[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(1) }, };
static const MCOperandInfo OperandInfo79[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(1) }, };
static const MCOperandInfo OperandInfo80[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo83[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo84[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc MSP430Insts[] = {
  { 0,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #1 = INLINEASM
  { 2,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #2 = INLINEASM_BR
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #3 = CFI_INSTRUCTION
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #4 = EH_LABEL
  { 5,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #5 = GC_LABEL
  { 6,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #6 = ANNOTATION_LABEL
  { 7,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #7 = KILL
  { 8,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo4 },  // Inst #8 = EXTRACT_SUBREG
  { 9,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo5 },  // Inst #9 = INSERT_SUBREG
  { 10,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #10 = IMPLICIT_DEF
  { 11,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo6 },  // Inst #11 = SUBREG_TO_REG
  { 12,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo4 },  // Inst #12 = COPY_TO_REGCLASS
  { 13,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #13 = DBG_VALUE
  { 14,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #14 = DBG_VALUE_LIST
  { 15,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #15 = DBG_INSTR_REF
  { 16,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #16 = DBG_PHI
  { 17,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #17 = DBG_LABEL
  { 18,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo7 },  // Inst #18 = REG_SEQUENCE
  { 19,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo7 },  // Inst #19 = COPY
  { 20,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #20 = BUNDLE
  { 21,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #21 = LIFETIME_START
  { 22,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #22 = LIFETIME_END
  { 23,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo8 },  // Inst #23 = PSEUDO_PROBE
  { 24,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo9 },  // Inst #24 = ARITH_FENCE
  { 25,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo10 },  // Inst #25 = STACKMAP
  { 26,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #26 = FENTRY_CALL
  { 27,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo11 },  // Inst #27 = PATCHPOINT
  { 28,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo12 },  // Inst #28 = LOAD_STACK_GUARD
  { 29,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #29 = PREALLOCATED_SETUP
  { 30,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo13 },  // Inst #30 = PREALLOCATED_ARG
  { 31,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #31 = STATEPOINT
  { 32,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14 },  // Inst #32 = LOCAL_ESCAPE
  { 33,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #33 = FAULTING_OP
  { 34,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #34 = PATCHABLE_OP
  { 35,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #35 = PATCHABLE_FUNCTION_ENTER
  { 36,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #36 = PATCHABLE_RET
  { 37,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #37 = PATCHABLE_FUNCTION_EXIT
  { 38,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #38 = PATCHABLE_TAIL_CALL
  { 39,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #39 = PATCHABLE_EVENT_CALL
  { 40,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #40 = PATCHABLE_TYPED_EVENT_CALL
  { 41,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #41 = ICALL_BRANCH_FUNNEL
  { 42,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #42 = G_ASSERT_SEXT
  { 43,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #43 = G_ASSERT_ZEXT
  { 44,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #44 = G_ASSERT_ALIGN
  { 45,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #45 = G_ADD
  { 46,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #46 = G_SUB
  { 47,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #47 = G_MUL
  { 48,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #48 = G_SDIV
  { 49,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #49 = G_UDIV
  { 50,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #50 = G_SREM
  { 51,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #51 = G_UREM
  { 52,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #52 = G_SDIVREM
  { 53,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #53 = G_UDIVREM
  { 54,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #54 = G_AND
  { 55,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #55 = G_OR
  { 56,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #56 = G_XOR
  { 57,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #57 = G_IMPLICIT_DEF
  { 58,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #58 = G_PHI
  { 59,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #59 = G_FRAME_INDEX
  { 60,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #60 = G_GLOBAL_VALUE
  { 61,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #61 = G_EXTRACT
  { 62,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #62 = G_UNMERGE_VALUES
  { 63,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo24 },  // Inst #63 = G_INSERT
  { 64,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #64 = G_MERGE_VALUES
  { 65,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #65 = G_BUILD_VECTOR
  { 66,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #66 = G_BUILD_VECTOR_TRUNC
  { 67,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #67 = G_CONCAT_VECTORS
  { 68,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #68 = G_PTRTOINT
  { 69,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #69 = G_INTTOPTR
  { 70,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #70 = G_BITCAST
  { 71,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #71 = G_FREEZE
  { 72,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #72 = G_INTRINSIC_FPTRUNC_ROUND
  { 73,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #73 = G_INTRINSIC_TRUNC
  { 74,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #74 = G_INTRINSIC_ROUND
  { 75,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #75 = G_INTRINSIC_LRINT
  { 76,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #76 = G_INTRINSIC_ROUNDEVEN
  { 77,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #77 = G_READCYCLECOUNTER
  { 78,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #78 = G_LOAD
  { 79,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #79 = G_SEXTLOAD
  { 80,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #80 = G_ZEXTLOAD
  { 81,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #81 = G_INDEXED_LOAD
  { 82,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #82 = G_INDEXED_SEXTLOAD
  { 83,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #83 = G_INDEXED_ZEXTLOAD
  { 84,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #84 = G_STORE
  { 85,	5,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo28 },  // Inst #85 = G_INDEXED_STORE
  { 86,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo29 },  // Inst #86 = G_ATOMIC_CMPXCHG_WITH_SUCCESS
  { 87,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #87 = G_ATOMIC_CMPXCHG
  { 88,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #88 = G_ATOMICRMW_XCHG
  { 89,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #89 = G_ATOMICRMW_ADD
  { 90,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #90 = G_ATOMICRMW_SUB
  { 91,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #91 = G_ATOMICRMW_AND
  { 92,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #92 = G_ATOMICRMW_NAND
  { 93,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #93 = G_ATOMICRMW_OR
  { 94,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #94 = G_ATOMICRMW_XOR
  { 95,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #95 = G_ATOMICRMW_MAX
  { 96,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #96 = G_ATOMICRMW_MIN
  { 97,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #97 = G_ATOMICRMW_UMAX
  { 98,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #98 = G_ATOMICRMW_UMIN
  { 99,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #99 = G_ATOMICRMW_FADD
  { 100,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #100 = G_ATOMICRMW_FSUB
  { 101,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #101 = G_ATOMICRMW_FMAX
  { 102,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #102 = G_ATOMICRMW_FMIN
  { 103,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo10 },  // Inst #103 = G_FENCE
  { 104,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #104 = G_BRCOND
  { 105,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #105 = G_BRINDIRECT
  { 106,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #106 = G_INTRINSIC
  { 107,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #107 = G_INTRINSIC_W_SIDE_EFFECTS
  { 108,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #108 = G_ANYEXT
  { 109,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #109 = G_TRUNC
  { 110,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #110 = G_CONSTANT
  { 111,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #111 = G_FCONSTANT
  { 112,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #112 = G_VASTART
  { 113,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo32 },  // Inst #113 = G_VAARG
  { 114,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #114 = G_SEXT
  { 115,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #115 = G_SEXT_INREG
  { 116,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #116 = G_ZEXT
  { 117,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #117 = G_SHL
  { 118,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #118 = G_LSHR
  { 119,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #119 = G_ASHR
  { 120,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #120 = G_FSHL
  { 121,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #121 = G_FSHR
  { 122,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #122 = G_ROTR
  { 123,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #123 = G_ROTL
  { 124,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo35 },  // Inst #124 = G_ICMP
  { 125,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo35 },  // Inst #125 = G_FCMP
  { 126,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #126 = G_SELECT
  { 127,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #127 = G_UADDO
  { 128,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo36 },  // Inst #128 = G_UADDE
  { 129,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #129 = G_USUBO
  { 130,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo36 },  // Inst #130 = G_USUBE
  { 131,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #131 = G_SADDO
  { 132,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo36 },  // Inst #132 = G_SADDE
  { 133,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #133 = G_SSUBO
  { 134,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo36 },  // Inst #134 = G_SSUBE
  { 135,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #135 = G_UMULO
  { 136,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #136 = G_SMULO
  { 137,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #137 = G_UMULH
  { 138,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #138 = G_SMULH
  { 139,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #139 = G_UADDSAT
  { 140,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #140 = G_SADDSAT
  { 141,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #141 = G_USUBSAT
  { 142,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #142 = G_SSUBSAT
  { 143,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #143 = G_USHLSAT
  { 144,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #144 = G_SSHLSAT
  { 145,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo37 },  // Inst #145 = G_SMULFIX
  { 146,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo37 },  // Inst #146 = G_UMULFIX
  { 147,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo37 },  // Inst #147 = G_SMULFIXSAT
  { 148,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo37 },  // Inst #148 = G_UMULFIXSAT
  { 149,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo37 },  // Inst #149 = G_SDIVFIX
  { 150,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo37 },  // Inst #150 = G_UDIVFIX
  { 151,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo37 },  // Inst #151 = G_SDIVFIXSAT
  { 152,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo37 },  // Inst #152 = G_UDIVFIXSAT
  { 153,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #153 = G_FADD
  { 154,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #154 = G_FSUB
  { 155,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #155 = G_FMUL
  { 156,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #156 = G_FMA
  { 157,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #157 = G_FMAD
  { 158,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #158 = G_FDIV
  { 159,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #159 = G_FREM
  { 160,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #160 = G_FPOW
  { 161,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #161 = G_FPOWI
  { 162,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #162 = G_FEXP
  { 163,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #163 = G_FEXP2
  { 164,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #164 = G_FLOG
  { 165,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #165 = G_FLOG2
  { 166,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #166 = G_FLOG10
  { 167,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #167 = G_FNEG
  { 168,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #168 = G_FPEXT
  { 169,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #169 = G_FPTRUNC
  { 170,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #170 = G_FPTOSI
  { 171,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #171 = G_FPTOUI
  { 172,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #172 = G_SITOFP
  { 173,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #173 = G_UITOFP
  { 174,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #174 = G_FABS
  { 175,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #175 = G_FCOPYSIGN
  { 176,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo38 },  // Inst #176 = G_IS_FPCLASS
  { 177,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #177 = G_FCANONICALIZE
  { 178,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #178 = G_FMINNUM
  { 179,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #179 = G_FMAXNUM
  { 180,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #180 = G_FMINNUM_IEEE
  { 181,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #181 = G_FMAXNUM_IEEE
  { 182,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #182 = G_FMINIMUM
  { 183,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #183 = G_FMAXIMUM
  { 184,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #184 = G_PTR_ADD
  { 185,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #185 = G_PTRMASK
  { 186,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #186 = G_SMIN
  { 187,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #187 = G_SMAX
  { 188,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #188 = G_UMIN
  { 189,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #189 = G_UMAX
  { 190,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #190 = G_ABS
  { 191,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #191 = G_LROUND
  { 192,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #192 = G_LLROUND
  { 193,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #193 = G_BR
  { 194,	3,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo39 },  // Inst #194 = G_BRJT
  { 195,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo40 },  // Inst #195 = G_INSERT_VECTOR_ELT
  { 196,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo41 },  // Inst #196 = G_EXTRACT_VECTOR_ELT
  { 197,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #197 = G_SHUFFLE_VECTOR
  { 198,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #198 = G_CTTZ
  { 199,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #199 = G_CTTZ_ZERO_UNDEF
  { 200,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #200 = G_CTLZ
  { 201,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #201 = G_CTLZ_ZERO_UNDEF
  { 202,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #202 = G_CTPOP
  { 203,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #203 = G_BSWAP
  { 204,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #204 = G_BITREVERSE
  { 205,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #205 = G_FCEIL
  { 206,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #206 = G_FCOS
  { 207,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #207 = G_FSIN
  { 208,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #208 = G_FSQRT
  { 209,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #209 = G_FFLOOR
  { 210,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #210 = G_FRINT
  { 211,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #211 = G_FNEARBYINT
  { 212,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #212 = G_ADDRSPACE_CAST
  { 213,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #213 = G_BLOCK_ADDR
  { 214,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #214 = G_JUMP_TABLE
  { 215,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #215 = G_DYN_STACKALLOC
  { 216,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #216 = G_STRICT_FADD
  { 217,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #217 = G_STRICT_FSUB
  { 218,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #218 = G_STRICT_FMUL
  { 219,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #219 = G_STRICT_FDIV
  { 220,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #220 = G_STRICT_FREM
  { 221,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #221 = G_STRICT_FMA
  { 222,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #222 = G_STRICT_FSQRT
  { 223,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #223 = G_READ_REGISTER
  { 224,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #224 = G_WRITE_REGISTER
  { 225,	4,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #225 = G_MEMCPY
  { 226,	3,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo41 },  // Inst #226 = G_MEMCPY_INLINE
  { 227,	4,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #227 = G_MEMMOVE
  { 228,	4,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #228 = G_MEMSET
  { 229,	3,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #229 = G_BZERO
  { 230,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo41 },  // Inst #230 = G_VECREDUCE_SEQ_FADD
  { 231,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo41 },  // Inst #231 = G_VECREDUCE_SEQ_FMUL
  { 232,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #232 = G_VECREDUCE_FADD
  { 233,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #233 = G_VECREDUCE_FMUL
  { 234,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #234 = G_VECREDUCE_FMAX
  { 235,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #235 = G_VECREDUCE_FMIN
  { 236,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #236 = G_VECREDUCE_ADD
  { 237,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #237 = G_VECREDUCE_MUL
  { 238,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #238 = G_VECREDUCE_AND
  { 239,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #239 = G_VECREDUCE_OR
  { 240,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #240 = G_VECREDUCE_XOR
  { 241,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #241 = G_VECREDUCE_SMAX
  { 242,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #242 = G_VECREDUCE_SMIN
  { 243,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #243 = G_VECREDUCE_UMAX
  { 244,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #244 = G_VECREDUCE_UMIN
  { 245,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #245 = G_SBFX
  { 246,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #246 = G_UBFX
  { 247,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #247 = ADD16mc
  { 248,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #248 = ADD16mi
  { 249,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #249 = ADD16mm
  { 250,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #250 = ADD16mn
  { 251,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #251 = ADD16mp
  { 252,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo50 },  // Inst #252 = ADD16mr
  { 253,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo51 },  // Inst #253 = ADD16rc
  { 254,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo52 },  // Inst #254 = ADD16ri
  { 255,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53 },  // Inst #255 = ADD16rm
  { 256,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54 },  // Inst #256 = ADD16rn
  { 257,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo55 },  // Inst #257 = ADD16rp
  { 258,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56 },  // Inst #258 = ADD16rr
  { 259,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #259 = ADD8mc
  { 260,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #260 = ADD8mi
  { 261,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #261 = ADD8mm
  { 262,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #262 = ADD8mn
  { 263,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #263 = ADD8mp
  { 264,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57 },  // Inst #264 = ADD8mr
  { 265,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo58 },  // Inst #265 = ADD8rc
  { 266,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo59 },  // Inst #266 = ADD8ri
  { 267,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo60 },  // Inst #267 = ADD8rm
  { 268,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo61 },  // Inst #268 = ADD8rn
  { 269,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo62 },  // Inst #269 = ADD8rp
  { 270,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo63 },  // Inst #270 = ADD8rr
  { 271,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo46 },  // Inst #271 = ADDC16mc
  { 272,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo47 },  // Inst #272 = ADDC16mi
  { 273,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo48 },  // Inst #273 = ADDC16mm
  { 274,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo49 },  // Inst #274 = ADDC16mn
  { 275,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo49 },  // Inst #275 = ADDC16mp
  { 276,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo50 },  // Inst #276 = ADDC16mr
  { 277,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo51 },  // Inst #277 = ADDC16rc
  { 278,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo52 },  // Inst #278 = ADDC16ri
  { 279,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo53 },  // Inst #279 = ADDC16rm
  { 280,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo54 },  // Inst #280 = ADDC16rn
  { 281,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo55 },  // Inst #281 = ADDC16rp
  { 282,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo56 },  // Inst #282 = ADDC16rr
  { 283,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo46 },  // Inst #283 = ADDC8mc
  { 284,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo47 },  // Inst #284 = ADDC8mi
  { 285,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo48 },  // Inst #285 = ADDC8mm
  { 286,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo49 },  // Inst #286 = ADDC8mn
  { 287,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo49 },  // Inst #287 = ADDC8mp
  { 288,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo57 },  // Inst #288 = ADDC8mr
  { 289,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo58 },  // Inst #289 = ADDC8rc
  { 290,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo59 },  // Inst #290 = ADDC8ri
  { 291,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo60 },  // Inst #291 = ADDC8rm
  { 292,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo61 },  // Inst #292 = ADDC8rn
  { 293,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo62 },  // Inst #293 = ADDC8rp
  { 294,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo63 },  // Inst #294 = ADDC8rr
  { 295,	3,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo64 },  // Inst #295 = ADDframe
  { 296,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo10 },  // Inst #296 = ADJCALLSTACKDOWN
  { 297,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo10 },  // Inst #297 = ADJCALLSTACKUP
  { 298,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #298 = AND16mc
  { 299,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #299 = AND16mi
  { 300,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #300 = AND16mm
  { 301,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #301 = AND16mn
  { 302,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #302 = AND16mp
  { 303,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo50 },  // Inst #303 = AND16mr
  { 304,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo51 },  // Inst #304 = AND16rc
  { 305,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo52 },  // Inst #305 = AND16ri
  { 306,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53 },  // Inst #306 = AND16rm
  { 307,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54 },  // Inst #307 = AND16rn
  { 308,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo55 },  // Inst #308 = AND16rp
  { 309,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56 },  // Inst #309 = AND16rr
  { 310,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #310 = AND8mc
  { 311,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #311 = AND8mi
  { 312,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #312 = AND8mm
  { 313,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #313 = AND8mn
  { 314,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #314 = AND8mp
  { 315,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57 },  // Inst #315 = AND8mr
  { 316,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo58 },  // Inst #316 = AND8rc
  { 317,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo59 },  // Inst #317 = AND8ri
  { 318,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo60 },  // Inst #318 = AND8rm
  { 319,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo61 },  // Inst #319 = AND8rn
  { 320,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo62 },  // Inst #320 = AND8rp
  { 321,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo63 },  // Inst #321 = AND8rr
  { 322,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #322 = BIC16mc
  { 323,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #323 = BIC16mi
  { 324,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #324 = BIC16mm
  { 325,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #325 = BIC16mn
  { 326,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #326 = BIC16mp
  { 327,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo50 },  // Inst #327 = BIC16mr
  { 328,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo51 },  // Inst #328 = BIC16rc
  { 329,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo52 },  // Inst #329 = BIC16ri
  { 330,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53 },  // Inst #330 = BIC16rm
  { 331,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54 },  // Inst #331 = BIC16rn
  { 332,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo55 },  // Inst #332 = BIC16rp
  { 333,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56 },  // Inst #333 = BIC16rr
  { 334,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #334 = BIC8mc
  { 335,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #335 = BIC8mi
  { 336,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #336 = BIC8mm
  { 337,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #337 = BIC8mn
  { 338,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #338 = BIC8mp
  { 339,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57 },  // Inst #339 = BIC8mr
  { 340,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo58 },  // Inst #340 = BIC8rc
  { 341,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo59 },  // Inst #341 = BIC8ri
  { 342,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo60 },  // Inst #342 = BIC8rm
  { 343,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo61 },  // Inst #343 = BIC8rn
  { 344,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo62 },  // Inst #344 = BIC8rp
  { 345,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo63 },  // Inst #345 = BIC8rr
  { 346,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #346 = BIS16mc
  { 347,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #347 = BIS16mi
  { 348,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #348 = BIS16mm
  { 349,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #349 = BIS16mn
  { 350,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #350 = BIS16mp
  { 351,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo50 },  // Inst #351 = BIS16mr
  { 352,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo51 },  // Inst #352 = BIS16rc
  { 353,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo52 },  // Inst #353 = BIS16ri
  { 354,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53 },  // Inst #354 = BIS16rm
  { 355,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54 },  // Inst #355 = BIS16rn
  { 356,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo55 },  // Inst #356 = BIS16rp
  { 357,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56 },  // Inst #357 = BIS16rr
  { 358,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #358 = BIS8mc
  { 359,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #359 = BIS8mi
  { 360,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #360 = BIS8mm
  { 361,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #361 = BIS8mn
  { 362,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #362 = BIS8mp
  { 363,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57 },  // Inst #363 = BIS8mr
  { 364,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo58 },  // Inst #364 = BIS8rc
  { 365,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo59 },  // Inst #365 = BIS8ri
  { 366,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo60 },  // Inst #366 = BIS8rm
  { 367,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo61 },  // Inst #367 = BIS8rn
  { 368,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo62 },  // Inst #368 = BIS8rp
  { 369,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo63 },  // Inst #369 = BIS8rr
  { 370,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #370 = BIT16mc
  { 371,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #371 = BIT16mi
  { 372,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #372 = BIT16mm
  { 373,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #373 = BIT16mn
  { 374,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #374 = BIT16mp
  { 375,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo50 },  // Inst #375 = BIT16mr
  { 376,	2,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo65 },  // Inst #376 = BIT16rc
  { 377,	2,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo66 },  // Inst #377 = BIT16ri
  { 378,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo67 },  // Inst #378 = BIT16rm
  { 379,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo68 },  // Inst #379 = BIT16rn
  { 380,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo68 },  // Inst #380 = BIT16rp
  { 381,	2,	0,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo69 },  // Inst #381 = BIT16rr
  { 382,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #382 = BIT8mc
  { 383,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #383 = BIT8mi
  { 384,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #384 = BIT8mm
  { 385,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #385 = BIT8mn
  { 386,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #386 = BIT8mp
  { 387,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57 },  // Inst #387 = BIT8mr
  { 388,	2,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo70 },  // Inst #388 = BIT8rc
  { 389,	2,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo71 },  // Inst #389 = BIT8ri
  { 390,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo72 },  // Inst #390 = BIT8rm
  { 391,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo73 },  // Inst #391 = BIT8rn
  { 392,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo73 },  // Inst #392 = BIT8rp
  { 393,	2,	0,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo74 },  // Inst #393 = BIT8rr
  { 394,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #394 = Bi
  { 395,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo75 },  // Inst #395 = Bm
  { 396,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #396 = Br
  { 397,	1,	0,	4,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList4, OperandInfo3 },  // Inst #397 = CALLi
  { 398,	2,	0,	4,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList4, OperandInfo75 },  // Inst #398 = CALLm
  { 399,	1,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList4, OperandInfo77 },  // Inst #399 = CALLn
  { 400,	1,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList4, OperandInfo77 },  // Inst #400 = CALLp
  { 401,	1,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList4, OperandInfo76 },  // Inst #401 = CALLr
  { 402,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #402 = CMP16mc
  { 403,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #403 = CMP16mi
  { 404,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #404 = CMP16mm
  { 405,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #405 = CMP16mn
  { 406,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #406 = CMP16mp
  { 407,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo50 },  // Inst #407 = CMP16mr
  { 408,	2,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo65 },  // Inst #408 = CMP16rc
  { 409,	2,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo66 },  // Inst #409 = CMP16ri
  { 410,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo67 },  // Inst #410 = CMP16rm
  { 411,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo68 },  // Inst #411 = CMP16rn
  { 412,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo68 },  // Inst #412 = CMP16rp
  { 413,	2,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo69 },  // Inst #413 = CMP16rr
  { 414,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #414 = CMP8mc
  { 415,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #415 = CMP8mi
  { 416,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #416 = CMP8mm
  { 417,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #417 = CMP8mn
  { 418,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #418 = CMP8mp
  { 419,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57 },  // Inst #419 = CMP8mr
  { 420,	2,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo70 },  // Inst #420 = CMP8rc
  { 421,	2,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo71 },  // Inst #421 = CMP8ri
  { 422,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo72 },  // Inst #422 = CMP8rm
  { 423,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo73 },  // Inst #423 = CMP8rn
  { 424,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo73 },  // Inst #424 = CMP8rp
  { 425,	2,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo74 },  // Inst #425 = CMP8rr
  { 426,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo46 },  // Inst #426 = DADD16mc
  { 427,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo47 },  // Inst #427 = DADD16mi
  { 428,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo48 },  // Inst #428 = DADD16mm
  { 429,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo49 },  // Inst #429 = DADD16mn
  { 430,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo49 },  // Inst #430 = DADD16mp
  { 431,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo50 },  // Inst #431 = DADD16mr
  { 432,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo51 },  // Inst #432 = DADD16rc
  { 433,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo52 },  // Inst #433 = DADD16ri
  { 434,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo53 },  // Inst #434 = DADD16rm
  { 435,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo54 },  // Inst #435 = DADD16rn
  { 436,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo55 },  // Inst #436 = DADD16rp
  { 437,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo56 },  // Inst #437 = DADD16rr
  { 438,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo46 },  // Inst #438 = DADD8mc
  { 439,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo47 },  // Inst #439 = DADD8mi
  { 440,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo48 },  // Inst #440 = DADD8mm
  { 441,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo49 },  // Inst #441 = DADD8mn
  { 442,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo49 },  // Inst #442 = DADD8mp
  { 443,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo57 },  // Inst #443 = DADD8mr
  { 444,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo58 },  // Inst #444 = DADD8rc
  { 445,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo59 },  // Inst #445 = DADD8ri
  { 446,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo60 },  // Inst #446 = DADD8rm
  { 447,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo61 },  // Inst #447 = DADD8rn
  { 448,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo62 },  // Inst #448 = DADD8rp
  { 449,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo63 },  // Inst #449 = DADD8rr
  { 450,	2,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo7 },  // Inst #450 = JCC
  { 451,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #451 = JMP
  { 452,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #452 = MOV16mc
  { 453,	3,	0,	6,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #453 = MOV16mi
  { 454,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #454 = MOV16mm
  { 455,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #455 = MOV16mn
  { 456,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #456 = MOV16mr
  { 457,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #457 = MOV16rc
  { 458,	2,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #458 = MOV16ri
  { 459,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #459 = MOV16rm
  { 460,	2,	1,	2,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #460 = MOV16rn
  { 461,	3,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo78 },  // Inst #461 = MOV16rp
  { 462,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #462 = MOV16rr
  { 463,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #463 = MOV8mc
  { 464,	3,	0,	6,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #464 = MOV8mi
  { 465,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #465 = MOV8mm
  { 466,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #466 = MOV8mn
  { 467,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #467 = MOV8mr
  { 468,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #468 = MOV8rc
  { 469,	2,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #469 = MOV8ri
  { 470,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo72 },  // Inst #470 = MOV8rm
  { 471,	2,	1,	2,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo73 },  // Inst #471 = MOV8rn
  { 472,	3,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #472 = MOV8rp
  { 473,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo74 },  // Inst #473 = MOV8rr
  { 474,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #474 = MOVZX16rm8
  { 475,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo80 },  // Inst #475 = MOVZX16rr8
  { 476,	1,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo76 },  // Inst #476 = POP16r
  { 477,	1,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo2 },  // Inst #477 = PUSH16c
  { 478,	1,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo3 },  // Inst #478 = PUSH16i
  { 479,	1,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo76 },  // Inst #479 = PUSH16r
  { 480,	1,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo81 },  // Inst #480 = PUSH8r
  { 481,	0,	0,	2,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #481 = RET
  { 482,	0,	0,	2,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #482 = RETI
  { 483,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo75 },  // Inst #483 = RRA16m
  { 484,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo77 },  // Inst #484 = RRA16n
  { 485,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo77 },  // Inst #485 = RRA16p
  { 486,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo82 },  // Inst #486 = RRA16r
  { 487,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo75 },  // Inst #487 = RRA8m
  { 488,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo77 },  // Inst #488 = RRA8n
  { 489,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo77 },  // Inst #489 = RRA8p
  { 490,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo83 },  // Inst #490 = RRA8r
  { 491,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo75 },  // Inst #491 = RRC16m
  { 492,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo77 },  // Inst #492 = RRC16n
  { 493,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo77 },  // Inst #493 = RRC16p
  { 494,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo82 },  // Inst #494 = RRC16r
  { 495,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo75 },  // Inst #495 = RRC8m
  { 496,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo77 },  // Inst #496 = RRC8n
  { 497,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo77 },  // Inst #497 = RRC8p
  { 498,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo83 },  // Inst #498 = RRC8r
  { 499,	2,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo69 },  // Inst #499 = Rrcl16
  { 500,	2,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo74 },  // Inst #500 = Rrcl8
  { 501,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo75 },  // Inst #501 = SEXT16m
  { 502,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo77 },  // Inst #502 = SEXT16n
  { 503,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo77 },  // Inst #503 = SEXT16p
  { 504,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo82 },  // Inst #504 = SEXT16r
  { 505,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #505 = SUB16mc
  { 506,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #506 = SUB16mi
  { 507,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #507 = SUB16mm
  { 508,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #508 = SUB16mn
  { 509,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #509 = SUB16mp
  { 510,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo50 },  // Inst #510 = SUB16mr
  { 511,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo51 },  // Inst #511 = SUB16rc
  { 512,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo52 },  // Inst #512 = SUB16ri
  { 513,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53 },  // Inst #513 = SUB16rm
  { 514,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54 },  // Inst #514 = SUB16rn
  { 515,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo55 },  // Inst #515 = SUB16rp
  { 516,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56 },  // Inst #516 = SUB16rr
  { 517,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #517 = SUB8mc
  { 518,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #518 = SUB8mi
  { 519,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #519 = SUB8mm
  { 520,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #520 = SUB8mn
  { 521,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #521 = SUB8mp
  { 522,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57 },  // Inst #522 = SUB8mr
  { 523,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo58 },  // Inst #523 = SUB8rc
  { 524,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo59 },  // Inst #524 = SUB8ri
  { 525,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo60 },  // Inst #525 = SUB8rm
  { 526,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo61 },  // Inst #526 = SUB8rn
  { 527,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo62 },  // Inst #527 = SUB8rp
  { 528,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo63 },  // Inst #528 = SUB8rr
  { 529,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo46 },  // Inst #529 = SUBC16mc
  { 530,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo47 },  // Inst #530 = SUBC16mi
  { 531,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo48 },  // Inst #531 = SUBC16mm
  { 532,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo49 },  // Inst #532 = SUBC16mn
  { 533,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo49 },  // Inst #533 = SUBC16mp
  { 534,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo50 },  // Inst #534 = SUBC16mr
  { 535,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo51 },  // Inst #535 = SUBC16rc
  { 536,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo52 },  // Inst #536 = SUBC16ri
  { 537,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo53 },  // Inst #537 = SUBC16rm
  { 538,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo54 },  // Inst #538 = SUBC16rn
  { 539,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo55 },  // Inst #539 = SUBC16rp
  { 540,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo56 },  // Inst #540 = SUBC16rr
  { 541,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo46 },  // Inst #541 = SUBC8mc
  { 542,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo47 },  // Inst #542 = SUBC8mi
  { 543,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo48 },  // Inst #543 = SUBC8mm
  { 544,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo49 },  // Inst #544 = SUBC8mn
  { 545,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo49 },  // Inst #545 = SUBC8mp
  { 546,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo57 },  // Inst #546 = SUBC8mr
  { 547,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo58 },  // Inst #547 = SUBC8rc
  { 548,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo59 },  // Inst #548 = SUBC8ri
  { 549,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo60 },  // Inst #549 = SUBC8rm
  { 550,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo61 },  // Inst #550 = SUBC8rn
  { 551,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo62 },  // Inst #551 = SUBC8rp
  { 552,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo63 },  // Inst #552 = SUBC8rr
  { 553,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo75 },  // Inst #553 = SWPB16m
  { 554,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo77 },  // Inst #554 = SWPB16n
  { 555,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo77 },  // Inst #555 = SWPB16p
  { 556,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo82 },  // Inst #556 = SWPB16r
  { 557,	4,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo84 },  // Inst #557 = Select16
  { 558,	4,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo85 },  // Inst #558 = Select8
  { 559,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo86 },  // Inst #559 = Shl16
  { 560,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo87 },  // Inst #560 = Shl8
  { 561,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo86 },  // Inst #561 = Sra16
  { 562,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo87 },  // Inst #562 = Sra8
  { 563,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo86 },  // Inst #563 = Srl16
  { 564,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo87 },  // Inst #564 = Srl8
  { 565,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #565 = XOR16mc
  { 566,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #566 = XOR16mi
  { 567,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #567 = XOR16mm
  { 568,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #568 = XOR16mn
  { 569,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #569 = XOR16mp
  { 570,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo50 },  // Inst #570 = XOR16mr
  { 571,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo51 },  // Inst #571 = XOR16rc
  { 572,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo52 },  // Inst #572 = XOR16ri
  { 573,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53 },  // Inst #573 = XOR16rm
  { 574,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54 },  // Inst #574 = XOR16rn
  { 575,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo55 },  // Inst #575 = XOR16rp
  { 576,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56 },  // Inst #576 = XOR16rr
  { 577,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #577 = XOR8mc
  { 578,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #578 = XOR8mi
  { 579,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #579 = XOR8mm
  { 580,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #580 = XOR8mn
  { 581,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #581 = XOR8mp
  { 582,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57 },  // Inst #582 = XOR8mr
  { 583,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo58 },  // Inst #583 = XOR8rc
  { 584,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo59 },  // Inst #584 = XOR8ri
  { 585,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo60 },  // Inst #585 = XOR8rm
  { 586,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo61 },  // Inst #586 = XOR8rn
  { 587,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo62 },  // Inst #587 = XOR8rp
  { 588,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo63 },  // Inst #588 = XOR8rr
  { 589,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo82 },  // Inst #589 = ZEXT16r
};

extern const char MSP430InstrNameData[] = {
  /* 0 */ 'G', '_', 'F', 'L', 'O', 'G', '1', '0', 0,
  /* 9 */ 'G', '_', 'F', 'L', 'O', 'G', '2', 0,
  /* 17 */ 'G', '_', 'F', 'E', 'X', 'P', '2', 0,
  /* 25 */ 'S', 'r', 'a', '1', '6', 0,
  /* 31 */ 'R', 'r', 'c', 'l', '1', '6', 0,
  /* 38 */ 'S', 'h', 'l', '1', '6', 0,
  /* 44 */ 'S', 'r', 'l', '1', '6', 0,
  /* 50 */ 'S', 'e', 'l', 'e', 'c', 't', '1', '6', 0,
  /* 59 */ 'S', 'r', 'a', '8', 0,
  /* 64 */ 'R', 'r', 'c', 'l', '8', 0,
  /* 70 */ 'S', 'h', 'l', '8', 0,
  /* 75 */ 'S', 'r', 'l', '8', 0,
  /* 80 */ 'M', 'O', 'V', 'Z', 'X', '1', '6', 'r', 'm', '8', 0,
  /* 91 */ 'M', 'O', 'V', 'Z', 'X', '1', '6', 'r', 'r', '8', 0,
  /* 102 */ 'S', 'e', 'l', 'e', 'c', 't', '8', 0,
  /* 110 */ 'G', '_', 'F', 'M', 'A', 0,
  /* 116 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'M', 'A', 0,
  /* 129 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 136 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'S', 'U', 'B', 0,
  /* 150 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'S', 'U', 'B', 0,
  /* 167 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 173 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'S', 'U', 'B', 0,
  /* 189 */ 'J', 'C', 'C', 0,
  /* 193 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 205 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 215 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 233 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 241 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 262 */ 'G', '_', 'D', 'Y', 'N', '_', 'S', 'T', 'A', 'C', 'K', 'A', 'L', 'L', 'O', 'C', 0,
  /* 279 */ 'G', '_', 'F', 'M', 'A', 'D', 0,
  /* 286 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 305 */ 'G', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 316 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 335 */ 'G', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 346 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'L', 'O', 'A', 'D', 0,
  /* 361 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 368 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'F', 'A', 'D', 'D', 0,
  /* 385 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 392 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'S', 'E', 'Q', '_', 'F', 'A', 'D', 'D', 0,
  /* 413 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'A', 'D', 'D', 0,
  /* 427 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'A', 'D', 'D', 0,
  /* 444 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'A', 'D', 'D', 0,
  /* 460 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 466 */ 'G', '_', 'P', 'T', 'R', '_', 'A', 'D', 'D', 0,
  /* 476 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'D', 'D', 0,
  /* 492 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'N', 'A', 'N', 'D', 0,
  /* 509 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'A', 'N', 'D', 0,
  /* 525 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 531 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'N', 'D', 0,
  /* 547 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 560 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 569 */ 'G', '_', 'L', 'L', 'R', 'O', 'U', 'N', 'D', 0,
  /* 579 */ 'G', '_', 'L', 'R', 'O', 'U', 'N', 'D', 0,
  /* 588 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'R', 'O', 'U', 'N', 'D', 0,
  /* 606 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', '_', 'R', 'O', 'U', 'N', 'D', 0,
  /* 632 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 649 */ 'P', 'S', 'E', 'U', 'D', 'O', '_', 'P', 'R', 'O', 'B', 'E', 0,
  /* 662 */ 'G', '_', 'S', 'S', 'U', 'B', 'E', 0,
  /* 670 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 678 */ 'G', '_', 'F', 'E', 'N', 'C', 'E', 0,
  /* 686 */ 'A', 'R', 'I', 'T', 'H', '_', 'F', 'E', 'N', 'C', 'E', 0,
  /* 698 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 711 */ 'G', '_', 'S', 'A', 'D', 'D', 'E', 0,
  /* 719 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 727 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 742 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 757 */ 'G', '_', 'J', 'U', 'M', 'P', '_', 'T', 'A', 'B', 'L', 'E', 0,
  /* 770 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 777 */ 'G', '_', 'M', 'E', 'M', 'C', 'P', 'Y', '_', 'I', 'N', 'L', 'I', 'N', 'E', 0,
  /* 793 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 806 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 822 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 830 */ 'G', '_', 'B', 'I', 'T', 'R', 'E', 'V', 'E', 'R', 'S', 'E', 0,
  /* 843 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 853 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 868 */ 'G', '_', 'M', 'E', 'M', 'M', 'O', 'V', 'E', 0,
  /* 878 */ 'G', '_', 'F', 'R', 'E', 'E', 'Z', 'E', 0,
  /* 887 */ 'G', '_', 'F', 'C', 'A', 'N', 'O', 'N', 'I', 'C', 'A', 'L', 'I', 'Z', 'E', 0,
  /* 903 */ 'G', '_', 'C', 'T', 'L', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 921 */ 'G', '_', 'C', 'T', 'T', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 939 */ 'G', '_', 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 954 */ 'D', 'B', 'G', '_', 'I', 'N', 'S', 'T', 'R', '_', 'R', 'E', 'F', 0,
  /* 968 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 975 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 990 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1004 */ 'G', '_', 'S', 'E', 'X', 'T', '_', 'I', 'N', 'R', 'E', 'G', 0,
  /* 1017 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 1031 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', 0,
  /* 1048 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'C', 'H', 'G', 0,
  /* 1065 */ 'G', '_', 'F', 'L', 'O', 'G', 0,
  /* 1072 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 1080 */ 'P', 'R', 'E', 'A', 'L', 'L', 'O', 'C', 'A', 'T', 'E', 'D', '_', 'A', 'R', 'G', 0,
  /* 1097 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 1105 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 1113 */ 'D', 'B', 'G', '_', 'P', 'H', 'I', 0,
  /* 1121 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 1130 */ 'R', 'E', 'T', 'I', 0,
  /* 1135 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 1144 */ 'G', '_', 'F', 'P', 'O', 'W', 'I', 0,
  /* 1152 */ 'G', '_', 'P', 'T', 'R', 'M', 'A', 'S', 'K', 0,
  /* 1162 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1171 */ 'D', 'B', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1181 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1190 */ 'A', 'N', 'N', 'O', 'T', 'A', 'T', 'I', 'O', 'N', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1207 */ 'I', 'C', 'A', 'L', 'L', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'F', 'U', 'N', 'N', 'E', 'L', 0,
  /* 1227 */ 'G', '_', 'F', 'S', 'H', 'L', 0,
  /* 1234 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 1240 */ 'G', '_', 'F', 'C', 'E', 'I', 'L', 0,
  /* 1248 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 1268 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'Y', 'P', 'E', 'D', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 1295 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 1316 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 1328 */ 'K', 'I', 'L', 'L', 0,
  /* 1333 */ 'G', '_', 'R', 'O', 'T', 'L', 0,
  /* 1340 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'F', 'M', 'U', 'L', 0,
  /* 1357 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 1364 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'S', 'E', 'Q', '_', 'F', 'M', 'U', 'L', 0,
  /* 1385 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'M', 'U', 'L', 0,
  /* 1399 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'M', 'U', 'L', 0,
  /* 1415 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 1421 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 1428 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'R', 'E', 'M', 0,
  /* 1442 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 1449 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 1456 */ 'G', '_', 'S', 'D', 'I', 'V', 'R', 'E', 'M', 0,
  /* 1466 */ 'G', '_', 'U', 'D', 'I', 'V', 'R', 'E', 'M', 0,
  /* 1476 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 1486 */ 'G', '_', 'F', 'M', 'I', 'N', 'I', 'M', 'U', 'M', 0,
  /* 1497 */ 'G', '_', 'F', 'M', 'A', 'X', 'I', 'M', 'U', 'M', 0,
  /* 1508 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', 0,
  /* 1518 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', 0,
  /* 1528 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'R', 'O', 'U', 'N', 'D', 'E', 'V', 'E', 'N', 0,
  /* 1550 */ 'G', '_', 'A', 'S', 'S', 'E', 'R', 'T', '_', 'A', 'L', 'I', 'G', 'N', 0,
  /* 1565 */ 'G', '_', 'F', 'C', 'O', 'P', 'Y', 'S', 'I', 'G', 'N', 0,
  /* 1577 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'F', 'M', 'I', 'N', 0,
  /* 1594 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'M', 'I', 'N', 0,
  /* 1611 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'S', 'M', 'I', 'N', 0,
  /* 1628 */ 'G', '_', 'S', 'M', 'I', 'N', 0,
  /* 1635 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'U', 'M', 'I', 'N', 0,
  /* 1652 */ 'G', '_', 'U', 'M', 'I', 'N', 0,
  /* 1659 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'I', 'N', 0,
  /* 1676 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'I', 'N', 0,
  /* 1692 */ 'G', '_', 'F', 'S', 'I', 'N', 0,
  /* 1699 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 1715 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 1732 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 1740 */ 'G', '_', 'U', 'S', 'U', 'B', 'O', 0,
  /* 1748 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 1756 */ 'G', '_', 'U', 'A', 'D', 'D', 'O', 0,
  /* 1764 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 1772 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 1780 */ 'G', '_', 'B', 'Z', 'E', 'R', 'O', 0,
  /* 1788 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 1797 */ 'G', '_', 'B', 'S', 'W', 'A', 'P', 0,
  /* 1805 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 1814 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 1823 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 1830 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 1837 */ 'J', 'M', 'P', 0,
  /* 1841 */ 'G', '_', 'C', 'T', 'P', 'O', 'P', 0,
  /* 1849 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 1862 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 1874 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 1889 */ 'P', 'R', 'E', 'A', 'L', 'L', 'O', 'C', 'A', 'T', 'E', 'D', '_', 'S', 'E', 'T', 'U', 'P', 0,
  /* 1908 */ 'G', '_', 'F', 'E', 'X', 'P', 0,
  /* 1915 */ 'G', '_', 'B', 'R', 0,
  /* 1920 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', '_', 'B', 'R', 0,
  /* 1933 */ 'G', '_', 'B', 'L', 'O', 'C', 'K', '_', 'A', 'D', 'D', 'R', 0,
  /* 1946 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 1971 */ 'G', '_', 'R', 'E', 'A', 'D', 'C', 'Y', 'C', 'L', 'E', 'C', 'O', 'U', 'N', 'T', 'E', 'R', 0,
  /* 1990 */ 'G', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'G', 'I', 'S', 'T', 'E', 'R', 0,
  /* 2006 */ 'G', '_', 'W', 'R', 'I', 'T', 'E', '_', 'R', 'E', 'G', 'I', 'S', 'T', 'E', 'R', 0,
  /* 2023 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 2030 */ 'G', '_', 'F', 'S', 'H', 'R', 0,
  /* 2037 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 2044 */ 'G', '_', 'F', 'F', 'L', 'O', 'O', 'R', 0,
  /* 2053 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 2068 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 2085 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'X', 'O', 'R', 0,
  /* 2101 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 2107 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'O', 'R', 0,
  /* 2123 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'O', 'R', 0,
  /* 2138 */ 'G', '_', 'O', 'R', 0,
  /* 2143 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'O', 'R', 0,
  /* 2158 */ 'G', '_', 'R', 'O', 'T', 'R', 0,
  /* 2165 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 2176 */ 'G', '_', 'F', 'A', 'B', 'S', 0,
  /* 2183 */ 'G', '_', 'A', 'B', 'S', 0,
  /* 2189 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 2206 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 2221 */ 'G', '_', 'F', 'C', 'O', 'S', 0,
  /* 2228 */ 'G', '_', 'C', 'O', 'N', 'C', 'A', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', 'S', 0,
  /* 2245 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 2262 */ 'G', '_', 'I', 'S', '_', 'F', 'P', 'C', 'L', 'A', 'S', 'S', 0,
  /* 2275 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'W', 'I', 'T', 'H', '_', 'S', 'U', 'C', 'C', 'E', 'S', 'S', 0,
  /* 2305 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 2332 */ 'G', '_', 'S', 'S', 'U', 'B', 'S', 'A', 'T', 0,
  /* 2342 */ 'G', '_', 'U', 'S', 'U', 'B', 'S', 'A', 'T', 0,
  /* 2352 */ 'G', '_', 'S', 'A', 'D', 'D', 'S', 'A', 'T', 0,
  /* 2362 */ 'G', '_', 'U', 'A', 'D', 'D', 'S', 'A', 'T', 0,
  /* 2372 */ 'G', '_', 'S', 'S', 'H', 'L', 'S', 'A', 'T', 0,
  /* 2382 */ 'G', '_', 'U', 'S', 'H', 'L', 'S', 'A', 'T', 0,
  /* 2392 */ 'G', '_', 'S', 'M', 'U', 'L', 'F', 'I', 'X', 'S', 'A', 'T', 0,
  /* 2405 */ 'G', '_', 'U', 'M', 'U', 'L', 'F', 'I', 'X', 'S', 'A', 'T', 0,
  /* 2418 */ 'G', '_', 'S', 'D', 'I', 'V', 'F', 'I', 'X', 'S', 'A', 'T', 0,
  /* 2431 */ 'G', '_', 'U', 'D', 'I', 'V', 'F', 'I', 'X', 'S', 'A', 'T', 0,
  /* 2444 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 2454 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 2463 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 2476 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 2490 */ 'G', '_', 'M', 'E', 'M', 'S', 'E', 'T', 0,
  /* 2499 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 2523 */ 'G', '_', 'B', 'R', 'J', 'T', 0,
  /* 2530 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 2551 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 2571 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 2583 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 2594 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 2605 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 2616 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 2627 */ 'G', '_', 'F', 'R', 'I', 'N', 'T', 0,
  /* 2635 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'L', 'R', 'I', 'N', 'T', 0,
  /* 2653 */ 'G', '_', 'F', 'N', 'E', 'A', 'R', 'B', 'Y', 'I', 'N', 'T', 0,
  /* 2666 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 2676 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 2691 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 2700 */ 'G', '_', 'F', 'S', 'Q', 'R', 'T', 0,
  /* 2708 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'S', 'Q', 'R', 'T', 0,
  /* 2723 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 2733 */ 'G', '_', 'A', 'D', 'D', 'R', 'S', 'P', 'A', 'C', 'E', '_', 'C', 'A', 'S', 'T', 0,
  /* 2750 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', '_', 'L', 'I', 'S', 'T', 0,
  /* 2765 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 2773 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 2780 */ 'G', '_', 'A', 'S', 'S', 'E', 'R', 'T', '_', 'S', 'E', 'X', 'T', 0,
  /* 2794 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 2803 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 2810 */ 'G', '_', 'A', 'S', 'S', 'E', 'R', 'T', '_', 'Z', 'E', 'X', 'T', 0,
  /* 2824 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 2831 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'D', 'I', 'V', 0,
  /* 2845 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 2852 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 2859 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 2866 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'F', 'M', 'A', 'X', 0,
  /* 2883 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'M', 'A', 'X', 0,
  /* 2900 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'S', 'M', 'A', 'X', 0,
  /* 2917 */ 'G', '_', 'S', 'M', 'A', 'X', 0,
  /* 2924 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'U', 'M', 'A', 'X', 0,
  /* 2941 */ 'G', '_', 'U', 'M', 'A', 'X', 0,
  /* 2948 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'A', 'X', 0,
  /* 2965 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'A', 'X', 0,
  /* 2981 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 2995 */ 'G', '_', 'S', 'B', 'F', 'X', 0,
  /* 3002 */ 'G', '_', 'U', 'B', 'F', 'X', 0,
  /* 3009 */ 'G', '_', 'S', 'M', 'U', 'L', 'F', 'I', 'X', 0,
  /* 3019 */ 'G', '_', 'U', 'M', 'U', 'L', 'F', 'I', 'X', 0,
  /* 3029 */ 'G', '_', 'S', 'D', 'I', 'V', 'F', 'I', 'X', 0,
  /* 3039 */ 'G', '_', 'U', 'D', 'I', 'V', 'F', 'I', 'X', 0,
  /* 3049 */ 'G', '_', 'M', 'E', 'M', 'C', 'P', 'Y', 0,
  /* 3058 */ 'C', 'O', 'P', 'Y', 0,
  /* 3063 */ 'G', '_', 'C', 'T', 'L', 'Z', 0,
  /* 3070 */ 'G', '_', 'C', 'T', 'T', 'Z', 0,
  /* 3077 */ 'P', 'U', 'S', 'H', '1', '6', 'c', 0,
  /* 3085 */ 'S', 'U', 'B', '1', '6', 'm', 'c', 0,
  /* 3093 */ 'S', 'U', 'B', 'C', '1', '6', 'm', 'c', 0,
  /* 3102 */ 'A', 'D', 'D', 'C', '1', '6', 'm', 'c', 0,
  /* 3111 */ 'B', 'I', 'C', '1', '6', 'm', 'c', 0,
  /* 3119 */ 'D', 'A', 'D', 'D', '1', '6', 'm', 'c', 0,
  /* 3128 */ 'A', 'N', 'D', '1', '6', 'm', 'c', 0,
  /* 3136 */ 'C', 'M', 'P', '1', '6', 'm', 'c', 0,
  /* 3144 */ 'X', 'O', 'R', '1', '6', 'm', 'c', 0,
  /* 3152 */ 'B', 'I', 'S', '1', '6', 'm', 'c', 0,
  /* 3160 */ 'B', 'I', 'T', '1', '6', 'm', 'c', 0,
  /* 3168 */ 'M', 'O', 'V', '1', '6', 'm', 'c', 0,
  /* 3176 */ 'S', 'U', 'B', '8', 'm', 'c', 0,
  /* 3183 */ 'S', 'U', 'B', 'C', '8', 'm', 'c', 0,
  /* 3191 */ 'A', 'D', 'D', 'C', '8', 'm', 'c', 0,
  /* 3199 */ 'B', 'I', 'C', '8', 'm', 'c', 0,
  /* 3206 */ 'D', 'A', 'D', 'D', '8', 'm', 'c', 0,
  /* 3214 */ 'A', 'N', 'D', '8', 'm', 'c', 0,
  /* 3221 */ 'C', 'M', 'P', '8', 'm', 'c', 0,
  /* 3228 */ 'X', 'O', 'R', '8', 'm', 'c', 0,
  /* 3235 */ 'B', 'I', 'S', '8', 'm', 'c', 0,
  /* 3242 */ 'B', 'I', 'T', '8', 'm', 'c', 0,
  /* 3249 */ 'M', 'O', 'V', '8', 'm', 'c', 0,
  /* 3256 */ 'S', 'U', 'B', '1', '6', 'r', 'c', 0,
  /* 3264 */ 'S', 'U', 'B', 'C', '1', '6', 'r', 'c', 0,
  /* 3273 */ 'A', 'D', 'D', 'C', '1', '6', 'r', 'c', 0,
  /* 3282 */ 'B', 'I', 'C', '1', '6', 'r', 'c', 0,
  /* 3290 */ 'D', 'A', 'D', 'D', '1', '6', 'r', 'c', 0,
  /* 3299 */ 'A', 'N', 'D', '1', '6', 'r', 'c', 0,
  /* 3307 */ 'C', 'M', 'P', '1', '6', 'r', 'c', 0,
  /* 3315 */ 'X', 'O', 'R', '1', '6', 'r', 'c', 0,
  /* 3323 */ 'B', 'I', 'S', '1', '6', 'r', 'c', 0,
  /* 3331 */ 'B', 'I', 'T', '1', '6', 'r', 'c', 0,
  /* 3339 */ 'M', 'O', 'V', '1', '6', 'r', 'c', 0,
  /* 3347 */ 'S', 'U', 'B', '8', 'r', 'c', 0,
  /* 3354 */ 'S', 'U', 'B', 'C', '8', 'r', 'c', 0,
  /* 3362 */ 'A', 'D', 'D', 'C', '8', 'r', 'c', 0,
  /* 3370 */ 'B', 'I', 'C', '8', 'r', 'c', 0,
  /* 3377 */ 'D', 'A', 'D', 'D', '8', 'r', 'c', 0,
  /* 3385 */ 'A', 'N', 'D', '8', 'r', 'c', 0,
  /* 3392 */ 'C', 'M', 'P', '8', 'r', 'c', 0,
  /* 3399 */ 'X', 'O', 'R', '8', 'r', 'c', 0,
  /* 3406 */ 'B', 'I', 'S', '8', 'r', 'c', 0,
  /* 3413 */ 'B', 'I', 'T', '8', 'r', 'c', 0,
  /* 3420 */ 'M', 'O', 'V', '8', 'r', 'c', 0,
  /* 3427 */ 'A', 'D', 'D', 'f', 'r', 'a', 'm', 'e', 0,
  /* 3436 */ 'P', 'U', 'S', 'H', '1', '6', 'i', 0,
  /* 3444 */ 'B', 'i', 0,
  /* 3447 */ 'C', 'A', 'L', 'L', 'i', 0,
  /* 3453 */ 'S', 'U', 'B', '1', '6', 'm', 'i', 0,
  /* 3461 */ 'S', 'U', 'B', 'C', '1', '6', 'm', 'i', 0,
  /* 3470 */ 'A', 'D', 'D', 'C', '1', '6', 'm', 'i', 0,
  /* 3479 */ 'B', 'I', 'C', '1', '6', 'm', 'i', 0,
  /* 3487 */ 'D', 'A', 'D', 'D', '1', '6', 'm', 'i', 0,
  /* 3496 */ 'A', 'N', 'D', '1', '6', 'm', 'i', 0,
  /* 3504 */ 'C', 'M', 'P', '1', '6', 'm', 'i', 0,
  /* 3512 */ 'X', 'O', 'R', '1', '6', 'm', 'i', 0,
  /* 3520 */ 'B', 'I', 'S', '1', '6', 'm', 'i', 0,
  /* 3528 */ 'B', 'I', 'T', '1', '6', 'm', 'i', 0,
  /* 3536 */ 'M', 'O', 'V', '1', '6', 'm', 'i', 0,
  /* 3544 */ 'S', 'U', 'B', '8', 'm', 'i', 0,
  /* 3551 */ 'S', 'U', 'B', 'C', '8', 'm', 'i', 0,
  /* 3559 */ 'A', 'D', 'D', 'C', '8', 'm', 'i', 0,
  /* 3567 */ 'B', 'I', 'C', '8', 'm', 'i', 0,
  /* 3574 */ 'D', 'A', 'D', 'D', '8', 'm', 'i', 0,
  /* 3582 */ 'A', 'N', 'D', '8', 'm', 'i', 0,
  /* 3589 */ 'C', 'M', 'P', '8', 'm', 'i', 0,
  /* 3596 */ 'X', 'O', 'R', '8', 'm', 'i', 0,
  /* 3603 */ 'B', 'I', 'S', '8', 'm', 'i', 0,
  /* 3610 */ 'B', 'I', 'T', '8', 'm', 'i', 0,
  /* 3617 */ 'M', 'O', 'V', '8', 'm', 'i', 0,
  /* 3624 */ 'S', 'U', 'B', '1', '6', 'r', 'i', 0,
  /* 3632 */ 'S', 'U', 'B', 'C', '1', '6', 'r', 'i', 0,
  /* 3641 */ 'A', 'D', 'D', 'C', '1', '6', 'r', 'i', 0,
  /* 3650 */ 'B', 'I', 'C', '1', '6', 'r', 'i', 0,
  /* 3658 */ 'D', 'A', 'D', 'D', '1', '6', 'r', 'i', 0,
  /* 3667 */ 'A', 'N', 'D', '1', '6', 'r', 'i', 0,
  /* 3675 */ 'C', 'M', 'P', '1', '6', 'r', 'i', 0,
  /* 3683 */ 'X', 'O', 'R', '1', '6', 'r', 'i', 0,
  /* 3691 */ 'B', 'I', 'S', '1', '6', 'r', 'i', 0,
  /* 3699 */ 'B', 'I', 'T', '1', '6', 'r', 'i', 0,
  /* 3707 */ 'M', 'O', 'V', '1', '6', 'r', 'i', 0,
  /* 3715 */ 'S', 'U', 'B', '8', 'r', 'i', 0,
  /* 3722 */ 'S', 'U', 'B', 'C', '8', 'r', 'i', 0,
  /* 3730 */ 'A', 'D', 'D', 'C', '8', 'r', 'i', 0,
  /* 3738 */ 'B', 'I', 'C', '8', 'r', 'i', 0,
  /* 3745 */ 'D', 'A', 'D', 'D', '8', 'r', 'i', 0,
  /* 3753 */ 'A', 'N', 'D', '8', 'r', 'i', 0,
  /* 3760 */ 'C', 'M', 'P', '8', 'r', 'i', 0,
  /* 3767 */ 'X', 'O', 'R', '8', 'r', 'i', 0,
  /* 3774 */ 'B', 'I', 'S', '8', 'r', 'i', 0,
  /* 3781 */ 'B', 'I', 'T', '8', 'r', 'i', 0,
  /* 3788 */ 'M', 'O', 'V', '8', 'r', 'i', 0,
  /* 3795 */ 'R', 'R', 'A', '1', '6', 'm', 0,
  /* 3802 */ 'S', 'W', 'P', 'B', '1', '6', 'm', 0,
  /* 3810 */ 'R', 'R', 'C', '1', '6', 'm', 0,
  /* 3817 */ 'S', 'E', 'X', 'T', '1', '6', 'm', 0,
  /* 3825 */ 'R', 'R', 'A', '8', 'm', 0,
  /* 3831 */ 'R', 'R', 'C', '8', 'm', 0,
  /* 3837 */ 'B', 'm', 0,
  /* 3840 */ 'C', 'A', 'L', 'L', 'm', 0,
  /* 3846 */ 'S', 'U', 'B', '1', '6', 'm', 'm', 0,
  /* 3854 */ 'S', 'U', 'B', 'C', '1', '6', 'm', 'm', 0,
  /* 3863 */ 'A', 'D', 'D', 'C', '1', '6', 'm', 'm', 0,
  /* 3872 */ 'B', 'I', 'C', '1', '6', 'm', 'm', 0,
  /* 3880 */ 'D', 'A', 'D', 'D', '1', '6', 'm', 'm', 0,
  /* 3889 */ 'A', 'N', 'D', '1', '6', 'm', 'm', 0,
  /* 3897 */ 'C', 'M', 'P', '1', '6', 'm', 'm', 0,
  /* 3905 */ 'X', 'O', 'R', '1', '6', 'm', 'm', 0,
  /* 3913 */ 'B', 'I', 'S', '1', '6', 'm', 'm', 0,
  /* 3921 */ 'B', 'I', 'T', '1', '6', 'm', 'm', 0,
  /* 3929 */ 'M', 'O', 'V', '1', '6', 'm', 'm', 0,
  /* 3937 */ 'S', 'U', 'B', '8', 'm', 'm', 0,
  /* 3944 */ 'S', 'U', 'B', 'C', '8', 'm', 'm', 0,
  /* 3952 */ 'A', 'D', 'D', 'C', '8', 'm', 'm', 0,
  /* 3960 */ 'B', 'I', 'C', '8', 'm', 'm', 0,
  /* 3967 */ 'D', 'A', 'D', 'D', '8', 'm', 'm', 0,
  /* 3975 */ 'A', 'N', 'D', '8', 'm', 'm', 0,
  /* 3982 */ 'C', 'M', 'P', '8', 'm', 'm', 0,
  /* 3989 */ 'X', 'O', 'R', '8', 'm', 'm', 0,
  /* 3996 */ 'B', 'I', 'S', '8', 'm', 'm', 0,
  /* 4003 */ 'B', 'I', 'T', '8', 'm', 'm', 0,
  /* 4010 */ 'M', 'O', 'V', '8', 'm', 'm', 0,
  /* 4017 */ 'S', 'U', 'B', '1', '6', 'r', 'm', 0,
  /* 4025 */ 'S', 'U', 'B', 'C', '1', '6', 'r', 'm', 0,
  /* 4034 */ 'A', 'D', 'D', 'C', '1', '6', 'r', 'm', 0,
  /* 4043 */ 'B', 'I', 'C', '1', '6', 'r', 'm', 0,
  /* 4051 */ 'D', 'A', 'D', 'D', '1', '6', 'r', 'm', 0,
  /* 4060 */ 'A', 'N', 'D', '1', '6', 'r', 'm', 0,
  /* 4068 */ 'C', 'M', 'P', '1', '6', 'r', 'm', 0,
  /* 4076 */ 'X', 'O', 'R', '1', '6', 'r', 'm', 0,
  /* 4084 */ 'B', 'I', 'S', '1', '6', 'r', 'm', 0,
  /* 4092 */ 'B', 'I', 'T', '1', '6', 'r', 'm', 0,
  /* 4100 */ 'M', 'O', 'V', '1', '6', 'r', 'm', 0,
  /* 4108 */ 'S', 'U', 'B', '8', 'r', 'm', 0,
  /* 4115 */ 'S', 'U', 'B', 'C', '8', 'r', 'm', 0,
  /* 4123 */ 'A', 'D', 'D', 'C', '8', 'r', 'm', 0,
  /* 4131 */ 'B', 'I', 'C', '8', 'r', 'm', 0,
  /* 4138 */ 'D', 'A', 'D', 'D', '8', 'r', 'm', 0,
  /* 4146 */ 'A', 'N', 'D', '8', 'r', 'm', 0,
  /* 4153 */ 'C', 'M', 'P', '8', 'r', 'm', 0,
  /* 4160 */ 'X', 'O', 'R', '8', 'r', 'm', 0,
  /* 4167 */ 'B', 'I', 'S', '8', 'r', 'm', 0,
  /* 4174 */ 'B', 'I', 'T', '8', 'r', 'm', 0,
  /* 4181 */ 'M', 'O', 'V', '8', 'r', 'm', 0,
  /* 4188 */ 'R', 'R', 'A', '1', '6', 'n', 0,
  /* 4195 */ 'S', 'W', 'P', 'B', '1', '6', 'n', 0,
  /* 4203 */ 'R', 'R', 'C', '1', '6', 'n', 0,
  /* 4210 */ 'S', 'E', 'X', 'T', '1', '6', 'n', 0,
  /* 4218 */ 'R', 'R', 'A', '8', 'n', 0,
  /* 4224 */ 'R', 'R', 'C', '8', 'n', 0,
  /* 4230 */ 'C', 'A', 'L', 'L', 'n', 0,
  /* 4236 */ 'S', 'U', 'B', '1', '6', 'm', 'n', 0,
  /* 4244 */ 'S', 'U', 'B', 'C', '1', '6', 'm', 'n', 0,
  /* 4253 */ 'A', 'D', 'D', 'C', '1', '6', 'm', 'n', 0,
  /* 4262 */ 'B', 'I', 'C', '1', '6', 'm', 'n', 0,
  /* 4270 */ 'D', 'A', 'D', 'D', '1', '6', 'm', 'n', 0,
  /* 4279 */ 'A', 'N', 'D', '1', '6', 'm', 'n', 0,
  /* 4287 */ 'C', 'M', 'P', '1', '6', 'm', 'n', 0,
  /* 4295 */ 'X', 'O', 'R', '1', '6', 'm', 'n', 0,
  /* 4303 */ 'B', 'I', 'S', '1', '6', 'm', 'n', 0,
  /* 4311 */ 'B', 'I', 'T', '1', '6', 'm', 'n', 0,
  /* 4319 */ 'M', 'O', 'V', '1', '6', 'm', 'n', 0,
  /* 4327 */ 'S', 'U', 'B', '8', 'm', 'n', 0,
  /* 4334 */ 'S', 'U', 'B', 'C', '8', 'm', 'n', 0,
  /* 4342 */ 'A', 'D', 'D', 'C', '8', 'm', 'n', 0,
  /* 4350 */ 'B', 'I', 'C', '8', 'm', 'n', 0,
  /* 4357 */ 'D', 'A', 'D', 'D', '8', 'm', 'n', 0,
  /* 4365 */ 'A', 'N', 'D', '8', 'm', 'n', 0,
  /* 4372 */ 'C', 'M', 'P', '8', 'm', 'n', 0,
  /* 4379 */ 'X', 'O', 'R', '8', 'm', 'n', 0,
  /* 4386 */ 'B', 'I', 'S', '8', 'm', 'n', 0,
  /* 4393 */ 'B', 'I', 'T', '8', 'm', 'n', 0,
  /* 4400 */ 'M', 'O', 'V', '8', 'm', 'n', 0,
  /* 4407 */ 'S', 'U', 'B', '1', '6', 'r', 'n', 0,
  /* 4415 */ 'S', 'U', 'B', 'C', '1', '6', 'r', 'n', 0,
  /* 4424 */ 'A', 'D', 'D', 'C', '1', '6', 'r', 'n', 0,
  /* 4433 */ 'B', 'I', 'C', '1', '6', 'r', 'n', 0,
  /* 4441 */ 'D', 'A', 'D', 'D', '1', '6', 'r', 'n', 0,
  /* 4450 */ 'A', 'N', 'D', '1', '6', 'r', 'n', 0,
  /* 4458 */ 'C', 'M', 'P', '1', '6', 'r', 'n', 0,
  /* 4466 */ 'X', 'O', 'R', '1', '6', 'r', 'n', 0,
  /* 4474 */ 'B', 'I', 'S', '1', '6', 'r', 'n', 0,
  /* 4482 */ 'B', 'I', 'T', '1', '6', 'r', 'n', 0,
  /* 4490 */ 'M', 'O', 'V', '1', '6', 'r', 'n', 0,
  /* 4498 */ 'S', 'U', 'B', '8', 'r', 'n', 0,
  /* 4505 */ 'S', 'U', 'B', 'C', '8', 'r', 'n', 0,
  /* 4513 */ 'A', 'D', 'D', 'C', '8', 'r', 'n', 0,
  /* 4521 */ 'B', 'I', 'C', '8', 'r', 'n', 0,
  /* 4528 */ 'D', 'A', 'D', 'D', '8', 'r', 'n', 0,
  /* 4536 */ 'A', 'N', 'D', '8', 'r', 'n', 0,
  /* 4543 */ 'C', 'M', 'P', '8', 'r', 'n', 0,
  /* 4550 */ 'X', 'O', 'R', '8', 'r', 'n', 0,
  /* 4557 */ 'B', 'I', 'S', '8', 'r', 'n', 0,
  /* 4564 */ 'B', 'I', 'T', '8', 'r', 'n', 0,
  /* 4571 */ 'M', 'O', 'V', '8', 'r', 'n', 0,
  /* 4578 */ 'R', 'R', 'A', '1', '6', 'p', 0,
  /* 4585 */ 'S', 'W', 'P', 'B', '1', '6', 'p', 0,
  /* 4593 */ 'R', 'R', 'C', '1', '6', 'p', 0,
  /* 4600 */ 'S', 'E', 'X', 'T', '1', '6', 'p', 0,
  /* 4608 */ 'R', 'R', 'A', '8', 'p', 0,
  /* 4614 */ 'R', 'R', 'C', '8', 'p', 0,
  /* 4620 */ 'C', 'A', 'L', 'L', 'p', 0,
  /* 4626 */ 'S', 'U', 'B', '1', '6', 'm', 'p', 0,
  /* 4634 */ 'S', 'U', 'B', 'C', '1', '6', 'm', 'p', 0,
  /* 4643 */ 'A', 'D', 'D', 'C', '1', '6', 'm', 'p', 0,
  /* 4652 */ 'B', 'I', 'C', '1', '6', 'm', 'p', 0,
  /* 4660 */ 'D', 'A', 'D', 'D', '1', '6', 'm', 'p', 0,
  /* 4669 */ 'A', 'N', 'D', '1', '6', 'm', 'p', 0,
  /* 4677 */ 'C', 'M', 'P', '1', '6', 'm', 'p', 0,
  /* 4685 */ 'X', 'O', 'R', '1', '6', 'm', 'p', 0,
  /* 4693 */ 'B', 'I', 'S', '1', '6', 'm', 'p', 0,
  /* 4701 */ 'B', 'I', 'T', '1', '6', 'm', 'p', 0,
  /* 4709 */ 'S', 'U', 'B', '8', 'm', 'p', 0,
  /* 4716 */ 'S', 'U', 'B', 'C', '8', 'm', 'p', 0,
  /* 4724 */ 'A', 'D', 'D', 'C', '8', 'm', 'p', 0,
  /* 4732 */ 'B', 'I', 'C', '8', 'm', 'p', 0,
  /* 4739 */ 'D', 'A', 'D', 'D', '8', 'm', 'p', 0,
  /* 4747 */ 'A', 'N', 'D', '8', 'm', 'p', 0,
  /* 4754 */ 'C', 'M', 'P', '8', 'm', 'p', 0,
  /* 4761 */ 'X', 'O', 'R', '8', 'm', 'p', 0,
  /* 4768 */ 'B', 'I', 'S', '8', 'm', 'p', 0,
  /* 4775 */ 'B', 'I', 'T', '8', 'm', 'p', 0,
  /* 4782 */ 'S', 'U', 'B', '1', '6', 'r', 'p', 0,
  /* 4790 */ 'S', 'U', 'B', 'C', '1', '6', 'r', 'p', 0,
  /* 4799 */ 'A', 'D', 'D', 'C', '1', '6', 'r', 'p', 0,
  /* 4808 */ 'B', 'I', 'C', '1', '6', 'r', 'p', 0,
  /* 4816 */ 'D', 'A', 'D', 'D', '1', '6', 'r', 'p', 0,
  /* 4825 */ 'A', 'N', 'D', '1', '6', 'r', 'p', 0,
  /* 4833 */ 'C', 'M', 'P', '1', '6', 'r', 'p', 0,
  /* 4841 */ 'X', 'O', 'R', '1', '6', 'r', 'p', 0,
  /* 4849 */ 'B', 'I', 'S', '1', '6', 'r', 'p', 0,
  /* 4857 */ 'B', 'I', 'T', '1', '6', 'r', 'p', 0,
  /* 4865 */ 'M', 'O', 'V', '1', '6', 'r', 'p', 0,
  /* 4873 */ 'S', 'U', 'B', '8', 'r', 'p', 0,
  /* 4880 */ 'S', 'U', 'B', 'C', '8', 'r', 'p', 0,
  /* 4888 */ 'A', 'D', 'D', 'C', '8', 'r', 'p', 0,
  /* 4896 */ 'B', 'I', 'C', '8', 'r', 'p', 0,
  /* 4903 */ 'D', 'A', 'D', 'D', '8', 'r', 'p', 0,
  /* 4911 */ 'A', 'N', 'D', '8', 'r', 'p', 0,
  /* 4918 */ 'C', 'M', 'P', '8', 'r', 'p', 0,
  /* 4925 */ 'X', 'O', 'R', '8', 'r', 'p', 0,
  /* 4932 */ 'B', 'I', 'S', '8', 'r', 'p', 0,
  /* 4939 */ 'B', 'I', 'T', '8', 'r', 'p', 0,
  /* 4946 */ 'M', 'O', 'V', '8', 'r', 'p', 0,
  /* 4953 */ 'R', 'R', 'A', '1', '6', 'r', 0,
  /* 4960 */ 'S', 'W', 'P', 'B', '1', '6', 'r', 0,
  /* 4968 */ 'R', 'R', 'C', '1', '6', 'r', 0,
  /* 4975 */ 'P', 'U', 'S', 'H', '1', '6', 'r', 0,
  /* 4983 */ 'P', 'O', 'P', '1', '6', 'r', 0,
  /* 4990 */ 'S', 'E', 'X', 'T', '1', '6', 'r', 0,
  /* 4998 */ 'Z', 'E', 'X', 'T', '1', '6', 'r', 0,
  /* 5006 */ 'R', 'R', 'A', '8', 'r', 0,
  /* 5012 */ 'R', 'R', 'C', '8', 'r', 0,
  /* 5018 */ 'P', 'U', 'S', 'H', '8', 'r', 0,
  /* 5025 */ 'B', 'r', 0,
  /* 5028 */ 'C', 'A', 'L', 'L', 'r', 0,
  /* 5034 */ 'S', 'U', 'B', '1', '6', 'm', 'r', 0,
  /* 5042 */ 'S', 'U', 'B', 'C', '1', '6', 'm', 'r', 0,
  /* 5051 */ 'A', 'D', 'D', 'C', '1', '6', 'm', 'r', 0,
  /* 5060 */ 'B', 'I', 'C', '1', '6', 'm', 'r', 0,
  /* 5068 */ 'D', 'A', 'D', 'D', '1', '6', 'm', 'r', 0,
  /* 5077 */ 'A', 'N', 'D', '1', '6', 'm', 'r', 0,
  /* 5085 */ 'C', 'M', 'P', '1', '6', 'm', 'r', 0,
  /* 5093 */ 'X', 'O', 'R', '1', '6', 'm', 'r', 0,
  /* 5101 */ 'B', 'I', 'S', '1', '6', 'm', 'r', 0,
  /* 5109 */ 'B', 'I', 'T', '1', '6', 'm', 'r', 0,
  /* 5117 */ 'M', 'O', 'V', '1', '6', 'm', 'r', 0,
  /* 5125 */ 'S', 'U', 'B', '8', 'm', 'r', 0,
  /* 5132 */ 'S', 'U', 'B', 'C', '8', 'm', 'r', 0,
  /* 5140 */ 'A', 'D', 'D', 'C', '8', 'm', 'r', 0,
  /* 5148 */ 'B', 'I', 'C', '8', 'm', 'r', 0,
  /* 5155 */ 'D', 'A', 'D', 'D', '8', 'm', 'r', 0,
  /* 5163 */ 'A', 'N', 'D', '8', 'm', 'r', 0,
  /* 5170 */ 'C', 'M', 'P', '8', 'm', 'r', 0,
  /* 5177 */ 'X', 'O', 'R', '8', 'm', 'r', 0,
  /* 5184 */ 'B', 'I', 'S', '8', 'm', 'r', 0,
  /* 5191 */ 'B', 'I', 'T', '8', 'm', 'r', 0,
  /* 5198 */ 'M', 'O', 'V', '8', 'm', 'r', 0,
  /* 5205 */ 'S', 'U', 'B', '1', '6', 'r', 'r', 0,
  /* 5213 */ 'S', 'U', 'B', 'C', '1', '6', 'r', 'r', 0,
  /* 5222 */ 'A', 'D', 'D', 'C', '1', '6', 'r', 'r', 0,
  /* 5231 */ 'B', 'I', 'C', '1', '6', 'r', 'r', 0,
  /* 5239 */ 'D', 'A', 'D', 'D', '1', '6', 'r', 'r', 0,
  /* 5248 */ 'A', 'N', 'D', '1', '6', 'r', 'r', 0,
  /* 5256 */ 'C', 'M', 'P', '1', '6', 'r', 'r', 0,
  /* 5264 */ 'X', 'O', 'R', '1', '6', 'r', 'r', 0,
  /* 5272 */ 'B', 'I', 'S', '1', '6', 'r', 'r', 0,
  /* 5280 */ 'B', 'I', 'T', '1', '6', 'r', 'r', 0,
  /* 5288 */ 'M', 'O', 'V', '1', '6', 'r', 'r', 0,
  /* 5296 */ 'S', 'U', 'B', '8', 'r', 'r', 0,
  /* 5303 */ 'S', 'U', 'B', 'C', '8', 'r', 'r', 0,
  /* 5311 */ 'A', 'D', 'D', 'C', '8', 'r', 'r', 0,
  /* 5319 */ 'B', 'I', 'C', '8', 'r', 'r', 0,
  /* 5326 */ 'D', 'A', 'D', 'D', '8', 'r', 'r', 0,
  /* 5334 */ 'A', 'N', 'D', '8', 'r', 'r', 0,
  /* 5341 */ 'C', 'M', 'P', '8', 'r', 'r', 0,
  /* 5348 */ 'X', 'O', 'R', '8', 'r', 'r', 0,
  /* 5355 */ 'B', 'I', 'S', '8', 'r', 'r', 0,
  /* 5362 */ 'B', 'I', 'T', '8', 'r', 'r', 0,
  /* 5369 */ 'M', 'O', 'V', '8', 'r', 'r', 0,
  0
};

extern const unsigned MSP430InstrNameIndices[] = {
    1117U, 1476U, 1920U, 1699U, 1181U, 1162U, 1190U, 1328U, 
    975U, 990U, 941U, 1017U, 2245U, 843U, 2750U, 954U, 
    1113U, 1171U, 698U, 3058U, 770U, 2676U, 547U, 649U, 
    686U, 1788U, 1316U, 2605U, 632U, 1889U, 1080U, 2594U, 
    793U, 1862U, 1849U, 1946U, 2476U, 2499U, 1248U, 1295U, 
    1268U, 1207U, 2780U, 2810U, 1550U, 460U, 167U, 1415U, 
    2845U, 2852U, 1442U, 1449U, 1456U, 1466U, 525U, 2138U, 
    2101U, 939U, 1115U, 2981U, 853U, 2444U, 2189U, 2691U, 
    2206U, 2053U, 241U, 2228U, 2616U, 2165U, 2723U, 878U, 
    606U, 215U, 588U, 2635U, 1528U, 1971U, 361U, 305U, 
    335U, 346U, 286U, 316U, 822U, 806U, 2275U, 1031U, 
    1048U, 476U, 173U, 531U, 492U, 2143U, 2107U, 2965U, 
    1676U, 2948U, 1659U, 427U, 150U, 2883U, 1594U, 678U, 
    560U, 2463U, 193U, 2305U, 2794U, 233U, 2583U, 2571U, 
    2666U, 1072U, 2773U, 1004U, 2803U, 1234U, 2037U, 2023U, 
    1227U, 2030U, 2158U, 1333U, 1830U, 1823U, 2454U, 1756U, 
    719U, 1740U, 670U, 1748U, 711U, 1732U, 662U, 1772U, 
    1764U, 1105U, 1097U, 2362U, 2352U, 2342U, 2332U, 2382U, 
    2372U, 3009U, 3019U, 2392U, 2405U, 3029U, 3039U, 2418U, 
    2431U, 385U, 129U, 1357U, 110U, 279U, 2824U, 1421U, 
    2859U, 1144U, 1908U, 17U, 1065U, 9U, 0U, 968U, 
    2765U, 205U, 1121U, 1135U, 1805U, 1814U, 2176U, 1565U, 
    2262U, 887U, 1508U, 1518U, 727U, 742U, 1486U, 1497U, 
    466U, 1152U, 1628U, 2917U, 1652U, 2941U, 2183U, 579U, 
    569U, 1915U, 2523U, 2551U, 2530U, 2068U, 3070U, 921U, 
    3063U, 903U, 1841U, 1797U, 830U, 1240U, 2221U, 1692U, 
    2700U, 2044U, 2627U, 2653U, 2733U, 1933U, 757U, 262U, 
    413U, 136U, 1385U, 2831U, 1428U, 116U, 2708U, 1990U, 
    2006U, 3049U, 777U, 868U, 2490U, 1780U, 392U, 1364U, 
    368U, 1340U, 2866U, 1577U, 444U, 1399U, 509U, 2123U, 
    2085U, 2900U, 1611U, 2924U, 1635U, 2995U, 3002U, 3120U, 
    3488U, 3881U, 4271U, 4661U, 5069U, 3291U, 3659U, 4052U, 
    4442U, 4817U, 5240U, 3207U, 3575U, 3968U, 4358U, 4740U, 
    5156U, 3378U, 3746U, 4139U, 4529U, 4904U, 5327U, 3102U, 
    3470U, 3863U, 4253U, 4643U, 5051U, 3273U, 3641U, 4034U, 
    4424U, 4799U, 5222U, 3191U, 3559U, 3952U, 4342U, 4724U, 
    5140U, 3362U, 3730U, 4123U, 4513U, 4888U, 5311U, 3427U, 
    1715U, 1874U, 3128U, 3496U, 3889U, 4279U, 4669U, 5077U, 
    3299U, 3667U, 4060U, 4450U, 4825U, 5248U, 3214U, 3582U, 
    3975U, 4365U, 4747U, 5163U, 3385U, 3753U, 4146U, 4536U, 
    4911U, 5334U, 3111U, 3479U, 3872U, 4262U, 4652U, 5060U, 
    3282U, 3650U, 4043U, 4433U, 4808U, 5231U, 3199U, 3567U, 
    3960U, 4350U, 4732U, 5148U, 3370U, 3738U, 4131U, 4521U, 
    4896U, 5319U, 3152U, 3520U, 3913U, 4303U, 4693U, 5101U, 
    3323U, 3691U, 4084U, 4474U, 4849U, 5272U, 3235U, 3603U, 
    3996U, 4386U, 4768U, 5184U, 3406U, 3774U, 4167U, 4557U, 
    4932U, 5355U, 3160U, 3528U, 3921U, 4311U, 4701U, 5109U, 
    3331U, 3699U, 4092U, 4482U, 4857U, 5280U, 3242U, 3610U, 
    4003U, 4393U, 4775U, 5191U, 3413U, 3781U, 4174U, 4564U, 
    4939U, 5362U, 3444U, 3837U, 5025U, 3447U, 3840U, 4230U, 
    4620U, 5028U, 3136U, 3504U, 3897U, 4287U, 4677U, 5085U, 
    3307U, 3675U, 4068U, 4458U, 4833U, 5256U, 3221U, 3589U, 
    3982U, 4372U, 4754U, 5170U, 3392U, 3760U, 4153U, 4543U, 
    4918U, 5341U, 3119U, 3487U, 3880U, 4270U, 4660U, 5068U, 
    3290U, 3658U, 4051U, 4441U, 4816U, 5239U, 3206U, 3574U, 
    3967U, 4357U, 4739U, 5155U, 3377U, 3745U, 4138U, 4528U, 
    4903U, 5326U, 189U, 1837U, 3168U, 3536U, 3929U, 4319U, 
    5117U, 3339U, 3707U, 4100U, 4490U, 4865U, 5288U, 3249U, 
    3617U, 4010U, 4400U, 5198U, 3420U, 3788U, 4181U, 4571U, 
    4946U, 5369U, 80U, 91U, 4983U, 3077U, 3436U, 4975U, 
    5018U, 2486U, 1130U, 3795U, 4188U, 4578U, 4953U, 3825U, 
    4218U, 4608U, 5006U, 3810U, 4203U, 4593U, 4968U, 3831U, 
    4224U, 4614U, 5012U, 31U, 64U, 3817U, 4210U, 4600U, 
    4990U, 3085U, 3453U, 3846U, 4236U, 4626U, 5034U, 3256U, 
    3624U, 4017U, 4407U, 4782U, 5205U, 3176U, 3544U, 3937U, 
    4327U, 4709U, 5125U, 3347U, 3715U, 4108U, 4498U, 4873U, 
    5296U, 3093U, 3461U, 3854U, 4244U, 4634U, 5042U, 3264U, 
    3632U, 4025U, 4415U, 4790U, 5213U, 3183U, 3551U, 3944U, 
    4334U, 4716U, 5132U, 3354U, 3722U, 4115U, 4505U, 4880U, 
    5303U, 3802U, 4195U, 4585U, 4960U, 50U, 102U, 38U, 
    70U, 25U, 59U, 44U, 75U, 3144U, 3512U, 3905U, 
    4295U, 4685U, 5093U, 3315U, 3683U, 4076U, 4466U, 4841U, 
    5264U, 3228U, 3596U, 3989U, 4379U, 4761U, 5177U, 3399U, 
    3767U, 4160U, 4550U, 4925U, 5348U, 4998U, 
};

static inline void InitMSP430MCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MSP430Insts, MSP430InstrNameIndices, MSP430InstrNameData, nullptr, nullptr, 590);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MSP430GenInstrInfo : public TargetInstrInfo {
  explicit MSP430GenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~MSP430GenInstrInfo() override = default;

};
} // end namespace llvm
#endif // GET_INSTRINFO_HEADER

#ifdef GET_INSTRINFO_HELPER_DECLS
#undef GET_INSTRINFO_HELPER_DECLS


#endif // GET_INSTRINFO_HELPER_DECLS

#ifdef GET_INSTRINFO_HELPERS
#undef GET_INSTRINFO_HELPERS

#endif // GET_INSTRINFO_HELPERS

#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc MSP430Insts[];
extern const unsigned MSP430InstrNameIndices[];
extern const char MSP430InstrNameData[];
MSP430GenInstrInfo::MSP430GenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(MSP430Insts, MSP430InstrNameIndices, MSP430InstrNameData, nullptr, nullptr, 590);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace MSP430 {
namespace OpName {
enum {
  OPERAND_LAST
};
} // end namespace OpName
} // end namespace MSP430
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace MSP430 {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace MSP430
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace MSP430 {
namespace OpTypes {
enum OperandType {
  cc = 0,
  cg16imm = 1,
  cg8imm = 2,
  f32imm = 3,
  f64imm = 4,
  i16imm = 5,
  i1imm = 6,
  i32imm = 7,
  i64imm = 8,
  i8imm = 9,
  indreg = 10,
  jmptarget = 11,
  memdst = 12,
  memsrc = 13,
  postreg = 14,
  ptype0 = 15,
  ptype1 = 16,
  ptype2 = 17,
  ptype3 = 18,
  ptype4 = 19,
  ptype5 = 20,
  type0 = 21,
  type1 = 22,
  type2 = 23,
  type3 = 24,
  type4 = 25,
  type5 = 26,
  untyped_imm_0 = 27,
  GR16 = 28,
  GR8 = 29,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace MSP430 {
LLVM_READONLY
static int getOperandType(uint16_t Opcode, uint16_t OpIdx) {
  const uint16_t Offsets[] = {
    /* PHI */
    0,
    /* INLINEASM */
    1,
    /* INLINEASM_BR */
    1,
    /* CFI_INSTRUCTION */
    1,
    /* EH_LABEL */
    2,
    /* GC_LABEL */
    3,
    /* ANNOTATION_LABEL */
    4,
    /* KILL */
    5,
    /* EXTRACT_SUBREG */
    5,
    /* INSERT_SUBREG */
    8,
    /* IMPLICIT_DEF */
    12,
    /* SUBREG_TO_REG */
    13,
    /* COPY_TO_REGCLASS */
    17,
    /* DBG_VALUE */
    20,
    /* DBG_VALUE_LIST */
    20,
    /* DBG_INSTR_REF */
    20,
    /* DBG_PHI */
    20,
    /* DBG_LABEL */
    20,
    /* REG_SEQUENCE */
    21,
    /* COPY */
    23,
    /* BUNDLE */
    25,
    /* LIFETIME_START */
    25,
    /* LIFETIME_END */
    26,
    /* PSEUDO_PROBE */
    27,
    /* ARITH_FENCE */
    31,
    /* STACKMAP */
    33,
    /* FENTRY_CALL */
    35,
    /* PATCHPOINT */
    35,
    /* LOAD_STACK_GUARD */
    41,
    /* PREALLOCATED_SETUP */
    42,
    /* PREALLOCATED_ARG */
    43,
    /* STATEPOINT */
    46,
    /* LOCAL_ESCAPE */
    46,
    /* FAULTING_OP */
    48,
    /* PATCHABLE_OP */
    49,
    /* PATCHABLE_FUNCTION_ENTER */
    49,
    /* PATCHABLE_RET */
    49,
    /* PATCHABLE_FUNCTION_EXIT */
    49,
    /* PATCHABLE_TAIL_CALL */
    49,
    /* PATCHABLE_EVENT_CALL */
    49,
    /* PATCHABLE_TYPED_EVENT_CALL */
    51,
    /* ICALL_BRANCH_FUNNEL */
    54,
    /* G_ASSERT_SEXT */
    54,
    /* G_ASSERT_ZEXT */
    57,
    /* G_ASSERT_ALIGN */
    60,
    /* G_ADD */
    63,
    /* G_SUB */
    66,
    /* G_MUL */
    69,
    /* G_SDIV */
    72,
    /* G_UDIV */
    75,
    /* G_SREM */
    78,
    /* G_UREM */
    81,
    /* G_SDIVREM */
    84,
    /* G_UDIVREM */
    88,
    /* G_AND */
    92,
    /* G_OR */
    95,
    /* G_XOR */
    98,
    /* G_IMPLICIT_DEF */
    101,
    /* G_PHI */
    102,
    /* G_FRAME_INDEX */
    103,
    /* G_GLOBAL_VALUE */
    105,
    /* G_EXTRACT */
    107,
    /* G_UNMERGE_VALUES */
    110,
    /* G_INSERT */
    112,
    /* G_MERGE_VALUES */
    116,
    /* G_BUILD_VECTOR */
    118,
    /* G_BUILD_VECTOR_TRUNC */
    120,
    /* G_CONCAT_VECTORS */
    122,
    /* G_PTRTOINT */
    124,
    /* G_INTTOPTR */
    126,
    /* G_BITCAST */
    128,
    /* G_FREEZE */
    130,
    /* G_INTRINSIC_FPTRUNC_ROUND */
    132,
    /* G_INTRINSIC_TRUNC */
    135,
    /* G_INTRINSIC_ROUND */
    137,
    /* G_INTRINSIC_LRINT */
    139,
    /* G_INTRINSIC_ROUNDEVEN */
    141,
    /* G_READCYCLECOUNTER */
    143,
    /* G_LOAD */
    144,
    /* G_SEXTLOAD */
    146,
    /* G_ZEXTLOAD */
    148,
    /* G_INDEXED_LOAD */
    150,
    /* G_INDEXED_SEXTLOAD */
    155,
    /* G_INDEXED_ZEXTLOAD */
    160,
    /* G_STORE */
    165,
    /* G_INDEXED_STORE */
    167,
    /* G_ATOMIC_CMPXCHG_WITH_SUCCESS */
    172,
    /* G_ATOMIC_CMPXCHG */
    177,
    /* G_ATOMICRMW_XCHG */
    181,
    /* G_ATOMICRMW_ADD */
    184,
    /* G_ATOMICRMW_SUB */
    187,
    /* G_ATOMICRMW_AND */
    190,
    /* G_ATOMICRMW_NAND */
    193,
    /* G_ATOMICRMW_OR */
    196,
    /* G_ATOMICRMW_XOR */
    199,
    /* G_ATOMICRMW_MAX */
    202,
    /* G_ATOMICRMW_MIN */
    205,
    /* G_ATOMICRMW_UMAX */
    208,
    /* G_ATOMICRMW_UMIN */
    211,
    /* G_ATOMICRMW_FADD */
    214,
    /* G_ATOMICRMW_FSUB */
    217,
    /* G_ATOMICRMW_FMAX */
    220,
    /* G_ATOMICRMW_FMIN */
    223,
    /* G_FENCE */
    226,
    /* G_BRCOND */
    228,
    /* G_BRINDIRECT */
    230,
    /* G_INTRINSIC */
    231,
    /* G_INTRINSIC_W_SIDE_EFFECTS */
    232,
    /* G_ANYEXT */
    233,
    /* G_TRUNC */
    235,
    /* G_CONSTANT */
    237,
    /* G_FCONSTANT */
    239,
    /* G_VASTART */
    241,
    /* G_VAARG */
    242,
    /* G_SEXT */
    245,
    /* G_SEXT_INREG */
    247,
    /* G_ZEXT */
    250,
    /* G_SHL */
    252,
    /* G_LSHR */
    255,
    /* G_ASHR */
    258,
    /* G_FSHL */
    261,
    /* G_FSHR */
    265,
    /* G_ROTR */
    269,
    /* G_ROTL */
    272,
    /* G_ICMP */
    275,
    /* G_FCMP */
    279,
    /* G_SELECT */
    283,
    /* G_UADDO */
    287,
    /* G_UADDE */
    291,
    /* G_USUBO */
    296,
    /* G_USUBE */
    300,
    /* G_SADDO */
    305,
    /* G_SADDE */
    309,
    /* G_SSUBO */
    314,
    /* G_SSUBE */
    318,
    /* G_UMULO */
    323,
    /* G_SMULO */
    327,
    /* G_UMULH */
    331,
    /* G_SMULH */
    334,
    /* G_UADDSAT */
    337,
    /* G_SADDSAT */
    340,
    /* G_USUBSAT */
    343,
    /* G_SSUBSAT */
    346,
    /* G_USHLSAT */
    349,
    /* G_SSHLSAT */
    352,
    /* G_SMULFIX */
    355,
    /* G_UMULFIX */
    359,
    /* G_SMULFIXSAT */
    363,
    /* G_UMULFIXSAT */
    367,
    /* G_SDIVFIX */
    371,
    /* G_UDIVFIX */
    375,
    /* G_SDIVFIXSAT */
    379,
    /* G_UDIVFIXSAT */
    383,
    /* G_FADD */
    387,
    /* G_FSUB */
    390,
    /* G_FMUL */
    393,
    /* G_FMA */
    396,
    /* G_FMAD */
    400,
    /* G_FDIV */
    404,
    /* G_FREM */
    407,
    /* G_FPOW */
    410,
    /* G_FPOWI */
    413,
    /* G_FEXP */
    416,
    /* G_FEXP2 */
    418,
    /* G_FLOG */
    420,
    /* G_FLOG2 */
    422,
    /* G_FLOG10 */
    424,
    /* G_FNEG */
    426,
    /* G_FPEXT */
    428,
    /* G_FPTRUNC */
    430,
    /* G_FPTOSI */
    432,
    /* G_FPTOUI */
    434,
    /* G_SITOFP */
    436,
    /* G_UITOFP */
    438,
    /* G_FABS */
    440,
    /* G_FCOPYSIGN */
    442,
    /* G_IS_FPCLASS */
    445,
    /* G_FCANONICALIZE */
    449,
    /* G_FMINNUM */
    451,
    /* G_FMAXNUM */
    454,
    /* G_FMINNUM_IEEE */
    457,
    /* G_FMAXNUM_IEEE */
    460,
    /* G_FMINIMUM */
    463,
    /* G_FMAXIMUM */
    466,
    /* G_PTR_ADD */
    469,
    /* G_PTRMASK */
    472,
    /* G_SMIN */
    475,
    /* G_SMAX */
    478,
    /* G_UMIN */
    481,
    /* G_UMAX */
    484,
    /* G_ABS */
    487,
    /* G_LROUND */
    489,
    /* G_LLROUND */
    491,
    /* G_BR */
    493,
    /* G_BRJT */
    494,
    /* G_INSERT_VECTOR_ELT */
    497,
    /* G_EXTRACT_VECTOR_ELT */
    501,
    /* G_SHUFFLE_VECTOR */
    504,
    /* G_CTTZ */
    508,
    /* G_CTTZ_ZERO_UNDEF */
    510,
    /* G_CTLZ */
    512,
    /* G_CTLZ_ZERO_UNDEF */
    514,
    /* G_CTPOP */
    516,
    /* G_BSWAP */
    518,
    /* G_BITREVERSE */
    520,
    /* G_FCEIL */
    522,
    /* G_FCOS */
    524,
    /* G_FSIN */
    526,
    /* G_FSQRT */
    528,
    /* G_FFLOOR */
    530,
    /* G_FRINT */
    532,
    /* G_FNEARBYINT */
    534,
    /* G_ADDRSPACE_CAST */
    536,
    /* G_BLOCK_ADDR */
    538,
    /* G_JUMP_TABLE */
    540,
    /* G_DYN_STACKALLOC */
    542,
    /* G_STRICT_FADD */
    545,
    /* G_STRICT_FSUB */
    548,
    /* G_STRICT_FMUL */
    551,
    /* G_STRICT_FDIV */
    554,
    /* G_STRICT_FREM */
    557,
    /* G_STRICT_FMA */
    560,
    /* G_STRICT_FSQRT */
    564,
    /* G_READ_REGISTER */
    566,
    /* G_WRITE_REGISTER */
    568,
    /* G_MEMCPY */
    570,
    /* G_MEMCPY_INLINE */
    574,
    /* G_MEMMOVE */
    577,
    /* G_MEMSET */
    581,
    /* G_BZERO */
    585,
    /* G_VECREDUCE_SEQ_FADD */
    588,
    /* G_VECREDUCE_SEQ_FMUL */
    591,
    /* G_VECREDUCE_FADD */
    594,
    /* G_VECREDUCE_FMUL */
    596,
    /* G_VECREDUCE_FMAX */
    598,
    /* G_VECREDUCE_FMIN */
    600,
    /* G_VECREDUCE_ADD */
    602,
    /* G_VECREDUCE_MUL */
    604,
    /* G_VECREDUCE_AND */
    606,
    /* G_VECREDUCE_OR */
    608,
    /* G_VECREDUCE_XOR */
    610,
    /* G_VECREDUCE_SMAX */
    612,
    /* G_VECREDUCE_SMIN */
    614,
    /* G_VECREDUCE_UMAX */
    616,
    /* G_VECREDUCE_UMIN */
    618,
    /* G_SBFX */
    620,
    /* G_UBFX */
    624,
    /* ADD16mc */
    628,
    /* ADD16mi */
    631,
    /* ADD16mm */
    634,
    /* ADD16mn */
    638,
    /* ADD16mp */
    641,
    /* ADD16mr */
    644,
    /* ADD16rc */
    647,
    /* ADD16ri */
    650,
    /* ADD16rm */
    653,
    /* ADD16rn */
    657,
    /* ADD16rp */
    660,
    /* ADD16rr */
    664,
    /* ADD8mc */
    667,
    /* ADD8mi */
    670,
    /* ADD8mm */
    673,
    /* ADD8mn */
    677,
    /* ADD8mp */
    680,
    /* ADD8mr */
    683,
    /* ADD8rc */
    686,
    /* ADD8ri */
    689,
    /* ADD8rm */
    692,
    /* ADD8rn */
    696,
    /* ADD8rp */
    699,
    /* ADD8rr */
    703,
    /* ADDC16mc */
    706,
    /* ADDC16mi */
    709,
    /* ADDC16mm */
    712,
    /* ADDC16mn */
    716,
    /* ADDC16mp */
    719,
    /* ADDC16mr */
    722,
    /* ADDC16rc */
    725,
    /* ADDC16ri */
    728,
    /* ADDC16rm */
    731,
    /* ADDC16rn */
    735,
    /* ADDC16rp */
    738,
    /* ADDC16rr */
    742,
    /* ADDC8mc */
    745,
    /* ADDC8mi */
    748,
    /* ADDC8mm */
    751,
    /* ADDC8mn */
    755,
    /* ADDC8mp */
    758,
    /* ADDC8mr */
    761,
    /* ADDC8rc */
    764,
    /* ADDC8ri */
    767,
    /* ADDC8rm */
    770,
    /* ADDC8rn */
    774,
    /* ADDC8rp */
    777,
    /* ADDC8rr */
    781,
    /* ADDframe */
    784,
    /* ADJCALLSTACKDOWN */
    787,
    /* ADJCALLSTACKUP */
    789,
    /* AND16mc */
    791,
    /* AND16mi */
    794,
    /* AND16mm */
    797,
    /* AND16mn */
    801,
    /* AND16mp */
    804,
    /* AND16mr */
    807,
    /* AND16rc */
    810,
    /* AND16ri */
    813,
    /* AND16rm */
    816,
    /* AND16rn */
    820,
    /* AND16rp */
    823,
    /* AND16rr */
    827,
    /* AND8mc */
    830,
    /* AND8mi */
    833,
    /* AND8mm */
    836,
    /* AND8mn */
    840,
    /* AND8mp */
    843,
    /* AND8mr */
    846,
    /* AND8rc */
    849,
    /* AND8ri */
    852,
    /* AND8rm */
    855,
    /* AND8rn */
    859,
    /* AND8rp */
    862,
    /* AND8rr */
    866,
    /* BIC16mc */
    869,
    /* BIC16mi */
    872,
    /* BIC16mm */
    875,
    /* BIC16mn */
    879,
    /* BIC16mp */
    882,
    /* BIC16mr */
    885,
    /* BIC16rc */
    888,
    /* BIC16ri */
    891,
    /* BIC16rm */
    894,
    /* BIC16rn */
    898,
    /* BIC16rp */
    901,
    /* BIC16rr */
    905,
    /* BIC8mc */
    908,
    /* BIC8mi */
    911,
    /* BIC8mm */
    914,
    /* BIC8mn */
    918,
    /* BIC8mp */
    921,
    /* BIC8mr */
    924,
    /* BIC8rc */
    927,
    /* BIC8ri */
    930,
    /* BIC8rm */
    933,
    /* BIC8rn */
    937,
    /* BIC8rp */
    940,
    /* BIC8rr */
    944,
    /* BIS16mc */
    947,
    /* BIS16mi */
    950,
    /* BIS16mm */
    953,
    /* BIS16mn */
    957,
    /* BIS16mp */
    960,
    /* BIS16mr */
    963,
    /* BIS16rc */
    966,
    /* BIS16ri */
    969,
    /* BIS16rm */
    972,
    /* BIS16rn */
    976,
    /* BIS16rp */
    979,
    /* BIS16rr */
    983,
    /* BIS8mc */
    986,
    /* BIS8mi */
    989,
    /* BIS8mm */
    992,
    /* BIS8mn */
    996,
    /* BIS8mp */
    999,
    /* BIS8mr */
    1002,
    /* BIS8rc */
    1005,
    /* BIS8ri */
    1008,
    /* BIS8rm */
    1011,
    /* BIS8rn */
    1015,
    /* BIS8rp */
    1018,
    /* BIS8rr */
    1022,
    /* BIT16mc */
    1025,
    /* BIT16mi */
    1028,
    /* BIT16mm */
    1031,
    /* BIT16mn */
    1035,
    /* BIT16mp */
    1038,
    /* BIT16mr */
    1041,
    /* BIT16rc */
    1044,
    /* BIT16ri */
    1046,
    /* BIT16rm */
    1048,
    /* BIT16rn */
    1051,
    /* BIT16rp */
    1053,
    /* BIT16rr */
    1055,
    /* BIT8mc */
    1057,
    /* BIT8mi */
    1060,
    /* BIT8mm */
    1063,
    /* BIT8mn */
    1067,
    /* BIT8mp */
    1070,
    /* BIT8mr */
    1073,
    /* BIT8rc */
    1076,
    /* BIT8ri */
    1078,
    /* BIT8rm */
    1080,
    /* BIT8rn */
    1083,
    /* BIT8rp */
    1085,
    /* BIT8rr */
    1087,
    /* Bi */
    1089,
    /* Bm */
    1090,
    /* Br */
    1092,
    /* CALLi */
    1093,
    /* CALLm */
    1094,
    /* CALLn */
    1096,
    /* CALLp */
    1097,
    /* CALLr */
    1098,
    /* CMP16mc */
    1099,
    /* CMP16mi */
    1102,
    /* CMP16mm */
    1105,
    /* CMP16mn */
    1109,
    /* CMP16mp */
    1112,
    /* CMP16mr */
    1115,
    /* CMP16rc */
    1118,
    /* CMP16ri */
    1120,
    /* CMP16rm */
    1122,
    /* CMP16rn */
    1125,
    /* CMP16rp */
    1127,
    /* CMP16rr */
    1129,
    /* CMP8mc */
    1131,
    /* CMP8mi */
    1134,
    /* CMP8mm */
    1137,
    /* CMP8mn */
    1141,
    /* CMP8mp */
    1144,
    /* CMP8mr */
    1147,
    /* CMP8rc */
    1150,
    /* CMP8ri */
    1152,
    /* CMP8rm */
    1154,
    /* CMP8rn */
    1157,
    /* CMP8rp */
    1159,
    /* CMP8rr */
    1161,
    /* DADD16mc */
    1163,
    /* DADD16mi */
    1166,
    /* DADD16mm */
    1169,
    /* DADD16mn */
    1173,
    /* DADD16mp */
    1176,
    /* DADD16mr */
    1179,
    /* DADD16rc */
    1182,
    /* DADD16ri */
    1185,
    /* DADD16rm */
    1188,
    /* DADD16rn */
    1192,
    /* DADD16rp */
    1195,
    /* DADD16rr */
    1199,
    /* DADD8mc */
    1202,
    /* DADD8mi */
    1205,
    /* DADD8mm */
    1208,
    /* DADD8mn */
    1212,
    /* DADD8mp */
    1215,
    /* DADD8mr */
    1218,
    /* DADD8rc */
    1221,
    /* DADD8ri */
    1224,
    /* DADD8rm */
    1227,
    /* DADD8rn */
    1231,
    /* DADD8rp */
    1234,
    /* DADD8rr */
    1238,
    /* JCC */
    1241,
    /* JMP */
    1243,
    /* MOV16mc */
    1244,
    /* MOV16mi */
    1247,
    /* MOV16mm */
    1250,
    /* MOV16mn */
    1254,
    /* MOV16mr */
    1257,
    /* MOV16rc */
    1260,
    /* MOV16ri */
    1262,
    /* MOV16rm */
    1264,
    /* MOV16rn */
    1267,
    /* MOV16rp */
    1269,
    /* MOV16rr */
    1272,
    /* MOV8mc */
    1274,
    /* MOV8mi */
    1277,
    /* MOV8mm */
    1280,
    /* MOV8mn */
    1284,
    /* MOV8mr */
    1287,
    /* MOV8rc */
    1290,
    /* MOV8ri */
    1292,
    /* MOV8rm */
    1294,
    /* MOV8rn */
    1297,
    /* MOV8rp */
    1299,
    /* MOV8rr */
    1302,
    /* MOVZX16rm8 */
    1304,
    /* MOVZX16rr8 */
    1307,
    /* POP16r */
    1309,
    /* PUSH16c */
    1310,
    /* PUSH16i */
    1311,
    /* PUSH16r */
    1312,
    /* PUSH8r */
    1313,
    /* RET */
    1314,
    /* RETI */
    1314,
    /* RRA16m */
    1314,
    /* RRA16n */
    1316,
    /* RRA16p */
    1317,
    /* RRA16r */
    1318,
    /* RRA8m */
    1320,
    /* RRA8n */
    1322,
    /* RRA8p */
    1323,
    /* RRA8r */
    1324,
    /* RRC16m */
    1326,
    /* RRC16n */
    1328,
    /* RRC16p */
    1329,
    /* RRC16r */
    1330,
    /* RRC8m */
    1332,
    /* RRC8n */
    1334,
    /* RRC8p */
    1335,
    /* RRC8r */
    1336,
    /* Rrcl16 */
    1338,
    /* Rrcl8 */
    1340,
    /* SEXT16m */
    1342,
    /* SEXT16n */
    1344,
    /* SEXT16p */
    1345,
    /* SEXT16r */
    1346,
    /* SUB16mc */
    1348,
    /* SUB16mi */
    1351,
    /* SUB16mm */
    1354,
    /* SUB16mn */
    1358,
    /* SUB16mp */
    1361,
    /* SUB16mr */
    1364,
    /* SUB16rc */
    1367,
    /* SUB16ri */
    1370,
    /* SUB16rm */
    1373,
    /* SUB16rn */
    1377,
    /* SUB16rp */
    1380,
    /* SUB16rr */
    1384,
    /* SUB8mc */
    1387,
    /* SUB8mi */
    1390,
    /* SUB8mm */
    1393,
    /* SUB8mn */
    1397,
    /* SUB8mp */
    1400,
    /* SUB8mr */
    1403,
    /* SUB8rc */
    1406,
    /* SUB8ri */
    1409,
    /* SUB8rm */
    1412,
    /* SUB8rn */
    1416,
    /* SUB8rp */
    1419,
    /* SUB8rr */
    1423,
    /* SUBC16mc */
    1426,
    /* SUBC16mi */
    1429,
    /* SUBC16mm */
    1432,
    /* SUBC16mn */
    1436,
    /* SUBC16mp */
    1439,
    /* SUBC16mr */
    1442,
    /* SUBC16rc */
    1445,
    /* SUBC16ri */
    1448,
    /* SUBC16rm */
    1451,
    /* SUBC16rn */
    1455,
    /* SUBC16rp */
    1458,
    /* SUBC16rr */
    1462,
    /* SUBC8mc */
    1465,
    /* SUBC8mi */
    1468,
    /* SUBC8mm */
    1471,
    /* SUBC8mn */
    1475,
    /* SUBC8mp */
    1478,
    /* SUBC8mr */
    1481,
    /* SUBC8rc */
    1484,
    /* SUBC8ri */
    1487,
    /* SUBC8rm */
    1490,
    /* SUBC8rn */
    1494,
    /* SUBC8rp */
    1497,
    /* SUBC8rr */
    1501,
    /* SWPB16m */
    1504,
    /* SWPB16n */
    1506,
    /* SWPB16p */
    1507,
    /* SWPB16r */
    1508,
    /* Select16 */
    1510,
    /* Select8 */
    1514,
    /* Shl16 */
    1518,
    /* Shl8 */
    1521,
    /* Sra16 */
    1524,
    /* Sra8 */
    1527,
    /* Srl16 */
    1530,
    /* Srl8 */
    1533,
    /* XOR16mc */
    1536,
    /* XOR16mi */
    1539,
    /* XOR16mm */
    1542,
    /* XOR16mn */
    1546,
    /* XOR16mp */
    1549,
    /* XOR16mr */
    1552,
    /* XOR16rc */
    1555,
    /* XOR16ri */
    1558,
    /* XOR16rm */
    1561,
    /* XOR16rn */
    1565,
    /* XOR16rp */
    1568,
    /* XOR16rr */
    1572,
    /* XOR8mc */
    1575,
    /* XOR8mi */
    1578,
    /* XOR8mm */
    1581,
    /* XOR8mn */
    1585,
    /* XOR8mp */
    1588,
    /* XOR8mr */
    1591,
    /* XOR8rc */
    1594,
    /* XOR8ri */
    1597,
    /* XOR8rm */
    1600,
    /* XOR8rn */
    1604,
    /* XOR8rp */
    1607,
    /* XOR8rr */
    1611,
    /* ZEXT16r */
    1614,
  };

  using namespace OpTypes;
  const int8_t OpcodeOperandTypes[] = {
    
    /* PHI */
    -1, 
    /* INLINEASM */
    /* INLINEASM_BR */
    /* CFI_INSTRUCTION */
    i32imm, 
    /* EH_LABEL */
    i32imm, 
    /* GC_LABEL */
    i32imm, 
    /* ANNOTATION_LABEL */
    i32imm, 
    /* KILL */
    /* EXTRACT_SUBREG */
    -1, -1, i32imm, 
    /* INSERT_SUBREG */
    -1, -1, -1, i32imm, 
    /* IMPLICIT_DEF */
    -1, 
    /* SUBREG_TO_REG */
    -1, -1, -1, i32imm, 
    /* COPY_TO_REGCLASS */
    -1, -1, i32imm, 
    /* DBG_VALUE */
    /* DBG_VALUE_LIST */
    /* DBG_INSTR_REF */
    /* DBG_PHI */
    /* DBG_LABEL */
    -1, 
    /* REG_SEQUENCE */
    -1, -1, 
    /* COPY */
    -1, -1, 
    /* BUNDLE */
    /* LIFETIME_START */
    i32imm, 
    /* LIFETIME_END */
    i32imm, 
    /* PSEUDO_PROBE */
    i64imm, i64imm, i8imm, i32imm, 
    /* ARITH_FENCE */
    -1, -1, 
    /* STACKMAP */
    i64imm, i32imm, 
    /* FENTRY_CALL */
    /* PATCHPOINT */
    -1, i64imm, i32imm, -1, i32imm, i32imm, 
    /* LOAD_STACK_GUARD */
    -1, 
    /* PREALLOCATED_SETUP */
    i32imm, 
    /* PREALLOCATED_ARG */
    -1, i32imm, i32imm, 
    /* STATEPOINT */
    /* LOCAL_ESCAPE */
    -1, i32imm, 
    /* FAULTING_OP */
    -1, 
    /* PATCHABLE_OP */
    /* PATCHABLE_FUNCTION_ENTER */
    /* PATCHABLE_RET */
    /* PATCHABLE_FUNCTION_EXIT */
    /* PATCHABLE_TAIL_CALL */
    /* PATCHABLE_EVENT_CALL */
    -1, -1, 
    /* PATCHABLE_TYPED_EVENT_CALL */
    -1, -1, -1, 
    /* ICALL_BRANCH_FUNNEL */
    /* G_ASSERT_SEXT */
    type0, type0, untyped_imm_0, 
    /* G_ASSERT_ZEXT */
    type0, type0, untyped_imm_0, 
    /* G_ASSERT_ALIGN */
    type0, type0, untyped_imm_0, 
    /* G_ADD */
    type0, type0, type0, 
    /* G_SUB */
    type0, type0, type0, 
    /* G_MUL */
    type0, type0, type0, 
    /* G_SDIV */
    type0, type0, type0, 
    /* G_UDIV */
    type0, type0, type0, 
    /* G_SREM */
    type0, type0, type0, 
    /* G_UREM */
    type0, type0, type0, 
    /* G_SDIVREM */
    type0, type0, type0, type0, 
    /* G_UDIVREM */
    type0, type0, type0, type0, 
    /* G_AND */
    type0, type0, type0, 
    /* G_OR */
    type0, type0, type0, 
    /* G_XOR */
    type0, type0, type0, 
    /* G_IMPLICIT_DEF */
    type0, 
    /* G_PHI */
    type0, 
    /* G_FRAME_INDEX */
    type0, -1, 
    /* G_GLOBAL_VALUE */
    type0, -1, 
    /* G_EXTRACT */
    type0, type1, untyped_imm_0, 
    /* G_UNMERGE_VALUES */
    type0, type1, 
    /* G_INSERT */
    type0, type0, type1, untyped_imm_0, 
    /* G_MERGE_VALUES */
    type0, type1, 
    /* G_BUILD_VECTOR */
    type0, type1, 
    /* G_BUILD_VECTOR_TRUNC */
    type0, type1, 
    /* G_CONCAT_VECTORS */
    type0, type1, 
    /* G_PTRTOINT */
    type0, type1, 
    /* G_INTTOPTR */
    type0, type1, 
    /* G_BITCAST */
    type0, type1, 
    /* G_FREEZE */
    type0, type0, 
    /* G_INTRINSIC_FPTRUNC_ROUND */
    type0, type1, i32imm, 
    /* G_INTRINSIC_TRUNC */
    type0, type0, 
    /* G_INTRINSIC_ROUND */
    type0, type0, 
    /* G_INTRINSIC_LRINT */
    type0, type1, 
    /* G_INTRINSIC_ROUNDEVEN */
    type0, type0, 
    /* G_READCYCLECOUNTER */
    type0, 
    /* G_LOAD */
    type0, ptype1, 
    /* G_SEXTLOAD */
    type0, ptype1, 
    /* G_ZEXTLOAD */
    type0, ptype1, 
    /* G_INDEXED_LOAD */
    type0, ptype1, ptype1, type2, -1, 
    /* G_INDEXED_SEXTLOAD */
    type0, ptype1, ptype1, type2, -1, 
    /* G_INDEXED_ZEXTLOAD */
    type0, ptype1, ptype1, type2, -1, 
    /* G_STORE */
    type0, ptype1, 
    /* G_INDEXED_STORE */
    ptype0, type1, ptype0, ptype2, -1, 
    /* G_ATOMIC_CMPXCHG_WITH_SUCCESS */
    type0, type1, type2, type0, type0, 
    /* G_ATOMIC_CMPXCHG */
    type0, ptype1, type0, type0, 
    /* G_ATOMICRMW_XCHG */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_ADD */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_SUB */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_AND */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_NAND */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_OR */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_XOR */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_MAX */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_MIN */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_UMAX */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_UMIN */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_FADD */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_FSUB */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_FMAX */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_FMIN */
    type0, ptype1, type0, 
    /* G_FENCE */
    i32imm, i32imm, 
    /* G_BRCOND */
    type0, -1, 
    /* G_BRINDIRECT */
    type0, 
    /* G_INTRINSIC */
    -1, 
    /* G_INTRINSIC_W_SIDE_EFFECTS */
    -1, 
    /* G_ANYEXT */
    type0, type1, 
    /* G_TRUNC */
    type0, type1, 
    /* G_CONSTANT */
    type0, -1, 
    /* G_FCONSTANT */
    type0, -1, 
    /* G_VASTART */
    type0, 
    /* G_VAARG */
    type0, type1, -1, 
    /* G_SEXT */
    type0, type1, 
    /* G_SEXT_INREG */
    type0, type0, untyped_imm_0, 
    /* G_ZEXT */
    type0, type1, 
    /* G_SHL */
    type0, type0, type1, 
    /* G_LSHR */
    type0, type0, type1, 
    /* G_ASHR */
    type0, type0, type1, 
    /* G_FSHL */
    type0, type0, type0, type1, 
    /* G_FSHR */
    type0, type0, type0, type1, 
    /* G_ROTR */
    type0, type0, type1, 
    /* G_ROTL */
    type0, type0, type1, 
    /* G_ICMP */
    type0, -1, type1, type1, 
    /* G_FCMP */
    type0, -1, type1, type1, 
    /* G_SELECT */
    type0, type1, type0, type0, 
    /* G_UADDO */
    type0, type1, type0, type0, 
    /* G_UADDE */
    type0, type1, type0, type0, type1, 
    /* G_USUBO */
    type0, type1, type0, type0, 
    /* G_USUBE */
    type0, type1, type0, type0, type1, 
    /* G_SADDO */
    type0, type1, type0, type0, 
    /* G_SADDE */
    type0, type1, type0, type0, type1, 
    /* G_SSUBO */
    type0, type1, type0, type0, 
    /* G_SSUBE */
    type0, type1, type0, type0, type1, 
    /* G_UMULO */
    type0, type1, type0, type0, 
    /* G_SMULO */
    type0, type1, type0, type0, 
    /* G_UMULH */
    type0, type0, type0, 
    /* G_SMULH */
    type0, type0, type0, 
    /* G_UADDSAT */
    type0, type0, type0, 
    /* G_SADDSAT */
    type0, type0, type0, 
    /* G_USUBSAT */
    type0, type0, type0, 
    /* G_SSUBSAT */
    type0, type0, type0, 
    /* G_USHLSAT */
    type0, type0, type1, 
    /* G_SSHLSAT */
    type0, type0, type1, 
    /* G_SMULFIX */
    type0, type0, type0, untyped_imm_0, 
    /* G_UMULFIX */
    type0, type0, type0, untyped_imm_0, 
    /* G_SMULFIXSAT */
    type0, type0, type0, untyped_imm_0, 
    /* G_UMULFIXSAT */
    type0, type0, type0, untyped_imm_0, 
    /* G_SDIVFIX */
    type0, type0, type0, untyped_imm_0, 
    /* G_UDIVFIX */
    type0, type0, type0, untyped_imm_0, 
    /* G_SDIVFIXSAT */
    type0, type0, type0, untyped_imm_0, 
    /* G_UDIVFIXSAT */
    type0, type0, type0, untyped_imm_0, 
    /* G_FADD */
    type0, type0, type0, 
    /* G_FSUB */
    type0, type0, type0, 
    /* G_FMUL */
    type0, type0, type0, 
    /* G_FMA */
    type0, type0, type0, type0, 
    /* G_FMAD */
    type0, type0, type0, type0, 
    /* G_FDIV */
    type0, type0, type0, 
    /* G_FREM */
    type0, type0, type0, 
    /* G_FPOW */
    type0, type0, type0, 
    /* G_FPOWI */
    type0, type0, type1, 
    /* G_FEXP */
    type0, type0, 
    /* G_FEXP2 */
    type0, type0, 
    /* G_FLOG */
    type0, type0, 
    /* G_FLOG2 */
    type0, type0, 
    /* G_FLOG10 */
    type0, type0, 
    /* G_FNEG */
    type0, type0, 
    /* G_FPEXT */
    type0, type1, 
    /* G_FPTRUNC */
    type0, type1, 
    /* G_FPTOSI */
    type0, type1, 
    /* G_FPTOUI */
    type0, type1, 
    /* G_SITOFP */
    type0, type1, 
    /* G_UITOFP */
    type0, type1, 
    /* G_FABS */
    type0, type0, 
    /* G_FCOPYSIGN */
    type0, type0, type1, 
    /* G_IS_FPCLASS */
    type0, type1, -1, -1, 
    /* G_FCANONICALIZE */
    type0, type0, 
    /* G_FMINNUM */
    type0, type0, type0, 
    /* G_FMAXNUM */
    type0, type0, type0, 
    /* G_FMINNUM_IEEE */
    type0, type0, type0, 
    /* G_FMAXNUM_IEEE */
    type0, type0, type0, 
    /* G_FMINIMUM */
    type0, type0, type0, 
    /* G_FMAXIMUM */
    type0, type0, type0, 
    /* G_PTR_ADD */
    type0, type0, type1, 
    /* G_PTRMASK */
    ptype0, ptype0, type1, 
    /* G_SMIN */
    type0, type0, type0, 
    /* G_SMAX */
    type0, type0, type0, 
    /* G_UMIN */
    type0, type0, type0, 
    /* G_UMAX */
    type0, type0, type0, 
    /* G_ABS */
    type0, type0, 
    /* G_LROUND */
    type0, type1, 
    /* G_LLROUND */
    type0, type1, 
    /* G_BR */
    -1, 
    /* G_BRJT */
    ptype0, -1, type1, 
    /* G_INSERT_VECTOR_ELT */
    type0, type0, type1, type2, 
    /* G_EXTRACT_VECTOR_ELT */
    type0, type1, type2, 
    /* G_SHUFFLE_VECTOR */
    type0, type1, type1, -1, 
    /* G_CTTZ */
    type0, type1, 
    /* G_CTTZ_ZERO_UNDEF */
    type0, type1, 
    /* G_CTLZ */
    type0, type1, 
    /* G_CTLZ_ZERO_UNDEF */
    type0, type1, 
    /* G_CTPOP */
    type0, type1, 
    /* G_BSWAP */
    type0, type0, 
    /* G_BITREVERSE */
    type0, type0, 
    /* G_FCEIL */
    type0, type0, 
    /* G_FCOS */
    type0, type0, 
    /* G_FSIN */
    type0, type0, 
    /* G_FSQRT */
    type0, type0, 
    /* G_FFLOOR */
    type0, type0, 
    /* G_FRINT */
    type0, type0, 
    /* G_FNEARBYINT */
    type0, type0, 
    /* G_ADDRSPACE_CAST */
    type0, type1, 
    /* G_BLOCK_ADDR */
    type0, -1, 
    /* G_JUMP_TABLE */
    type0, -1, 
    /* G_DYN_STACKALLOC */
    ptype0, type1, i32imm, 
    /* G_STRICT_FADD */
    type0, type0, type0, 
    /* G_STRICT_FSUB */
    type0, type0, type0, 
    /* G_STRICT_FMUL */
    type0, type0, type0, 
    /* G_STRICT_FDIV */
    type0, type0, type0, 
    /* G_STRICT_FREM */
    type0, type0, type0, 
    /* G_STRICT_FMA */
    type0, type0, type0, type0, 
    /* G_STRICT_FSQRT */
    type0, type0, 
    /* G_READ_REGISTER */
    type0, -1, 
    /* G_WRITE_REGISTER */
    -1, type0, 
    /* G_MEMCPY */
    ptype0, ptype1, type2, untyped_imm_0, 
    /* G_MEMCPY_INLINE */
    ptype0, ptype1, type2, 
    /* G_MEMMOVE */
    ptype0, ptype1, type2, untyped_imm_0, 
    /* G_MEMSET */
    ptype0, type1, type2, untyped_imm_0, 
    /* G_BZERO */
    ptype0, type1, untyped_imm_0, 
    /* G_VECREDUCE_SEQ_FADD */
    type0, type1, type2, 
    /* G_VECREDUCE_SEQ_FMUL */
    type0, type1, type2, 
    /* G_VECREDUCE_FADD */
    type0, type1, 
    /* G_VECREDUCE_FMUL */
    type0, type1, 
    /* G_VECREDUCE_FMAX */
    type0, type1, 
    /* G_VECREDUCE_FMIN */
    type0, type1, 
    /* G_VECREDUCE_ADD */
    type0, type1, 
    /* G_VECREDUCE_MUL */
    type0, type1, 
    /* G_VECREDUCE_AND */
    type0, type1, 
    /* G_VECREDUCE_OR */
    type0, type1, 
    /* G_VECREDUCE_XOR */
    type0, type1, 
    /* G_VECREDUCE_SMAX */
    type0, type1, 
    /* G_VECREDUCE_SMIN */
    type0, type1, 
    /* G_VECREDUCE_UMAX */
    type0, type1, 
    /* G_VECREDUCE_UMIN */
    type0, type1, 
    /* G_SBFX */
    type0, type0, type1, type1, 
    /* G_UBFX */
    type0, type0, type1, type1, 
    /* ADD16mc */
    GR16, i16imm, cg16imm, 
    /* ADD16mi */
    GR16, i16imm, i16imm, 
    /* ADD16mm */
    GR16, i16imm, GR16, i16imm, 
    /* ADD16mn */
    GR16, i16imm, GR16, 
    /* ADD16mp */
    GR16, i16imm, GR16, 
    /* ADD16mr */
    GR16, i16imm, GR16, 
    /* ADD16rc */
    GR16, GR16, cg16imm, 
    /* ADD16ri */
    GR16, GR16, i16imm, 
    /* ADD16rm */
    GR16, GR16, GR16, i16imm, 
    /* ADD16rn */
    GR16, GR16, GR16, 
    /* ADD16rp */
    GR16, GR16, GR16, GR16, 
    /* ADD16rr */
    GR16, GR16, GR16, 
    /* ADD8mc */
    GR16, i16imm, cg8imm, 
    /* ADD8mi */
    GR16, i16imm, i8imm, 
    /* ADD8mm */
    GR16, i16imm, GR16, i16imm, 
    /* ADD8mn */
    GR16, i16imm, GR16, 
    /* ADD8mp */
    GR16, i16imm, GR16, 
    /* ADD8mr */
    GR16, i16imm, GR8, 
    /* ADD8rc */
    GR8, GR8, cg8imm, 
    /* ADD8ri */
    GR8, GR8, i8imm, 
    /* ADD8rm */
    GR8, GR8, GR16, i16imm, 
    /* ADD8rn */
    GR8, GR8, GR16, 
    /* ADD8rp */
    GR8, GR16, GR8, GR16, 
    /* ADD8rr */
    GR8, GR8, GR8, 
    /* ADDC16mc */
    GR16, i16imm, cg16imm, 
    /* ADDC16mi */
    GR16, i16imm, i16imm, 
    /* ADDC16mm */
    GR16, i16imm, GR16, i16imm, 
    /* ADDC16mn */
    GR16, i16imm, GR16, 
    /* ADDC16mp */
    GR16, i16imm, GR16, 
    /* ADDC16mr */
    GR16, i16imm, GR16, 
    /* ADDC16rc */
    GR16, GR16, cg16imm, 
    /* ADDC16ri */
    GR16, GR16, i16imm, 
    /* ADDC16rm */
    GR16, GR16, GR16, i16imm, 
    /* ADDC16rn */
    GR16, GR16, GR16, 
    /* ADDC16rp */
    GR16, GR16, GR16, GR16, 
    /* ADDC16rr */
    GR16, GR16, GR16, 
    /* ADDC8mc */
    GR16, i16imm, cg8imm, 
    /* ADDC8mi */
    GR16, i16imm, i8imm, 
    /* ADDC8mm */
    GR16, i16imm, GR16, i16imm, 
    /* ADDC8mn */
    GR16, i16imm, GR16, 
    /* ADDC8mp */
    GR16, i16imm, GR16, 
    /* ADDC8mr */
    GR16, i16imm, GR8, 
    /* ADDC8rc */
    GR8, GR8, cg8imm, 
    /* ADDC8ri */
    GR8, GR8, i8imm, 
    /* ADDC8rm */
    GR8, GR8, GR16, i16imm, 
    /* ADDC8rn */
    GR8, GR8, GR16, 
    /* ADDC8rp */
    GR8, GR16, GR8, GR16, 
    /* ADDC8rr */
    GR8, GR8, GR8, 
    /* ADDframe */
    GR16, i16imm, i16imm, 
    /* ADJCALLSTACKDOWN */
    i16imm, i16imm, 
    /* ADJCALLSTACKUP */
    i16imm, i16imm, 
    /* AND16mc */
    GR16, i16imm, cg16imm, 
    /* AND16mi */
    GR16, i16imm, i16imm, 
    /* AND16mm */
    GR16, i16imm, GR16, i16imm, 
    /* AND16mn */
    GR16, i16imm, GR16, 
    /* AND16mp */
    GR16, i16imm, GR16, 
    /* AND16mr */
    GR16, i16imm, GR16, 
    /* AND16rc */
    GR16, GR16, cg16imm, 
    /* AND16ri */
    GR16, GR16, i16imm, 
    /* AND16rm */
    GR16, GR16, GR16, i16imm, 
    /* AND16rn */
    GR16, GR16, GR16, 
    /* AND16rp */
    GR16, GR16, GR16, GR16, 
    /* AND16rr */
    GR16, GR16, GR16, 
    /* AND8mc */
    GR16, i16imm, cg8imm, 
    /* AND8mi */
    GR16, i16imm, i8imm, 
    /* AND8mm */
    GR16, i16imm, GR16, i16imm, 
    /* AND8mn */
    GR16, i16imm, GR16, 
    /* AND8mp */
    GR16, i16imm, GR16, 
    /* AND8mr */
    GR16, i16imm, GR8, 
    /* AND8rc */
    GR8, GR8, cg8imm, 
    /* AND8ri */
    GR8, GR8, i8imm, 
    /* AND8rm */
    GR8, GR8, GR16, i16imm, 
    /* AND8rn */
    GR8, GR8, GR16, 
    /* AND8rp */
    GR8, GR16, GR8, GR16, 
    /* AND8rr */
    GR8, GR8, GR8, 
    /* BIC16mc */
    GR16, i16imm, cg16imm, 
    /* BIC16mi */
    GR16, i16imm, i16imm, 
    /* BIC16mm */
    GR16, i16imm, GR16, i16imm, 
    /* BIC16mn */
    GR16, i16imm, GR16, 
    /* BIC16mp */
    GR16, i16imm, GR16, 
    /* BIC16mr */
    GR16, i16imm, GR16, 
    /* BIC16rc */
    GR16, GR16, cg16imm, 
    /* BIC16ri */
    GR16, GR16, i16imm, 
    /* BIC16rm */
    GR16, GR16, GR16, i16imm, 
    /* BIC16rn */
    GR16, GR16, GR16, 
    /* BIC16rp */
    GR16, GR16, GR16, GR16, 
    /* BIC16rr */
    GR16, GR16, GR16, 
    /* BIC8mc */
    GR16, i16imm, cg8imm, 
    /* BIC8mi */
    GR16, i16imm, i8imm, 
    /* BIC8mm */
    GR16, i16imm, GR16, i16imm, 
    /* BIC8mn */
    GR16, i16imm, GR16, 
    /* BIC8mp */
    GR16, i16imm, GR16, 
    /* BIC8mr */
    GR16, i16imm, GR8, 
    /* BIC8rc */
    GR8, GR8, cg8imm, 
    /* BIC8ri */
    GR8, GR8, i8imm, 
    /* BIC8rm */
    GR8, GR8, GR16, i16imm, 
    /* BIC8rn */
    GR8, GR8, GR16, 
    /* BIC8rp */
    GR8, GR16, GR8, GR16, 
    /* BIC8rr */
    GR8, GR8, GR8, 
    /* BIS16mc */
    GR16, i16imm, cg16imm, 
    /* BIS16mi */
    GR16, i16imm, i16imm, 
    /* BIS16mm */
    GR16, i16imm, GR16, i16imm, 
    /* BIS16mn */
    GR16, i16imm, GR16, 
    /* BIS16mp */
    GR16, i16imm, GR16, 
    /* BIS16mr */
    GR16, i16imm, GR16, 
    /* BIS16rc */
    GR16, GR16, cg16imm, 
    /* BIS16ri */
    GR16, GR16, i16imm, 
    /* BIS16rm */
    GR16, GR16, GR16, i16imm, 
    /* BIS16rn */
    GR16, GR16, GR16, 
    /* BIS16rp */
    GR16, GR16, GR16, GR16, 
    /* BIS16rr */
    GR16, GR16, GR16, 
    /* BIS8mc */
    GR16, i16imm, cg8imm, 
    /* BIS8mi */
    GR16, i16imm, i8imm, 
    /* BIS8mm */
    GR16, i16imm, GR16, i16imm, 
    /* BIS8mn */
    GR16, i16imm, GR16, 
    /* BIS8mp */
    GR16, i16imm, GR16, 
    /* BIS8mr */
    GR16, i16imm, GR8, 
    /* BIS8rc */
    GR8, GR8, cg8imm, 
    /* BIS8ri */
    GR8, GR8, i8imm, 
    /* BIS8rm */
    GR8, GR8, GR16, i16imm, 
    /* BIS8rn */
    GR8, GR8, GR16, 
    /* BIS8rp */
    GR8, GR16, GR8, GR16, 
    /* BIS8rr */
    GR8, GR8, GR8, 
    /* BIT16mc */
    GR16, i16imm, cg16imm, 
    /* BIT16mi */
    GR16, i16imm, i16imm, 
    /* BIT16mm */
    GR16, i16imm, GR16, i16imm, 
    /* BIT16mn */
    GR16, i16imm, GR16, 
    /* BIT16mp */
    GR16, i16imm, GR16, 
    /* BIT16mr */
    GR16, i16imm, GR16, 
    /* BIT16rc */
    GR16, cg16imm, 
    /* BIT16ri */
    GR16, i16imm, 
    /* BIT16rm */
    GR16, GR16, i16imm, 
    /* BIT16rn */
    GR16, GR16, 
    /* BIT16rp */
    GR16, GR16, 
    /* BIT16rr */
    GR16, GR16, 
    /* BIT8mc */
    GR16, i16imm, cg8imm, 
    /* BIT8mi */
    GR16, i16imm, i8imm, 
    /* BIT8mm */
    GR16, i16imm, GR16, i16imm, 
    /* BIT8mn */
    GR16, i16imm, GR16, 
    /* BIT8mp */
    GR16, i16imm, GR16, 
    /* BIT8mr */
    GR16, i16imm, GR8, 
    /* BIT8rc */
    GR8, cg8imm, 
    /* BIT8ri */
    GR8, i8imm, 
    /* BIT8rm */
    GR8, GR16, i16imm, 
    /* BIT8rn */
    GR8, GR16, 
    /* BIT8rp */
    GR8, GR16, 
    /* BIT8rr */
    GR8, GR8, 
    /* Bi */
    i16imm, 
    /* Bm */
    GR16, i16imm, 
    /* Br */
    GR16, 
    /* CALLi */
    i16imm, 
    /* CALLm */
    GR16, i16imm, 
    /* CALLn */
    GR16, 
    /* CALLp */
    GR16, 
    /* CALLr */
    GR16, 
    /* CMP16mc */
    GR16, i16imm, cg16imm, 
    /* CMP16mi */
    GR16, i16imm, i16imm, 
    /* CMP16mm */
    GR16, i16imm, GR16, i16imm, 
    /* CMP16mn */
    GR16, i16imm, GR16, 
    /* CMP16mp */
    GR16, i16imm, GR16, 
    /* CMP16mr */
    GR16, i16imm, GR16, 
    /* CMP16rc */
    GR16, cg16imm, 
    /* CMP16ri */
    GR16, i16imm, 
    /* CMP16rm */
    GR16, GR16, i16imm, 
    /* CMP16rn */
    GR16, GR16, 
    /* CMP16rp */
    GR16, GR16, 
    /* CMP16rr */
    GR16, GR16, 
    /* CMP8mc */
    GR16, i16imm, cg8imm, 
    /* CMP8mi */
    GR16, i16imm, i8imm, 
    /* CMP8mm */
    GR16, i16imm, GR16, i16imm, 
    /* CMP8mn */
    GR16, i16imm, GR16, 
    /* CMP8mp */
    GR16, i16imm, GR16, 
    /* CMP8mr */
    GR16, i16imm, GR8, 
    /* CMP8rc */
    GR8, cg8imm, 
    /* CMP8ri */
    GR8, i8imm, 
    /* CMP8rm */
    GR8, GR16, i16imm, 
    /* CMP8rn */
    GR8, GR16, 
    /* CMP8rp */
    GR8, GR16, 
    /* CMP8rr */
    GR8, GR8, 
    /* DADD16mc */
    GR16, i16imm, cg16imm, 
    /* DADD16mi */
    GR16, i16imm, i16imm, 
    /* DADD16mm */
    GR16, i16imm, GR16, i16imm, 
    /* DADD16mn */
    GR16, i16imm, GR16, 
    /* DADD16mp */
    GR16, i16imm, GR16, 
    /* DADD16mr */
    GR16, i16imm, GR16, 
    /* DADD16rc */
    GR16, GR16, cg16imm, 
    /* DADD16ri */
    GR16, GR16, i16imm, 
    /* DADD16rm */
    GR16, GR16, GR16, i16imm, 
    /* DADD16rn */
    GR16, GR16, GR16, 
    /* DADD16rp */
    GR16, GR16, GR16, GR16, 
    /* DADD16rr */
    GR16, GR16, GR16, 
    /* DADD8mc */
    GR16, i16imm, cg8imm, 
    /* DADD8mi */
    GR16, i16imm, i8imm, 
    /* DADD8mm */
    GR16, i16imm, GR16, i16imm, 
    /* DADD8mn */
    GR16, i16imm, GR16, 
    /* DADD8mp */
    GR16, i16imm, GR16, 
    /* DADD8mr */
    GR16, i16imm, GR8, 
    /* DADD8rc */
    GR8, GR8, cg8imm, 
    /* DADD8ri */
    GR8, GR8, i8imm, 
    /* DADD8rm */
    GR8, GR8, GR16, i16imm, 
    /* DADD8rn */
    GR8, GR8, GR16, 
    /* DADD8rp */
    GR8, GR16, GR8, GR16, 
    /* DADD8rr */
    GR8, GR8, GR8, 
    /* JCC */
    jmptarget, cc, 
    /* JMP */
    jmptarget, 
    /* MOV16mc */
    GR16, i16imm, cg16imm, 
    /* MOV16mi */
    GR16, i16imm, i16imm, 
    /* MOV16mm */
    GR16, i16imm, GR16, i16imm, 
    /* MOV16mn */
    GR16, i16imm, GR16, 
    /* MOV16mr */
    GR16, i16imm, GR16, 
    /* MOV16rc */
    GR16, cg16imm, 
    /* MOV16ri */
    GR16, i16imm, 
    /* MOV16rm */
    GR16, GR16, i16imm, 
    /* MOV16rn */
    GR16, GR16, 
    /* MOV16rp */
    GR16, GR16, GR16, 
    /* MOV16rr */
    GR16, GR16, 
    /* MOV8mc */
    GR16, i16imm, cg8imm, 
    /* MOV8mi */
    GR16, i16imm, i8imm, 
    /* MOV8mm */
    GR16, i16imm, GR16, i16imm, 
    /* MOV8mn */
    GR16, i16imm, GR16, 
    /* MOV8mr */
    GR16, i16imm, GR8, 
    /* MOV8rc */
    GR8, cg8imm, 
    /* MOV8ri */
    GR8, i8imm, 
    /* MOV8rm */
    GR8, GR16, i16imm, 
    /* MOV8rn */
    GR8, GR16, 
    /* MOV8rp */
    GR8, GR16, GR16, 
    /* MOV8rr */
    GR8, GR8, 
    /* MOVZX16rm8 */
    GR16, GR16, i16imm, 
    /* MOVZX16rr8 */
    GR16, GR8, 
    /* POP16r */
    GR16, 
    /* PUSH16c */
    cg16imm, 
    /* PUSH16i */
    i16imm, 
    /* PUSH16r */
    GR16, 
    /* PUSH8r */
    GR8, 
    /* RET */
    /* RETI */
    /* RRA16m */
    GR16, i16imm, 
    /* RRA16n */
    GR16, 
    /* RRA16p */
    GR16, 
    /* RRA16r */
    GR16, GR16, 
    /* RRA8m */
    GR16, i16imm, 
    /* RRA8n */
    GR16, 
    /* RRA8p */
    GR16, 
    /* RRA8r */
    GR8, GR8, 
    /* RRC16m */
    GR16, i16imm, 
    /* RRC16n */
    GR16, 
    /* RRC16p */
    GR16, 
    /* RRC16r */
    GR16, GR16, 
    /* RRC8m */
    GR16, i16imm, 
    /* RRC8n */
    GR16, 
    /* RRC8p */
    GR16, 
    /* RRC8r */
    GR8, GR8, 
    /* Rrcl16 */
    GR16, GR16, 
    /* Rrcl8 */
    GR8, GR8, 
    /* SEXT16m */
    GR16, i16imm, 
    /* SEXT16n */
    GR16, 
    /* SEXT16p */
    GR16, 
    /* SEXT16r */
    GR16, GR16, 
    /* SUB16mc */
    GR16, i16imm, cg16imm, 
    /* SUB16mi */
    GR16, i16imm, i16imm, 
    /* SUB16mm */
    GR16, i16imm, GR16, i16imm, 
    /* SUB16mn */
    GR16, i16imm, GR16, 
    /* SUB16mp */
    GR16, i16imm, GR16, 
    /* SUB16mr */
    GR16, i16imm, GR16, 
    /* SUB16rc */
    GR16, GR16, cg16imm, 
    /* SUB16ri */
    GR16, GR16, i16imm, 
    /* SUB16rm */
    GR16, GR16, GR16, i16imm, 
    /* SUB16rn */
    GR16, GR16, GR16, 
    /* SUB16rp */
    GR16, GR16, GR16, GR16, 
    /* SUB16rr */
    GR16, GR16, GR16, 
    /* SUB8mc */
    GR16, i16imm, cg8imm, 
    /* SUB8mi */
    GR16, i16imm, i8imm, 
    /* SUB8mm */
    GR16, i16imm, GR16, i16imm, 
    /* SUB8mn */
    GR16, i16imm, GR16, 
    /* SUB8mp */
    GR16, i16imm, GR16, 
    /* SUB8mr */
    GR16, i16imm, GR8, 
    /* SUB8rc */
    GR8, GR8, cg8imm, 
    /* SUB8ri */
    GR8, GR8, i8imm, 
    /* SUB8rm */
    GR8, GR8, GR16, i16imm, 
    /* SUB8rn */
    GR8, GR8, GR16, 
    /* SUB8rp */
    GR8, GR16, GR8, GR16, 
    /* SUB8rr */
    GR8, GR8, GR8, 
    /* SUBC16mc */
    GR16, i16imm, cg16imm, 
    /* SUBC16mi */
    GR16, i16imm, i16imm, 
    /* SUBC16mm */
    GR16, i16imm, GR16, i16imm, 
    /* SUBC16mn */
    GR16, i16imm, GR16, 
    /* SUBC16mp */
    GR16, i16imm, GR16, 
    /* SUBC16mr */
    GR16, i16imm, GR16, 
    /* SUBC16rc */
    GR16, GR16, cg16imm, 
    /* SUBC16ri */
    GR16, GR16, i16imm, 
    /* SUBC16rm */
    GR16, GR16, GR16, i16imm, 
    /* SUBC16rn */
    GR16, GR16, GR16, 
    /* SUBC16rp */
    GR16, GR16, GR16, GR16, 
    /* SUBC16rr */
    GR16, GR16, GR16, 
    /* SUBC8mc */
    GR16, i16imm, cg8imm, 
    /* SUBC8mi */
    GR16, i16imm, i8imm, 
    /* SUBC8mm */
    GR16, i16imm, GR16, i16imm, 
    /* SUBC8mn */
    GR16, i16imm, GR16, 
    /* SUBC8mp */
    GR16, i16imm, GR16, 
    /* SUBC8mr */
    GR16, i16imm, GR8, 
    /* SUBC8rc */
    GR8, GR8, cg8imm, 
    /* SUBC8ri */
    GR8, GR8, i8imm, 
    /* SUBC8rm */
    GR8, GR8, GR16, i16imm, 
    /* SUBC8rn */
    GR8, GR8, GR16, 
    /* SUBC8rp */
    GR8, GR16, GR8, GR16, 
    /* SUBC8rr */
    GR8, GR8, GR8, 
    /* SWPB16m */
    GR16, i16imm, 
    /* SWPB16n */
    GR16, 
    /* SWPB16p */
    GR16, 
    /* SWPB16r */
    GR16, GR16, 
    /* Select16 */
    GR16, GR16, GR16, i8imm, 
    /* Select8 */
    GR8, GR8, GR8, i8imm, 
    /* Shl16 */
    GR16, GR16, GR8, 
    /* Shl8 */
    GR8, GR8, GR8, 
    /* Sra16 */
    GR16, GR16, GR8, 
    /* Sra8 */
    GR8, GR8, GR8, 
    /* Srl16 */
    GR16, GR16, GR8, 
    /* Srl8 */
    GR8, GR8, GR8, 
    /* XOR16mc */
    GR16, i16imm, cg16imm, 
    /* XOR16mi */
    GR16, i16imm, i16imm, 
    /* XOR16mm */
    GR16, i16imm, GR16, i16imm, 
    /* XOR16mn */
    GR16, i16imm, GR16, 
    /* XOR16mp */
    GR16, i16imm, GR16, 
    /* XOR16mr */
    GR16, i16imm, GR16, 
    /* XOR16rc */
    GR16, GR16, cg16imm, 
    /* XOR16ri */
    GR16, GR16, i16imm, 
    /* XOR16rm */
    GR16, GR16, GR16, i16imm, 
    /* XOR16rn */
    GR16, GR16, GR16, 
    /* XOR16rp */
    GR16, GR16, GR16, GR16, 
    /* XOR16rr */
    GR16, GR16, GR16, 
    /* XOR8mc */
    GR16, i16imm, cg8imm, 
    /* XOR8mi */
    GR16, i16imm, i8imm, 
    /* XOR8mm */
    GR16, i16imm, GR16, i16imm, 
    /* XOR8mn */
    GR16, i16imm, GR16, 
    /* XOR8mp */
    GR16, i16imm, GR16, 
    /* XOR8mr */
    GR16, i16imm, GR8, 
    /* XOR8rc */
    GR8, GR8, cg8imm, 
    /* XOR8ri */
    GR8, GR8, i8imm, 
    /* XOR8rm */
    GR8, GR8, GR16, i16imm, 
    /* XOR8rn */
    GR8, GR8, GR16, 
    /* XOR8rp */
    GR8, GR16, GR8, GR16, 
    /* XOR8rr */
    GR8, GR8, GR8, 
    /* ZEXT16r */
    GR16, GR16, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

#ifdef GET_INSTRINFO_MEM_OPERAND_SIZE
#undef GET_INSTRINFO_MEM_OPERAND_SIZE
namespace llvm {
namespace MSP430 {
LLVM_READONLY
static int getMemOperandSize(int OpType) {
  switch (OpType) {
  default: return 0;
  }
}
} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_MEM_OPERAND_SIZE

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
namespace llvm {
namespace MSP430 {
LLVM_READONLY static unsigned
getLogicalOperandSize(uint16_t Opcode, uint16_t LogicalOpIdx) {
  return LogicalOpIdx;
}
LLVM_READONLY static inline unsigned
getLogicalOperandIdx(uint16_t Opcode, uint16_t LogicalOpIdx) {
  auto S = 0U;
  for (auto i = 0U; i < LogicalOpIdx; ++i)
    S += getLogicalOperandSize(Opcode, i);
  return S;
}
} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
namespace llvm {
namespace MSP430 {
LLVM_READONLY static int
getLogicalOperandType(uint16_t Opcode, uint16_t LogicalOpIdx) {
  return -1;
}
} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP

#ifdef GET_INSTRINFO_MC_HELPER_DECLS
#undef GET_INSTRINFO_MC_HELPER_DECLS

namespace llvm {
class MCInst;
class FeatureBitset;

namespace MSP430_MC {

void verifyInstructionPredicates(unsigned Opcode, const FeatureBitset &Features);

} // end namespace MSP430_MC
} // end namespace llvm

#endif // GET_INSTRINFO_MC_HELPER_DECLS

#ifdef GET_INSTRINFO_MC_HELPERS
#undef GET_INSTRINFO_MC_HELPERS

namespace llvm {
namespace MSP430_MC {

} // end namespace MSP430_MC
} // end namespace llvm

#endif // GET_GENISTRINFO_MC_HELPERS

#ifdef ENABLE_INSTR_PREDICATE_VERIFIER
#undef ENABLE_INSTR_PREDICATE_VERIFIER
#include <sstream>

namespace llvm {
namespace MSP430_MC {

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
};

#ifndef NDEBUG
static const char *SubtargetFeatureNames[] = {
  nullptr
};

#endif // NDEBUG

FeatureBitset computeAvailableFeatures(const FeatureBitset &FB) {
  FeatureBitset Features;
  return Features;
}

#ifndef NDEBUG
// Feature bitsets.
enum : uint8_t {
  CEFBS_None,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // CEFBS_None
};
#endif // NDEBUG

void verifyInstructionPredicates(
    unsigned Opcode, const FeatureBitset &Features) {
#ifndef NDEBUG
  static uint8_t RequiredFeaturesRefs[] = {
    CEFBS_None, // PHI = 0
    CEFBS_None, // INLINEASM = 1
    CEFBS_None, // INLINEASM_BR = 2
    CEFBS_None, // CFI_INSTRUCTION = 3
    CEFBS_None, // EH_LABEL = 4
    CEFBS_None, // GC_LABEL = 5
    CEFBS_None, // ANNOTATION_LABEL = 6
    CEFBS_None, // KILL = 7
    CEFBS_None, // EXTRACT_SUBREG = 8
    CEFBS_None, // INSERT_SUBREG = 9
    CEFBS_None, // IMPLICIT_DEF = 10
    CEFBS_None, // SUBREG_TO_REG = 11
    CEFBS_None, // COPY_TO_REGCLASS = 12
    CEFBS_None, // DBG_VALUE = 13
    CEFBS_None, // DBG_VALUE_LIST = 14
    CEFBS_None, // DBG_INSTR_REF = 15
    CEFBS_None, // DBG_PHI = 16
    CEFBS_None, // DBG_LABEL = 17
    CEFBS_None, // REG_SEQUENCE = 18
    CEFBS_None, // COPY = 19
    CEFBS_None, // BUNDLE = 20
    CEFBS_None, // LIFETIME_START = 21
    CEFBS_None, // LIFETIME_END = 22
    CEFBS_None, // PSEUDO_PROBE = 23
    CEFBS_None, // ARITH_FENCE = 24
    CEFBS_None, // STACKMAP = 25
    CEFBS_None, // FENTRY_CALL = 26
    CEFBS_None, // PATCHPOINT = 27
    CEFBS_None, // LOAD_STACK_GUARD = 28
    CEFBS_None, // PREALLOCATED_SETUP = 29
    CEFBS_None, // PREALLOCATED_ARG = 30
    CEFBS_None, // STATEPOINT = 31
    CEFBS_None, // LOCAL_ESCAPE = 32
    CEFBS_None, // FAULTING_OP = 33
    CEFBS_None, // PATCHABLE_OP = 34
    CEFBS_None, // PATCHABLE_FUNCTION_ENTER = 35
    CEFBS_None, // PATCHABLE_RET = 36
    CEFBS_None, // PATCHABLE_FUNCTION_EXIT = 37
    CEFBS_None, // PATCHABLE_TAIL_CALL = 38
    CEFBS_None, // PATCHABLE_EVENT_CALL = 39
    CEFBS_None, // PATCHABLE_TYPED_EVENT_CALL = 40
    CEFBS_None, // ICALL_BRANCH_FUNNEL = 41
    CEFBS_None, // G_ASSERT_SEXT = 42
    CEFBS_None, // G_ASSERT_ZEXT = 43
    CEFBS_None, // G_ASSERT_ALIGN = 44
    CEFBS_None, // G_ADD = 45
    CEFBS_None, // G_SUB = 46
    CEFBS_None, // G_MUL = 47
    CEFBS_None, // G_SDIV = 48
    CEFBS_None, // G_UDIV = 49
    CEFBS_None, // G_SREM = 50
    CEFBS_None, // G_UREM = 51
    CEFBS_None, // G_SDIVREM = 52
    CEFBS_None, // G_UDIVREM = 53
    CEFBS_None, // G_AND = 54
    CEFBS_None, // G_OR = 55
    CEFBS_None, // G_XOR = 56
    CEFBS_None, // G_IMPLICIT_DEF = 57
    CEFBS_None, // G_PHI = 58
    CEFBS_None, // G_FRAME_INDEX = 59
    CEFBS_None, // G_GLOBAL_VALUE = 60
    CEFBS_None, // G_EXTRACT = 61
    CEFBS_None, // G_UNMERGE_VALUES = 62
    CEFBS_None, // G_INSERT = 63
    CEFBS_None, // G_MERGE_VALUES = 64
    CEFBS_None, // G_BUILD_VECTOR = 65
    CEFBS_None, // G_BUILD_VECTOR_TRUNC = 66
    CEFBS_None, // G_CONCAT_VECTORS = 67
    CEFBS_None, // G_PTRTOINT = 68
    CEFBS_None, // G_INTTOPTR = 69
    CEFBS_None, // G_BITCAST = 70
    CEFBS_None, // G_FREEZE = 71
    CEFBS_None, // G_INTRINSIC_FPTRUNC_ROUND = 72
    CEFBS_None, // G_INTRINSIC_TRUNC = 73
    CEFBS_None, // G_INTRINSIC_ROUND = 74
    CEFBS_None, // G_INTRINSIC_LRINT = 75
    CEFBS_None, // G_INTRINSIC_ROUNDEVEN = 76
    CEFBS_None, // G_READCYCLECOUNTER = 77
    CEFBS_None, // G_LOAD = 78
    CEFBS_None, // G_SEXTLOAD = 79
    CEFBS_None, // G_ZEXTLOAD = 80
    CEFBS_None, // G_INDEXED_LOAD = 81
    CEFBS_None, // G_INDEXED_SEXTLOAD = 82
    CEFBS_None, // G_INDEXED_ZEXTLOAD = 83
    CEFBS_None, // G_STORE = 84
    CEFBS_None, // G_INDEXED_STORE = 85
    CEFBS_None, // G_ATOMIC_CMPXCHG_WITH_SUCCESS = 86
    CEFBS_None, // G_ATOMIC_CMPXCHG = 87
    CEFBS_None, // G_ATOMICRMW_XCHG = 88
    CEFBS_None, // G_ATOMICRMW_ADD = 89
    CEFBS_None, // G_ATOMICRMW_SUB = 90
    CEFBS_None, // G_ATOMICRMW_AND = 91
    CEFBS_None, // G_ATOMICRMW_NAND = 92
    CEFBS_None, // G_ATOMICRMW_OR = 93
    CEFBS_None, // G_ATOMICRMW_XOR = 94
    CEFBS_None, // G_ATOMICRMW_MAX = 95
    CEFBS_None, // G_ATOMICRMW_MIN = 96
    CEFBS_None, // G_ATOMICRMW_UMAX = 97
    CEFBS_None, // G_ATOMICRMW_UMIN = 98
    CEFBS_None, // G_ATOMICRMW_FADD = 99
    CEFBS_None, // G_ATOMICRMW_FSUB = 100
    CEFBS_None, // G_ATOMICRMW_FMAX = 101
    CEFBS_None, // G_ATOMICRMW_FMIN = 102
    CEFBS_None, // G_FENCE = 103
    CEFBS_None, // G_BRCOND = 104
    CEFBS_None, // G_BRINDIRECT = 105
    CEFBS_None, // G_INTRINSIC = 106
    CEFBS_None, // G_INTRINSIC_W_SIDE_EFFECTS = 107
    CEFBS_None, // G_ANYEXT = 108
    CEFBS_None, // G_TRUNC = 109
    CEFBS_None, // G_CONSTANT = 110
    CEFBS_None, // G_FCONSTANT = 111
    CEFBS_None, // G_VASTART = 112
    CEFBS_None, // G_VAARG = 113
    CEFBS_None, // G_SEXT = 114
    CEFBS_None, // G_SEXT_INREG = 115
    CEFBS_None, // G_ZEXT = 116
    CEFBS_None, // G_SHL = 117
    CEFBS_None, // G_LSHR = 118
    CEFBS_None, // G_ASHR = 119
    CEFBS_None, // G_FSHL = 120
    CEFBS_None, // G_FSHR = 121
    CEFBS_None, // G_ROTR = 122
    CEFBS_None, // G_ROTL = 123
    CEFBS_None, // G_ICMP = 124
    CEFBS_None, // G_FCMP = 125
    CEFBS_None, // G_SELECT = 126
    CEFBS_None, // G_UADDO = 127
    CEFBS_None, // G_UADDE = 128
    CEFBS_None, // G_USUBO = 129
    CEFBS_None, // G_USUBE = 130
    CEFBS_None, // G_SADDO = 131
    CEFBS_None, // G_SADDE = 132
    CEFBS_None, // G_SSUBO = 133
    CEFBS_None, // G_SSUBE = 134
    CEFBS_None, // G_UMULO = 135
    CEFBS_None, // G_SMULO = 136
    CEFBS_None, // G_UMULH = 137
    CEFBS_None, // G_SMULH = 138
    CEFBS_None, // G_UADDSAT = 139
    CEFBS_None, // G_SADDSAT = 140
    CEFBS_None, // G_USUBSAT = 141
    CEFBS_None, // G_SSUBSAT = 142
    CEFBS_None, // G_USHLSAT = 143
    CEFBS_None, // G_SSHLSAT = 144
    CEFBS_None, // G_SMULFIX = 145
    CEFBS_None, // G_UMULFIX = 146
    CEFBS_None, // G_SMULFIXSAT = 147
    CEFBS_None, // G_UMULFIXSAT = 148
    CEFBS_None, // G_SDIVFIX = 149
    CEFBS_None, // G_UDIVFIX = 150
    CEFBS_None, // G_SDIVFIXSAT = 151
    CEFBS_None, // G_UDIVFIXSAT = 152
    CEFBS_None, // G_FADD = 153
    CEFBS_None, // G_FSUB = 154
    CEFBS_None, // G_FMUL = 155
    CEFBS_None, // G_FMA = 156
    CEFBS_None, // G_FMAD = 157
    CEFBS_None, // G_FDIV = 158
    CEFBS_None, // G_FREM = 159
    CEFBS_None, // G_FPOW = 160
    CEFBS_None, // G_FPOWI = 161
    CEFBS_None, // G_FEXP = 162
    CEFBS_None, // G_FEXP2 = 163
    CEFBS_None, // G_FLOG = 164
    CEFBS_None, // G_FLOG2 = 165
    CEFBS_None, // G_FLOG10 = 166
    CEFBS_None, // G_FNEG = 167
    CEFBS_None, // G_FPEXT = 168
    CEFBS_None, // G_FPTRUNC = 169
    CEFBS_None, // G_FPTOSI = 170
    CEFBS_None, // G_FPTOUI = 171
    CEFBS_None, // G_SITOFP = 172
    CEFBS_None, // G_UITOFP = 173
    CEFBS_None, // G_FABS = 174
    CEFBS_None, // G_FCOPYSIGN = 175
    CEFBS_None, // G_IS_FPCLASS = 176
    CEFBS_None, // G_FCANONICALIZE = 177
    CEFBS_None, // G_FMINNUM = 178
    CEFBS_None, // G_FMAXNUM = 179
    CEFBS_None, // G_FMINNUM_IEEE = 180
    CEFBS_None, // G_FMAXNUM_IEEE = 181
    CEFBS_None, // G_FMINIMUM = 182
    CEFBS_None, // G_FMAXIMUM = 183
    CEFBS_None, // G_PTR_ADD = 184
    CEFBS_None, // G_PTRMASK = 185
    CEFBS_None, // G_SMIN = 186
    CEFBS_None, // G_SMAX = 187
    CEFBS_None, // G_UMIN = 188
    CEFBS_None, // G_UMAX = 189
    CEFBS_None, // G_ABS = 190
    CEFBS_None, // G_LROUND = 191
    CEFBS_None, // G_LLROUND = 192
    CEFBS_None, // G_BR = 193
    CEFBS_None, // G_BRJT = 194
    CEFBS_None, // G_INSERT_VECTOR_ELT = 195
    CEFBS_None, // G_EXTRACT_VECTOR_ELT = 196
    CEFBS_None, // G_SHUFFLE_VECTOR = 197
    CEFBS_None, // G_CTTZ = 198
    CEFBS_None, // G_CTTZ_ZERO_UNDEF = 199
    CEFBS_None, // G_CTLZ = 200
    CEFBS_None, // G_CTLZ_ZERO_UNDEF = 201
    CEFBS_None, // G_CTPOP = 202
    CEFBS_None, // G_BSWAP = 203
    CEFBS_None, // G_BITREVERSE = 204
    CEFBS_None, // G_FCEIL = 205
    CEFBS_None, // G_FCOS = 206
    CEFBS_None, // G_FSIN = 207
    CEFBS_None, // G_FSQRT = 208
    CEFBS_None, // G_FFLOOR = 209
    CEFBS_None, // G_FRINT = 210
    CEFBS_None, // G_FNEARBYINT = 211
    CEFBS_None, // G_ADDRSPACE_CAST = 212
    CEFBS_None, // G_BLOCK_ADDR = 213
    CEFBS_None, // G_JUMP_TABLE = 214
    CEFBS_None, // G_DYN_STACKALLOC = 215
    CEFBS_None, // G_STRICT_FADD = 216
    CEFBS_None, // G_STRICT_FSUB = 217
    CEFBS_None, // G_STRICT_FMUL = 218
    CEFBS_None, // G_STRICT_FDIV = 219
    CEFBS_None, // G_STRICT_FREM = 220
    CEFBS_None, // G_STRICT_FMA = 221
    CEFBS_None, // G_STRICT_FSQRT = 222
    CEFBS_None, // G_READ_REGISTER = 223
    CEFBS_None, // G_WRITE_REGISTER = 224
    CEFBS_None, // G_MEMCPY = 225
    CEFBS_None, // G_MEMCPY_INLINE = 226
    CEFBS_None, // G_MEMMOVE = 227
    CEFBS_None, // G_MEMSET = 228
    CEFBS_None, // G_BZERO = 229
    CEFBS_None, // G_VECREDUCE_SEQ_FADD = 230
    CEFBS_None, // G_VECREDUCE_SEQ_FMUL = 231
    CEFBS_None, // G_VECREDUCE_FADD = 232
    CEFBS_None, // G_VECREDUCE_FMUL = 233
    CEFBS_None, // G_VECREDUCE_FMAX = 234
    CEFBS_None, // G_VECREDUCE_FMIN = 235
    CEFBS_None, // G_VECREDUCE_ADD = 236
    CEFBS_None, // G_VECREDUCE_MUL = 237
    CEFBS_None, // G_VECREDUCE_AND = 238
    CEFBS_None, // G_VECREDUCE_OR = 239
    CEFBS_None, // G_VECREDUCE_XOR = 240
    CEFBS_None, // G_VECREDUCE_SMAX = 241
    CEFBS_None, // G_VECREDUCE_SMIN = 242
    CEFBS_None, // G_VECREDUCE_UMAX = 243
    CEFBS_None, // G_VECREDUCE_UMIN = 244
    CEFBS_None, // G_SBFX = 245
    CEFBS_None, // G_UBFX = 246
    CEFBS_None, // ADD16mc = 247
    CEFBS_None, // ADD16mi = 248
    CEFBS_None, // ADD16mm = 249
    CEFBS_None, // ADD16mn = 250
    CEFBS_None, // ADD16mp = 251
    CEFBS_None, // ADD16mr = 252
    CEFBS_None, // ADD16rc = 253
    CEFBS_None, // ADD16ri = 254
    CEFBS_None, // ADD16rm = 255
    CEFBS_None, // ADD16rn = 256
    CEFBS_None, // ADD16rp = 257
    CEFBS_None, // ADD16rr = 258
    CEFBS_None, // ADD8mc = 259
    CEFBS_None, // ADD8mi = 260
    CEFBS_None, // ADD8mm = 261
    CEFBS_None, // ADD8mn = 262
    CEFBS_None, // ADD8mp = 263
    CEFBS_None, // ADD8mr = 264
    CEFBS_None, // ADD8rc = 265
    CEFBS_None, // ADD8ri = 266
    CEFBS_None, // ADD8rm = 267
    CEFBS_None, // ADD8rn = 268
    CEFBS_None, // ADD8rp = 269
    CEFBS_None, // ADD8rr = 270
    CEFBS_None, // ADDC16mc = 271
    CEFBS_None, // ADDC16mi = 272
    CEFBS_None, // ADDC16mm = 273
    CEFBS_None, // ADDC16mn = 274
    CEFBS_None, // ADDC16mp = 275
    CEFBS_None, // ADDC16mr = 276
    CEFBS_None, // ADDC16rc = 277
    CEFBS_None, // ADDC16ri = 278
    CEFBS_None, // ADDC16rm = 279
    CEFBS_None, // ADDC16rn = 280
    CEFBS_None, // ADDC16rp = 281
    CEFBS_None, // ADDC16rr = 282
    CEFBS_None, // ADDC8mc = 283
    CEFBS_None, // ADDC8mi = 284
    CEFBS_None, // ADDC8mm = 285
    CEFBS_None, // ADDC8mn = 286
    CEFBS_None, // ADDC8mp = 287
    CEFBS_None, // ADDC8mr = 288
    CEFBS_None, // ADDC8rc = 289
    CEFBS_None, // ADDC8ri = 290
    CEFBS_None, // ADDC8rm = 291
    CEFBS_None, // ADDC8rn = 292
    CEFBS_None, // ADDC8rp = 293
    CEFBS_None, // ADDC8rr = 294
    CEFBS_None, // ADDframe = 295
    CEFBS_None, // ADJCALLSTACKDOWN = 296
    CEFBS_None, // ADJCALLSTACKUP = 297
    CEFBS_None, // AND16mc = 298
    CEFBS_None, // AND16mi = 299
    CEFBS_None, // AND16mm = 300
    CEFBS_None, // AND16mn = 301
    CEFBS_None, // AND16mp = 302
    CEFBS_None, // AND16mr = 303
    CEFBS_None, // AND16rc = 304
    CEFBS_None, // AND16ri = 305
    CEFBS_None, // AND16rm = 306
    CEFBS_None, // AND16rn = 307
    CEFBS_None, // AND16rp = 308
    CEFBS_None, // AND16rr = 309
    CEFBS_None, // AND8mc = 310
    CEFBS_None, // AND8mi = 311
    CEFBS_None, // AND8mm = 312
    CEFBS_None, // AND8mn = 313
    CEFBS_None, // AND8mp = 314
    CEFBS_None, // AND8mr = 315
    CEFBS_None, // AND8rc = 316
    CEFBS_None, // AND8ri = 317
    CEFBS_None, // AND8rm = 318
    CEFBS_None, // AND8rn = 319
    CEFBS_None, // AND8rp = 320
    CEFBS_None, // AND8rr = 321
    CEFBS_None, // BIC16mc = 322
    CEFBS_None, // BIC16mi = 323
    CEFBS_None, // BIC16mm = 324
    CEFBS_None, // BIC16mn = 325
    CEFBS_None, // BIC16mp = 326
    CEFBS_None, // BIC16mr = 327
    CEFBS_None, // BIC16rc = 328
    CEFBS_None, // BIC16ri = 329
    CEFBS_None, // BIC16rm = 330
    CEFBS_None, // BIC16rn = 331
    CEFBS_None, // BIC16rp = 332
    CEFBS_None, // BIC16rr = 333
    CEFBS_None, // BIC8mc = 334
    CEFBS_None, // BIC8mi = 335
    CEFBS_None, // BIC8mm = 336
    CEFBS_None, // BIC8mn = 337
    CEFBS_None, // BIC8mp = 338
    CEFBS_None, // BIC8mr = 339
    CEFBS_None, // BIC8rc = 340
    CEFBS_None, // BIC8ri = 341
    CEFBS_None, // BIC8rm = 342
    CEFBS_None, // BIC8rn = 343
    CEFBS_None, // BIC8rp = 344
    CEFBS_None, // BIC8rr = 345
    CEFBS_None, // BIS16mc = 346
    CEFBS_None, // BIS16mi = 347
    CEFBS_None, // BIS16mm = 348
    CEFBS_None, // BIS16mn = 349
    CEFBS_None, // BIS16mp = 350
    CEFBS_None, // BIS16mr = 351
    CEFBS_None, // BIS16rc = 352
    CEFBS_None, // BIS16ri = 353
    CEFBS_None, // BIS16rm = 354
    CEFBS_None, // BIS16rn = 355
    CEFBS_None, // BIS16rp = 356
    CEFBS_None, // BIS16rr = 357
    CEFBS_None, // BIS8mc = 358
    CEFBS_None, // BIS8mi = 359
    CEFBS_None, // BIS8mm = 360
    CEFBS_None, // BIS8mn = 361
    CEFBS_None, // BIS8mp = 362
    CEFBS_None, // BIS8mr = 363
    CEFBS_None, // BIS8rc = 364
    CEFBS_None, // BIS8ri = 365
    CEFBS_None, // BIS8rm = 366
    CEFBS_None, // BIS8rn = 367
    CEFBS_None, // BIS8rp = 368
    CEFBS_None, // BIS8rr = 369
    CEFBS_None, // BIT16mc = 370
    CEFBS_None, // BIT16mi = 371
    CEFBS_None, // BIT16mm = 372
    CEFBS_None, // BIT16mn = 373
    CEFBS_None, // BIT16mp = 374
    CEFBS_None, // BIT16mr = 375
    CEFBS_None, // BIT16rc = 376
    CEFBS_None, // BIT16ri = 377
    CEFBS_None, // BIT16rm = 378
    CEFBS_None, // BIT16rn = 379
    CEFBS_None, // BIT16rp = 380
    CEFBS_None, // BIT16rr = 381
    CEFBS_None, // BIT8mc = 382
    CEFBS_None, // BIT8mi = 383
    CEFBS_None, // BIT8mm = 384
    CEFBS_None, // BIT8mn = 385
    CEFBS_None, // BIT8mp = 386
    CEFBS_None, // BIT8mr = 387
    CEFBS_None, // BIT8rc = 388
    CEFBS_None, // BIT8ri = 389
    CEFBS_None, // BIT8rm = 390
    CEFBS_None, // BIT8rn = 391
    CEFBS_None, // BIT8rp = 392
    CEFBS_None, // BIT8rr = 393
    CEFBS_None, // Bi = 394
    CEFBS_None, // Bm = 395
    CEFBS_None, // Br = 396
    CEFBS_None, // CALLi = 397
    CEFBS_None, // CALLm = 398
    CEFBS_None, // CALLn = 399
    CEFBS_None, // CALLp = 400
    CEFBS_None, // CALLr = 401
    CEFBS_None, // CMP16mc = 402
    CEFBS_None, // CMP16mi = 403
    CEFBS_None, // CMP16mm = 404
    CEFBS_None, // CMP16mn = 405
    CEFBS_None, // CMP16mp = 406
    CEFBS_None, // CMP16mr = 407
    CEFBS_None, // CMP16rc = 408
    CEFBS_None, // CMP16ri = 409
    CEFBS_None, // CMP16rm = 410
    CEFBS_None, // CMP16rn = 411
    CEFBS_None, // CMP16rp = 412
    CEFBS_None, // CMP16rr = 413
    CEFBS_None, // CMP8mc = 414
    CEFBS_None, // CMP8mi = 415
    CEFBS_None, // CMP8mm = 416
    CEFBS_None, // CMP8mn = 417
    CEFBS_None, // CMP8mp = 418
    CEFBS_None, // CMP8mr = 419
    CEFBS_None, // CMP8rc = 420
    CEFBS_None, // CMP8ri = 421
    CEFBS_None, // CMP8rm = 422
    CEFBS_None, // CMP8rn = 423
    CEFBS_None, // CMP8rp = 424
    CEFBS_None, // CMP8rr = 425
    CEFBS_None, // DADD16mc = 426
    CEFBS_None, // DADD16mi = 427
    CEFBS_None, // DADD16mm = 428
    CEFBS_None, // DADD16mn = 429
    CEFBS_None, // DADD16mp = 430
    CEFBS_None, // DADD16mr = 431
    CEFBS_None, // DADD16rc = 432
    CEFBS_None, // DADD16ri = 433
    CEFBS_None, // DADD16rm = 434
    CEFBS_None, // DADD16rn = 435
    CEFBS_None, // DADD16rp = 436
    CEFBS_None, // DADD16rr = 437
    CEFBS_None, // DADD8mc = 438
    CEFBS_None, // DADD8mi = 439
    CEFBS_None, // DADD8mm = 440
    CEFBS_None, // DADD8mn = 441
    CEFBS_None, // DADD8mp = 442
    CEFBS_None, // DADD8mr = 443
    CEFBS_None, // DADD8rc = 444
    CEFBS_None, // DADD8ri = 445
    CEFBS_None, // DADD8rm = 446
    CEFBS_None, // DADD8rn = 447
    CEFBS_None, // DADD8rp = 448
    CEFBS_None, // DADD8rr = 449
    CEFBS_None, // JCC = 450
    CEFBS_None, // JMP = 451
    CEFBS_None, // MOV16mc = 452
    CEFBS_None, // MOV16mi = 453
    CEFBS_None, // MOV16mm = 454
    CEFBS_None, // MOV16mn = 455
    CEFBS_None, // MOV16mr = 456
    CEFBS_None, // MOV16rc = 457
    CEFBS_None, // MOV16ri = 458
    CEFBS_None, // MOV16rm = 459
    CEFBS_None, // MOV16rn = 460
    CEFBS_None, // MOV16rp = 461
    CEFBS_None, // MOV16rr = 462
    CEFBS_None, // MOV8mc = 463
    CEFBS_None, // MOV8mi = 464
    CEFBS_None, // MOV8mm = 465
    CEFBS_None, // MOV8mn = 466
    CEFBS_None, // MOV8mr = 467
    CEFBS_None, // MOV8rc = 468
    CEFBS_None, // MOV8ri = 469
    CEFBS_None, // MOV8rm = 470
    CEFBS_None, // MOV8rn = 471
    CEFBS_None, // MOV8rp = 472
    CEFBS_None, // MOV8rr = 473
    CEFBS_None, // MOVZX16rm8 = 474
    CEFBS_None, // MOVZX16rr8 = 475
    CEFBS_None, // POP16r = 476
    CEFBS_None, // PUSH16c = 477
    CEFBS_None, // PUSH16i = 478
    CEFBS_None, // PUSH16r = 479
    CEFBS_None, // PUSH8r = 480
    CEFBS_None, // RET = 481
    CEFBS_None, // RETI = 482
    CEFBS_None, // RRA16m = 483
    CEFBS_None, // RRA16n = 484
    CEFBS_None, // RRA16p = 485
    CEFBS_None, // RRA16r = 486
    CEFBS_None, // RRA8m = 487
    CEFBS_None, // RRA8n = 488
    CEFBS_None, // RRA8p = 489
    CEFBS_None, // RRA8r = 490
    CEFBS_None, // RRC16m = 491
    CEFBS_None, // RRC16n = 492
    CEFBS_None, // RRC16p = 493
    CEFBS_None, // RRC16r = 494
    CEFBS_None, // RRC8m = 495
    CEFBS_None, // RRC8n = 496
    CEFBS_None, // RRC8p = 497
    CEFBS_None, // RRC8r = 498
    CEFBS_None, // Rrcl16 = 499
    CEFBS_None, // Rrcl8 = 500
    CEFBS_None, // SEXT16m = 501
    CEFBS_None, // SEXT16n = 502
    CEFBS_None, // SEXT16p = 503
    CEFBS_None, // SEXT16r = 504
    CEFBS_None, // SUB16mc = 505
    CEFBS_None, // SUB16mi = 506
    CEFBS_None, // SUB16mm = 507
    CEFBS_None, // SUB16mn = 508
    CEFBS_None, // SUB16mp = 509
    CEFBS_None, // SUB16mr = 510
    CEFBS_None, // SUB16rc = 511
    CEFBS_None, // SUB16ri = 512
    CEFBS_None, // SUB16rm = 513
    CEFBS_None, // SUB16rn = 514
    CEFBS_None, // SUB16rp = 515
    CEFBS_None, // SUB16rr = 516
    CEFBS_None, // SUB8mc = 517
    CEFBS_None, // SUB8mi = 518
    CEFBS_None, // SUB8mm = 519
    CEFBS_None, // SUB8mn = 520
    CEFBS_None, // SUB8mp = 521
    CEFBS_None, // SUB8mr = 522
    CEFBS_None, // SUB8rc = 523
    CEFBS_None, // SUB8ri = 524
    CEFBS_None, // SUB8rm = 525
    CEFBS_None, // SUB8rn = 526
    CEFBS_None, // SUB8rp = 527
    CEFBS_None, // SUB8rr = 528
    CEFBS_None, // SUBC16mc = 529
    CEFBS_None, // SUBC16mi = 530
    CEFBS_None, // SUBC16mm = 531
    CEFBS_None, // SUBC16mn = 532
    CEFBS_None, // SUBC16mp = 533
    CEFBS_None, // SUBC16mr = 534
    CEFBS_None, // SUBC16rc = 535
    CEFBS_None, // SUBC16ri = 536
    CEFBS_None, // SUBC16rm = 537
    CEFBS_None, // SUBC16rn = 538
    CEFBS_None, // SUBC16rp = 539
    CEFBS_None, // SUBC16rr = 540
    CEFBS_None, // SUBC8mc = 541
    CEFBS_None, // SUBC8mi = 542
    CEFBS_None, // SUBC8mm = 543
    CEFBS_None, // SUBC8mn = 544
    CEFBS_None, // SUBC8mp = 545
    CEFBS_None, // SUBC8mr = 546
    CEFBS_None, // SUBC8rc = 547
    CEFBS_None, // SUBC8ri = 548
    CEFBS_None, // SUBC8rm = 549
    CEFBS_None, // SUBC8rn = 550
    CEFBS_None, // SUBC8rp = 551
    CEFBS_None, // SUBC8rr = 552
    CEFBS_None, // SWPB16m = 553
    CEFBS_None, // SWPB16n = 554
    CEFBS_None, // SWPB16p = 555
    CEFBS_None, // SWPB16r = 556
    CEFBS_None, // Select16 = 557
    CEFBS_None, // Select8 = 558
    CEFBS_None, // Shl16 = 559
    CEFBS_None, // Shl8 = 560
    CEFBS_None, // Sra16 = 561
    CEFBS_None, // Sra8 = 562
    CEFBS_None, // Srl16 = 563
    CEFBS_None, // Srl8 = 564
    CEFBS_None, // XOR16mc = 565
    CEFBS_None, // XOR16mi = 566
    CEFBS_None, // XOR16mm = 567
    CEFBS_None, // XOR16mn = 568
    CEFBS_None, // XOR16mp = 569
    CEFBS_None, // XOR16mr = 570
    CEFBS_None, // XOR16rc = 571
    CEFBS_None, // XOR16ri = 572
    CEFBS_None, // XOR16rm = 573
    CEFBS_None, // XOR16rn = 574
    CEFBS_None, // XOR16rp = 575
    CEFBS_None, // XOR16rr = 576
    CEFBS_None, // XOR8mc = 577
    CEFBS_None, // XOR8mi = 578
    CEFBS_None, // XOR8mm = 579
    CEFBS_None, // XOR8mn = 580
    CEFBS_None, // XOR8mp = 581
    CEFBS_None, // XOR8mr = 582
    CEFBS_None, // XOR8rc = 583
    CEFBS_None, // XOR8ri = 584
    CEFBS_None, // XOR8rm = 585
    CEFBS_None, // XOR8rn = 586
    CEFBS_None, // XOR8rp = 587
    CEFBS_None, // XOR8rr = 588
    CEFBS_None, // ZEXT16r = 589
  };

  assert(Opcode < 590);
  FeatureBitset AvailableFeatures = computeAvailableFeatures(Features);
  const FeatureBitset &RequiredFeatures = FeatureBitsets[RequiredFeaturesRefs[Opcode]];
  FeatureBitset MissingFeatures =
      (AvailableFeatures & RequiredFeatures) ^
      RequiredFeatures;
  if (MissingFeatures.any()) {
    std::ostringstream Msg;
    Msg << "Attempting to emit " << &MSP430InstrNameData[MSP430InstrNameIndices[Opcode]]
        << " instruction but the ";
    for (unsigned i = 0, e = MissingFeatures.size(); i != e; ++i)
      if (MissingFeatures.test(i))
        Msg << SubtargetFeatureNames[i] << " ";
    Msg << "predicate(s) are not met";
    report_fatal_error(Msg.str().c_str());
  }
#endif // NDEBUG
}
} // end namespace MSP430_MC
} // end namespace llvm
#endif // ENABLE_INSTR_PREDICATE_VERIFIER

