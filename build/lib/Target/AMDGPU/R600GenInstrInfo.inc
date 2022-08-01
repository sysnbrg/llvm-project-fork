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

namespace R600 {
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
    BRANCH	= 247,
    BRANCH_COND_f32	= 248,
    BRANCH_COND_i32	= 249,
    BREAK	= 250,
    BREAKC_f32	= 251,
    BREAKC_i32	= 252,
    BREAK_LOGICALNZ_f32	= 253,
    BREAK_LOGICALNZ_i32	= 254,
    BREAK_LOGICALZ_f32	= 255,
    BREAK_LOGICALZ_i32	= 256,
    CONST_COPY	= 257,
    CONTINUE	= 258,
    CONTINUEC_f32	= 259,
    CONTINUEC_i32	= 260,
    CONTINUE_LOGICALNZ_f32	= 261,
    CONTINUE_LOGICALNZ_i32	= 262,
    CONTINUE_LOGICALZ_f32	= 263,
    CONTINUE_LOGICALZ_i32	= 264,
    CUBE_eg_pseudo	= 265,
    CUBE_r600_pseudo	= 266,
    DEFAULT	= 267,
    DOT_4	= 268,
    DUMMY_CHAIN	= 269,
    ELSE	= 270,
    END	= 271,
    ENDFUNC	= 272,
    ENDIF	= 273,
    ENDLOOP	= 274,
    ENDMAIN	= 275,
    ENDSWITCH	= 276,
    FABS_R600	= 277,
    FNEG_R600	= 278,
    FUNC	= 279,
    IFC_f32	= 280,
    IFC_i32	= 281,
    IF_LOGICALNZ_f32	= 282,
    IF_LOGICALNZ_i32	= 283,
    IF_LOGICALZ_f32	= 284,
    IF_LOGICALZ_i32	= 285,
    IF_PREDICATE_SET	= 286,
    JUMP	= 287,
    JUMP_COND	= 288,
    MASK_WRITE	= 289,
    MOV_IMM_F32	= 290,
    MOV_IMM_GLOBAL_ADDR	= 291,
    MOV_IMM_I32	= 292,
    PRED_X	= 293,
    R600_EXTRACT_ELT_V2	= 294,
    R600_EXTRACT_ELT_V4	= 295,
    R600_INSERT_ELT_V2	= 296,
    R600_INSERT_ELT_V4	= 297,
    R600_RegisterLoad	= 298,
    R600_RegisterStore	= 299,
    RETDYN	= 300,
    RETURN	= 301,
    TXD	= 302,
    TXD_SHADOW	= 303,
    WHILELOOP	= 304,
    ADD	= 305,
    ADDC_UINT	= 306,
    ADD_INT	= 307,
    ALU_CLAUSE	= 308,
    AND_INT	= 309,
    ASHR_eg	= 310,
    ASHR_r600	= 311,
    BCNT_INT	= 312,
    BFE_INT_eg	= 313,
    BFE_UINT_eg	= 314,
    BFI_INT_eg	= 315,
    BFM_INT_eg	= 316,
    BIT_ALIGN_INT_eg	= 317,
    CEIL	= 318,
    CF_ALU	= 319,
    CF_ALU_BREAK	= 320,
    CF_ALU_CONTINUE	= 321,
    CF_ALU_ELSE_AFTER	= 322,
    CF_ALU_POP_AFTER	= 323,
    CF_ALU_PUSH_BEFORE	= 324,
    CF_CALL_FS_EG	= 325,
    CF_CALL_FS_R600	= 326,
    CF_CONTINUE_EG	= 327,
    CF_CONTINUE_R600	= 328,
    CF_ELSE_EG	= 329,
    CF_ELSE_R600	= 330,
    CF_END_CM	= 331,
    CF_END_EG	= 332,
    CF_END_R600	= 333,
    CF_JUMP_EG	= 334,
    CF_JUMP_R600	= 335,
    CF_PUSH_EG	= 336,
    CF_PUSH_ELSE_R600	= 337,
    CF_TC_EG	= 338,
    CF_TC_R600	= 339,
    CF_VC_EG	= 340,
    CF_VC_R600	= 341,
    CNDE_INT	= 342,
    CNDE_eg	= 343,
    CNDE_r600	= 344,
    CNDGE_INT	= 345,
    CNDGE_eg	= 346,
    CNDGE_r600	= 347,
    CNDGT_INT	= 348,
    CNDGT_eg	= 349,
    CNDGT_r600	= 350,
    COS_cm	= 351,
    COS_eg	= 352,
    COS_r600	= 353,
    COS_r700	= 354,
    CUBE_eg_real	= 355,
    CUBE_r600_real	= 356,
    DOT4_eg	= 357,
    DOT4_r600	= 358,
    EG_ExportBuf	= 359,
    EG_ExportSwz	= 360,
    END_LOOP_EG	= 361,
    END_LOOP_R600	= 362,
    EXP_IEEE_cm	= 363,
    EXP_IEEE_eg	= 364,
    EXP_IEEE_r600	= 365,
    FETCH_CLAUSE	= 366,
    FFBH_UINT	= 367,
    FFBL_INT	= 368,
    FLOOR	= 369,
    FLT16_TO_FLT32	= 370,
    FLT32_TO_FLT16	= 371,
    FLT_TO_INT_eg	= 372,
    FLT_TO_INT_r600	= 373,
    FLT_TO_UINT_eg	= 374,
    FLT_TO_UINT_r600	= 375,
    FMA_eg	= 376,
    FRACT	= 377,
    GROUP_BARRIER	= 378,
    INTERP_LOAD_P0	= 379,
    INTERP_PAIR_XY	= 380,
    INTERP_PAIR_ZW	= 381,
    INTERP_VEC_LOAD	= 382,
    INTERP_XY	= 383,
    INTERP_ZW	= 384,
    INT_TO_FLT_eg	= 385,
    INT_TO_FLT_r600	= 386,
    KILLGT	= 387,
    LDS_ADD	= 388,
    LDS_ADD_RET	= 389,
    LDS_AND	= 390,
    LDS_AND_RET	= 391,
    LDS_BYTE_READ_RET	= 392,
    LDS_BYTE_WRITE	= 393,
    LDS_CMPST	= 394,
    LDS_CMPST_RET	= 395,
    LDS_MAX_INT	= 396,
    LDS_MAX_INT_RET	= 397,
    LDS_MAX_UINT	= 398,
    LDS_MAX_UINT_RET	= 399,
    LDS_MIN_INT	= 400,
    LDS_MIN_INT_RET	= 401,
    LDS_MIN_UINT	= 402,
    LDS_MIN_UINT_RET	= 403,
    LDS_OR	= 404,
    LDS_OR_RET	= 405,
    LDS_READ_RET	= 406,
    LDS_SHORT_READ_RET	= 407,
    LDS_SHORT_WRITE	= 408,
    LDS_SUB	= 409,
    LDS_SUB_RET	= 410,
    LDS_UBYTE_READ_RET	= 411,
    LDS_USHORT_READ_RET	= 412,
    LDS_WRITE	= 413,
    LDS_WRXCHG	= 414,
    LDS_WRXCHG_RET	= 415,
    LDS_XOR	= 416,
    LDS_XOR_RET	= 417,
    LITERALS	= 418,
    LOG_CLAMPED_eg	= 419,
    LOG_CLAMPED_r600	= 420,
    LOG_IEEE_cm	= 421,
    LOG_IEEE_eg	= 422,
    LOG_IEEE_r600	= 423,
    LOOP_BREAK_EG	= 424,
    LOOP_BREAK_R600	= 425,
    LSHL_eg	= 426,
    LSHL_r600	= 427,
    LSHR_eg	= 428,
    LSHR_r600	= 429,
    MAX	= 430,
    MAX_DX10	= 431,
    MAX_INT	= 432,
    MAX_UINT	= 433,
    MIN	= 434,
    MIN_DX10	= 435,
    MIN_INT	= 436,
    MIN_UINT	= 437,
    MOV	= 438,
    MOVA_INT_eg	= 439,
    MUL	= 440,
    MULADD_IEEE_eg	= 441,
    MULADD_IEEE_r600	= 442,
    MULADD_INT24_cm	= 443,
    MULADD_UINT24_eg	= 444,
    MULADD_eg	= 445,
    MULADD_r600	= 446,
    MULHI_INT_cm	= 447,
    MULHI_INT_cm24	= 448,
    MULHI_INT_eg	= 449,
    MULHI_INT_r600	= 450,
    MULHI_UINT24_eg	= 451,
    MULHI_UINT_cm	= 452,
    MULHI_UINT_cm24	= 453,
    MULHI_UINT_eg	= 454,
    MULHI_UINT_r600	= 455,
    MULLO_INT_cm	= 456,
    MULLO_INT_eg	= 457,
    MULLO_INT_r600	= 458,
    MULLO_UINT_cm	= 459,
    MULLO_UINT_eg	= 460,
    MULLO_UINT_r600	= 461,
    MUL_IEEE	= 462,
    MUL_INT24_cm	= 463,
    MUL_LIT_eg	= 464,
    MUL_LIT_r600	= 465,
    MUL_UINT24_eg	= 466,
    NOT_INT	= 467,
    OR_INT	= 468,
    PAD	= 469,
    POP_EG	= 470,
    POP_R600	= 471,
    PRED_SETE	= 472,
    PRED_SETE_INT	= 473,
    PRED_SETGE	= 474,
    PRED_SETGE_INT	= 475,
    PRED_SETGT	= 476,
    PRED_SETGT_INT	= 477,
    PRED_SETNE	= 478,
    PRED_SETNE_INT	= 479,
    R600_ExportBuf	= 480,
    R600_ExportSwz	= 481,
    RAT_ATOMIC_ADD_NORET	= 482,
    RAT_ATOMIC_ADD_RTN	= 483,
    RAT_ATOMIC_AND_NORET	= 484,
    RAT_ATOMIC_AND_RTN	= 485,
    RAT_ATOMIC_CMPXCHG_INT_NORET	= 486,
    RAT_ATOMIC_CMPXCHG_INT_RTN	= 487,
    RAT_ATOMIC_DEC_UINT_NORET	= 488,
    RAT_ATOMIC_DEC_UINT_RTN	= 489,
    RAT_ATOMIC_INC_UINT_NORET	= 490,
    RAT_ATOMIC_INC_UINT_RTN	= 491,
    RAT_ATOMIC_MAX_INT_NORET	= 492,
    RAT_ATOMIC_MAX_INT_RTN	= 493,
    RAT_ATOMIC_MAX_UINT_NORET	= 494,
    RAT_ATOMIC_MAX_UINT_RTN	= 495,
    RAT_ATOMIC_MIN_INT_NORET	= 496,
    RAT_ATOMIC_MIN_INT_RTN	= 497,
    RAT_ATOMIC_MIN_UINT_NORET	= 498,
    RAT_ATOMIC_MIN_UINT_RTN	= 499,
    RAT_ATOMIC_OR_NORET	= 500,
    RAT_ATOMIC_OR_RTN	= 501,
    RAT_ATOMIC_RSUB_NORET	= 502,
    RAT_ATOMIC_RSUB_RTN	= 503,
    RAT_ATOMIC_SUB_NORET	= 504,
    RAT_ATOMIC_SUB_RTN	= 505,
    RAT_ATOMIC_XCHG_INT_NORET	= 506,
    RAT_ATOMIC_XCHG_INT_RTN	= 507,
    RAT_ATOMIC_XOR_NORET	= 508,
    RAT_ATOMIC_XOR_RTN	= 509,
    RAT_MSKOR	= 510,
    RAT_STORE_DWORD128	= 511,
    RAT_STORE_DWORD32	= 512,
    RAT_STORE_DWORD64	= 513,
    RAT_STORE_TYPED_cm	= 514,
    RAT_STORE_TYPED_eg	= 515,
    RAT_WRITE_CACHELESS_128_eg	= 516,
    RAT_WRITE_CACHELESS_32_eg	= 517,
    RAT_WRITE_CACHELESS_64_eg	= 518,
    RECIPSQRT_CLAMPED_cm	= 519,
    RECIPSQRT_CLAMPED_eg	= 520,
    RECIPSQRT_CLAMPED_r600	= 521,
    RECIPSQRT_IEEE_cm	= 522,
    RECIPSQRT_IEEE_eg	= 523,
    RECIPSQRT_IEEE_r600	= 524,
    RECIP_CLAMPED_cm	= 525,
    RECIP_CLAMPED_eg	= 526,
    RECIP_CLAMPED_r600	= 527,
    RECIP_IEEE_cm	= 528,
    RECIP_IEEE_eg	= 529,
    RECIP_IEEE_r600	= 530,
    RECIP_UINT_eg	= 531,
    RECIP_UINT_r600	= 532,
    RNDNE	= 533,
    SETE	= 534,
    SETE_DX10	= 535,
    SETE_INT	= 536,
    SETGE_DX10	= 537,
    SETGE_INT	= 538,
    SETGE_UINT	= 539,
    SETGT_DX10	= 540,
    SETGT_INT	= 541,
    SETGT_UINT	= 542,
    SETNE_DX10	= 543,
    SETNE_INT	= 544,
    SGE	= 545,
    SGT	= 546,
    SIN_cm	= 547,
    SIN_eg	= 548,
    SIN_r600	= 549,
    SIN_r700	= 550,
    SNE	= 551,
    SUBB_UINT	= 552,
    SUB_INT	= 553,
    TEX_GET_GRADIENTS_H	= 554,
    TEX_GET_GRADIENTS_V	= 555,
    TEX_GET_TEXTURE_RESINFO	= 556,
    TEX_LD	= 557,
    TEX_LDPTR	= 558,
    TEX_SAMPLE	= 559,
    TEX_SAMPLE_C	= 560,
    TEX_SAMPLE_C_G	= 561,
    TEX_SAMPLE_C_L	= 562,
    TEX_SAMPLE_C_LB	= 563,
    TEX_SAMPLE_G	= 564,
    TEX_SAMPLE_L	= 565,
    TEX_SAMPLE_LB	= 566,
    TEX_SET_GRADIENTS_H	= 567,
    TEX_SET_GRADIENTS_V	= 568,
    TEX_VTX_CONSTBUF	= 569,
    TEX_VTX_TEXBUF	= 570,
    TRUNC	= 571,
    UINT_TO_FLT_eg	= 572,
    UINT_TO_FLT_r600	= 573,
    VTX_READ_128_cm	= 574,
    VTX_READ_128_eg	= 575,
    VTX_READ_16_cm	= 576,
    VTX_READ_16_eg	= 577,
    VTX_READ_32_cm	= 578,
    VTX_READ_32_eg	= 579,
    VTX_READ_64_cm	= 580,
    VTX_READ_64_eg	= 581,
    VTX_READ_8_cm	= 582,
    VTX_READ_8_eg	= 583,
    WHILE_LOOP_EG	= 584,
    WHILE_LOOP_R600	= 585,
    XOR_INT	= 586,
    INSTRUCTION_LIST_END = 587
  };

} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace R600 {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    NullALU	= 1,
    VecALU	= 2,
    AnyALU	= 3,
    TransALU	= 4,
    XALU	= 5,
    SCHED_LIST_END = 6
  };
} // end namespace Sched
} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {


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
static const MCOperandInfo OperandInfo46[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_ZRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_ZRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Predicate_BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { R600::R600_Predicate_BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg64VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { R600::R600_Reg64VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg64VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { R600::R600_Reg128VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { R600::R600_TReg32_ZRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { R600::R600_Reg64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { R600::R600_Reg64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { R600::R600_Reg64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };

extern const MCInstrDesc R600Insts[] = {
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
  { 247,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #247 = BRANCH
  { 248,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #248 = BRANCH_COND_f32
  { 249,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #249 = BRANCH_COND_i32
  { 250,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #250 = BREAK
  { 251,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #251 = BREAKC_f32
  { 252,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #252 = BREAKC_i32
  { 253,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #253 = BREAK_LOGICALNZ_f32
  { 254,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #254 = BREAK_LOGICALNZ_i32
  { 255,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #255 = BREAK_LOGICALZ_f32
  { 256,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #256 = BREAK_LOGICALZ_i32
  { 257,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #257 = CONST_COPY
  { 258,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #258 = CONTINUE
  { 259,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #259 = CONTINUEC_f32
  { 260,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #260 = CONTINUEC_i32
  { 261,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #261 = CONTINUE_LOGICALNZ_f32
  { 262,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #262 = CONTINUE_LOGICALNZ_i32
  { 263,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #263 = CONTINUE_LOGICALZ_f32
  { 264,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #264 = CONTINUE_LOGICALZ_i32
  { 265,	2,	1,	0,	2,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #265 = CUBE_eg_pseudo
  { 266,	2,	1,	0,	2,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #266 = CUBE_r600_pseudo
  { 267,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #267 = DEFAULT
  { 268,	71,	1,	0,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Predicable), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #268 = DOT_4
  { 269,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #269 = DUMMY_CHAIN
  { 270,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #270 = ELSE
  { 271,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #271 = END
  { 272,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #272 = ENDFUNC
  { 273,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #273 = ENDIF
  { 274,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #274 = ENDLOOP
  { 275,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #275 = ENDMAIN
  { 276,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #276 = ENDSWITCH
  { 277,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #277 = FABS_R600
  { 278,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #278 = FNEG_R600
  { 279,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #279 = FUNC
  { 280,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #280 = IFC_f32
  { 281,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #281 = IFC_i32
  { 282,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #282 = IF_LOGICALNZ_f32
  { 283,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #283 = IF_LOGICALNZ_i32
  { 284,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #284 = IF_LOGICALZ_f32
  { 285,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #285 = IF_LOGICALZ_i32
  { 286,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #286 = IF_PREDICATE_SET
  { 287,	1,	0,	0,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #287 = JUMP
  { 288,	2,	0,	0,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #288 = JUMP_COND
  { 289,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #289 = MASK_WRITE
  { 290,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #290 = MOV_IMM_F32
  { 291,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #291 = MOV_IMM_GLOBAL_ADDR
  { 292,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #292 = MOV_IMM_I32
  { 293,	4,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x180ULL, nullptr, nullptr, OperandInfo53 },  // Inst #293 = PRED_X
  { 294,	3,	1,	0,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #294 = R600_EXTRACT_ELT_V2
  { 295,	3,	1,	0,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #295 = R600_EXTRACT_ELT_V4
  { 296,	4,	1,	0,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #296 = R600_INSERT_ELT_V2
  { 297,	4,	1,	0,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #297 = R600_INSERT_ELT_V4
  { 298,	4,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x8000000000000000ULL, nullptr, nullptr, OperandInfo58 },  // Inst #298 = R600_RegisterLoad
  { 299,	4,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x4000000000000000ULL, nullptr, nullptr, OperandInfo58 },  // Inst #299 = R600_RegisterStore
  { 300,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #300 = RETDYN
  { 301,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #301 = RETURN
  { 302,	7,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x2000ULL, nullptr, nullptr, OperandInfo59 },  // Inst #302 = TXD
  { 303,	7,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x2000ULL, nullptr, nullptr, OperandInfo59 },  // Inst #303 = TXD_SHADOW
  { 304,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #304 = WHILELOOP
  { 305,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #305 = ADD
  { 306,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #306 = ADDC_UINT
  { 307,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #307 = ADD_INT
  { 308,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #308 = ALU_CLAUSE
  { 309,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #309 = AND_INT
  { 310,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #310 = ASHR_eg
  { 311,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #311 = ASHR_r600
  { 312,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #312 = BCNT_INT
  { 313,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo62 },  // Inst #313 = BFE_INT_eg
  { 314,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo62 },  // Inst #314 = BFE_UINT_eg
  { 315,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo62 },  // Inst #315 = BFI_INT_eg
  { 316,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #316 = BFM_INT_eg
  { 317,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo62 },  // Inst #317 = BIT_ALIGN_INT_eg
  { 318,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #318 = CEIL
  { 319,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo63 },  // Inst #319 = CF_ALU
  { 320,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo63 },  // Inst #320 = CF_ALU_BREAK
  { 321,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo63 },  // Inst #321 = CF_ALU_CONTINUE
  { 322,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo63 },  // Inst #322 = CF_ALU_ELSE_AFTER
  { 323,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo63 },  // Inst #323 = CF_ALU_POP_AFTER
  { 324,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo63 },  // Inst #324 = CF_ALU_PUSH_BEFORE
  { 325,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #325 = CF_CALL_FS_EG
  { 326,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #326 = CF_CALL_FS_R600
  { 327,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #327 = CF_CONTINUE_EG
  { 328,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #328 = CF_CONTINUE_R600
  { 329,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo10 },  // Inst #329 = CF_ELSE_EG
  { 330,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo10 },  // Inst #330 = CF_ELSE_R600
  { 331,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #331 = CF_END_CM
  { 332,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #332 = CF_END_EG
  { 333,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #333 = CF_END_R600
  { 334,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo10 },  // Inst #334 = CF_JUMP_EG
  { 335,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo10 },  // Inst #335 = CF_JUMP_R600
  { 336,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo10 },  // Inst #336 = CF_PUSH_EG
  { 337,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #337 = CF_PUSH_ELSE_R600
  { 338,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo10 },  // Inst #338 = CF_TC_EG
  { 339,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo10 },  // Inst #339 = CF_TC_R600
  { 340,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo10 },  // Inst #340 = CF_VC_EG
  { 341,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo10 },  // Inst #341 = CF_VC_R600
  { 342,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo62 },  // Inst #342 = CNDE_INT
  { 343,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo62 },  // Inst #343 = CNDE_eg
  { 344,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo62 },  // Inst #344 = CNDE_r600
  { 345,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo62 },  // Inst #345 = CNDGE_INT
  { 346,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo62 },  // Inst #346 = CNDGE_eg
  { 347,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo62 },  // Inst #347 = CNDGE_r600
  { 348,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo62 },  // Inst #348 = CNDGT_INT
  { 349,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo62 },  // Inst #349 = CNDGT_eg
  { 350,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo62 },  // Inst #350 = CNDGT_r600
  { 351,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4650ULL, nullptr, nullptr, OperandInfo61 },  // Inst #351 = COS_cm
  { 352,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo61 },  // Inst #352 = COS_eg
  { 353,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo61 },  // Inst #353 = COS_r600
  { 354,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo61 },  // Inst #354 = COS_r700
  { 355,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #355 = CUBE_eg_real
  { 356,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #356 = CUBE_r600_real
  { 357,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #357 = DOT4_eg
  { 358,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #358 = DOT4_r600
  { 359,	7,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo64 },  // Inst #359 = EG_ExportBuf
  { 360,	9,	0,	0,	1,	0|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65 },  // Inst #360 = EG_ExportSwz
  { 361,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #361 = END_LOOP_EG
  { 362,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #362 = END_LOOP_R600
  { 363,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo61 },  // Inst #363 = EXP_IEEE_cm
  { 364,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #364 = EXP_IEEE_eg
  { 365,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #365 = EXP_IEEE_r600
  { 366,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #366 = FETCH_CLAUSE
  { 367,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #367 = FFBH_UINT
  { 368,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #368 = FFBL_INT
  { 369,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #369 = FLOOR
  { 370,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #370 = FLT16_TO_FLT32
  { 371,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #371 = FLT32_TO_FLT16
  { 372,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #372 = FLT_TO_INT_eg
  { 373,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #373 = FLT_TO_INT_r600
  { 374,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #374 = FLT_TO_UINT_eg
  { 375,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #375 = FLT_TO_UINT_r600
  { 376,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo62 },  // Inst #376 = FMA_eg
  { 377,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #377 = FRACT
  { 378,	0,	0,	0,	3,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x4000ULL, nullptr, nullptr, nullptr },  // Inst #378 = GROUP_BARRIER
  { 379,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #379 = INTERP_LOAD_P0
  { 380,	5,	2,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #380 = INTERP_PAIR_XY
  { 381,	5,	2,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #381 = INTERP_PAIR_ZW
  { 382,	2,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #382 = INTERP_VEC_LOAD
  { 383,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #383 = INTERP_XY
  { 384,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #384 = INTERP_ZW
  { 385,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #385 = INT_TO_FLT_eg
  { 386,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #386 = INT_TO_FLT_r600
  { 387,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #387 = KILLGT
  { 388,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo69 },  // Inst #388 = LDS_ADD
  { 389,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo70 },  // Inst #389 = LDS_ADD_RET
  { 390,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo69 },  // Inst #390 = LDS_AND
  { 391,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo70 },  // Inst #391 = LDS_AND_RET
  { 392,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo71 },  // Inst #392 = LDS_BYTE_READ_RET
  { 393,	9,	0,	0,	5,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable), 0x14200ULL, nullptr, nullptr, OperandInfo69 },  // Inst #393 = LDS_BYTE_WRITE
  { 394,	12,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44200ULL, nullptr, nullptr, OperandInfo72 },  // Inst #394 = LDS_CMPST
  { 395,	13,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x44200ULL, nullptr, nullptr, OperandInfo73 },  // Inst #395 = LDS_CMPST_RET
  { 396,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo69 },  // Inst #396 = LDS_MAX_INT
  { 397,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo70 },  // Inst #397 = LDS_MAX_INT_RET
  { 398,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo69 },  // Inst #398 = LDS_MAX_UINT
  { 399,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo70 },  // Inst #399 = LDS_MAX_UINT_RET
  { 400,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo69 },  // Inst #400 = LDS_MIN_INT
  { 401,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo70 },  // Inst #401 = LDS_MIN_INT_RET
  { 402,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo69 },  // Inst #402 = LDS_MIN_UINT
  { 403,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo70 },  // Inst #403 = LDS_MIN_UINT_RET
  { 404,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo69 },  // Inst #404 = LDS_OR
  { 405,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo70 },  // Inst #405 = LDS_OR_RET
  { 406,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo71 },  // Inst #406 = LDS_READ_RET
  { 407,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo71 },  // Inst #407 = LDS_SHORT_READ_RET
  { 408,	9,	0,	0,	5,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable), 0x14200ULL, nullptr, nullptr, OperandInfo69 },  // Inst #408 = LDS_SHORT_WRITE
  { 409,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo69 },  // Inst #409 = LDS_SUB
  { 410,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo70 },  // Inst #410 = LDS_SUB_RET
  { 411,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo71 },  // Inst #411 = LDS_UBYTE_READ_RET
  { 412,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo71 },  // Inst #412 = LDS_USHORT_READ_RET
  { 413,	9,	0,	0,	5,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable), 0x14200ULL, nullptr, nullptr, OperandInfo69 },  // Inst #413 = LDS_WRITE
  { 414,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo69 },  // Inst #414 = LDS_WRXCHG
  { 415,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo70 },  // Inst #415 = LDS_WRXCHG_RET
  { 416,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo69 },  // Inst #416 = LDS_XOR
  { 417,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo70 },  // Inst #417 = LDS_XOR_RET
  { 418,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo7 },  // Inst #418 = LITERALS
  { 419,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #419 = LOG_CLAMPED_eg
  { 420,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #420 = LOG_CLAMPED_r600
  { 421,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo61 },  // Inst #421 = LOG_IEEE_cm
  { 422,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #422 = LOG_IEEE_eg
  { 423,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #423 = LOG_IEEE_r600
  { 424,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #424 = LOOP_BREAK_EG
  { 425,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #425 = LOOP_BREAK_R600
  { 426,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #426 = LSHL_eg
  { 427,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #427 = LSHL_r600
  { 428,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #428 = LSHR_eg
  { 429,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #429 = LSHR_r600
  { 430,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #430 = MAX
  { 431,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #431 = MAX_DX10
  { 432,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #432 = MAX_INT
  { 433,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #433 = MAX_UINT
  { 434,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #434 = MIN
  { 435,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #435 = MIN_DX10
  { 436,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #436 = MIN_INT
  { 437,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #437 = MIN_UINT
  { 438,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #438 = MOV
  { 439,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #439 = MOVA_INT_eg
  { 440,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #440 = MUL
  { 441,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo62 },  // Inst #441 = MULADD_IEEE_eg
  { 442,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo62 },  // Inst #442 = MULADD_IEEE_r600
  { 443,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo62 },  // Inst #443 = MULADD_INT24_cm
  { 444,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo62 },  // Inst #444 = MULADD_UINT24_eg
  { 445,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo62 },  // Inst #445 = MULADD_eg
  { 446,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo62 },  // Inst #446 = MULADD_r600
  { 447,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo60 },  // Inst #447 = MULHI_INT_cm
  { 448,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo60 },  // Inst #448 = MULHI_INT_cm24
  { 449,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #449 = MULHI_INT_eg
  { 450,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #450 = MULHI_INT_r600
  { 451,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #451 = MULHI_UINT24_eg
  { 452,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo60 },  // Inst #452 = MULHI_UINT_cm
  { 453,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo60 },  // Inst #453 = MULHI_UINT_cm24
  { 454,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #454 = MULHI_UINT_eg
  { 455,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #455 = MULHI_UINT_r600
  { 456,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo60 },  // Inst #456 = MULLO_INT_cm
  { 457,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #457 = MULLO_INT_eg
  { 458,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #458 = MULLO_INT_r600
  { 459,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo60 },  // Inst #459 = MULLO_UINT_cm
  { 460,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #460 = MULLO_UINT_eg
  { 461,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #461 = MULLO_UINT_r600
  { 462,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #462 = MUL_IEEE
  { 463,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #463 = MUL_INT24_cm
  { 464,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo62 },  // Inst #464 = MUL_LIT_eg
  { 465,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo62 },  // Inst #465 = MUL_LIT_r600
  { 466,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #466 = MUL_UINT24_eg
  { 467,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #467 = NOT_INT
  { 468,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #468 = OR_INT
  { 469,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #469 = PAD
  { 470,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo10 },  // Inst #470 = POP_EG
  { 471,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo10 },  // Inst #471 = POP_R600
  { 472,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #472 = PRED_SETE
  { 473,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #473 = PRED_SETE_INT
  { 474,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #474 = PRED_SETGE
  { 475,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #475 = PRED_SETGE_INT
  { 476,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #476 = PRED_SETGT
  { 477,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #477 = PRED_SETGT_INT
  { 478,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #478 = PRED_SETNE
  { 479,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #479 = PRED_SETNE_INT
  { 480,	7,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo64 },  // Inst #480 = R600_ExportBuf
  { 481,	9,	0,	0,	1,	0|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65 },  // Inst #481 = R600_ExportSwz
  { 482,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #482 = RAT_ATOMIC_ADD_NORET
  { 483,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #483 = RAT_ATOMIC_ADD_RTN
  { 484,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #484 = RAT_ATOMIC_AND_NORET
  { 485,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #485 = RAT_ATOMIC_AND_RTN
  { 486,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #486 = RAT_ATOMIC_CMPXCHG_INT_NORET
  { 487,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #487 = RAT_ATOMIC_CMPXCHG_INT_RTN
  { 488,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #488 = RAT_ATOMIC_DEC_UINT_NORET
  { 489,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #489 = RAT_ATOMIC_DEC_UINT_RTN
  { 490,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #490 = RAT_ATOMIC_INC_UINT_NORET
  { 491,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #491 = RAT_ATOMIC_INC_UINT_RTN
  { 492,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #492 = RAT_ATOMIC_MAX_INT_NORET
  { 493,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #493 = RAT_ATOMIC_MAX_INT_RTN
  { 494,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #494 = RAT_ATOMIC_MAX_UINT_NORET
  { 495,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #495 = RAT_ATOMIC_MAX_UINT_RTN
  { 496,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #496 = RAT_ATOMIC_MIN_INT_NORET
  { 497,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #497 = RAT_ATOMIC_MIN_INT_RTN
  { 498,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #498 = RAT_ATOMIC_MIN_UINT_NORET
  { 499,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #499 = RAT_ATOMIC_MIN_UINT_RTN
  { 500,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #500 = RAT_ATOMIC_OR_NORET
  { 501,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #501 = RAT_ATOMIC_OR_RTN
  { 502,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #502 = RAT_ATOMIC_RSUB_NORET
  { 503,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #503 = RAT_ATOMIC_RSUB_RTN
  { 504,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #504 = RAT_ATOMIC_SUB_NORET
  { 505,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #505 = RAT_ATOMIC_SUB_RTN
  { 506,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #506 = RAT_ATOMIC_XCHG_INT_NORET
  { 507,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #507 = RAT_ATOMIC_XCHG_INT_RTN
  { 508,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #508 = RAT_ATOMIC_XOR_NORET
  { 509,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #509 = RAT_ATOMIC_XOR_RTN
  { 510,	2,	0,	0,	1,	0|(1ULL<<MCID::MayStore), 0x20000ULL, nullptr, nullptr, OperandInfo75 },  // Inst #510 = RAT_MSKOR
  { 511,	2,	0,	0,	1,	0|(1ULL<<MCID::MayStore), 0x20000ULL, nullptr, nullptr, OperandInfo75 },  // Inst #511 = RAT_STORE_DWORD128
  { 512,	2,	0,	0,	1,	0|(1ULL<<MCID::MayStore), 0x20000ULL, nullptr, nullptr, OperandInfo76 },  // Inst #512 = RAT_STORE_DWORD32
  { 513,	2,	0,	0,	1,	0|(1ULL<<MCID::MayStore), 0x20000ULL, nullptr, nullptr, OperandInfo77 },  // Inst #513 = RAT_STORE_DWORD64
  { 514,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo78 },  // Inst #514 = RAT_STORE_TYPED_cm
  { 515,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo78 },  // Inst #515 = RAT_STORE_TYPED_eg
  { 516,	3,	0,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x20000ULL, nullptr, nullptr, OperandInfo79 },  // Inst #516 = RAT_WRITE_CACHELESS_128_eg
  { 517,	3,	0,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x20000ULL, nullptr, nullptr, OperandInfo80 },  // Inst #517 = RAT_WRITE_CACHELESS_32_eg
  { 518,	3,	0,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x20000ULL, nullptr, nullptr, OperandInfo81 },  // Inst #518 = RAT_WRITE_CACHELESS_64_eg
  { 519,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo61 },  // Inst #519 = RECIPSQRT_CLAMPED_cm
  { 520,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #520 = RECIPSQRT_CLAMPED_eg
  { 521,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #521 = RECIPSQRT_CLAMPED_r600
  { 522,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo61 },  // Inst #522 = RECIPSQRT_IEEE_cm
  { 523,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #523 = RECIPSQRT_IEEE_eg
  { 524,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #524 = RECIPSQRT_IEEE_r600
  { 525,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo61 },  // Inst #525 = RECIP_CLAMPED_cm
  { 526,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #526 = RECIP_CLAMPED_eg
  { 527,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #527 = RECIP_CLAMPED_r600
  { 528,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo61 },  // Inst #528 = RECIP_IEEE_cm
  { 529,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #529 = RECIP_IEEE_eg
  { 530,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #530 = RECIP_IEEE_r600
  { 531,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #531 = RECIP_UINT_eg
  { 532,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #532 = RECIP_UINT_r600
  { 533,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #533 = RNDNE
  { 534,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #534 = SETE
  { 535,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #535 = SETE_DX10
  { 536,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #536 = SETE_INT
  { 537,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #537 = SETGE_DX10
  { 538,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #538 = SETGE_INT
  { 539,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #539 = SETGE_UINT
  { 540,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #540 = SETGT_DX10
  { 541,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #541 = SETGT_INT
  { 542,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #542 = SETGT_UINT
  { 543,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #543 = SETNE_DX10
  { 544,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #544 = SETNE_INT
  { 545,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #545 = SGE
  { 546,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #546 = SGT
  { 547,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4650ULL, nullptr, nullptr, OperandInfo61 },  // Inst #547 = SIN_cm
  { 548,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo61 },  // Inst #548 = SIN_eg
  { 549,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo61 },  // Inst #549 = SIN_r600
  { 550,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo61 },  // Inst #550 = SIN_r700
  { 551,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #551 = SNE
  { 552,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #552 = SUBB_UINT
  { 553,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #553 = SUB_INT
  { 554,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo82 },  // Inst #554 = TEX_GET_GRADIENTS_H
  { 555,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo82 },  // Inst #555 = TEX_GET_GRADIENTS_V
  { 556,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo82 },  // Inst #556 = TEX_GET_TEXTURE_RESINFO
  { 557,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo82 },  // Inst #557 = TEX_LD
  { 558,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo82 },  // Inst #558 = TEX_LDPTR
  { 559,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo82 },  // Inst #559 = TEX_SAMPLE
  { 560,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo82 },  // Inst #560 = TEX_SAMPLE_C
  { 561,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo82 },  // Inst #561 = TEX_SAMPLE_C_G
  { 562,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo82 },  // Inst #562 = TEX_SAMPLE_C_L
  { 563,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo82 },  // Inst #563 = TEX_SAMPLE_C_LB
  { 564,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo82 },  // Inst #564 = TEX_SAMPLE_G
  { 565,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo82 },  // Inst #565 = TEX_SAMPLE_L
  { 566,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo82 },  // Inst #566 = TEX_SAMPLE_LB
  { 567,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo82 },  // Inst #567 = TEX_SET_GRADIENTS_H
  { 568,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo82 },  // Inst #568 = TEX_SET_GRADIENTS_V
  { 569,	4,	1,	0,	1,	0, 0x1000ULL, nullptr, nullptr, OperandInfo83 },  // Inst #569 = TEX_VTX_CONSTBUF
  { 570,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1000ULL, nullptr, nullptr, OperandInfo83 },  // Inst #570 = TEX_VTX_TEXBUF
  { 571,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #571 = TRUNC
  { 572,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #572 = UINT_TO_FLT_eg
  { 573,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo61 },  // Inst #573 = UINT_TO_FLT_r600
  { 574,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo83 },  // Inst #574 = VTX_READ_128_cm
  { 575,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo83 },  // Inst #575 = VTX_READ_128_eg
  { 576,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo84 },  // Inst #576 = VTX_READ_16_cm
  { 577,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo84 },  // Inst #577 = VTX_READ_16_eg
  { 578,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo85 },  // Inst #578 = VTX_READ_32_cm
  { 579,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo85 },  // Inst #579 = VTX_READ_32_eg
  { 580,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo86 },  // Inst #580 = VTX_READ_64_cm
  { 581,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo86 },  // Inst #581 = VTX_READ_64_eg
  { 582,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo84 },  // Inst #582 = VTX_READ_8_cm
  { 583,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo84 },  // Inst #583 = VTX_READ_8_eg
  { 584,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #584 = WHILE_LOOP_EG
  { 585,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #585 = WHILE_LOOP_R600
  { 586,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo60 },  // Inst #586 = XOR_INT
};

extern const char R600InstrNameData[] = {
  /* 0 */ 'C', 'F', '_', 'T', 'C', '_', 'R', '6', '0', '0', 0,
  /* 11 */ 'C', 'F', '_', 'V', 'C', '_', 'R', '6', '0', '0', 0,
  /* 22 */ 'C', 'F', '_', 'E', 'N', 'D', '_', 'R', '6', '0', '0', 0,
  /* 34 */ 'C', 'F', '_', 'E', 'L', 'S', 'E', '_', 'R', '6', '0', '0', 0,
  /* 47 */ 'C', 'F', '_', 'P', 'U', 'S', 'H', '_', 'E', 'L', 'S', 'E', '_', 'R', '6', '0', '0', 0,
  /* 65 */ 'C', 'F', '_', 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', '_', 'R', '6', '0', '0', 0,
  /* 82 */ 'F', 'N', 'E', 'G', '_', 'R', '6', '0', '0', 0,
  /* 92 */ 'L', 'O', 'O', 'P', '_', 'B', 'R', 'E', 'A', 'K', '_', 'R', '6', '0', '0', 0,
  /* 108 */ 'C', 'F', '_', 'J', 'U', 'M', 'P', '_', 'R', '6', '0', '0', 0,
  /* 121 */ 'E', 'N', 'D', '_', 'L', 'O', 'O', 'P', '_', 'R', '6', '0', '0', 0,
  /* 135 */ 'W', 'H', 'I', 'L', 'E', '_', 'L', 'O', 'O', 'P', '_', 'R', '6', '0', '0', 0,
  /* 151 */ 'P', 'O', 'P', '_', 'R', '6', '0', '0', 0,
  /* 160 */ 'F', 'A', 'B', 'S', '_', 'R', '6', '0', '0', 0,
  /* 170 */ 'C', 'F', '_', 'C', 'A', 'L', 'L', '_', 'F', 'S', '_', 'R', '6', '0', '0', 0,
  /* 186 */ 'D', 'O', 'T', '4', '_', 'r', '6', '0', '0', 0,
  /* 196 */ 'M', 'U', 'L', 'A', 'D', 'D', '_', 'r', '6', '0', '0', 0,
  /* 208 */ 'L', 'O', 'G', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'r', '6', '0', '0', 0,
  /* 225 */ 'R', 'E', 'C', 'I', 'P', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'r', '6', '0', '0', 0,
  /* 244 */ 'R', 'E', 'C', 'I', 'P', 'S', 'Q', 'R', 'T', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'r', '6', '0', '0', 0,
  /* 267 */ 'C', 'N', 'D', 'E', '_', 'r', '6', '0', '0', 0,
  /* 277 */ 'M', 'U', 'L', 'A', 'D', 'D', '_', 'I', 'E', 'E', 'E', '_', 'r', '6', '0', '0', 0,
  /* 294 */ 'L', 'O', 'G', '_', 'I', 'E', 'E', 'E', '_', 'r', '6', '0', '0', 0,
  /* 308 */ 'R', 'E', 'C', 'I', 'P', '_', 'I', 'E', 'E', 'E', '_', 'r', '6', '0', '0', 0,
  /* 324 */ 'E', 'X', 'P', '_', 'I', 'E', 'E', 'E', '_', 'r', '6', '0', '0', 0,
  /* 338 */ 'R', 'E', 'C', 'I', 'P', 'S', 'Q', 'R', 'T', '_', 'I', 'E', 'E', 'E', '_', 'r', '6', '0', '0', 0,
  /* 358 */ 'C', 'N', 'D', 'G', 'E', '_', 'r', '6', '0', '0', 0,
  /* 369 */ 'L', 'S', 'H', 'L', '_', 'r', '6', '0', '0', 0,
  /* 379 */ 'S', 'I', 'N', '_', 'r', '6', '0', '0', 0,
  /* 388 */ 'A', 'S', 'H', 'R', '_', 'r', '6', '0', '0', 0,
  /* 398 */ 'L', 'S', 'H', 'R', '_', 'r', '6', '0', '0', 0,
  /* 408 */ 'C', 'O', 'S', '_', 'r', '6', '0', '0', 0,
  /* 417 */ 'C', 'N', 'D', 'G', 'T', '_', 'r', '6', '0', '0', 0,
  /* 428 */ 'M', 'U', 'L', '_', 'L', 'I', 'T', '_', 'r', '6', '0', '0', 0,
  /* 441 */ 'U', 'I', 'N', 'T', '_', 'T', 'O', '_', 'F', 'L', 'T', '_', 'r', '6', '0', '0', 0,
  /* 458 */ 'M', 'U', 'L', 'H', 'I', '_', 'U', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 474 */ 'M', 'U', 'L', 'L', 'O', '_', 'U', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 490 */ 'F', 'L', 'T', '_', 'T', 'O', '_', 'U', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 507 */ 'R', 'E', 'C', 'I', 'P', '_', 'U', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 523 */ 'M', 'U', 'L', 'H', 'I', '_', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 538 */ 'M', 'U', 'L', 'L', 'O', '_', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 553 */ 'F', 'L', 'T', '_', 'T', 'O', '_', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 569 */ 'S', 'I', 'N', '_', 'r', '7', '0', '0', 0,
  /* 578 */ 'C', 'O', 'S', '_', 'r', '7', '0', '0', 0,
  /* 587 */ 'G', '_', 'F', 'L', 'O', 'G', '1', '0', 0,
  /* 596 */ 'S', 'E', 'T', 'G', 'E', '_', 'D', 'X', '1', '0', 0,
  /* 607 */ 'S', 'E', 'T', 'N', 'E', '_', 'D', 'X', '1', '0', 0,
  /* 618 */ 'S', 'E', 'T', 'E', '_', 'D', 'X', '1', '0', 0,
  /* 628 */ 'M', 'I', 'N', '_', 'D', 'X', '1', '0', 0,
  /* 637 */ 'S', 'E', 'T', 'G', 'T', '_', 'D', 'X', '1', '0', 0,
  /* 648 */ 'M', 'A', 'X', '_', 'D', 'X', '1', '0', 0,
  /* 657 */ 'I', 'N', 'T', 'E', 'R', 'P', '_', 'L', 'O', 'A', 'D', '_', 'P', '0', 0,
  /* 672 */ 'R', 'A', 'T', '_', 'S', 'T', 'O', 'R', 'E', '_', 'D', 'W', 'O', 'R', 'D', '3', '2', 0,
  /* 690 */ 'M', 'O', 'V', '_', 'I', 'M', 'M', '_', 'F', '3', '2', 0,
  /* 702 */ 'M', 'O', 'V', '_', 'I', 'M', 'M', '_', 'I', '3', '2', 0,
  /* 714 */ 'F', 'L', 'T', '1', '6', '_', 'T', 'O', '_', 'F', 'L', 'T', '3', '2', 0,
  /* 729 */ 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', 'C', '_', 'f', '3', '2', 0,
  /* 743 */ 'I', 'F', 'C', '_', 'f', '3', '2', 0,
  /* 751 */ 'B', 'R', 'E', 'A', 'K', 'C', '_', 'f', '3', '2', 0,
  /* 762 */ 'B', 'R', 'A', 'N', 'C', 'H', '_', 'C', 'O', 'N', 'D', '_', 'f', '3', '2', 0,
  /* 778 */ 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'Z', '_', 'f', '3', '2', 0,
  /* 800 */ 'I', 'F', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'Z', '_', 'f', '3', '2', 0,
  /* 816 */ 'B', 'R', 'E', 'A', 'K', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'Z', '_', 'f', '3', '2', 0,
  /* 835 */ 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'N', 'Z', '_', 'f', '3', '2', 0,
  /* 858 */ 'I', 'F', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'N', 'Z', '_', 'f', '3', '2', 0,
  /* 875 */ 'B', 'R', 'E', 'A', 'K', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'N', 'Z', '_', 'f', '3', '2', 0,
  /* 895 */ 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', 'C', '_', 'i', '3', '2', 0,
  /* 909 */ 'I', 'F', 'C', '_', 'i', '3', '2', 0,
  /* 917 */ 'B', 'R', 'E', 'A', 'K', 'C', '_', 'i', '3', '2', 0,
  /* 928 */ 'B', 'R', 'A', 'N', 'C', 'H', '_', 'C', 'O', 'N', 'D', '_', 'i', '3', '2', 0,
  /* 944 */ 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'Z', '_', 'i', '3', '2', 0,
  /* 966 */ 'I', 'F', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'Z', '_', 'i', '3', '2', 0,
  /* 982 */ 'B', 'R', 'E', 'A', 'K', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'Z', '_', 'i', '3', '2', 0,
  /* 1001 */ 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'N', 'Z', '_', 'i', '3', '2', 0,
  /* 1024 */ 'I', 'F', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'N', 'Z', '_', 'i', '3', '2', 0,
  /* 1041 */ 'B', 'R', 'E', 'A', 'K', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'N', 'Z', '_', 'i', '3', '2', 0,
  /* 1061 */ 'G', '_', 'F', 'L', 'O', 'G', '2', 0,
  /* 1069 */ 'G', '_', 'F', 'E', 'X', 'P', '2', 0,
  /* 1077 */ 'R', '6', '0', '0', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'E', 'L', 'T', '_', 'V', '2', 0,
  /* 1097 */ 'R', '6', '0', '0', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'E', 'L', 'T', '_', 'V', '2', 0,
  /* 1116 */ 'M', 'U', 'L', 'H', 'I', '_', 'U', 'I', 'N', 'T', '_', 'c', 'm', '2', '4', 0,
  /* 1132 */ 'M', 'U', 'L', 'H', 'I', '_', 'I', 'N', 'T', '_', 'c', 'm', '2', '4', 0,
  /* 1147 */ 'R', 'A', 'T', '_', 'S', 'T', 'O', 'R', 'E', '_', 'D', 'W', 'O', 'R', 'D', '6', '4', 0,
  /* 1165 */ 'R', '6', '0', '0', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'E', 'L', 'T', '_', 'V', '4', 0,
  /* 1185 */ 'R', '6', '0', '0', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'E', 'L', 'T', '_', 'V', '4', 0,
  /* 1204 */ 'D', 'O', 'T', '_', '4', 0,
  /* 1210 */ 'F', 'L', 'T', '3', '2', '_', 'T', 'O', '_', 'F', 'L', 'T', '1', '6', 0,
  /* 1225 */ 'R', 'A', 'T', '_', 'S', 'T', 'O', 'R', 'E', '_', 'D', 'W', 'O', 'R', 'D', '1', '2', '8', 0,
  /* 1244 */ 'G', '_', 'F', 'M', 'A', 0,
  /* 1250 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'M', 'A', 0,
  /* 1263 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'C', '_', 'L', 'B', 0,
  /* 1279 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'L', 'B', 0,
  /* 1293 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 1300 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'S', 'U', 'B', 0,
  /* 1314 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'S', 'U', 'B', 0,
  /* 1331 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 1337 */ 'L', 'D', 'S', '_', 'S', 'U', 'B', 0,
  /* 1345 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'S', 'U', 'B', 0,
  /* 1361 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 1373 */ 'E', 'N', 'D', 'F', 'U', 'N', 'C', 0,
  /* 1381 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 1391 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 1409 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 1417 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 1438 */ 'G', '_', 'D', 'Y', 'N', '_', 'S', 'T', 'A', 'C', 'K', 'A', 'L', 'L', 'O', 'C', 0,
  /* 1455 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'C', 0,
  /* 1468 */ 'G', '_', 'F', 'M', 'A', 'D', 0,
  /* 1475 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 1494 */ 'G', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 1505 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 1524 */ 'G', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 1535 */ 'I', 'N', 'T', 'E', 'R', 'P', '_', 'V', 'E', 'C', '_', 'L', 'O', 'A', 'D', 0,
  /* 1551 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'L', 'O', 'A', 'D', 0,
  /* 1566 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 1573 */ 'P', 'A', 'D', 0,
  /* 1577 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'F', 'A', 'D', 'D', 0,
  /* 1594 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 1601 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'S', 'E', 'Q', '_', 'F', 'A', 'D', 'D', 0,
  /* 1622 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'A', 'D', 'D', 0,
  /* 1636 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'A', 'D', 'D', 0,
  /* 1653 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'A', 'D', 'D', 0,
  /* 1669 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 1675 */ 'G', '_', 'P', 'T', 'R', '_', 'A', 'D', 'D', 0,
  /* 1685 */ 'L', 'D', 'S', '_', 'A', 'D', 'D', 0,
  /* 1693 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'D', 'D', 0,
  /* 1709 */ 'T', 'E', 'X', '_', 'L', 'D', 0,
  /* 1716 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'N', 'A', 'N', 'D', 0,
  /* 1733 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'A', 'N', 'D', 0,
  /* 1749 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 1755 */ 'L', 'D', 'S', '_', 'A', 'N', 'D', 0,
  /* 1763 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'N', 'D', 0,
  /* 1779 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 1792 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 1801 */ 'J', 'U', 'M', 'P', '_', 'C', 'O', 'N', 'D', 0,
  /* 1811 */ 'G', '_', 'L', 'L', 'R', 'O', 'U', 'N', 'D', 0,
  /* 1821 */ 'G', '_', 'L', 'R', 'O', 'U', 'N', 'D', 0,
  /* 1830 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'R', 'O', 'U', 'N', 'D', 0,
  /* 1848 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', '_', 'R', 'O', 'U', 'N', 'D', 0,
  /* 1874 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 1891 */ 'T', 'X', 'D', 0,
  /* 1895 */ 'P', 'S', 'E', 'U', 'D', 'O', '_', 'P', 'R', 'O', 'B', 'E', 0,
  /* 1908 */ 'G', '_', 'S', 'S', 'U', 'B', 'E', 0,
  /* 1916 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 1924 */ 'G', '_', 'F', 'E', 'N', 'C', 'E', 0,
  /* 1932 */ 'A', 'R', 'I', 'T', 'H', '_', 'F', 'E', 'N', 'C', 'E', 0,
  /* 1944 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 1957 */ 'G', '_', 'S', 'A', 'D', 'D', 'E', 0,
  /* 1965 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 1973 */ 'M', 'U', 'L', '_', 'I', 'E', 'E', 'E', 0,
  /* 1982 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 1997 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 2012 */ 'S', 'G', 'E', 0,
  /* 2016 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'G', 'E', 0,
  /* 2027 */ 'G', '_', 'J', 'U', 'M', 'P', '_', 'T', 'A', 'B', 'L', 'E', 0,
  /* 2040 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 2047 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', 0,
  /* 2058 */ 'R', 'N', 'D', 'N', 'E', 0,
  /* 2064 */ 'G', '_', 'M', 'E', 'M', 'C', 'P', 'Y', '_', 'I', 'N', 'L', 'I', 'N', 'E', 0,
  /* 2080 */ 'S', 'N', 'E', 0,
  /* 2084 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'N', 'E', 0,
  /* 2095 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 2108 */ 'C', 'F', '_', 'A', 'L', 'U', '_', 'P', 'U', 'S', 'H', '_', 'B', 'E', 'F', 'O', 'R', 'E', 0,
  /* 2127 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 2143 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 2151 */ 'E', 'L', 'S', 'E', 0,
  /* 2156 */ 'G', '_', 'B', 'I', 'T', 'R', 'E', 'V', 'E', 'R', 'S', 'E', 0,
  /* 2169 */ 'F', 'E', 'T', 'C', 'H', '_', 'C', 'L', 'A', 'U', 'S', 'E', 0,
  /* 2182 */ 'A', 'L', 'U', '_', 'C', 'L', 'A', 'U', 'S', 'E', 0,
  /* 2193 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'E', 0,
  /* 2203 */ 'L', 'D', 'S', '_', 'B', 'Y', 'T', 'E', '_', 'W', 'R', 'I', 'T', 'E', 0,
  /* 2218 */ 'M', 'A', 'S', 'K', '_', 'W', 'R', 'I', 'T', 'E', 0,
  /* 2229 */ 'L', 'D', 'S', '_', 'W', 'R', 'I', 'T', 'E', 0,
  /* 2239 */ 'L', 'D', 'S', '_', 'S', 'H', 'O', 'R', 'T', '_', 'W', 'R', 'I', 'T', 'E', 0,
  /* 2255 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 2265 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 2280 */ 'C', 'F', '_', 'A', 'L', 'U', '_', 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', 0,
  /* 2296 */ 'G', '_', 'M', 'E', 'M', 'M', 'O', 'V', 'E', 0,
  /* 2306 */ 'G', '_', 'F', 'R', 'E', 'E', 'Z', 'E', 0,
  /* 2315 */ 'G', '_', 'F', 'C', 'A', 'N', 'O', 'N', 'I', 'C', 'A', 'L', 'I', 'Z', 'E', 0,
  /* 2331 */ 'G', '_', 'C', 'T', 'L', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 2349 */ 'G', '_', 'C', 'T', 'T', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 2367 */ 'G', '_', 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 2382 */ 'D', 'B', 'G', '_', 'I', 'N', 'S', 'T', 'R', '_', 'R', 'E', 'F', 0,
  /* 2396 */ 'E', 'N', 'D', 'I', 'F', 0,
  /* 2402 */ 'T', 'E', 'X', '_', 'V', 'T', 'X', '_', 'C', 'O', 'N', 'S', 'T', 'B', 'U', 'F', 0,
  /* 2419 */ 'T', 'E', 'X', '_', 'V', 'T', 'X', '_', 'T', 'E', 'X', 'B', 'U', 'F', 0,
  /* 2434 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 2441 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 2456 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 2470 */ 'G', '_', 'S', 'E', 'X', 'T', '_', 'I', 'N', 'R', 'E', 'G', 0,
  /* 2483 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 2497 */ 'C', 'F', '_', 'T', 'C', '_', 'E', 'G', 0,
  /* 2506 */ 'C', 'F', '_', 'V', 'C', '_', 'E', 'G', 0,
  /* 2515 */ 'C', 'F', '_', 'E', 'N', 'D', '_', 'E', 'G', 0,
  /* 2525 */ 'C', 'F', '_', 'E', 'L', 'S', 'E', '_', 'E', 'G', 0,
  /* 2536 */ 'C', 'F', '_', 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', '_', 'E', 'G', 0,
  /* 2551 */ 'C', 'F', '_', 'P', 'U', 'S', 'H', '_', 'E', 'G', 0,
  /* 2562 */ 'L', 'O', 'O', 'P', '_', 'B', 'R', 'E', 'A', 'K', '_', 'E', 'G', 0,
  /* 2576 */ 'C', 'F', '_', 'J', 'U', 'M', 'P', '_', 'E', 'G', 0,
  /* 2587 */ 'E', 'N', 'D', '_', 'L', 'O', 'O', 'P', '_', 'E', 'G', 0,
  /* 2599 */ 'W', 'H', 'I', 'L', 'E', '_', 'L', 'O', 'O', 'P', '_', 'E', 'G', 0,
  /* 2613 */ 'P', 'O', 'P', '_', 'E', 'G', 0,
  /* 2620 */ 'C', 'F', '_', 'C', 'A', 'L', 'L', '_', 'F', 'S', '_', 'E', 'G', 0,
  /* 2634 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', 0,
  /* 2651 */ 'L', 'D', 'S', '_', 'W', 'R', 'X', 'C', 'H', 'G', 0,
  /* 2662 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'C', 'H', 'G', 0,
  /* 2679 */ 'G', '_', 'F', 'L', 'O', 'G', 0,
  /* 2686 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 2694 */ 'P', 'R', 'E', 'A', 'L', 'L', 'O', 'C', 'A', 'T', 'E', 'D', '_', 'A', 'R', 'G', 0,
  /* 2711 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'C', '_', 'G', 0,
  /* 2726 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'G', 0,
  /* 2739 */ 'B', 'R', 'A', 'N', 'C', 'H', 0,
  /* 2746 */ 'E', 'N', 'D', 'S', 'W', 'I', 'T', 'C', 'H', 0,
  /* 2756 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 2764 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 2772 */ 'T', 'E', 'X', '_', 'G', 'E', 'T', '_', 'G', 'R', 'A', 'D', 'I', 'E', 'N', 'T', 'S', '_', 'H', 0,
  /* 2792 */ 'T', 'E', 'X', '_', 'S', 'E', 'T', '_', 'G', 'R', 'A', 'D', 'I', 'E', 'N', 'T', 'S', '_', 'H', 0,
  /* 2812 */ 'D', 'B', 'G', '_', 'P', 'H', 'I', 0,
  /* 2820 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 2829 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 2838 */ 'G', '_', 'F', 'P', 'O', 'W', 'I', 0,
  /* 2846 */ 'C', 'F', '_', 'A', 'L', 'U', '_', 'B', 'R', 'E', 'A', 'K', 0,
  /* 2859 */ 'G', '_', 'P', 'T', 'R', 'M', 'A', 'S', 'K', 0,
  /* 2869 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2878 */ 'D', 'B', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2888 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2897 */ 'A', 'N', 'N', 'O', 'T', 'A', 'T', 'I', 'O', 'N', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2914 */ 'I', 'C', 'A', 'L', 'L', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'F', 'U', 'N', 'N', 'E', 'L', 0,
  /* 2934 */ 'G', '_', 'F', 'S', 'H', 'L', 0,
  /* 2941 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 2947 */ 'G', '_', 'F', 'C', 'E', 'I', 'L', 0,
  /* 2955 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 2975 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'Y', 'P', 'E', 'D', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 3002 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 3023 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 3035 */ 'K', 'I', 'L', 'L', 0,
  /* 3040 */ 'G', '_', 'R', 'O', 'T', 'L', 0,
  /* 3047 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'F', 'M', 'U', 'L', 0,
  /* 3064 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 3071 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'S', 'E', 'Q', '_', 'F', 'M', 'U', 'L', 0,
  /* 3092 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'M', 'U', 'L', 0,
  /* 3106 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'M', 'U', 'L', 0,
  /* 3122 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 3128 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'C', '_', 'L', 0,
  /* 3143 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'L', 0,
  /* 3156 */ 'C', 'F', '_', 'E', 'N', 'D', '_', 'C', 'M', 0,
  /* 3166 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 3173 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'R', 'E', 'M', 0,
  /* 3187 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 3194 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 3201 */ 'G', '_', 'S', 'D', 'I', 'V', 'R', 'E', 'M', 0,
  /* 3211 */ 'G', '_', 'U', 'D', 'I', 'V', 'R', 'E', 'M', 0,
  /* 3221 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 3231 */ 'G', '_', 'F', 'M', 'I', 'N', 'I', 'M', 'U', 'M', 0,
  /* 3242 */ 'G', '_', 'F', 'M', 'A', 'X', 'I', 'M', 'U', 'M', 0,
  /* 3253 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', 0,
  /* 3263 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', 0,
  /* 3273 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'R', 'O', 'U', 'N', 'D', 'E', 'V', 'E', 'N', 0,
  /* 3295 */ 'G', '_', 'A', 'S', 'S', 'E', 'R', 'T', '_', 'A', 'L', 'I', 'G', 'N', 0,
  /* 3310 */ 'G', '_', 'F', 'C', 'O', 'P', 'Y', 'S', 'I', 'G', 'N', 0,
  /* 3322 */ 'D', 'U', 'M', 'M', 'Y', '_', 'C', 'H', 'A', 'I', 'N', 0,
  /* 3334 */ 'E', 'N', 'D', 'M', 'A', 'I', 'N', 0,
  /* 3342 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'F', 'M', 'I', 'N', 0,
  /* 3359 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'M', 'I', 'N', 0,
  /* 3376 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'S', 'M', 'I', 'N', 0,
  /* 3393 */ 'G', '_', 'S', 'M', 'I', 'N', 0,
  /* 3400 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'U', 'M', 'I', 'N', 0,
  /* 3417 */ 'G', '_', 'U', 'M', 'I', 'N', 0,
  /* 3424 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'I', 'N', 0,
  /* 3441 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'I', 'N', 0,
  /* 3457 */ 'G', '_', 'F', 'S', 'I', 'N', 0,
  /* 3464 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 3480 */ 'R', 'E', 'T', 'U', 'R', 'N', 0,
  /* 3487 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'S', 'U', 'B', '_', 'R', 'T', 'N', 0,
  /* 3507 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'U', 'B', '_', 'R', 'T', 'N', 0,
  /* 3526 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'A', 'D', 'D', '_', 'R', 'T', 'N', 0,
  /* 3545 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'A', 'N', 'D', '_', 'R', 'T', 'N', 0,
  /* 3564 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'X', 'O', 'R', '_', 'R', 'T', 'N', 0,
  /* 3583 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'O', 'R', '_', 'R', 'T', 'N', 0,
  /* 3601 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'D', 'E', 'C', '_', 'U', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3625 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'I', 'N', 'C', '_', 'U', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3649 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'I', 'N', '_', 'U', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3673 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'A', 'X', '_', 'U', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3697 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3724 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'X', 'C', 'H', 'G', '_', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3748 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'I', 'N', '_', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3771 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'A', 'X', '_', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3794 */ 'R', 'E', 'T', 'D', 'Y', 'N', 0,
  /* 3801 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 3809 */ 'G', '_', 'U', 'S', 'U', 'B', 'O', 0,
  /* 3817 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 3825 */ 'G', '_', 'U', 'A', 'D', 'D', 'O', 0,
  /* 3833 */ 'T', 'E', 'X', '_', 'G', 'E', 'T', '_', 'T', 'E', 'X', 'T', 'U', 'R', 'E', '_', 'R', 'E', 'S', 'I', 'N', 'F', 'O', 0,
  /* 3857 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 3865 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 3873 */ 'G', '_', 'B', 'Z', 'E', 'R', 'O', 0,
  /* 3881 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 3890 */ 'G', '_', 'B', 'S', 'W', 'A', 'P', 0,
  /* 3898 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 3907 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 3916 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 3923 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 3930 */ 'J', 'U', 'M', 'P', 0,
  /* 3935 */ 'E', 'N', 'D', 'L', 'O', 'O', 'P', 0,
  /* 3943 */ 'W', 'H', 'I', 'L', 'E', 'L', 'O', 'O', 'P', 0,
  /* 3953 */ 'G', '_', 'C', 'T', 'P', 'O', 'P', 0,
  /* 3961 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 3974 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 3986 */ 'P', 'R', 'E', 'A', 'L', 'L', 'O', 'C', 'A', 'T', 'E', 'D', '_', 'S', 'E', 'T', 'U', 'P', 0,
  /* 4005 */ 'G', '_', 'F', 'E', 'X', 'P', 0,
  /* 4012 */ 'G', '_', 'B', 'R', 0,
  /* 4017 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', '_', 'B', 'R', 0,
  /* 4030 */ 'G', '_', 'B', 'L', 'O', 'C', 'K', '_', 'A', 'D', 'D', 'R', 0,
  /* 4043 */ 'M', 'O', 'V', '_', 'I', 'M', 'M', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'A', 'D', 'D', 'R', 0,
  /* 4063 */ 'G', 'R', 'O', 'U', 'P', '_', 'B', 'A', 'R', 'R', 'I', 'E', 'R', 0,
  /* 4077 */ 'C', 'F', '_', 'A', 'L', 'U', '_', 'E', 'L', 'S', 'E', '_', 'A', 'F', 'T', 'E', 'R', 0,
  /* 4095 */ 'C', 'F', '_', 'A', 'L', 'U', '_', 'P', 'O', 'P', '_', 'A', 'F', 'T', 'E', 'R', 0,
  /* 4112 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 4137 */ 'G', '_', 'R', 'E', 'A', 'D', 'C', 'Y', 'C', 'L', 'E', 'C', 'O', 'U', 'N', 'T', 'E', 'R', 0,
  /* 4156 */ 'G', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'G', 'I', 'S', 'T', 'E', 'R', 0,
  /* 4172 */ 'G', '_', 'W', 'R', 'I', 'T', 'E', '_', 'R', 'E', 'G', 'I', 'S', 'T', 'E', 'R', 0,
  /* 4189 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 4196 */ 'G', '_', 'F', 'S', 'H', 'R', 0,
  /* 4203 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 4210 */ 'R', 'A', 'T', '_', 'M', 'S', 'K', 'O', 'R', 0,
  /* 4220 */ 'G', '_', 'F', 'F', 'L', 'O', 'O', 'R', 0,
  /* 4229 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 4244 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 4261 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'X', 'O', 'R', 0,
  /* 4277 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 4283 */ 'L', 'D', 'S', '_', 'X', 'O', 'R', 0,
  /* 4291 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'O', 'R', 0,
  /* 4307 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'O', 'R', 0,
  /* 4322 */ 'G', '_', 'O', 'R', 0,
  /* 4327 */ 'L', 'D', 'S', '_', 'O', 'R', 0,
  /* 4334 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'O', 'R', 0,
  /* 4349 */ 'G', '_', 'R', 'O', 'T', 'R', 0,
  /* 4356 */ 'T', 'E', 'X', '_', 'L', 'D', 'P', 'T', 'R', 0,
  /* 4366 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 4377 */ 'G', '_', 'F', 'A', 'B', 'S', 0,
  /* 4384 */ 'G', '_', 'A', 'B', 'S', 0,
  /* 4390 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 4407 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 4422 */ 'L', 'I', 'T', 'E', 'R', 'A', 'L', 'S', 0,
  /* 4431 */ 'G', '_', 'F', 'C', 'O', 'S', 0,
  /* 4438 */ 'G', '_', 'C', 'O', 'N', 'C', 'A', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', 'S', 0,
  /* 4455 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 4472 */ 'G', '_', 'I', 'S', '_', 'F', 'P', 'C', 'L', 'A', 'S', 'S', 0,
  /* 4485 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'W', 'I', 'T', 'H', '_', 'S', 'U', 'C', 'C', 'E', 'S', 'S', 0,
  /* 4515 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 4542 */ 'G', '_', 'S', 'S', 'U', 'B', 'S', 'A', 'T', 0,
  /* 4552 */ 'G', '_', 'U', 'S', 'U', 'B', 'S', 'A', 'T', 0,
  /* 4562 */ 'G', '_', 'S', 'A', 'D', 'D', 'S', 'A', 'T', 0,
  /* 4572 */ 'G', '_', 'U', 'A', 'D', 'D', 'S', 'A', 'T', 0,
  /* 4582 */ 'G', '_', 'S', 'S', 'H', 'L', 'S', 'A', 'T', 0,
  /* 4592 */ 'G', '_', 'U', 'S', 'H', 'L', 'S', 'A', 'T', 0,
  /* 4602 */ 'G', '_', 'S', 'M', 'U', 'L', 'F', 'I', 'X', 'S', 'A', 'T', 0,
  /* 4615 */ 'G', '_', 'U', 'M', 'U', 'L', 'F', 'I', 'X', 'S', 'A', 'T', 0,
  /* 4628 */ 'G', '_', 'S', 'D', 'I', 'V', 'F', 'I', 'X', 'S', 'A', 'T', 0,
  /* 4641 */ 'G', '_', 'U', 'D', 'I', 'V', 'F', 'I', 'X', 'S', 'A', 'T', 0,
  /* 4654 */ 'F', 'R', 'A', 'C', 'T', 0,
  /* 4660 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 4670 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 4679 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 4692 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'S', 'U', 'B', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4714 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'U', 'B', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4735 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'A', 'D', 'D', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4756 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'A', 'N', 'D', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4777 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'X', 'O', 'R', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4798 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'O', 'R', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4818 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'D', 'E', 'C', '_', 'U', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4844 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'I', 'N', 'C', '_', 'U', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4870 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'I', 'N', '_', 'U', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4896 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'A', 'X', '_', 'U', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4922 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4951 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'X', 'C', 'H', 'G', '_', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4977 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'I', 'N', '_', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 5002 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'A', 'X', '_', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 5027 */ 'L', 'D', 'S', '_', 'S', 'U', 'B', '_', 'R', 'E', 'T', 0,
  /* 5039 */ 'L', 'D', 'S', '_', 'U', 'B', 'Y', 'T', 'E', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'T', 0,
  /* 5058 */ 'L', 'D', 'S', '_', 'B', 'Y', 'T', 'E', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'T', 0,
  /* 5076 */ 'L', 'D', 'S', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'T', 0,
  /* 5089 */ 'L', 'D', 'S', '_', 'U', 'S', 'H', 'O', 'R', 'T', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'T', 0,
  /* 5109 */ 'L', 'D', 'S', '_', 'S', 'H', 'O', 'R', 'T', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'T', 0,
  /* 5128 */ 'L', 'D', 'S', '_', 'A', 'D', 'D', '_', 'R', 'E', 'T', 0,
  /* 5140 */ 'L', 'D', 'S', '_', 'A', 'N', 'D', '_', 'R', 'E', 'T', 0,
  /* 5152 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 5166 */ 'L', 'D', 'S', '_', 'W', 'R', 'X', 'C', 'H', 'G', '_', 'R', 'E', 'T', 0,
  /* 5181 */ 'L', 'D', 'S', '_', 'X', 'O', 'R', '_', 'R', 'E', 'T', 0,
  /* 5193 */ 'L', 'D', 'S', '_', 'O', 'R', '_', 'R', 'E', 'T', 0,
  /* 5204 */ 'L', 'D', 'S', '_', 'M', 'I', 'N', '_', 'U', 'I', 'N', 'T', '_', 'R', 'E', 'T', 0,
  /* 5221 */ 'L', 'D', 'S', '_', 'M', 'A', 'X', '_', 'U', 'I', 'N', 'T', '_', 'R', 'E', 'T', 0,
  /* 5238 */ 'L', 'D', 'S', '_', 'M', 'I', 'N', '_', 'I', 'N', 'T', '_', 'R', 'E', 'T', 0,
  /* 5254 */ 'L', 'D', 'S', '_', 'M', 'A', 'X', '_', 'I', 'N', 'T', '_', 'R', 'E', 'T', 0,
  /* 5270 */ 'L', 'D', 'S', '_', 'C', 'M', 'P', 'S', 'T', '_', 'R', 'E', 'T', 0,
  /* 5284 */ 'G', '_', 'M', 'E', 'M', 'S', 'E', 'T', 0,
  /* 5293 */ 'I', 'F', '_', 'P', 'R', 'E', 'D', 'I', 'C', 'A', 'T', 'E', '_', 'S', 'E', 'T', 0,
  /* 5310 */ 'K', 'I', 'L', 'L', 'G', 'T', 0,
  /* 5317 */ 'S', 'G', 'T', 0,
  /* 5321 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'G', 'T', 0,
  /* 5332 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 5356 */ 'G', '_', 'B', 'R', 'J', 'T', 0,
  /* 5363 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 5384 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 5404 */ 'D', 'E', 'F', 'A', 'U', 'L', 'T', 0,
  /* 5412 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 5424 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 5435 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 5446 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 5457 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 5468 */ 'G', '_', 'F', 'R', 'I', 'N', 'T', 0,
  /* 5476 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'L', 'R', 'I', 'N', 'T', 0,
  /* 5494 */ 'S', 'U', 'B', 'B', '_', 'U', 'I', 'N', 'T', 0,
  /* 5504 */ 'A', 'D', 'D', 'C', '_', 'U', 'I', 'N', 'T', 0,
  /* 5514 */ 'S', 'E', 'T', 'G', 'E', '_', 'U', 'I', 'N', 'T', 0,
  /* 5525 */ 'F', 'F', 'B', 'H', '_', 'U', 'I', 'N', 'T', 0,
  /* 5535 */ 'L', 'D', 'S', '_', 'M', 'I', 'N', '_', 'U', 'I', 'N', 'T', 0,
  /* 5548 */ 'S', 'E', 'T', 'G', 'T', '_', 'U', 'I', 'N', 'T', 0,
  /* 5559 */ 'L', 'D', 'S', '_', 'M', 'A', 'X', '_', 'U', 'I', 'N', 'T', 0,
  /* 5572 */ 'G', '_', 'F', 'N', 'E', 'A', 'R', 'B', 'Y', 'I', 'N', 'T', 0,
  /* 5585 */ 'S', 'U', 'B', '_', 'I', 'N', 'T', 0,
  /* 5593 */ 'A', 'D', 'D', '_', 'I', 'N', 'T', 0,
  /* 5601 */ 'A', 'N', 'D', '_', 'I', 'N', 'T', 0,
  /* 5609 */ 'C', 'N', 'D', 'E', '_', 'I', 'N', 'T', 0,
  /* 5618 */ 'C', 'N', 'D', 'G', 'E', '_', 'I', 'N', 'T', 0,
  /* 5628 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'G', 'E', '_', 'I', 'N', 'T', 0,
  /* 5643 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'N', 'E', '_', 'I', 'N', 'T', 0,
  /* 5658 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'E', '_', 'I', 'N', 'T', 0,
  /* 5672 */ 'F', 'F', 'B', 'L', '_', 'I', 'N', 'T', 0,
  /* 5681 */ 'L', 'D', 'S', '_', 'M', 'I', 'N', '_', 'I', 'N', 'T', 0,
  /* 5693 */ 'X', 'O', 'R', '_', 'I', 'N', 'T', 0,
  /* 5701 */ 'C', 'N', 'D', 'G', 'T', '_', 'I', 'N', 'T', 0,
  /* 5711 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'G', 'T', '_', 'I', 'N', 'T', 0,
  /* 5726 */ 'B', 'C', 'N', 'T', '_', 'I', 'N', 'T', 0,
  /* 5735 */ 'N', 'O', 'T', '_', 'I', 'N', 'T', 0,
  /* 5743 */ 'L', 'D', 'S', '_', 'M', 'A', 'X', '_', 'I', 'N', 'T', 0,
  /* 5755 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 5765 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 5780 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 5789 */ 'G', '_', 'F', 'S', 'Q', 'R', 'T', 0,
  /* 5797 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'S', 'Q', 'R', 'T', 0,
  /* 5812 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 5822 */ 'G', '_', 'A', 'D', 'D', 'R', 'S', 'P', 'A', 'C', 'E', '_', 'C', 'A', 'S', 'T', 0,
  /* 5839 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', '_', 'L', 'I', 'S', 'T', 0,
  /* 5854 */ 'L', 'D', 'S', '_', 'C', 'M', 'P', 'S', 'T', 0,
  /* 5864 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 5872 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 5879 */ 'G', '_', 'A', 'S', 'S', 'E', 'R', 'T', '_', 'S', 'E', 'X', 'T', 0,
  /* 5893 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 5902 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 5909 */ 'G', '_', 'A', 'S', 'S', 'E', 'R', 'T', '_', 'Z', 'E', 'X', 'T', 0,
  /* 5923 */ 'C', 'F', '_', 'A', 'L', 'U', 0,
  /* 5930 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 5937 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'D', 'I', 'V', 0,
  /* 5951 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 5958 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 5965 */ 'M', 'O', 'V', 0,
  /* 5969 */ 'T', 'E', 'X', '_', 'G', 'E', 'T', '_', 'G', 'R', 'A', 'D', 'I', 'E', 'N', 'T', 'S', '_', 'V', 0,
  /* 5989 */ 'T', 'E', 'X', '_', 'S', 'E', 'T', '_', 'G', 'R', 'A', 'D', 'I', 'E', 'N', 'T', 'S', '_', 'V', 0,
  /* 6009 */ 'T', 'X', 'D', '_', 'S', 'H', 'A', 'D', 'O', 'W', 0,
  /* 6020 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 6027 */ 'I', 'N', 'T', 'E', 'R', 'P', '_', 'Z', 'W', 0,
  /* 6037 */ 'I', 'N', 'T', 'E', 'R', 'P', '_', 'P', 'A', 'I', 'R', '_', 'Z', 'W', 0,
  /* 6052 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'F', 'M', 'A', 'X', 0,
  /* 6069 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'M', 'A', 'X', 0,
  /* 6086 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'S', 'M', 'A', 'X', 0,
  /* 6103 */ 'G', '_', 'S', 'M', 'A', 'X', 0,
  /* 6110 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'U', 'M', 'A', 'X', 0,
  /* 6127 */ 'G', '_', 'U', 'M', 'A', 'X', 0,
  /* 6134 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'A', 'X', 0,
  /* 6151 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'A', 'X', 0,
  /* 6167 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 6181 */ 'G', '_', 'S', 'B', 'F', 'X', 0,
  /* 6188 */ 'G', '_', 'U', 'B', 'F', 'X', 0,
  /* 6195 */ 'G', '_', 'S', 'M', 'U', 'L', 'F', 'I', 'X', 0,
  /* 6205 */ 'G', '_', 'U', 'M', 'U', 'L', 'F', 'I', 'X', 0,
  /* 6215 */ 'G', '_', 'S', 'D', 'I', 'V', 'F', 'I', 'X', 0,
  /* 6225 */ 'G', '_', 'U', 'D', 'I', 'V', 'F', 'I', 'X', 0,
  /* 6235 */ 'P', 'R', 'E', 'D', '_', 'X', 0,
  /* 6242 */ 'G', '_', 'M', 'E', 'M', 'C', 'P', 'Y', 0,
  /* 6251 */ 'C', 'O', 'N', 'S', 'T', '_', 'C', 'O', 'P', 'Y', 0,
  /* 6262 */ 'I', 'N', 'T', 'E', 'R', 'P', '_', 'X', 'Y', 0,
  /* 6272 */ 'I', 'N', 'T', 'E', 'R', 'P', '_', 'P', 'A', 'I', 'R', '_', 'X', 'Y', 0,
  /* 6287 */ 'G', '_', 'C', 'T', 'L', 'Z', 0,
  /* 6294 */ 'G', '_', 'C', 'T', 'T', 'Z', 0,
  /* 6301 */ 'R', '6', '0', '0', '_', 'R', 'e', 'g', 'i', 's', 't', 'e', 'r', 'L', 'o', 'a', 'd', 0,
  /* 6319 */ 'R', '6', '0', '0', '_', 'R', 'e', 'g', 'i', 's', 't', 'e', 'r', 'S', 't', 'o', 'r', 'e', 0,
  /* 6338 */ 'R', '6', '0', '0', '_', 'E', 'x', 'p', 'o', 'r', 't', 'B', 'u', 'f', 0,
  /* 6353 */ 'E', 'G', '_', 'E', 'x', 'p', 'o', 'r', 't', 'B', 'u', 'f', 0,
  /* 6366 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '3', '2', '_', 'e', 'g', 0,
  /* 6381 */ 'R', 'A', 'T', '_', 'W', 'R', 'I', 'T', 'E', '_', 'C', 'A', 'C', 'H', 'E', 'L', 'E', 'S', 'S', '_', '3', '2', '_', 'e', 'g', 0,
  /* 6407 */ 'M', 'U', 'L', 'A', 'D', 'D', '_', 'U', 'I', 'N', 'T', '2', '4', '_', 'e', 'g', 0,
  /* 6424 */ 'M', 'U', 'L', 'H', 'I', '_', 'U', 'I', 'N', 'T', '2', '4', '_', 'e', 'g', 0,
  /* 6440 */ 'M', 'U', 'L', '_', 'U', 'I', 'N', 'T', '2', '4', '_', 'e', 'g', 0,
  /* 6454 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '6', '4', '_', 'e', 'g', 0,
  /* 6469 */ 'R', 'A', 'T', '_', 'W', 'R', 'I', 'T', 'E', '_', 'C', 'A', 'C', 'H', 'E', 'L', 'E', 'S', 'S', '_', '6', '4', '_', 'e', 'g', 0,
  /* 6495 */ 'D', 'O', 'T', '4', '_', 'e', 'g', 0,
  /* 6503 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '1', '6', '_', 'e', 'g', 0,
  /* 6518 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '1', '2', '8', '_', 'e', 'g', 0,
  /* 6534 */ 'R', 'A', 'T', '_', 'W', 'R', 'I', 'T', 'E', '_', 'C', 'A', 'C', 'H', 'E', 'L', 'E', 'S', 'S', '_', '1', '2', '8', '_', 'e', 'g', 0,
  /* 6561 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '8', '_', 'e', 'g', 0,
  /* 6575 */ 'F', 'M', 'A', '_', 'e', 'g', 0,
  /* 6582 */ 'M', 'U', 'L', 'A', 'D', 'D', '_', 'e', 'g', 0,
  /* 6592 */ 'L', 'O', 'G', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'e', 'g', 0,
  /* 6607 */ 'R', 'E', 'C', 'I', 'P', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'e', 'g', 0,
  /* 6624 */ 'R', 'E', 'C', 'I', 'P', 'S', 'Q', 'R', 'T', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'e', 'g', 0,
  /* 6645 */ 'R', 'A', 'T', '_', 'S', 'T', 'O', 'R', 'E', '_', 'T', 'Y', 'P', 'E', 'D', '_', 'e', 'g', 0,
  /* 6664 */ 'C', 'N', 'D', 'E', '_', 'e', 'g', 0,
  /* 6672 */ 'M', 'U', 'L', 'A', 'D', 'D', '_', 'I', 'E', 'E', 'E', '_', 'e', 'g', 0,
  /* 6687 */ 'L', 'O', 'G', '_', 'I', 'E', 'E', 'E', '_', 'e', 'g', 0,
  /* 6699 */ 'R', 'E', 'C', 'I', 'P', '_', 'I', 'E', 'E', 'E', '_', 'e', 'g', 0,
  /* 6713 */ 'E', 'X', 'P', '_', 'I', 'E', 'E', 'E', '_', 'e', 'g', 0,
  /* 6725 */ 'R', 'E', 'C', 'I', 'P', 'S', 'Q', 'R', 'T', '_', 'I', 'E', 'E', 'E', '_', 'e', 'g', 0,
  /* 6743 */ 'C', 'N', 'D', 'G', 'E', '_', 'e', 'g', 0,
  /* 6752 */ 'L', 'S', 'H', 'L', '_', 'e', 'g', 0,
  /* 6760 */ 'S', 'I', 'N', '_', 'e', 'g', 0,
  /* 6767 */ 'A', 'S', 'H', 'R', '_', 'e', 'g', 0,
  /* 6775 */ 'L', 'S', 'H', 'R', '_', 'e', 'g', 0,
  /* 6783 */ 'C', 'O', 'S', '_', 'e', 'g', 0,
  /* 6790 */ 'C', 'N', 'D', 'G', 'T', '_', 'e', 'g', 0,
  /* 6799 */ 'M', 'U', 'L', '_', 'L', 'I', 'T', '_', 'e', 'g', 0,
  /* 6810 */ 'U', 'I', 'N', 'T', '_', 'T', 'O', '_', 'F', 'L', 'T', '_', 'e', 'g', 0,
  /* 6825 */ 'B', 'F', 'E', '_', 'U', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 6837 */ 'M', 'U', 'L', 'H', 'I', '_', 'U', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 6851 */ 'M', 'U', 'L', 'L', 'O', '_', 'U', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 6865 */ 'F', 'L', 'T', '_', 'T', 'O', '_', 'U', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 6880 */ 'R', 'E', 'C', 'I', 'P', '_', 'U', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 6894 */ 'M', 'O', 'V', 'A', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 6906 */ 'B', 'F', 'E', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 6917 */ 'B', 'F', 'I', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 6928 */ 'M', 'U', 'L', 'H', 'I', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 6941 */ 'B', 'F', 'M', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 6952 */ 'B', 'I', 'T', '_', 'A', 'L', 'I', 'G', 'N', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 6969 */ 'M', 'U', 'L', 'L', 'O', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 6982 */ 'F', 'L', 'T', '_', 'T', 'O', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 6996 */ 'C', 'U', 'B', 'E', '_', 'r', '6', '0', '0', '_', 'r', 'e', 'a', 'l', 0,
  /* 7011 */ 'C', 'U', 'B', 'E', '_', 'e', 'g', '_', 'r', 'e', 'a', 'l', 0,
  /* 7024 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '3', '2', '_', 'c', 'm', 0,
  /* 7039 */ 'M', 'U', 'L', 'A', 'D', 'D', '_', 'I', 'N', 'T', '2', '4', '_', 'c', 'm', 0,
  /* 7055 */ 'M', 'U', 'L', '_', 'I', 'N', 'T', '2', '4', '_', 'c', 'm', 0,
  /* 7068 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '6', '4', '_', 'c', 'm', 0,
  /* 7083 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '1', '6', '_', 'c', 'm', 0,
  /* 7098 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '1', '2', '8', '_', 'c', 'm', 0,
  /* 7114 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '8', '_', 'c', 'm', 0,
  /* 7128 */ 'R', 'E', 'C', 'I', 'P', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'c', 'm', 0,
  /* 7145 */ 'R', 'E', 'C', 'I', 'P', 'S', 'Q', 'R', 'T', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'c', 'm', 0,
  /* 7166 */ 'R', 'A', 'T', '_', 'S', 'T', 'O', 'R', 'E', '_', 'T', 'Y', 'P', 'E', 'D', '_', 'c', 'm', 0,
  /* 7185 */ 'L', 'O', 'G', '_', 'I', 'E', 'E', 'E', '_', 'c', 'm', 0,
  /* 7197 */ 'R', 'E', 'C', 'I', 'P', '_', 'I', 'E', 'E', 'E', '_', 'c', 'm', 0,
  /* 7211 */ 'E', 'X', 'P', '_', 'I', 'E', 'E', 'E', '_', 'c', 'm', 0,
  /* 7223 */ 'R', 'E', 'C', 'I', 'P', 'S', 'Q', 'R', 'T', '_', 'I', 'E', 'E', 'E', '_', 'c', 'm', 0,
  /* 7241 */ 'S', 'I', 'N', '_', 'c', 'm', 0,
  /* 7248 */ 'C', 'O', 'S', '_', 'c', 'm', 0,
  /* 7255 */ 'M', 'U', 'L', 'H', 'I', '_', 'U', 'I', 'N', 'T', '_', 'c', 'm', 0,
  /* 7269 */ 'M', 'U', 'L', 'L', 'O', '_', 'U', 'I', 'N', 'T', '_', 'c', 'm', 0,
  /* 7283 */ 'M', 'U', 'L', 'H', 'I', '_', 'I', 'N', 'T', '_', 'c', 'm', 0,
  /* 7296 */ 'M', 'U', 'L', 'L', 'O', '_', 'I', 'N', 'T', '_', 'c', 'm', 0,
  /* 7309 */ 'C', 'U', 'B', 'E', '_', 'r', '6', '0', '0', '_', 'p', 's', 'e', 'u', 'd', 'o', 0,
  /* 7326 */ 'C', 'U', 'B', 'E', '_', 'e', 'g', '_', 'p', 's', 'e', 'u', 'd', 'o', 0,
  /* 7341 */ 'R', '6', '0', '0', '_', 'E', 'x', 'p', 'o', 'r', 't', 'S', 'w', 'z', 0,
  /* 7356 */ 'E', 'G', '_', 'E', 'x', 'p', 'o', 'r', 't', 'S', 'w', 'z', 0,
  0
};

extern const unsigned R600InstrNameIndices[] = {
    2816U, 3221U, 4017U, 3464U, 2888U, 2869U, 2897U, 3035U, 
    2441U, 2456U, 2369U, 2483U, 4455U, 2255U, 5839U, 2382U, 
    2812U, 2878U, 1944U, 6257U, 2040U, 5765U, 1779U, 1895U, 
    1932U, 3881U, 3023U, 5446U, 1874U, 3986U, 2694U, 5435U, 
    2095U, 3974U, 3961U, 4112U, 5152U, 5332U, 2955U, 3002U, 
    2975U, 2914U, 5879U, 5909U, 3295U, 1669U, 1331U, 3122U, 
    5951U, 5958U, 3187U, 3194U, 3201U, 3211U, 1749U, 4322U, 
    4277U, 2367U, 2814U, 6167U, 2265U, 4660U, 4390U, 5780U, 
    4407U, 4229U, 1417U, 4438U, 5457U, 4366U, 5812U, 2306U, 
    1848U, 1391U, 1830U, 5476U, 3273U, 4137U, 1566U, 1494U, 
    1524U, 1551U, 1475U, 1505U, 2143U, 2127U, 4485U, 2634U, 
    2662U, 1693U, 1345U, 1763U, 1716U, 4334U, 4291U, 6151U, 
    3441U, 6134U, 3424U, 1636U, 1314U, 6069U, 3359U, 1924U, 
    1792U, 4679U, 1361U, 4515U, 5893U, 1409U, 5424U, 5412U, 
    5755U, 2686U, 5872U, 2470U, 5902U, 2941U, 4203U, 4189U, 
    2934U, 4196U, 4349U, 3040U, 3923U, 3916U, 4670U, 3825U, 
    1965U, 3809U, 1916U, 3817U, 1957U, 3801U, 1908U, 3865U, 
    3857U, 2764U, 2756U, 4572U, 4562U, 4552U, 4542U, 4592U, 
    4582U, 6195U, 6205U, 4602U, 4615U, 6215U, 6225U, 4628U, 
    4641U, 1594U, 1293U, 3064U, 1244U, 1468U, 5930U, 3166U, 
    6020U, 2838U, 4005U, 1069U, 2679U, 1061U, 587U, 2434U, 
    5864U, 1381U, 2820U, 2829U, 3898U, 3907U, 4377U, 3310U, 
    4472U, 2315U, 3253U, 3263U, 1982U, 1997U, 3231U, 3242U, 
    1675U, 2859U, 3393U, 6103U, 3417U, 6127U, 4384U, 1821U, 
    1811U, 4012U, 5356U, 5384U, 5363U, 4244U, 6294U, 2349U, 
    6287U, 2331U, 3953U, 3890U, 2156U, 2947U, 4431U, 3457U, 
    5789U, 4220U, 5468U, 5572U, 5822U, 4030U, 2027U, 1438U, 
    1622U, 1300U, 3092U, 5937U, 3173U, 1250U, 5797U, 4156U, 
    4172U, 6242U, 2064U, 2296U, 5284U, 3873U, 1601U, 3071U, 
    1577U, 3047U, 6052U, 3342U, 1653U, 3106U, 1733U, 4307U, 
    4261U, 6086U, 3376U, 6110U, 3400U, 6181U, 6188U, 2739U, 
    762U, 928U, 2853U, 751U, 917U, 875U, 1041U, 816U, 
    982U, 6251U, 2287U, 729U, 895U, 835U, 1001U, 778U, 
    944U, 7326U, 7309U, 5404U, 1204U, 3322U, 2151U, 1788U, 
    1373U, 2396U, 3935U, 3334U, 2746U, 160U, 82U, 1376U, 
    743U, 909U, 858U, 1024U, 800U, 966U, 5293U, 3930U, 
    1801U, 2218U, 690U, 4043U, 702U, 6235U, 1077U, 1165U, 
    1097U, 1185U, 6301U, 6319U, 3794U, 3480U, 1891U, 6009U, 
    3943U, 1590U, 5504U, 5593U, 2182U, 5601U, 6767U, 388U, 
    5726U, 6906U, 6825U, 6917U, 6941U, 6952U, 2950U, 5923U, 
    2846U, 2280U, 4077U, 4095U, 2108U, 2620U, 170U, 2536U, 
    65U, 2525U, 34U, 3156U, 2515U, 22U, 2576U, 108U, 
    2551U, 47U, 2497U, 0U, 2506U, 11U, 5609U, 6664U, 
    267U, 5618U, 6743U, 358U, 5701U, 6790U, 417U, 7248U, 
    6783U, 408U, 578U, 7011U, 6996U, 6495U, 186U, 6353U, 
    7356U, 2587U, 121U, 7211U, 6713U, 324U, 2169U, 5525U, 
    5672U, 4223U, 714U, 1210U, 6982U, 553U, 6865U, 490U, 
    6575U, 4654U, 4063U, 657U, 6272U, 6037U, 1535U, 6262U, 
    6027U, 6811U, 442U, 5310U, 1685U, 5128U, 1755U, 5140U, 
    5058U, 2203U, 5854U, 5270U, 5743U, 5254U, 5559U, 5221U, 
    5681U, 5238U, 5535U, 5204U, 4327U, 5193U, 5076U, 5109U, 
    2239U, 1337U, 5027U, 5039U, 5089U, 2229U, 2651U, 5166U, 
    4283U, 5181U, 4422U, 6592U, 208U, 7185U, 6687U, 294U, 
    2562U, 92U, 6752U, 369U, 6775U, 398U, 6065U, 648U, 
    5747U, 5563U, 3355U, 628U, 5685U, 5539U, 5965U, 6894U, 
    3060U, 6672U, 277U, 7039U, 6407U, 6582U, 196U, 7283U, 
    1132U, 6928U, 523U, 6424U, 7255U, 1116U, 6837U, 458U, 
    7296U, 6969U, 538U, 7269U, 6851U, 474U, 1973U, 7055U, 
    6799U, 428U, 6440U, 5735U, 5694U, 1573U, 2613U, 151U, 
    2193U, 5658U, 2016U, 5628U, 5321U, 5711U, 2084U, 5643U, 
    6338U, 7341U, 4735U, 3526U, 4756U, 3545U, 4922U, 3697U, 
    4818U, 3601U, 4844U, 3625U, 5002U, 3771U, 4896U, 3673U, 
    4977U, 3748U, 4870U, 3649U, 4798U, 3583U, 4692U, 3487U, 
    4714U, 3507U, 4951U, 3724U, 4777U, 3564U, 4210U, 1225U, 
    672U, 1147U, 7166U, 6645U, 6534U, 6381U, 6469U, 7145U, 
    6624U, 244U, 7223U, 6725U, 338U, 7128U, 6607U, 225U, 
    7197U, 6699U, 308U, 6880U, 507U, 2058U, 2198U, 618U, 
    5663U, 596U, 5633U, 5514U, 637U, 5716U, 5548U, 607U, 
    5648U, 2012U, 5317U, 7241U, 6760U, 379U, 569U, 2080U, 
    5494U, 5585U, 2772U, 5969U, 3833U, 1709U, 4356U, 2047U, 
    1455U, 2711U, 3128U, 1263U, 2726U, 3143U, 1279U, 2792U, 
    5989U, 2402U, 2419U, 1385U, 6810U, 441U, 7098U, 6518U, 
    7083U, 6503U, 7024U, 6366U, 7068U, 6454U, 7114U, 6561U, 
    2599U, 135U, 5693U, 
};

static inline void InitR600MCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(R600Insts, R600InstrNameIndices, R600InstrNameData, nullptr, nullptr, 587);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct R600GenInstrInfo : public TargetInstrInfo {
  explicit R600GenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~R600GenInstrInfo() override = default;

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
extern const MCInstrDesc R600Insts[];
extern const unsigned R600InstrNameIndices[];
extern const char R600InstrNameData[];
R600GenInstrInfo::R600GenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(R600Insts, R600InstrNameIndices, R600InstrNameData, nullptr, nullptr, 587);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace R600 {
namespace OpName {
enum {
  ADDR = 98,
  COUNT = 105,
  Enabled = 106,
  KCACHE_ADDR0 = 103,
  KCACHE_ADDR1 = 104,
  KCACHE_BANK0 = 99,
  KCACHE_BANK1 = 100,
  KCACHE_MODE0 = 101,
  KCACHE_MODE1 = 102,
  addr = 72,
  bank_swizzle = 93,
  chan = 73,
  clamp = 80,
  clamp_W = 58,
  clamp_X = 7,
  clamp_Y = 24,
  clamp_Z = 41,
  dst = 0,
  dst_rel = 79,
  dst_rel_W = 57,
  dst_rel_X = 6,
  dst_rel_Y = 23,
  dst_rel_Z = 40,
  last = 90,
  literal = 92,
  literal0 = 70,
  literal1 = 71,
  omod = 78,
  omod_W = 56,
  omod_X = 5,
  omod_Y = 22,
  omod_Z = 39,
  pred_sel = 91,
  pred_sel_W = 69,
  pred_sel_X = 18,
  pred_sel_Y = 35,
  pred_sel_Z = 52,
  src0 = 1,
  src0_W = 59,
  src0_X = 8,
  src0_Y = 25,
  src0_Z = 42,
  src0_abs = 83,
  src0_abs_W = 62,
  src0_abs_X = 11,
  src0_abs_Y = 28,
  src0_abs_Z = 45,
  src0_neg = 81,
  src0_neg_W = 60,
  src0_neg_X = 9,
  src0_neg_Y = 26,
  src0_neg_Z = 43,
  src0_rel = 82,
  src0_rel_W = 61,
  src0_rel_X = 10,
  src0_rel_Y = 27,
  src0_rel_Z = 44,
  src0_sel = 84,
  src0_sel_W = 63,
  src0_sel_X = 12,
  src0_sel_Y = 29,
  src0_sel_Z = 46,
  src1 = 85,
  src1_W = 64,
  src1_X = 13,
  src1_Y = 30,
  src1_Z = 47,
  src1_abs = 88,
  src1_abs_W = 67,
  src1_abs_X = 16,
  src1_abs_Y = 33,
  src1_abs_Z = 50,
  src1_neg = 86,
  src1_neg_W = 65,
  src1_neg_X = 14,
  src1_neg_Y = 31,
  src1_neg_Z = 48,
  src1_rel = 87,
  src1_rel_W = 66,
  src1_rel_X = 15,
  src1_rel_Y = 32,
  src1_rel_Z = 49,
  src1_sel = 89,
  src1_sel_W = 68,
  src1_sel_X = 17,
  src1_sel_Y = 34,
  src1_sel_Z = 51,
  src2 = 94,
  src2_neg = 95,
  src2_rel = 96,
  src2_sel = 97,
  update_exec_mask = 75,
  update_exec_mask_W = 53,
  update_exec_mask_X = 2,
  update_exec_mask_Y = 19,
  update_exec_mask_Z = 36,
  update_pred = 76,
  update_pred_W = 54,
  update_pred_X = 3,
  update_pred_Y = 20,
  update_pred_Z = 37,
  val = 74,
  write = 77,
  write_W = 55,
  write_X = 4,
  write_Y = 21,
  write_Z = 38,
  OPERAND_LAST
};
} // end namespace OpName
} // end namespace R600
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace R600 {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  static const int16_t OperandMap [][107] = {
{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2, -1, 3, 4, -1, 5, -1, 6, 7, 8, -1, 9, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2, -1, 3, 4, -1, 5, -1, 6, 10, 11, -1, 12, 7, -1, 8, 9, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2, -1, 3, -1, -1, -1, -1, -1, 4, 5, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 2, 4, 5, -1, 6, 7, 8, 9, -1, 10, 15, 16, 17, 18, 11, 12, 13, 14, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 2, 3, 4, 6, 7, 8, 9, -1, -1, -1, -1, -1, 10, 11, 12, 13, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, -1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{-1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, -1, 2, 3, -1, 4, -1, 5, 6, 7, -1, 8, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{-1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, -1, 2, 3, -1, 4, -1, 5, 9, 10, -1, 11, 6, -1, 7, 8, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 3, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, },
};
  switch(Opcode) {
  case R600::CUBE_eg_pseudo:
  case R600::CUBE_r600_pseudo:
    return OperandMap[0][NamedIdx];
  case R600::LDS_ADD_RET:
  case R600::LDS_AND_RET:
  case R600::LDS_MAX_INT_RET:
  case R600::LDS_MAX_UINT_RET:
  case R600::LDS_MIN_INT_RET:
  case R600::LDS_MIN_UINT_RET:
  case R600::LDS_OR_RET:
  case R600::LDS_SUB_RET:
  case R600::LDS_WRXCHG_RET:
  case R600::LDS_XOR_RET:
    return OperandMap[1][NamedIdx];
  case R600::LDS_CMPST_RET:
    return OperandMap[2][NamedIdx];
  case R600::LDS_BYTE_READ_RET:
  case R600::LDS_READ_RET:
  case R600::LDS_SHORT_READ_RET:
  case R600::LDS_UBYTE_READ_RET:
  case R600::LDS_USHORT_READ_RET:
    return OperandMap[3][NamedIdx];
  case R600::BFE_INT_eg:
  case R600::BFE_UINT_eg:
  case R600::BFI_INT_eg:
  case R600::BIT_ALIGN_INT_eg:
  case R600::CNDE_INT:
  case R600::CNDE_eg:
  case R600::CNDE_r600:
  case R600::CNDGE_INT:
  case R600::CNDGE_eg:
  case R600::CNDGE_r600:
  case R600::CNDGT_INT:
  case R600::CNDGT_eg:
  case R600::CNDGT_r600:
  case R600::FMA_eg:
  case R600::MULADD_IEEE_eg:
  case R600::MULADD_IEEE_r600:
  case R600::MULADD_INT24_cm:
  case R600::MULADD_UINT24_eg:
  case R600::MULADD_eg:
  case R600::MULADD_r600:
  case R600::MUL_LIT_eg:
  case R600::MUL_LIT_r600:
    return OperandMap[4][NamedIdx];
  case R600::BCNT_INT:
  case R600::CEIL:
  case R600::COS_cm:
  case R600::COS_eg:
  case R600::COS_r600:
  case R600::COS_r700:
  case R600::EXP_IEEE_cm:
  case R600::EXP_IEEE_eg:
  case R600::EXP_IEEE_r600:
  case R600::FFBH_UINT:
  case R600::FFBL_INT:
  case R600::FLOOR:
  case R600::FLT16_TO_FLT32:
  case R600::FLT32_TO_FLT16:
  case R600::FLT_TO_INT_eg:
  case R600::FLT_TO_INT_r600:
  case R600::FLT_TO_UINT_eg:
  case R600::FLT_TO_UINT_r600:
  case R600::FRACT:
  case R600::INTERP_LOAD_P0:
  case R600::INT_TO_FLT_eg:
  case R600::INT_TO_FLT_r600:
  case R600::LOG_CLAMPED_eg:
  case R600::LOG_CLAMPED_r600:
  case R600::LOG_IEEE_cm:
  case R600::LOG_IEEE_eg:
  case R600::LOG_IEEE_r600:
  case R600::MOV:
  case R600::MOVA_INT_eg:
  case R600::NOT_INT:
  case R600::RECIPSQRT_CLAMPED_cm:
  case R600::RECIPSQRT_CLAMPED_eg:
  case R600::RECIPSQRT_CLAMPED_r600:
  case R600::RECIPSQRT_IEEE_cm:
  case R600::RECIPSQRT_IEEE_eg:
  case R600::RECIPSQRT_IEEE_r600:
  case R600::RECIP_CLAMPED_cm:
  case R600::RECIP_CLAMPED_eg:
  case R600::RECIP_CLAMPED_r600:
  case R600::RECIP_IEEE_cm:
  case R600::RECIP_IEEE_eg:
  case R600::RECIP_IEEE_r600:
  case R600::RECIP_UINT_eg:
  case R600::RECIP_UINT_r600:
  case R600::RNDNE:
  case R600::SIN_cm:
  case R600::SIN_eg:
  case R600::SIN_r600:
  case R600::SIN_r700:
  case R600::TRUNC:
  case R600::UINT_TO_FLT_eg:
  case R600::UINT_TO_FLT_r600:
    return OperandMap[5][NamedIdx];
  case R600::ADD:
  case R600::ADDC_UINT:
  case R600::ADD_INT:
  case R600::AND_INT:
  case R600::ASHR_eg:
  case R600::ASHR_r600:
  case R600::BFM_INT_eg:
  case R600::CUBE_eg_real:
  case R600::CUBE_r600_real:
  case R600::DOT4_eg:
  case R600::DOT4_r600:
  case R600::INTERP_XY:
  case R600::INTERP_ZW:
  case R600::KILLGT:
  case R600::LSHL_eg:
  case R600::LSHL_r600:
  case R600::LSHR_eg:
  case R600::LSHR_r600:
  case R600::MAX:
  case R600::MAX_DX10:
  case R600::MAX_INT:
  case R600::MAX_UINT:
  case R600::MIN:
  case R600::MIN_DX10:
  case R600::MIN_INT:
  case R600::MIN_UINT:
  case R600::MUL:
  case R600::MULHI_INT_cm:
  case R600::MULHI_INT_cm24:
  case R600::MULHI_INT_eg:
  case R600::MULHI_INT_r600:
  case R600::MULHI_UINT24_eg:
  case R600::MULHI_UINT_cm:
  case R600::MULHI_UINT_cm24:
  case R600::MULHI_UINT_eg:
  case R600::MULHI_UINT_r600:
  case R600::MULLO_INT_cm:
  case R600::MULLO_INT_eg:
  case R600::MULLO_INT_r600:
  case R600::MULLO_UINT_cm:
  case R600::MULLO_UINT_eg:
  case R600::MULLO_UINT_r600:
  case R600::MUL_IEEE:
  case R600::MUL_INT24_cm:
  case R600::MUL_UINT24_eg:
  case R600::OR_INT:
  case R600::PRED_SETE:
  case R600::PRED_SETE_INT:
  case R600::PRED_SETGE:
  case R600::PRED_SETGE_INT:
  case R600::PRED_SETGT:
  case R600::PRED_SETGT_INT:
  case R600::PRED_SETNE:
  case R600::PRED_SETNE_INT:
  case R600::SETE:
  case R600::SETE_DX10:
  case R600::SETE_INT:
  case R600::SETGE_DX10:
  case R600::SETGE_INT:
  case R600::SETGE_UINT:
  case R600::SETGT_DX10:
  case R600::SETGT_INT:
  case R600::SETGT_UINT:
  case R600::SETNE_DX10:
  case R600::SETNE_INT:
  case R600::SGE:
  case R600::SGT:
  case R600::SNE:
  case R600::SUBB_UINT:
  case R600::SUB_INT:
  case R600::XOR_INT:
    return OperandMap[6][NamedIdx];
  case R600::DOT_4:
    return OperandMap[7][NamedIdx];
  case R600::R600_RegisterLoad:
    return OperandMap[8][NamedIdx];
  case R600::LDS_ADD:
  case R600::LDS_AND:
  case R600::LDS_BYTE_WRITE:
  case R600::LDS_MAX_INT:
  case R600::LDS_MAX_UINT:
  case R600::LDS_MIN_INT:
  case R600::LDS_MIN_UINT:
  case R600::LDS_OR:
  case R600::LDS_SHORT_WRITE:
  case R600::LDS_SUB:
  case R600::LDS_WRITE:
  case R600::LDS_WRXCHG:
  case R600::LDS_XOR:
    return OperandMap[9][NamedIdx];
  case R600::LDS_CMPST:
    return OperandMap[10][NamedIdx];
  case R600::R600_RegisterStore:
    return OperandMap[11][NamedIdx];
  case R600::CF_ALU:
  case R600::CF_ALU_BREAK:
  case R600::CF_ALU_CONTINUE:
  case R600::CF_ALU_ELSE_AFTER:
  case R600::CF_ALU_POP_AFTER:
  case R600::CF_ALU_PUSH_BEFORE:
    return OperandMap[12][NamedIdx];
  default: return -1;
  }
}
} // end namespace R600
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace R600 {
namespace OpTypes {
enum OperandType {
  ABS = 0,
  BANK_SWIZZLE = 1,
  CLAMP = 2,
  CT = 3,
  FRAMEri = 4,
  InstFlag = 5,
  KCACHE = 6,
  LAST = 7,
  LITERAL = 8,
  MEMrr = 9,
  MEMxi = 10,
  NEG = 11,
  OMOD = 12,
  R600_Pred = 13,
  REL = 14,
  RSel = 15,
  SEL = 16,
  UEM = 17,
  UP = 18,
  WRITE = 19,
  brtarget = 20,
  f32imm = 21,
  f64imm = 22,
  i16imm = 23,
  i1imm = 24,
  i32imm = 25,
  i64imm = 26,
  i8imm = 27,
  ptype0 = 28,
  ptype1 = 29,
  ptype2 = 30,
  ptype3 = 31,
  ptype4 = 32,
  ptype5 = 33,
  s16imm = 34,
  type0 = 35,
  type1 = 36,
  type2 = 37,
  type3 = 38,
  type4 = 39,
  type5 = 40,
  u16imm = 41,
  u32imm = 42,
  u8imm = 43,
  untyped_imm_0 = 44,
  R600_Addr = 45,
  R600_Addr_W = 46,
  R600_Addr_Y = 47,
  R600_Addr_Z = 48,
  R600_ArrayBase = 49,
  R600_KC0 = 50,
  R600_KC0_W = 51,
  R600_KC0_X = 52,
  R600_KC0_Y = 53,
  R600_KC0_Z = 54,
  R600_KC1 = 55,
  R600_KC1_W = 56,
  R600_KC1_X = 57,
  R600_KC1_Y = 58,
  R600_KC1_Z = 59,
  R600_LDS_SRC_REG = 60,
  R600_Predicate = 61,
  R600_Predicate_Bit = 62,
  R600_Reg128 = 63,
  R600_Reg128Vertical = 64,
  R600_Reg32 = 65,
  R600_Reg64 = 66,
  R600_Reg64Vertical = 67,
  R600_TReg32 = 68,
  R600_TReg32_W = 69,
  R600_TReg32_X = 70,
  R600_TReg32_Y = 71,
  R600_TReg32_Z = 72,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace R600 {
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
    /* BRANCH */
    628,
    /* BRANCH_COND_f32 */
    629,
    /* BRANCH_COND_i32 */
    631,
    /* BREAK */
    633,
    /* BREAKC_f32 */
    633,
    /* BREAKC_i32 */
    635,
    /* BREAK_LOGICALNZ_f32 */
    637,
    /* BREAK_LOGICALNZ_i32 */
    638,
    /* BREAK_LOGICALZ_f32 */
    639,
    /* BREAK_LOGICALZ_i32 */
    640,
    /* CONST_COPY */
    641,
    /* CONTINUE */
    643,
    /* CONTINUEC_f32 */
    643,
    /* CONTINUEC_i32 */
    645,
    /* CONTINUE_LOGICALNZ_f32 */
    647,
    /* CONTINUE_LOGICALNZ_i32 */
    648,
    /* CONTINUE_LOGICALZ_f32 */
    649,
    /* CONTINUE_LOGICALZ_i32 */
    650,
    /* CUBE_eg_pseudo */
    651,
    /* CUBE_r600_pseudo */
    653,
    /* DEFAULT */
    655,
    /* DOT_4 */
    655,
    /* DUMMY_CHAIN */
    726,
    /* ELSE */
    726,
    /* END */
    726,
    /* ENDFUNC */
    726,
    /* ENDIF */
    726,
    /* ENDLOOP */
    726,
    /* ENDMAIN */
    726,
    /* ENDSWITCH */
    726,
    /* FABS_R600 */
    726,
    /* FNEG_R600 */
    728,
    /* FUNC */
    730,
    /* IFC_f32 */
    730,
    /* IFC_i32 */
    732,
    /* IF_LOGICALNZ_f32 */
    734,
    /* IF_LOGICALNZ_i32 */
    735,
    /* IF_LOGICALZ_f32 */
    736,
    /* IF_LOGICALZ_i32 */
    737,
    /* IF_PREDICATE_SET */
    738,
    /* JUMP */
    739,
    /* JUMP_COND */
    740,
    /* MASK_WRITE */
    742,
    /* MOV_IMM_F32 */
    743,
    /* MOV_IMM_GLOBAL_ADDR */
    745,
    /* MOV_IMM_I32 */
    747,
    /* PRED_X */
    749,
    /* R600_EXTRACT_ELT_V2 */
    753,
    /* R600_EXTRACT_ELT_V4 */
    756,
    /* R600_INSERT_ELT_V2 */
    759,
    /* R600_INSERT_ELT_V4 */
    763,
    /* R600_RegisterLoad */
    767,
    /* R600_RegisterStore */
    771,
    /* RETDYN */
    775,
    /* RETURN */
    775,
    /* TXD */
    775,
    /* TXD_SHADOW */
    782,
    /* WHILELOOP */
    789,
    /* ADD */
    789,
    /* ADDC_UINT */
    810,
    /* ADD_INT */
    831,
    /* ALU_CLAUSE */
    852,
    /* AND_INT */
    853,
    /* ASHR_eg */
    874,
    /* ASHR_r600 */
    895,
    /* BCNT_INT */
    916,
    /* BFE_INT_eg */
    930,
    /* BFE_UINT_eg */
    949,
    /* BFI_INT_eg */
    968,
    /* BFM_INT_eg */
    987,
    /* BIT_ALIGN_INT_eg */
    1008,
    /* CEIL */
    1027,
    /* CF_ALU */
    1041,
    /* CF_ALU_BREAK */
    1050,
    /* CF_ALU_CONTINUE */
    1059,
    /* CF_ALU_ELSE_AFTER */
    1068,
    /* CF_ALU_POP_AFTER */
    1077,
    /* CF_ALU_PUSH_BEFORE */
    1086,
    /* CF_CALL_FS_EG */
    1095,
    /* CF_CALL_FS_R600 */
    1095,
    /* CF_CONTINUE_EG */
    1095,
    /* CF_CONTINUE_R600 */
    1096,
    /* CF_ELSE_EG */
    1097,
    /* CF_ELSE_R600 */
    1099,
    /* CF_END_CM */
    1101,
    /* CF_END_EG */
    1101,
    /* CF_END_R600 */
    1101,
    /* CF_JUMP_EG */
    1101,
    /* CF_JUMP_R600 */
    1103,
    /* CF_PUSH_EG */
    1105,
    /* CF_PUSH_ELSE_R600 */
    1107,
    /* CF_TC_EG */
    1108,
    /* CF_TC_R600 */
    1110,
    /* CF_VC_EG */
    1112,
    /* CF_VC_R600 */
    1114,
    /* CNDE_INT */
    1116,
    /* CNDE_eg */
    1135,
    /* CNDE_r600 */
    1154,
    /* CNDGE_INT */
    1173,
    /* CNDGE_eg */
    1192,
    /* CNDGE_r600 */
    1211,
    /* CNDGT_INT */
    1230,
    /* CNDGT_eg */
    1249,
    /* CNDGT_r600 */
    1268,
    /* COS_cm */
    1287,
    /* COS_eg */
    1301,
    /* COS_r600 */
    1315,
    /* COS_r700 */
    1329,
    /* CUBE_eg_real */
    1343,
    /* CUBE_r600_real */
    1364,
    /* DOT4_eg */
    1385,
    /* DOT4_r600 */
    1406,
    /* EG_ExportBuf */
    1427,
    /* EG_ExportSwz */
    1434,
    /* END_LOOP_EG */
    1443,
    /* END_LOOP_R600 */
    1444,
    /* EXP_IEEE_cm */
    1445,
    /* EXP_IEEE_eg */
    1459,
    /* EXP_IEEE_r600 */
    1473,
    /* FETCH_CLAUSE */
    1487,
    /* FFBH_UINT */
    1488,
    /* FFBL_INT */
    1502,
    /* FLOOR */
    1516,
    /* FLT16_TO_FLT32 */
    1530,
    /* FLT32_TO_FLT16 */
    1544,
    /* FLT_TO_INT_eg */
    1558,
    /* FLT_TO_INT_r600 */
    1572,
    /* FLT_TO_UINT_eg */
    1586,
    /* FLT_TO_UINT_r600 */
    1600,
    /* FMA_eg */
    1614,
    /* FRACT */
    1633,
    /* GROUP_BARRIER */
    1647,
    /* INTERP_LOAD_P0 */
    1647,
    /* INTERP_PAIR_XY */
    1661,
    /* INTERP_PAIR_ZW */
    1666,
    /* INTERP_VEC_LOAD */
    1671,
    /* INTERP_XY */
    1673,
    /* INTERP_ZW */
    1694,
    /* INT_TO_FLT_eg */
    1715,
    /* INT_TO_FLT_r600 */
    1729,
    /* KILLGT */
    1743,
    /* LDS_ADD */
    1764,
    /* LDS_ADD_RET */
    1773,
    /* LDS_AND */
    1783,
    /* LDS_AND_RET */
    1792,
    /* LDS_BYTE_READ_RET */
    1802,
    /* LDS_BYTE_WRITE */
    1809,
    /* LDS_CMPST */
    1818,
    /* LDS_CMPST_RET */
    1830,
    /* LDS_MAX_INT */
    1843,
    /* LDS_MAX_INT_RET */
    1852,
    /* LDS_MAX_UINT */
    1862,
    /* LDS_MAX_UINT_RET */
    1871,
    /* LDS_MIN_INT */
    1881,
    /* LDS_MIN_INT_RET */
    1890,
    /* LDS_MIN_UINT */
    1900,
    /* LDS_MIN_UINT_RET */
    1909,
    /* LDS_OR */
    1919,
    /* LDS_OR_RET */
    1928,
    /* LDS_READ_RET */
    1938,
    /* LDS_SHORT_READ_RET */
    1945,
    /* LDS_SHORT_WRITE */
    1952,
    /* LDS_SUB */
    1961,
    /* LDS_SUB_RET */
    1970,
    /* LDS_UBYTE_READ_RET */
    1980,
    /* LDS_USHORT_READ_RET */
    1987,
    /* LDS_WRITE */
    1994,
    /* LDS_WRXCHG */
    2003,
    /* LDS_WRXCHG_RET */
    2012,
    /* LDS_XOR */
    2022,
    /* LDS_XOR_RET */
    2031,
    /* LITERALS */
    2041,
    /* LOG_CLAMPED_eg */
    2043,
    /* LOG_CLAMPED_r600 */
    2057,
    /* LOG_IEEE_cm */
    2071,
    /* LOG_IEEE_eg */
    2085,
    /* LOG_IEEE_r600 */
    2099,
    /* LOOP_BREAK_EG */
    2113,
    /* LOOP_BREAK_R600 */
    2114,
    /* LSHL_eg */
    2115,
    /* LSHL_r600 */
    2136,
    /* LSHR_eg */
    2157,
    /* LSHR_r600 */
    2178,
    /* MAX */
    2199,
    /* MAX_DX10 */
    2220,
    /* MAX_INT */
    2241,
    /* MAX_UINT */
    2262,
    /* MIN */
    2283,
    /* MIN_DX10 */
    2304,
    /* MIN_INT */
    2325,
    /* MIN_UINT */
    2346,
    /* MOV */
    2367,
    /* MOVA_INT_eg */
    2381,
    /* MUL */
    2395,
    /* MULADD_IEEE_eg */
    2416,
    /* MULADD_IEEE_r600 */
    2435,
    /* MULADD_INT24_cm */
    2454,
    /* MULADD_UINT24_eg */
    2473,
    /* MULADD_eg */
    2492,
    /* MULADD_r600 */
    2511,
    /* MULHI_INT_cm */
    2530,
    /* MULHI_INT_cm24 */
    2551,
    /* MULHI_INT_eg */
    2572,
    /* MULHI_INT_r600 */
    2593,
    /* MULHI_UINT24_eg */
    2614,
    /* MULHI_UINT_cm */
    2635,
    /* MULHI_UINT_cm24 */
    2656,
    /* MULHI_UINT_eg */
    2677,
    /* MULHI_UINT_r600 */
    2698,
    /* MULLO_INT_cm */
    2719,
    /* MULLO_INT_eg */
    2740,
    /* MULLO_INT_r600 */
    2761,
    /* MULLO_UINT_cm */
    2782,
    /* MULLO_UINT_eg */
    2803,
    /* MULLO_UINT_r600 */
    2824,
    /* MUL_IEEE */
    2845,
    /* MUL_INT24_cm */
    2866,
    /* MUL_LIT_eg */
    2887,
    /* MUL_LIT_r600 */
    2906,
    /* MUL_UINT24_eg */
    2925,
    /* NOT_INT */
    2946,
    /* OR_INT */
    2960,
    /* PAD */
    2981,
    /* POP_EG */
    2981,
    /* POP_R600 */
    2983,
    /* PRED_SETE */
    2985,
    /* PRED_SETE_INT */
    3006,
    /* PRED_SETGE */
    3027,
    /* PRED_SETGE_INT */
    3048,
    /* PRED_SETGT */
    3069,
    /* PRED_SETGT_INT */
    3090,
    /* PRED_SETNE */
    3111,
    /* PRED_SETNE_INT */
    3132,
    /* R600_ExportBuf */
    3153,
    /* R600_ExportSwz */
    3160,
    /* RAT_ATOMIC_ADD_NORET */
    3169,
    /* RAT_ATOMIC_ADD_RTN */
    3172,
    /* RAT_ATOMIC_AND_NORET */
    3175,
    /* RAT_ATOMIC_AND_RTN */
    3178,
    /* RAT_ATOMIC_CMPXCHG_INT_NORET */
    3181,
    /* RAT_ATOMIC_CMPXCHG_INT_RTN */
    3184,
    /* RAT_ATOMIC_DEC_UINT_NORET */
    3187,
    /* RAT_ATOMIC_DEC_UINT_RTN */
    3190,
    /* RAT_ATOMIC_INC_UINT_NORET */
    3193,
    /* RAT_ATOMIC_INC_UINT_RTN */
    3196,
    /* RAT_ATOMIC_MAX_INT_NORET */
    3199,
    /* RAT_ATOMIC_MAX_INT_RTN */
    3202,
    /* RAT_ATOMIC_MAX_UINT_NORET */
    3205,
    /* RAT_ATOMIC_MAX_UINT_RTN */
    3208,
    /* RAT_ATOMIC_MIN_INT_NORET */
    3211,
    /* RAT_ATOMIC_MIN_INT_RTN */
    3214,
    /* RAT_ATOMIC_MIN_UINT_NORET */
    3217,
    /* RAT_ATOMIC_MIN_UINT_RTN */
    3220,
    /* RAT_ATOMIC_OR_NORET */
    3223,
    /* RAT_ATOMIC_OR_RTN */
    3226,
    /* RAT_ATOMIC_RSUB_NORET */
    3229,
    /* RAT_ATOMIC_RSUB_RTN */
    3232,
    /* RAT_ATOMIC_SUB_NORET */
    3235,
    /* RAT_ATOMIC_SUB_RTN */
    3238,
    /* RAT_ATOMIC_XCHG_INT_NORET */
    3241,
    /* RAT_ATOMIC_XCHG_INT_RTN */
    3244,
    /* RAT_ATOMIC_XOR_NORET */
    3247,
    /* RAT_ATOMIC_XOR_RTN */
    3250,
    /* RAT_MSKOR */
    3253,
    /* RAT_STORE_DWORD128 */
    3255,
    /* RAT_STORE_DWORD32 */
    3257,
    /* RAT_STORE_DWORD64 */
    3259,
    /* RAT_STORE_TYPED_cm */
    3261,
    /* RAT_STORE_TYPED_eg */
    3265,
    /* RAT_WRITE_CACHELESS_128_eg */
    3269,
    /* RAT_WRITE_CACHELESS_32_eg */
    3272,
    /* RAT_WRITE_CACHELESS_64_eg */
    3275,
    /* RECIPSQRT_CLAMPED_cm */
    3278,
    /* RECIPSQRT_CLAMPED_eg */
    3292,
    /* RECIPSQRT_CLAMPED_r600 */
    3306,
    /* RECIPSQRT_IEEE_cm */
    3320,
    /* RECIPSQRT_IEEE_eg */
    3334,
    /* RECIPSQRT_IEEE_r600 */
    3348,
    /* RECIP_CLAMPED_cm */
    3362,
    /* RECIP_CLAMPED_eg */
    3376,
    /* RECIP_CLAMPED_r600 */
    3390,
    /* RECIP_IEEE_cm */
    3404,
    /* RECIP_IEEE_eg */
    3418,
    /* RECIP_IEEE_r600 */
    3432,
    /* RECIP_UINT_eg */
    3446,
    /* RECIP_UINT_r600 */
    3460,
    /* RNDNE */
    3474,
    /* SETE */
    3488,
    /* SETE_DX10 */
    3509,
    /* SETE_INT */
    3530,
    /* SETGE_DX10 */
    3551,
    /* SETGE_INT */
    3572,
    /* SETGE_UINT */
    3593,
    /* SETGT_DX10 */
    3614,
    /* SETGT_INT */
    3635,
    /* SETGT_UINT */
    3656,
    /* SETNE_DX10 */
    3677,
    /* SETNE_INT */
    3698,
    /* SGE */
    3719,
    /* SGT */
    3740,
    /* SIN_cm */
    3761,
    /* SIN_eg */
    3775,
    /* SIN_r600 */
    3789,
    /* SIN_r700 */
    3803,
    /* SNE */
    3817,
    /* SUBB_UINT */
    3838,
    /* SUB_INT */
    3859,
    /* TEX_GET_GRADIENTS_H */
    3880,
    /* TEX_GET_GRADIENTS_V */
    3899,
    /* TEX_GET_TEXTURE_RESINFO */
    3918,
    /* TEX_LD */
    3937,
    /* TEX_LDPTR */
    3956,
    /* TEX_SAMPLE */
    3975,
    /* TEX_SAMPLE_C */
    3994,
    /* TEX_SAMPLE_C_G */
    4013,
    /* TEX_SAMPLE_C_L */
    4032,
    /* TEX_SAMPLE_C_LB */
    4051,
    /* TEX_SAMPLE_G */
    4070,
    /* TEX_SAMPLE_L */
    4089,
    /* TEX_SAMPLE_LB */
    4108,
    /* TEX_SET_GRADIENTS_H */
    4127,
    /* TEX_SET_GRADIENTS_V */
    4146,
    /* TEX_VTX_CONSTBUF */
    4165,
    /* TEX_VTX_TEXBUF */
    4169,
    /* TRUNC */
    4173,
    /* UINT_TO_FLT_eg */
    4187,
    /* UINT_TO_FLT_r600 */
    4201,
    /* VTX_READ_128_cm */
    4215,
    /* VTX_READ_128_eg */
    4219,
    /* VTX_READ_16_cm */
    4223,
    /* VTX_READ_16_eg */
    4227,
    /* VTX_READ_32_cm */
    4231,
    /* VTX_READ_32_eg */
    4235,
    /* VTX_READ_64_cm */
    4239,
    /* VTX_READ_64_eg */
    4243,
    /* VTX_READ_8_cm */
    4247,
    /* VTX_READ_8_eg */
    4251,
    /* WHILE_LOOP_EG */
    4255,
    /* WHILE_LOOP_R600 */
    4256,
    /* XOR_INT */
    4257,
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
    /* BRANCH */
    brtarget, 
    /* BRANCH_COND_f32 */
    brtarget, R600_Reg32, 
    /* BRANCH_COND_i32 */
    brtarget, R600_Reg32, 
    /* BREAK */
    /* BREAKC_f32 */
    R600_Reg32, R600_Reg32, 
    /* BREAKC_i32 */
    R600_Reg32, R600_Reg32, 
    /* BREAK_LOGICALNZ_f32 */
    R600_Reg32, 
    /* BREAK_LOGICALNZ_i32 */
    R600_Reg32, 
    /* BREAK_LOGICALZ_f32 */
    R600_Reg32, 
    /* BREAK_LOGICALZ_i32 */
    R600_Reg32, 
    /* CONST_COPY */
    R600_Reg32, i32imm, 
    /* CONTINUE */
    /* CONTINUEC_f32 */
    R600_Reg32, R600_Reg32, 
    /* CONTINUEC_i32 */
    R600_Reg32, R600_Reg32, 
    /* CONTINUE_LOGICALNZ_f32 */
    R600_Reg32, 
    /* CONTINUE_LOGICALNZ_i32 */
    R600_Reg32, 
    /* CONTINUE_LOGICALZ_f32 */
    R600_Reg32, 
    /* CONTINUE_LOGICALZ_i32 */
    R600_Reg32, 
    /* CUBE_eg_pseudo */
    R600_Reg128, R600_Reg128, 
    /* CUBE_r600_pseudo */
    R600_Reg128, R600_Reg128, 
    /* DEFAULT */
    /* DOT_4 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_TReg32_X, NEG, REL, ABS, SEL, R600_TReg32_X, NEG, REL, ABS, SEL, R600_Predicate, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_TReg32_Y, NEG, REL, ABS, SEL, R600_TReg32_Y, NEG, REL, ABS, SEL, R600_Predicate, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_TReg32_Z, NEG, REL, ABS, SEL, R600_TReg32_Z, NEG, REL, ABS, SEL, R600_Predicate, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_TReg32_W, NEG, REL, ABS, SEL, R600_TReg32_W, NEG, REL, ABS, SEL, R600_Predicate, LITERAL, LITERAL, 
    /* DUMMY_CHAIN */
    /* ELSE */
    /* END */
    /* ENDFUNC */
    /* ENDIF */
    /* ENDLOOP */
    /* ENDMAIN */
    /* ENDSWITCH */
    /* FABS_R600 */
    R600_Reg32, R600_Reg32, 
    /* FNEG_R600 */
    R600_Reg32, R600_Reg32, 
    /* FUNC */
    /* IFC_f32 */
    R600_Reg32, R600_Reg32, 
    /* IFC_i32 */
    R600_Reg32, R600_Reg32, 
    /* IF_LOGICALNZ_f32 */
    R600_Reg32, 
    /* IF_LOGICALNZ_i32 */
    R600_Reg32, 
    /* IF_LOGICALZ_f32 */
    R600_Reg32, 
    /* IF_LOGICALZ_i32 */
    R600_Reg32, 
    /* IF_PREDICATE_SET */
    R600_Reg32, 
    /* JUMP */
    brtarget, 
    /* JUMP_COND */
    brtarget, R600_Predicate_Bit, 
    /* MASK_WRITE */
    R600_Reg32, 
    /* MOV_IMM_F32 */
    R600_Reg32, f32imm, 
    /* MOV_IMM_GLOBAL_ADDR */
    R600_Reg32, i32imm, 
    /* MOV_IMM_I32 */
    R600_Reg32, i32imm, 
    /* PRED_X */
    R600_Predicate_Bit, R600_Reg32, i32imm, i32imm, 
    /* R600_EXTRACT_ELT_V2 */
    R600_Reg32, R600_Reg64Vertical, R600_Reg32, 
    /* R600_EXTRACT_ELT_V4 */
    R600_Reg32, R600_Reg128Vertical, R600_Reg32, 
    /* R600_INSERT_ELT_V2 */
    R600_Reg64Vertical, R600_Reg64Vertical, R600_Reg32, R600_Reg32, 
    /* R600_INSERT_ELT_V4 */
    R600_Reg128Vertical, R600_Reg128Vertical, R600_Reg32, R600_Reg32, 
    /* R600_RegisterLoad */
    R600_Reg32, R600_Reg32, i32imm, i32imm, 
    /* R600_RegisterStore */
    R600_Reg32, R600_Reg32, i32imm, i32imm, 
    /* RETDYN */
    /* RETURN */
    /* TXD */
    R600_Reg128, R600_Reg128, R600_Reg128, R600_Reg128, i32imm, i32imm, i32imm, 
    /* TXD_SHADOW */
    R600_Reg128, R600_Reg128, R600_Reg128, R600_Reg128, i32imm, i32imm, i32imm, 
    /* WHILELOOP */
    /* ADD */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* ADDC_UINT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* ADD_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* ALU_CLAUSE */
    i32imm, 
    /* AND_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* ASHR_eg */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* ASHR_r600 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* BCNT_INT */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* BFE_INT_eg */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* BFE_UINT_eg */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* BFI_INT_eg */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* BFM_INT_eg */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* BIT_ALIGN_INT_eg */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* CEIL */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* CF_ALU */
    i32imm, i32imm, i32imm, KCACHE, KCACHE, i32imm, i32imm, i32imm, i32imm, 
    /* CF_ALU_BREAK */
    i32imm, i32imm, i32imm, KCACHE, KCACHE, i32imm, i32imm, i32imm, i32imm, 
    /* CF_ALU_CONTINUE */
    i32imm, i32imm, i32imm, KCACHE, KCACHE, i32imm, i32imm, i32imm, i32imm, 
    /* CF_ALU_ELSE_AFTER */
    i32imm, i32imm, i32imm, KCACHE, KCACHE, i32imm, i32imm, i32imm, i32imm, 
    /* CF_ALU_POP_AFTER */
    i32imm, i32imm, i32imm, KCACHE, KCACHE, i32imm, i32imm, i32imm, i32imm, 
    /* CF_ALU_PUSH_BEFORE */
    i32imm, i32imm, i32imm, KCACHE, KCACHE, i32imm, i32imm, i32imm, i32imm, 
    /* CF_CALL_FS_EG */
    /* CF_CALL_FS_R600 */
    /* CF_CONTINUE_EG */
    i32imm, 
    /* CF_CONTINUE_R600 */
    i32imm, 
    /* CF_ELSE_EG */
    i32imm, i32imm, 
    /* CF_ELSE_R600 */
    i32imm, i32imm, 
    /* CF_END_CM */
    /* CF_END_EG */
    /* CF_END_R600 */
    /* CF_JUMP_EG */
    i32imm, i32imm, 
    /* CF_JUMP_R600 */
    i32imm, i32imm, 
    /* CF_PUSH_EG */
    i32imm, i32imm, 
    /* CF_PUSH_ELSE_R600 */
    i32imm, 
    /* CF_TC_EG */
    i32imm, i32imm, 
    /* CF_TC_R600 */
    i32imm, i32imm, 
    /* CF_VC_EG */
    i32imm, i32imm, 
    /* CF_VC_R600 */
    i32imm, i32imm, 
    /* CNDE_INT */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* CNDE_eg */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* CNDE_r600 */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* CNDGE_INT */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* CNDGE_eg */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* CNDGE_r600 */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* CNDGT_INT */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* CNDGT_eg */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* CNDGT_r600 */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* COS_cm */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* COS_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* COS_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* COS_r700 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* CUBE_eg_real */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* CUBE_r600_real */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* DOT4_eg */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* DOT4_r600 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* EG_ExportBuf */
    R600_Reg128, i32imm, i32imm, i32imm, i32imm, i32imm, i32imm, 
    /* EG_ExportSwz */
    R600_Reg128, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, 
    /* END_LOOP_EG */
    i32imm, 
    /* END_LOOP_R600 */
    i32imm, 
    /* EXP_IEEE_cm */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* EXP_IEEE_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* EXP_IEEE_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* FETCH_CLAUSE */
    i32imm, 
    /* FFBH_UINT */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* FFBL_INT */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* FLOOR */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* FLT16_TO_FLT32 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* FLT32_TO_FLT16 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* FLT_TO_INT_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* FLT_TO_INT_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* FLT_TO_UINT_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* FLT_TO_UINT_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* FMA_eg */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* FRACT */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* GROUP_BARRIER */
    /* INTERP_LOAD_P0 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* INTERP_PAIR_XY */
    R600_TReg32_X, R600_TReg32_Y, i32imm, R600_TReg32_Y, R600_TReg32_X, 
    /* INTERP_PAIR_ZW */
    R600_TReg32_Z, R600_TReg32_W, i32imm, R600_TReg32_Y, R600_TReg32_X, 
    /* INTERP_VEC_LOAD */
    R600_Reg128, i32imm, 
    /* INTERP_XY */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* INTERP_ZW */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* INT_TO_FLT_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* INT_TO_FLT_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* KILLGT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* LDS_ADD */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_ADD_RET */
    R600_Reg32, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_AND */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_AND_RET */
    R600_Reg32, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_BYTE_READ_RET */
    R600_Reg32, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_BYTE_WRITE */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_CMPST */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_CMPST_RET */
    R600_Reg32, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_MAX_INT */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_MAX_INT_RET */
    R600_Reg32, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_MAX_UINT */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_MAX_UINT_RET */
    R600_Reg32, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_MIN_INT */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_MIN_INT_RET */
    R600_Reg32, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_MIN_UINT */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_MIN_UINT_RET */
    R600_Reg32, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_OR */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_OR_RET */
    R600_Reg32, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_READ_RET */
    R600_Reg32, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_SHORT_READ_RET */
    R600_Reg32, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_SHORT_WRITE */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_SUB */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_SUB_RET */
    R600_Reg32, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_UBYTE_READ_RET */
    R600_Reg32, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_USHORT_READ_RET */
    R600_Reg32, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_WRITE */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_WRXCHG */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_WRXCHG_RET */
    R600_Reg32, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_XOR */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_XOR_RET */
    R600_Reg32, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LITERALS */
    LITERAL, LITERAL, 
    /* LOG_CLAMPED_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* LOG_CLAMPED_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* LOG_IEEE_cm */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* LOG_IEEE_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* LOG_IEEE_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* LOOP_BREAK_EG */
    i32imm, 
    /* LOOP_BREAK_R600 */
    i32imm, 
    /* LSHL_eg */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* LSHL_r600 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* LSHR_eg */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* LSHR_r600 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MAX */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MAX_DX10 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MAX_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MAX_UINT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MIN */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MIN_DX10 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MIN_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MIN_UINT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MOV */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MOVA_INT_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MUL */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULADD_IEEE_eg */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULADD_IEEE_r600 */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULADD_INT24_cm */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULADD_UINT24_eg */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULADD_eg */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULADD_r600 */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULHI_INT_cm */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULHI_INT_cm24 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULHI_INT_eg */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULHI_INT_r600 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULHI_UINT24_eg */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULHI_UINT_cm */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULHI_UINT_cm24 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULHI_UINT_eg */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULHI_UINT_r600 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULLO_INT_cm */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULLO_INT_eg */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULLO_INT_r600 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULLO_UINT_cm */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULLO_UINT_eg */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULLO_UINT_r600 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MUL_IEEE */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MUL_INT24_cm */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MUL_LIT_eg */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MUL_LIT_r600 */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MUL_UINT24_eg */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* NOT_INT */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* OR_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* PAD */
    /* POP_EG */
    i32imm, i32imm, 
    /* POP_R600 */
    i32imm, i32imm, 
    /* PRED_SETE */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* PRED_SETE_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* PRED_SETGE */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* PRED_SETGE_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* PRED_SETGT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* PRED_SETGT_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* PRED_SETNE */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* PRED_SETNE_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* R600_ExportBuf */
    R600_Reg128, i32imm, i32imm, i32imm, i32imm, i32imm, i32imm, 
    /* R600_ExportSwz */
    R600_Reg128, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, 
    /* RAT_ATOMIC_ADD_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_ADD_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_AND_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_AND_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_CMPXCHG_INT_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_CMPXCHG_INT_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_DEC_UINT_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_DEC_UINT_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_INC_UINT_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_INC_UINT_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_MAX_INT_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_MAX_INT_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_MAX_UINT_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_MAX_UINT_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_MIN_INT_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_MIN_INT_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_MIN_UINT_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_MIN_UINT_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_OR_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_OR_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_RSUB_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_RSUB_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_SUB_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_SUB_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_XCHG_INT_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_XCHG_INT_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_XOR_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_XOR_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_MSKOR */
    R600_Reg128, R600_TReg32_X, 
    /* RAT_STORE_DWORD128 */
    R600_Reg128, R600_TReg32_X, 
    /* RAT_STORE_DWORD32 */
    R600_TReg32_X, R600_TReg32_X, 
    /* RAT_STORE_DWORD64 */
    R600_Reg64, R600_TReg32_X, 
    /* RAT_STORE_TYPED_cm */
    R600_Reg128, R600_Reg128, i32imm, InstFlag, 
    /* RAT_STORE_TYPED_eg */
    R600_Reg128, R600_Reg128, i32imm, InstFlag, 
    /* RAT_WRITE_CACHELESS_128_eg */
    R600_Reg128, R600_TReg32_X, InstFlag, 
    /* RAT_WRITE_CACHELESS_32_eg */
    R600_TReg32_X, R600_TReg32_X, InstFlag, 
    /* RAT_WRITE_CACHELESS_64_eg */
    R600_Reg64, R600_TReg32_X, InstFlag, 
    /* RECIPSQRT_CLAMPED_cm */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIPSQRT_CLAMPED_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIPSQRT_CLAMPED_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIPSQRT_IEEE_cm */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIPSQRT_IEEE_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIPSQRT_IEEE_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIP_CLAMPED_cm */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIP_CLAMPED_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIP_CLAMPED_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIP_IEEE_cm */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIP_IEEE_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIP_IEEE_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIP_UINT_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIP_UINT_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RNDNE */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SETE */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SETE_DX10 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SETE_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SETGE_DX10 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SETGE_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SETGE_UINT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SETGT_DX10 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SETGT_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SETGT_UINT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SETNE_DX10 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SETNE_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SGE */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SGT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SIN_cm */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SIN_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SIN_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SIN_r700 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SNE */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SUBB_UINT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SUB_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* TEX_GET_GRADIENTS_H */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_GET_GRADIENTS_V */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_GET_TEXTURE_RESINFO */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_LD */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_LDPTR */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_SAMPLE */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_SAMPLE_C */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_SAMPLE_C_G */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_SAMPLE_C_L */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_SAMPLE_C_LB */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_SAMPLE_G */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_SAMPLE_L */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_SAMPLE_LB */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_SET_GRADIENTS_H */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_SET_GRADIENTS_V */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_VTX_CONSTBUF */
    R600_Reg128, R600_TReg32_X, i32imm, i32imm, 
    /* TEX_VTX_TEXBUF */
    R600_Reg128, R600_TReg32_X, i32imm, i32imm, 
    /* TRUNC */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* UINT_TO_FLT_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* UINT_TO_FLT_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* VTX_READ_128_cm */
    R600_Reg128, R600_TReg32_X, i32imm, i8imm, 
    /* VTX_READ_128_eg */
    R600_Reg128, R600_TReg32_X, i32imm, i8imm, 
    /* VTX_READ_16_cm */
    R600_TReg32_X, R600_TReg32_X, i32imm, i8imm, 
    /* VTX_READ_16_eg */
    R600_TReg32_X, R600_TReg32_X, i32imm, i8imm, 
    /* VTX_READ_32_cm */
    R600_TReg32_X, R600_TReg32_X, i32imm, i8imm, 
    /* VTX_READ_32_eg */
    R600_TReg32_X, R600_TReg32_X, i32imm, i8imm, 
    /* VTX_READ_64_cm */
    R600_Reg64, R600_TReg32_X, i32imm, i8imm, 
    /* VTX_READ_64_eg */
    R600_Reg64, R600_TReg32_X, i32imm, i8imm, 
    /* VTX_READ_8_cm */
    R600_TReg32_X, R600_TReg32_X, i32imm, i8imm, 
    /* VTX_READ_8_eg */
    R600_TReg32_X, R600_TReg32_X, i32imm, i8imm, 
    /* WHILE_LOOP_EG */
    i32imm, 
    /* WHILE_LOOP_R600 */
    i32imm, 
    /* XOR_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

#ifdef GET_INSTRINFO_MEM_OPERAND_SIZE
#undef GET_INSTRINFO_MEM_OPERAND_SIZE
namespace llvm {
namespace R600 {
LLVM_READONLY
static int getMemOperandSize(int OpType) {
  switch (OpType) {
  default: return 0;
  }
}
} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_MEM_OPERAND_SIZE

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
namespace llvm {
namespace R600 {
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
} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
namespace llvm {
namespace R600 {
LLVM_READONLY static int
getLogicalOperandType(uint16_t Opcode, uint16_t LogicalOpIdx) {
  return -1;
}
} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP

#ifdef GET_INSTRINFO_MC_HELPER_DECLS
#undef GET_INSTRINFO_MC_HELPER_DECLS

namespace llvm {
class MCInst;
class FeatureBitset;

namespace R600_MC {

void verifyInstructionPredicates(unsigned Opcode, const FeatureBitset &Features);

} // end namespace R600_MC
} // end namespace llvm

#endif // GET_INSTRINFO_MC_HELPER_DECLS

#ifdef GET_INSTRINFO_MC_HELPERS
#undef GET_INSTRINFO_MC_HELPERS

namespace llvm {
namespace R600_MC {

} // end namespace R600_MC
} // end namespace llvm

#endif // GET_GENISTRINFO_MC_HELPERS

#ifdef ENABLE_INSTR_PREDICATE_VERIFIER
#undef ENABLE_INSTR_PREDICATE_VERIFIER
#include <sstream>

namespace llvm {
namespace R600_MC {

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
    CEFBS_None, // BRANCH = 247
    CEFBS_None, // BRANCH_COND_f32 = 248
    CEFBS_None, // BRANCH_COND_i32 = 249
    CEFBS_None, // BREAK = 250
    CEFBS_None, // BREAKC_f32 = 251
    CEFBS_None, // BREAKC_i32 = 252
    CEFBS_None, // BREAK_LOGICALNZ_f32 = 253
    CEFBS_None, // BREAK_LOGICALNZ_i32 = 254
    CEFBS_None, // BREAK_LOGICALZ_f32 = 255
    CEFBS_None, // BREAK_LOGICALZ_i32 = 256
    CEFBS_None, // CONST_COPY = 257
    CEFBS_None, // CONTINUE = 258
    CEFBS_None, // CONTINUEC_f32 = 259
    CEFBS_None, // CONTINUEC_i32 = 260
    CEFBS_None, // CONTINUE_LOGICALNZ_f32 = 261
    CEFBS_None, // CONTINUE_LOGICALNZ_i32 = 262
    CEFBS_None, // CONTINUE_LOGICALZ_f32 = 263
    CEFBS_None, // CONTINUE_LOGICALZ_i32 = 264
    CEFBS_None, // CUBE_eg_pseudo = 265
    CEFBS_None, // CUBE_r600_pseudo = 266
    CEFBS_None, // DEFAULT = 267
    CEFBS_None, // DOT_4 = 268
    CEFBS_None, // DUMMY_CHAIN = 269
    CEFBS_None, // ELSE = 270
    CEFBS_None, // END = 271
    CEFBS_None, // ENDFUNC = 272
    CEFBS_None, // ENDIF = 273
    CEFBS_None, // ENDLOOP = 274
    CEFBS_None, // ENDMAIN = 275
    CEFBS_None, // ENDSWITCH = 276
    CEFBS_None, // FABS_R600 = 277
    CEFBS_None, // FNEG_R600 = 278
    CEFBS_None, // FUNC = 279
    CEFBS_None, // IFC_f32 = 280
    CEFBS_None, // IFC_i32 = 281
    CEFBS_None, // IF_LOGICALNZ_f32 = 282
    CEFBS_None, // IF_LOGICALNZ_i32 = 283
    CEFBS_None, // IF_LOGICALZ_f32 = 284
    CEFBS_None, // IF_LOGICALZ_i32 = 285
    CEFBS_None, // IF_PREDICATE_SET = 286
    CEFBS_None, // JUMP = 287
    CEFBS_None, // JUMP_COND = 288
    CEFBS_None, // MASK_WRITE = 289
    CEFBS_None, // MOV_IMM_F32 = 290
    CEFBS_None, // MOV_IMM_GLOBAL_ADDR = 291
    CEFBS_None, // MOV_IMM_I32 = 292
    CEFBS_None, // PRED_X = 293
    CEFBS_None, // R600_EXTRACT_ELT_V2 = 294
    CEFBS_None, // R600_EXTRACT_ELT_V4 = 295
    CEFBS_None, // R600_INSERT_ELT_V2 = 296
    CEFBS_None, // R600_INSERT_ELT_V4 = 297
    CEFBS_None, // R600_RegisterLoad = 298
    CEFBS_None, // R600_RegisterStore = 299
    CEFBS_None, // RETDYN = 300
    CEFBS_None, // RETURN = 301
    CEFBS_None, // TXD = 302
    CEFBS_None, // TXD_SHADOW = 303
    CEFBS_None, // WHILELOOP = 304
    CEFBS_None, // ADD = 305
    CEFBS_None, // ADDC_UINT = 306
    CEFBS_None, // ADD_INT = 307
    CEFBS_None, // ALU_CLAUSE = 308
    CEFBS_None, // AND_INT = 309
    CEFBS_None, // ASHR_eg = 310
    CEFBS_None, // ASHR_r600 = 311
    CEFBS_None, // BCNT_INT = 312
    CEFBS_None, // BFE_INT_eg = 313
    CEFBS_None, // BFE_UINT_eg = 314
    CEFBS_None, // BFI_INT_eg = 315
    CEFBS_None, // BFM_INT_eg = 316
    CEFBS_None, // BIT_ALIGN_INT_eg = 317
    CEFBS_None, // CEIL = 318
    CEFBS_None, // CF_ALU = 319
    CEFBS_None, // CF_ALU_BREAK = 320
    CEFBS_None, // CF_ALU_CONTINUE = 321
    CEFBS_None, // CF_ALU_ELSE_AFTER = 322
    CEFBS_None, // CF_ALU_POP_AFTER = 323
    CEFBS_None, // CF_ALU_PUSH_BEFORE = 324
    CEFBS_None, // CF_CALL_FS_EG = 325
    CEFBS_None, // CF_CALL_FS_R600 = 326
    CEFBS_None, // CF_CONTINUE_EG = 327
    CEFBS_None, // CF_CONTINUE_R600 = 328
    CEFBS_None, // CF_ELSE_EG = 329
    CEFBS_None, // CF_ELSE_R600 = 330
    CEFBS_None, // CF_END_CM = 331
    CEFBS_None, // CF_END_EG = 332
    CEFBS_None, // CF_END_R600 = 333
    CEFBS_None, // CF_JUMP_EG = 334
    CEFBS_None, // CF_JUMP_R600 = 335
    CEFBS_None, // CF_PUSH_EG = 336
    CEFBS_None, // CF_PUSH_ELSE_R600 = 337
    CEFBS_None, // CF_TC_EG = 338
    CEFBS_None, // CF_TC_R600 = 339
    CEFBS_None, // CF_VC_EG = 340
    CEFBS_None, // CF_VC_R600 = 341
    CEFBS_None, // CNDE_INT = 342
    CEFBS_None, // CNDE_eg = 343
    CEFBS_None, // CNDE_r600 = 344
    CEFBS_None, // CNDGE_INT = 345
    CEFBS_None, // CNDGE_eg = 346
    CEFBS_None, // CNDGE_r600 = 347
    CEFBS_None, // CNDGT_INT = 348
    CEFBS_None, // CNDGT_eg = 349
    CEFBS_None, // CNDGT_r600 = 350
    CEFBS_None, // COS_cm = 351
    CEFBS_None, // COS_eg = 352
    CEFBS_None, // COS_r600 = 353
    CEFBS_None, // COS_r700 = 354
    CEFBS_None, // CUBE_eg_real = 355
    CEFBS_None, // CUBE_r600_real = 356
    CEFBS_None, // DOT4_eg = 357
    CEFBS_None, // DOT4_r600 = 358
    CEFBS_None, // EG_ExportBuf = 359
    CEFBS_None, // EG_ExportSwz = 360
    CEFBS_None, // END_LOOP_EG = 361
    CEFBS_None, // END_LOOP_R600 = 362
    CEFBS_None, // EXP_IEEE_cm = 363
    CEFBS_None, // EXP_IEEE_eg = 364
    CEFBS_None, // EXP_IEEE_r600 = 365
    CEFBS_None, // FETCH_CLAUSE = 366
    CEFBS_None, // FFBH_UINT = 367
    CEFBS_None, // FFBL_INT = 368
    CEFBS_None, // FLOOR = 369
    CEFBS_None, // FLT16_TO_FLT32 = 370
    CEFBS_None, // FLT32_TO_FLT16 = 371
    CEFBS_None, // FLT_TO_INT_eg = 372
    CEFBS_None, // FLT_TO_INT_r600 = 373
    CEFBS_None, // FLT_TO_UINT_eg = 374
    CEFBS_None, // FLT_TO_UINT_r600 = 375
    CEFBS_None, // FMA_eg = 376
    CEFBS_None, // FRACT = 377
    CEFBS_None, // GROUP_BARRIER = 378
    CEFBS_None, // INTERP_LOAD_P0 = 379
    CEFBS_None, // INTERP_PAIR_XY = 380
    CEFBS_None, // INTERP_PAIR_ZW = 381
    CEFBS_None, // INTERP_VEC_LOAD = 382
    CEFBS_None, // INTERP_XY = 383
    CEFBS_None, // INTERP_ZW = 384
    CEFBS_None, // INT_TO_FLT_eg = 385
    CEFBS_None, // INT_TO_FLT_r600 = 386
    CEFBS_None, // KILLGT = 387
    CEFBS_None, // LDS_ADD = 388
    CEFBS_None, // LDS_ADD_RET = 389
    CEFBS_None, // LDS_AND = 390
    CEFBS_None, // LDS_AND_RET = 391
    CEFBS_None, // LDS_BYTE_READ_RET = 392
    CEFBS_None, // LDS_BYTE_WRITE = 393
    CEFBS_None, // LDS_CMPST = 394
    CEFBS_None, // LDS_CMPST_RET = 395
    CEFBS_None, // LDS_MAX_INT = 396
    CEFBS_None, // LDS_MAX_INT_RET = 397
    CEFBS_None, // LDS_MAX_UINT = 398
    CEFBS_None, // LDS_MAX_UINT_RET = 399
    CEFBS_None, // LDS_MIN_INT = 400
    CEFBS_None, // LDS_MIN_INT_RET = 401
    CEFBS_None, // LDS_MIN_UINT = 402
    CEFBS_None, // LDS_MIN_UINT_RET = 403
    CEFBS_None, // LDS_OR = 404
    CEFBS_None, // LDS_OR_RET = 405
    CEFBS_None, // LDS_READ_RET = 406
    CEFBS_None, // LDS_SHORT_READ_RET = 407
    CEFBS_None, // LDS_SHORT_WRITE = 408
    CEFBS_None, // LDS_SUB = 409
    CEFBS_None, // LDS_SUB_RET = 410
    CEFBS_None, // LDS_UBYTE_READ_RET = 411
    CEFBS_None, // LDS_USHORT_READ_RET = 412
    CEFBS_None, // LDS_WRITE = 413
    CEFBS_None, // LDS_WRXCHG = 414
    CEFBS_None, // LDS_WRXCHG_RET = 415
    CEFBS_None, // LDS_XOR = 416
    CEFBS_None, // LDS_XOR_RET = 417
    CEFBS_None, // LITERALS = 418
    CEFBS_None, // LOG_CLAMPED_eg = 419
    CEFBS_None, // LOG_CLAMPED_r600 = 420
    CEFBS_None, // LOG_IEEE_cm = 421
    CEFBS_None, // LOG_IEEE_eg = 422
    CEFBS_None, // LOG_IEEE_r600 = 423
    CEFBS_None, // LOOP_BREAK_EG = 424
    CEFBS_None, // LOOP_BREAK_R600 = 425
    CEFBS_None, // LSHL_eg = 426
    CEFBS_None, // LSHL_r600 = 427
    CEFBS_None, // LSHR_eg = 428
    CEFBS_None, // LSHR_r600 = 429
    CEFBS_None, // MAX = 430
    CEFBS_None, // MAX_DX10 = 431
    CEFBS_None, // MAX_INT = 432
    CEFBS_None, // MAX_UINT = 433
    CEFBS_None, // MIN = 434
    CEFBS_None, // MIN_DX10 = 435
    CEFBS_None, // MIN_INT = 436
    CEFBS_None, // MIN_UINT = 437
    CEFBS_None, // MOV = 438
    CEFBS_None, // MOVA_INT_eg = 439
    CEFBS_None, // MUL = 440
    CEFBS_None, // MULADD_IEEE_eg = 441
    CEFBS_None, // MULADD_IEEE_r600 = 442
    CEFBS_None, // MULADD_INT24_cm = 443
    CEFBS_None, // MULADD_UINT24_eg = 444
    CEFBS_None, // MULADD_eg = 445
    CEFBS_None, // MULADD_r600 = 446
    CEFBS_None, // MULHI_INT_cm = 447
    CEFBS_None, // MULHI_INT_cm24 = 448
    CEFBS_None, // MULHI_INT_eg = 449
    CEFBS_None, // MULHI_INT_r600 = 450
    CEFBS_None, // MULHI_UINT24_eg = 451
    CEFBS_None, // MULHI_UINT_cm = 452
    CEFBS_None, // MULHI_UINT_cm24 = 453
    CEFBS_None, // MULHI_UINT_eg = 454
    CEFBS_None, // MULHI_UINT_r600 = 455
    CEFBS_None, // MULLO_INT_cm = 456
    CEFBS_None, // MULLO_INT_eg = 457
    CEFBS_None, // MULLO_INT_r600 = 458
    CEFBS_None, // MULLO_UINT_cm = 459
    CEFBS_None, // MULLO_UINT_eg = 460
    CEFBS_None, // MULLO_UINT_r600 = 461
    CEFBS_None, // MUL_IEEE = 462
    CEFBS_None, // MUL_INT24_cm = 463
    CEFBS_None, // MUL_LIT_eg = 464
    CEFBS_None, // MUL_LIT_r600 = 465
    CEFBS_None, // MUL_UINT24_eg = 466
    CEFBS_None, // NOT_INT = 467
    CEFBS_None, // OR_INT = 468
    CEFBS_None, // PAD = 469
    CEFBS_None, // POP_EG = 470
    CEFBS_None, // POP_R600 = 471
    CEFBS_None, // PRED_SETE = 472
    CEFBS_None, // PRED_SETE_INT = 473
    CEFBS_None, // PRED_SETGE = 474
    CEFBS_None, // PRED_SETGE_INT = 475
    CEFBS_None, // PRED_SETGT = 476
    CEFBS_None, // PRED_SETGT_INT = 477
    CEFBS_None, // PRED_SETNE = 478
    CEFBS_None, // PRED_SETNE_INT = 479
    CEFBS_None, // R600_ExportBuf = 480
    CEFBS_None, // R600_ExportSwz = 481
    CEFBS_None, // RAT_ATOMIC_ADD_NORET = 482
    CEFBS_None, // RAT_ATOMIC_ADD_RTN = 483
    CEFBS_None, // RAT_ATOMIC_AND_NORET = 484
    CEFBS_None, // RAT_ATOMIC_AND_RTN = 485
    CEFBS_None, // RAT_ATOMIC_CMPXCHG_INT_NORET = 486
    CEFBS_None, // RAT_ATOMIC_CMPXCHG_INT_RTN = 487
    CEFBS_None, // RAT_ATOMIC_DEC_UINT_NORET = 488
    CEFBS_None, // RAT_ATOMIC_DEC_UINT_RTN = 489
    CEFBS_None, // RAT_ATOMIC_INC_UINT_NORET = 490
    CEFBS_None, // RAT_ATOMIC_INC_UINT_RTN = 491
    CEFBS_None, // RAT_ATOMIC_MAX_INT_NORET = 492
    CEFBS_None, // RAT_ATOMIC_MAX_INT_RTN = 493
    CEFBS_None, // RAT_ATOMIC_MAX_UINT_NORET = 494
    CEFBS_None, // RAT_ATOMIC_MAX_UINT_RTN = 495
    CEFBS_None, // RAT_ATOMIC_MIN_INT_NORET = 496
    CEFBS_None, // RAT_ATOMIC_MIN_INT_RTN = 497
    CEFBS_None, // RAT_ATOMIC_MIN_UINT_NORET = 498
    CEFBS_None, // RAT_ATOMIC_MIN_UINT_RTN = 499
    CEFBS_None, // RAT_ATOMIC_OR_NORET = 500
    CEFBS_None, // RAT_ATOMIC_OR_RTN = 501
    CEFBS_None, // RAT_ATOMIC_RSUB_NORET = 502
    CEFBS_None, // RAT_ATOMIC_RSUB_RTN = 503
    CEFBS_None, // RAT_ATOMIC_SUB_NORET = 504
    CEFBS_None, // RAT_ATOMIC_SUB_RTN = 505
    CEFBS_None, // RAT_ATOMIC_XCHG_INT_NORET = 506
    CEFBS_None, // RAT_ATOMIC_XCHG_INT_RTN = 507
    CEFBS_None, // RAT_ATOMIC_XOR_NORET = 508
    CEFBS_None, // RAT_ATOMIC_XOR_RTN = 509
    CEFBS_None, // RAT_MSKOR = 510
    CEFBS_None, // RAT_STORE_DWORD128 = 511
    CEFBS_None, // RAT_STORE_DWORD32 = 512
    CEFBS_None, // RAT_STORE_DWORD64 = 513
    CEFBS_None, // RAT_STORE_TYPED_cm = 514
    CEFBS_None, // RAT_STORE_TYPED_eg = 515
    CEFBS_None, // RAT_WRITE_CACHELESS_128_eg = 516
    CEFBS_None, // RAT_WRITE_CACHELESS_32_eg = 517
    CEFBS_None, // RAT_WRITE_CACHELESS_64_eg = 518
    CEFBS_None, // RECIPSQRT_CLAMPED_cm = 519
    CEFBS_None, // RECIPSQRT_CLAMPED_eg = 520
    CEFBS_None, // RECIPSQRT_CLAMPED_r600 = 521
    CEFBS_None, // RECIPSQRT_IEEE_cm = 522
    CEFBS_None, // RECIPSQRT_IEEE_eg = 523
    CEFBS_None, // RECIPSQRT_IEEE_r600 = 524
    CEFBS_None, // RECIP_CLAMPED_cm = 525
    CEFBS_None, // RECIP_CLAMPED_eg = 526
    CEFBS_None, // RECIP_CLAMPED_r600 = 527
    CEFBS_None, // RECIP_IEEE_cm = 528
    CEFBS_None, // RECIP_IEEE_eg = 529
    CEFBS_None, // RECIP_IEEE_r600 = 530
    CEFBS_None, // RECIP_UINT_eg = 531
    CEFBS_None, // RECIP_UINT_r600 = 532
    CEFBS_None, // RNDNE = 533
    CEFBS_None, // SETE = 534
    CEFBS_None, // SETE_DX10 = 535
    CEFBS_None, // SETE_INT = 536
    CEFBS_None, // SETGE_DX10 = 537
    CEFBS_None, // SETGE_INT = 538
    CEFBS_None, // SETGE_UINT = 539
    CEFBS_None, // SETGT_DX10 = 540
    CEFBS_None, // SETGT_INT = 541
    CEFBS_None, // SETGT_UINT = 542
    CEFBS_None, // SETNE_DX10 = 543
    CEFBS_None, // SETNE_INT = 544
    CEFBS_None, // SGE = 545
    CEFBS_None, // SGT = 546
    CEFBS_None, // SIN_cm = 547
    CEFBS_None, // SIN_eg = 548
    CEFBS_None, // SIN_r600 = 549
    CEFBS_None, // SIN_r700 = 550
    CEFBS_None, // SNE = 551
    CEFBS_None, // SUBB_UINT = 552
    CEFBS_None, // SUB_INT = 553
    CEFBS_None, // TEX_GET_GRADIENTS_H = 554
    CEFBS_None, // TEX_GET_GRADIENTS_V = 555
    CEFBS_None, // TEX_GET_TEXTURE_RESINFO = 556
    CEFBS_None, // TEX_LD = 557
    CEFBS_None, // TEX_LDPTR = 558
    CEFBS_None, // TEX_SAMPLE = 559
    CEFBS_None, // TEX_SAMPLE_C = 560
    CEFBS_None, // TEX_SAMPLE_C_G = 561
    CEFBS_None, // TEX_SAMPLE_C_L = 562
    CEFBS_None, // TEX_SAMPLE_C_LB = 563
    CEFBS_None, // TEX_SAMPLE_G = 564
    CEFBS_None, // TEX_SAMPLE_L = 565
    CEFBS_None, // TEX_SAMPLE_LB = 566
    CEFBS_None, // TEX_SET_GRADIENTS_H = 567
    CEFBS_None, // TEX_SET_GRADIENTS_V = 568
    CEFBS_None, // TEX_VTX_CONSTBUF = 569
    CEFBS_None, // TEX_VTX_TEXBUF = 570
    CEFBS_None, // TRUNC = 571
    CEFBS_None, // UINT_TO_FLT_eg = 572
    CEFBS_None, // UINT_TO_FLT_r600 = 573
    CEFBS_None, // VTX_READ_128_cm = 574
    CEFBS_None, // VTX_READ_128_eg = 575
    CEFBS_None, // VTX_READ_16_cm = 576
    CEFBS_None, // VTX_READ_16_eg = 577
    CEFBS_None, // VTX_READ_32_cm = 578
    CEFBS_None, // VTX_READ_32_eg = 579
    CEFBS_None, // VTX_READ_64_cm = 580
    CEFBS_None, // VTX_READ_64_eg = 581
    CEFBS_None, // VTX_READ_8_cm = 582
    CEFBS_None, // VTX_READ_8_eg = 583
    CEFBS_None, // WHILE_LOOP_EG = 584
    CEFBS_None, // WHILE_LOOP_R600 = 585
    CEFBS_None, // XOR_INT = 586
  };

  assert(Opcode < 587);
  FeatureBitset AvailableFeatures = computeAvailableFeatures(Features);
  const FeatureBitset &RequiredFeatures = FeatureBitsets[RequiredFeaturesRefs[Opcode]];
  FeatureBitset MissingFeatures =
      (AvailableFeatures & RequiredFeatures) ^
      RequiredFeatures;
  if (MissingFeatures.any()) {
    std::ostringstream Msg;
    Msg << "Attempting to emit " << &R600InstrNameData[R600InstrNameIndices[Opcode]]
        << " instruction but the ";
    for (unsigned i = 0, e = MissingFeatures.size(); i != e; ++i)
      if (MissingFeatures.test(i))
        Msg << SubtargetFeatureNames[i] << " ";
    Msg << "predicate(s) are not met";
    report_fatal_error(Msg.str().c_str());
  }
#endif // NDEBUG
}
} // end namespace R600_MC
} // end namespace llvm
#endif // ENABLE_INSTR_PREDICATE_VERIFIER

#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace R600 {

enum DisableEncoding {
	DisableEncoding_
};

// getLDSNoRetOp
LLVM_READONLY
int getLDSNoRetOp(uint16_t Opcode) {
static const uint16_t getLDSNoRetOpTable[][2] = {
  { R600::LDS_ADD_RET, R600::LDS_ADD },
  { R600::LDS_AND_RET, R600::LDS_AND },
  { R600::LDS_MAX_INT_RET, R600::LDS_MAX_INT },
  { R600::LDS_MAX_UINT_RET, R600::LDS_MAX_UINT },
  { R600::LDS_MIN_INT_RET, R600::LDS_MIN_INT },
  { R600::LDS_MIN_UINT_RET, R600::LDS_MIN_UINT },
  { R600::LDS_OR_RET, R600::LDS_OR },
  { R600::LDS_SUB_RET, R600::LDS_SUB },
  { R600::LDS_WRXCHG_RET, R600::LDS_WRXCHG },
  { R600::LDS_XOR_RET, R600::LDS_XOR },
}; // End of getLDSNoRetOpTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 10;
  while (start < end) {
    mid = start + (end - start) / 2;
    if (Opcode == getLDSNoRetOpTable[mid][0]) {
      break;
    }
    if (Opcode < getLDSNoRetOpTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getLDSNoRetOpTable[mid][1];
}

} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRMAP_INFO

