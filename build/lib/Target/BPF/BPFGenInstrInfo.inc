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

namespace BPF {
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
    FI_ri	= 249,
    MEMCPY	= 250,
    Select	= 251,
    Select_32	= 252,
    Select_32_64	= 253,
    Select_64_32	= 254,
    Select_Ri	= 255,
    Select_Ri_32	= 256,
    Select_Ri_32_64	= 257,
    Select_Ri_64_32	= 258,
    ADD_ri	= 259,
    ADD_ri_32	= 260,
    ADD_rr	= 261,
    ADD_rr_32	= 262,
    AND_ri	= 263,
    AND_ri_32	= 264,
    AND_rr	= 265,
    AND_rr_32	= 266,
    BE16	= 267,
    BE32	= 268,
    BE64	= 269,
    CMPXCHGD	= 270,
    CMPXCHGW32	= 271,
    CORE_ALU32_MEM	= 272,
    CORE_MEM	= 273,
    CORE_SHIFT	= 274,
    DIV_ri	= 275,
    DIV_ri_32	= 276,
    DIV_rr	= 277,
    DIV_rr_32	= 278,
    JAL	= 279,
    JALX	= 280,
    JEQ_ri	= 281,
    JEQ_ri_32	= 282,
    JEQ_rr	= 283,
    JEQ_rr_32	= 284,
    JMP	= 285,
    JNE_ri	= 286,
    JNE_ri_32	= 287,
    JNE_rr	= 288,
    JNE_rr_32	= 289,
    JSGE_ri	= 290,
    JSGE_ri_32	= 291,
    JSGE_rr	= 292,
    JSGE_rr_32	= 293,
    JSGT_ri	= 294,
    JSGT_ri_32	= 295,
    JSGT_rr	= 296,
    JSGT_rr_32	= 297,
    JSLE_ri	= 298,
    JSLE_ri_32	= 299,
    JSLE_rr	= 300,
    JSLE_rr_32	= 301,
    JSLT_ri	= 302,
    JSLT_ri_32	= 303,
    JSLT_rr	= 304,
    JSLT_rr_32	= 305,
    JUGE_ri	= 306,
    JUGE_ri_32	= 307,
    JUGE_rr	= 308,
    JUGE_rr_32	= 309,
    JUGT_ri	= 310,
    JUGT_ri_32	= 311,
    JUGT_rr	= 312,
    JUGT_rr_32	= 313,
    JULE_ri	= 314,
    JULE_ri_32	= 315,
    JULE_rr	= 316,
    JULE_rr_32	= 317,
    JULT_ri	= 318,
    JULT_ri_32	= 319,
    JULT_rr	= 320,
    JULT_rr_32	= 321,
    LDB	= 322,
    LDB32	= 323,
    LDD	= 324,
    LDH	= 325,
    LDH32	= 326,
    LDW	= 327,
    LDW32	= 328,
    LD_ABS_B	= 329,
    LD_ABS_H	= 330,
    LD_ABS_W	= 331,
    LD_IND_B	= 332,
    LD_IND_H	= 333,
    LD_IND_W	= 334,
    LD_imm64	= 335,
    LD_pseudo	= 336,
    LE16	= 337,
    LE32	= 338,
    LE64	= 339,
    MOD_ri	= 340,
    MOD_ri_32	= 341,
    MOD_rr	= 342,
    MOD_rr_32	= 343,
    MOV_32_64	= 344,
    MOV_ri	= 345,
    MOV_ri_32	= 346,
    MOV_rr	= 347,
    MOV_rr_32	= 348,
    MUL_ri	= 349,
    MUL_ri_32	= 350,
    MUL_rr	= 351,
    MUL_rr_32	= 352,
    NEG_32	= 353,
    NEG_64	= 354,
    NOP	= 355,
    OR_ri	= 356,
    OR_ri_32	= 357,
    OR_rr	= 358,
    OR_rr_32	= 359,
    RET	= 360,
    SLL_ri	= 361,
    SLL_ri_32	= 362,
    SLL_rr	= 363,
    SLL_rr_32	= 364,
    SRA_ri	= 365,
    SRA_ri_32	= 366,
    SRA_rr	= 367,
    SRA_rr_32	= 368,
    SRL_ri	= 369,
    SRL_ri_32	= 370,
    SRL_rr	= 371,
    SRL_rr_32	= 372,
    STB	= 373,
    STB32	= 374,
    STD	= 375,
    STH	= 376,
    STH32	= 377,
    STW	= 378,
    STW32	= 379,
    SUB_ri	= 380,
    SUB_ri_32	= 381,
    SUB_rr	= 382,
    SUB_rr_32	= 383,
    XADDD	= 384,
    XADDW	= 385,
    XADDW32	= 386,
    XANDD	= 387,
    XANDW32	= 388,
    XCHGD	= 389,
    XCHGW32	= 390,
    XFADDD	= 391,
    XFADDW32	= 392,
    XFANDD	= 393,
    XFANDW32	= 394,
    XFORD	= 395,
    XFORW32	= 396,
    XFXORD	= 397,
    XFXORW32	= 398,
    XORD	= 399,
    XORW32	= 400,
    XOR_ri	= 401,
    XOR_ri_32	= 402,
    XOR_rr	= 403,
    XOR_rr_32	= 404,
    XXORD	= 405,
    XXORW32	= 406,
    INSTRUCTION_LIST_END = 407
  };

} // end namespace BPF
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace BPF {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // end namespace Sched
} // end namespace BPF
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { BPF::R11, 0 };
static const MCPhysReg ImplicitList2[] = { BPF::R0, 0 };
static const MCPhysReg ImplicitList3[] = { BPF::W0, 0 };
static const MCPhysReg ImplicitList4[] = { BPF::R0, BPF::R1, BPF::R2, BPF::R3, BPF::R4, BPF::R5, 0 };
static const MCPhysReg ImplicitList5[] = { BPF::R6, 0 };

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
static const MCOperandInfo OperandInfo46[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo61[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo79[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo80[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };

extern const MCInstrDesc BPFInsts[] = {
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
  { 247,	2,	0,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo10 },  // Inst #247 = ADJCALLSTACKDOWN
  { 248,	2,	0,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo10 },  // Inst #248 = ADJCALLSTACKUP
  { 249,	3,	1,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #249 = FI_ri
  { 250,	4,	0,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #250 = MEMCPY
  { 251,	6,	1,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #251 = Select
  { 252,	6,	1,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #252 = Select_32
  { 253,	6,	1,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #253 = Select_32_64
  { 254,	6,	1,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #254 = Select_64_32
  { 255,	6,	1,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #255 = Select_Ri
  { 256,	6,	1,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #256 = Select_Ri_32
  { 257,	6,	1,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #257 = Select_Ri_32_64
  { 258,	6,	1,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #258 = Select_Ri_64_32
  { 259,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #259 = ADD_ri
  { 260,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #260 = ADD_ri_32
  { 261,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #261 = ADD_rr
  { 262,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #262 = ADD_rr_32
  { 263,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #263 = AND_ri
  { 264,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #264 = AND_ri_32
  { 265,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #265 = AND_rr
  { 266,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #266 = AND_rr_32
  { 267,	2,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo60 },  // Inst #267 = BE16
  { 268,	2,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo60 },  // Inst #268 = BE32
  { 269,	2,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo60 },  // Inst #269 = BE64
  { 270,	3,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo61 },  // Inst #270 = CMPXCHGD
  { 271,	3,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo62 },  // Inst #271 = CMPXCHGW32
  { 272,	4,	1,	8,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo63 },  // Inst #272 = CORE_ALU32_MEM
  { 273,	4,	1,	8,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #273 = CORE_MEM
  { 274,	4,	1,	8,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #274 = CORE_SHIFT
  { 275,	3,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #275 = DIV_ri
  { 276,	3,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #276 = DIV_ri_32
  { 277,	3,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #277 = DIV_rr
  { 278,	3,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #278 = DIV_rr_32
  { 279,	1,	0,	8,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList4, OperandInfo2 },  // Inst #279 = JAL
  { 280,	1,	0,	8,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList4, OperandInfo66 },  // Inst #280 = JALX
  { 281,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #281 = JEQ_ri
  { 282,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #282 = JEQ_ri_32
  { 283,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #283 = JEQ_rr
  { 284,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #284 = JEQ_rr_32
  { 285,	1,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #285 = JMP
  { 286,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #286 = JNE_ri
  { 287,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #287 = JNE_ri_32
  { 288,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #288 = JNE_rr
  { 289,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #289 = JNE_rr_32
  { 290,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #290 = JSGE_ri
  { 291,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #291 = JSGE_ri_32
  { 292,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #292 = JSGE_rr
  { 293,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #293 = JSGE_rr_32
  { 294,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #294 = JSGT_ri
  { 295,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #295 = JSGT_ri_32
  { 296,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #296 = JSGT_rr
  { 297,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #297 = JSGT_rr_32
  { 298,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #298 = JSLE_ri
  { 299,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #299 = JSLE_ri_32
  { 300,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #300 = JSLE_rr
  { 301,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #301 = JSLE_rr_32
  { 302,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #302 = JSLT_ri
  { 303,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #303 = JSLT_ri_32
  { 304,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #304 = JSLT_rr
  { 305,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #305 = JSLT_rr_32
  { 306,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #306 = JUGE_ri
  { 307,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #307 = JUGE_ri_32
  { 308,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #308 = JUGE_rr
  { 309,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #309 = JUGE_rr_32
  { 310,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #310 = JUGT_ri
  { 311,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #311 = JUGT_ri_32
  { 312,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #312 = JUGT_rr
  { 313,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #313 = JUGT_rr_32
  { 314,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #314 = JULE_ri
  { 315,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #315 = JULE_ri_32
  { 316,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #316 = JULE_rr
  { 317,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #317 = JULE_rr_32
  { 318,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #318 = JULT_ri
  { 319,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #319 = JULT_ri_32
  { 320,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #320 = JULT_rr
  { 321,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #321 = JULT_rr_32
  { 322,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #322 = LDB
  { 323,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #323 = LDB32
  { 324,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #324 = LDD
  { 325,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #325 = LDH
  { 326,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #326 = LDH32
  { 327,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #327 = LDW
  { 328,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #328 = LDW32
  { 329,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList5, ImplicitList4, OperandInfo72 },  // Inst #329 = LD_ABS_B
  { 330,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList5, ImplicitList4, OperandInfo72 },  // Inst #330 = LD_ABS_H
  { 331,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList5, ImplicitList4, OperandInfo72 },  // Inst #331 = LD_ABS_W
  { 332,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList5, ImplicitList4, OperandInfo73 },  // Inst #332 = LD_IND_B
  { 333,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList5, ImplicitList4, OperandInfo73 },  // Inst #333 = LD_IND_H
  { 334,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList5, ImplicitList4, OperandInfo73 },  // Inst #334 = LD_IND_W
  { 335,	2,	1,	8,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo74 },  // Inst #335 = LD_imm64
  { 336,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #336 = LD_pseudo
  { 337,	2,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo60 },  // Inst #337 = LE16
  { 338,	2,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo60 },  // Inst #338 = LE32
  { 339,	2,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo60 },  // Inst #339 = LE64
  { 340,	3,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #340 = MOD_ri
  { 341,	3,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #341 = MOD_ri_32
  { 342,	3,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #342 = MOD_rr
  { 343,	3,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #343 = MOD_rr_32
  { 344,	2,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo75 },  // Inst #344 = MOV_32_64
  { 345,	2,	1,	8,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo72 },  // Inst #345 = MOV_ri
  { 346,	2,	1,	8,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #346 = MOV_ri_32
  { 347,	2,	1,	8,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo73 },  // Inst #347 = MOV_rr
  { 348,	2,	1,	8,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo77 },  // Inst #348 = MOV_rr_32
  { 349,	3,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #349 = MUL_ri
  { 350,	3,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #350 = MUL_ri_32
  { 351,	3,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #351 = MUL_rr
  { 352,	3,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #352 = MUL_rr_32
  { 353,	2,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo78 },  // Inst #353 = NEG_32
  { 354,	2,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo60 },  // Inst #354 = NEG_64
  { 355,	1,	0,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #355 = NOP
  { 356,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #356 = OR_ri
  { 357,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #357 = OR_ri_32
  { 358,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #358 = OR_rr
  { 359,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #359 = OR_rr_32
  { 360,	0,	0,	8,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #360 = RET
  { 361,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #361 = SLL_ri
  { 362,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #362 = SLL_ri_32
  { 363,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #363 = SLL_rr
  { 364,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #364 = SLL_rr_32
  { 365,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #365 = SRA_ri
  { 366,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #366 = SRA_ri_32
  { 367,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #367 = SRA_rr
  { 368,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #368 = SRA_rr_32
  { 369,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #369 = SRL_ri
  { 370,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #370 = SRL_ri_32
  { 371,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #371 = SRL_rr
  { 372,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #372 = SRL_rr_32
  { 373,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #373 = STB
  { 374,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #374 = STB32
  { 375,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #375 = STD
  { 376,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #376 = STH
  { 377,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #377 = STH32
  { 378,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #378 = STW
  { 379,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #379 = STW32
  { 380,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #380 = SUB_ri
  { 381,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #381 = SUB_ri_32
  { 382,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #382 = SUB_rr
  { 383,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #383 = SUB_rr_32
  { 384,	4,	1,	8,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #384 = XADDD
  { 385,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #385 = XADDW
  { 386,	4,	1,	8,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo80 },  // Inst #386 = XADDW32
  { 387,	4,	1,	8,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #387 = XANDD
  { 388,	4,	1,	8,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo80 },  // Inst #388 = XANDW32
  { 389,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #389 = XCHGD
  { 390,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo80 },  // Inst #390 = XCHGW32
  { 391,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #391 = XFADDD
  { 392,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo80 },  // Inst #392 = XFADDW32
  { 393,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #393 = XFANDD
  { 394,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo80 },  // Inst #394 = XFANDW32
  { 395,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #395 = XFORD
  { 396,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo80 },  // Inst #396 = XFORW32
  { 397,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #397 = XFXORD
  { 398,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo80 },  // Inst #398 = XFXORW32
  { 399,	4,	1,	8,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #399 = XORD
  { 400,	4,	1,	8,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo80 },  // Inst #400 = XORW32
  { 401,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #401 = XOR_ri
  { 402,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #402 = XOR_ri_32
  { 403,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #403 = XOR_rr
  { 404,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #404 = XOR_rr_32
  { 405,	4,	1,	8,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #405 = XXORD
  { 406,	4,	1,	8,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo80 },  // Inst #406 = XXORW32
};

extern const char BPFInstrNameData[] = {
  /* 0 */ 'G', '_', 'F', 'L', 'O', 'G', '1', '0', 0,
  /* 9 */ 'L', 'D', 'B', '3', '2', 0,
  /* 15 */ 'S', 'T', 'B', '3', '2', 0,
  /* 21 */ 'B', 'E', '3', '2', 0,
  /* 26 */ 'L', 'E', '3', '2', 0,
  /* 31 */ 'L', 'D', 'H', '3', '2', 0,
  /* 37 */ 'S', 'T', 'H', '3', '2', 0,
  /* 43 */ 'X', 'F', 'A', 'D', 'D', 'W', '3', '2', 0,
  /* 52 */ 'X', 'A', 'D', 'D', 'W', '3', '2', 0,
  /* 60 */ 'L', 'D', 'W', '3', '2', 0,
  /* 66 */ 'X', 'F', 'A', 'N', 'D', 'W', '3', '2', 0,
  /* 75 */ 'X', 'A', 'N', 'D', 'W', '3', '2', 0,
  /* 83 */ 'C', 'M', 'P', 'X', 'C', 'H', 'G', 'W', '3', '2', 0,
  /* 94 */ 'X', 'F', 'O', 'R', 'W', '3', '2', 0,
  /* 102 */ 'X', 'F', 'X', 'O', 'R', 'W', '3', '2', 0,
  /* 111 */ 'X', 'X', 'O', 'R', 'W', '3', '2', 0,
  /* 119 */ 'S', 'T', 'W', '3', '2', 0,
  /* 125 */ 'S', 'e', 'l', 'e', 'c', 't', '_', 'R', 'i', '_', '6', '4', '_', '3', '2', 0,
  /* 141 */ 'S', 'e', 'l', 'e', 'c', 't', '_', '6', '4', '_', '3', '2', 0,
  /* 154 */ 'N', 'E', 'G', '_', '3', '2', 0,
  /* 161 */ 'S', 'e', 'l', 'e', 'c', 't', '_', 'R', 'i', '_', '3', '2', 0,
  /* 174 */ 'S', 'R', 'A', '_', 'r', 'i', '_', '3', '2', 0,
  /* 184 */ 'S', 'U', 'B', '_', 'r', 'i', '_', '3', '2', 0,
  /* 194 */ 'A', 'D', 'D', '_', 'r', 'i', '_', '3', '2', 0,
  /* 204 */ 'A', 'N', 'D', '_', 'r', 'i', '_', '3', '2', 0,
  /* 214 */ 'M', 'O', 'D', '_', 'r', 'i', '_', '3', '2', 0,
  /* 224 */ 'J', 'S', 'G', 'E', '_', 'r', 'i', '_', '3', '2', 0,
  /* 235 */ 'J', 'U', 'G', 'E', '_', 'r', 'i', '_', '3', '2', 0,
  /* 246 */ 'J', 'S', 'L', 'E', '_', 'r', 'i', '_', '3', '2', 0,
  /* 257 */ 'J', 'U', 'L', 'E', '_', 'r', 'i', '_', '3', '2', 0,
  /* 268 */ 'J', 'N', 'E', '_', 'r', 'i', '_', '3', '2', 0,
  /* 278 */ 'S', 'L', 'L', '_', 'r', 'i', '_', '3', '2', 0,
  /* 288 */ 'S', 'R', 'L', '_', 'r', 'i', '_', '3', '2', 0,
  /* 298 */ 'M', 'U', 'L', '_', 'r', 'i', '_', '3', '2', 0,
  /* 308 */ 'J', 'E', 'Q', '_', 'r', 'i', '_', '3', '2', 0,
  /* 318 */ 'X', 'O', 'R', '_', 'r', 'i', '_', '3', '2', 0,
  /* 328 */ 'J', 'S', 'G', 'T', '_', 'r', 'i', '_', '3', '2', 0,
  /* 339 */ 'J', 'U', 'G', 'T', '_', 'r', 'i', '_', '3', '2', 0,
  /* 350 */ 'J', 'S', 'L', 'T', '_', 'r', 'i', '_', '3', '2', 0,
  /* 361 */ 'J', 'U', 'L', 'T', '_', 'r', 'i', '_', '3', '2', 0,
  /* 372 */ 'D', 'I', 'V', '_', 'r', 'i', '_', '3', '2', 0,
  /* 382 */ 'M', 'O', 'V', '_', 'r', 'i', '_', '3', '2', 0,
  /* 392 */ 'S', 'R', 'A', '_', 'r', 'r', '_', '3', '2', 0,
  /* 402 */ 'S', 'U', 'B', '_', 'r', 'r', '_', '3', '2', 0,
  /* 412 */ 'A', 'D', 'D', '_', 'r', 'r', '_', '3', '2', 0,
  /* 422 */ 'A', 'N', 'D', '_', 'r', 'r', '_', '3', '2', 0,
  /* 432 */ 'M', 'O', 'D', '_', 'r', 'r', '_', '3', '2', 0,
  /* 442 */ 'J', 'S', 'G', 'E', '_', 'r', 'r', '_', '3', '2', 0,
  /* 453 */ 'J', 'U', 'G', 'E', '_', 'r', 'r', '_', '3', '2', 0,
  /* 464 */ 'J', 'S', 'L', 'E', '_', 'r', 'r', '_', '3', '2', 0,
  /* 475 */ 'J', 'U', 'L', 'E', '_', 'r', 'r', '_', '3', '2', 0,
  /* 486 */ 'J', 'N', 'E', '_', 'r', 'r', '_', '3', '2', 0,
  /* 496 */ 'S', 'L', 'L', '_', 'r', 'r', '_', '3', '2', 0,
  /* 506 */ 'S', 'R', 'L', '_', 'r', 'r', '_', '3', '2', 0,
  /* 516 */ 'M', 'U', 'L', '_', 'r', 'r', '_', '3', '2', 0,
  /* 526 */ 'J', 'E', 'Q', '_', 'r', 'r', '_', '3', '2', 0,
  /* 536 */ 'X', 'O', 'R', '_', 'r', 'r', '_', '3', '2', 0,
  /* 546 */ 'J', 'S', 'G', 'T', '_', 'r', 'r', '_', '3', '2', 0,
  /* 557 */ 'J', 'U', 'G', 'T', '_', 'r', 'r', '_', '3', '2', 0,
  /* 568 */ 'J', 'S', 'L', 'T', '_', 'r', 'r', '_', '3', '2', 0,
  /* 579 */ 'J', 'U', 'L', 'T', '_', 'r', 'r', '_', '3', '2', 0,
  /* 590 */ 'D', 'I', 'V', '_', 'r', 'r', '_', '3', '2', 0,
  /* 600 */ 'M', 'O', 'V', '_', 'r', 'r', '_', '3', '2', 0,
  /* 610 */ 'S', 'e', 'l', 'e', 'c', 't', '_', '3', '2', 0,
  /* 620 */ 'G', '_', 'F', 'L', 'O', 'G', '2', 0,
  /* 628 */ 'G', '_', 'F', 'E', 'X', 'P', '2', 0,
  /* 636 */ 'B', 'E', '6', '4', 0,
  /* 641 */ 'L', 'E', '6', '4', 0,
  /* 646 */ 'M', 'O', 'V', '_', '3', '2', '_', '6', '4', 0,
  /* 656 */ 'S', 'e', 'l', 'e', 'c', 't', '_', 'R', 'i', '_', '3', '2', '_', '6', '4', 0,
  /* 672 */ 'S', 'e', 'l', 'e', 'c', 't', '_', '3', '2', '_', '6', '4', 0,
  /* 685 */ 'N', 'E', 'G', '_', '6', '4', 0,
  /* 692 */ 'L', 'D', '_', 'i', 'm', 'm', '6', '4', 0,
  /* 701 */ 'B', 'E', '1', '6', 0,
  /* 706 */ 'L', 'E', '1', '6', 0,
  /* 711 */ 'G', '_', 'F', 'M', 'A', 0,
  /* 717 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'M', 'A', 0,
  /* 730 */ 'L', 'D', 'B', 0,
  /* 734 */ 'S', 'T', 'B', 0,
  /* 738 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 745 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'S', 'U', 'B', 0,
  /* 759 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'S', 'U', 'B', 0,
  /* 776 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 782 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'S', 'U', 'B', 0,
  /* 798 */ 'L', 'D', '_', 'I', 'N', 'D', '_', 'B', 0,
  /* 807 */ 'L', 'D', '_', 'A', 'B', 'S', '_', 'B', 0,
  /* 816 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 828 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 838 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 856 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 864 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 885 */ 'G', '_', 'D', 'Y', 'N', '_', 'S', 'T', 'A', 'C', 'K', 'A', 'L', 'L', 'O', 'C', 0,
  /* 902 */ 'G', '_', 'F', 'M', 'A', 'D', 0,
  /* 909 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 928 */ 'G', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 939 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 958 */ 'G', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 969 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'L', 'O', 'A', 'D', 0,
  /* 984 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 991 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'F', 'A', 'D', 'D', 0,
  /* 1008 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 1015 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'S', 'E', 'Q', '_', 'F', 'A', 'D', 'D', 0,
  /* 1036 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'A', 'D', 'D', 0,
  /* 1050 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'A', 'D', 'D', 0,
  /* 1067 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'A', 'D', 'D', 0,
  /* 1083 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 1089 */ 'G', '_', 'P', 'T', 'R', '_', 'A', 'D', 'D', 0,
  /* 1099 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'D', 'D', 0,
  /* 1115 */ 'X', 'F', 'A', 'D', 'D', 'D', 0,
  /* 1122 */ 'X', 'A', 'D', 'D', 'D', 0,
  /* 1128 */ 'L', 'D', 'D', 0,
  /* 1132 */ 'X', 'F', 'A', 'N', 'D', 'D', 0,
  /* 1139 */ 'X', 'A', 'N', 'D', 'D', 0,
  /* 1145 */ 'C', 'M', 'P', 'X', 'C', 'H', 'G', 'D', 0,
  /* 1154 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'N', 'A', 'N', 'D', 0,
  /* 1171 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'A', 'N', 'D', 0,
  /* 1187 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 1193 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'N', 'D', 0,
  /* 1209 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 1222 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 1231 */ 'G', '_', 'L', 'L', 'R', 'O', 'U', 'N', 'D', 0,
  /* 1241 */ 'G', '_', 'L', 'R', 'O', 'U', 'N', 'D', 0,
  /* 1250 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'R', 'O', 'U', 'N', 'D', 0,
  /* 1268 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', '_', 'R', 'O', 'U', 'N', 'D', 0,
  /* 1294 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 1311 */ 'X', 'F', 'O', 'R', 'D', 0,
  /* 1317 */ 'X', 'F', 'X', 'O', 'R', 'D', 0,
  /* 1324 */ 'X', 'X', 'O', 'R', 'D', 0,
  /* 1330 */ 'S', 'T', 'D', 0,
  /* 1334 */ 'P', 'S', 'E', 'U', 'D', 'O', '_', 'P', 'R', 'O', 'B', 'E', 0,
  /* 1347 */ 'G', '_', 'S', 'S', 'U', 'B', 'E', 0,
  /* 1355 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 1363 */ 'G', '_', 'F', 'E', 'N', 'C', 'E', 0,
  /* 1371 */ 'A', 'R', 'I', 'T', 'H', '_', 'F', 'E', 'N', 'C', 'E', 0,
  /* 1383 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 1396 */ 'G', '_', 'S', 'A', 'D', 'D', 'E', 0,
  /* 1404 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 1412 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 1427 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 1442 */ 'G', '_', 'J', 'U', 'M', 'P', '_', 'T', 'A', 'B', 'L', 'E', 0,
  /* 1455 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 1462 */ 'G', '_', 'M', 'E', 'M', 'C', 'P', 'Y', '_', 'I', 'N', 'L', 'I', 'N', 'E', 0,
  /* 1478 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 1491 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 1507 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 1515 */ 'G', '_', 'B', 'I', 'T', 'R', 'E', 'V', 'E', 'R', 'S', 'E', 0,
  /* 1528 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1538 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1553 */ 'G', '_', 'M', 'E', 'M', 'M', 'O', 'V', 'E', 0,
  /* 1563 */ 'G', '_', 'F', 'R', 'E', 'E', 'Z', 'E', 0,
  /* 1572 */ 'G', '_', 'F', 'C', 'A', 'N', 'O', 'N', 'I', 'C', 'A', 'L', 'I', 'Z', 'E', 0,
  /* 1588 */ 'G', '_', 'C', 'T', 'L', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 1606 */ 'G', '_', 'C', 'T', 'T', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 1624 */ 'G', '_', 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 1639 */ 'D', 'B', 'G', '_', 'I', 'N', 'S', 'T', 'R', '_', 'R', 'E', 'F', 0,
  /* 1653 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 1660 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1675 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1689 */ 'G', '_', 'S', 'E', 'X', 'T', '_', 'I', 'N', 'R', 'E', 'G', 0,
  /* 1702 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 1716 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', 0,
  /* 1733 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'C', 'H', 'G', 0,
  /* 1750 */ 'G', '_', 'F', 'L', 'O', 'G', 0,
  /* 1757 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 1765 */ 'P', 'R', 'E', 'A', 'L', 'L', 'O', 'C', 'A', 'T', 'E', 'D', '_', 'A', 'R', 'G', 0,
  /* 1782 */ 'L', 'D', 'H', 0,
  /* 1786 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 1794 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 1802 */ 'S', 'T', 'H', 0,
  /* 1806 */ 'L', 'D', '_', 'I', 'N', 'D', '_', 'H', 0,
  /* 1815 */ 'L', 'D', '_', 'A', 'B', 'S', '_', 'H', 0,
  /* 1824 */ 'D', 'B', 'G', '_', 'P', 'H', 'I', 0,
  /* 1832 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 1841 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 1850 */ 'G', '_', 'F', 'P', 'O', 'W', 'I', 0,
  /* 1858 */ 'G', '_', 'P', 'T', 'R', 'M', 'A', 'S', 'K', 0,
  /* 1868 */ 'J', 'A', 'L', 0,
  /* 1872 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1881 */ 'D', 'B', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1891 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1900 */ 'A', 'N', 'N', 'O', 'T', 'A', 'T', 'I', 'O', 'N', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1917 */ 'I', 'C', 'A', 'L', 'L', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'F', 'U', 'N', 'N', 'E', 'L', 0,
  /* 1937 */ 'G', '_', 'F', 'S', 'H', 'L', 0,
  /* 1944 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 1950 */ 'G', '_', 'F', 'C', 'E', 'I', 'L', 0,
  /* 1958 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 1978 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'Y', 'P', 'E', 'D', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 2005 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 2026 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 2038 */ 'K', 'I', 'L', 'L', 0,
  /* 2043 */ 'G', '_', 'R', 'O', 'T', 'L', 0,
  /* 2050 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'F', 'M', 'U', 'L', 0,
  /* 2067 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 2074 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'S', 'E', 'Q', '_', 'F', 'M', 'U', 'L', 0,
  /* 2095 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'M', 'U', 'L', 0,
  /* 2109 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'M', 'U', 'L', 0,
  /* 2125 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 2131 */ 'C', 'O', 'R', 'E', '_', 'A', 'L', 'U', '3', '2', '_', 'M', 'E', 'M', 0,
  /* 2146 */ 'C', 'O', 'R', 'E', '_', 'M', 'E', 'M', 0,
  /* 2155 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 2162 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'R', 'E', 'M', 0,
  /* 2176 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 2183 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 2190 */ 'G', '_', 'S', 'D', 'I', 'V', 'R', 'E', 'M', 0,
  /* 2200 */ 'G', '_', 'U', 'D', 'I', 'V', 'R', 'E', 'M', 0,
  /* 2210 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 2220 */ 'G', '_', 'F', 'M', 'I', 'N', 'I', 'M', 'U', 'M', 0,
  /* 2231 */ 'G', '_', 'F', 'M', 'A', 'X', 'I', 'M', 'U', 'M', 0,
  /* 2242 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', 0,
  /* 2252 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', 0,
  /* 2262 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'R', 'O', 'U', 'N', 'D', 'E', 'V', 'E', 'N', 0,
  /* 2284 */ 'G', '_', 'A', 'S', 'S', 'E', 'R', 'T', '_', 'A', 'L', 'I', 'G', 'N', 0,
  /* 2299 */ 'G', '_', 'F', 'C', 'O', 'P', 'Y', 'S', 'I', 'G', 'N', 0,
  /* 2311 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'F', 'M', 'I', 'N', 0,
  /* 2328 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'M', 'I', 'N', 0,
  /* 2345 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'S', 'M', 'I', 'N', 0,
  /* 2362 */ 'G', '_', 'S', 'M', 'I', 'N', 0,
  /* 2369 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'U', 'M', 'I', 'N', 0,
  /* 2386 */ 'G', '_', 'U', 'M', 'I', 'N', 0,
  /* 2393 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'I', 'N', 0,
  /* 2410 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'I', 'N', 0,
  /* 2426 */ 'G', '_', 'F', 'S', 'I', 'N', 0,
  /* 2433 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 2449 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 2466 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 2474 */ 'G', '_', 'U', 'S', 'U', 'B', 'O', 0,
  /* 2482 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 2490 */ 'G', '_', 'U', 'A', 'D', 'D', 'O', 0,
  /* 2498 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 2506 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 2514 */ 'G', '_', 'B', 'Z', 'E', 'R', 'O', 0,
  /* 2522 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 2531 */ 'G', '_', 'B', 'S', 'W', 'A', 'P', 0,
  /* 2539 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 2548 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 2557 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 2564 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 2571 */ 'J', 'M', 'P', 0,
  /* 2575 */ 'N', 'O', 'P', 0,
  /* 2579 */ 'G', '_', 'C', 'T', 'P', 'O', 'P', 0,
  /* 2587 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 2600 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 2612 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 2627 */ 'P', 'R', 'E', 'A', 'L', 'L', 'O', 'C', 'A', 'T', 'E', 'D', '_', 'S', 'E', 'T', 'U', 'P', 0,
  /* 2646 */ 'G', '_', 'F', 'E', 'X', 'P', 0,
  /* 2653 */ 'G', '_', 'B', 'R', 0,
  /* 2658 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', '_', 'B', 'R', 0,
  /* 2671 */ 'G', '_', 'B', 'L', 'O', 'C', 'K', '_', 'A', 'D', 'D', 'R', 0,
  /* 2684 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 2709 */ 'G', '_', 'R', 'E', 'A', 'D', 'C', 'Y', 'C', 'L', 'E', 'C', 'O', 'U', 'N', 'T', 'E', 'R', 0,
  /* 2728 */ 'G', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'G', 'I', 'S', 'T', 'E', 'R', 0,
  /* 2744 */ 'G', '_', 'W', 'R', 'I', 'T', 'E', '_', 'R', 'E', 'G', 'I', 'S', 'T', 'E', 'R', 0,
  /* 2761 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 2768 */ 'G', '_', 'F', 'S', 'H', 'R', 0,
  /* 2775 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 2782 */ 'G', '_', 'F', 'F', 'L', 'O', 'O', 'R', 0,
  /* 2791 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 2806 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 2823 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'X', 'O', 'R', 0,
  /* 2839 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 2845 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'O', 'R', 0,
  /* 2861 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'O', 'R', 0,
  /* 2876 */ 'G', '_', 'O', 'R', 0,
  /* 2881 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'O', 'R', 0,
  /* 2896 */ 'G', '_', 'R', 'O', 'T', 'R', 0,
  /* 2903 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 2914 */ 'G', '_', 'F', 'A', 'B', 'S', 0,
  /* 2921 */ 'G', '_', 'A', 'B', 'S', 0,
  /* 2927 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 2944 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 2959 */ 'G', '_', 'F', 'C', 'O', 'S', 0,
  /* 2966 */ 'G', '_', 'C', 'O', 'N', 'C', 'A', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', 'S', 0,
  /* 2983 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 3000 */ 'G', '_', 'I', 'S', '_', 'F', 'P', 'C', 'L', 'A', 'S', 'S', 0,
  /* 3013 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'W', 'I', 'T', 'H', '_', 'S', 'U', 'C', 'C', 'E', 'S', 'S', 0,
  /* 3043 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 3070 */ 'G', '_', 'S', 'S', 'U', 'B', 'S', 'A', 'T', 0,
  /* 3080 */ 'G', '_', 'U', 'S', 'U', 'B', 'S', 'A', 'T', 0,
  /* 3090 */ 'G', '_', 'S', 'A', 'D', 'D', 'S', 'A', 'T', 0,
  /* 3100 */ 'G', '_', 'U', 'A', 'D', 'D', 'S', 'A', 'T', 0,
  /* 3110 */ 'G', '_', 'S', 'S', 'H', 'L', 'S', 'A', 'T', 0,
  /* 3120 */ 'G', '_', 'U', 'S', 'H', 'L', 'S', 'A', 'T', 0,
  /* 3130 */ 'G', '_', 'S', 'M', 'U', 'L', 'F', 'I', 'X', 'S', 'A', 'T', 0,
  /* 3143 */ 'G', '_', 'U', 'M', 'U', 'L', 'F', 'I', 'X', 'S', 'A', 'T', 0,
  /* 3156 */ 'G', '_', 'S', 'D', 'I', 'V', 'F', 'I', 'X', 'S', 'A', 'T', 0,
  /* 3169 */ 'G', '_', 'U', 'D', 'I', 'V', 'F', 'I', 'X', 'S', 'A', 'T', 0,
  /* 3182 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 3192 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 3201 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 3214 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 3228 */ 'G', '_', 'M', 'E', 'M', 'S', 'E', 'T', 0,
  /* 3237 */ 'C', 'O', 'R', 'E', '_', 'S', 'H', 'I', 'F', 'T', 0,
  /* 3248 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 3272 */ 'G', '_', 'B', 'R', 'J', 'T', 0,
  /* 3279 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 3300 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 3320 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 3332 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 3343 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 3354 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 3365 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 3376 */ 'G', '_', 'F', 'R', 'I', 'N', 'T', 0,
  /* 3384 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'L', 'R', 'I', 'N', 'T', 0,
  /* 3402 */ 'G', '_', 'F', 'N', 'E', 'A', 'R', 'B', 'Y', 'I', 'N', 'T', 0,
  /* 3415 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 3425 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 3440 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 3449 */ 'G', '_', 'F', 'S', 'Q', 'R', 'T', 0,
  /* 3457 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'S', 'Q', 'R', 'T', 0,
  /* 3472 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 3482 */ 'G', '_', 'A', 'D', 'D', 'R', 'S', 'P', 'A', 'C', 'E', '_', 'C', 'A', 'S', 'T', 0,
  /* 3499 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', '_', 'L', 'I', 'S', 'T', 0,
  /* 3514 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 3522 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 3529 */ 'G', '_', 'A', 'S', 'S', 'E', 'R', 'T', '_', 'S', 'E', 'X', 'T', 0,
  /* 3543 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 3552 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 3559 */ 'G', '_', 'A', 'S', 'S', 'E', 'R', 'T', '_', 'Z', 'E', 'X', 'T', 0,
  /* 3573 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 3580 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'D', 'I', 'V', 0,
  /* 3594 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 3601 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 3608 */ 'X', 'A', 'D', 'D', 'W', 0,
  /* 3614 */ 'L', 'D', 'W', 0,
  /* 3618 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 3625 */ 'S', 'T', 'W', 0,
  /* 3629 */ 'L', 'D', '_', 'I', 'N', 'D', '_', 'W', 0,
  /* 3638 */ 'L', 'D', '_', 'A', 'B', 'S', '_', 'W', 0,
  /* 3647 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'F', 'M', 'A', 'X', 0,
  /* 3664 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'M', 'A', 'X', 0,
  /* 3681 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'S', 'M', 'A', 'X', 0,
  /* 3698 */ 'G', '_', 'S', 'M', 'A', 'X', 0,
  /* 3705 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'U', 'M', 'A', 'X', 0,
  /* 3722 */ 'G', '_', 'U', 'M', 'A', 'X', 0,
  /* 3729 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'A', 'X', 0,
  /* 3746 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'A', 'X', 0,
  /* 3762 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 3776 */ 'G', '_', 'S', 'B', 'F', 'X', 0,
  /* 3783 */ 'G', '_', 'U', 'B', 'F', 'X', 0,
  /* 3790 */ 'G', '_', 'S', 'M', 'U', 'L', 'F', 'I', 'X', 0,
  /* 3800 */ 'G', '_', 'U', 'M', 'U', 'L', 'F', 'I', 'X', 0,
  /* 3810 */ 'G', '_', 'S', 'D', 'I', 'V', 'F', 'I', 'X', 0,
  /* 3820 */ 'G', '_', 'U', 'D', 'I', 'V', 'F', 'I', 'X', 0,
  /* 3830 */ 'J', 'A', 'L', 'X', 0,
  /* 3835 */ 'G', '_', 'M', 'E', 'M', 'C', 'P', 'Y', 0,
  /* 3844 */ 'C', 'O', 'P', 'Y', 0,
  /* 3849 */ 'G', '_', 'C', 'T', 'L', 'Z', 0,
  /* 3856 */ 'G', '_', 'C', 'T', 'T', 'Z', 0,
  /* 3863 */ 'S', 'e', 'l', 'e', 'c', 't', '_', 'R', 'i', 0,
  /* 3873 */ 'S', 'R', 'A', '_', 'r', 'i', 0,
  /* 3880 */ 'S', 'U', 'B', '_', 'r', 'i', 0,
  /* 3887 */ 'A', 'D', 'D', '_', 'r', 'i', 0,
  /* 3894 */ 'A', 'N', 'D', '_', 'r', 'i', 0,
  /* 3901 */ 'M', 'O', 'D', '_', 'r', 'i', 0,
  /* 3908 */ 'J', 'S', 'G', 'E', '_', 'r', 'i', 0,
  /* 3916 */ 'J', 'U', 'G', 'E', '_', 'r', 'i', 0,
  /* 3924 */ 'J', 'S', 'L', 'E', '_', 'r', 'i', 0,
  /* 3932 */ 'J', 'U', 'L', 'E', '_', 'r', 'i', 0,
  /* 3940 */ 'J', 'N', 'E', '_', 'r', 'i', 0,
  /* 3947 */ 'F', 'I', '_', 'r', 'i', 0,
  /* 3953 */ 'S', 'L', 'L', '_', 'r', 'i', 0,
  /* 3960 */ 'S', 'R', 'L', '_', 'r', 'i', 0,
  /* 3967 */ 'M', 'U', 'L', '_', 'r', 'i', 0,
  /* 3974 */ 'J', 'E', 'Q', '_', 'r', 'i', 0,
  /* 3981 */ 'X', 'O', 'R', '_', 'r', 'i', 0,
  /* 3988 */ 'J', 'S', 'G', 'T', '_', 'r', 'i', 0,
  /* 3996 */ 'J', 'U', 'G', 'T', '_', 'r', 'i', 0,
  /* 4004 */ 'J', 'S', 'L', 'T', '_', 'r', 'i', 0,
  /* 4012 */ 'J', 'U', 'L', 'T', '_', 'r', 'i', 0,
  /* 4020 */ 'D', 'I', 'V', '_', 'r', 'i', 0,
  /* 4027 */ 'M', 'O', 'V', '_', 'r', 'i', 0,
  /* 4034 */ 'L', 'D', '_', 'p', 's', 'e', 'u', 'd', 'o', 0,
  /* 4044 */ 'S', 'R', 'A', '_', 'r', 'r', 0,
  /* 4051 */ 'S', 'U', 'B', '_', 'r', 'r', 0,
  /* 4058 */ 'A', 'D', 'D', '_', 'r', 'r', 0,
  /* 4065 */ 'A', 'N', 'D', '_', 'r', 'r', 0,
  /* 4072 */ 'M', 'O', 'D', '_', 'r', 'r', 0,
  /* 4079 */ 'J', 'S', 'G', 'E', '_', 'r', 'r', 0,
  /* 4087 */ 'J', 'U', 'G', 'E', '_', 'r', 'r', 0,
  /* 4095 */ 'J', 'S', 'L', 'E', '_', 'r', 'r', 0,
  /* 4103 */ 'J', 'U', 'L', 'E', '_', 'r', 'r', 0,
  /* 4111 */ 'J', 'N', 'E', '_', 'r', 'r', 0,
  /* 4118 */ 'S', 'L', 'L', '_', 'r', 'r', 0,
  /* 4125 */ 'S', 'R', 'L', '_', 'r', 'r', 0,
  /* 4132 */ 'M', 'U', 'L', '_', 'r', 'r', 0,
  /* 4139 */ 'J', 'E', 'Q', '_', 'r', 'r', 0,
  /* 4146 */ 'X', 'O', 'R', '_', 'r', 'r', 0,
  /* 4153 */ 'J', 'S', 'G', 'T', '_', 'r', 'r', 0,
  /* 4161 */ 'J', 'U', 'G', 'T', '_', 'r', 'r', 0,
  /* 4169 */ 'J', 'S', 'L', 'T', '_', 'r', 'r', 0,
  /* 4177 */ 'J', 'U', 'L', 'T', '_', 'r', 'r', 0,
  /* 4185 */ 'D', 'I', 'V', '_', 'r', 'r', 0,
  /* 4192 */ 'M', 'O', 'V', '_', 'r', 'r', 0,
  /* 4199 */ 'S', 'e', 'l', 'e', 'c', 't', 0,
  0
};

extern const unsigned BPFInstrNameIndices[] = {
    1828U, 2210U, 2658U, 2433U, 1891U, 1872U, 1900U, 2038U, 
    1660U, 1675U, 1626U, 1702U, 2983U, 1528U, 3499U, 1639U, 
    1824U, 1881U, 1383U, 3844U, 1455U, 3425U, 1209U, 1334U, 
    1371U, 2522U, 2026U, 3354U, 1294U, 2627U, 1765U, 3343U, 
    1478U, 2600U, 2587U, 2684U, 3214U, 3248U, 1958U, 2005U, 
    1978U, 1917U, 3529U, 3559U, 2284U, 1083U, 776U, 2125U, 
    3594U, 3601U, 2176U, 2183U, 2190U, 2200U, 1187U, 2876U, 
    2839U, 1624U, 1826U, 3762U, 1538U, 3182U, 2927U, 3440U, 
    2944U, 2791U, 864U, 2966U, 3365U, 2903U, 3472U, 1563U, 
    1268U, 838U, 1250U, 3384U, 2262U, 2709U, 984U, 928U, 
    958U, 969U, 909U, 939U, 1507U, 1491U, 3013U, 1716U, 
    1733U, 1099U, 782U, 1193U, 1154U, 2881U, 2845U, 3746U, 
    2410U, 3729U, 2393U, 1050U, 759U, 3664U, 2328U, 1363U, 
    1222U, 3201U, 816U, 3043U, 3543U, 856U, 3332U, 3320U, 
    3415U, 1757U, 3522U, 1689U, 3552U, 1944U, 2775U, 2761U, 
    1937U, 2768U, 2896U, 2043U, 2564U, 2557U, 3192U, 2490U, 
    1404U, 2474U, 1355U, 2482U, 1396U, 2466U, 1347U, 2506U, 
    2498U, 1794U, 1786U, 3100U, 3090U, 3080U, 3070U, 3120U, 
    3110U, 3790U, 3800U, 3130U, 3143U, 3810U, 3820U, 3156U, 
    3169U, 1008U, 738U, 2067U, 711U, 902U, 3573U, 2155U, 
    3618U, 1850U, 2646U, 628U, 1750U, 620U, 0U, 1653U, 
    3514U, 828U, 1832U, 1841U, 2539U, 2548U, 2914U, 2299U, 
    3000U, 1572U, 2242U, 2252U, 1412U, 1427U, 2220U, 2231U, 
    1089U, 1858U, 2362U, 3698U, 2386U, 3722U, 2921U, 1241U, 
    1231U, 2653U, 3272U, 3300U, 3279U, 2806U, 3856U, 1606U, 
    3849U, 1588U, 2579U, 2531U, 1515U, 1950U, 2959U, 2426U, 
    3449U, 2782U, 3376U, 3402U, 3482U, 2671U, 1442U, 885U, 
    1036U, 745U, 2095U, 3580U, 2162U, 717U, 3457U, 2728U, 
    2744U, 3835U, 1462U, 1553U, 3228U, 2514U, 1015U, 2074U, 
    991U, 2050U, 3647U, 2311U, 1067U, 2109U, 1171U, 2861U, 
    2823U, 3681U, 2345U, 3705U, 2369U, 3776U, 3783U, 2449U, 
    2612U, 3947U, 3837U, 4199U, 610U, 672U, 141U, 3863U, 
    161U, 656U, 125U, 3887U, 194U, 4058U, 412U, 3894U, 
    204U, 4065U, 422U, 701U, 21U, 636U, 1145U, 83U, 
    2131U, 2146U, 3237U, 4020U, 372U, 4185U, 590U, 1868U, 
    3830U, 3974U, 308U, 4139U, 526U, 2571U, 3940U, 268U, 
    4111U, 486U, 3908U, 224U, 4079U, 442U, 3988U, 328U, 
    4153U, 546U, 3924U, 246U, 4095U, 464U, 4004U, 350U, 
    4169U, 568U, 3916U, 235U, 4087U, 453U, 3996U, 339U, 
    4161U, 557U, 3932U, 257U, 4103U, 475U, 4012U, 361U, 
    4177U, 579U, 730U, 9U, 1128U, 1782U, 31U, 3614U, 
    60U, 807U, 1815U, 3638U, 798U, 1806U, 3629U, 692U, 
    4034U, 706U, 26U, 641U, 3901U, 214U, 4072U, 432U, 
    646U, 4027U, 382U, 4192U, 600U, 3967U, 298U, 4132U, 
    516U, 154U, 685U, 2575U, 3982U, 319U, 4147U, 537U, 
    3224U, 3953U, 278U, 4118U, 496U, 3873U, 174U, 4044U, 
    392U, 3960U, 288U, 4125U, 506U, 734U, 15U, 1330U, 
    1802U, 37U, 3625U, 119U, 3880U, 184U, 4051U, 402U, 
    1122U, 3608U, 52U, 1139U, 75U, 1148U, 86U, 1115U, 
    43U, 1132U, 66U, 1311U, 94U, 1317U, 102U, 1319U, 
    104U, 3981U, 318U, 4146U, 536U, 1324U, 111U, 
};

static inline void InitBPFMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(BPFInsts, BPFInstrNameIndices, BPFInstrNameData, nullptr, nullptr, 407);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct BPFGenInstrInfo : public TargetInstrInfo {
  explicit BPFGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~BPFGenInstrInfo() override = default;

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
extern const MCInstrDesc BPFInsts[];
extern const unsigned BPFInstrNameIndices[];
extern const char BPFInstrNameData[];
BPFGenInstrInfo::BPFGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(BPFInsts, BPFInstrNameIndices, BPFInstrNameData, nullptr, nullptr, 407);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace BPF {
namespace OpName {
enum {
  OPERAND_LAST
};
} // end namespace OpName
} // end namespace BPF
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace BPF {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace BPF
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace BPF {
namespace OpTypes {
enum OperandType {
  MEMri = 0,
  brtarget = 1,
  calltarget = 2,
  f32imm = 3,
  f64imm = 4,
  i16imm = 5,
  i1imm = 6,
  i32imm = 7,
  i64imm = 8,
  i8imm = 9,
  ptype0 = 10,
  ptype1 = 11,
  ptype2 = 12,
  ptype3 = 13,
  ptype4 = 14,
  ptype5 = 15,
  type0 = 16,
  type1 = 17,
  type2 = 18,
  type3 = 19,
  type4 = 20,
  type5 = 21,
  u64imm = 22,
  untyped_imm_0 = 23,
  GPR = 24,
  GPR32 = 25,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace BPF
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace BPF {
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
    /* FI_ri */
    632,
    /* MEMCPY */
    635,
    /* Select */
    639,
    /* Select_32 */
    645,
    /* Select_32_64 */
    651,
    /* Select_64_32 */
    657,
    /* Select_Ri */
    663,
    /* Select_Ri_32 */
    669,
    /* Select_Ri_32_64 */
    675,
    /* Select_Ri_64_32 */
    681,
    /* ADD_ri */
    687,
    /* ADD_ri_32 */
    690,
    /* ADD_rr */
    693,
    /* ADD_rr_32 */
    696,
    /* AND_ri */
    699,
    /* AND_ri_32 */
    702,
    /* AND_rr */
    705,
    /* AND_rr_32 */
    708,
    /* BE16 */
    711,
    /* BE32 */
    713,
    /* BE64 */
    715,
    /* CMPXCHGD */
    717,
    /* CMPXCHGW32 */
    720,
    /* CORE_ALU32_MEM */
    723,
    /* CORE_MEM */
    727,
    /* CORE_SHIFT */
    731,
    /* DIV_ri */
    735,
    /* DIV_ri_32 */
    738,
    /* DIV_rr */
    741,
    /* DIV_rr_32 */
    744,
    /* JAL */
    747,
    /* JALX */
    748,
    /* JEQ_ri */
    749,
    /* JEQ_ri_32 */
    752,
    /* JEQ_rr */
    755,
    /* JEQ_rr_32 */
    758,
    /* JMP */
    761,
    /* JNE_ri */
    762,
    /* JNE_ri_32 */
    765,
    /* JNE_rr */
    768,
    /* JNE_rr_32 */
    771,
    /* JSGE_ri */
    774,
    /* JSGE_ri_32 */
    777,
    /* JSGE_rr */
    780,
    /* JSGE_rr_32 */
    783,
    /* JSGT_ri */
    786,
    /* JSGT_ri_32 */
    789,
    /* JSGT_rr */
    792,
    /* JSGT_rr_32 */
    795,
    /* JSLE_ri */
    798,
    /* JSLE_ri_32 */
    801,
    /* JSLE_rr */
    804,
    /* JSLE_rr_32 */
    807,
    /* JSLT_ri */
    810,
    /* JSLT_ri_32 */
    813,
    /* JSLT_rr */
    816,
    /* JSLT_rr_32 */
    819,
    /* JUGE_ri */
    822,
    /* JUGE_ri_32 */
    825,
    /* JUGE_rr */
    828,
    /* JUGE_rr_32 */
    831,
    /* JUGT_ri */
    834,
    /* JUGT_ri_32 */
    837,
    /* JUGT_rr */
    840,
    /* JUGT_rr_32 */
    843,
    /* JULE_ri */
    846,
    /* JULE_ri_32 */
    849,
    /* JULE_rr */
    852,
    /* JULE_rr_32 */
    855,
    /* JULT_ri */
    858,
    /* JULT_ri_32 */
    861,
    /* JULT_rr */
    864,
    /* JULT_rr_32 */
    867,
    /* LDB */
    870,
    /* LDB32 */
    873,
    /* LDD */
    876,
    /* LDH */
    879,
    /* LDH32 */
    882,
    /* LDW */
    885,
    /* LDW32 */
    888,
    /* LD_ABS_B */
    891,
    /* LD_ABS_H */
    893,
    /* LD_ABS_W */
    895,
    /* LD_IND_B */
    897,
    /* LD_IND_H */
    899,
    /* LD_IND_W */
    901,
    /* LD_imm64 */
    903,
    /* LD_pseudo */
    905,
    /* LE16 */
    908,
    /* LE32 */
    910,
    /* LE64 */
    912,
    /* MOD_ri */
    914,
    /* MOD_ri_32 */
    917,
    /* MOD_rr */
    920,
    /* MOD_rr_32 */
    923,
    /* MOV_32_64 */
    926,
    /* MOV_ri */
    928,
    /* MOV_ri_32 */
    930,
    /* MOV_rr */
    932,
    /* MOV_rr_32 */
    934,
    /* MUL_ri */
    936,
    /* MUL_ri_32 */
    939,
    /* MUL_rr */
    942,
    /* MUL_rr_32 */
    945,
    /* NEG_32 */
    948,
    /* NEG_64 */
    950,
    /* NOP */
    952,
    /* OR_ri */
    953,
    /* OR_ri_32 */
    956,
    /* OR_rr */
    959,
    /* OR_rr_32 */
    962,
    /* RET */
    965,
    /* SLL_ri */
    965,
    /* SLL_ri_32 */
    968,
    /* SLL_rr */
    971,
    /* SLL_rr_32 */
    974,
    /* SRA_ri */
    977,
    /* SRA_ri_32 */
    980,
    /* SRA_rr */
    983,
    /* SRA_rr_32 */
    986,
    /* SRL_ri */
    989,
    /* SRL_ri_32 */
    992,
    /* SRL_rr */
    995,
    /* SRL_rr_32 */
    998,
    /* STB */
    1001,
    /* STB32 */
    1004,
    /* STD */
    1007,
    /* STH */
    1010,
    /* STH32 */
    1013,
    /* STW */
    1016,
    /* STW32 */
    1019,
    /* SUB_ri */
    1022,
    /* SUB_ri_32 */
    1025,
    /* SUB_rr */
    1028,
    /* SUB_rr_32 */
    1031,
    /* XADDD */
    1034,
    /* XADDW */
    1038,
    /* XADDW32 */
    1042,
    /* XANDD */
    1046,
    /* XANDW32 */
    1050,
    /* XCHGD */
    1054,
    /* XCHGW32 */
    1058,
    /* XFADDD */
    1062,
    /* XFADDW32 */
    1066,
    /* XFANDD */
    1070,
    /* XFANDW32 */
    1074,
    /* XFORD */
    1078,
    /* XFORW32 */
    1082,
    /* XFXORD */
    1086,
    /* XFXORW32 */
    1090,
    /* XORD */
    1094,
    /* XORW32 */
    1098,
    /* XOR_ri */
    1102,
    /* XOR_ri_32 */
    1105,
    /* XOR_rr */
    1108,
    /* XOR_rr_32 */
    1111,
    /* XXORD */
    1114,
    /* XXORW32 */
    1118,
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
    i64imm, i64imm, 
    /* ADJCALLSTACKUP */
    i64imm, i64imm, 
    /* FI_ri */
    GPR, GPR, i16imm, 
    /* MEMCPY */
    GPR, GPR, i64imm, i64imm, 
    /* Select */
    GPR, GPR, GPR, i64imm, GPR, GPR, 
    /* Select_32 */
    GPR32, GPR32, GPR32, i32imm, GPR32, GPR32, 
    /* Select_32_64 */
    GPR, GPR32, GPR32, i32imm, GPR, GPR, 
    /* Select_64_32 */
    GPR32, GPR, GPR, i64imm, GPR32, GPR32, 
    /* Select_Ri */
    GPR, GPR, i64imm, i64imm, GPR, GPR, 
    /* Select_Ri_32 */
    GPR32, GPR32, i32imm, i32imm, GPR32, GPR32, 
    /* Select_Ri_32_64 */
    GPR, GPR32, i32imm, i32imm, GPR, GPR, 
    /* Select_Ri_64_32 */
    GPR32, GPR, i64imm, i64imm, GPR32, GPR32, 
    /* ADD_ri */
    GPR, GPR, i64imm, 
    /* ADD_ri_32 */
    GPR32, GPR32, i32imm, 
    /* ADD_rr */
    GPR, GPR, GPR, 
    /* ADD_rr_32 */
    GPR32, GPR32, GPR32, 
    /* AND_ri */
    GPR, GPR, i64imm, 
    /* AND_ri_32 */
    GPR32, GPR32, i32imm, 
    /* AND_rr */
    GPR, GPR, GPR, 
    /* AND_rr_32 */
    GPR32, GPR32, GPR32, 
    /* BE16 */
    GPR, GPR, 
    /* BE32 */
    GPR, GPR, 
    /* BE64 */
    GPR, GPR, 
    /* CMPXCHGD */
    GPR, i16imm, GPR, 
    /* CMPXCHGW32 */
    GPR, i16imm, GPR32, 
    /* CORE_ALU32_MEM */
    GPR32, u64imm, GPR, u64imm, 
    /* CORE_MEM */
    GPR, u64imm, GPR, u64imm, 
    /* CORE_SHIFT */
    GPR, u64imm, GPR, u64imm, 
    /* DIV_ri */
    GPR, GPR, i64imm, 
    /* DIV_ri_32 */
    GPR32, GPR32, i32imm, 
    /* DIV_rr */
    GPR, GPR, GPR, 
    /* DIV_rr_32 */
    GPR32, GPR32, GPR32, 
    /* JAL */
    calltarget, 
    /* JALX */
    GPR, 
    /* JEQ_ri */
    GPR, i64imm, brtarget, 
    /* JEQ_ri_32 */
    GPR32, i32imm, brtarget, 
    /* JEQ_rr */
    GPR, GPR, brtarget, 
    /* JEQ_rr_32 */
    GPR32, GPR32, brtarget, 
    /* JMP */
    brtarget, 
    /* JNE_ri */
    GPR, i64imm, brtarget, 
    /* JNE_ri_32 */
    GPR32, i32imm, brtarget, 
    /* JNE_rr */
    GPR, GPR, brtarget, 
    /* JNE_rr_32 */
    GPR32, GPR32, brtarget, 
    /* JSGE_ri */
    GPR, i64imm, brtarget, 
    /* JSGE_ri_32 */
    GPR32, i32imm, brtarget, 
    /* JSGE_rr */
    GPR, GPR, brtarget, 
    /* JSGE_rr_32 */
    GPR32, GPR32, brtarget, 
    /* JSGT_ri */
    GPR, i64imm, brtarget, 
    /* JSGT_ri_32 */
    GPR32, i32imm, brtarget, 
    /* JSGT_rr */
    GPR, GPR, brtarget, 
    /* JSGT_rr_32 */
    GPR32, GPR32, brtarget, 
    /* JSLE_ri */
    GPR, i64imm, brtarget, 
    /* JSLE_ri_32 */
    GPR32, i32imm, brtarget, 
    /* JSLE_rr */
    GPR, GPR, brtarget, 
    /* JSLE_rr_32 */
    GPR32, GPR32, brtarget, 
    /* JSLT_ri */
    GPR, i64imm, brtarget, 
    /* JSLT_ri_32 */
    GPR32, i32imm, brtarget, 
    /* JSLT_rr */
    GPR, GPR, brtarget, 
    /* JSLT_rr_32 */
    GPR32, GPR32, brtarget, 
    /* JUGE_ri */
    GPR, i64imm, brtarget, 
    /* JUGE_ri_32 */
    GPR32, i32imm, brtarget, 
    /* JUGE_rr */
    GPR, GPR, brtarget, 
    /* JUGE_rr_32 */
    GPR32, GPR32, brtarget, 
    /* JUGT_ri */
    GPR, i64imm, brtarget, 
    /* JUGT_ri_32 */
    GPR32, i32imm, brtarget, 
    /* JUGT_rr */
    GPR, GPR, brtarget, 
    /* JUGT_rr_32 */
    GPR32, GPR32, brtarget, 
    /* JULE_ri */
    GPR, i64imm, brtarget, 
    /* JULE_ri_32 */
    GPR32, i32imm, brtarget, 
    /* JULE_rr */
    GPR, GPR, brtarget, 
    /* JULE_rr_32 */
    GPR32, GPR32, brtarget, 
    /* JULT_ri */
    GPR, i64imm, brtarget, 
    /* JULT_ri_32 */
    GPR32, i32imm, brtarget, 
    /* JULT_rr */
    GPR, GPR, brtarget, 
    /* JULT_rr_32 */
    GPR32, GPR32, brtarget, 
    /* LDB */
    GPR, GPR, i16imm, 
    /* LDB32 */
    GPR32, GPR, i16imm, 
    /* LDD */
    GPR, GPR, i16imm, 
    /* LDH */
    GPR, GPR, i16imm, 
    /* LDH32 */
    GPR32, GPR, i16imm, 
    /* LDW */
    GPR, GPR, i16imm, 
    /* LDW32 */
    GPR32, GPR, i16imm, 
    /* LD_ABS_B */
    GPR, i64imm, 
    /* LD_ABS_H */
    GPR, i64imm, 
    /* LD_ABS_W */
    GPR, i64imm, 
    /* LD_IND_B */
    GPR, GPR, 
    /* LD_IND_H */
    GPR, GPR, 
    /* LD_IND_W */
    GPR, GPR, 
    /* LD_imm64 */
    GPR, u64imm, 
    /* LD_pseudo */
    GPR, i64imm, u64imm, 
    /* LE16 */
    GPR, GPR, 
    /* LE32 */
    GPR, GPR, 
    /* LE64 */
    GPR, GPR, 
    /* MOD_ri */
    GPR, GPR, i64imm, 
    /* MOD_ri_32 */
    GPR32, GPR32, i32imm, 
    /* MOD_rr */
    GPR, GPR, GPR, 
    /* MOD_rr_32 */
    GPR32, GPR32, GPR32, 
    /* MOV_32_64 */
    GPR, GPR32, 
    /* MOV_ri */
    GPR, i64imm, 
    /* MOV_ri_32 */
    GPR32, i32imm, 
    /* MOV_rr */
    GPR, GPR, 
    /* MOV_rr_32 */
    GPR32, GPR32, 
    /* MUL_ri */
    GPR, GPR, i64imm, 
    /* MUL_ri_32 */
    GPR32, GPR32, i32imm, 
    /* MUL_rr */
    GPR, GPR, GPR, 
    /* MUL_rr_32 */
    GPR32, GPR32, GPR32, 
    /* NEG_32 */
    GPR32, GPR32, 
    /* NEG_64 */
    GPR, GPR, 
    /* NOP */
    i32imm, 
    /* OR_ri */
    GPR, GPR, i64imm, 
    /* OR_ri_32 */
    GPR32, GPR32, i32imm, 
    /* OR_rr */
    GPR, GPR, GPR, 
    /* OR_rr_32 */
    GPR32, GPR32, GPR32, 
    /* RET */
    /* SLL_ri */
    GPR, GPR, i64imm, 
    /* SLL_ri_32 */
    GPR32, GPR32, i32imm, 
    /* SLL_rr */
    GPR, GPR, GPR, 
    /* SLL_rr_32 */
    GPR32, GPR32, GPR32, 
    /* SRA_ri */
    GPR, GPR, i64imm, 
    /* SRA_ri_32 */
    GPR32, GPR32, i32imm, 
    /* SRA_rr */
    GPR, GPR, GPR, 
    /* SRA_rr_32 */
    GPR32, GPR32, GPR32, 
    /* SRL_ri */
    GPR, GPR, i64imm, 
    /* SRL_ri_32 */
    GPR32, GPR32, i32imm, 
    /* SRL_rr */
    GPR, GPR, GPR, 
    /* SRL_rr_32 */
    GPR32, GPR32, GPR32, 
    /* STB */
    GPR, GPR, i16imm, 
    /* STB32 */
    GPR32, GPR, i16imm, 
    /* STD */
    GPR, GPR, i16imm, 
    /* STH */
    GPR, GPR, i16imm, 
    /* STH32 */
    GPR32, GPR, i16imm, 
    /* STW */
    GPR, GPR, i16imm, 
    /* STW32 */
    GPR32, GPR, i16imm, 
    /* SUB_ri */
    GPR, GPR, i64imm, 
    /* SUB_ri_32 */
    GPR32, GPR32, i32imm, 
    /* SUB_rr */
    GPR, GPR, GPR, 
    /* SUB_rr_32 */
    GPR32, GPR32, GPR32, 
    /* XADDD */
    GPR, GPR, i16imm, GPR, 
    /* XADDW */
    GPR, GPR, i16imm, GPR, 
    /* XADDW32 */
    GPR32, GPR, i16imm, GPR32, 
    /* XANDD */
    GPR, GPR, i16imm, GPR, 
    /* XANDW32 */
    GPR32, GPR, i16imm, GPR32, 
    /* XCHGD */
    GPR, GPR, i16imm, GPR, 
    /* XCHGW32 */
    GPR32, GPR, i16imm, GPR32, 
    /* XFADDD */
    GPR, GPR, i16imm, GPR, 
    /* XFADDW32 */
    GPR32, GPR, i16imm, GPR32, 
    /* XFANDD */
    GPR, GPR, i16imm, GPR, 
    /* XFANDW32 */
    GPR32, GPR, i16imm, GPR32, 
    /* XFORD */
    GPR, GPR, i16imm, GPR, 
    /* XFORW32 */
    GPR32, GPR, i16imm, GPR32, 
    /* XFXORD */
    GPR, GPR, i16imm, GPR, 
    /* XFXORW32 */
    GPR32, GPR, i16imm, GPR32, 
    /* XORD */
    GPR, GPR, i16imm, GPR, 
    /* XORW32 */
    GPR32, GPR, i16imm, GPR32, 
    /* XOR_ri */
    GPR, GPR, i64imm, 
    /* XOR_ri_32 */
    GPR32, GPR32, i32imm, 
    /* XOR_rr */
    GPR, GPR, GPR, 
    /* XOR_rr_32 */
    GPR32, GPR32, GPR32, 
    /* XXORD */
    GPR, GPR, i16imm, GPR, 
    /* XXORW32 */
    GPR32, GPR, i16imm, GPR32, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace BPF
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

#ifdef GET_INSTRINFO_MEM_OPERAND_SIZE
#undef GET_INSTRINFO_MEM_OPERAND_SIZE
namespace llvm {
namespace BPF {
LLVM_READONLY
static int getMemOperandSize(int OpType) {
  switch (OpType) {
  default: return 0;
  }
}
} // end namespace BPF
} // end namespace llvm
#endif // GET_INSTRINFO_MEM_OPERAND_SIZE

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
namespace llvm {
namespace BPF {
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
} // end namespace BPF
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
namespace llvm {
namespace BPF {
LLVM_READONLY static int
getLogicalOperandType(uint16_t Opcode, uint16_t LogicalOpIdx) {
  return -1;
}
} // end namespace BPF
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP

#ifdef GET_INSTRINFO_MC_HELPER_DECLS
#undef GET_INSTRINFO_MC_HELPER_DECLS

namespace llvm {
class MCInst;
class FeatureBitset;

namespace BPF_MC {

void verifyInstructionPredicates(unsigned Opcode, const FeatureBitset &Features);

} // end namespace BPF_MC
} // end namespace llvm

#endif // GET_INSTRINFO_MC_HELPER_DECLS

#ifdef GET_INSTRINFO_MC_HELPERS
#undef GET_INSTRINFO_MC_HELPERS

namespace llvm {
namespace BPF_MC {

} // end namespace BPF_MC
} // end namespace llvm

#endif // GET_GENISTRINFO_MC_HELPERS

#ifdef ENABLE_INSTR_PREDICATE_VERIFIER
#undef ENABLE_INSTR_PREDICATE_VERIFIER
#include <sstream>

namespace llvm {
namespace BPF_MC {

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
    CEFBS_None, // ADJCALLSTACKDOWN = 247
    CEFBS_None, // ADJCALLSTACKUP = 248
    CEFBS_None, // FI_ri = 249
    CEFBS_None, // MEMCPY = 250
    CEFBS_None, // Select = 251
    CEFBS_None, // Select_32 = 252
    CEFBS_None, // Select_32_64 = 253
    CEFBS_None, // Select_64_32 = 254
    CEFBS_None, // Select_Ri = 255
    CEFBS_None, // Select_Ri_32 = 256
    CEFBS_None, // Select_Ri_32_64 = 257
    CEFBS_None, // Select_Ri_64_32 = 258
    CEFBS_None, // ADD_ri = 259
    CEFBS_None, // ADD_ri_32 = 260
    CEFBS_None, // ADD_rr = 261
    CEFBS_None, // ADD_rr_32 = 262
    CEFBS_None, // AND_ri = 263
    CEFBS_None, // AND_ri_32 = 264
    CEFBS_None, // AND_rr = 265
    CEFBS_None, // AND_rr_32 = 266
    CEFBS_None, // BE16 = 267
    CEFBS_None, // BE32 = 268
    CEFBS_None, // BE64 = 269
    CEFBS_None, // CMPXCHGD = 270
    CEFBS_None, // CMPXCHGW32 = 271
    CEFBS_None, // CORE_ALU32_MEM = 272
    CEFBS_None, // CORE_MEM = 273
    CEFBS_None, // CORE_SHIFT = 274
    CEFBS_None, // DIV_ri = 275
    CEFBS_None, // DIV_ri_32 = 276
    CEFBS_None, // DIV_rr = 277
    CEFBS_None, // DIV_rr_32 = 278
    CEFBS_None, // JAL = 279
    CEFBS_None, // JALX = 280
    CEFBS_None, // JEQ_ri = 281
    CEFBS_None, // JEQ_ri_32 = 282
    CEFBS_None, // JEQ_rr = 283
    CEFBS_None, // JEQ_rr_32 = 284
    CEFBS_None, // JMP = 285
    CEFBS_None, // JNE_ri = 286
    CEFBS_None, // JNE_ri_32 = 287
    CEFBS_None, // JNE_rr = 288
    CEFBS_None, // JNE_rr_32 = 289
    CEFBS_None, // JSGE_ri = 290
    CEFBS_None, // JSGE_ri_32 = 291
    CEFBS_None, // JSGE_rr = 292
    CEFBS_None, // JSGE_rr_32 = 293
    CEFBS_None, // JSGT_ri = 294
    CEFBS_None, // JSGT_ri_32 = 295
    CEFBS_None, // JSGT_rr = 296
    CEFBS_None, // JSGT_rr_32 = 297
    CEFBS_None, // JSLE_ri = 298
    CEFBS_None, // JSLE_ri_32 = 299
    CEFBS_None, // JSLE_rr = 300
    CEFBS_None, // JSLE_rr_32 = 301
    CEFBS_None, // JSLT_ri = 302
    CEFBS_None, // JSLT_ri_32 = 303
    CEFBS_None, // JSLT_rr = 304
    CEFBS_None, // JSLT_rr_32 = 305
    CEFBS_None, // JUGE_ri = 306
    CEFBS_None, // JUGE_ri_32 = 307
    CEFBS_None, // JUGE_rr = 308
    CEFBS_None, // JUGE_rr_32 = 309
    CEFBS_None, // JUGT_ri = 310
    CEFBS_None, // JUGT_ri_32 = 311
    CEFBS_None, // JUGT_rr = 312
    CEFBS_None, // JUGT_rr_32 = 313
    CEFBS_None, // JULE_ri = 314
    CEFBS_None, // JULE_ri_32 = 315
    CEFBS_None, // JULE_rr = 316
    CEFBS_None, // JULE_rr_32 = 317
    CEFBS_None, // JULT_ri = 318
    CEFBS_None, // JULT_ri_32 = 319
    CEFBS_None, // JULT_rr = 320
    CEFBS_None, // JULT_rr_32 = 321
    CEFBS_None, // LDB = 322
    CEFBS_None, // LDB32 = 323
    CEFBS_None, // LDD = 324
    CEFBS_None, // LDH = 325
    CEFBS_None, // LDH32 = 326
    CEFBS_None, // LDW = 327
    CEFBS_None, // LDW32 = 328
    CEFBS_None, // LD_ABS_B = 329
    CEFBS_None, // LD_ABS_H = 330
    CEFBS_None, // LD_ABS_W = 331
    CEFBS_None, // LD_IND_B = 332
    CEFBS_None, // LD_IND_H = 333
    CEFBS_None, // LD_IND_W = 334
    CEFBS_None, // LD_imm64 = 335
    CEFBS_None, // LD_pseudo = 336
    CEFBS_None, // LE16 = 337
    CEFBS_None, // LE32 = 338
    CEFBS_None, // LE64 = 339
    CEFBS_None, // MOD_ri = 340
    CEFBS_None, // MOD_ri_32 = 341
    CEFBS_None, // MOD_rr = 342
    CEFBS_None, // MOD_rr_32 = 343
    CEFBS_None, // MOV_32_64 = 344
    CEFBS_None, // MOV_ri = 345
    CEFBS_None, // MOV_ri_32 = 346
    CEFBS_None, // MOV_rr = 347
    CEFBS_None, // MOV_rr_32 = 348
    CEFBS_None, // MUL_ri = 349
    CEFBS_None, // MUL_ri_32 = 350
    CEFBS_None, // MUL_rr = 351
    CEFBS_None, // MUL_rr_32 = 352
    CEFBS_None, // NEG_32 = 353
    CEFBS_None, // NEG_64 = 354
    CEFBS_None, // NOP = 355
    CEFBS_None, // OR_ri = 356
    CEFBS_None, // OR_ri_32 = 357
    CEFBS_None, // OR_rr = 358
    CEFBS_None, // OR_rr_32 = 359
    CEFBS_None, // RET = 360
    CEFBS_None, // SLL_ri = 361
    CEFBS_None, // SLL_ri_32 = 362
    CEFBS_None, // SLL_rr = 363
    CEFBS_None, // SLL_rr_32 = 364
    CEFBS_None, // SRA_ri = 365
    CEFBS_None, // SRA_ri_32 = 366
    CEFBS_None, // SRA_rr = 367
    CEFBS_None, // SRA_rr_32 = 368
    CEFBS_None, // SRL_ri = 369
    CEFBS_None, // SRL_ri_32 = 370
    CEFBS_None, // SRL_rr = 371
    CEFBS_None, // SRL_rr_32 = 372
    CEFBS_None, // STB = 373
    CEFBS_None, // STB32 = 374
    CEFBS_None, // STD = 375
    CEFBS_None, // STH = 376
    CEFBS_None, // STH32 = 377
    CEFBS_None, // STW = 378
    CEFBS_None, // STW32 = 379
    CEFBS_None, // SUB_ri = 380
    CEFBS_None, // SUB_ri_32 = 381
    CEFBS_None, // SUB_rr = 382
    CEFBS_None, // SUB_rr_32 = 383
    CEFBS_None, // XADDD = 384
    CEFBS_None, // XADDW = 385
    CEFBS_None, // XADDW32 = 386
    CEFBS_None, // XANDD = 387
    CEFBS_None, // XANDW32 = 388
    CEFBS_None, // XCHGD = 389
    CEFBS_None, // XCHGW32 = 390
    CEFBS_None, // XFADDD = 391
    CEFBS_None, // XFADDW32 = 392
    CEFBS_None, // XFANDD = 393
    CEFBS_None, // XFANDW32 = 394
    CEFBS_None, // XFORD = 395
    CEFBS_None, // XFORW32 = 396
    CEFBS_None, // XFXORD = 397
    CEFBS_None, // XFXORW32 = 398
    CEFBS_None, // XORD = 399
    CEFBS_None, // XORW32 = 400
    CEFBS_None, // XOR_ri = 401
    CEFBS_None, // XOR_ri_32 = 402
    CEFBS_None, // XOR_rr = 403
    CEFBS_None, // XOR_rr_32 = 404
    CEFBS_None, // XXORD = 405
    CEFBS_None, // XXORW32 = 406
  };

  assert(Opcode < 407);
  FeatureBitset AvailableFeatures = computeAvailableFeatures(Features);
  const FeatureBitset &RequiredFeatures = FeatureBitsets[RequiredFeaturesRefs[Opcode]];
  FeatureBitset MissingFeatures =
      (AvailableFeatures & RequiredFeatures) ^
      RequiredFeatures;
  if (MissingFeatures.any()) {
    std::ostringstream Msg;
    Msg << "Attempting to emit " << &BPFInstrNameData[BPFInstrNameIndices[Opcode]]
        << " instruction but the ";
    for (unsigned i = 0, e = MissingFeatures.size(); i != e; ++i)
      if (MissingFeatures.test(i))
        Msg << SubtargetFeatureNames[i] << " ";
    Msg << "predicate(s) are not met";
    report_fatal_error(Msg.str().c_str());
  }
#endif // NDEBUG
}
} // end namespace BPF_MC
} // end namespace llvm
#endif // ENABLE_INSTR_PREDICATE_VERIFIER

