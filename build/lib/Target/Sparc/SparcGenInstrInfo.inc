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

namespace SP {
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
    ADJCALLSTACKDOWN	= 247,
    ADJCALLSTACKUP	= 248,
    GETPCX	= 249,
    SELECT_CC_DFP_FCC	= 250,
    SELECT_CC_DFP_ICC	= 251,
    SELECT_CC_DFP_XCC	= 252,
    SELECT_CC_FP_FCC	= 253,
    SELECT_CC_FP_ICC	= 254,
    SELECT_CC_FP_XCC	= 255,
    SELECT_CC_Int_FCC	= 256,
    SELECT_CC_Int_ICC	= 257,
    SELECT_CC_Int_XCC	= 258,
    SELECT_CC_QFP_FCC	= 259,
    SELECT_CC_QFP_ICC	= 260,
    SELECT_CC_QFP_XCC	= 261,
    SET	= 262,
    ADDCCri	= 263,
    ADDCCrr	= 264,
    ADDCri	= 265,
    ADDCrr	= 266,
    ADDEri	= 267,
    ADDErr	= 268,
    ADDXC	= 269,
    ADDXCCC	= 270,
    ADDXri	= 271,
    ADDXrr	= 272,
    ADDri	= 273,
    ADDrr	= 274,
    ALIGNADDR	= 275,
    ALIGNADDRL	= 276,
    ANDCCri	= 277,
    ANDCCrr	= 278,
    ANDNCCri	= 279,
    ANDNCCrr	= 280,
    ANDNri	= 281,
    ANDNrr	= 282,
    ANDXNrr	= 283,
    ANDXri	= 284,
    ANDXrr	= 285,
    ANDri	= 286,
    ANDrr	= 287,
    ARRAY16	= 288,
    ARRAY32	= 289,
    ARRAY8	= 290,
    BA	= 291,
    BCOND	= 292,
    BCONDA	= 293,
    BINDri	= 294,
    BINDrr	= 295,
    BMASK	= 296,
    BPFCC	= 297,
    BPFCCA	= 298,
    BPFCCANT	= 299,
    BPFCCNT	= 300,
    BPGEZapn	= 301,
    BPGEZapt	= 302,
    BPGEZnapn	= 303,
    BPGEZnapt	= 304,
    BPGZapn	= 305,
    BPGZapt	= 306,
    BPGZnapn	= 307,
    BPGZnapt	= 308,
    BPICC	= 309,
    BPICCA	= 310,
    BPICCANT	= 311,
    BPICCNT	= 312,
    BPLEZapn	= 313,
    BPLEZapt	= 314,
    BPLEZnapn	= 315,
    BPLEZnapt	= 316,
    BPLZapn	= 317,
    BPLZapt	= 318,
    BPLZnapn	= 319,
    BPLZnapt	= 320,
    BPNZapn	= 321,
    BPNZapt	= 322,
    BPNZnapn	= 323,
    BPNZnapt	= 324,
    BPXCC	= 325,
    BPXCCA	= 326,
    BPXCCANT	= 327,
    BPXCCNT	= 328,
    BPZapn	= 329,
    BPZapt	= 330,
    BPZnapn	= 331,
    BPZnapt	= 332,
    BSHUFFLE	= 333,
    CALL	= 334,
    CALLri	= 335,
    CALLrr	= 336,
    CASAasi10	= 337,
    CASArr	= 338,
    CASXrr	= 339,
    CASrr	= 340,
    CBCOND	= 341,
    CBCONDA	= 342,
    CMASK16	= 343,
    CMASK32	= 344,
    CMASK8	= 345,
    CMPri	= 346,
    CMPrr	= 347,
    EDGE16	= 348,
    EDGE16L	= 349,
    EDGE16LN	= 350,
    EDGE16N	= 351,
    EDGE32	= 352,
    EDGE32L	= 353,
    EDGE32LN	= 354,
    EDGE32N	= 355,
    EDGE8	= 356,
    EDGE8L	= 357,
    EDGE8LN	= 358,
    EDGE8N	= 359,
    FABSD	= 360,
    FABSQ	= 361,
    FABSS	= 362,
    FADDD	= 363,
    FADDQ	= 364,
    FADDS	= 365,
    FALIGNADATA	= 366,
    FAND	= 367,
    FANDNOT1	= 368,
    FANDNOT1S	= 369,
    FANDNOT2	= 370,
    FANDNOT2S	= 371,
    FANDS	= 372,
    FBCOND	= 373,
    FBCONDA	= 374,
    FCHKSM16	= 375,
    FCMPD	= 376,
    FCMPEQ16	= 377,
    FCMPEQ32	= 378,
    FCMPGT16	= 379,
    FCMPGT32	= 380,
    FCMPLE16	= 381,
    FCMPLE32	= 382,
    FCMPNE16	= 383,
    FCMPNE32	= 384,
    FCMPQ	= 385,
    FCMPS	= 386,
    FDIVD	= 387,
    FDIVQ	= 388,
    FDIVS	= 389,
    FDMULQ	= 390,
    FDTOI	= 391,
    FDTOQ	= 392,
    FDTOS	= 393,
    FDTOX	= 394,
    FEXPAND	= 395,
    FHADDD	= 396,
    FHADDS	= 397,
    FHSUBD	= 398,
    FHSUBS	= 399,
    FITOD	= 400,
    FITOQ	= 401,
    FITOS	= 402,
    FLCMPD	= 403,
    FLCMPS	= 404,
    FLUSH	= 405,
    FLUSHW	= 406,
    FLUSHri	= 407,
    FLUSHrr	= 408,
    FMEAN16	= 409,
    FMOVD	= 410,
    FMOVD_FCC	= 411,
    FMOVD_ICC	= 412,
    FMOVD_XCC	= 413,
    FMOVQ	= 414,
    FMOVQ_FCC	= 415,
    FMOVQ_ICC	= 416,
    FMOVQ_XCC	= 417,
    FMOVRGEZD	= 418,
    FMOVRGEZQ	= 419,
    FMOVRGEZS	= 420,
    FMOVRGZD	= 421,
    FMOVRGZQ	= 422,
    FMOVRGZS	= 423,
    FMOVRLEZD	= 424,
    FMOVRLEZQ	= 425,
    FMOVRLEZS	= 426,
    FMOVRLZD	= 427,
    FMOVRLZQ	= 428,
    FMOVRLZS	= 429,
    FMOVRNZD	= 430,
    FMOVRNZQ	= 431,
    FMOVRNZS	= 432,
    FMOVRZD	= 433,
    FMOVRZQ	= 434,
    FMOVRZS	= 435,
    FMOVS	= 436,
    FMOVS_FCC	= 437,
    FMOVS_ICC	= 438,
    FMOVS_XCC	= 439,
    FMUL8SUX16	= 440,
    FMUL8ULX16	= 441,
    FMUL8X16	= 442,
    FMUL8X16AL	= 443,
    FMUL8X16AU	= 444,
    FMULD	= 445,
    FMULD8SUX16	= 446,
    FMULD8ULX16	= 447,
    FMULQ	= 448,
    FMULS	= 449,
    FNADDD	= 450,
    FNADDS	= 451,
    FNAND	= 452,
    FNANDS	= 453,
    FNEGD	= 454,
    FNEGQ	= 455,
    FNEGS	= 456,
    FNHADDD	= 457,
    FNHADDS	= 458,
    FNMULD	= 459,
    FNMULS	= 460,
    FNOR	= 461,
    FNORS	= 462,
    FNOT1	= 463,
    FNOT1S	= 464,
    FNOT2	= 465,
    FNOT2S	= 466,
    FNSMULD	= 467,
    FONE	= 468,
    FONES	= 469,
    FOR	= 470,
    FORNOT1	= 471,
    FORNOT1S	= 472,
    FORNOT2	= 473,
    FORNOT2S	= 474,
    FORS	= 475,
    FPACK16	= 476,
    FPACK32	= 477,
    FPACKFIX	= 478,
    FPADD16	= 479,
    FPADD16S	= 480,
    FPADD32	= 481,
    FPADD32S	= 482,
    FPADD64	= 483,
    FPMERGE	= 484,
    FPSUB16	= 485,
    FPSUB16S	= 486,
    FPSUB32	= 487,
    FPSUB32S	= 488,
    FQTOD	= 489,
    FQTOI	= 490,
    FQTOS	= 491,
    FQTOX	= 492,
    FSLAS16	= 493,
    FSLAS32	= 494,
    FSLL16	= 495,
    FSLL32	= 496,
    FSMULD	= 497,
    FSQRTD	= 498,
    FSQRTQ	= 499,
    FSQRTS	= 500,
    FSRA16	= 501,
    FSRA32	= 502,
    FSRC1	= 503,
    FSRC1S	= 504,
    FSRC2	= 505,
    FSRC2S	= 506,
    FSRL16	= 507,
    FSRL32	= 508,
    FSTOD	= 509,
    FSTOI	= 510,
    FSTOQ	= 511,
    FSTOX	= 512,
    FSUBD	= 513,
    FSUBQ	= 514,
    FSUBS	= 515,
    FXNOR	= 516,
    FXNORS	= 517,
    FXOR	= 518,
    FXORS	= 519,
    FXTOD	= 520,
    FXTOQ	= 521,
    FXTOS	= 522,
    FZERO	= 523,
    FZEROS	= 524,
    GDOP_LDXrr	= 525,
    GDOP_LDrr	= 526,
    JMPLri	= 527,
    JMPLrr	= 528,
    LDArr	= 529,
    LDCSRri	= 530,
    LDCSRrr	= 531,
    LDCri	= 532,
    LDCrr	= 533,
    LDDArr	= 534,
    LDDCri	= 535,
    LDDCrr	= 536,
    LDDFArr	= 537,
    LDDFri	= 538,
    LDDFrr	= 539,
    LDDri	= 540,
    LDDrr	= 541,
    LDFArr	= 542,
    LDFSRri	= 543,
    LDFSRrr	= 544,
    LDFri	= 545,
    LDFrr	= 546,
    LDQFArr	= 547,
    LDQFri	= 548,
    LDQFrr	= 549,
    LDSBArr	= 550,
    LDSBri	= 551,
    LDSBrr	= 552,
    LDSHArr	= 553,
    LDSHri	= 554,
    LDSHrr	= 555,
    LDSTUBArr	= 556,
    LDSTUBri	= 557,
    LDSTUBrr	= 558,
    LDSWri	= 559,
    LDSWrr	= 560,
    LDUBArr	= 561,
    LDUBri	= 562,
    LDUBrr	= 563,
    LDUHArr	= 564,
    LDUHri	= 565,
    LDUHrr	= 566,
    LDXFSRri	= 567,
    LDXFSRrr	= 568,
    LDXri	= 569,
    LDXrr	= 570,
    LDri	= 571,
    LDrr	= 572,
    LEAX_ADDri	= 573,
    LEA_ADDri	= 574,
    LZCNT	= 575,
    MEMBARi	= 576,
    MOVDTOX	= 577,
    MOVFCCri	= 578,
    MOVFCCrr	= 579,
    MOVICCri	= 580,
    MOVICCrr	= 581,
    MOVRGEZri	= 582,
    MOVRGEZrr	= 583,
    MOVRGZri	= 584,
    MOVRGZrr	= 585,
    MOVRLEZri	= 586,
    MOVRLEZrr	= 587,
    MOVRLZri	= 588,
    MOVRLZrr	= 589,
    MOVRNZri	= 590,
    MOVRNZrr	= 591,
    MOVRRZri	= 592,
    MOVRRZrr	= 593,
    MOVSTOSW	= 594,
    MOVSTOUW	= 595,
    MOVWTOS	= 596,
    MOVXCCri	= 597,
    MOVXCCrr	= 598,
    MOVXTOD	= 599,
    MULSCCri	= 600,
    MULSCCrr	= 601,
    MULXri	= 602,
    MULXrr	= 603,
    NOP	= 604,
    ORCCri	= 605,
    ORCCrr	= 606,
    ORNCCri	= 607,
    ORNCCrr	= 608,
    ORNri	= 609,
    ORNrr	= 610,
    ORXNrr	= 611,
    ORXri	= 612,
    ORXrr	= 613,
    ORri	= 614,
    ORrr	= 615,
    PDIST	= 616,
    PDISTN	= 617,
    POPCrr	= 618,
    PREFETCHi	= 619,
    PREFETCHr	= 620,
    PWRPSRri	= 621,
    PWRPSRrr	= 622,
    RDASR	= 623,
    RDPC	= 624,
    RDPR	= 625,
    RDPSR	= 626,
    RDTBR	= 627,
    RDWIM	= 628,
    RESTOREri	= 629,
    RESTORErr	= 630,
    RET	= 631,
    RETL	= 632,
    RETTri	= 633,
    RETTrr	= 634,
    SAVEri	= 635,
    SAVErr	= 636,
    SDIVCCri	= 637,
    SDIVCCrr	= 638,
    SDIVXri	= 639,
    SDIVXrr	= 640,
    SDIVri	= 641,
    SDIVrr	= 642,
    SETHIXi	= 643,
    SETHIi	= 644,
    SHUTDOWN	= 645,
    SIAM	= 646,
    SIR	= 647,
    SLLXri	= 648,
    SLLXrr	= 649,
    SLLri	= 650,
    SLLrr	= 651,
    SMACri	= 652,
    SMACrr	= 653,
    SMULCCri	= 654,
    SMULCCrr	= 655,
    SMULri	= 656,
    SMULrr	= 657,
    SRAXri	= 658,
    SRAXrr	= 659,
    SRAri	= 660,
    SRArr	= 661,
    SRLXri	= 662,
    SRLXrr	= 663,
    SRLri	= 664,
    SRLrr	= 665,
    STArr	= 666,
    STBAR	= 667,
    STBArr	= 668,
    STBri	= 669,
    STBrr	= 670,
    STCSRri	= 671,
    STCSRrr	= 672,
    STCri	= 673,
    STCrr	= 674,
    STDArr	= 675,
    STDCQri	= 676,
    STDCQrr	= 677,
    STDCri	= 678,
    STDCrr	= 679,
    STDFArr	= 680,
    STDFQri	= 681,
    STDFQrr	= 682,
    STDFri	= 683,
    STDFrr	= 684,
    STDri	= 685,
    STDrr	= 686,
    STFArr	= 687,
    STFSRri	= 688,
    STFSRrr	= 689,
    STFri	= 690,
    STFrr	= 691,
    STHArr	= 692,
    STHri	= 693,
    STHrr	= 694,
    STQFArr	= 695,
    STQFri	= 696,
    STQFrr	= 697,
    STXFSRri	= 698,
    STXFSRrr	= 699,
    STXri	= 700,
    STXrr	= 701,
    STri	= 702,
    STrr	= 703,
    SUBCCri	= 704,
    SUBCCrr	= 705,
    SUBCri	= 706,
    SUBCrr	= 707,
    SUBEri	= 708,
    SUBErr	= 709,
    SUBXri	= 710,
    SUBXrr	= 711,
    SUBri	= 712,
    SUBrr	= 713,
    SWAPArr	= 714,
    SWAPri	= 715,
    SWAPrr	= 716,
    TA1	= 717,
    TA3	= 718,
    TA5	= 719,
    TADDCCTVri	= 720,
    TADDCCTVrr	= 721,
    TADDCCri	= 722,
    TADDCCrr	= 723,
    TAIL_CALL	= 724,
    TAIL_CALLri	= 725,
    TICCri	= 726,
    TICCrr	= 727,
    TLS_ADDXrr	= 728,
    TLS_ADDrr	= 729,
    TLS_CALL	= 730,
    TLS_LDXrr	= 731,
    TLS_LDrr	= 732,
    TRAPri	= 733,
    TRAPrr	= 734,
    TSUBCCTVri	= 735,
    TSUBCCTVrr	= 736,
    TSUBCCri	= 737,
    TSUBCCrr	= 738,
    TXCCri	= 739,
    TXCCrr	= 740,
    UDIVCCri	= 741,
    UDIVCCrr	= 742,
    UDIVXri	= 743,
    UDIVXrr	= 744,
    UDIVri	= 745,
    UDIVrr	= 746,
    UMACri	= 747,
    UMACrr	= 748,
    UMULCCri	= 749,
    UMULCCrr	= 750,
    UMULXHI	= 751,
    UMULri	= 752,
    UMULrr	= 753,
    UNIMP	= 754,
    V9FCMPD	= 755,
    V9FCMPED	= 756,
    V9FCMPEQ	= 757,
    V9FCMPES	= 758,
    V9FCMPQ	= 759,
    V9FCMPS	= 760,
    V9FMOVD_FCC	= 761,
    V9FMOVQ_FCC	= 762,
    V9FMOVS_FCC	= 763,
    V9MOVFCCri	= 764,
    V9MOVFCCrr	= 765,
    WRASRri	= 766,
    WRASRrr	= 767,
    WRPRri	= 768,
    WRPRrr	= 769,
    WRPSRri	= 770,
    WRPSRrr	= 771,
    WRTBRri	= 772,
    WRTBRrr	= 773,
    WRWIMri	= 774,
    WRWIMrr	= 775,
    XMULX	= 776,
    XMULXHI	= 777,
    XNORCCri	= 778,
    XNORCCrr	= 779,
    XNORXrr	= 780,
    XNORri	= 781,
    XNORrr	= 782,
    XORCCri	= 783,
    XORCCrr	= 784,
    XORXri	= 785,
    XORXrr	= 786,
    XORri	= 787,
    XORrr	= 788,
    INSTRUCTION_LIST_END = 789
  };

} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace SP {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    IIC_iu_instr	= 1,
    IIC_fpu_normal_instr	= 2,
    IIC_jmp_or_call	= 3,
    IIC_fpu_abs	= 4,
    IIC_fpu_fast_instr	= 5,
    IIC_fpu_divd	= 6,
    IIC_fpu_divs	= 7,
    IIC_fpu_muld	= 8,
    IIC_fpu_muls	= 9,
    IIC_fpu_negs	= 10,
    IIC_fpu_sqrtd	= 11,
    IIC_fpu_sqrts	= 12,
    IIC_fpu_stod	= 13,
    IIC_ldd	= 14,
    IIC_iu_or_fpu_instr	= 15,
    IIC_iu_div	= 16,
    IIC_smac_umac	= 17,
    IIC_iu_smul	= 18,
    IIC_st	= 19,
    IIC_std	= 20,
    IIC_iu_umul	= 21,
    SCHED_LIST_END = 22
  };
} // end namespace Sched
} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { SP::O6, 0 };
static const MCPhysReg ImplicitList2[] = { SP::O7, 0 };
static const MCPhysReg ImplicitList3[] = { SP::FCC0, 0 };
static const MCPhysReg ImplicitList4[] = { SP::ICC, 0 };
static const MCPhysReg ImplicitList5[] = { SP::CPSR, 0 };
static const MCPhysReg ImplicitList6[] = { SP::FSR, 0 };
static const MCPhysReg ImplicitList7[] = { SP::Y, SP::ICC, 0 };
static const MCPhysReg ImplicitList8[] = { SP::PSR, 0 };
static const MCPhysReg ImplicitList9[] = { SP::TBR, 0 };
static const MCPhysReg ImplicitList10[] = { SP::WIM, 0 };
static const MCPhysReg ImplicitList11[] = { SP::Y, 0 };
static const MCPhysReg ImplicitList12[] = { SP::Y, SP::ASR18, 0 };
static const MCPhysReg ImplicitList13[] = { SP::CPQ, 0 };
static const MCPhysReg ImplicitList14[] = { SP::FQ, 0 };

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
static const MCOperandInfo OperandInfo46[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo60[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo62[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo82[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo83[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::PRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo128[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo136[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo140[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo141[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo142[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo144[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo145[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo146[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo147[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo148[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo149[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo150[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo151[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo152[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo153[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo154[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo155[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo156[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo157[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo158[] = { { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo159[] = { { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo160[] = { { SP::PRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo161[] = { { SP::PRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc SparcInsts[] = {
  { 0,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #1 = INLINEASM
  { 2,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #2 = INLINEASM_BR
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #3 = CFI_INSTRUCTION
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #4 = EH_LABEL
  { 5,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #5 = GC_LABEL
  { 6,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #6 = ANNOTATION_LABEL
  { 7,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #7 = KILL
  { 8,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4 },  // Inst #8 = EXTRACT_SUBREG
  { 9,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo5 },  // Inst #9 = INSERT_SUBREG
  { 10,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #10 = IMPLICIT_DEF
  { 11,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6 },  // Inst #11 = SUBREG_TO_REG
  { 12,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo4 },  // Inst #12 = COPY_TO_REGCLASS
  { 13,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #13 = DBG_VALUE
  { 14,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #14 = DBG_VALUE_LIST
  { 15,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #15 = DBG_INSTR_REF
  { 16,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #16 = DBG_PHI
  { 17,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #17 = DBG_LABEL
  { 18,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7 },  // Inst #18 = REG_SEQUENCE
  { 19,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7 },  // Inst #19 = COPY
  { 20,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #20 = BUNDLE
  { 21,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #21 = LIFETIME_START
  { 22,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #22 = LIFETIME_END
  { 23,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8 },  // Inst #23 = PSEUDO_PROBE
  { 24,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta), 0x0ULL, nullptr, nullptr, OperandInfo9 },  // Inst #24 = ARITH_FENCE
  { 25,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo10 },  // Inst #25 = STACKMAP
  { 26,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #26 = FENTRY_CALL
  { 27,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11 },  // Inst #27 = PATCHPOINT
  { 28,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo12 },  // Inst #28 = LOAD_STACK_GUARD
  { 29,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #29 = PREALLOCATED_SETUP
  { 30,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13 },  // Inst #30 = PREALLOCATED_ARG
  { 31,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #31 = STATEPOINT
  { 32,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14 },  // Inst #32 = LOCAL_ESCAPE
  { 33,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #33 = FAULTING_OP
  { 34,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #34 = PATCHABLE_OP
  { 35,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #35 = PATCHABLE_FUNCTION_ENTER
  { 36,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #36 = PATCHABLE_RET
  { 37,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #37 = PATCHABLE_FUNCTION_EXIT
  { 38,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #38 = PATCHABLE_TAIL_CALL
  { 39,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #39 = PATCHABLE_EVENT_CALL
  { 40,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #40 = PATCHABLE_TYPED_EVENT_CALL
  { 41,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #41 = ICALL_BRANCH_FUNNEL
  { 42,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #42 = G_ASSERT_SEXT
  { 43,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #43 = G_ASSERT_ZEXT
  { 44,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #44 = G_ASSERT_ALIGN
  { 45,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #45 = G_ADD
  { 46,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #46 = G_SUB
  { 47,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #47 = G_MUL
  { 48,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #48 = G_SDIV
  { 49,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #49 = G_UDIV
  { 50,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #50 = G_SREM
  { 51,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #51 = G_UREM
  { 52,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #52 = G_SDIVREM
  { 53,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #53 = G_UDIVREM
  { 54,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #54 = G_AND
  { 55,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #55 = G_OR
  { 56,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #56 = G_XOR
  { 57,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #57 = G_IMPLICIT_DEF
  { 58,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #58 = G_PHI
  { 59,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #59 = G_FRAME_INDEX
  { 60,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #60 = G_GLOBAL_VALUE
  { 61,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #61 = G_EXTRACT
  { 62,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #62 = G_UNMERGE_VALUES
  { 63,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24 },  // Inst #63 = G_INSERT
  { 64,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #64 = G_MERGE_VALUES
  { 65,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #65 = G_BUILD_VECTOR
  { 66,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #66 = G_BUILD_VECTOR_TRUNC
  { 67,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #67 = G_CONCAT_VECTORS
  { 68,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #68 = G_PTRTOINT
  { 69,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #69 = G_INTTOPTR
  { 70,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #70 = G_BITCAST
  { 71,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #71 = G_FREEZE
  { 72,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #72 = G_INTRINSIC_FPTRUNC_ROUND
  { 73,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #73 = G_INTRINSIC_TRUNC
  { 74,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #74 = G_INTRINSIC_ROUND
  { 75,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #75 = G_INTRINSIC_LRINT
  { 76,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #76 = G_INTRINSIC_ROUNDEVEN
  { 77,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #77 = G_READCYCLECOUNTER
  { 78,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #78 = G_LOAD
  { 79,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #79 = G_SEXTLOAD
  { 80,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #80 = G_ZEXTLOAD
  { 81,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #81 = G_INDEXED_LOAD
  { 82,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #82 = G_INDEXED_SEXTLOAD
  { 83,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #83 = G_INDEXED_ZEXTLOAD
  { 84,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #84 = G_STORE
  { 85,	5,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo28 },  // Inst #85 = G_INDEXED_STORE
  { 86,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo29 },  // Inst #86 = G_ATOMIC_CMPXCHG_WITH_SUCCESS
  { 87,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #87 = G_ATOMIC_CMPXCHG
  { 88,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #88 = G_ATOMICRMW_XCHG
  { 89,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #89 = G_ATOMICRMW_ADD
  { 90,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #90 = G_ATOMICRMW_SUB
  { 91,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #91 = G_ATOMICRMW_AND
  { 92,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #92 = G_ATOMICRMW_NAND
  { 93,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #93 = G_ATOMICRMW_OR
  { 94,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #94 = G_ATOMICRMW_XOR
  { 95,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #95 = G_ATOMICRMW_MAX
  { 96,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #96 = G_ATOMICRMW_MIN
  { 97,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #97 = G_ATOMICRMW_UMAX
  { 98,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #98 = G_ATOMICRMW_UMIN
  { 99,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #99 = G_ATOMICRMW_FADD
  { 100,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #100 = G_ATOMICRMW_FSUB
  { 101,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #101 = G_ATOMICRMW_FMAX
  { 102,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #102 = G_ATOMICRMW_FMIN
  { 103,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo10 },  // Inst #103 = G_FENCE
  { 104,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #104 = G_BRCOND
  { 105,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #105 = G_BRINDIRECT
  { 106,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #106 = G_INTRINSIC
  { 107,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #107 = G_INTRINSIC_W_SIDE_EFFECTS
  { 108,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #108 = G_ANYEXT
  { 109,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #109 = G_TRUNC
  { 110,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #110 = G_CONSTANT
  { 111,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #111 = G_FCONSTANT
  { 112,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #112 = G_VASTART
  { 113,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo32 },  // Inst #113 = G_VAARG
  { 114,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #114 = G_SEXT
  { 115,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #115 = G_SEXT_INREG
  { 116,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #116 = G_ZEXT
  { 117,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #117 = G_SHL
  { 118,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #118 = G_LSHR
  { 119,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #119 = G_ASHR
  { 120,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #120 = G_FSHL
  { 121,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #121 = G_FSHR
  { 122,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #122 = G_ROTR
  { 123,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #123 = G_ROTL
  { 124,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo35 },  // Inst #124 = G_ICMP
  { 125,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo35 },  // Inst #125 = G_FCMP
  { 126,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #126 = G_SELECT
  { 127,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #127 = G_UADDO
  { 128,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo36 },  // Inst #128 = G_UADDE
  { 129,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #129 = G_USUBO
  { 130,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo36 },  // Inst #130 = G_USUBE
  { 131,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #131 = G_SADDO
  { 132,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo36 },  // Inst #132 = G_SADDE
  { 133,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #133 = G_SSUBO
  { 134,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo36 },  // Inst #134 = G_SSUBE
  { 135,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #135 = G_UMULO
  { 136,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #136 = G_SMULO
  { 137,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #137 = G_UMULH
  { 138,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #138 = G_SMULH
  { 139,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #139 = G_UADDSAT
  { 140,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #140 = G_SADDSAT
  { 141,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #141 = G_USUBSAT
  { 142,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #142 = G_SSUBSAT
  { 143,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #143 = G_USHLSAT
  { 144,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #144 = G_SSHLSAT
  { 145,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo37 },  // Inst #145 = G_SMULFIX
  { 146,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo37 },  // Inst #146 = G_UMULFIX
  { 147,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo37 },  // Inst #147 = G_SMULFIXSAT
  { 148,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo37 },  // Inst #148 = G_UMULFIXSAT
  { 149,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo37 },  // Inst #149 = G_SDIVFIX
  { 150,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo37 },  // Inst #150 = G_UDIVFIX
  { 151,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo37 },  // Inst #151 = G_SDIVFIXSAT
  { 152,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo37 },  // Inst #152 = G_UDIVFIXSAT
  { 153,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #153 = G_FADD
  { 154,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #154 = G_FSUB
  { 155,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #155 = G_FMUL
  { 156,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #156 = G_FMA
  { 157,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #157 = G_FMAD
  { 158,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #158 = G_FDIV
  { 159,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #159 = G_FREM
  { 160,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #160 = G_FPOW
  { 161,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #161 = G_FPOWI
  { 162,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #162 = G_FEXP
  { 163,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #163 = G_FEXP2
  { 164,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #164 = G_FLOG
  { 165,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #165 = G_FLOG2
  { 166,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #166 = G_FLOG10
  { 167,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #167 = G_FNEG
  { 168,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #168 = G_FPEXT
  { 169,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #169 = G_FPTRUNC
  { 170,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #170 = G_FPTOSI
  { 171,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #171 = G_FPTOUI
  { 172,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #172 = G_SITOFP
  { 173,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #173 = G_UITOFP
  { 174,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #174 = G_FABS
  { 175,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #175 = G_FCOPYSIGN
  { 176,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo38 },  // Inst #176 = G_IS_FPCLASS
  { 177,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #177 = G_FCANONICALIZE
  { 178,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #178 = G_FMINNUM
  { 179,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #179 = G_FMAXNUM
  { 180,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #180 = G_FMINNUM_IEEE
  { 181,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #181 = G_FMAXNUM_IEEE
  { 182,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #182 = G_FMINIMUM
  { 183,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #183 = G_FMAXIMUM
  { 184,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #184 = G_PTR_ADD
  { 185,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #185 = G_PTRMASK
  { 186,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #186 = G_SMIN
  { 187,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #187 = G_SMAX
  { 188,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #188 = G_UMIN
  { 189,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #189 = G_UMAX
  { 190,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #190 = G_ABS
  { 191,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #191 = G_LROUND
  { 192,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #192 = G_LLROUND
  { 193,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #193 = G_BR
  { 194,	3,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo39 },  // Inst #194 = G_BRJT
  { 195,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo40 },  // Inst #195 = G_INSERT_VECTOR_ELT
  { 196,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo41 },  // Inst #196 = G_EXTRACT_VECTOR_ELT
  { 197,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #197 = G_SHUFFLE_VECTOR
  { 198,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #198 = G_CTTZ
  { 199,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #199 = G_CTTZ_ZERO_UNDEF
  { 200,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #200 = G_CTLZ
  { 201,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #201 = G_CTLZ_ZERO_UNDEF
  { 202,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #202 = G_CTPOP
  { 203,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #203 = G_BSWAP
  { 204,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #204 = G_BITREVERSE
  { 205,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #205 = G_FCEIL
  { 206,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #206 = G_FCOS
  { 207,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #207 = G_FSIN
  { 208,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #208 = G_FSQRT
  { 209,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #209 = G_FFLOOR
  { 210,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #210 = G_FRINT
  { 211,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #211 = G_FNEARBYINT
  { 212,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #212 = G_ADDRSPACE_CAST
  { 213,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #213 = G_BLOCK_ADDR
  { 214,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #214 = G_JUMP_TABLE
  { 215,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #215 = G_DYN_STACKALLOC
  { 216,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #216 = G_STRICT_FADD
  { 217,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #217 = G_STRICT_FSUB
  { 218,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #218 = G_STRICT_FMUL
  { 219,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #219 = G_STRICT_FDIV
  { 220,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #220 = G_STRICT_FREM
  { 221,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #221 = G_STRICT_FMA
  { 222,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #222 = G_STRICT_FSQRT
  { 223,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #223 = G_READ_REGISTER
  { 224,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #224 = G_WRITE_REGISTER
  { 225,	4,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #225 = G_MEMCPY
  { 226,	3,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo41 },  // Inst #226 = G_MEMCPY_INLINE
  { 227,	4,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #227 = G_MEMMOVE
  { 228,	4,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #228 = G_MEMSET
  { 229,	3,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #229 = G_BZERO
  { 230,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo41 },  // Inst #230 = G_VECREDUCE_SEQ_FADD
  { 231,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo41 },  // Inst #231 = G_VECREDUCE_SEQ_FMUL
  { 232,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #232 = G_VECREDUCE_FADD
  { 233,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #233 = G_VECREDUCE_FMUL
  { 234,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #234 = G_VECREDUCE_FMAX
  { 235,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #235 = G_VECREDUCE_FMIN
  { 236,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #236 = G_VECREDUCE_ADD
  { 237,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #237 = G_VECREDUCE_MUL
  { 238,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #238 = G_VECREDUCE_AND
  { 239,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #239 = G_VECREDUCE_OR
  { 240,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #240 = G_VECREDUCE_XOR
  { 241,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #241 = G_VECREDUCE_SMAX
  { 242,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #242 = G_VECREDUCE_SMIN
  { 243,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #243 = G_VECREDUCE_UMAX
  { 244,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #244 = G_VECREDUCE_UMIN
  { 245,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #245 = G_SBFX
  { 246,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #246 = G_UBFX
  { 247,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo10 },  // Inst #247 = ADJCALLSTACKDOWN
  { 248,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo10 },  // Inst #248 = ADJCALLSTACKUP
  { 249,	1,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList2, OperandInfo2 },  // Inst #249 = GETPCX
  { 250,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo46 },  // Inst #250 = SELECT_CC_DFP_FCC
  { 251,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo46 },  // Inst #251 = SELECT_CC_DFP_ICC
  { 252,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo46 },  // Inst #252 = SELECT_CC_DFP_XCC
  { 253,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo47 },  // Inst #253 = SELECT_CC_FP_FCC
  { 254,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo47 },  // Inst #254 = SELECT_CC_FP_ICC
  { 255,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo47 },  // Inst #255 = SELECT_CC_FP_XCC
  { 256,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo48 },  // Inst #256 = SELECT_CC_Int_FCC
  { 257,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo48 },  // Inst #257 = SELECT_CC_Int_ICC
  { 258,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo48 },  // Inst #258 = SELECT_CC_Int_XCC
  { 259,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo49 },  // Inst #259 = SELECT_CC_QFP_FCC
  { 260,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo49 },  // Inst #260 = SELECT_CC_QFP_ICC
  { 261,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo49 },  // Inst #261 = SELECT_CC_QFP_XCC
  { 262,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #262 = SET
  { 263,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo51 },  // Inst #263 = ADDCCri
  { 264,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo52 },  // Inst #264 = ADDCCrr
  { 265,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo51 },  // Inst #265 = ADDCri
  { 266,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo52 },  // Inst #266 = ADDCrr
  { 267,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo51 },  // Inst #267 = ADDEri
  { 268,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo52 },  // Inst #268 = ADDErr
  { 269,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo53 },  // Inst #269 = ADDXC
  { 270,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo53 },  // Inst #270 = ADDXCCC
  { 271,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #271 = ADDXri
  { 272,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #272 = ADDXrr
  { 273,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #273 = ADDri
  { 274,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #274 = ADDrr
  { 275,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #275 = ALIGNADDR
  { 276,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #276 = ALIGNADDRL
  { 277,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo51 },  // Inst #277 = ANDCCri
  { 278,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo52 },  // Inst #278 = ANDCCrr
  { 279,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo51 },  // Inst #279 = ANDNCCri
  { 280,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo52 },  // Inst #280 = ANDNCCrr
  { 281,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #281 = ANDNri
  { 282,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #282 = ANDNrr
  { 283,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #283 = ANDXNrr
  { 284,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #284 = ANDXri
  { 285,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #285 = ANDXrr
  { 286,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #286 = ANDri
  { 287,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #287 = ANDrr
  { 288,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #288 = ARRAY16
  { 289,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #289 = ARRAY32
  { 290,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #290 = ARRAY8
  { 291,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #291 = BA
  { 292,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #292 = BCOND
  { 293,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #293 = BCONDA
  { 294,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #294 = BINDri
  { 295,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #295 = BINDrr
  { 296,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #296 = BMASK
  { 297,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #297 = BPFCC
  { 298,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #298 = BPFCCA
  { 299,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #299 = BPFCCANT
  { 300,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #300 = BPFCCNT
  { 301,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #301 = BPGEZapn
  { 302,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #302 = BPGEZapt
  { 303,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #303 = BPGEZnapn
  { 304,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #304 = BPGEZnapt
  { 305,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #305 = BPGZapn
  { 306,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #306 = BPGZapt
  { 307,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #307 = BPGZnapn
  { 308,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #308 = BPGZnapt
  { 309,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #309 = BPICC
  { 310,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #310 = BPICCA
  { 311,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #311 = BPICCANT
  { 312,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #312 = BPICCNT
  { 313,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #313 = BPLEZapn
  { 314,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #314 = BPLEZapt
  { 315,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #315 = BPLEZnapn
  { 316,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #316 = BPLEZnapt
  { 317,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #317 = BPLZapn
  { 318,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #318 = BPLZapt
  { 319,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #319 = BPLZnapn
  { 320,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #320 = BPLZnapt
  { 321,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #321 = BPNZapn
  { 322,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #322 = BPNZapt
  { 323,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #323 = BPNZnapn
  { 324,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #324 = BPNZnapt
  { 325,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #325 = BPXCC
  { 326,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #326 = BPXCCA
  { 327,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #327 = BPXCCANT
  { 328,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #328 = BPXCCNT
  { 329,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #329 = BPZapn
  { 330,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #330 = BPZapt
  { 331,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #331 = BPZnapn
  { 332,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #332 = BPZnapt
  { 333,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #333 = BSHUFFLE
  { 334,	1,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList1, nullptr, OperandInfo2 },  // Inst #334 = CALL
  { 335,	2,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList1, nullptr, OperandInfo15 },  // Inst #335 = CALLri
  { 336,	2,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList1, nullptr, OperandInfo55 },  // Inst #336 = CALLrr
  { 337,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #337 = CASAasi10
  { 338,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60 },  // Inst #338 = CASArr
  { 339,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo61 },  // Inst #339 = CASXrr
  { 340,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #340 = CASrr
  { 341,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo7 },  // Inst #341 = CBCOND
  { 342,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo7 },  // Inst #342 = CBCONDA
  { 343,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #343 = CMASK16
  { 344,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #344 = CMASK32
  { 345,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #345 = CMASK8
  { 346,	2,	0,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo63 },  // Inst #346 = CMPri
  { 347,	2,	0,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo64 },  // Inst #347 = CMPrr
  { 348,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #348 = EDGE16
  { 349,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #349 = EDGE16L
  { 350,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #350 = EDGE16LN
  { 351,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #351 = EDGE16N
  { 352,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #352 = EDGE32
  { 353,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #353 = EDGE32L
  { 354,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #354 = EDGE32LN
  { 355,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #355 = EDGE32N
  { 356,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #356 = EDGE8
  { 357,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #357 = EDGE8L
  { 358,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #358 = EDGE8LN
  { 359,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #359 = EDGE8N
  { 360,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #360 = FABSD
  { 361,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #361 = FABSQ
  { 362,	2,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #362 = FABSS
  { 363,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #363 = FADDD
  { 364,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #364 = FADDQ
  { 365,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #365 = FADDS
  { 366,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #366 = FALIGNADATA
  { 367,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #367 = FAND
  { 368,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #368 = FANDNOT1
  { 369,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #369 = FANDNOT1S
  { 370,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #370 = FANDNOT2
  { 371,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #371 = FANDNOT2S
  { 372,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #372 = FANDS
  { 373,	2,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList3, nullptr, OperandInfo7 },  // Inst #373 = FBCOND
  { 374,	2,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo7 },  // Inst #374 = FBCONDA
  { 375,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #375 = FCHKSM16
  { 376,	2,	0,	4,	5,	0, 0x0ULL, nullptr, ImplicitList3, OperandInfo65 },  // Inst #376 = FCMPD
  { 377,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #377 = FCMPEQ16
  { 378,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #378 = FCMPEQ32
  { 379,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #379 = FCMPGT16
  { 380,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #380 = FCMPGT32
  { 381,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #381 = FCMPLE16
  { 382,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #382 = FCMPLE32
  { 383,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #383 = FCMPNE16
  { 384,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #384 = FCMPNE32
  { 385,	2,	0,	4,	0,	0, 0x0ULL, nullptr, ImplicitList3, OperandInfo66 },  // Inst #385 = FCMPQ
  { 386,	2,	0,	4,	5,	0, 0x0ULL, nullptr, ImplicitList3, OperandInfo67 },  // Inst #386 = FCMPS
  { 387,	3,	1,	4,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #387 = FDIVD
  { 388,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #388 = FDIVQ
  { 389,	3,	1,	4,	7,	0, 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #389 = FDIVS
  { 390,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #390 = FDMULQ
  { 391,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo72 },  // Inst #391 = FDTOI
  { 392,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo73 },  // Inst #392 = FDTOQ
  { 393,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo72 },  // Inst #393 = FDTOS
  { 394,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #394 = FDTOX
  { 395,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #395 = FEXPAND
  { 396,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #396 = FHADDD
  { 397,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #397 = FHADDS
  { 398,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #398 = FHSUBD
  { 399,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #399 = FHSUBS
  { 400,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo74 },  // Inst #400 = FITOD
  { 401,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo75 },  // Inst #401 = FITOQ
  { 402,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #402 = FITOS
  { 403,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #403 = FLCMPD
  { 404,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #404 = FLCMPS
  { 405,	0,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #405 = FLUSH
  { 406,	0,	0,	4,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #406 = FLUSHW
  { 407,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #407 = FLUSHri
  { 408,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #408 = FLUSHrr
  { 409,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #409 = FMEAN16
  { 410,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #410 = FMOVD
  { 411,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo77 },  // Inst #411 = FMOVD_FCC
  { 412,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo77 },  // Inst #412 = FMOVD_ICC
  { 413,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo77 },  // Inst #413 = FMOVD_XCC
  { 414,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #414 = FMOVQ
  { 415,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo78 },  // Inst #415 = FMOVQ_FCC
  { 416,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo78 },  // Inst #416 = FMOVQ_ICC
  { 417,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo78 },  // Inst #417 = FMOVQ_XCC
  { 418,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #418 = FMOVRGEZD
  { 419,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #419 = FMOVRGEZQ
  { 420,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #420 = FMOVRGEZS
  { 421,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #421 = FMOVRGZD
  { 422,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #422 = FMOVRGZQ
  { 423,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #423 = FMOVRGZS
  { 424,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #424 = FMOVRLEZD
  { 425,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #425 = FMOVRLEZQ
  { 426,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #426 = FMOVRLEZS
  { 427,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #427 = FMOVRLZD
  { 428,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #428 = FMOVRLZQ
  { 429,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #429 = FMOVRLZS
  { 430,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #430 = FMOVRNZD
  { 431,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #431 = FMOVRNZQ
  { 432,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #432 = FMOVRNZS
  { 433,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #433 = FMOVRZD
  { 434,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #434 = FMOVRZQ
  { 435,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #435 = FMOVRZS
  { 436,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #436 = FMOVS
  { 437,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo80 },  // Inst #437 = FMOVS_FCC
  { 438,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo80 },  // Inst #438 = FMOVS_ICC
  { 439,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo80 },  // Inst #439 = FMOVS_XCC
  { 440,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #440 = FMUL8SUX16
  { 441,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #441 = FMUL8ULX16
  { 442,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #442 = FMUL8X16
  { 443,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #443 = FMUL8X16AL
  { 444,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #444 = FMUL8X16AU
  { 445,	3,	1,	4,	8,	0, 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #445 = FMULD
  { 446,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #446 = FMULD8SUX16
  { 447,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #447 = FMULD8ULX16
  { 448,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #448 = FMULQ
  { 449,	3,	1,	4,	9,	0, 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #449 = FMULS
  { 450,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #450 = FNADDD
  { 451,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #451 = FNADDS
  { 452,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #452 = FNAND
  { 453,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #453 = FNANDS
  { 454,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #454 = FNEGD
  { 455,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #455 = FNEGQ
  { 456,	2,	1,	4,	10,	0, 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #456 = FNEGS
  { 457,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #457 = FNHADDD
  { 458,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #458 = FNHADDS
  { 459,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #459 = FNMULD
  { 460,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #460 = FNMULS
  { 461,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #461 = FNOR
  { 462,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #462 = FNORS
  { 463,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #463 = FNOT1
  { 464,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #464 = FNOT1S
  { 465,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #465 = FNOT2
  { 466,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #466 = FNOT2S
  { 467,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #467 = FNSMULD
  { 468,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo81 },  // Inst #468 = FONE
  { 469,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo82 },  // Inst #469 = FONES
  { 470,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #470 = FOR
  { 471,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #471 = FORNOT1
  { 472,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #472 = FORNOT1S
  { 473,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #473 = FORNOT2
  { 474,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #474 = FORNOT2S
  { 475,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #475 = FORS
  { 476,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #476 = FPACK16
  { 477,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #477 = FPACK32
  { 478,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #478 = FPACKFIX
  { 479,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #479 = FPADD16
  { 480,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #480 = FPADD16S
  { 481,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #481 = FPADD32
  { 482,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #482 = FPADD32S
  { 483,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #483 = FPADD64
  { 484,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #484 = FPMERGE
  { 485,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #485 = FPSUB16
  { 486,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #486 = FPSUB16S
  { 487,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #487 = FPSUB32
  { 488,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #488 = FPSUB32S
  { 489,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo83 },  // Inst #489 = FQTOD
  { 490,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo84 },  // Inst #490 = FQTOI
  { 491,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo84 },  // Inst #491 = FQTOS
  { 492,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo83 },  // Inst #492 = FQTOX
  { 493,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #493 = FSLAS16
  { 494,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #494 = FSLAS32
  { 495,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #495 = FSLL16
  { 496,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #496 = FSLL32
  { 497,	3,	1,	4,	8,	0, 0x0ULL, nullptr, nullptr, OperandInfo85 },  // Inst #497 = FSMULD
  { 498,	2,	1,	4,	11,	0, 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #498 = FSQRTD
  { 499,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #499 = FSQRTQ
  { 500,	2,	1,	4,	12,	0, 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #500 = FSQRTS
  { 501,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #501 = FSRA16
  { 502,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #502 = FSRA32
  { 503,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #503 = FSRC1
  { 504,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #504 = FSRC1S
  { 505,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #505 = FSRC2
  { 506,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #506 = FSRC2S
  { 507,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #507 = FSRL16
  { 508,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #508 = FSRL32
  { 509,	2,	1,	4,	13,	0, 0x0ULL, nullptr, nullptr, OperandInfo74 },  // Inst #509 = FSTOD
  { 510,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #510 = FSTOI
  { 511,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo75 },  // Inst #511 = FSTOQ
  { 512,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo74 },  // Inst #512 = FSTOX
  { 513,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #513 = FSUBD
  { 514,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #514 = FSUBQ
  { 515,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #515 = FSUBS
  { 516,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #516 = FXNOR
  { 517,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #517 = FXNORS
  { 518,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #518 = FXOR
  { 519,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #519 = FXORS
  { 520,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #520 = FXTOD
  { 521,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo73 },  // Inst #521 = FXTOQ
  { 522,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo72 },  // Inst #522 = FXTOS
  { 523,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo81 },  // Inst #523 = FZERO
  { 524,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo82 },  // Inst #524 = FZEROS
  { 525,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo86 },  // Inst #525 = GDOP_LDXrr
  { 526,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo87 },  // Inst #526 = GDOP_LDrr
  { 527,	3,	1,	4,	3,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo88 },  // Inst #527 = JMPLri
  { 528,	3,	1,	4,	3,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo89 },  // Inst #528 = JMPLrr
  { 529,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo90 },  // Inst #529 = LDArr
  { 530,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo15 },  // Inst #530 = LDCSRri
  { 531,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo55 },  // Inst #531 = LDCSRrr
  { 532,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo91 },  // Inst #532 = LDCri
  { 533,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo92 },  // Inst #533 = LDCrr
  { 534,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo93 },  // Inst #534 = LDDArr
  { 535,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo94 },  // Inst #535 = LDDCri
  { 536,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo95 },  // Inst #536 = LDDCrr
  { 537,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo96 },  // Inst #537 = LDDFArr
  { 538,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo97 },  // Inst #538 = LDDFri
  { 539,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo98 },  // Inst #539 = LDDFrr
  { 540,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo99 },  // Inst #540 = LDDri
  { 541,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo100 },  // Inst #541 = LDDrr
  { 542,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo101 },  // Inst #542 = LDFArr
  { 543,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo15 },  // Inst #543 = LDFSRri
  { 544,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo55 },  // Inst #544 = LDFSRrr
  { 545,	3,	1,	4,	15,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo102 },  // Inst #545 = LDFri
  { 546,	3,	1,	4,	15,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo103 },  // Inst #546 = LDFrr
  { 547,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo104 },  // Inst #547 = LDQFArr
  { 548,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo105 },  // Inst #548 = LDQFri
  { 549,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo106 },  // Inst #549 = LDQFrr
  { 550,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo90 },  // Inst #550 = LDSBArr
  { 551,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo88 },  // Inst #551 = LDSBri
  { 552,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo89 },  // Inst #552 = LDSBrr
  { 553,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo90 },  // Inst #553 = LDSHArr
  { 554,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo88 },  // Inst #554 = LDSHri
  { 555,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo89 },  // Inst #555 = LDSHrr
  { 556,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo90 },  // Inst #556 = LDSTUBArr
  { 557,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo88 },  // Inst #557 = LDSTUBri
  { 558,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo89 },  // Inst #558 = LDSTUBrr
  { 559,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo107 },  // Inst #559 = LDSWri
  { 560,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo108 },  // Inst #560 = LDSWrr
  { 561,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo90 },  // Inst #561 = LDUBArr
  { 562,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo88 },  // Inst #562 = LDUBri
  { 563,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo89 },  // Inst #563 = LDUBrr
  { 564,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo90 },  // Inst #564 = LDUHArr
  { 565,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo88 },  // Inst #565 = LDUHri
  { 566,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo89 },  // Inst #566 = LDUHrr
  { 567,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo15 },  // Inst #567 = LDXFSRri
  { 568,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo55 },  // Inst #568 = LDXFSRrr
  { 569,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo107 },  // Inst #569 = LDXri
  { 570,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo108 },  // Inst #570 = LDXrr
  { 571,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo88 },  // Inst #571 = LDri
  { 572,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo89 },  // Inst #572 = LDrr
  { 573,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo107 },  // Inst #573 = LEAX_ADDri
  { 574,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo88 },  // Inst #574 = LEA_ADDri
  { 575,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo109 },  // Inst #575 = LZCNT
  { 576,	1,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #576 = MEMBARi
  { 577,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo110 },  // Inst #577 = MOVDTOX
  { 578,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo111 },  // Inst #578 = MOVFCCri
  { 579,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo112 },  // Inst #579 = MOVFCCrr
  { 580,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo111 },  // Inst #580 = MOVICCri
  { 581,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo112 },  // Inst #581 = MOVICCrr
  { 582,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #582 = MOVRGEZri
  { 583,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo113 },  // Inst #583 = MOVRGEZrr
  { 584,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #584 = MOVRGZri
  { 585,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo113 },  // Inst #585 = MOVRGZrr
  { 586,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #586 = MOVRLEZri
  { 587,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo113 },  // Inst #587 = MOVRLEZrr
  { 588,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #588 = MOVRLZri
  { 589,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo113 },  // Inst #589 = MOVRLZrr
  { 590,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #590 = MOVRNZri
  { 591,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo113 },  // Inst #591 = MOVRNZrr
  { 592,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #592 = MOVRRZri
  { 593,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo113 },  // Inst #593 = MOVRRZrr
  { 594,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo110 },  // Inst #594 = MOVSTOSW
  { 595,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo110 },  // Inst #595 = MOVSTOUW
  { 596,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo114 },  // Inst #596 = MOVWTOS
  { 597,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo111 },  // Inst #597 = MOVXCCri
  { 598,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo112 },  // Inst #598 = MOVXCCrr
  { 599,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo114 },  // Inst #599 = MOVXTOD
  { 600,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList7, OperandInfo51 },  // Inst #600 = MULSCCri
  { 601,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList7, OperandInfo52 },  // Inst #601 = MULSCCrr
  { 602,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo115 },  // Inst #602 = MULXri
  { 603,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #603 = MULXrr
  { 604,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #604 = NOP
  { 605,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo51 },  // Inst #605 = ORCCri
  { 606,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo52 },  // Inst #606 = ORCCrr
  { 607,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo51 },  // Inst #607 = ORNCCri
  { 608,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo52 },  // Inst #608 = ORNCCrr
  { 609,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #609 = ORNri
  { 610,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #610 = ORNrr
  { 611,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #611 = ORXNrr
  { 612,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #612 = ORXri
  { 613,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #613 = ORXrr
  { 614,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #614 = ORri
  { 615,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #615 = ORrr
  { 616,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #616 = PDIST
  { 617,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #617 = PDISTN
  { 618,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #618 = POPCrr
  { 619,	3,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo116 },  // Inst #619 = PREFETCHi
  { 620,	3,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo117 },  // Inst #620 = PREFETCHr
  { 621,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo63 },  // Inst #621 = PWRPSRri
  { 622,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo64 },  // Inst #622 = PWRPSRrr
  { 623,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo118 },  // Inst #623 = RDASR
  { 624,	1,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo119 },  // Inst #624 = RDPC
  { 625,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo120 },  // Inst #625 = RDPR
  { 626,	1,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList8, nullptr, OperandInfo119 },  // Inst #626 = RDPSR
  { 627,	1,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList9, nullptr, OperandInfo119 },  // Inst #627 = RDTBR
  { 628,	1,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList10, nullptr, OperandInfo119 },  // Inst #628 = RDWIM
  { 629,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #629 = RESTOREri
  { 630,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #630 = RESTORErr
  { 631,	1,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #631 = RET
  { 632,	1,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #632 = RETL
  { 633,	2,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #633 = RETTri
  { 634,	2,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #634 = RETTrr
  { 635,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #635 = SAVEri
  { 636,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #636 = SAVErr
  { 637,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList7, OperandInfo51 },  // Inst #637 = SDIVCCri
  { 638,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList7, OperandInfo52 },  // Inst #638 = SDIVCCrr
  { 639,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo115 },  // Inst #639 = SDIVXri
  { 640,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #640 = SDIVXrr
  { 641,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo51 },  // Inst #641 = SDIVri
  { 642,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo52 },  // Inst #642 = SDIVrr
  { 643,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #643 = SETHIXi
  { 644,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #644 = SETHIi
  { 645,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #645 = SHUTDOWN
  { 646,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #646 = SIAM
  { 647,	1,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #647 = SIR
  { 648,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo121 },  // Inst #648 = SLLXri
  { 649,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo113 },  // Inst #649 = SLLXrr
  { 650,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #650 = SLLri
  { 651,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #651 = SLLrr
  { 652,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo122 },  // Inst #652 = SMACri
  { 653,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo123 },  // Inst #653 = SMACrr
  { 654,	3,	1,	4,	18,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo51 },  // Inst #654 = SMULCCri
  { 655,	3,	1,	4,	18,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo52 },  // Inst #655 = SMULCCrr
  { 656,	3,	1,	4,	18,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo51 },  // Inst #656 = SMULri
  { 657,	3,	1,	4,	18,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo52 },  // Inst #657 = SMULrr
  { 658,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo121 },  // Inst #658 = SRAXri
  { 659,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo113 },  // Inst #659 = SRAXrr
  { 660,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #660 = SRAri
  { 661,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #661 = SRArr
  { 662,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo121 },  // Inst #662 = SRLXri
  { 663,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo113 },  // Inst #663 = SRLXrr
  { 664,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #664 = SRLri
  { 665,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #665 = SRLrr
  { 666,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo124 },  // Inst #666 = STArr
  { 667,	0,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #667 = STBAR
  { 668,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo124 },  // Inst #668 = STBArr
  { 669,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo125 },  // Inst #669 = STBri
  { 670,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo126 },  // Inst #670 = STBrr
  { 671,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo15 },  // Inst #671 = STCSRri
  { 672,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo55 },  // Inst #672 = STCSRrr
  { 673,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo127 },  // Inst #673 = STCri
  { 674,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo128 },  // Inst #674 = STCrr
  { 675,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo129 },  // Inst #675 = STDArr
  { 676,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList13, OperandInfo15 },  // Inst #676 = STDCQri
  { 677,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList13, OperandInfo55 },  // Inst #677 = STDCQrr
  { 678,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo130 },  // Inst #678 = STDCri
  { 679,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo131 },  // Inst #679 = STDCrr
  { 680,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo132 },  // Inst #680 = STDFArr
  { 681,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList14, OperandInfo15 },  // Inst #681 = STDFQri
  { 682,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList14, OperandInfo55 },  // Inst #682 = STDFQrr
  { 683,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo133 },  // Inst #683 = STDFri
  { 684,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo134 },  // Inst #684 = STDFrr
  { 685,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo135 },  // Inst #685 = STDri
  { 686,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo136 },  // Inst #686 = STDrr
  { 687,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo137 },  // Inst #687 = STFArr
  { 688,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo15 },  // Inst #688 = STFSRri
  { 689,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo55 },  // Inst #689 = STFSRrr
  { 690,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo138 },  // Inst #690 = STFri
  { 691,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo139 },  // Inst #691 = STFrr
  { 692,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo124 },  // Inst #692 = STHArr
  { 693,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo125 },  // Inst #693 = STHri
  { 694,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo126 },  // Inst #694 = STHrr
  { 695,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo140 },  // Inst #695 = STQFArr
  { 696,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo141 },  // Inst #696 = STQFri
  { 697,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo142 },  // Inst #697 = STQFrr
  { 698,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo15 },  // Inst #698 = STXFSRri
  { 699,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo55 },  // Inst #699 = STXFSRrr
  { 700,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo143 },  // Inst #700 = STXri
  { 701,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo144 },  // Inst #701 = STXrr
  { 702,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo125 },  // Inst #702 = STri
  { 703,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo126 },  // Inst #703 = STrr
  { 704,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo51 },  // Inst #704 = SUBCCri
  { 705,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo52 },  // Inst #705 = SUBCCrr
  { 706,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo51 },  // Inst #706 = SUBCri
  { 707,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo52 },  // Inst #707 = SUBCrr
  { 708,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo51 },  // Inst #708 = SUBEri
  { 709,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo52 },  // Inst #709 = SUBErr
  { 710,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #710 = SUBXri
  { 711,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #711 = SUBXrr
  { 712,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #712 = SUBri
  { 713,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #713 = SUBrr
  { 714,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo145 },  // Inst #714 = SWAPArr
  { 715,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo146 },  // Inst #715 = SWAPri
  { 716,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo147 },  // Inst #716 = SWAPrr
  { 717,	0,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #717 = TA1
  { 718,	0,	0,	4,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #718 = TA3
  { 719,	0,	0,	4,	1,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #719 = TA5
  { 720,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo51 },  // Inst #720 = TADDCCTVri
  { 721,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo52 },  // Inst #721 = TADDCCTVrr
  { 722,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo51 },  // Inst #722 = TADDCCri
  { 723,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo52 },  // Inst #723 = TADDCCrr
  { 724,	1,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #724 = TAIL_CALL
  { 725,	2,	0,	4,	1,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #725 = TAIL_CALLri
  { 726,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo148 },  // Inst #726 = TICCri
  { 727,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo51 },  // Inst #727 = TICCrr
  { 728,	4,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo149 },  // Inst #728 = TLS_ADDXrr
  { 729,	4,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo150 },  // Inst #729 = TLS_ADDrr
  { 730,	2,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList1, nullptr, OperandInfo7 },  // Inst #730 = TLS_CALL
  { 731,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo87 },  // Inst #731 = TLS_LDXrr
  { 732,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo87 },  // Inst #732 = TLS_LDrr
  { 733,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo148 },  // Inst #733 = TRAPri
  { 734,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo51 },  // Inst #734 = TRAPrr
  { 735,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo51 },  // Inst #735 = TSUBCCTVri
  { 736,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo52 },  // Inst #736 = TSUBCCTVrr
  { 737,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo51 },  // Inst #737 = TSUBCCri
  { 738,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo52 },  // Inst #738 = TSUBCCrr
  { 739,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo148 },  // Inst #739 = TXCCri
  { 740,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo51 },  // Inst #740 = TXCCrr
  { 741,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList7, OperandInfo51 },  // Inst #741 = UDIVCCri
  { 742,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList7, OperandInfo52 },  // Inst #742 = UDIVCCrr
  { 743,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo115 },  // Inst #743 = UDIVXri
  { 744,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #744 = UDIVXrr
  { 745,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo51 },  // Inst #745 = UDIVri
  { 746,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo52 },  // Inst #746 = UDIVrr
  { 747,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo122 },  // Inst #747 = UMACri
  { 748,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo123 },  // Inst #748 = UMACrr
  { 749,	3,	1,	4,	21,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo51 },  // Inst #749 = UMULCCri
  { 750,	3,	1,	4,	21,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo52 },  // Inst #750 = UMULCCrr
  { 751,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #751 = UMULXHI
  { 752,	3,	1,	4,	21,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo51 },  // Inst #752 = UMULri
  { 753,	3,	1,	4,	21,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo52 },  // Inst #753 = UMULrr
  { 754,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #754 = UNIMP
  { 755,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #755 = V9FCMPD
  { 756,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #756 = V9FCMPED
  { 757,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo151 },  // Inst #757 = V9FCMPEQ
  { 758,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo152 },  // Inst #758 = V9FCMPES
  { 759,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo151 },  // Inst #759 = V9FCMPQ
  { 760,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo152 },  // Inst #760 = V9FCMPS
  { 761,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo153 },  // Inst #761 = V9FMOVD_FCC
  { 762,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo154 },  // Inst #762 = V9FMOVQ_FCC
  { 763,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo155 },  // Inst #763 = V9FMOVS_FCC
  { 764,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo156 },  // Inst #764 = V9MOVFCCri
  { 765,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo157 },  // Inst #765 = V9MOVFCCrr
  { 766,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo158 },  // Inst #766 = WRASRri
  { 767,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo159 },  // Inst #767 = WRASRrr
  { 768,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo160 },  // Inst #768 = WRPRri
  { 769,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo161 },  // Inst #769 = WRPRrr
  { 770,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo63 },  // Inst #770 = WRPSRri
  { 771,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo64 },  // Inst #771 = WRPSRrr
  { 772,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList9, OperandInfo63 },  // Inst #772 = WRTBRri
  { 773,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList9, OperandInfo64 },  // Inst #773 = WRTBRrr
  { 774,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList10, OperandInfo63 },  // Inst #774 = WRWIMri
  { 775,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList10, OperandInfo64 },  // Inst #775 = WRWIMrr
  { 776,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #776 = XMULX
  { 777,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #777 = XMULXHI
  { 778,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo51 },  // Inst #778 = XNORCCri
  { 779,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo52 },  // Inst #779 = XNORCCrr
  { 780,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #780 = XNORXrr
  { 781,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #781 = XNORri
  { 782,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #782 = XNORrr
  { 783,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo51 },  // Inst #783 = XORCCri
  { 784,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo52 },  // Inst #784 = XORCCrr
  { 785,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #785 = XORXri
  { 786,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #786 = XORXrr
  { 787,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #787 = XORri
  { 788,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #788 = XORrr
};

extern const char SparcInstrNameData[] = {
  /* 0 */ 'G', '_', 'F', 'L', 'O', 'G', '1', '0', 0,
  /* 9 */ 'C', 'A', 'S', 'A', 'a', 's', 'i', '1', '0', 0,
  /* 19 */ 'T', 'A', '1', 0,
  /* 23 */ 'F', 'S', 'R', 'C', '1', 0,
  /* 29 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '1', 0,
  /* 38 */ 'F', 'N', 'O', 'T', '1', 0,
  /* 44 */ 'F', 'O', 'R', 'N', 'O', 'T', '1', 0,
  /* 52 */ 'F', 'S', 'R', 'A', '3', '2', 0,
  /* 59 */ 'F', 'P', 'S', 'U', 'B', '3', '2', 0,
  /* 67 */ 'F', 'P', 'A', 'D', 'D', '3', '2', 0,
  /* 75 */ 'E', 'D', 'G', 'E', '3', '2', 0,
  /* 82 */ 'F', 'C', 'M', 'P', 'L', 'E', '3', '2', 0,
  /* 91 */ 'F', 'C', 'M', 'P', 'N', 'E', '3', '2', 0,
  /* 100 */ 'F', 'P', 'A', 'C', 'K', '3', '2', 0,
  /* 108 */ 'C', 'M', 'A', 'S', 'K', '3', '2', 0,
  /* 116 */ 'F', 'S', 'L', 'L', '3', '2', 0,
  /* 123 */ 'F', 'S', 'R', 'L', '3', '2', 0,
  /* 130 */ 'F', 'C', 'M', 'P', 'E', 'Q', '3', '2', 0,
  /* 139 */ 'F', 'S', 'L', 'A', 'S', '3', '2', 0,
  /* 147 */ 'F', 'C', 'M', 'P', 'G', 'T', '3', '2', 0,
  /* 156 */ 'A', 'R', 'R', 'A', 'Y', '3', '2', 0,
  /* 164 */ 'F', 'S', 'R', 'C', '2', 0,
  /* 170 */ 'G', '_', 'F', 'L', 'O', 'G', '2', 0,
  /* 178 */ 'G', '_', 'F', 'E', 'X', 'P', '2', 0,
  /* 186 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '2', 0,
  /* 195 */ 'F', 'N', 'O', 'T', '2', 0,
  /* 201 */ 'F', 'O', 'R', 'N', 'O', 'T', '2', 0,
  /* 209 */ 'T', 'A', '3', 0,
  /* 213 */ 'F', 'P', 'A', 'D', 'D', '6', '4', 0,
  /* 221 */ 'T', 'A', '5', 0,
  /* 225 */ 'F', 'S', 'R', 'A', '1', '6', 0,
  /* 232 */ 'F', 'P', 'S', 'U', 'B', '1', '6', 0,
  /* 240 */ 'F', 'P', 'A', 'D', 'D', '1', '6', 0,
  /* 248 */ 'E', 'D', 'G', 'E', '1', '6', 0,
  /* 255 */ 'F', 'C', 'M', 'P', 'L', 'E', '1', '6', 0,
  /* 264 */ 'F', 'C', 'M', 'P', 'N', 'E', '1', '6', 0,
  /* 273 */ 'F', 'P', 'A', 'C', 'K', '1', '6', 0,
  /* 281 */ 'C', 'M', 'A', 'S', 'K', '1', '6', 0,
  /* 289 */ 'F', 'S', 'L', 'L', '1', '6', 0,
  /* 296 */ 'F', 'S', 'R', 'L', '1', '6', 0,
  /* 303 */ 'F', 'C', 'H', 'K', 'S', 'M', '1', '6', 0,
  /* 312 */ 'F', 'M', 'E', 'A', 'N', '1', '6', 0,
  /* 320 */ 'F', 'C', 'M', 'P', 'E', 'Q', '1', '6', 0,
  /* 329 */ 'F', 'S', 'L', 'A', 'S', '1', '6', 0,
  /* 337 */ 'F', 'C', 'M', 'P', 'G', 'T', '1', '6', 0,
  /* 346 */ 'F', 'M', 'U', 'L', '8', 'X', '1', '6', 0,
  /* 355 */ 'F', 'M', 'U', 'L', 'D', '8', 'U', 'L', 'X', '1', '6', 0,
  /* 367 */ 'F', 'M', 'U', 'L', '8', 'U', 'L', 'X', '1', '6', 0,
  /* 378 */ 'F', 'M', 'U', 'L', 'D', '8', 'S', 'U', 'X', '1', '6', 0,
  /* 390 */ 'F', 'M', 'U', 'L', '8', 'S', 'U', 'X', '1', '6', 0,
  /* 401 */ 'A', 'R', 'R', 'A', 'Y', '1', '6', 0,
  /* 409 */ 'E', 'D', 'G', 'E', '8', 0,
  /* 415 */ 'C', 'M', 'A', 'S', 'K', '8', 0,
  /* 422 */ 'A', 'R', 'R', 'A', 'Y', '8', 0,
  /* 429 */ 'B', 'A', 0,
  /* 432 */ 'B', 'P', 'F', 'C', 'C', 'A', 0,
  /* 439 */ 'B', 'P', 'I', 'C', 'C', 'A', 0,
  /* 446 */ 'B', 'P', 'X', 'C', 'C', 'A', 0,
  /* 453 */ 'C', 'B', 'C', 'O', 'N', 'D', 'A', 0,
  /* 461 */ 'F', 'B', 'C', 'O', 'N', 'D', 'A', 0,
  /* 469 */ 'G', '_', 'F', 'M', 'A', 0,
  /* 475 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'M', 'A', 0,
  /* 488 */ 'F', 'A', 'L', 'I', 'G', 'N', 'A', 'D', 'A', 'T', 'A', 0,
  /* 500 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 507 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'S', 'U', 'B', 0,
  /* 521 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'S', 'U', 'B', 0,
  /* 538 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 544 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'S', 'U', 'B', 0,
  /* 560 */ 'A', 'D', 'D', 'X', 'C', 'C', 'C', 0,
  /* 568 */ 'B', 'P', 'F', 'C', 'C', 0,
  /* 574 */ 'V', '9', 'F', 'M', 'O', 'V', 'D', '_', 'F', 'C', 'C', 0,
  /* 586 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'D', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 604 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'Q', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 622 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 639 */ 'V', '9', 'F', 'M', 'O', 'V', 'Q', '_', 'F', 'C', 'C', 0,
  /* 651 */ 'V', '9', 'F', 'M', 'O', 'V', 'S', '_', 'F', 'C', 'C', 0,
  /* 663 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', 'n', 't', '_', 'F', 'C', 'C', 0,
  /* 681 */ 'B', 'P', 'I', 'C', 'C', 0,
  /* 687 */ 'F', 'M', 'O', 'V', 'D', '_', 'I', 'C', 'C', 0,
  /* 697 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'D', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 715 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'Q', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 733 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 750 */ 'F', 'M', 'O', 'V', 'Q', '_', 'I', 'C', 'C', 0,
  /* 760 */ 'F', 'M', 'O', 'V', 'S', '_', 'I', 'C', 'C', 0,
  /* 770 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', 'n', 't', '_', 'I', 'C', 'C', 0,
  /* 788 */ 'B', 'P', 'X', 'C', 'C', 0,
  /* 794 */ 'F', 'M', 'O', 'V', 'D', '_', 'X', 'C', 'C', 0,
  /* 804 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'D', 'F', 'P', '_', 'X', 'C', 'C', 0,
  /* 822 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'Q', 'F', 'P', '_', 'X', 'C', 'C', 0,
  /* 840 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', 'P', '_', 'X', 'C', 'C', 0,
  /* 857 */ 'F', 'M', 'O', 'V', 'Q', '_', 'X', 'C', 'C', 0,
  /* 867 */ 'F', 'M', 'O', 'V', 'S', '_', 'X', 'C', 'C', 0,
  /* 877 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', 'n', 't', '_', 'X', 'C', 'C', 0,
  /* 895 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 907 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 917 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 935 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 943 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 964 */ 'G', '_', 'D', 'Y', 'N', '_', 'S', 'T', 'A', 'C', 'K', 'A', 'L', 'L', 'O', 'C', 0,
  /* 981 */ 'R', 'D', 'P', 'C', 0,
  /* 986 */ 'A', 'D', 'D', 'X', 'C', 0,
  /* 992 */ 'G', '_', 'F', 'M', 'A', 'D', 0,
  /* 999 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 1018 */ 'G', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 1029 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 1048 */ 'G', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 1059 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'L', 'O', 'A', 'D', 0,
  /* 1074 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 1081 */ 'F', 'S', 'U', 'B', 'D', 0,
  /* 1087 */ 'F', 'H', 'S', 'U', 'B', 'D', 0,
  /* 1094 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'F', 'A', 'D', 'D', 0,
  /* 1111 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 1118 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'S', 'E', 'Q', '_', 'F', 'A', 'D', 'D', 0,
  /* 1139 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'A', 'D', 'D', 0,
  /* 1153 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'A', 'D', 'D', 0,
  /* 1170 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'A', 'D', 'D', 0,
  /* 1186 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 1192 */ 'G', '_', 'P', 'T', 'R', '_', 'A', 'D', 'D', 0,
  /* 1202 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'D', 'D', 0,
  /* 1218 */ 'F', 'A', 'D', 'D', 'D', 0,
  /* 1224 */ 'F', 'H', 'A', 'D', 'D', 'D', 0,
  /* 1231 */ 'F', 'N', 'H', 'A', 'D', 'D', 'D', 0,
  /* 1239 */ 'F', 'N', 'A', 'D', 'D', 'D', 0,
  /* 1246 */ 'V', '9', 'F', 'C', 'M', 'P', 'E', 'D', 0,
  /* 1255 */ 'F', 'N', 'E', 'G', 'D', 0,
  /* 1261 */ 'F', 'M', 'U', 'L', 'D', 0,
  /* 1267 */ 'F', 'N', 'M', 'U', 'L', 'D', 0,
  /* 1274 */ 'F', 'S', 'M', 'U', 'L', 'D', 0,
  /* 1281 */ 'F', 'N', 'S', 'M', 'U', 'L', 'D', 0,
  /* 1289 */ 'F', 'A', 'N', 'D', 0,
  /* 1294 */ 'F', 'N', 'A', 'N', 'D', 0,
  /* 1300 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'N', 'A', 'N', 'D', 0,
  /* 1317 */ 'F', 'E', 'X', 'P', 'A', 'N', 'D', 0,
  /* 1325 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'A', 'N', 'D', 0,
  /* 1341 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 1347 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'N', 'D', 0,
  /* 1363 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 1376 */ 'C', 'B', 'C', 'O', 'N', 'D', 0,
  /* 1383 */ 'F', 'B', 'C', 'O', 'N', 'D', 0,
  /* 1390 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 1399 */ 'G', '_', 'L', 'L', 'R', 'O', 'U', 'N', 'D', 0,
  /* 1409 */ 'G', '_', 'L', 'R', 'O', 'U', 'N', 'D', 0,
  /* 1418 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'R', 'O', 'U', 'N', 'D', 0,
  /* 1436 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', '_', 'R', 'O', 'U', 'N', 'D', 0,
  /* 1462 */ 'F', 'I', 'T', 'O', 'D', 0,
  /* 1468 */ 'F', 'Q', 'T', 'O', 'D', 0,
  /* 1474 */ 'F', 'S', 'T', 'O', 'D', 0,
  /* 1480 */ 'F', 'X', 'T', 'O', 'D', 0,
  /* 1486 */ 'M', 'O', 'V', 'X', 'T', 'O', 'D', 0,
  /* 1494 */ 'V', '9', 'F', 'C', 'M', 'P', 'D', 0,
  /* 1502 */ 'F', 'L', 'C', 'M', 'P', 'D', 0,
  /* 1509 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 1526 */ 'F', 'A', 'B', 'S', 'D', 0,
  /* 1532 */ 'F', 'S', 'Q', 'R', 'T', 'D', 0,
  /* 1539 */ 'F', 'D', 'I', 'V', 'D', 0,
  /* 1545 */ 'F', 'M', 'O', 'V', 'D', 0,
  /* 1551 */ 'F', 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'D', 0,
  /* 1561 */ 'F', 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'D', 0,
  /* 1571 */ 'F', 'M', 'O', 'V', 'R', 'G', 'Z', 'D', 0,
  /* 1580 */ 'F', 'M', 'O', 'V', 'R', 'L', 'Z', 'D', 0,
  /* 1589 */ 'F', 'M', 'O', 'V', 'R', 'N', 'Z', 'D', 0,
  /* 1598 */ 'F', 'M', 'O', 'V', 'R', 'Z', 'D', 0,
  /* 1606 */ 'P', 'S', 'E', 'U', 'D', 'O', '_', 'P', 'R', 'O', 'B', 'E', 0,
  /* 1619 */ 'G', '_', 'S', 'S', 'U', 'B', 'E', 0,
  /* 1627 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 1635 */ 'G', '_', 'F', 'E', 'N', 'C', 'E', 0,
  /* 1643 */ 'A', 'R', 'I', 'T', 'H', '_', 'F', 'E', 'N', 'C', 'E', 0,
  /* 1655 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 1668 */ 'G', '_', 'S', 'A', 'D', 'D', 'E', 0,
  /* 1676 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 1684 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 1699 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 1714 */ 'F', 'P', 'M', 'E', 'R', 'G', 'E', 0,
  /* 1722 */ 'G', '_', 'J', 'U', 'M', 'P', '_', 'T', 'A', 'B', 'L', 'E', 0,
  /* 1735 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 1742 */ 'B', 'S', 'H', 'U', 'F', 'F', 'L', 'E', 0,
  /* 1751 */ 'G', '_', 'M', 'E', 'M', 'C', 'P', 'Y', '_', 'I', 'N', 'L', 'I', 'N', 'E', 0,
  /* 1767 */ 'F', 'O', 'N', 'E', 0,
  /* 1772 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 1785 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 1801 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 1809 */ 'G', '_', 'B', 'I', 'T', 'R', 'E', 'V', 'E', 'R', 'S', 'E', 0,
  /* 1822 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1832 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1847 */ 'G', '_', 'M', 'E', 'M', 'M', 'O', 'V', 'E', 0,
  /* 1857 */ 'G', '_', 'F', 'R', 'E', 'E', 'Z', 'E', 0,
  /* 1866 */ 'G', '_', 'F', 'C', 'A', 'N', 'O', 'N', 'I', 'C', 'A', 'L', 'I', 'Z', 'E', 0,
  /* 1882 */ 'G', '_', 'C', 'T', 'L', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 1900 */ 'G', '_', 'C', 'T', 'T', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 1918 */ 'G', '_', 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 1933 */ 'D', 'B', 'G', '_', 'I', 'N', 'S', 'T', 'R', '_', 'R', 'E', 'F', 0,
  /* 1947 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 1954 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1969 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1983 */ 'G', '_', 'S', 'E', 'X', 'T', '_', 'I', 'N', 'R', 'E', 'G', 0,
  /* 1996 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 2010 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', 0,
  /* 2027 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'C', 'H', 'G', 0,
  /* 2044 */ 'G', '_', 'F', 'L', 'O', 'G', 0,
  /* 2051 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 2059 */ 'P', 'R', 'E', 'A', 'L', 'L', 'O', 'C', 'A', 'T', 'E', 'D', '_', 'A', 'R', 'G', 0,
  /* 2076 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 2084 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 2092 */ 'F', 'L', 'U', 'S', 'H', 0,
  /* 2098 */ 'D', 'B', 'G', '_', 'P', 'H', 'I', 0,
  /* 2106 */ 'U', 'M', 'U', 'L', 'X', 'H', 'I', 0,
  /* 2114 */ 'X', 'M', 'U', 'L', 'X', 'H', 'I', 0,
  /* 2122 */ 'F', 'D', 'T', 'O', 'I', 0,
  /* 2128 */ 'F', 'Q', 'T', 'O', 'I', 0,
  /* 2134 */ 'F', 'S', 'T', 'O', 'I', 0,
  /* 2140 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 2149 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 2158 */ 'G', '_', 'F', 'P', 'O', 'W', 'I', 0,
  /* 2166 */ 'B', 'M', 'A', 'S', 'K', 0,
  /* 2172 */ 'G', '_', 'P', 'T', 'R', 'M', 'A', 'S', 'K', 0,
  /* 2182 */ 'E', 'D', 'G', 'E', '3', '2', 'L', 0,
  /* 2190 */ 'E', 'D', 'G', 'E', '1', '6', 'L', 0,
  /* 2198 */ 'E', 'D', 'G', 'E', '8', 'L', 0,
  /* 2205 */ 'F', 'M', 'U', 'L', '8', 'X', '1', '6', 'A', 'L', 0,
  /* 2216 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2225 */ 'D', 'B', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2235 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2244 */ 'A', 'N', 'N', 'O', 'T', 'A', 'T', 'I', 'O', 'N', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2261 */ 'I', 'C', 'A', 'L', 'L', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'F', 'U', 'N', 'N', 'E', 'L', 0,
  /* 2281 */ 'G', '_', 'F', 'S', 'H', 'L', 0,
  /* 2288 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 2294 */ 'G', '_', 'F', 'C', 'E', 'I', 'L', 0,
  /* 2302 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 2322 */ 'T', 'L', 'S', '_', 'C', 'A', 'L', 'L', 0,
  /* 2331 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'Y', 'P', 'E', 'D', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 2358 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 2379 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 2391 */ 'K', 'I', 'L', 'L', 0,
  /* 2396 */ 'A', 'L', 'I', 'G', 'N', 'A', 'D', 'D', 'R', 'L', 0,
  /* 2407 */ 'R', 'E', 'T', 'L', 0,
  /* 2412 */ 'G', '_', 'R', 'O', 'T', 'L', 0,
  /* 2419 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'F', 'M', 'U', 'L', 0,
  /* 2436 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 2443 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'S', 'E', 'Q', '_', 'F', 'M', 'U', 'L', 0,
  /* 2464 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'M', 'U', 'L', 0,
  /* 2478 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'M', 'U', 'L', 0,
  /* 2494 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 2500 */ 'S', 'I', 'A', 'M', 0,
  /* 2505 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 2512 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'R', 'E', 'M', 0,
  /* 2526 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 2533 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 2540 */ 'G', '_', 'S', 'D', 'I', 'V', 'R', 'E', 'M', 0,
  /* 2550 */ 'G', '_', 'U', 'D', 'I', 'V', 'R', 'E', 'M', 0,
  /* 2560 */ 'R', 'D', 'W', 'I', 'M', 0,
  /* 2566 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 2576 */ 'G', '_', 'F', 'M', 'I', 'N', 'I', 'M', 'U', 'M', 0,
  /* 2587 */ 'G', '_', 'F', 'M', 'A', 'X', 'I', 'M', 'U', 'M', 0,
  /* 2598 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', 0,
  /* 2608 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', 0,
  /* 2618 */ 'E', 'D', 'G', 'E', '3', '2', 'N', 0,
  /* 2626 */ 'E', 'D', 'G', 'E', '1', '6', 'N', 0,
  /* 2634 */ 'E', 'D', 'G', 'E', '8', 'N', 0,
  /* 2641 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'R', 'O', 'U', 'N', 'D', 'E', 'V', 'E', 'N', 0,
  /* 2663 */ 'G', '_', 'A', 'S', 'S', 'E', 'R', 'T', '_', 'A', 'L', 'I', 'G', 'N', 0,
  /* 2678 */ 'G', '_', 'F', 'C', 'O', 'P', 'Y', 'S', 'I', 'G', 'N', 0,
  /* 2690 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'F', 'M', 'I', 'N', 0,
  /* 2707 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'M', 'I', 'N', 0,
  /* 2724 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'S', 'M', 'I', 'N', 0,
  /* 2741 */ 'G', '_', 'S', 'M', 'I', 'N', 0,
  /* 2748 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'U', 'M', 'I', 'N', 0,
  /* 2765 */ 'G', '_', 'U', 'M', 'I', 'N', 0,
  /* 2772 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'I', 'N', 0,
  /* 2789 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'I', 'N', 0,
  /* 2805 */ 'G', '_', 'F', 'S', 'I', 'N', 0,
  /* 2812 */ 'E', 'D', 'G', 'E', '3', '2', 'L', 'N', 0,
  /* 2821 */ 'E', 'D', 'G', 'E', '1', '6', 'L', 'N', 0,
  /* 2830 */ 'E', 'D', 'G', 'E', '8', 'L', 'N', 0,
  /* 2838 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 2854 */ 'P', 'D', 'I', 'S', 'T', 'N', 0,
  /* 2861 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 2878 */ 'S', 'H', 'U', 'T', 'D', 'O', 'W', 'N', 0,
  /* 2887 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 2895 */ 'G', '_', 'U', 'S', 'U', 'B', 'O', 0,
  /* 2903 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 2911 */ 'G', '_', 'U', 'A', 'D', 'D', 'O', 0,
  /* 2919 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 2927 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 2935 */ 'G', '_', 'B', 'Z', 'E', 'R', 'O', 0,
  /* 2943 */ 'F', 'Z', 'E', 'R', 'O', 0,
  /* 2949 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 2958 */ 'G', '_', 'B', 'S', 'W', 'A', 'P', 0,
  /* 2966 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 2975 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 2984 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 2991 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 2998 */ 'U', 'N', 'I', 'M', 'P', 0,
  /* 3004 */ 'N', 'O', 'P', 0,
  /* 3008 */ 'G', '_', 'C', 'T', 'P', 'O', 'P', 0,
  /* 3016 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 3029 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 3041 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 3056 */ 'P', 'R', 'E', 'A', 'L', 'L', 'O', 'C', 'A', 'T', 'E', 'D', '_', 'S', 'E', 'T', 'U', 'P', 0,
  /* 3075 */ 'G', '_', 'F', 'E', 'X', 'P', 0,
  /* 3082 */ 'F', 'S', 'U', 'B', 'Q', 0,
  /* 3088 */ 'F', 'A', 'D', 'D', 'Q', 0,
  /* 3094 */ 'V', '9', 'F', 'C', 'M', 'P', 'E', 'Q', 0,
  /* 3103 */ 'F', 'N', 'E', 'G', 'Q', 0,
  /* 3109 */ 'F', 'D', 'M', 'U', 'L', 'Q', 0,
  /* 3116 */ 'F', 'M', 'U', 'L', 'Q', 0,
  /* 3122 */ 'F', 'D', 'T', 'O', 'Q', 0,
  /* 3128 */ 'F', 'I', 'T', 'O', 'Q', 0,
  /* 3134 */ 'F', 'S', 'T', 'O', 'Q', 0,
  /* 3140 */ 'F', 'X', 'T', 'O', 'Q', 0,
  /* 3146 */ 'V', '9', 'F', 'C', 'M', 'P', 'Q', 0,
  /* 3154 */ 'F', 'A', 'B', 'S', 'Q', 0,
  /* 3160 */ 'F', 'S', 'Q', 'R', 'T', 'Q', 0,
  /* 3167 */ 'F', 'D', 'I', 'V', 'Q', 0,
  /* 3173 */ 'F', 'M', 'O', 'V', 'Q', 0,
  /* 3179 */ 'F', 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'Q', 0,
  /* 3189 */ 'F', 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'Q', 0,
  /* 3199 */ 'F', 'M', 'O', 'V', 'R', 'G', 'Z', 'Q', 0,
  /* 3208 */ 'F', 'M', 'O', 'V', 'R', 'L', 'Z', 'Q', 0,
  /* 3217 */ 'F', 'M', 'O', 'V', 'R', 'N', 'Z', 'Q', 0,
  /* 3226 */ 'F', 'M', 'O', 'V', 'R', 'Z', 'Q', 0,
  /* 3234 */ 'S', 'T', 'B', 'A', 'R', 0,
  /* 3240 */ 'R', 'D', 'T', 'B', 'R', 0,
  /* 3246 */ 'G', '_', 'B', 'R', 0,
  /* 3251 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', '_', 'B', 'R', 0,
  /* 3264 */ 'A', 'L', 'I', 'G', 'N', 'A', 'D', 'D', 'R', 0,
  /* 3274 */ 'G', '_', 'B', 'L', 'O', 'C', 'K', '_', 'A', 'D', 'D', 'R', 0,
  /* 3287 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 3312 */ 'G', '_', 'R', 'E', 'A', 'D', 'C', 'Y', 'C', 'L', 'E', 'C', 'O', 'U', 'N', 'T', 'E', 'R', 0,
  /* 3331 */ 'G', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'G', 'I', 'S', 'T', 'E', 'R', 0,
  /* 3347 */ 'G', '_', 'W', 'R', 'I', 'T', 'E', '_', 'R', 'E', 'G', 'I', 'S', 'T', 'E', 'R', 0,
  /* 3364 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 3371 */ 'G', '_', 'F', 'S', 'H', 'R', 0,
  /* 3378 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 3385 */ 'S', 'I', 'R', 0,
  /* 3389 */ 'F', 'O', 'R', 0,
  /* 3393 */ 'F', 'N', 'O', 'R', 0,
  /* 3398 */ 'F', 'X', 'N', 'O', 'R', 0,
  /* 3404 */ 'G', '_', 'F', 'F', 'L', 'O', 'O', 'R', 0,
  /* 3413 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 3428 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 3445 */ 'F', 'X', 'O', 'R', 0,
  /* 3450 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'X', 'O', 'R', 0,
  /* 3466 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 3472 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'O', 'R', 0,
  /* 3488 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'O', 'R', 0,
  /* 3503 */ 'G', '_', 'O', 'R', 0,
  /* 3508 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'O', 'R', 0,
  /* 3523 */ 'R', 'D', 'P', 'R', 0,
  /* 3528 */ 'R', 'D', 'A', 'S', 'R', 0,
  /* 3534 */ 'R', 'D', 'P', 'S', 'R', 0,
  /* 3540 */ 'G', '_', 'R', 'O', 'T', 'R', 0,
  /* 3547 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 3558 */ 'F', 'S', 'R', 'C', '1', 'S', 0,
  /* 3565 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '1', 'S', 0,
  /* 3575 */ 'F', 'N', 'O', 'T', '1', 'S', 0,
  /* 3582 */ 'F', 'O', 'R', 'N', 'O', 'T', '1', 'S', 0,
  /* 3591 */ 'F', 'P', 'S', 'U', 'B', '3', '2', 'S', 0,
  /* 3600 */ 'F', 'P', 'A', 'D', 'D', '3', '2', 'S', 0,
  /* 3609 */ 'F', 'S', 'R', 'C', '2', 'S', 0,
  /* 3616 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '2', 'S', 0,
  /* 3626 */ 'F', 'N', 'O', 'T', '2', 'S', 0,
  /* 3633 */ 'F', 'O', 'R', 'N', 'O', 'T', '2', 'S', 0,
  /* 3642 */ 'F', 'P', 'S', 'U', 'B', '1', '6', 'S', 0,
  /* 3651 */ 'F', 'P', 'A', 'D', 'D', '1', '6', 'S', 0,
  /* 3660 */ 'G', '_', 'F', 'A', 'B', 'S', 0,
  /* 3667 */ 'G', '_', 'A', 'B', 'S', 0,
  /* 3673 */ 'F', 'S', 'U', 'B', 'S', 0,
  /* 3679 */ 'F', 'H', 'S', 'U', 'B', 'S', 0,
  /* 3686 */ 'F', 'A', 'D', 'D', 'S', 0,
  /* 3692 */ 'F', 'H', 'A', 'D', 'D', 'S', 0,
  /* 3699 */ 'F', 'N', 'H', 'A', 'D', 'D', 'S', 0,
  /* 3707 */ 'F', 'N', 'A', 'D', 'D', 'S', 0,
  /* 3714 */ 'F', 'A', 'N', 'D', 'S', 0,
  /* 3720 */ 'F', 'N', 'A', 'N', 'D', 'S', 0,
  /* 3727 */ 'F', 'O', 'N', 'E', 'S', 0,
  /* 3733 */ 'V', '9', 'F', 'C', 'M', 'P', 'E', 'S', 0,
  /* 3742 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 3759 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 3774 */ 'F', 'N', 'E', 'G', 'S', 0,
  /* 3780 */ 'F', 'M', 'U', 'L', 'S', 0,
  /* 3786 */ 'F', 'N', 'M', 'U', 'L', 'S', 0,
  /* 3793 */ 'G', '_', 'F', 'C', 'O', 'S', 0,
  /* 3800 */ 'F', 'Z', 'E', 'R', 'O', 'S', 0,
  /* 3807 */ 'F', 'D', 'T', 'O', 'S', 0,
  /* 3813 */ 'F', 'I', 'T', 'O', 'S', 0,
  /* 3819 */ 'F', 'Q', 'T', 'O', 'S', 0,
  /* 3825 */ 'M', 'O', 'V', 'W', 'T', 'O', 'S', 0,
  /* 3833 */ 'F', 'X', 'T', 'O', 'S', 0,
  /* 3839 */ 'V', '9', 'F', 'C', 'M', 'P', 'S', 0,
  /* 3847 */ 'F', 'L', 'C', 'M', 'P', 'S', 0,
  /* 3854 */ 'F', 'O', 'R', 'S', 0,
  /* 3859 */ 'F', 'N', 'O', 'R', 'S', 0,
  /* 3865 */ 'F', 'X', 'N', 'O', 'R', 'S', 0,
  /* 3872 */ 'G', '_', 'C', 'O', 'N', 'C', 'A', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', 'S', 0,
  /* 3889 */ 'F', 'X', 'O', 'R', 'S', 0,
  /* 3895 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 3912 */ 'G', '_', 'I', 'S', '_', 'F', 'P', 'C', 'L', 'A', 'S', 'S', 0,
  /* 3925 */ 'F', 'A', 'B', 'S', 'S', 0,
  /* 3931 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'W', 'I', 'T', 'H', '_', 'S', 'U', 'C', 'C', 'E', 'S', 'S', 0,
  /* 3961 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 3988 */ 'F', 'S', 'Q', 'R', 'T', 'S', 0,
  /* 3995 */ 'F', 'D', 'I', 'V', 'S', 0,
  /* 4001 */ 'F', 'M', 'O', 'V', 'S', 0,
  /* 4007 */ 'F', 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'S', 0,
  /* 4017 */ 'F', 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'S', 0,
  /* 4027 */ 'F', 'M', 'O', 'V', 'R', 'G', 'Z', 'S', 0,
  /* 4036 */ 'F', 'M', 'O', 'V', 'R', 'L', 'Z', 'S', 0,
  /* 4045 */ 'F', 'M', 'O', 'V', 'R', 'N', 'Z', 'S', 0,
  /* 4054 */ 'F', 'M', 'O', 'V', 'R', 'Z', 'S', 0,
  /* 4062 */ 'G', '_', 'S', 'S', 'U', 'B', 'S', 'A', 'T', 0,
  /* 4072 */ 'G', '_', 'U', 'S', 'U', 'B', 'S', 'A', 'T', 0,
  /* 4082 */ 'G', '_', 'S', 'A', 'D', 'D', 'S', 'A', 'T', 0,
  /* 4092 */ 'G', '_', 'U', 'A', 'D', 'D', 'S', 'A', 'T', 0,
  /* 4102 */ 'G', '_', 'S', 'S', 'H', 'L', 'S', 'A', 'T', 0,
  /* 4112 */ 'G', '_', 'U', 'S', 'H', 'L', 'S', 'A', 'T', 0,
  /* 4122 */ 'G', '_', 'S', 'M', 'U', 'L', 'F', 'I', 'X', 'S', 'A', 'T', 0,
  /* 4135 */ 'G', '_', 'U', 'M', 'U', 'L', 'F', 'I', 'X', 'S', 'A', 'T', 0,
  /* 4148 */ 'G', '_', 'S', 'D', 'I', 'V', 'F', 'I', 'X', 'S', 'A', 'T', 0,
  /* 4161 */ 'G', '_', 'U', 'D', 'I', 'V', 'F', 'I', 'X', 'S', 'A', 'T', 0,
  /* 4174 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 4184 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 4193 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 4206 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 4220 */ 'G', '_', 'M', 'E', 'M', 'S', 'E', 'T', 0,
  /* 4229 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 4253 */ 'G', '_', 'B', 'R', 'J', 'T', 0,
  /* 4260 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 4281 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 4301 */ 'B', 'P', 'F', 'C', 'C', 'A', 'N', 'T', 0,
  /* 4310 */ 'B', 'P', 'I', 'C', 'C', 'A', 'N', 'T', 0,
  /* 4319 */ 'B', 'P', 'X', 'C', 'C', 'A', 'N', 'T', 0,
  /* 4328 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 4340 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 4351 */ 'B', 'P', 'F', 'C', 'C', 'N', 'T', 0,
  /* 4359 */ 'B', 'P', 'I', 'C', 'C', 'N', 'T', 0,
  /* 4367 */ 'B', 'P', 'X', 'C', 'C', 'N', 'T', 0,
  /* 4375 */ 'L', 'Z', 'C', 'N', 'T', 0,
  /* 4381 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 4392 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 4403 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 4414 */ 'G', '_', 'F', 'R', 'I', 'N', 'T', 0,
  /* 4422 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'L', 'R', 'I', 'N', 'T', 0,
  /* 4440 */ 'G', '_', 'F', 'N', 'E', 'A', 'R', 'B', 'Y', 'I', 'N', 'T', 0,
  /* 4453 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 4463 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 4478 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 4487 */ 'G', '_', 'F', 'S', 'Q', 'R', 'T', 0,
  /* 4495 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'S', 'Q', 'R', 'T', 0,
  /* 4510 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 4520 */ 'G', '_', 'A', 'D', 'D', 'R', 'S', 'P', 'A', 'C', 'E', '_', 'C', 'A', 'S', 'T', 0,
  /* 4537 */ 'P', 'D', 'I', 'S', 'T', 0,
  /* 4543 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', '_', 'L', 'I', 'S', 'T', 0,
  /* 4558 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 4566 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 4573 */ 'G', '_', 'A', 'S', 'S', 'E', 'R', 'T', '_', 'S', 'E', 'X', 'T', 0,
  /* 4587 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 4596 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 4603 */ 'G', '_', 'A', 'S', 'S', 'E', 'R', 'T', '_', 'Z', 'E', 'X', 'T', 0,
  /* 4617 */ 'F', 'M', 'U', 'L', '8', 'X', '1', '6', 'A', 'U', 0,
  /* 4628 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 4635 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'D', 'I', 'V', 0,
  /* 4649 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 4656 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 4663 */ 'F', 'L', 'U', 'S', 'H', 'W', 0,
  /* 4670 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 4677 */ 'M', 'O', 'V', 'S', 'T', 'O', 'S', 'W', 0,
  /* 4686 */ 'M', 'O', 'V', 'S', 'T', 'O', 'U', 'W', 0,
  /* 4695 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'F', 'M', 'A', 'X', 0,
  /* 4712 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'M', 'A', 'X', 0,
  /* 4729 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'S', 'M', 'A', 'X', 0,
  /* 4746 */ 'G', '_', 'S', 'M', 'A', 'X', 0,
  /* 4753 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'U', 'M', 'A', 'X', 0,
  /* 4770 */ 'G', '_', 'U', 'M', 'A', 'X', 0,
  /* 4777 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'A', 'X', 0,
  /* 4794 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'A', 'X', 0,
  /* 4810 */ 'G', 'E', 'T', 'P', 'C', 'X', 0,
  /* 4817 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 4831 */ 'G', '_', 'S', 'B', 'F', 'X', 0,
  /* 4838 */ 'G', '_', 'U', 'B', 'F', 'X', 0,
  /* 4845 */ 'F', 'P', 'A', 'C', 'K', 'F', 'I', 'X', 0,
  /* 4854 */ 'G', '_', 'S', 'M', 'U', 'L', 'F', 'I', 'X', 0,
  /* 4864 */ 'G', '_', 'U', 'M', 'U', 'L', 'F', 'I', 'X', 0,
  /* 4874 */ 'G', '_', 'S', 'D', 'I', 'V', 'F', 'I', 'X', 0,
  /* 4884 */ 'G', '_', 'U', 'D', 'I', 'V', 'F', 'I', 'X', 0,
  /* 4894 */ 'X', 'M', 'U', 'L', 'X', 0,
  /* 4900 */ 'F', 'D', 'T', 'O', 'X', 0,
  /* 4906 */ 'M', 'O', 'V', 'D', 'T', 'O', 'X', 0,
  /* 4914 */ 'F', 'Q', 'T', 'O', 'X', 0,
  /* 4920 */ 'F', 'S', 'T', 'O', 'X', 0,
  /* 4926 */ 'G', '_', 'M', 'E', 'M', 'C', 'P', 'Y', 0,
  /* 4935 */ 'C', 'O', 'P', 'Y', 0,
  /* 4940 */ 'G', '_', 'C', 'T', 'L', 'Z', 0,
  /* 4947 */ 'G', '_', 'C', 'T', 'T', 'Z', 0,
  /* 4954 */ 'P', 'R', 'E', 'F', 'E', 'T', 'C', 'H', 'i', 0,
  /* 4964 */ 'S', 'E', 'T', 'H', 'I', 'i', 0,
  /* 4971 */ 'M', 'E', 'M', 'B', 'A', 'R', 'i', 0,
  /* 4979 */ 'S', 'E', 'T', 'H', 'I', 'X', 'i', 0,
  /* 4987 */ 'S', 'R', 'A', 'r', 'i', 0,
  /* 4993 */ 'L', 'D', 'S', 'B', 'r', 'i', 0,
  /* 5000 */ 'S', 'T', 'B', 'r', 'i', 0,
  /* 5006 */ 'L', 'D', 'U', 'B', 'r', 'i', 0,
  /* 5013 */ 'S', 'U', 'B', 'r', 'i', 0,
  /* 5019 */ 'L', 'D', 'S', 'T', 'U', 'B', 'r', 'i', 0,
  /* 5028 */ 'S', 'M', 'A', 'C', 'r', 'i', 0,
  /* 5035 */ 'U', 'M', 'A', 'C', 'r', 'i', 0,
  /* 5042 */ 'S', 'U', 'B', 'C', 'r', 'i', 0,
  /* 5049 */ 'T', 'S', 'U', 'B', 'C', 'C', 'r', 'i', 0,
  /* 5058 */ 'T', 'A', 'D', 'D', 'C', 'C', 'r', 'i', 0,
  /* 5067 */ 'A', 'N', 'D', 'C', 'C', 'r', 'i', 0,
  /* 5075 */ 'V', '9', 'M', 'O', 'V', 'F', 'C', 'C', 'r', 'i', 0,
  /* 5086 */ 'T', 'I', 'C', 'C', 'r', 'i', 0,
  /* 5093 */ 'M', 'O', 'V', 'I', 'C', 'C', 'r', 'i', 0,
  /* 5102 */ 'S', 'M', 'U', 'L', 'C', 'C', 'r', 'i', 0,
  /* 5111 */ 'U', 'M', 'U', 'L', 'C', 'C', 'r', 'i', 0,
  /* 5120 */ 'A', 'N', 'D', 'N', 'C', 'C', 'r', 'i', 0,
  /* 5129 */ 'O', 'R', 'N', 'C', 'C', 'r', 'i', 0,
  /* 5137 */ 'X', 'N', 'O', 'R', 'C', 'C', 'r', 'i', 0,
  /* 5146 */ 'X', 'O', 'R', 'C', 'C', 'r', 'i', 0,
  /* 5154 */ 'M', 'U', 'L', 'S', 'C', 'C', 'r', 'i', 0,
  /* 5163 */ 'S', 'D', 'I', 'V', 'C', 'C', 'r', 'i', 0,
  /* 5172 */ 'U', 'D', 'I', 'V', 'C', 'C', 'r', 'i', 0,
  /* 5181 */ 'T', 'X', 'C', 'C', 'r', 'i', 0,
  /* 5188 */ 'M', 'O', 'V', 'X', 'C', 'C', 'r', 'i', 0,
  /* 5197 */ 'A', 'D', 'D', 'C', 'r', 'i', 0,
  /* 5204 */ 'L', 'D', 'D', 'C', 'r', 'i', 0,
  /* 5211 */ 'L', 'D', 'C', 'r', 'i', 0,
  /* 5217 */ 'S', 'T', 'D', 'C', 'r', 'i', 0,
  /* 5224 */ 'S', 'T', 'C', 'r', 'i', 0,
  /* 5230 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'r', 'i', 0,
  /* 5240 */ 'L', 'E', 'A', 'X', '_', 'A', 'D', 'D', 'r', 'i', 0,
  /* 5251 */ 'L', 'D', 'D', 'r', 'i', 0,
  /* 5257 */ 'L', 'D', 'r', 'i', 0,
  /* 5262 */ 'A', 'N', 'D', 'r', 'i', 0,
  /* 5268 */ 'B', 'I', 'N', 'D', 'r', 'i', 0,
  /* 5275 */ 'S', 'T', 'D', 'r', 'i', 0,
  /* 5281 */ 'S', 'U', 'B', 'E', 'r', 'i', 0,
  /* 5288 */ 'A', 'D', 'D', 'E', 'r', 'i', 0,
  /* 5295 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', 'r', 'i', 0,
  /* 5305 */ 'S', 'A', 'V', 'E', 'r', 'i', 0,
  /* 5312 */ 'L', 'D', 'D', 'F', 'r', 'i', 0,
  /* 5319 */ 'L', 'D', 'F', 'r', 'i', 0,
  /* 5325 */ 'S', 'T', 'D', 'F', 'r', 'i', 0,
  /* 5332 */ 'L', 'D', 'Q', 'F', 'r', 'i', 0,
  /* 5339 */ 'S', 'T', 'Q', 'F', 'r', 'i', 0,
  /* 5346 */ 'S', 'T', 'F', 'r', 'i', 0,
  /* 5352 */ 'L', 'D', 'S', 'H', 'r', 'i', 0,
  /* 5359 */ 'F', 'L', 'U', 'S', 'H', 'r', 'i', 0,
  /* 5367 */ 'S', 'T', 'H', 'r', 'i', 0,
  /* 5373 */ 'L', 'D', 'U', 'H', 'r', 'i', 0,
  /* 5380 */ 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 'r', 'i', 0,
  /* 5392 */ 'S', 'L', 'L', 'r', 'i', 0,
  /* 5398 */ 'J', 'M', 'P', 'L', 'r', 'i', 0,
  /* 5405 */ 'S', 'R', 'L', 'r', 'i', 0,
  /* 5411 */ 'S', 'M', 'U', 'L', 'r', 'i', 0,
  /* 5418 */ 'U', 'M', 'U', 'L', 'r', 'i', 0,
  /* 5425 */ 'W', 'R', 'W', 'I', 'M', 'r', 'i', 0,
  /* 5433 */ 'A', 'N', 'D', 'N', 'r', 'i', 0,
  /* 5440 */ 'O', 'R', 'N', 'r', 'i', 0,
  /* 5446 */ 'T', 'R', 'A', 'P', 'r', 'i', 0,
  /* 5453 */ 'S', 'W', 'A', 'P', 'r', 'i', 0,
  /* 5460 */ 'C', 'M', 'P', 'r', 'i', 0,
  /* 5466 */ 'S', 'T', 'D', 'C', 'Q', 'r', 'i', 0,
  /* 5474 */ 'S', 'T', 'D', 'F', 'Q', 'r', 'i', 0,
  /* 5482 */ 'W', 'R', 'T', 'B', 'R', 'r', 'i', 0,
  /* 5490 */ 'X', 'N', 'O', 'R', 'r', 'i', 0,
  /* 5497 */ 'X', 'O', 'R', 'r', 'i', 0,
  /* 5503 */ 'W', 'R', 'P', 'R', 'r', 'i', 0,
  /* 5510 */ 'W', 'R', 'A', 'S', 'R', 'r', 'i', 0,
  /* 5518 */ 'L', 'D', 'C', 'S', 'R', 'r', 'i', 0,
  /* 5526 */ 'S', 'T', 'C', 'S', 'R', 'r', 'i', 0,
  /* 5534 */ 'L', 'D', 'F', 'S', 'R', 'r', 'i', 0,
  /* 5542 */ 'S', 'T', 'F', 'S', 'R', 'r', 'i', 0,
  /* 5550 */ 'L', 'D', 'X', 'F', 'S', 'R', 'r', 'i', 0,
  /* 5559 */ 'S', 'T', 'X', 'F', 'S', 'R', 'r', 'i', 0,
  /* 5568 */ 'P', 'W', 'R', 'P', 'S', 'R', 'r', 'i', 0,
  /* 5577 */ 'S', 'T', 'r', 'i', 0,
  /* 5582 */ 'R', 'E', 'T', 'T', 'r', 'i', 0,
  /* 5589 */ 'S', 'D', 'I', 'V', 'r', 'i', 0,
  /* 5596 */ 'U', 'D', 'I', 'V', 'r', 'i', 0,
  /* 5603 */ 'T', 'S', 'U', 'B', 'C', 'C', 'T', 'V', 'r', 'i', 0,
  /* 5614 */ 'T', 'A', 'D', 'D', 'C', 'C', 'T', 'V', 'r', 'i', 0,
  /* 5625 */ 'L', 'D', 'S', 'W', 'r', 'i', 0,
  /* 5632 */ 'S', 'R', 'A', 'X', 'r', 'i', 0,
  /* 5639 */ 'S', 'U', 'B', 'X', 'r', 'i', 0,
  /* 5646 */ 'A', 'D', 'D', 'X', 'r', 'i', 0,
  /* 5653 */ 'L', 'D', 'X', 'r', 'i', 0,
  /* 5659 */ 'A', 'N', 'D', 'X', 'r', 'i', 0,
  /* 5666 */ 'S', 'L', 'L', 'X', 'r', 'i', 0,
  /* 5673 */ 'S', 'R', 'L', 'X', 'r', 'i', 0,
  /* 5680 */ 'M', 'U', 'L', 'X', 'r', 'i', 0,
  /* 5687 */ 'X', 'O', 'R', 'X', 'r', 'i', 0,
  /* 5694 */ 'S', 'T', 'X', 'r', 'i', 0,
  /* 5700 */ 'S', 'D', 'I', 'V', 'X', 'r', 'i', 0,
  /* 5708 */ 'U', 'D', 'I', 'V', 'X', 'r', 'i', 0,
  /* 5716 */ 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'r', 'i', 0,
  /* 5726 */ 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'r', 'i', 0,
  /* 5736 */ 'M', 'O', 'V', 'R', 'G', 'Z', 'r', 'i', 0,
  /* 5745 */ 'M', 'O', 'V', 'R', 'L', 'Z', 'r', 'i', 0,
  /* 5754 */ 'M', 'O', 'V', 'R', 'N', 'Z', 'r', 'i', 0,
  /* 5763 */ 'M', 'O', 'V', 'R', 'R', 'Z', 'r', 'i', 0,
  /* 5772 */ 'B', 'P', 'G', 'E', 'Z', 'a', 'p', 'n', 0,
  /* 5781 */ 'B', 'P', 'L', 'E', 'Z', 'a', 'p', 'n', 0,
  /* 5790 */ 'B', 'P', 'G', 'Z', 'a', 'p', 'n', 0,
  /* 5798 */ 'B', 'P', 'L', 'Z', 'a', 'p', 'n', 0,
  /* 5806 */ 'B', 'P', 'N', 'Z', 'a', 'p', 'n', 0,
  /* 5814 */ 'B', 'P', 'Z', 'a', 'p', 'n', 0,
  /* 5821 */ 'B', 'P', 'G', 'E', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 5831 */ 'B', 'P', 'L', 'E', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 5841 */ 'B', 'P', 'G', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 5850 */ 'B', 'P', 'L', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 5859 */ 'B', 'P', 'N', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 5868 */ 'B', 'P', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 5876 */ 'P', 'R', 'E', 'F', 'E', 'T', 'C', 'H', 'r', 0,
  /* 5886 */ 'L', 'D', 'S', 'B', 'A', 'r', 'r', 0,
  /* 5894 */ 'S', 'T', 'B', 'A', 'r', 'r', 0,
  /* 5901 */ 'L', 'D', 'U', 'B', 'A', 'r', 'r', 0,
  /* 5909 */ 'L', 'D', 'S', 'T', 'U', 'B', 'A', 'r', 'r', 0,
  /* 5919 */ 'L', 'D', 'D', 'A', 'r', 'r', 0,
  /* 5926 */ 'L', 'D', 'A', 'r', 'r', 0,
  /* 5932 */ 'S', 'T', 'D', 'A', 'r', 'r', 0,
  /* 5939 */ 'L', 'D', 'D', 'F', 'A', 'r', 'r', 0,
  /* 5947 */ 'L', 'D', 'F', 'A', 'r', 'r', 0,
  /* 5954 */ 'S', 'T', 'D', 'F', 'A', 'r', 'r', 0,
  /* 5962 */ 'L', 'D', 'Q', 'F', 'A', 'r', 'r', 0,
  /* 5970 */ 'S', 'T', 'Q', 'F', 'A', 'r', 'r', 0,
  /* 5978 */ 'S', 'T', 'F', 'A', 'r', 'r', 0,
  /* 5985 */ 'L', 'D', 'S', 'H', 'A', 'r', 'r', 0,
  /* 5993 */ 'S', 'T', 'H', 'A', 'r', 'r', 0,
  /* 6000 */ 'L', 'D', 'U', 'H', 'A', 'r', 'r', 0,
  /* 6008 */ 'S', 'W', 'A', 'P', 'A', 'r', 'r', 0,
  /* 6016 */ 'S', 'R', 'A', 'r', 'r', 0,
  /* 6022 */ 'C', 'A', 'S', 'A', 'r', 'r', 0,
  /* 6029 */ 'S', 'T', 'A', 'r', 'r', 0,
  /* 6035 */ 'L', 'D', 'S', 'B', 'r', 'r', 0,
  /* 6042 */ 'S', 'T', 'B', 'r', 'r', 0,
  /* 6048 */ 'L', 'D', 'U', 'B', 'r', 'r', 0,
  /* 6055 */ 'S', 'U', 'B', 'r', 'r', 0,
  /* 6061 */ 'L', 'D', 'S', 'T', 'U', 'B', 'r', 'r', 0,
  /* 6070 */ 'S', 'M', 'A', 'C', 'r', 'r', 0,
  /* 6077 */ 'U', 'M', 'A', 'C', 'r', 'r', 0,
  /* 6084 */ 'S', 'U', 'B', 'C', 'r', 'r', 0,
  /* 6091 */ 'T', 'S', 'U', 'B', 'C', 'C', 'r', 'r', 0,
  /* 6100 */ 'T', 'A', 'D', 'D', 'C', 'C', 'r', 'r', 0,
  /* 6109 */ 'A', 'N', 'D', 'C', 'C', 'r', 'r', 0,
  /* 6117 */ 'V', '9', 'M', 'O', 'V', 'F', 'C', 'C', 'r', 'r', 0,
  /* 6128 */ 'T', 'I', 'C', 'C', 'r', 'r', 0,
  /* 6135 */ 'M', 'O', 'V', 'I', 'C', 'C', 'r', 'r', 0,
  /* 6144 */ 'S', 'M', 'U', 'L', 'C', 'C', 'r', 'r', 0,
  /* 6153 */ 'U', 'M', 'U', 'L', 'C', 'C', 'r', 'r', 0,
  /* 6162 */ 'A', 'N', 'D', 'N', 'C', 'C', 'r', 'r', 0,
  /* 6171 */ 'O', 'R', 'N', 'C', 'C', 'r', 'r', 0,
  /* 6179 */ 'X', 'N', 'O', 'R', 'C', 'C', 'r', 'r', 0,
  /* 6188 */ 'X', 'O', 'R', 'C', 'C', 'r', 'r', 0,
  /* 6196 */ 'M', 'U', 'L', 'S', 'C', 'C', 'r', 'r', 0,
  /* 6205 */ 'S', 'D', 'I', 'V', 'C', 'C', 'r', 'r', 0,
  /* 6214 */ 'U', 'D', 'I', 'V', 'C', 'C', 'r', 'r', 0,
  /* 6223 */ 'T', 'X', 'C', 'C', 'r', 'r', 0,
  /* 6230 */ 'M', 'O', 'V', 'X', 'C', 'C', 'r', 'r', 0,
  /* 6239 */ 'A', 'D', 'D', 'C', 'r', 'r', 0,
  /* 6246 */ 'L', 'D', 'D', 'C', 'r', 'r', 0,
  /* 6253 */ 'L', 'D', 'C', 'r', 'r', 0,
  /* 6259 */ 'S', 'T', 'D', 'C', 'r', 'r', 0,
  /* 6266 */ 'P', 'O', 'P', 'C', 'r', 'r', 0,
  /* 6273 */ 'S', 'T', 'C', 'r', 'r', 0,
  /* 6279 */ 'T', 'L', 'S', '_', 'A', 'D', 'D', 'r', 'r', 0,
  /* 6289 */ 'L', 'D', 'D', 'r', 'r', 0,
  /* 6295 */ 'G', 'D', 'O', 'P', '_', 'L', 'D', 'r', 'r', 0,
  /* 6305 */ 'T', 'L', 'S', '_', 'L', 'D', 'r', 'r', 0,
  /* 6314 */ 'A', 'N', 'D', 'r', 'r', 0,
  /* 6320 */ 'B', 'I', 'N', 'D', 'r', 'r', 0,
  /* 6327 */ 'S', 'T', 'D', 'r', 'r', 0,
  /* 6333 */ 'S', 'U', 'B', 'E', 'r', 'r', 0,
  /* 6340 */ 'A', 'D', 'D', 'E', 'r', 'r', 0,
  /* 6347 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', 'r', 'r', 0,
  /* 6357 */ 'S', 'A', 'V', 'E', 'r', 'r', 0,
  /* 6364 */ 'L', 'D', 'D', 'F', 'r', 'r', 0,
  /* 6371 */ 'L', 'D', 'F', 'r', 'r', 0,
  /* 6377 */ 'S', 'T', 'D', 'F', 'r', 'r', 0,
  /* 6384 */ 'L', 'D', 'Q', 'F', 'r', 'r', 0,
  /* 6391 */ 'S', 'T', 'Q', 'F', 'r', 'r', 0,
  /* 6398 */ 'S', 'T', 'F', 'r', 'r', 0,
  /* 6404 */ 'L', 'D', 'S', 'H', 'r', 'r', 0,
  /* 6411 */ 'F', 'L', 'U', 'S', 'H', 'r', 'r', 0,
  /* 6419 */ 'S', 'T', 'H', 'r', 'r', 0,
  /* 6425 */ 'L', 'D', 'U', 'H', 'r', 'r', 0,
  /* 6432 */ 'C', 'A', 'L', 'L', 'r', 'r', 0,
  /* 6439 */ 'S', 'L', 'L', 'r', 'r', 0,
  /* 6445 */ 'J', 'M', 'P', 'L', 'r', 'r', 0,
  /* 6452 */ 'S', 'R', 'L', 'r', 'r', 0,
  /* 6458 */ 'S', 'M', 'U', 'L', 'r', 'r', 0,
  /* 6465 */ 'U', 'M', 'U', 'L', 'r', 'r', 0,
  /* 6472 */ 'W', 'R', 'W', 'I', 'M', 'r', 'r', 0,
  /* 6480 */ 'A', 'N', 'D', 'N', 'r', 'r', 0,
  /* 6487 */ 'O', 'R', 'N', 'r', 'r', 0,
  /* 6493 */ 'A', 'N', 'D', 'X', 'N', 'r', 'r', 0,
  /* 6501 */ 'O', 'R', 'X', 'N', 'r', 'r', 0,
  /* 6508 */ 'T', 'R', 'A', 'P', 'r', 'r', 0,
  /* 6515 */ 'S', 'W', 'A', 'P', 'r', 'r', 0,
  /* 6522 */ 'C', 'M', 'P', 'r', 'r', 0,
  /* 6528 */ 'S', 'T', 'D', 'C', 'Q', 'r', 'r', 0,
  /* 6536 */ 'S', 'T', 'D', 'F', 'Q', 'r', 'r', 0,
  /* 6544 */ 'W', 'R', 'T', 'B', 'R', 'r', 'r', 0,
  /* 6552 */ 'X', 'N', 'O', 'R', 'r', 'r', 0,
  /* 6559 */ 'X', 'O', 'R', 'r', 'r', 0,
  /* 6565 */ 'W', 'R', 'P', 'R', 'r', 'r', 0,
  /* 6572 */ 'W', 'R', 'A', 'S', 'R', 'r', 'r', 0,
  /* 6580 */ 'L', 'D', 'C', 'S', 'R', 'r', 'r', 0,
  /* 6588 */ 'S', 'T', 'C', 'S', 'R', 'r', 'r', 0,
  /* 6596 */ 'L', 'D', 'F', 'S', 'R', 'r', 'r', 0,
  /* 6604 */ 'S', 'T', 'F', 'S', 'R', 'r', 'r', 0,
  /* 6612 */ 'L', 'D', 'X', 'F', 'S', 'R', 'r', 'r', 0,
  /* 6621 */ 'S', 'T', 'X', 'F', 'S', 'R', 'r', 'r', 0,
  /* 6630 */ 'P', 'W', 'R', 'P', 'S', 'R', 'r', 'r', 0,
  /* 6639 */ 'C', 'A', 'S', 'r', 'r', 0,
  /* 6645 */ 'S', 'T', 'r', 'r', 0,
  /* 6650 */ 'R', 'E', 'T', 'T', 'r', 'r', 0,
  /* 6657 */ 'S', 'D', 'I', 'V', 'r', 'r', 0,
  /* 6664 */ 'U', 'D', 'I', 'V', 'r', 'r', 0,
  /* 6671 */ 'T', 'S', 'U', 'B', 'C', 'C', 'T', 'V', 'r', 'r', 0,
  /* 6682 */ 'T', 'A', 'D', 'D', 'C', 'C', 'T', 'V', 'r', 'r', 0,
  /* 6693 */ 'L', 'D', 'S', 'W', 'r', 'r', 0,
  /* 6700 */ 'S', 'R', 'A', 'X', 'r', 'r', 0,
  /* 6707 */ 'S', 'U', 'B', 'X', 'r', 'r', 0,
  /* 6714 */ 'T', 'L', 'S', '_', 'A', 'D', 'D', 'X', 'r', 'r', 0,
  /* 6725 */ 'G', 'D', 'O', 'P', '_', 'L', 'D', 'X', 'r', 'r', 0,
  /* 6736 */ 'T', 'L', 'S', '_', 'L', 'D', 'X', 'r', 'r', 0,
  /* 6746 */ 'A', 'N', 'D', 'X', 'r', 'r', 0,
  /* 6753 */ 'S', 'L', 'L', 'X', 'r', 'r', 0,
  /* 6760 */ 'S', 'R', 'L', 'X', 'r', 'r', 0,
  /* 6767 */ 'M', 'U', 'L', 'X', 'r', 'r', 0,
  /* 6774 */ 'X', 'N', 'O', 'R', 'X', 'r', 'r', 0,
  /* 6782 */ 'X', 'O', 'R', 'X', 'r', 'r', 0,
  /* 6789 */ 'C', 'A', 'S', 'X', 'r', 'r', 0,
  /* 6796 */ 'S', 'T', 'X', 'r', 'r', 0,
  /* 6802 */ 'S', 'D', 'I', 'V', 'X', 'r', 'r', 0,
  /* 6810 */ 'U', 'D', 'I', 'V', 'X', 'r', 'r', 0,
  /* 6818 */ 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'r', 'r', 0,
  /* 6828 */ 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'r', 'r', 0,
  /* 6838 */ 'M', 'O', 'V', 'R', 'G', 'Z', 'r', 'r', 0,
  /* 6847 */ 'M', 'O', 'V', 'R', 'L', 'Z', 'r', 'r', 0,
  /* 6856 */ 'M', 'O', 'V', 'R', 'N', 'Z', 'r', 'r', 0,
  /* 6865 */ 'M', 'O', 'V', 'R', 'R', 'Z', 'r', 'r', 0,
  /* 6874 */ 'B', 'P', 'G', 'E', 'Z', 'a', 'p', 't', 0,
  /* 6883 */ 'B', 'P', 'L', 'E', 'Z', 'a', 'p', 't', 0,
  /* 6892 */ 'B', 'P', 'G', 'Z', 'a', 'p', 't', 0,
  /* 6900 */ 'B', 'P', 'L', 'Z', 'a', 'p', 't', 0,
  /* 6908 */ 'B', 'P', 'N', 'Z', 'a', 'p', 't', 0,
  /* 6916 */ 'B', 'P', 'Z', 'a', 'p', 't', 0,
  /* 6923 */ 'B', 'P', 'G', 'E', 'Z', 'n', 'a', 'p', 't', 0,
  /* 6933 */ 'B', 'P', 'L', 'E', 'Z', 'n', 'a', 'p', 't', 0,
  /* 6943 */ 'B', 'P', 'G', 'Z', 'n', 'a', 'p', 't', 0,
  /* 6952 */ 'B', 'P', 'L', 'Z', 'n', 'a', 'p', 't', 0,
  /* 6961 */ 'B', 'P', 'N', 'Z', 'n', 'a', 'p', 't', 0,
  /* 6970 */ 'B', 'P', 'Z', 'n', 'a', 'p', 't', 0,
  0
};

extern const unsigned SparcInstrNameIndices[] = {
    2102U, 2566U, 3251U, 2838U, 2235U, 2216U, 2244U, 2391U, 
    1954U, 1969U, 1920U, 1996U, 3895U, 1822U, 4543U, 1933U, 
    2098U, 2225U, 1655U, 4935U, 1735U, 4463U, 1363U, 1606U, 
    1643U, 2949U, 2379U, 4392U, 1509U, 3056U, 2059U, 4381U, 
    1772U, 3029U, 3016U, 3287U, 4206U, 4229U, 2302U, 2358U, 
    2331U, 2261U, 4573U, 4603U, 2663U, 1186U, 538U, 2494U, 
    4649U, 4656U, 2526U, 2533U, 2540U, 2550U, 1341U, 3503U, 
    3466U, 1918U, 2100U, 4817U, 1832U, 4174U, 3742U, 4478U, 
    3759U, 3413U, 943U, 3872U, 4403U, 3547U, 4510U, 1857U, 
    1436U, 917U, 1418U, 4422U, 2641U, 3312U, 1074U, 1018U, 
    1048U, 1059U, 999U, 1029U, 1801U, 1785U, 3931U, 2010U, 
    2027U, 1202U, 544U, 1347U, 1300U, 3508U, 3472U, 4794U, 
    2789U, 4777U, 2772U, 1153U, 521U, 4712U, 2707U, 1635U, 
    1390U, 4193U, 895U, 3961U, 4587U, 935U, 4340U, 4328U, 
    4453U, 2051U, 4566U, 1983U, 4596U, 2288U, 3378U, 3364U, 
    2281U, 3371U, 3540U, 2412U, 2991U, 2984U, 4184U, 2911U, 
    1676U, 2895U, 1627U, 2903U, 1668U, 2887U, 1619U, 2927U, 
    2919U, 2084U, 2076U, 4092U, 4082U, 4072U, 4062U, 4112U, 
    4102U, 4854U, 4864U, 4122U, 4135U, 4874U, 4884U, 4148U, 
    4161U, 1111U, 500U, 2436U, 469U, 992U, 4628U, 2505U, 
    4670U, 2158U, 3075U, 178U, 2044U, 170U, 0U, 1947U, 
    4558U, 907U, 2140U, 2149U, 2966U, 2975U, 3660U, 2678U, 
    3912U, 1866U, 2598U, 2608U, 1684U, 1699U, 2576U, 2587U, 
    1192U, 2172U, 2741U, 4746U, 2765U, 4770U, 3667U, 1409U, 
    1399U, 3246U, 4253U, 4281U, 4260U, 3428U, 4947U, 1900U, 
    4940U, 1882U, 3008U, 2958U, 1809U, 2294U, 3793U, 2805U, 
    4487U, 3404U, 4414U, 4440U, 4520U, 3274U, 1722U, 964U, 
    1139U, 507U, 2464U, 4635U, 2512U, 475U, 4495U, 3331U, 
    3347U, 4926U, 1751U, 1847U, 4220U, 2935U, 1118U, 2443U, 
    1094U, 2419U, 4695U, 2690U, 1170U, 2478U, 1325U, 3488U, 
    3450U, 4729U, 2724U, 4753U, 2748U, 4831U, 4838U, 2861U, 
    3041U, 4810U, 586U, 697U, 804U, 622U, 733U, 840U, 
    663U, 770U, 877U, 604U, 715U, 822U, 4225U, 5059U, 
    6101U, 5197U, 6239U, 5288U, 6340U, 986U, 560U, 5646U, 
    6718U, 5234U, 6283U, 3264U, 2396U, 5067U, 6109U, 5120U, 
    6162U, 5433U, 6480U, 6493U, 5659U, 6746U, 5262U, 6314U, 
    401U, 156U, 422U, 429U, 1377U, 454U, 5268U, 6320U, 
    2166U, 568U, 432U, 4301U, 4351U, 5772U, 6874U, 5821U, 
    6923U, 5790U, 6892U, 5841U, 6943U, 681U, 439U, 4310U, 
    4359U, 5781U, 6883U, 5831U, 6933U, 5798U, 6900U, 5850U, 
    6952U, 5806U, 6908U, 5859U, 6961U, 788U, 446U, 4319U, 
    4367U, 5814U, 6916U, 5868U, 6970U, 1742U, 2317U, 5385U, 
    6432U, 9U, 6022U, 6789U, 6639U, 1376U, 453U, 281U, 
    108U, 415U, 5460U, 6522U, 248U, 2190U, 2821U, 2626U, 
    75U, 2182U, 2812U, 2618U, 409U, 2198U, 2830U, 2634U, 
    1526U, 3154U, 3925U, 1218U, 3088U, 3686U, 488U, 1289U, 
    29U, 3565U, 186U, 3616U, 3714U, 1383U, 461U, 303U, 
    1496U, 320U, 130U, 337U, 147U, 255U, 82U, 264U, 
    91U, 3148U, 3841U, 1539U, 3167U, 3995U, 3109U, 2122U, 
    3122U, 3807U, 4900U, 1317U, 1224U, 3692U, 1087U, 3679U, 
    1462U, 3128U, 3813U, 1502U, 3847U, 2092U, 4663U, 5359U, 
    6411U, 312U, 1545U, 576U, 687U, 794U, 3173U, 641U, 
    750U, 857U, 1551U, 3179U, 4007U, 1571U, 3199U, 4027U, 
    1561U, 3189U, 4017U, 1580U, 3208U, 4036U, 1589U, 3217U, 
    4045U, 1598U, 3226U, 4054U, 4001U, 653U, 760U, 867U, 
    390U, 367U, 346U, 2205U, 4617U, 1261U, 378U, 355U, 
    3116U, 3780U, 1239U, 3707U, 1294U, 3720U, 1255U, 3103U, 
    3774U, 1231U, 3699U, 1267U, 3786U, 3393U, 3859U, 38U, 
    3575U, 195U, 3626U, 1281U, 1767U, 3727U, 3389U, 44U, 
    3582U, 201U, 3633U, 3854U, 273U, 100U, 4845U, 240U, 
    3651U, 67U, 3600U, 213U, 1714U, 232U, 3642U, 59U, 
    3591U, 1468U, 2128U, 3819U, 4914U, 329U, 139U, 289U, 
    116U, 1274U, 1532U, 3160U, 3988U, 225U, 52U, 23U, 
    3558U, 164U, 3609U, 296U, 123U, 1474U, 2134U, 3134U, 
    4920U, 1081U, 3082U, 3673U, 3398U, 3865U, 3445U, 3889U, 
    1480U, 3140U, 3833U, 2943U, 3800U, 6725U, 6295U, 5398U, 
    6445U, 5926U, 5518U, 6580U, 5211U, 6253U, 5919U, 5204U, 
    6246U, 5939U, 5312U, 6364U, 5251U, 6289U, 5947U, 5534U, 
    6596U, 5319U, 6371U, 5962U, 5332U, 6384U, 5886U, 4993U, 
    6035U, 5985U, 5352U, 6404U, 5909U, 5019U, 6061U, 5625U, 
    6693U, 5901U, 5006U, 6048U, 6000U, 5373U, 6425U, 5550U, 
    6612U, 5653U, 6730U, 5257U, 6300U, 5240U, 5230U, 4375U, 
    4971U, 4906U, 5077U, 6119U, 5093U, 6135U, 5716U, 6818U, 
    5736U, 6838U, 5726U, 6828U, 5745U, 6847U, 5754U, 6856U, 
    5763U, 6865U, 4677U, 4686U, 3825U, 5188U, 6230U, 1486U, 
    5154U, 6196U, 5680U, 6767U, 3004U, 5139U, 6181U, 5129U, 
    6171U, 5440U, 6487U, 6501U, 5688U, 6776U, 5492U, 6554U, 
    4537U, 2854U, 6266U, 4954U, 5876U, 5568U, 6630U, 3528U, 
    981U, 3523U, 3534U, 3240U, 2560U, 5295U, 6347U, 4216U, 
    2407U, 5582U, 6650U, 5305U, 6357U, 5163U, 6205U, 5700U, 
    6802U, 5589U, 6657U, 4979U, 4964U, 2878U, 2500U, 3385U, 
    5666U, 6753U, 5392U, 6439U, 5028U, 6070U, 5102U, 6144U, 
    5411U, 6458U, 5632U, 6700U, 4987U, 6016U, 5673U, 6760U, 
    5405U, 6452U, 6029U, 3234U, 5894U, 5000U, 6042U, 5526U, 
    6588U, 5224U, 6273U, 5932U, 5466U, 6528U, 5217U, 6259U, 
    5954U, 5474U, 6536U, 5325U, 6377U, 5275U, 6327U, 5978U, 
    5542U, 6604U, 5346U, 6398U, 5993U, 5367U, 6419U, 5970U, 
    5339U, 6391U, 5559U, 6621U, 5694U, 6796U, 5577U, 6645U, 
    5050U, 6092U, 5042U, 6084U, 5281U, 6333U, 5639U, 6707U, 
    5013U, 6055U, 6008U, 5453U, 6515U, 19U, 209U, 221U, 
    5614U, 6682U, 5058U, 6100U, 2312U, 5380U, 5086U, 6128U, 
    6714U, 6279U, 2322U, 6736U, 6305U, 5446U, 6508U, 5603U, 
    6671U, 5049U, 6091U, 5181U, 6223U, 5172U, 6214U, 5708U, 
    6810U, 5596U, 6664U, 5035U, 6077U, 5111U, 6153U, 2106U, 
    5418U, 6465U, 2998U, 1494U, 1246U, 3094U, 3733U, 3146U, 
    3839U, 574U, 639U, 651U, 5075U, 6117U, 5510U, 6572U, 
    5503U, 6565U, 5569U, 6631U, 5482U, 6544U, 5425U, 6472U, 
    4894U, 2114U, 5137U, 6179U, 6774U, 5490U, 6552U, 5146U, 
    6188U, 5687U, 6782U, 5497U, 6559U, 
};

static inline void InitSparcMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, nullptr, nullptr, 789);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct SparcGenInstrInfo : public TargetInstrInfo {
  explicit SparcGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~SparcGenInstrInfo() override = default;

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
extern const MCInstrDesc SparcInsts[];
extern const unsigned SparcInstrNameIndices[];
extern const char SparcInstrNameData[];
SparcGenInstrInfo::SparcGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, nullptr, nullptr, 789);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace SP {
namespace OpName {
enum {
  OPERAND_LAST
};
} // end namespace OpName
} // end namespace SP
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace SP {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace SP
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace SP {
namespace OpTypes {
enum OperandType {
  CCOp = 0,
  MEMri = 1,
  MEMrr = 2,
  MembarTag = 3,
  TailRelocSymGOTLoad = 4,
  TailRelocSymTLSAdd = 5,
  TailRelocSymTLSCall = 6,
  TailRelocSymTLSLoad = 7,
  bprtarget = 8,
  bprtarget16 = 9,
  brtarget = 10,
  calltarget = 11,
  f32imm = 12,
  f64imm = 13,
  getPCX = 14,
  i16imm = 15,
  i1imm = 16,
  i32imm = 17,
  i64imm = 18,
  i8imm = 19,
  ptype0 = 20,
  ptype1 = 21,
  ptype2 = 22,
  ptype3 = 23,
  ptype4 = 24,
  ptype5 = 25,
  shift_imm5 = 26,
  shift_imm6 = 27,
  simm13Op = 28,
  type0 = 29,
  type1 = 30,
  type2 = 31,
  type3 = 32,
  type4 = 33,
  type5 = 34,
  untyped_imm_0 = 35,
  ASRRegs = 36,
  CoprocPair = 37,
  CoprocRegs = 38,
  DFPRegs = 39,
  FCCRegs = 40,
  FPRegs = 41,
  I64Regs = 42,
  IntPair = 43,
  IntRegs = 44,
  LowDFPRegs = 45,
  LowQFPRegs = 46,
  PRRegs = 47,
  QFPRegs = 48,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace SP {
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
    /* ADJCALLSTACKDOWN */
    628,
    /* ADJCALLSTACKUP */
    630,
    /* GETPCX */
    632,
    /* SELECT_CC_DFP_FCC */
    633,
    /* SELECT_CC_DFP_ICC */
    637,
    /* SELECT_CC_DFP_XCC */
    641,
    /* SELECT_CC_FP_FCC */
    645,
    /* SELECT_CC_FP_ICC */
    649,
    /* SELECT_CC_FP_XCC */
    653,
    /* SELECT_CC_Int_FCC */
    657,
    /* SELECT_CC_Int_ICC */
    661,
    /* SELECT_CC_Int_XCC */
    665,
    /* SELECT_CC_QFP_FCC */
    669,
    /* SELECT_CC_QFP_ICC */
    673,
    /* SELECT_CC_QFP_XCC */
    677,
    /* SET */
    681,
    /* ADDCCri */
    683,
    /* ADDCCrr */
    686,
    /* ADDCri */
    689,
    /* ADDCrr */
    692,
    /* ADDEri */
    695,
    /* ADDErr */
    698,
    /* ADDXC */
    701,
    /* ADDXCCC */
    704,
    /* ADDXri */
    707,
    /* ADDXrr */
    710,
    /* ADDri */
    713,
    /* ADDrr */
    716,
    /* ALIGNADDR */
    719,
    /* ALIGNADDRL */
    722,
    /* ANDCCri */
    725,
    /* ANDCCrr */
    728,
    /* ANDNCCri */
    731,
    /* ANDNCCrr */
    734,
    /* ANDNri */
    737,
    /* ANDNrr */
    740,
    /* ANDXNrr */
    743,
    /* ANDXri */
    746,
    /* ANDXrr */
    749,
    /* ANDri */
    752,
    /* ANDrr */
    755,
    /* ARRAY16 */
    758,
    /* ARRAY32 */
    761,
    /* ARRAY8 */
    764,
    /* BA */
    767,
    /* BCOND */
    768,
    /* BCONDA */
    770,
    /* BINDri */
    772,
    /* BINDrr */
    774,
    /* BMASK */
    776,
    /* BPFCC */
    779,
    /* BPFCCA */
    782,
    /* BPFCCANT */
    785,
    /* BPFCCNT */
    788,
    /* BPGEZapn */
    791,
    /* BPGEZapt */
    793,
    /* BPGEZnapn */
    795,
    /* BPGEZnapt */
    797,
    /* BPGZapn */
    799,
    /* BPGZapt */
    801,
    /* BPGZnapn */
    803,
    /* BPGZnapt */
    805,
    /* BPICC */
    807,
    /* BPICCA */
    809,
    /* BPICCANT */
    811,
    /* BPICCNT */
    813,
    /* BPLEZapn */
    815,
    /* BPLEZapt */
    817,
    /* BPLEZnapn */
    819,
    /* BPLEZnapt */
    821,
    /* BPLZapn */
    823,
    /* BPLZapt */
    825,
    /* BPLZnapn */
    827,
    /* BPLZnapt */
    829,
    /* BPNZapn */
    831,
    /* BPNZapt */
    833,
    /* BPNZnapn */
    835,
    /* BPNZnapt */
    837,
    /* BPXCC */
    839,
    /* BPXCCA */
    841,
    /* BPXCCANT */
    843,
    /* BPXCCNT */
    845,
    /* BPZapn */
    847,
    /* BPZapt */
    849,
    /* BPZnapn */
    851,
    /* BPZnapt */
    853,
    /* BSHUFFLE */
    855,
    /* CALL */
    858,
    /* CALLri */
    859,
    /* CALLrr */
    861,
    /* CASAasi10 */
    863,
    /* CASArr */
    867,
    /* CASXrr */
    872,
    /* CASrr */
    876,
    /* CBCOND */
    880,
    /* CBCONDA */
    882,
    /* CMASK16 */
    884,
    /* CMASK32 */
    885,
    /* CMASK8 */
    886,
    /* CMPri */
    887,
    /* CMPrr */
    889,
    /* EDGE16 */
    891,
    /* EDGE16L */
    894,
    /* EDGE16LN */
    897,
    /* EDGE16N */
    900,
    /* EDGE32 */
    903,
    /* EDGE32L */
    906,
    /* EDGE32LN */
    909,
    /* EDGE32N */
    912,
    /* EDGE8 */
    915,
    /* EDGE8L */
    918,
    /* EDGE8LN */
    921,
    /* EDGE8N */
    924,
    /* FABSD */
    927,
    /* FABSQ */
    929,
    /* FABSS */
    931,
    /* FADDD */
    933,
    /* FADDQ */
    936,
    /* FADDS */
    939,
    /* FALIGNADATA */
    942,
    /* FAND */
    945,
    /* FANDNOT1 */
    948,
    /* FANDNOT1S */
    951,
    /* FANDNOT2 */
    954,
    /* FANDNOT2S */
    957,
    /* FANDS */
    960,
    /* FBCOND */
    963,
    /* FBCONDA */
    965,
    /* FCHKSM16 */
    967,
    /* FCMPD */
    970,
    /* FCMPEQ16 */
    972,
    /* FCMPEQ32 */
    975,
    /* FCMPGT16 */
    978,
    /* FCMPGT32 */
    981,
    /* FCMPLE16 */
    984,
    /* FCMPLE32 */
    987,
    /* FCMPNE16 */
    990,
    /* FCMPNE32 */
    993,
    /* FCMPQ */
    996,
    /* FCMPS */
    998,
    /* FDIVD */
    1000,
    /* FDIVQ */
    1003,
    /* FDIVS */
    1006,
    /* FDMULQ */
    1009,
    /* FDTOI */
    1012,
    /* FDTOQ */
    1014,
    /* FDTOS */
    1016,
    /* FDTOX */
    1018,
    /* FEXPAND */
    1020,
    /* FHADDD */
    1022,
    /* FHADDS */
    1025,
    /* FHSUBD */
    1028,
    /* FHSUBS */
    1031,
    /* FITOD */
    1034,
    /* FITOQ */
    1036,
    /* FITOS */
    1038,
    /* FLCMPD */
    1040,
    /* FLCMPS */
    1043,
    /* FLUSH */
    1046,
    /* FLUSHW */
    1046,
    /* FLUSHri */
    1046,
    /* FLUSHrr */
    1048,
    /* FMEAN16 */
    1050,
    /* FMOVD */
    1053,
    /* FMOVD_FCC */
    1055,
    /* FMOVD_ICC */
    1059,
    /* FMOVD_XCC */
    1063,
    /* FMOVQ */
    1067,
    /* FMOVQ_FCC */
    1069,
    /* FMOVQ_ICC */
    1073,
    /* FMOVQ_XCC */
    1077,
    /* FMOVRGEZD */
    1081,
    /* FMOVRGEZQ */
    1084,
    /* FMOVRGEZS */
    1087,
    /* FMOVRGZD */
    1090,
    /* FMOVRGZQ */
    1093,
    /* FMOVRGZS */
    1096,
    /* FMOVRLEZD */
    1099,
    /* FMOVRLEZQ */
    1102,
    /* FMOVRLEZS */
    1105,
    /* FMOVRLZD */
    1108,
    /* FMOVRLZQ */
    1111,
    /* FMOVRLZS */
    1114,
    /* FMOVRNZD */
    1117,
    /* FMOVRNZQ */
    1120,
    /* FMOVRNZS */
    1123,
    /* FMOVRZD */
    1126,
    /* FMOVRZQ */
    1129,
    /* FMOVRZS */
    1132,
    /* FMOVS */
    1135,
    /* FMOVS_FCC */
    1137,
    /* FMOVS_ICC */
    1141,
    /* FMOVS_XCC */
    1145,
    /* FMUL8SUX16 */
    1149,
    /* FMUL8ULX16 */
    1152,
    /* FMUL8X16 */
    1155,
    /* FMUL8X16AL */
    1158,
    /* FMUL8X16AU */
    1161,
    /* FMULD */
    1164,
    /* FMULD8SUX16 */
    1167,
    /* FMULD8ULX16 */
    1170,
    /* FMULQ */
    1173,
    /* FMULS */
    1176,
    /* FNADDD */
    1179,
    /* FNADDS */
    1182,
    /* FNAND */
    1185,
    /* FNANDS */
    1188,
    /* FNEGD */
    1191,
    /* FNEGQ */
    1193,
    /* FNEGS */
    1195,
    /* FNHADDD */
    1197,
    /* FNHADDS */
    1200,
    /* FNMULD */
    1203,
    /* FNMULS */
    1206,
    /* FNOR */
    1209,
    /* FNORS */
    1212,
    /* FNOT1 */
    1215,
    /* FNOT1S */
    1217,
    /* FNOT2 */
    1219,
    /* FNOT2S */
    1221,
    /* FNSMULD */
    1223,
    /* FONE */
    1226,
    /* FONES */
    1228,
    /* FOR */
    1230,
    /* FORNOT1 */
    1233,
    /* FORNOT1S */
    1236,
    /* FORNOT2 */
    1239,
    /* FORNOT2S */
    1242,
    /* FORS */
    1245,
    /* FPACK16 */
    1248,
    /* FPACK32 */
    1250,
    /* FPACKFIX */
    1253,
    /* FPADD16 */
    1255,
    /* FPADD16S */
    1258,
    /* FPADD32 */
    1261,
    /* FPADD32S */
    1264,
    /* FPADD64 */
    1267,
    /* FPMERGE */
    1270,
    /* FPSUB16 */
    1273,
    /* FPSUB16S */
    1276,
    /* FPSUB32 */
    1279,
    /* FPSUB32S */
    1282,
    /* FQTOD */
    1285,
    /* FQTOI */
    1287,
    /* FQTOS */
    1289,
    /* FQTOX */
    1291,
    /* FSLAS16 */
    1293,
    /* FSLAS32 */
    1296,
    /* FSLL16 */
    1299,
    /* FSLL32 */
    1302,
    /* FSMULD */
    1305,
    /* FSQRTD */
    1308,
    /* FSQRTQ */
    1310,
    /* FSQRTS */
    1312,
    /* FSRA16 */
    1314,
    /* FSRA32 */
    1317,
    /* FSRC1 */
    1320,
    /* FSRC1S */
    1322,
    /* FSRC2 */
    1324,
    /* FSRC2S */
    1326,
    /* FSRL16 */
    1328,
    /* FSRL32 */
    1331,
    /* FSTOD */
    1334,
    /* FSTOI */
    1336,
    /* FSTOQ */
    1338,
    /* FSTOX */
    1340,
    /* FSUBD */
    1342,
    /* FSUBQ */
    1345,
    /* FSUBS */
    1348,
    /* FXNOR */
    1351,
    /* FXNORS */
    1354,
    /* FXOR */
    1357,
    /* FXORS */
    1360,
    /* FXTOD */
    1363,
    /* FXTOQ */
    1365,
    /* FXTOS */
    1367,
    /* FZERO */
    1369,
    /* FZEROS */
    1371,
    /* GDOP_LDXrr */
    1373,
    /* GDOP_LDrr */
    1377,
    /* JMPLri */
    1381,
    /* JMPLrr */
    1384,
    /* LDArr */
    1387,
    /* LDCSRri */
    1391,
    /* LDCSRrr */
    1393,
    /* LDCri */
    1395,
    /* LDCrr */
    1398,
    /* LDDArr */
    1401,
    /* LDDCri */
    1405,
    /* LDDCrr */
    1408,
    /* LDDFArr */
    1411,
    /* LDDFri */
    1415,
    /* LDDFrr */
    1418,
    /* LDDri */
    1421,
    /* LDDrr */
    1424,
    /* LDFArr */
    1427,
    /* LDFSRri */
    1431,
    /* LDFSRrr */
    1433,
    /* LDFri */
    1435,
    /* LDFrr */
    1438,
    /* LDQFArr */
    1441,
    /* LDQFri */
    1445,
    /* LDQFrr */
    1448,
    /* LDSBArr */
    1451,
    /* LDSBri */
    1455,
    /* LDSBrr */
    1458,
    /* LDSHArr */
    1461,
    /* LDSHri */
    1465,
    /* LDSHrr */
    1468,
    /* LDSTUBArr */
    1471,
    /* LDSTUBri */
    1475,
    /* LDSTUBrr */
    1478,
    /* LDSWri */
    1481,
    /* LDSWrr */
    1484,
    /* LDUBArr */
    1487,
    /* LDUBri */
    1491,
    /* LDUBrr */
    1494,
    /* LDUHArr */
    1497,
    /* LDUHri */
    1501,
    /* LDUHrr */
    1504,
    /* LDXFSRri */
    1507,
    /* LDXFSRrr */
    1509,
    /* LDXri */
    1511,
    /* LDXrr */
    1514,
    /* LDri */
    1517,
    /* LDrr */
    1520,
    /* LEAX_ADDri */
    1523,
    /* LEA_ADDri */
    1526,
    /* LZCNT */
    1529,
    /* MEMBARi */
    1531,
    /* MOVDTOX */
    1532,
    /* MOVFCCri */
    1534,
    /* MOVFCCrr */
    1538,
    /* MOVICCri */
    1542,
    /* MOVICCrr */
    1546,
    /* MOVRGEZri */
    1550,
    /* MOVRGEZrr */
    1553,
    /* MOVRGZri */
    1556,
    /* MOVRGZrr */
    1559,
    /* MOVRLEZri */
    1562,
    /* MOVRLEZrr */
    1565,
    /* MOVRLZri */
    1568,
    /* MOVRLZrr */
    1571,
    /* MOVRNZri */
    1574,
    /* MOVRNZrr */
    1577,
    /* MOVRRZri */
    1580,
    /* MOVRRZrr */
    1583,
    /* MOVSTOSW */
    1586,
    /* MOVSTOUW */
    1588,
    /* MOVWTOS */
    1590,
    /* MOVXCCri */
    1592,
    /* MOVXCCrr */
    1596,
    /* MOVXTOD */
    1600,
    /* MULSCCri */
    1602,
    /* MULSCCrr */
    1605,
    /* MULXri */
    1608,
    /* MULXrr */
    1611,
    /* NOP */
    1614,
    /* ORCCri */
    1614,
    /* ORCCrr */
    1617,
    /* ORNCCri */
    1620,
    /* ORNCCrr */
    1623,
    /* ORNri */
    1626,
    /* ORNrr */
    1629,
    /* ORXNrr */
    1632,
    /* ORXri */
    1635,
    /* ORXrr */
    1638,
    /* ORri */
    1641,
    /* ORrr */
    1644,
    /* PDIST */
    1647,
    /* PDISTN */
    1650,
    /* POPCrr */
    1653,
    /* PREFETCHi */
    1655,
    /* PREFETCHr */
    1658,
    /* PWRPSRri */
    1661,
    /* PWRPSRrr */
    1663,
    /* RDASR */
    1665,
    /* RDPC */
    1667,
    /* RDPR */
    1668,
    /* RDPSR */
    1670,
    /* RDTBR */
    1671,
    /* RDWIM */
    1672,
    /* RESTOREri */
    1673,
    /* RESTORErr */
    1676,
    /* RET */
    1679,
    /* RETL */
    1680,
    /* RETTri */
    1681,
    /* RETTrr */
    1683,
    /* SAVEri */
    1685,
    /* SAVErr */
    1688,
    /* SDIVCCri */
    1691,
    /* SDIVCCrr */
    1694,
    /* SDIVXri */
    1697,
    /* SDIVXrr */
    1700,
    /* SDIVri */
    1703,
    /* SDIVrr */
    1706,
    /* SETHIXi */
    1709,
    /* SETHIi */
    1711,
    /* SHUTDOWN */
    1713,
    /* SIAM */
    1713,
    /* SIR */
    1713,
    /* SLLXri */
    1714,
    /* SLLXrr */
    1717,
    /* SLLri */
    1720,
    /* SLLrr */
    1723,
    /* SMACri */
    1726,
    /* SMACrr */
    1730,
    /* SMULCCri */
    1734,
    /* SMULCCrr */
    1737,
    /* SMULri */
    1740,
    /* SMULrr */
    1743,
    /* SRAXri */
    1746,
    /* SRAXrr */
    1749,
    /* SRAri */
    1752,
    /* SRArr */
    1755,
    /* SRLXri */
    1758,
    /* SRLXrr */
    1761,
    /* SRLri */
    1764,
    /* SRLrr */
    1767,
    /* STArr */
    1770,
    /* STBAR */
    1774,
    /* STBArr */
    1774,
    /* STBri */
    1778,
    /* STBrr */
    1781,
    /* STCSRri */
    1784,
    /* STCSRrr */
    1786,
    /* STCri */
    1788,
    /* STCrr */
    1791,
    /* STDArr */
    1794,
    /* STDCQri */
    1798,
    /* STDCQrr */
    1800,
    /* STDCri */
    1802,
    /* STDCrr */
    1805,
    /* STDFArr */
    1808,
    /* STDFQri */
    1812,
    /* STDFQrr */
    1814,
    /* STDFri */
    1816,
    /* STDFrr */
    1819,
    /* STDri */
    1822,
    /* STDrr */
    1825,
    /* STFArr */
    1828,
    /* STFSRri */
    1832,
    /* STFSRrr */
    1834,
    /* STFri */
    1836,
    /* STFrr */
    1839,
    /* STHArr */
    1842,
    /* STHri */
    1846,
    /* STHrr */
    1849,
    /* STQFArr */
    1852,
    /* STQFri */
    1856,
    /* STQFrr */
    1859,
    /* STXFSRri */
    1862,
    /* STXFSRrr */
    1864,
    /* STXri */
    1866,
    /* STXrr */
    1869,
    /* STri */
    1872,
    /* STrr */
    1875,
    /* SUBCCri */
    1878,
    /* SUBCCrr */
    1881,
    /* SUBCri */
    1884,
    /* SUBCrr */
    1887,
    /* SUBEri */
    1890,
    /* SUBErr */
    1893,
    /* SUBXri */
    1896,
    /* SUBXrr */
    1899,
    /* SUBri */
    1902,
    /* SUBrr */
    1905,
    /* SWAPArr */
    1908,
    /* SWAPri */
    1913,
    /* SWAPrr */
    1917,
    /* TA1 */
    1921,
    /* TA3 */
    1921,
    /* TA5 */
    1921,
    /* TADDCCTVri */
    1921,
    /* TADDCCTVrr */
    1924,
    /* TADDCCri */
    1927,
    /* TADDCCrr */
    1930,
    /* TAIL_CALL */
    1933,
    /* TAIL_CALLri */
    1934,
    /* TICCri */
    1936,
    /* TICCrr */
    1939,
    /* TLS_ADDXrr */
    1942,
    /* TLS_ADDrr */
    1946,
    /* TLS_CALL */
    1950,
    /* TLS_LDXrr */
    1952,
    /* TLS_LDrr */
    1956,
    /* TRAPri */
    1960,
    /* TRAPrr */
    1963,
    /* TSUBCCTVri */
    1966,
    /* TSUBCCTVrr */
    1969,
    /* TSUBCCri */
    1972,
    /* TSUBCCrr */
    1975,
    /* TXCCri */
    1978,
    /* TXCCrr */
    1981,
    /* UDIVCCri */
    1984,
    /* UDIVCCrr */
    1987,
    /* UDIVXri */
    1990,
    /* UDIVXrr */
    1993,
    /* UDIVri */
    1996,
    /* UDIVrr */
    1999,
    /* UMACri */
    2002,
    /* UMACrr */
    2006,
    /* UMULCCri */
    2010,
    /* UMULCCrr */
    2013,
    /* UMULXHI */
    2016,
    /* UMULri */
    2019,
    /* UMULrr */
    2022,
    /* UNIMP */
    2025,
    /* V9FCMPD */
    2026,
    /* V9FCMPED */
    2029,
    /* V9FCMPEQ */
    2032,
    /* V9FCMPES */
    2035,
    /* V9FCMPQ */
    2038,
    /* V9FCMPS */
    2041,
    /* V9FMOVD_FCC */
    2044,
    /* V9FMOVQ_FCC */
    2049,
    /* V9FMOVS_FCC */
    2054,
    /* V9MOVFCCri */
    2059,
    /* V9MOVFCCrr */
    2064,
    /* WRASRri */
    2069,
    /* WRASRrr */
    2072,
    /* WRPRri */
    2075,
    /* WRPRrr */
    2078,
    /* WRPSRri */
    2081,
    /* WRPSRrr */
    2083,
    /* WRTBRri */
    2085,
    /* WRTBRrr */
    2087,
    /* WRWIMri */
    2089,
    /* WRWIMrr */
    2091,
    /* XMULX */
    2093,
    /* XMULXHI */
    2096,
    /* XNORCCri */
    2099,
    /* XNORCCrr */
    2102,
    /* XNORXrr */
    2105,
    /* XNORri */
    2108,
    /* XNORrr */
    2111,
    /* XORCCri */
    2114,
    /* XORCCrr */
    2117,
    /* XORXri */
    2120,
    /* XORXrr */
    2123,
    /* XORri */
    2126,
    /* XORrr */
    2129,
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
    /* ADJCALLSTACKDOWN */
    i32imm, i32imm, 
    /* ADJCALLSTACKUP */
    i32imm, i32imm, 
    /* GETPCX */
    getPCX, 
    /* SELECT_CC_DFP_FCC */
    DFPRegs, DFPRegs, DFPRegs, i32imm, 
    /* SELECT_CC_DFP_ICC */
    DFPRegs, DFPRegs, DFPRegs, i32imm, 
    /* SELECT_CC_DFP_XCC */
    DFPRegs, DFPRegs, DFPRegs, i32imm, 
    /* SELECT_CC_FP_FCC */
    FPRegs, FPRegs, FPRegs, i32imm, 
    /* SELECT_CC_FP_ICC */
    FPRegs, FPRegs, FPRegs, i32imm, 
    /* SELECT_CC_FP_XCC */
    FPRegs, FPRegs, FPRegs, i32imm, 
    /* SELECT_CC_Int_FCC */
    IntRegs, IntRegs, IntRegs, i32imm, 
    /* SELECT_CC_Int_ICC */
    IntRegs, IntRegs, IntRegs, i32imm, 
    /* SELECT_CC_Int_XCC */
    IntRegs, IntRegs, IntRegs, i32imm, 
    /* SELECT_CC_QFP_FCC */
    QFPRegs, QFPRegs, QFPRegs, i32imm, 
    /* SELECT_CC_QFP_ICC */
    QFPRegs, QFPRegs, QFPRegs, i32imm, 
    /* SELECT_CC_QFP_XCC */
    QFPRegs, QFPRegs, QFPRegs, i32imm, 
    /* SET */
    IntRegs, i32imm, 
    /* ADDCCri */
    IntRegs, IntRegs, simm13Op, 
    /* ADDCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* ADDCri */
    IntRegs, IntRegs, simm13Op, 
    /* ADDCrr */
    IntRegs, IntRegs, IntRegs, 
    /* ADDEri */
    IntRegs, IntRegs, simm13Op, 
    /* ADDErr */
    IntRegs, IntRegs, IntRegs, 
    /* ADDXC */
    I64Regs, I64Regs, I64Regs, 
    /* ADDXCCC */
    I64Regs, I64Regs, I64Regs, 
    /* ADDXri */
    I64Regs, I64Regs, i64imm, 
    /* ADDXrr */
    I64Regs, I64Regs, I64Regs, 
    /* ADDri */
    IntRegs, IntRegs, simm13Op, 
    /* ADDrr */
    IntRegs, IntRegs, IntRegs, 
    /* ALIGNADDR */
    I64Regs, I64Regs, I64Regs, 
    /* ALIGNADDRL */
    I64Regs, I64Regs, I64Regs, 
    /* ANDCCri */
    IntRegs, IntRegs, simm13Op, 
    /* ANDCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* ANDNCCri */
    IntRegs, IntRegs, simm13Op, 
    /* ANDNCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* ANDNri */
    IntRegs, IntRegs, simm13Op, 
    /* ANDNrr */
    IntRegs, IntRegs, IntRegs, 
    /* ANDXNrr */
    I64Regs, I64Regs, I64Regs, 
    /* ANDXri */
    I64Regs, I64Regs, i64imm, 
    /* ANDXrr */
    I64Regs, I64Regs, I64Regs, 
    /* ANDri */
    IntRegs, IntRegs, simm13Op, 
    /* ANDrr */
    IntRegs, IntRegs, IntRegs, 
    /* ARRAY16 */
    I64Regs, I64Regs, I64Regs, 
    /* ARRAY32 */
    I64Regs, I64Regs, I64Regs, 
    /* ARRAY8 */
    I64Regs, I64Regs, I64Regs, 
    /* BA */
    brtarget, 
    /* BCOND */
    brtarget, CCOp, 
    /* BCONDA */
    brtarget, CCOp, 
    /* BINDri */
    -1, i32imm, 
    /* BINDrr */
    -1, -1, 
    /* BMASK */
    I64Regs, I64Regs, I64Regs, 
    /* BPFCC */
    bprtarget, CCOp, FCCRegs, 
    /* BPFCCA */
    bprtarget, CCOp, FCCRegs, 
    /* BPFCCANT */
    bprtarget, CCOp, FCCRegs, 
    /* BPFCCNT */
    bprtarget, CCOp, FCCRegs, 
    /* BPGEZapn */
    I64Regs, bprtarget16, 
    /* BPGEZapt */
    I64Regs, bprtarget16, 
    /* BPGEZnapn */
    I64Regs, bprtarget16, 
    /* BPGEZnapt */
    I64Regs, bprtarget16, 
    /* BPGZapn */
    I64Regs, bprtarget16, 
    /* BPGZapt */
    I64Regs, bprtarget16, 
    /* BPGZnapn */
    I64Regs, bprtarget16, 
    /* BPGZnapt */
    I64Regs, bprtarget16, 
    /* BPICC */
    bprtarget, CCOp, 
    /* BPICCA */
    bprtarget, CCOp, 
    /* BPICCANT */
    bprtarget, CCOp, 
    /* BPICCNT */
    bprtarget, CCOp, 
    /* BPLEZapn */
    I64Regs, bprtarget16, 
    /* BPLEZapt */
    I64Regs, bprtarget16, 
    /* BPLEZnapn */
    I64Regs, bprtarget16, 
    /* BPLEZnapt */
    I64Regs, bprtarget16, 
    /* BPLZapn */
    I64Regs, bprtarget16, 
    /* BPLZapt */
    I64Regs, bprtarget16, 
    /* BPLZnapn */
    I64Regs, bprtarget16, 
    /* BPLZnapt */
    I64Regs, bprtarget16, 
    /* BPNZapn */
    I64Regs, bprtarget16, 
    /* BPNZapt */
    I64Regs, bprtarget16, 
    /* BPNZnapn */
    I64Regs, bprtarget16, 
    /* BPNZnapt */
    I64Regs, bprtarget16, 
    /* BPXCC */
    bprtarget, CCOp, 
    /* BPXCCA */
    bprtarget, CCOp, 
    /* BPXCCANT */
    bprtarget, CCOp, 
    /* BPXCCNT */
    bprtarget, CCOp, 
    /* BPZapn */
    I64Regs, bprtarget16, 
    /* BPZapt */
    I64Regs, bprtarget16, 
    /* BPZnapn */
    I64Regs, bprtarget16, 
    /* BPZnapt */
    I64Regs, bprtarget16, 
    /* BSHUFFLE */
    DFPRegs, DFPRegs, DFPRegs, 
    /* CALL */
    calltarget, 
    /* CALLri */
    -1, i32imm, 
    /* CALLrr */
    -1, -1, 
    /* CASAasi10 */
    IntRegs, IntRegs, IntRegs, IntRegs, 
    /* CASArr */
    IntRegs, IntRegs, IntRegs, IntRegs, i8imm, 
    /* CASXrr */
    I64Regs, I64Regs, I64Regs, I64Regs, 
    /* CASrr */
    IntRegs, IntRegs, IntRegs, IntRegs, 
    /* CBCOND */
    brtarget, CCOp, 
    /* CBCONDA */
    brtarget, CCOp, 
    /* CMASK16 */
    I64Regs, 
    /* CMASK32 */
    I64Regs, 
    /* CMASK8 */
    I64Regs, 
    /* CMPri */
    IntRegs, simm13Op, 
    /* CMPrr */
    IntRegs, IntRegs, 
    /* EDGE16 */
    I64Regs, I64Regs, I64Regs, 
    /* EDGE16L */
    I64Regs, I64Regs, I64Regs, 
    /* EDGE16LN */
    I64Regs, I64Regs, I64Regs, 
    /* EDGE16N */
    I64Regs, I64Regs, I64Regs, 
    /* EDGE32 */
    I64Regs, I64Regs, I64Regs, 
    /* EDGE32L */
    I64Regs, I64Regs, I64Regs, 
    /* EDGE32LN */
    I64Regs, I64Regs, I64Regs, 
    /* EDGE32N */
    I64Regs, I64Regs, I64Regs, 
    /* EDGE8 */
    I64Regs, I64Regs, I64Regs, 
    /* EDGE8L */
    I64Regs, I64Regs, I64Regs, 
    /* EDGE8LN */
    I64Regs, I64Regs, I64Regs, 
    /* EDGE8N */
    I64Regs, I64Regs, I64Regs, 
    /* FABSD */
    DFPRegs, DFPRegs, 
    /* FABSQ */
    QFPRegs, QFPRegs, 
    /* FABSS */
    FPRegs, FPRegs, 
    /* FADDD */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FADDQ */
    QFPRegs, QFPRegs, QFPRegs, 
    /* FADDS */
    FPRegs, FPRegs, FPRegs, 
    /* FALIGNADATA */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FAND */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FANDNOT1 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FANDNOT1S */
    FPRegs, FPRegs, FPRegs, 
    /* FANDNOT2 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FANDNOT2S */
    FPRegs, FPRegs, FPRegs, 
    /* FANDS */
    FPRegs, FPRegs, FPRegs, 
    /* FBCOND */
    brtarget, CCOp, 
    /* FBCONDA */
    brtarget, CCOp, 
    /* FCHKSM16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FCMPD */
    DFPRegs, DFPRegs, 
    /* FCMPEQ16 */
    I64Regs, DFPRegs, DFPRegs, 
    /* FCMPEQ32 */
    I64Regs, DFPRegs, DFPRegs, 
    /* FCMPGT16 */
    I64Regs, DFPRegs, DFPRegs, 
    /* FCMPGT32 */
    I64Regs, DFPRegs, DFPRegs, 
    /* FCMPLE16 */
    I64Regs, DFPRegs, DFPRegs, 
    /* FCMPLE32 */
    I64Regs, DFPRegs, DFPRegs, 
    /* FCMPNE16 */
    I64Regs, DFPRegs, DFPRegs, 
    /* FCMPNE32 */
    I64Regs, DFPRegs, DFPRegs, 
    /* FCMPQ */
    QFPRegs, QFPRegs, 
    /* FCMPS */
    FPRegs, FPRegs, 
    /* FDIVD */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FDIVQ */
    QFPRegs, QFPRegs, QFPRegs, 
    /* FDIVS */
    FPRegs, FPRegs, FPRegs, 
    /* FDMULQ */
    QFPRegs, DFPRegs, DFPRegs, 
    /* FDTOI */
    FPRegs, DFPRegs, 
    /* FDTOQ */
    QFPRegs, DFPRegs, 
    /* FDTOS */
    FPRegs, DFPRegs, 
    /* FDTOX */
    DFPRegs, DFPRegs, 
    /* FEXPAND */
    DFPRegs, DFPRegs, 
    /* FHADDD */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FHADDS */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FHSUBD */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FHSUBS */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FITOD */
    DFPRegs, FPRegs, 
    /* FITOQ */
    QFPRegs, FPRegs, 
    /* FITOS */
    FPRegs, FPRegs, 
    /* FLCMPD */
    FCCRegs, DFPRegs, DFPRegs, 
    /* FLCMPS */
    FCCRegs, DFPRegs, DFPRegs, 
    /* FLUSH */
    /* FLUSHW */
    /* FLUSHri */
    -1, i32imm, 
    /* FLUSHrr */
    -1, -1, 
    /* FMEAN16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FMOVD */
    DFPRegs, DFPRegs, 
    /* FMOVD_FCC */
    DFPRegs, DFPRegs, DFPRegs, CCOp, 
    /* FMOVD_ICC */
    DFPRegs, DFPRegs, DFPRegs, CCOp, 
    /* FMOVD_XCC */
    DFPRegs, DFPRegs, DFPRegs, CCOp, 
    /* FMOVQ */
    QFPRegs, QFPRegs, 
    /* FMOVQ_FCC */
    QFPRegs, QFPRegs, QFPRegs, CCOp, 
    /* FMOVQ_ICC */
    QFPRegs, QFPRegs, QFPRegs, CCOp, 
    /* FMOVQ_XCC */
    QFPRegs, QFPRegs, QFPRegs, CCOp, 
    /* FMOVRGEZD */
    FPRegs, I64Regs, FPRegs, 
    /* FMOVRGEZQ */
    FPRegs, I64Regs, FPRegs, 
    /* FMOVRGEZS */
    FPRegs, I64Regs, FPRegs, 
    /* FMOVRGZD */
    FPRegs, I64Regs, FPRegs, 
    /* FMOVRGZQ */
    FPRegs, I64Regs, FPRegs, 
    /* FMOVRGZS */
    FPRegs, I64Regs, FPRegs, 
    /* FMOVRLEZD */
    FPRegs, I64Regs, FPRegs, 
    /* FMOVRLEZQ */
    FPRegs, I64Regs, FPRegs, 
    /* FMOVRLEZS */
    FPRegs, I64Regs, FPRegs, 
    /* FMOVRLZD */
    FPRegs, I64Regs, FPRegs, 
    /* FMOVRLZQ */
    FPRegs, I64Regs, FPRegs, 
    /* FMOVRLZS */
    FPRegs, I64Regs, FPRegs, 
    /* FMOVRNZD */
    FPRegs, I64Regs, FPRegs, 
    /* FMOVRNZQ */
    FPRegs, I64Regs, FPRegs, 
    /* FMOVRNZS */
    FPRegs, I64Regs, FPRegs, 
    /* FMOVRZD */
    FPRegs, I64Regs, FPRegs, 
    /* FMOVRZQ */
    FPRegs, I64Regs, FPRegs, 
    /* FMOVRZS */
    FPRegs, I64Regs, FPRegs, 
    /* FMOVS */
    FPRegs, FPRegs, 
    /* FMOVS_FCC */
    FPRegs, FPRegs, FPRegs, CCOp, 
    /* FMOVS_ICC */
    FPRegs, FPRegs, FPRegs, CCOp, 
    /* FMOVS_XCC */
    FPRegs, FPRegs, FPRegs, CCOp, 
    /* FMUL8SUX16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FMUL8ULX16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FMUL8X16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FMUL8X16AL */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FMUL8X16AU */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FMULD */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FMULD8SUX16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FMULD8ULX16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FMULQ */
    QFPRegs, QFPRegs, QFPRegs, 
    /* FMULS */
    FPRegs, FPRegs, FPRegs, 
    /* FNADDD */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FNADDS */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FNAND */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FNANDS */
    FPRegs, FPRegs, FPRegs, 
    /* FNEGD */
    DFPRegs, DFPRegs, 
    /* FNEGQ */
    QFPRegs, QFPRegs, 
    /* FNEGS */
    FPRegs, FPRegs, 
    /* FNHADDD */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FNHADDS */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FNMULD */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FNMULS */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FNOR */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FNORS */
    FPRegs, FPRegs, FPRegs, 
    /* FNOT1 */
    DFPRegs, DFPRegs, 
    /* FNOT1S */
    FPRegs, FPRegs, 
    /* FNOT2 */
    DFPRegs, DFPRegs, 
    /* FNOT2S */
    FPRegs, FPRegs, 
    /* FNSMULD */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FONE */
    DFPRegs, DFPRegs, 
    /* FONES */
    FPRegs, FPRegs, 
    /* FOR */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FORNOT1 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FORNOT1S */
    FPRegs, FPRegs, FPRegs, 
    /* FORNOT2 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FORNOT2S */
    FPRegs, FPRegs, FPRegs, 
    /* FORS */
    FPRegs, FPRegs, FPRegs, 
    /* FPACK16 */
    DFPRegs, DFPRegs, 
    /* FPACK32 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FPACKFIX */
    DFPRegs, DFPRegs, 
    /* FPADD16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FPADD16S */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FPADD32 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FPADD32S */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FPADD64 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FPMERGE */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FPSUB16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FPSUB16S */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FPSUB32 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FPSUB32S */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FQTOD */
    DFPRegs, QFPRegs, 
    /* FQTOI */
    FPRegs, QFPRegs, 
    /* FQTOS */
    FPRegs, QFPRegs, 
    /* FQTOX */
    DFPRegs, QFPRegs, 
    /* FSLAS16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FSLAS32 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FSLL16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FSLL32 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FSMULD */
    DFPRegs, FPRegs, FPRegs, 
    /* FSQRTD */
    DFPRegs, DFPRegs, 
    /* FSQRTQ */
    QFPRegs, QFPRegs, 
    /* FSQRTS */
    FPRegs, FPRegs, 
    /* FSRA16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FSRA32 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FSRC1 */
    DFPRegs, DFPRegs, 
    /* FSRC1S */
    FPRegs, FPRegs, 
    /* FSRC2 */
    DFPRegs, DFPRegs, 
    /* FSRC2S */
    FPRegs, FPRegs, 
    /* FSRL16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FSRL32 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FSTOD */
    DFPRegs, FPRegs, 
    /* FSTOI */
    FPRegs, FPRegs, 
    /* FSTOQ */
    QFPRegs, FPRegs, 
    /* FSTOX */
    DFPRegs, FPRegs, 
    /* FSUBD */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FSUBQ */
    QFPRegs, QFPRegs, QFPRegs, 
    /* FSUBS */
    FPRegs, FPRegs, FPRegs, 
    /* FXNOR */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FXNORS */
    FPRegs, FPRegs, FPRegs, 
    /* FXOR */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FXORS */
    FPRegs, FPRegs, FPRegs, 
    /* FXTOD */
    DFPRegs, DFPRegs, 
    /* FXTOQ */
    QFPRegs, DFPRegs, 
    /* FXTOS */
    FPRegs, DFPRegs, 
    /* FZERO */
    DFPRegs, DFPRegs, 
    /* FZEROS */
    FPRegs, FPRegs, 
    /* GDOP_LDXrr */
    I64Regs, -1, -1, TailRelocSymGOTLoad, 
    /* GDOP_LDrr */
    IntRegs, -1, -1, TailRelocSymGOTLoad, 
    /* JMPLri */
    IntRegs, -1, i32imm, 
    /* JMPLrr */
    IntRegs, -1, -1, 
    /* LDArr */
    IntRegs, -1, -1, i8imm, 
    /* LDCSRri */
    -1, i32imm, 
    /* LDCSRrr */
    -1, -1, 
    /* LDCri */
    CoprocRegs, -1, i32imm, 
    /* LDCrr */
    CoprocRegs, -1, -1, 
    /* LDDArr */
    IntPair, -1, -1, i8imm, 
    /* LDDCri */
    CoprocPair, -1, i32imm, 
    /* LDDCrr */
    CoprocPair, -1, -1, 
    /* LDDFArr */
    DFPRegs, -1, -1, i8imm, 
    /* LDDFri */
    DFPRegs, -1, i32imm, 
    /* LDDFrr */
    DFPRegs, -1, -1, 
    /* LDDri */
    IntPair, -1, i32imm, 
    /* LDDrr */
    IntPair, -1, -1, 
    /* LDFArr */
    FPRegs, -1, -1, i8imm, 
    /* LDFSRri */
    -1, i32imm, 
    /* LDFSRrr */
    -1, -1, 
    /* LDFri */
    FPRegs, -1, i32imm, 
    /* LDFrr */
    FPRegs, -1, -1, 
    /* LDQFArr */
    QFPRegs, -1, -1, i8imm, 
    /* LDQFri */
    QFPRegs, -1, i32imm, 
    /* LDQFrr */
    QFPRegs, -1, -1, 
    /* LDSBArr */
    IntRegs, -1, -1, i8imm, 
    /* LDSBri */
    IntRegs, -1, i32imm, 
    /* LDSBrr */
    IntRegs, -1, -1, 
    /* LDSHArr */
    IntRegs, -1, -1, i8imm, 
    /* LDSHri */
    IntRegs, -1, i32imm, 
    /* LDSHrr */
    IntRegs, -1, -1, 
    /* LDSTUBArr */
    IntRegs, -1, -1, i8imm, 
    /* LDSTUBri */
    IntRegs, -1, i32imm, 
    /* LDSTUBrr */
    IntRegs, -1, -1, 
    /* LDSWri */
    I64Regs, -1, i32imm, 
    /* LDSWrr */
    I64Regs, -1, -1, 
    /* LDUBArr */
    IntRegs, -1, -1, i8imm, 
    /* LDUBri */
    IntRegs, -1, i32imm, 
    /* LDUBrr */
    IntRegs, -1, -1, 
    /* LDUHArr */
    IntRegs, -1, -1, i8imm, 
    /* LDUHri */
    IntRegs, -1, i32imm, 
    /* LDUHrr */
    IntRegs, -1, -1, 
    /* LDXFSRri */
    -1, i32imm, 
    /* LDXFSRrr */
    -1, -1, 
    /* LDXri */
    I64Regs, -1, i32imm, 
    /* LDXrr */
    I64Regs, -1, -1, 
    /* LDri */
    IntRegs, -1, i32imm, 
    /* LDrr */
    IntRegs, -1, -1, 
    /* LEAX_ADDri */
    I64Regs, -1, i32imm, 
    /* LEA_ADDri */
    IntRegs, -1, i32imm, 
    /* LZCNT */
    I64Regs, I64Regs, 
    /* MEMBARi */
    MembarTag, 
    /* MOVDTOX */
    I64Regs, DFPRegs, 
    /* MOVFCCri */
    IntRegs, i32imm, IntRegs, CCOp, 
    /* MOVFCCrr */
    IntRegs, IntRegs, IntRegs, CCOp, 
    /* MOVICCri */
    IntRegs, i32imm, IntRegs, CCOp, 
    /* MOVICCrr */
    IntRegs, IntRegs, IntRegs, CCOp, 
    /* MOVRGEZri */
    I64Regs, I64Regs, i64imm, 
    /* MOVRGEZrr */
    I64Regs, I64Regs, IntRegs, 
    /* MOVRGZri */
    I64Regs, I64Regs, i64imm, 
    /* MOVRGZrr */
    I64Regs, I64Regs, IntRegs, 
    /* MOVRLEZri */
    I64Regs, I64Regs, i64imm, 
    /* MOVRLEZrr */
    I64Regs, I64Regs, IntRegs, 
    /* MOVRLZri */
    I64Regs, I64Regs, i64imm, 
    /* MOVRLZrr */
    I64Regs, I64Regs, IntRegs, 
    /* MOVRNZri */
    I64Regs, I64Regs, i64imm, 
    /* MOVRNZrr */
    I64Regs, I64Regs, IntRegs, 
    /* MOVRRZri */
    I64Regs, I64Regs, i64imm, 
    /* MOVRRZrr */
    I64Regs, I64Regs, IntRegs, 
    /* MOVSTOSW */
    I64Regs, DFPRegs, 
    /* MOVSTOUW */
    I64Regs, DFPRegs, 
    /* MOVWTOS */
    DFPRegs, I64Regs, 
    /* MOVXCCri */
    IntRegs, i32imm, IntRegs, CCOp, 
    /* MOVXCCrr */
    IntRegs, IntRegs, IntRegs, CCOp, 
    /* MOVXTOD */
    DFPRegs, I64Regs, 
    /* MULSCCri */
    IntRegs, IntRegs, simm13Op, 
    /* MULSCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* MULXri */
    IntRegs, IntRegs, i64imm, 
    /* MULXrr */
    I64Regs, I64Regs, I64Regs, 
    /* NOP */
    /* ORCCri */
    IntRegs, IntRegs, simm13Op, 
    /* ORCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* ORNCCri */
    IntRegs, IntRegs, simm13Op, 
    /* ORNCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* ORNri */
    IntRegs, IntRegs, simm13Op, 
    /* ORNrr */
    IntRegs, IntRegs, IntRegs, 
    /* ORXNrr */
    I64Regs, I64Regs, I64Regs, 
    /* ORXri */
    I64Regs, I64Regs, i64imm, 
    /* ORXrr */
    I64Regs, I64Regs, I64Regs, 
    /* ORri */
    IntRegs, IntRegs, simm13Op, 
    /* ORrr */
    IntRegs, IntRegs, IntRegs, 
    /* PDIST */
    DFPRegs, DFPRegs, DFPRegs, 
    /* PDISTN */
    DFPRegs, DFPRegs, DFPRegs, 
    /* POPCrr */
    IntRegs, IntRegs, 
    /* PREFETCHi */
    -1, i32imm, shift_imm5, 
    /* PREFETCHr */
    -1, -1, shift_imm5, 
    /* PWRPSRri */
    IntRegs, simm13Op, 
    /* PWRPSRrr */
    IntRegs, IntRegs, 
    /* RDASR */
    IntRegs, ASRRegs, 
    /* RDPC */
    IntRegs, 
    /* RDPR */
    IntRegs, PRRegs, 
    /* RDPSR */
    IntRegs, 
    /* RDTBR */
    IntRegs, 
    /* RDWIM */
    IntRegs, 
    /* RESTOREri */
    IntRegs, IntRegs, simm13Op, 
    /* RESTORErr */
    IntRegs, IntRegs, IntRegs, 
    /* RET */
    i32imm, 
    /* RETL */
    i32imm, 
    /* RETTri */
    -1, i32imm, 
    /* RETTrr */
    -1, -1, 
    /* SAVEri */
    IntRegs, IntRegs, simm13Op, 
    /* SAVErr */
    IntRegs, IntRegs, IntRegs, 
    /* SDIVCCri */
    IntRegs, IntRegs, simm13Op, 
    /* SDIVCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* SDIVXri */
    IntRegs, IntRegs, i64imm, 
    /* SDIVXrr */
    I64Regs, I64Regs, I64Regs, 
    /* SDIVri */
    IntRegs, IntRegs, simm13Op, 
    /* SDIVrr */
    IntRegs, IntRegs, IntRegs, 
    /* SETHIXi */
    IntRegs, i64imm, 
    /* SETHIi */
    IntRegs, i32imm, 
    /* SHUTDOWN */
    /* SIAM */
    /* SIR */
    simm13Op, 
    /* SLLXri */
    I64Regs, I64Regs, shift_imm6, 
    /* SLLXrr */
    I64Regs, I64Regs, IntRegs, 
    /* SLLri */
    IntRegs, IntRegs, shift_imm5, 
    /* SLLrr */
    IntRegs, IntRegs, IntRegs, 
    /* SMACri */
    IntRegs, IntRegs, simm13Op, ASRRegs, 
    /* SMACrr */
    IntRegs, IntRegs, IntRegs, ASRRegs, 
    /* SMULCCri */
    IntRegs, IntRegs, simm13Op, 
    /* SMULCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* SMULri */
    IntRegs, IntRegs, simm13Op, 
    /* SMULrr */
    IntRegs, IntRegs, IntRegs, 
    /* SRAXri */
    I64Regs, I64Regs, shift_imm6, 
    /* SRAXrr */
    I64Regs, I64Regs, IntRegs, 
    /* SRAri */
    IntRegs, IntRegs, shift_imm5, 
    /* SRArr */
    IntRegs, IntRegs, IntRegs, 
    /* SRLXri */
    I64Regs, I64Regs, shift_imm6, 
    /* SRLXrr */
    I64Regs, I64Regs, IntRegs, 
    /* SRLri */
    IntRegs, IntRegs, shift_imm5, 
    /* SRLrr */
    IntRegs, IntRegs, IntRegs, 
    /* STArr */
    -1, -1, IntRegs, i8imm, 
    /* STBAR */
    /* STBArr */
    -1, -1, IntRegs, i8imm, 
    /* STBri */
    -1, i32imm, IntRegs, 
    /* STBrr */
    -1, -1, IntRegs, 
    /* STCSRri */
    -1, i32imm, 
    /* STCSRrr */
    -1, -1, 
    /* STCri */
    -1, i32imm, CoprocRegs, 
    /* STCrr */
    -1, -1, CoprocRegs, 
    /* STDArr */
    -1, -1, IntPair, i8imm, 
    /* STDCQri */
    -1, i32imm, 
    /* STDCQrr */
    -1, -1, 
    /* STDCri */
    -1, i32imm, CoprocPair, 
    /* STDCrr */
    -1, -1, CoprocPair, 
    /* STDFArr */
    -1, -1, DFPRegs, i8imm, 
    /* STDFQri */
    -1, i32imm, 
    /* STDFQrr */
    -1, -1, 
    /* STDFri */
    -1, i32imm, DFPRegs, 
    /* STDFrr */
    -1, -1, DFPRegs, 
    /* STDri */
    -1, i32imm, IntPair, 
    /* STDrr */
    -1, -1, IntPair, 
    /* STFArr */
    -1, -1, FPRegs, i8imm, 
    /* STFSRri */
    -1, i32imm, 
    /* STFSRrr */
    -1, -1, 
    /* STFri */
    -1, i32imm, FPRegs, 
    /* STFrr */
    -1, -1, FPRegs, 
    /* STHArr */
    -1, -1, IntRegs, i8imm, 
    /* STHri */
    -1, i32imm, IntRegs, 
    /* STHrr */
    -1, -1, IntRegs, 
    /* STQFArr */
    -1, -1, QFPRegs, i8imm, 
    /* STQFri */
    -1, i32imm, QFPRegs, 
    /* STQFrr */
    -1, -1, QFPRegs, 
    /* STXFSRri */
    -1, i32imm, 
    /* STXFSRrr */
    -1, -1, 
    /* STXri */
    -1, i32imm, I64Regs, 
    /* STXrr */
    -1, -1, I64Regs, 
    /* STri */
    -1, i32imm, IntRegs, 
    /* STrr */
    -1, -1, IntRegs, 
    /* SUBCCri */
    IntRegs, IntRegs, simm13Op, 
    /* SUBCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* SUBCri */
    IntRegs, IntRegs, simm13Op, 
    /* SUBCrr */
    IntRegs, IntRegs, IntRegs, 
    /* SUBEri */
    IntRegs, IntRegs, simm13Op, 
    /* SUBErr */
    IntRegs, IntRegs, IntRegs, 
    /* SUBXri */
    I64Regs, I64Regs, i64imm, 
    /* SUBXrr */
    I64Regs, I64Regs, I64Regs, 
    /* SUBri */
    IntRegs, IntRegs, simm13Op, 
    /* SUBrr */
    IntRegs, IntRegs, IntRegs, 
    /* SWAPArr */
    IntRegs, -1, -1, i8imm, IntRegs, 
    /* SWAPri */
    IntRegs, -1, i32imm, IntRegs, 
    /* SWAPrr */
    IntRegs, -1, -1, IntRegs, 
    /* TA1 */
    /* TA3 */
    /* TA5 */
    /* TADDCCTVri */
    IntRegs, IntRegs, simm13Op, 
    /* TADDCCTVrr */
    IntRegs, IntRegs, IntRegs, 
    /* TADDCCri */
    IntRegs, IntRegs, simm13Op, 
    /* TADDCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* TAIL_CALL */
    calltarget, 
    /* TAIL_CALLri */
    -1, i32imm, 
    /* TICCri */
    IntRegs, i32imm, CCOp, 
    /* TICCrr */
    IntRegs, IntRegs, CCOp, 
    /* TLS_ADDXrr */
    I64Regs, I64Regs, I64Regs, TailRelocSymTLSAdd, 
    /* TLS_ADDrr */
    IntRegs, IntRegs, IntRegs, TailRelocSymTLSAdd, 
    /* TLS_CALL */
    calltarget, TailRelocSymTLSCall, 
    /* TLS_LDXrr */
    IntRegs, -1, -1, TailRelocSymTLSLoad, 
    /* TLS_LDrr */
    IntRegs, -1, -1, TailRelocSymTLSLoad, 
    /* TRAPri */
    IntRegs, i32imm, CCOp, 
    /* TRAPrr */
    IntRegs, IntRegs, CCOp, 
    /* TSUBCCTVri */
    IntRegs, IntRegs, simm13Op, 
    /* TSUBCCTVrr */
    IntRegs, IntRegs, IntRegs, 
    /* TSUBCCri */
    IntRegs, IntRegs, simm13Op, 
    /* TSUBCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* TXCCri */
    IntRegs, i32imm, CCOp, 
    /* TXCCrr */
    IntRegs, IntRegs, CCOp, 
    /* UDIVCCri */
    IntRegs, IntRegs, simm13Op, 
    /* UDIVCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* UDIVXri */
    IntRegs, IntRegs, i64imm, 
    /* UDIVXrr */
    I64Regs, I64Regs, I64Regs, 
    /* UDIVri */
    IntRegs, IntRegs, simm13Op, 
    /* UDIVrr */
    IntRegs, IntRegs, IntRegs, 
    /* UMACri */
    IntRegs, IntRegs, simm13Op, ASRRegs, 
    /* UMACrr */
    IntRegs, IntRegs, IntRegs, ASRRegs, 
    /* UMULCCri */
    IntRegs, IntRegs, simm13Op, 
    /* UMULCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* UMULXHI */
    I64Regs, I64Regs, I64Regs, 
    /* UMULri */
    IntRegs, IntRegs, simm13Op, 
    /* UMULrr */
    IntRegs, IntRegs, IntRegs, 
    /* UNIMP */
    i32imm, 
    /* V9FCMPD */
    FCCRegs, DFPRegs, DFPRegs, 
    /* V9FCMPED */
    FCCRegs, DFPRegs, DFPRegs, 
    /* V9FCMPEQ */
    FCCRegs, QFPRegs, QFPRegs, 
    /* V9FCMPES */
    FCCRegs, FPRegs, FPRegs, 
    /* V9FCMPQ */
    FCCRegs, QFPRegs, QFPRegs, 
    /* V9FCMPS */
    FCCRegs, FPRegs, FPRegs, 
    /* V9FMOVD_FCC */
    DFPRegs, FCCRegs, DFPRegs, DFPRegs, CCOp, 
    /* V9FMOVQ_FCC */
    QFPRegs, FCCRegs, QFPRegs, QFPRegs, CCOp, 
    /* V9FMOVS_FCC */
    FPRegs, FCCRegs, FPRegs, FPRegs, CCOp, 
    /* V9MOVFCCri */
    IntRegs, FCCRegs, i32imm, IntRegs, CCOp, 
    /* V9MOVFCCrr */
    IntRegs, FCCRegs, IntRegs, IntRegs, CCOp, 
    /* WRASRri */
    ASRRegs, IntRegs, simm13Op, 
    /* WRASRrr */
    ASRRegs, IntRegs, IntRegs, 
    /* WRPRri */
    PRRegs, IntRegs, simm13Op, 
    /* WRPRrr */
    PRRegs, IntRegs, IntRegs, 
    /* WRPSRri */
    IntRegs, simm13Op, 
    /* WRPSRrr */
    IntRegs, IntRegs, 
    /* WRTBRri */
    IntRegs, simm13Op, 
    /* WRTBRrr */
    IntRegs, IntRegs, 
    /* WRWIMri */
    IntRegs, simm13Op, 
    /* WRWIMrr */
    IntRegs, IntRegs, 
    /* XMULX */
    I64Regs, I64Regs, I64Regs, 
    /* XMULXHI */
    I64Regs, I64Regs, I64Regs, 
    /* XNORCCri */
    IntRegs, IntRegs, simm13Op, 
    /* XNORCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* XNORXrr */
    I64Regs, I64Regs, I64Regs, 
    /* XNORri */
    IntRegs, IntRegs, simm13Op, 
    /* XNORrr */
    IntRegs, IntRegs, IntRegs, 
    /* XORCCri */
    IntRegs, IntRegs, simm13Op, 
    /* XORCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* XORXri */
    I64Regs, I64Regs, i64imm, 
    /* XORXrr */
    I64Regs, I64Regs, I64Regs, 
    /* XORri */
    IntRegs, IntRegs, simm13Op, 
    /* XORrr */
    IntRegs, IntRegs, IntRegs, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

#ifdef GET_INSTRINFO_MEM_OPERAND_SIZE
#undef GET_INSTRINFO_MEM_OPERAND_SIZE
namespace llvm {
namespace SP {
LLVM_READONLY
static int getMemOperandSize(int OpType) {
  switch (OpType) {
  default: return 0;
  }
}
} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_MEM_OPERAND_SIZE

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
namespace llvm {
namespace Sparc {
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
} // end namespace Sparc
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
namespace llvm {
namespace Sparc {
LLVM_READONLY static int
getLogicalOperandType(uint16_t Opcode, uint16_t LogicalOpIdx) {
  return -1;
}
} // end namespace Sparc
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP

#ifdef GET_INSTRINFO_MC_HELPER_DECLS
#undef GET_INSTRINFO_MC_HELPER_DECLS

namespace llvm {
class MCInst;
class FeatureBitset;

namespace Sparc_MC {

void verifyInstructionPredicates(unsigned Opcode, const FeatureBitset &Features);

} // end namespace Sparc_MC
} // end namespace llvm

#endif // GET_INSTRINFO_MC_HELPER_DECLS

#ifdef GET_INSTRINFO_MC_HELPERS
#undef GET_INSTRINFO_MC_HELPERS

namespace llvm {
namespace Sparc_MC {

} // end namespace Sparc_MC
} // end namespace llvm

#endif // GET_GENISTRINFO_MC_HELPERS

#ifdef ENABLE_INSTR_PREDICATE_VERIFIER
#undef ENABLE_INSTR_PREDICATE_VERIFIER
#include <sstream>

namespace llvm {
namespace Sparc_MC {

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
  Feature_UseSoftMulDivBit = 5,
  Feature_HasV9Bit = 1,
  Feature_HasVISBit = 2,
  Feature_HasVIS2Bit = 3,
  Feature_HasVIS3Bit = 4,
  Feature_HasPWRPSRBit = 0,
};

#ifndef NDEBUG
static const char *SubtargetFeatureNames[] = {
  "Feature_HasPWRPSR",
  "Feature_HasV9",
  "Feature_HasVIS",
  "Feature_HasVIS2",
  "Feature_HasVIS3",
  "Feature_UseSoftMulDiv",
  nullptr
};

#endif // NDEBUG

FeatureBitset computeAvailableFeatures(const FeatureBitset &FB) {
  FeatureBitset Features;
  if (FB[Sparc::FeatureSoftMulDiv])
    Features.set(Feature_UseSoftMulDivBit);
  if (FB[Sparc::FeatureV9])
    Features.set(Feature_HasV9Bit);
  if (FB[Sparc::FeatureVIS])
    Features.set(Feature_HasVISBit);
  if (FB[Sparc::FeatureVIS2])
    Features.set(Feature_HasVIS2Bit);
  if (FB[Sparc::FeatureVIS3])
    Features.set(Feature_HasVIS3Bit);
  if (FB[Sparc::FeaturePWRPSR])
    Features.set(Feature_HasPWRPSRBit);
  return Features;
}

#ifndef NDEBUG
// Feature bitsets.
enum : uint8_t {
  CEFBS_None,
  CEFBS_HasPWRPSR,
  CEFBS_HasV9,
  CEFBS_HasVIS,
  CEFBS_HasVIS2,
  CEFBS_HasVIS3,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // CEFBS_None
  {Feature_HasPWRPSRBit, },
  {Feature_HasV9Bit, },
  {Feature_HasVISBit, },
  {Feature_HasVIS2Bit, },
  {Feature_HasVIS3Bit, },
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
    CEFBS_None, // ADJCALLSTACKDOWN = 247
    CEFBS_None, // ADJCALLSTACKUP = 248
    CEFBS_None, // GETPCX = 249
    CEFBS_None, // SELECT_CC_DFP_FCC = 250
    CEFBS_None, // SELECT_CC_DFP_ICC = 251
    CEFBS_None, // SELECT_CC_DFP_XCC = 252
    CEFBS_None, // SELECT_CC_FP_FCC = 253
    CEFBS_None, // SELECT_CC_FP_ICC = 254
    CEFBS_None, // SELECT_CC_FP_XCC = 255
    CEFBS_None, // SELECT_CC_Int_FCC = 256
    CEFBS_None, // SELECT_CC_Int_ICC = 257
    CEFBS_None, // SELECT_CC_Int_XCC = 258
    CEFBS_None, // SELECT_CC_QFP_FCC = 259
    CEFBS_None, // SELECT_CC_QFP_ICC = 260
    CEFBS_None, // SELECT_CC_QFP_XCC = 261
    CEFBS_None, // SET = 262
    CEFBS_None, // ADDCCri = 263
    CEFBS_None, // ADDCCrr = 264
    CEFBS_None, // ADDCri = 265
    CEFBS_None, // ADDCrr = 266
    CEFBS_None, // ADDEri = 267
    CEFBS_None, // ADDErr = 268
    CEFBS_HasVIS3, // ADDXC = 269
    CEFBS_HasVIS3, // ADDXCCC = 270
    CEFBS_None, // ADDXri = 271
    CEFBS_None, // ADDXrr = 272
    CEFBS_None, // ADDri = 273
    CEFBS_None, // ADDrr = 274
    CEFBS_HasVIS, // ALIGNADDR = 275
    CEFBS_HasVIS, // ALIGNADDRL = 276
    CEFBS_None, // ANDCCri = 277
    CEFBS_None, // ANDCCrr = 278
    CEFBS_None, // ANDNCCri = 279
    CEFBS_None, // ANDNCCrr = 280
    CEFBS_None, // ANDNri = 281
    CEFBS_None, // ANDNrr = 282
    CEFBS_None, // ANDXNrr = 283
    CEFBS_None, // ANDXri = 284
    CEFBS_None, // ANDXrr = 285
    CEFBS_None, // ANDri = 286
    CEFBS_None, // ANDrr = 287
    CEFBS_HasVIS, // ARRAY16 = 288
    CEFBS_HasVIS, // ARRAY32 = 289
    CEFBS_HasVIS, // ARRAY8 = 290
    CEFBS_None, // BA = 291
    CEFBS_None, // BCOND = 292
    CEFBS_None, // BCONDA = 293
    CEFBS_None, // BINDri = 294
    CEFBS_None, // BINDrr = 295
    CEFBS_HasVIS2, // BMASK = 296
    CEFBS_HasV9, // BPFCC = 297
    CEFBS_HasV9, // BPFCCA = 298
    CEFBS_HasV9, // BPFCCANT = 299
    CEFBS_HasV9, // BPFCCNT = 300
    CEFBS_None, // BPGEZapn = 301
    CEFBS_None, // BPGEZapt = 302
    CEFBS_None, // BPGEZnapn = 303
    CEFBS_None, // BPGEZnapt = 304
    CEFBS_None, // BPGZapn = 305
    CEFBS_None, // BPGZapt = 306
    CEFBS_None, // BPGZnapn = 307
    CEFBS_None, // BPGZnapt = 308
    CEFBS_HasV9, // BPICC = 309
    CEFBS_HasV9, // BPICCA = 310
    CEFBS_HasV9, // BPICCANT = 311
    CEFBS_HasV9, // BPICCNT = 312
    CEFBS_None, // BPLEZapn = 313
    CEFBS_None, // BPLEZapt = 314
    CEFBS_None, // BPLEZnapn = 315
    CEFBS_None, // BPLEZnapt = 316
    CEFBS_None, // BPLZapn = 317
    CEFBS_None, // BPLZapt = 318
    CEFBS_None, // BPLZnapn = 319
    CEFBS_None, // BPLZnapt = 320
    CEFBS_None, // BPNZapn = 321
    CEFBS_None, // BPNZapt = 322
    CEFBS_None, // BPNZnapn = 323
    CEFBS_None, // BPNZnapt = 324
    CEFBS_None, // BPXCC = 325
    CEFBS_None, // BPXCCA = 326
    CEFBS_None, // BPXCCANT = 327
    CEFBS_None, // BPXCCNT = 328
    CEFBS_None, // BPZapn = 329
    CEFBS_None, // BPZapt = 330
    CEFBS_None, // BPZnapn = 331
    CEFBS_None, // BPZnapt = 332
    CEFBS_HasVIS2, // BSHUFFLE = 333
    CEFBS_None, // CALL = 334
    CEFBS_None, // CALLri = 335
    CEFBS_None, // CALLrr = 336
    CEFBS_None, // CASAasi10 = 337
    CEFBS_None, // CASArr = 338
    CEFBS_None, // CASXrr = 339
    CEFBS_HasV9, // CASrr = 340
    CEFBS_None, // CBCOND = 341
    CEFBS_None, // CBCONDA = 342
    CEFBS_HasVIS3, // CMASK16 = 343
    CEFBS_HasVIS3, // CMASK32 = 344
    CEFBS_HasVIS3, // CMASK8 = 345
    CEFBS_None, // CMPri = 346
    CEFBS_None, // CMPrr = 347
    CEFBS_HasVIS, // EDGE16 = 348
    CEFBS_HasVIS, // EDGE16L = 349
    CEFBS_HasVIS2, // EDGE16LN = 350
    CEFBS_HasVIS2, // EDGE16N = 351
    CEFBS_HasVIS, // EDGE32 = 352
    CEFBS_HasVIS, // EDGE32L = 353
    CEFBS_HasVIS2, // EDGE32LN = 354
    CEFBS_HasVIS2, // EDGE32N = 355
    CEFBS_HasVIS, // EDGE8 = 356
    CEFBS_HasVIS, // EDGE8L = 357
    CEFBS_HasVIS2, // EDGE8LN = 358
    CEFBS_HasVIS2, // EDGE8N = 359
    CEFBS_HasV9, // FABSD = 360
    CEFBS_HasV9, // FABSQ = 361
    CEFBS_None, // FABSS = 362
    CEFBS_None, // FADDD = 363
    CEFBS_None, // FADDQ = 364
    CEFBS_None, // FADDS = 365
    CEFBS_HasVIS, // FALIGNADATA = 366
    CEFBS_HasVIS, // FAND = 367
    CEFBS_HasVIS, // FANDNOT1 = 368
    CEFBS_HasVIS, // FANDNOT1S = 369
    CEFBS_HasVIS, // FANDNOT2 = 370
    CEFBS_HasVIS, // FANDNOT2S = 371
    CEFBS_HasVIS, // FANDS = 372
    CEFBS_None, // FBCOND = 373
    CEFBS_None, // FBCONDA = 374
    CEFBS_HasVIS3, // FCHKSM16 = 375
    CEFBS_None, // FCMPD = 376
    CEFBS_HasVIS, // FCMPEQ16 = 377
    CEFBS_HasVIS, // FCMPEQ32 = 378
    CEFBS_HasVIS, // FCMPGT16 = 379
    CEFBS_HasVIS, // FCMPGT32 = 380
    CEFBS_HasVIS, // FCMPLE16 = 381
    CEFBS_HasVIS, // FCMPLE32 = 382
    CEFBS_HasVIS, // FCMPNE16 = 383
    CEFBS_HasVIS, // FCMPNE32 = 384
    CEFBS_None, // FCMPQ = 385
    CEFBS_None, // FCMPS = 386
    CEFBS_None, // FDIVD = 387
    CEFBS_None, // FDIVQ = 388
    CEFBS_None, // FDIVS = 389
    CEFBS_None, // FDMULQ = 390
    CEFBS_None, // FDTOI = 391
    CEFBS_None, // FDTOQ = 392
    CEFBS_None, // FDTOS = 393
    CEFBS_None, // FDTOX = 394
    CEFBS_HasVIS, // FEXPAND = 395
    CEFBS_HasVIS3, // FHADDD = 396
    CEFBS_HasVIS3, // FHADDS = 397
    CEFBS_HasVIS3, // FHSUBD = 398
    CEFBS_HasVIS3, // FHSUBS = 399
    CEFBS_None, // FITOD = 400
    CEFBS_None, // FITOQ = 401
    CEFBS_None, // FITOS = 402
    CEFBS_HasVIS3, // FLCMPD = 403
    CEFBS_HasVIS3, // FLCMPS = 404
    CEFBS_None, // FLUSH = 405
    CEFBS_HasV9, // FLUSHW = 406
    CEFBS_None, // FLUSHri = 407
    CEFBS_None, // FLUSHrr = 408
    CEFBS_HasVIS3, // FMEAN16 = 409
    CEFBS_HasV9, // FMOVD = 410
    CEFBS_HasV9, // FMOVD_FCC = 411
    CEFBS_HasV9, // FMOVD_ICC = 412
    CEFBS_None, // FMOVD_XCC = 413
    CEFBS_HasV9, // FMOVQ = 414
    CEFBS_HasV9, // FMOVQ_FCC = 415
    CEFBS_HasV9, // FMOVQ_ICC = 416
    CEFBS_None, // FMOVQ_XCC = 417
    CEFBS_HasV9, // FMOVRGEZD = 418
    CEFBS_HasV9, // FMOVRGEZQ = 419
    CEFBS_HasV9, // FMOVRGEZS = 420
    CEFBS_HasV9, // FMOVRGZD = 421
    CEFBS_HasV9, // FMOVRGZQ = 422
    CEFBS_HasV9, // FMOVRGZS = 423
    CEFBS_HasV9, // FMOVRLEZD = 424
    CEFBS_HasV9, // FMOVRLEZQ = 425
    CEFBS_HasV9, // FMOVRLEZS = 426
    CEFBS_HasV9, // FMOVRLZD = 427
    CEFBS_HasV9, // FMOVRLZQ = 428
    CEFBS_HasV9, // FMOVRLZS = 429
    CEFBS_HasV9, // FMOVRNZD = 430
    CEFBS_HasV9, // FMOVRNZQ = 431
    CEFBS_HasV9, // FMOVRNZS = 432
    CEFBS_HasV9, // FMOVRZD = 433
    CEFBS_HasV9, // FMOVRZQ = 434
    CEFBS_HasV9, // FMOVRZS = 435
    CEFBS_None, // FMOVS = 436
    CEFBS_HasV9, // FMOVS_FCC = 437
    CEFBS_HasV9, // FMOVS_ICC = 438
    CEFBS_None, // FMOVS_XCC = 439
    CEFBS_HasVIS, // FMUL8SUX16 = 440
    CEFBS_HasVIS, // FMUL8ULX16 = 441
    CEFBS_HasVIS, // FMUL8X16 = 442
    CEFBS_HasVIS, // FMUL8X16AL = 443
    CEFBS_HasVIS, // FMUL8X16AU = 444
    CEFBS_None, // FMULD = 445
    CEFBS_HasVIS, // FMULD8SUX16 = 446
    CEFBS_HasVIS, // FMULD8ULX16 = 447
    CEFBS_None, // FMULQ = 448
    CEFBS_None, // FMULS = 449
    CEFBS_HasVIS3, // FNADDD = 450
    CEFBS_HasVIS3, // FNADDS = 451
    CEFBS_HasVIS, // FNAND = 452
    CEFBS_HasVIS, // FNANDS = 453
    CEFBS_HasV9, // FNEGD = 454
    CEFBS_HasV9, // FNEGQ = 455
    CEFBS_None, // FNEGS = 456
    CEFBS_HasVIS3, // FNHADDD = 457
    CEFBS_HasVIS3, // FNHADDS = 458
    CEFBS_HasVIS3, // FNMULD = 459
    CEFBS_HasVIS3, // FNMULS = 460
    CEFBS_HasVIS, // FNOR = 461
    CEFBS_HasVIS, // FNORS = 462
    CEFBS_HasVIS, // FNOT1 = 463
    CEFBS_HasVIS, // FNOT1S = 464
    CEFBS_HasVIS, // FNOT2 = 465
    CEFBS_HasVIS, // FNOT2S = 466
    CEFBS_HasVIS3, // FNSMULD = 467
    CEFBS_HasVIS, // FONE = 468
    CEFBS_HasVIS, // FONES = 469
    CEFBS_HasVIS, // FOR = 470
    CEFBS_HasVIS, // FORNOT1 = 471
    CEFBS_HasVIS, // FORNOT1S = 472
    CEFBS_HasVIS, // FORNOT2 = 473
    CEFBS_HasVIS, // FORNOT2S = 474
    CEFBS_HasVIS, // FORS = 475
    CEFBS_HasVIS, // FPACK16 = 476
    CEFBS_HasVIS, // FPACK32 = 477
    CEFBS_HasVIS, // FPACKFIX = 478
    CEFBS_HasVIS, // FPADD16 = 479
    CEFBS_HasVIS, // FPADD16S = 480
    CEFBS_HasVIS, // FPADD32 = 481
    CEFBS_HasVIS, // FPADD32S = 482
    CEFBS_HasVIS3, // FPADD64 = 483
    CEFBS_HasVIS, // FPMERGE = 484
    CEFBS_HasVIS, // FPSUB16 = 485
    CEFBS_HasVIS, // FPSUB16S = 486
    CEFBS_HasVIS, // FPSUB32 = 487
    CEFBS_HasVIS, // FPSUB32S = 488
    CEFBS_None, // FQTOD = 489
    CEFBS_None, // FQTOI = 490
    CEFBS_None, // FQTOS = 491
    CEFBS_None, // FQTOX = 492
    CEFBS_HasVIS3, // FSLAS16 = 493
    CEFBS_HasVIS3, // FSLAS32 = 494
    CEFBS_HasVIS3, // FSLL16 = 495
    CEFBS_HasVIS3, // FSLL32 = 496
    CEFBS_None, // FSMULD = 497
    CEFBS_None, // FSQRTD = 498
    CEFBS_None, // FSQRTQ = 499
    CEFBS_None, // FSQRTS = 500
    CEFBS_HasVIS3, // FSRA16 = 501
    CEFBS_HasVIS3, // FSRA32 = 502
    CEFBS_HasVIS, // FSRC1 = 503
    CEFBS_HasVIS, // FSRC1S = 504
    CEFBS_HasVIS, // FSRC2 = 505
    CEFBS_HasVIS, // FSRC2S = 506
    CEFBS_HasVIS3, // FSRL16 = 507
    CEFBS_HasVIS3, // FSRL32 = 508
    CEFBS_None, // FSTOD = 509
    CEFBS_None, // FSTOI = 510
    CEFBS_None, // FSTOQ = 511
    CEFBS_None, // FSTOX = 512
    CEFBS_None, // FSUBD = 513
    CEFBS_None, // FSUBQ = 514
    CEFBS_None, // FSUBS = 515
    CEFBS_HasVIS, // FXNOR = 516
    CEFBS_HasVIS, // FXNORS = 517
    CEFBS_HasVIS, // FXOR = 518
    CEFBS_HasVIS, // FXORS = 519
    CEFBS_None, // FXTOD = 520
    CEFBS_None, // FXTOQ = 521
    CEFBS_None, // FXTOS = 522
    CEFBS_HasVIS, // FZERO = 523
    CEFBS_HasVIS, // FZEROS = 524
    CEFBS_None, // GDOP_LDXrr = 525
    CEFBS_None, // GDOP_LDrr = 526
    CEFBS_None, // JMPLri = 527
    CEFBS_None, // JMPLrr = 528
    CEFBS_None, // LDArr = 529
    CEFBS_None, // LDCSRri = 530
    CEFBS_None, // LDCSRrr = 531
    CEFBS_None, // LDCri = 532
    CEFBS_None, // LDCrr = 533
    CEFBS_None, // LDDArr = 534
    CEFBS_None, // LDDCri = 535
    CEFBS_None, // LDDCrr = 536
    CEFBS_HasV9, // LDDFArr = 537
    CEFBS_None, // LDDFri = 538
    CEFBS_None, // LDDFrr = 539
    CEFBS_None, // LDDri = 540
    CEFBS_None, // LDDrr = 541
    CEFBS_HasV9, // LDFArr = 542
    CEFBS_None, // LDFSRri = 543
    CEFBS_None, // LDFSRrr = 544
    CEFBS_None, // LDFri = 545
    CEFBS_None, // LDFrr = 546
    CEFBS_HasV9, // LDQFArr = 547
    CEFBS_HasV9, // LDQFri = 548
    CEFBS_HasV9, // LDQFrr = 549
    CEFBS_None, // LDSBArr = 550
    CEFBS_None, // LDSBri = 551
    CEFBS_None, // LDSBrr = 552
    CEFBS_None, // LDSHArr = 553
    CEFBS_None, // LDSHri = 554
    CEFBS_None, // LDSHrr = 555
    CEFBS_None, // LDSTUBArr = 556
    CEFBS_None, // LDSTUBri = 557
    CEFBS_None, // LDSTUBrr = 558
    CEFBS_None, // LDSWri = 559
    CEFBS_None, // LDSWrr = 560
    CEFBS_None, // LDUBArr = 561
    CEFBS_None, // LDUBri = 562
    CEFBS_None, // LDUBrr = 563
    CEFBS_None, // LDUHArr = 564
    CEFBS_None, // LDUHri = 565
    CEFBS_None, // LDUHrr = 566
    CEFBS_HasV9, // LDXFSRri = 567
    CEFBS_HasV9, // LDXFSRrr = 568
    CEFBS_None, // LDXri = 569
    CEFBS_None, // LDXrr = 570
    CEFBS_None, // LDri = 571
    CEFBS_None, // LDrr = 572
    CEFBS_None, // LEAX_ADDri = 573
    CEFBS_None, // LEA_ADDri = 574
    CEFBS_HasVIS3, // LZCNT = 575
    CEFBS_HasV9, // MEMBARi = 576
    CEFBS_HasVIS3, // MOVDTOX = 577
    CEFBS_HasV9, // MOVFCCri = 578
    CEFBS_HasV9, // MOVFCCrr = 579
    CEFBS_HasV9, // MOVICCri = 580
    CEFBS_HasV9, // MOVICCrr = 581
    CEFBS_None, // MOVRGEZri = 582
    CEFBS_None, // MOVRGEZrr = 583
    CEFBS_None, // MOVRGZri = 584
    CEFBS_None, // MOVRGZrr = 585
    CEFBS_None, // MOVRLEZri = 586
    CEFBS_None, // MOVRLEZrr = 587
    CEFBS_None, // MOVRLZri = 588
    CEFBS_None, // MOVRLZrr = 589
    CEFBS_None, // MOVRNZri = 590
    CEFBS_None, // MOVRNZrr = 591
    CEFBS_None, // MOVRRZri = 592
    CEFBS_None, // MOVRRZrr = 593
    CEFBS_HasVIS3, // MOVSTOSW = 594
    CEFBS_HasVIS3, // MOVSTOUW = 595
    CEFBS_HasVIS3, // MOVWTOS = 596
    CEFBS_None, // MOVXCCri = 597
    CEFBS_None, // MOVXCCrr = 598
    CEFBS_HasVIS3, // MOVXTOD = 599
    CEFBS_None, // MULSCCri = 600
    CEFBS_None, // MULSCCrr = 601
    CEFBS_None, // MULXri = 602
    CEFBS_None, // MULXrr = 603
    CEFBS_None, // NOP = 604
    CEFBS_None, // ORCCri = 605
    CEFBS_None, // ORCCrr = 606
    CEFBS_None, // ORNCCri = 607
    CEFBS_None, // ORNCCrr = 608
    CEFBS_None, // ORNri = 609
    CEFBS_None, // ORNrr = 610
    CEFBS_None, // ORXNrr = 611
    CEFBS_None, // ORXri = 612
    CEFBS_None, // ORXrr = 613
    CEFBS_None, // ORri = 614
    CEFBS_None, // ORrr = 615
    CEFBS_HasVIS, // PDIST = 616
    CEFBS_HasVIS3, // PDISTN = 617
    CEFBS_HasV9, // POPCrr = 618
    CEFBS_HasV9, // PREFETCHi = 619
    CEFBS_HasV9, // PREFETCHr = 620
    CEFBS_HasPWRPSR, // PWRPSRri = 621
    CEFBS_HasPWRPSR, // PWRPSRrr = 622
    CEFBS_None, // RDASR = 623
    CEFBS_HasV9, // RDPC = 624
    CEFBS_HasV9, // RDPR = 625
    CEFBS_None, // RDPSR = 626
    CEFBS_None, // RDTBR = 627
    CEFBS_None, // RDWIM = 628
    CEFBS_None, // RESTOREri = 629
    CEFBS_None, // RESTORErr = 630
    CEFBS_None, // RET = 631
    CEFBS_None, // RETL = 632
    CEFBS_None, // RETTri = 633
    CEFBS_None, // RETTrr = 634
    CEFBS_None, // SAVEri = 635
    CEFBS_None, // SAVErr = 636
    CEFBS_None, // SDIVCCri = 637
    CEFBS_None, // SDIVCCrr = 638
    CEFBS_None, // SDIVXri = 639
    CEFBS_None, // SDIVXrr = 640
    CEFBS_None, // SDIVri = 641
    CEFBS_None, // SDIVrr = 642
    CEFBS_None, // SETHIXi = 643
    CEFBS_None, // SETHIi = 644
    CEFBS_HasVIS, // SHUTDOWN = 645
    CEFBS_HasVIS2, // SIAM = 646
    CEFBS_HasV9, // SIR = 647
    CEFBS_None, // SLLXri = 648
    CEFBS_None, // SLLXrr = 649
    CEFBS_None, // SLLri = 650
    CEFBS_None, // SLLrr = 651
    CEFBS_None, // SMACri = 652
    CEFBS_None, // SMACrr = 653
    CEFBS_None, // SMULCCri = 654
    CEFBS_None, // SMULCCrr = 655
    CEFBS_None, // SMULri = 656
    CEFBS_None, // SMULrr = 657
    CEFBS_None, // SRAXri = 658
    CEFBS_None, // SRAXrr = 659
    CEFBS_None, // SRAri = 660
    CEFBS_None, // SRArr = 661
    CEFBS_None, // SRLXri = 662
    CEFBS_None, // SRLXrr = 663
    CEFBS_None, // SRLri = 664
    CEFBS_None, // SRLrr = 665
    CEFBS_None, // STArr = 666
    CEFBS_None, // STBAR = 667
    CEFBS_None, // STBArr = 668
    CEFBS_None, // STBri = 669
    CEFBS_None, // STBrr = 670
    CEFBS_None, // STCSRri = 671
    CEFBS_None, // STCSRrr = 672
    CEFBS_None, // STCri = 673
    CEFBS_None, // STCrr = 674
    CEFBS_None, // STDArr = 675
    CEFBS_None, // STDCQri = 676
    CEFBS_None, // STDCQrr = 677
    CEFBS_None, // STDCri = 678
    CEFBS_None, // STDCrr = 679
    CEFBS_HasV9, // STDFArr = 680
    CEFBS_None, // STDFQri = 681
    CEFBS_None, // STDFQrr = 682
    CEFBS_None, // STDFri = 683
    CEFBS_None, // STDFrr = 684
    CEFBS_None, // STDri = 685
    CEFBS_None, // STDrr = 686
    CEFBS_HasV9, // STFArr = 687
    CEFBS_None, // STFSRri = 688
    CEFBS_None, // STFSRrr = 689
    CEFBS_None, // STFri = 690
    CEFBS_None, // STFrr = 691
    CEFBS_None, // STHArr = 692
    CEFBS_None, // STHri = 693
    CEFBS_None, // STHrr = 694
    CEFBS_HasV9, // STQFArr = 695
    CEFBS_HasV9, // STQFri = 696
    CEFBS_HasV9, // STQFrr = 697
    CEFBS_HasV9, // STXFSRri = 698
    CEFBS_HasV9, // STXFSRrr = 699
    CEFBS_None, // STXri = 700
    CEFBS_None, // STXrr = 701
    CEFBS_None, // STri = 702
    CEFBS_None, // STrr = 703
    CEFBS_None, // SUBCCri = 704
    CEFBS_None, // SUBCCrr = 705
    CEFBS_None, // SUBCri = 706
    CEFBS_None, // SUBCrr = 707
    CEFBS_None, // SUBEri = 708
    CEFBS_None, // SUBErr = 709
    CEFBS_None, // SUBXri = 710
    CEFBS_None, // SUBXrr = 711
    CEFBS_None, // SUBri = 712
    CEFBS_None, // SUBrr = 713
    CEFBS_None, // SWAPArr = 714
    CEFBS_None, // SWAPri = 715
    CEFBS_None, // SWAPrr = 716
    CEFBS_None, // TA1 = 717
    CEFBS_None, // TA3 = 718
    CEFBS_None, // TA5 = 719
    CEFBS_None, // TADDCCTVri = 720
    CEFBS_None, // TADDCCTVrr = 721
    CEFBS_None, // TADDCCri = 722
    CEFBS_None, // TADDCCrr = 723
    CEFBS_None, // TAIL_CALL = 724
    CEFBS_None, // TAIL_CALLri = 725
    CEFBS_HasV9, // TICCri = 726
    CEFBS_HasV9, // TICCrr = 727
    CEFBS_None, // TLS_ADDXrr = 728
    CEFBS_None, // TLS_ADDrr = 729
    CEFBS_None, // TLS_CALL = 730
    CEFBS_None, // TLS_LDXrr = 731
    CEFBS_None, // TLS_LDrr = 732
    CEFBS_None, // TRAPri = 733
    CEFBS_None, // TRAPrr = 734
    CEFBS_None, // TSUBCCTVri = 735
    CEFBS_None, // TSUBCCTVrr = 736
    CEFBS_None, // TSUBCCri = 737
    CEFBS_None, // TSUBCCrr = 738
    CEFBS_None, // TXCCri = 739
    CEFBS_None, // TXCCrr = 740
    CEFBS_None, // UDIVCCri = 741
    CEFBS_None, // UDIVCCrr = 742
    CEFBS_None, // UDIVXri = 743
    CEFBS_None, // UDIVXrr = 744
    CEFBS_None, // UDIVri = 745
    CEFBS_None, // UDIVrr = 746
    CEFBS_None, // UMACri = 747
    CEFBS_None, // UMACrr = 748
    CEFBS_None, // UMULCCri = 749
    CEFBS_None, // UMULCCrr = 750
    CEFBS_HasVIS3, // UMULXHI = 751
    CEFBS_None, // UMULri = 752
    CEFBS_None, // UMULrr = 753
    CEFBS_None, // UNIMP = 754
    CEFBS_None, // V9FCMPD = 755
    CEFBS_None, // V9FCMPED = 756
    CEFBS_None, // V9FCMPEQ = 757
    CEFBS_None, // V9FCMPES = 758
    CEFBS_None, // V9FCMPQ = 759
    CEFBS_None, // V9FCMPS = 760
    CEFBS_HasV9, // V9FMOVD_FCC = 761
    CEFBS_HasV9, // V9FMOVQ_FCC = 762
    CEFBS_HasV9, // V9FMOVS_FCC = 763
    CEFBS_HasV9, // V9MOVFCCri = 764
    CEFBS_HasV9, // V9MOVFCCrr = 765
    CEFBS_None, // WRASRri = 766
    CEFBS_None, // WRASRrr = 767
    CEFBS_HasV9, // WRPRri = 768
    CEFBS_HasV9, // WRPRrr = 769
    CEFBS_None, // WRPSRri = 770
    CEFBS_None, // WRPSRrr = 771
    CEFBS_None, // WRTBRri = 772
    CEFBS_None, // WRTBRrr = 773
    CEFBS_None, // WRWIMri = 774
    CEFBS_None, // WRWIMrr = 775
    CEFBS_HasVIS3, // XMULX = 776
    CEFBS_HasVIS3, // XMULXHI = 777
    CEFBS_None, // XNORCCri = 778
    CEFBS_None, // XNORCCrr = 779
    CEFBS_None, // XNORXrr = 780
    CEFBS_None, // XNORri = 781
    CEFBS_None, // XNORrr = 782
    CEFBS_None, // XORCCri = 783
    CEFBS_None, // XORCCrr = 784
    CEFBS_None, // XORXri = 785
    CEFBS_None, // XORXrr = 786
    CEFBS_None, // XORri = 787
    CEFBS_None, // XORrr = 788
  };

  assert(Opcode < 789);
  FeatureBitset AvailableFeatures = computeAvailableFeatures(Features);
  const FeatureBitset &RequiredFeatures = FeatureBitsets[RequiredFeaturesRefs[Opcode]];
  FeatureBitset MissingFeatures =
      (AvailableFeatures & RequiredFeatures) ^
      RequiredFeatures;
  if (MissingFeatures.any()) {
    std::ostringstream Msg;
    Msg << "Attempting to emit " << &SparcInstrNameData[SparcInstrNameIndices[Opcode]]
        << " instruction but the ";
    for (unsigned i = 0, e = MissingFeatures.size(); i != e; ++i)
      if (MissingFeatures.test(i))
        Msg << SubtargetFeatureNames[i] << " ";
    Msg << "predicate(s) are not met";
    report_fatal_error(Msg.str().c_str());
  }
#endif // NDEBUG
}
} // end namespace Sparc_MC
} // end namespace llvm
#endif // ENABLE_INSTR_PREDICATE_VERIFIER

