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

namespace Lanai {
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
    ADJDYNALLOC	= 249,
    CALL	= 250,
    CALLR	= 251,
    ADDC_F_I_HI	= 252,
    ADDC_F_I_LO	= 253,
    ADDC_F_R	= 254,
    ADDC_I_HI	= 255,
    ADDC_I_LO	= 256,
    ADDC_R	= 257,
    ADD_F_I_HI	= 258,
    ADD_F_I_LO	= 259,
    ADD_F_R	= 260,
    ADD_I_HI	= 261,
    ADD_I_LO	= 262,
    ADD_R	= 263,
    AND_F_I_HI	= 264,
    AND_F_I_LO	= 265,
    AND_F_R	= 266,
    AND_I_HI	= 267,
    AND_I_LO	= 268,
    AND_R	= 269,
    BRCC	= 270,
    BRIND_CC	= 271,
    BRIND_CCA	= 272,
    BRR	= 273,
    BT	= 274,
    JR	= 275,
    LDADDR	= 276,
    LDBs_RI	= 277,
    LDBs_RR	= 278,
    LDBz_RI	= 279,
    LDBz_RR	= 280,
    LDHs_RI	= 281,
    LDHs_RR	= 282,
    LDHz_RI	= 283,
    LDHz_RR	= 284,
    LDW_RI	= 285,
    LDW_RR	= 286,
    LDWz_RR	= 287,
    LEADZ	= 288,
    LOG0	= 289,
    LOG1	= 290,
    LOG2	= 291,
    LOG3	= 292,
    LOG4	= 293,
    MOVHI	= 294,
    NOP	= 295,
    OR_F_I_HI	= 296,
    OR_F_I_LO	= 297,
    OR_F_R	= 298,
    OR_I_HI	= 299,
    OR_I_LO	= 300,
    OR_R	= 301,
    POPC	= 302,
    RET	= 303,
    SA_F_I	= 304,
    SA_I	= 305,
    SCC	= 306,
    SELECT	= 307,
    SFSUB_F_RI_HI	= 308,
    SFSUB_F_RI_LO	= 309,
    SFSUB_F_RR	= 310,
    SHL_F_R	= 311,
    SHL_R	= 312,
    SLI	= 313,
    SL_F_I	= 314,
    SL_I	= 315,
    SRA_F_R	= 316,
    SRA_R	= 317,
    SRL_F_R	= 318,
    SRL_R	= 319,
    STADDR	= 320,
    STB_RI	= 321,
    STB_RR	= 322,
    STH_RI	= 323,
    STH_RR	= 324,
    SUBB_F_I_HI	= 325,
    SUBB_F_I_LO	= 326,
    SUBB_F_R	= 327,
    SUBB_I_HI	= 328,
    SUBB_I_LO	= 329,
    SUBB_R	= 330,
    SUB_F_I_HI	= 331,
    SUB_F_I_LO	= 332,
    SUB_F_R	= 333,
    SUB_I_HI	= 334,
    SUB_I_LO	= 335,
    SUB_R	= 336,
    SW_RI	= 337,
    SW_RR	= 338,
    TRAILZ	= 339,
    XOR_F_I_HI	= 340,
    XOR_F_I_LO	= 341,
    XOR_F_R	= 342,
    XOR_I_HI	= 343,
    XOR_I_LO	= 344,
    XOR_R	= 345,
    INSTRUCTION_LIST_END = 346
  };

} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace Lanai {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    IIC_ALU_WriteALU	= 1,
    IIC_ALU	= 2,
    IIC_LD_WriteLD	= 3,
    IIC_LDSW_WriteLDSW	= 4,
    WriteLD	= 5,
    IIC_ST_WriteST	= 6,
    IIC_STSW_WriteSTSW	= 7,
    SCHED_LIST_END = 8
  };
} // end namespace Sched
} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { Lanai::SP, 0 };
static const MCPhysReg ImplicitList2[] = { Lanai::RCA, 0 };
static const MCPhysReg ImplicitList3[] = { Lanai::SR, 0 };

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
static const MCOperandInfo OperandInfo46[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc LanaiInsts[] = {
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
  { 247,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo10 },  // Inst #247 = ADJCALLSTACKDOWN
  { 248,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo10 },  // Inst #248 = ADJCALLSTACKUP
  { 249,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo46 },  // Inst #249 = ADJDYNALLOC
  { 250,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo2 },  // Inst #250 = CALL
  { 251,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo47 },  // Inst #251 = CALLR
  { 252,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo48 },  // Inst #252 = ADDC_F_I_HI
  { 253,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo48 },  // Inst #253 = ADDC_F_I_LO
  { 254,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo49 },  // Inst #254 = ADDC_F_R
  { 255,	3,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo48 },  // Inst #255 = ADDC_I_HI
  { 256,	3,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo48 },  // Inst #256 = ADDC_I_LO
  { 257,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo49 },  // Inst #257 = ADDC_R
  { 258,	3,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo48 },  // Inst #258 = ADD_F_I_HI
  { 259,	3,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo48 },  // Inst #259 = ADD_F_I_LO
  { 260,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo49 },  // Inst #260 = ADD_F_R
  { 261,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #261 = ADD_I_HI
  { 262,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #262 = ADD_I_LO
  { 263,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #263 = ADD_R
  { 264,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo48 },  // Inst #264 = AND_F_I_HI
  { 265,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo48 },  // Inst #265 = AND_F_I_LO
  { 266,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo49 },  // Inst #266 = AND_F_R
  { 267,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #267 = AND_I_HI
  { 268,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #268 = AND_I_LO
  { 269,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #269 = AND_R
  { 270,	2,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo7 },  // Inst #270 = BRCC
  { 271,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo50 },  // Inst #271 = BRIND_CC
  { 272,	3,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo48 },  // Inst #272 = BRIND_CCA
  { 273,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo51 },  // Inst #273 = BRR
  { 274,	1,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #274 = BT
  { 275,	1,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #275 = JR
  { 276,	2,	1,	4,	3,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #276 = LDADDR
  { 277,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #277 = LDBs_RI
  { 278,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #278 = LDBs_RR
  { 279,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #279 = LDBz_RI
  { 280,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #280 = LDBz_RR
  { 281,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #281 = LDHs_RI
  { 282,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #282 = LDHs_RR
  { 283,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #283 = LDHz_RI
  { 284,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #284 = LDHz_RR
  { 285,	4,	1,	4,	3,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #285 = LDW_RI
  { 286,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #286 = LDW_RR
  { 287,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #287 = LDWz_RR
  { 288,	2,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #288 = LEADZ
  { 289,	0,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #289 = LOG0
  { 290,	0,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #290 = LOG1
  { 291,	0,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #291 = LOG2
  { 292,	0,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #292 = LOG3
  { 293,	0,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #293 = LOG4
  { 294,	2,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #294 = MOVHI
  { 295,	0,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #295 = NOP
  { 296,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo48 },  // Inst #296 = OR_F_I_HI
  { 297,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo48 },  // Inst #297 = OR_F_I_LO
  { 298,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo49 },  // Inst #298 = OR_F_R
  { 299,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #299 = OR_I_HI
  { 300,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #300 = OR_I_LO
  { 301,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #301 = OR_R
  { 302,	2,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #302 = POPC
  { 303,	0,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, nullptr, nullptr },  // Inst #303 = RET
  { 304,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo48 },  // Inst #304 = SA_F_I
  { 305,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #305 = SA_I
  { 306,	2,	1,	4,	2,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo50 },  // Inst #306 = SCC
  { 307,	4,	1,	4,	1,	0|(1ULL<<MCID::Select)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo54 },  // Inst #307 = SELECT
  { 308,	2,	0,	4,	1,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo50 },  // Inst #308 = SFSUB_F_RI_HI
  { 309,	2,	0,	4,	1,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo50 },  // Inst #309 = SFSUB_F_RI_LO
  { 310,	2,	0,	4,	1,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo46 },  // Inst #310 = SFSUB_F_RR
  { 311,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo49 },  // Inst #311 = SHL_F_R
  { 312,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #312 = SHL_R
  { 313,	2,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #313 = SLI
  { 314,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo48 },  // Inst #314 = SL_F_I
  { 315,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #315 = SL_I
  { 316,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo49 },  // Inst #316 = SRA_F_R
  { 317,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #317 = SRA_R
  { 318,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo49 },  // Inst #318 = SRL_F_R
  { 319,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #319 = SRL_R
  { 320,	2,	0,	4,	6,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #320 = STADDR
  { 321,	4,	0,	4,	7,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #321 = STB_RI
  { 322,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #322 = STB_RR
  { 323,	4,	0,	4,	7,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #323 = STH_RI
  { 324,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #324 = STH_RR
  { 325,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo48 },  // Inst #325 = SUBB_F_I_HI
  { 326,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo48 },  // Inst #326 = SUBB_F_I_LO
  { 327,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo49 },  // Inst #327 = SUBB_F_R
  { 328,	3,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo48 },  // Inst #328 = SUBB_I_HI
  { 329,	3,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo48 },  // Inst #329 = SUBB_I_LO
  { 330,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo49 },  // Inst #330 = SUBB_R
  { 331,	3,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo48 },  // Inst #331 = SUB_F_I_HI
  { 332,	3,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo48 },  // Inst #332 = SUB_F_I_LO
  { 333,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo49 },  // Inst #333 = SUB_F_R
  { 334,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #334 = SUB_I_HI
  { 335,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #335 = SUB_I_LO
  { 336,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #336 = SUB_R
  { 337,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #337 = SW_RI
  { 338,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #338 = SW_RR
  { 339,	2,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #339 = TRAILZ
  { 340,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo48 },  // Inst #340 = XOR_F_I_HI
  { 341,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo48 },  // Inst #341 = XOR_F_I_LO
  { 342,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo49 },  // Inst #342 = XOR_F_R
  { 343,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #343 = XOR_I_HI
  { 344,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #344 = XOR_I_LO
  { 345,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #345 = XOR_R
};

extern const char LanaiInstrNameData[] = {
  /* 0 */ 'G', '_', 'F', 'L', 'O', 'G', '1', '0', 0,
  /* 9 */ 'L', 'O', 'G', '0', 0,
  /* 14 */ 'L', 'O', 'G', '1', 0,
  /* 19 */ 'G', '_', 'F', 'L', 'O', 'G', '2', 0,
  /* 27 */ 'G', '_', 'F', 'E', 'X', 'P', '2', 0,
  /* 35 */ 'L', 'O', 'G', '3', 0,
  /* 40 */ 'L', 'O', 'G', '4', 0,
  /* 45 */ 'B', 'R', 'I', 'N', 'D', '_', 'C', 'C', 'A', 0,
  /* 55 */ 'G', '_', 'F', 'M', 'A', 0,
  /* 61 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'M', 'A', 0,
  /* 74 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 81 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'S', 'U', 'B', 0,
  /* 95 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'S', 'U', 'B', 0,
  /* 112 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 118 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'S', 'U', 'B', 0,
  /* 134 */ 'B', 'R', 'C', 'C', 0,
  /* 139 */ 'S', 'C', 'C', 0,
  /* 143 */ 'B', 'R', 'I', 'N', 'D', '_', 'C', 'C', 0,
  /* 152 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 164 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 174 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 192 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 200 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 221 */ 'G', '_', 'D', 'Y', 'N', '_', 'S', 'T', 'A', 'C', 'K', 'A', 'L', 'L', 'O', 'C', 0,
  /* 238 */ 'A', 'D', 'J', 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', 0,
  /* 250 */ 'P', 'O', 'P', 'C', 0,
  /* 255 */ 'G', '_', 'F', 'M', 'A', 'D', 0,
  /* 262 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 281 */ 'G', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 292 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 311 */ 'G', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 322 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'L', 'O', 'A', 'D', 0,
  /* 337 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 344 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'F', 'A', 'D', 'D', 0,
  /* 361 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 368 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'S', 'E', 'Q', '_', 'F', 'A', 'D', 'D', 0,
  /* 389 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'A', 'D', 'D', 0,
  /* 403 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'A', 'D', 'D', 0,
  /* 420 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'A', 'D', 'D', 0,
  /* 436 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 442 */ 'G', '_', 'P', 'T', 'R', '_', 'A', 'D', 'D', 0,
  /* 452 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'D', 'D', 0,
  /* 468 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'N', 'A', 'N', 'D', 0,
  /* 485 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'A', 'N', 'D', 0,
  /* 501 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 507 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'N', 'D', 0,
  /* 523 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 536 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 545 */ 'G', '_', 'L', 'L', 'R', 'O', 'U', 'N', 'D', 0,
  /* 555 */ 'G', '_', 'L', 'R', 'O', 'U', 'N', 'D', 0,
  /* 564 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'R', 'O', 'U', 'N', 'D', 0,
  /* 582 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', '_', 'R', 'O', 'U', 'N', 'D', 0,
  /* 608 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 625 */ 'P', 'S', 'E', 'U', 'D', 'O', '_', 'P', 'R', 'O', 'B', 'E', 0,
  /* 638 */ 'G', '_', 'S', 'S', 'U', 'B', 'E', 0,
  /* 646 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 654 */ 'G', '_', 'F', 'E', 'N', 'C', 'E', 0,
  /* 662 */ 'A', 'R', 'I', 'T', 'H', '_', 'F', 'E', 'N', 'C', 'E', 0,
  /* 674 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 687 */ 'G', '_', 'S', 'A', 'D', 'D', 'E', 0,
  /* 695 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 703 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 718 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 733 */ 'G', '_', 'J', 'U', 'M', 'P', '_', 'T', 'A', 'B', 'L', 'E', 0,
  /* 746 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 753 */ 'G', '_', 'M', 'E', 'M', 'C', 'P', 'Y', '_', 'I', 'N', 'L', 'I', 'N', 'E', 0,
  /* 769 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 782 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 798 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 806 */ 'G', '_', 'B', 'I', 'T', 'R', 'E', 'V', 'E', 'R', 'S', 'E', 0,
  /* 819 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 829 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 844 */ 'G', '_', 'M', 'E', 'M', 'M', 'O', 'V', 'E', 0,
  /* 854 */ 'G', '_', 'F', 'R', 'E', 'E', 'Z', 'E', 0,
  /* 863 */ 'G', '_', 'F', 'C', 'A', 'N', 'O', 'N', 'I', 'C', 'A', 'L', 'I', 'Z', 'E', 0,
  /* 879 */ 'G', '_', 'C', 'T', 'L', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 897 */ 'G', '_', 'C', 'T', 'T', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 915 */ 'G', '_', 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 930 */ 'D', 'B', 'G', '_', 'I', 'N', 'S', 'T', 'R', '_', 'R', 'E', 'F', 0,
  /* 944 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 951 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 966 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 980 */ 'G', '_', 'S', 'E', 'X', 'T', '_', 'I', 'N', 'R', 'E', 'G', 0,
  /* 993 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 1007 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', 0,
  /* 1024 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'C', 'H', 'G', 0,
  /* 1041 */ 'G', '_', 'F', 'L', 'O', 'G', 0,
  /* 1048 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 1056 */ 'P', 'R', 'E', 'A', 'L', 'L', 'O', 'C', 'A', 'T', 'E', 'D', '_', 'A', 'R', 'G', 0,
  /* 1073 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 1081 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 1089 */ 'D', 'B', 'G', '_', 'P', 'H', 'I', 0,
  /* 1097 */ 'M', 'O', 'V', 'H', 'I', 0,
  /* 1103 */ 'S', 'F', 'S', 'U', 'B', '_', 'F', '_', 'R', 'I', '_', 'H', 'I', 0,
  /* 1117 */ 'S', 'U', 'B', 'B', '_', 'I', '_', 'H', 'I', 0,
  /* 1127 */ 'S', 'U', 'B', '_', 'I', '_', 'H', 'I', 0,
  /* 1136 */ 'A', 'D', 'D', 'C', '_', 'I', '_', 'H', 'I', 0,
  /* 1146 */ 'A', 'D', 'D', '_', 'I', '_', 'H', 'I', 0,
  /* 1155 */ 'A', 'N', 'D', '_', 'I', '_', 'H', 'I', 0,
  /* 1164 */ 'S', 'U', 'B', 'B', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 1176 */ 'S', 'U', 'B', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 1187 */ 'A', 'D', 'D', 'C', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 1199 */ 'A', 'D', 'D', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 1210 */ 'A', 'N', 'D', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 1221 */ 'X', 'O', 'R', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 1232 */ 'X', 'O', 'R', '_', 'I', '_', 'H', 'I', 0,
  /* 1241 */ 'S', 'L', 'I', 0,
  /* 1245 */ 'S', 'T', 'B', '_', 'R', 'I', 0,
  /* 1252 */ 'S', 'T', 'H', '_', 'R', 'I', 0,
  /* 1259 */ 'L', 'D', 'W', '_', 'R', 'I', 0,
  /* 1266 */ 'S', 'W', '_', 'R', 'I', 0,
  /* 1272 */ 'L', 'D', 'B', 's', '_', 'R', 'I', 0,
  /* 1280 */ 'L', 'D', 'H', 's', '_', 'R', 'I', 0,
  /* 1288 */ 'L', 'D', 'B', 'z', '_', 'R', 'I', 0,
  /* 1296 */ 'L', 'D', 'H', 'z', '_', 'R', 'I', 0,
  /* 1304 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 1313 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 1322 */ 'G', '_', 'F', 'P', 'O', 'W', 'I', 0,
  /* 1330 */ 'S', 'A', '_', 'I', 0,
  /* 1335 */ 'S', 'A', '_', 'F', '_', 'I', 0,
  /* 1342 */ 'S', 'L', '_', 'F', '_', 'I', 0,
  /* 1349 */ 'S', 'L', '_', 'I', 0,
  /* 1354 */ 'G', '_', 'P', 'T', 'R', 'M', 'A', 'S', 'K', 0,
  /* 1364 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1373 */ 'D', 'B', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1383 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1392 */ 'A', 'N', 'N', 'O', 'T', 'A', 'T', 'I', 'O', 'N', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1409 */ 'I', 'C', 'A', 'L', 'L', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'F', 'U', 'N', 'N', 'E', 'L', 0,
  /* 1429 */ 'G', '_', 'F', 'S', 'H', 'L', 0,
  /* 1436 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 1442 */ 'G', '_', 'F', 'C', 'E', 'I', 'L', 0,
  /* 1450 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 1470 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'Y', 'P', 'E', 'D', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 1497 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 1518 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 1530 */ 'K', 'I', 'L', 'L', 0,
  /* 1535 */ 'G', '_', 'R', 'O', 'T', 'L', 0,
  /* 1542 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'F', 'M', 'U', 'L', 0,
  /* 1559 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 1566 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'S', 'E', 'Q', '_', 'F', 'M', 'U', 'L', 0,
  /* 1587 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'M', 'U', 'L', 0,
  /* 1601 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'M', 'U', 'L', 0,
  /* 1617 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 1623 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 1630 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'R', 'E', 'M', 0,
  /* 1644 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 1651 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 1658 */ 'G', '_', 'S', 'D', 'I', 'V', 'R', 'E', 'M', 0,
  /* 1668 */ 'G', '_', 'U', 'D', 'I', 'V', 'R', 'E', 'M', 0,
  /* 1678 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 1688 */ 'G', '_', 'F', 'M', 'I', 'N', 'I', 'M', 'U', 'M', 0,
  /* 1699 */ 'G', '_', 'F', 'M', 'A', 'X', 'I', 'M', 'U', 'M', 0,
  /* 1710 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', 0,
  /* 1720 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', 0,
  /* 1730 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'R', 'O', 'U', 'N', 'D', 'E', 'V', 'E', 'N', 0,
  /* 1752 */ 'G', '_', 'A', 'S', 'S', 'E', 'R', 'T', '_', 'A', 'L', 'I', 'G', 'N', 0,
  /* 1767 */ 'G', '_', 'F', 'C', 'O', 'P', 'Y', 'S', 'I', 'G', 'N', 0,
  /* 1779 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'F', 'M', 'I', 'N', 0,
  /* 1796 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'M', 'I', 'N', 0,
  /* 1813 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'S', 'M', 'I', 'N', 0,
  /* 1830 */ 'G', '_', 'S', 'M', 'I', 'N', 0,
  /* 1837 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'U', 'M', 'I', 'N', 0,
  /* 1854 */ 'G', '_', 'U', 'M', 'I', 'N', 0,
  /* 1861 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'I', 'N', 0,
  /* 1878 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'I', 'N', 0,
  /* 1894 */ 'G', '_', 'F', 'S', 'I', 'N', 0,
  /* 1901 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 1917 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 1934 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 1942 */ 'G', '_', 'U', 'S', 'U', 'B', 'O', 0,
  /* 1950 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 1958 */ 'G', '_', 'U', 'A', 'D', 'D', 'O', 0,
  /* 1966 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 1974 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 1982 */ 'S', 'F', 'S', 'U', 'B', '_', 'F', '_', 'R', 'I', '_', 'L', 'O', 0,
  /* 1996 */ 'S', 'U', 'B', 'B', '_', 'I', '_', 'L', 'O', 0,
  /* 2006 */ 'S', 'U', 'B', '_', 'I', '_', 'L', 'O', 0,
  /* 2015 */ 'A', 'D', 'D', 'C', '_', 'I', '_', 'L', 'O', 0,
  /* 2025 */ 'A', 'D', 'D', '_', 'I', '_', 'L', 'O', 0,
  /* 2034 */ 'A', 'N', 'D', '_', 'I', '_', 'L', 'O', 0,
  /* 2043 */ 'S', 'U', 'B', 'B', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 2055 */ 'S', 'U', 'B', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 2066 */ 'A', 'D', 'D', 'C', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 2078 */ 'A', 'D', 'D', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 2089 */ 'A', 'N', 'D', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 2100 */ 'X', 'O', 'R', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 2111 */ 'X', 'O', 'R', '_', 'I', '_', 'L', 'O', 0,
  /* 2120 */ 'G', '_', 'B', 'Z', 'E', 'R', 'O', 0,
  /* 2128 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 2137 */ 'G', '_', 'B', 'S', 'W', 'A', 'P', 0,
  /* 2145 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 2154 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 2163 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 2170 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 2177 */ 'N', 'O', 'P', 0,
  /* 2181 */ 'G', '_', 'C', 'T', 'P', 'O', 'P', 0,
  /* 2189 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 2202 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 2214 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 2229 */ 'P', 'R', 'E', 'A', 'L', 'L', 'O', 'C', 'A', 'T', 'E', 'D', '_', 'S', 'E', 'T', 'U', 'P', 0,
  /* 2248 */ 'G', '_', 'F', 'E', 'X', 'P', 0,
  /* 2255 */ 'G', '_', 'B', 'R', 0,
  /* 2260 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', '_', 'B', 'R', 0,
  /* 2273 */ 'L', 'D', 'A', 'D', 'D', 'R', 0,
  /* 2280 */ 'S', 'T', 'A', 'D', 'D', 'R', 0,
  /* 2287 */ 'G', '_', 'B', 'L', 'O', 'C', 'K', '_', 'A', 'D', 'D', 'R', 0,
  /* 2300 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 2325 */ 'G', '_', 'R', 'E', 'A', 'D', 'C', 'Y', 'C', 'L', 'E', 'C', 'O', 'U', 'N', 'T', 'E', 'R', 0,
  /* 2344 */ 'G', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'G', 'I', 'S', 'T', 'E', 'R', 0,
  /* 2360 */ 'G', '_', 'W', 'R', 'I', 'T', 'E', '_', 'R', 'E', 'G', 'I', 'S', 'T', 'E', 'R', 0,
  /* 2377 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 2384 */ 'G', '_', 'F', 'S', 'H', 'R', 0,
  /* 2391 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 2398 */ 'J', 'R', 0,
  /* 2401 */ 'C', 'A', 'L', 'L', 'R', 0,
  /* 2407 */ 'G', '_', 'F', 'F', 'L', 'O', 'O', 'R', 0,
  /* 2416 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 2431 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 2448 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'X', 'O', 'R', 0,
  /* 2464 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 2470 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'O', 'R', 0,
  /* 2486 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'O', 'R', 0,
  /* 2501 */ 'G', '_', 'O', 'R', 0,
  /* 2506 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'O', 'R', 0,
  /* 2521 */ 'B', 'R', 'R', 0,
  /* 2525 */ 'S', 'T', 'B', '_', 'R', 'R', 0,
  /* 2532 */ 'S', 'F', 'S', 'U', 'B', '_', 'F', '_', 'R', 'R', 0,
  /* 2543 */ 'S', 'T', 'H', '_', 'R', 'R', 0,
  /* 2550 */ 'L', 'D', 'W', '_', 'R', 'R', 0,
  /* 2557 */ 'S', 'W', '_', 'R', 'R', 0,
  /* 2563 */ 'L', 'D', 'B', 's', '_', 'R', 'R', 0,
  /* 2571 */ 'L', 'D', 'H', 's', '_', 'R', 'R', 0,
  /* 2579 */ 'L', 'D', 'B', 'z', '_', 'R', 'R', 0,
  /* 2587 */ 'L', 'D', 'H', 'z', '_', 'R', 'R', 0,
  /* 2595 */ 'L', 'D', 'W', 'z', '_', 'R', 'R', 0,
  /* 2603 */ 'G', '_', 'R', 'O', 'T', 'R', 0,
  /* 2610 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 2621 */ 'S', 'R', 'A', '_', 'R', 0,
  /* 2627 */ 'S', 'U', 'B', 'B', '_', 'R', 0,
  /* 2634 */ 'S', 'U', 'B', '_', 'R', 0,
  /* 2640 */ 'A', 'D', 'D', 'C', '_', 'R', 0,
  /* 2647 */ 'A', 'D', 'D', '_', 'R', 0,
  /* 2653 */ 'A', 'N', 'D', '_', 'R', 0,
  /* 2659 */ 'S', 'R', 'A', '_', 'F', '_', 'R', 0,
  /* 2667 */ 'S', 'U', 'B', 'B', '_', 'F', '_', 'R', 0,
  /* 2676 */ 'S', 'U', 'B', '_', 'F', '_', 'R', 0,
  /* 2684 */ 'A', 'D', 'D', 'C', '_', 'F', '_', 'R', 0,
  /* 2693 */ 'A', 'D', 'D', '_', 'F', '_', 'R', 0,
  /* 2701 */ 'A', 'N', 'D', '_', 'F', '_', 'R', 0,
  /* 2709 */ 'S', 'H', 'L', '_', 'F', '_', 'R', 0,
  /* 2717 */ 'S', 'R', 'L', '_', 'F', '_', 'R', 0,
  /* 2725 */ 'X', 'O', 'R', '_', 'F', '_', 'R', 0,
  /* 2733 */ 'S', 'H', 'L', '_', 'R', 0,
  /* 2739 */ 'S', 'R', 'L', '_', 'R', 0,
  /* 2745 */ 'X', 'O', 'R', '_', 'R', 0,
  /* 2751 */ 'G', '_', 'F', 'A', 'B', 'S', 0,
  /* 2758 */ 'G', '_', 'A', 'B', 'S', 0,
  /* 2764 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 2781 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 2796 */ 'G', '_', 'F', 'C', 'O', 'S', 0,
  /* 2803 */ 'G', '_', 'C', 'O', 'N', 'C', 'A', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', 'S', 0,
  /* 2820 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 2837 */ 'G', '_', 'I', 'S', '_', 'F', 'P', 'C', 'L', 'A', 'S', 'S', 0,
  /* 2850 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'W', 'I', 'T', 'H', '_', 'S', 'U', 'C', 'C', 'E', 'S', 'S', 0,
  /* 2880 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 2907 */ 'G', '_', 'S', 'S', 'U', 'B', 'S', 'A', 'T', 0,
  /* 2917 */ 'G', '_', 'U', 'S', 'U', 'B', 'S', 'A', 'T', 0,
  /* 2927 */ 'G', '_', 'S', 'A', 'D', 'D', 'S', 'A', 'T', 0,
  /* 2937 */ 'G', '_', 'U', 'A', 'D', 'D', 'S', 'A', 'T', 0,
  /* 2947 */ 'G', '_', 'S', 'S', 'H', 'L', 'S', 'A', 'T', 0,
  /* 2957 */ 'G', '_', 'U', 'S', 'H', 'L', 'S', 'A', 'T', 0,
  /* 2967 */ 'G', '_', 'S', 'M', 'U', 'L', 'F', 'I', 'X', 'S', 'A', 'T', 0,
  /* 2980 */ 'G', '_', 'U', 'M', 'U', 'L', 'F', 'I', 'X', 'S', 'A', 'T', 0,
  /* 2993 */ 'G', '_', 'S', 'D', 'I', 'V', 'F', 'I', 'X', 'S', 'A', 'T', 0,
  /* 3006 */ 'G', '_', 'U', 'D', 'I', 'V', 'F', 'I', 'X', 'S', 'A', 'T', 0,
  /* 3019 */ 'B', 'T', 0,
  /* 3022 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 3032 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 3041 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 3054 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 3068 */ 'G', '_', 'M', 'E', 'M', 'S', 'E', 'T', 0,
  /* 3077 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 3101 */ 'G', '_', 'B', 'R', 'J', 'T', 0,
  /* 3108 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 3129 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 3149 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 3161 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 3172 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 3183 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 3194 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 3205 */ 'G', '_', 'F', 'R', 'I', 'N', 'T', 0,
  /* 3213 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'L', 'R', 'I', 'N', 'T', 0,
  /* 3231 */ 'G', '_', 'F', 'N', 'E', 'A', 'R', 'B', 'Y', 'I', 'N', 'T', 0,
  /* 3244 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 3254 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 3269 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 3278 */ 'G', '_', 'F', 'S', 'Q', 'R', 'T', 0,
  /* 3286 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'S', 'Q', 'R', 'T', 0,
  /* 3301 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 3311 */ 'G', '_', 'A', 'D', 'D', 'R', 'S', 'P', 'A', 'C', 'E', '_', 'C', 'A', 'S', 'T', 0,
  /* 3328 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', '_', 'L', 'I', 'S', 'T', 0,
  /* 3343 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 3351 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 3358 */ 'G', '_', 'A', 'S', 'S', 'E', 'R', 'T', '_', 'S', 'E', 'X', 'T', 0,
  /* 3372 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 3381 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 3388 */ 'G', '_', 'A', 'S', 'S', 'E', 'R', 'T', '_', 'Z', 'E', 'X', 'T', 0,
  /* 3402 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 3409 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'D', 'I', 'V', 0,
  /* 3423 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 3430 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 3437 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 3444 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'F', 'M', 'A', 'X', 0,
  /* 3461 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'M', 'A', 'X', 0,
  /* 3478 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'S', 'M', 'A', 'X', 0,
  /* 3495 */ 'G', '_', 'S', 'M', 'A', 'X', 0,
  /* 3502 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'U', 'M', 'A', 'X', 0,
  /* 3519 */ 'G', '_', 'U', 'M', 'A', 'X', 0,
  /* 3526 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'A', 'X', 0,
  /* 3543 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'A', 'X', 0,
  /* 3559 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 3573 */ 'G', '_', 'S', 'B', 'F', 'X', 0,
  /* 3580 */ 'G', '_', 'U', 'B', 'F', 'X', 0,
  /* 3587 */ 'G', '_', 'S', 'M', 'U', 'L', 'F', 'I', 'X', 0,
  /* 3597 */ 'G', '_', 'U', 'M', 'U', 'L', 'F', 'I', 'X', 0,
  /* 3607 */ 'G', '_', 'S', 'D', 'I', 'V', 'F', 'I', 'X', 0,
  /* 3617 */ 'G', '_', 'U', 'D', 'I', 'V', 'F', 'I', 'X', 0,
  /* 3627 */ 'G', '_', 'M', 'E', 'M', 'C', 'P', 'Y', 0,
  /* 3636 */ 'C', 'O', 'P', 'Y', 0,
  /* 3641 */ 'L', 'E', 'A', 'D', 'Z', 0,
  /* 3647 */ 'T', 'R', 'A', 'I', 'L', 'Z', 0,
  /* 3654 */ 'G', '_', 'C', 'T', 'L', 'Z', 0,
  /* 3661 */ 'G', '_', 'C', 'T', 'T', 'Z', 0,
  0
};

extern const unsigned LanaiInstrNameIndices[] = {
    1093U, 1678U, 2260U, 1901U, 1383U, 1364U, 1392U, 1530U, 
    951U, 966U, 917U, 993U, 2820U, 819U, 3328U, 930U, 
    1089U, 1373U, 674U, 3636U, 746U, 3254U, 523U, 625U, 
    662U, 2128U, 1518U, 3183U, 608U, 2229U, 1056U, 3172U, 
    769U, 2202U, 2189U, 2300U, 3054U, 3077U, 1450U, 1497U, 
    1470U, 1409U, 3358U, 3388U, 1752U, 436U, 112U, 1617U, 
    3423U, 3430U, 1644U, 1651U, 1658U, 1668U, 501U, 2501U, 
    2464U, 915U, 1091U, 3559U, 829U, 3022U, 2764U, 3269U, 
    2781U, 2416U, 200U, 2803U, 3194U, 2610U, 3301U, 854U, 
    582U, 174U, 564U, 3213U, 1730U, 2325U, 337U, 281U, 
    311U, 322U, 262U, 292U, 798U, 782U, 2850U, 1007U, 
    1024U, 452U, 118U, 507U, 468U, 2506U, 2470U, 3543U, 
    1878U, 3526U, 1861U, 403U, 95U, 3461U, 1796U, 654U, 
    536U, 3041U, 152U, 2880U, 3372U, 192U, 3161U, 3149U, 
    3244U, 1048U, 3351U, 980U, 3381U, 1436U, 2391U, 2377U, 
    1429U, 2384U, 2603U, 1535U, 2170U, 2163U, 3032U, 1958U, 
    695U, 1942U, 646U, 1950U, 687U, 1934U, 638U, 1974U, 
    1966U, 1081U, 1073U, 2937U, 2927U, 2917U, 2907U, 2957U, 
    2947U, 3587U, 3597U, 2967U, 2980U, 3607U, 3617U, 2993U, 
    3006U, 361U, 74U, 1559U, 55U, 255U, 3402U, 1623U, 
    3437U, 1322U, 2248U, 27U, 1041U, 19U, 0U, 944U, 
    3343U, 164U, 1304U, 1313U, 2145U, 2154U, 2751U, 1767U, 
    2837U, 863U, 1710U, 1720U, 703U, 718U, 1688U, 1699U, 
    442U, 1354U, 1830U, 3495U, 1854U, 3519U, 2758U, 555U, 
    545U, 2255U, 3101U, 3129U, 3108U, 2431U, 3661U, 897U, 
    3654U, 879U, 2181U, 2137U, 806U, 1442U, 2796U, 1894U, 
    3278U, 2407U, 3205U, 3231U, 3311U, 2287U, 733U, 221U, 
    389U, 81U, 1587U, 3409U, 1630U, 61U, 3286U, 2344U, 
    2360U, 3627U, 753U, 844U, 3068U, 2120U, 368U, 1566U, 
    344U, 1542U, 3444U, 1779U, 420U, 1601U, 485U, 2486U, 
    2448U, 3478U, 1813U, 3502U, 1837U, 3573U, 3580U, 1917U, 
    2214U, 238U, 1465U, 2401U, 1187U, 2066U, 2684U, 1136U, 
    2015U, 2640U, 1199U, 2078U, 2693U, 1146U, 2025U, 2647U, 
    1210U, 2089U, 2701U, 1155U, 2034U, 2653U, 134U, 143U, 
    45U, 2521U, 3019U, 2398U, 2273U, 1272U, 2563U, 1288U, 
    2579U, 1280U, 2571U, 1296U, 2587U, 1259U, 2550U, 2595U, 
    3641U, 9U, 14U, 22U, 35U, 40U, 1097U, 2177U, 
    1222U, 2101U, 2726U, 1233U, 2112U, 2746U, 250U, 3064U, 
    1335U, 1330U, 139U, 3034U, 1103U, 1982U, 2532U, 2709U, 
    2733U, 1241U, 1342U, 1349U, 2659U, 2621U, 2717U, 2739U, 
    2280U, 1245U, 2525U, 1252U, 2543U, 1164U, 2043U, 2667U, 
    1117U, 1996U, 2627U, 1176U, 2055U, 2676U, 1127U, 2006U, 
    2634U, 1266U, 2557U, 3647U, 1221U, 2100U, 2725U, 1232U, 
    2111U, 2745U, 
};

static inline void InitLanaiMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(LanaiInsts, LanaiInstrNameIndices, LanaiInstrNameData, nullptr, nullptr, 346);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct LanaiGenInstrInfo : public TargetInstrInfo {
  explicit LanaiGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~LanaiGenInstrInfo() override = default;

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
extern const MCInstrDesc LanaiInsts[];
extern const unsigned LanaiInstrNameIndices[];
extern const char LanaiInstrNameData[];
LanaiGenInstrInfo::LanaiGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(LanaiInsts, LanaiInstrNameIndices, LanaiInstrNameData, nullptr, nullptr, 346);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace Lanai {
namespace OpName {
enum {
  OPERAND_LAST
};
} // end namespace OpName
} // end namespace Lanai
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace Lanai {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace Lanai
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace Lanai {
namespace OpTypes {
enum OperandType {
  AluOp = 0,
  BrTarget = 1,
  CCOp = 2,
  CallTarget = 3,
  MEMi = 4,
  MEMri = 5,
  MEMrr = 6,
  MEMspls = 7,
  f32imm = 8,
  f64imm = 9,
  i16imm = 10,
  i1imm = 11,
  i32hi16 = 12,
  i32hi16and = 13,
  i32imm = 14,
  i32lo16and = 15,
  i32lo16s = 16,
  i32lo16z = 17,
  i32lo21 = 18,
  i32neg16 = 19,
  i64imm = 20,
  i8imm = 21,
  imm10 = 22,
  immShift = 23,
  pred = 24,
  ptype0 = 25,
  ptype1 = 26,
  ptype2 = 27,
  ptype3 = 28,
  ptype4 = 29,
  ptype5 = 30,
  type0 = 31,
  type1 = 32,
  type2 = 33,
  type3 = 34,
  type4 = 35,
  type5 = 36,
  untyped_imm_0 = 37,
  CCR = 38,
  GPR = 39,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace Lanai {
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
    /* ADJDYNALLOC */
    632,
    /* CALL */
    634,
    /* CALLR */
    635,
    /* ADDC_F_I_HI */
    636,
    /* ADDC_F_I_LO */
    639,
    /* ADDC_F_R */
    642,
    /* ADDC_I_HI */
    646,
    /* ADDC_I_LO */
    649,
    /* ADDC_R */
    652,
    /* ADD_F_I_HI */
    656,
    /* ADD_F_I_LO */
    659,
    /* ADD_F_R */
    662,
    /* ADD_I_HI */
    666,
    /* ADD_I_LO */
    669,
    /* ADD_R */
    672,
    /* AND_F_I_HI */
    676,
    /* AND_F_I_LO */
    679,
    /* AND_F_R */
    682,
    /* AND_I_HI */
    686,
    /* AND_I_LO */
    689,
    /* AND_R */
    692,
    /* BRCC */
    696,
    /* BRIND_CC */
    698,
    /* BRIND_CCA */
    700,
    /* BRR */
    703,
    /* BT */
    705,
    /* JR */
    706,
    /* LDADDR */
    707,
    /* LDBs_RI */
    709,
    /* LDBs_RR */
    713,
    /* LDBz_RI */
    717,
    /* LDBz_RR */
    721,
    /* LDHs_RI */
    725,
    /* LDHs_RR */
    729,
    /* LDHz_RI */
    733,
    /* LDHz_RR */
    737,
    /* LDW_RI */
    741,
    /* LDW_RR */
    745,
    /* LDWz_RR */
    749,
    /* LEADZ */
    753,
    /* LOG0 */
    755,
    /* LOG1 */
    755,
    /* LOG2 */
    755,
    /* LOG3 */
    755,
    /* LOG4 */
    755,
    /* MOVHI */
    755,
    /* NOP */
    757,
    /* OR_F_I_HI */
    757,
    /* OR_F_I_LO */
    760,
    /* OR_F_R */
    763,
    /* OR_I_HI */
    767,
    /* OR_I_LO */
    770,
    /* OR_R */
    773,
    /* POPC */
    777,
    /* RET */
    779,
    /* SA_F_I */
    779,
    /* SA_I */
    782,
    /* SCC */
    785,
    /* SELECT */
    787,
    /* SFSUB_F_RI_HI */
    791,
    /* SFSUB_F_RI_LO */
    793,
    /* SFSUB_F_RR */
    795,
    /* SHL_F_R */
    797,
    /* SHL_R */
    801,
    /* SLI */
    805,
    /* SL_F_I */
    807,
    /* SL_I */
    810,
    /* SRA_F_R */
    813,
    /* SRA_R */
    817,
    /* SRL_F_R */
    821,
    /* SRL_R */
    825,
    /* STADDR */
    829,
    /* STB_RI */
    831,
    /* STB_RR */
    835,
    /* STH_RI */
    839,
    /* STH_RR */
    843,
    /* SUBB_F_I_HI */
    847,
    /* SUBB_F_I_LO */
    850,
    /* SUBB_F_R */
    853,
    /* SUBB_I_HI */
    857,
    /* SUBB_I_LO */
    860,
    /* SUBB_R */
    863,
    /* SUB_F_I_HI */
    867,
    /* SUB_F_I_LO */
    870,
    /* SUB_F_R */
    873,
    /* SUB_I_HI */
    877,
    /* SUB_I_LO */
    880,
    /* SUB_R */
    883,
    /* SW_RI */
    887,
    /* SW_RR */
    891,
    /* TRAILZ */
    895,
    /* XOR_F_I_HI */
    897,
    /* XOR_F_I_LO */
    900,
    /* XOR_F_R */
    903,
    /* XOR_I_HI */
    907,
    /* XOR_I_LO */
    910,
    /* XOR_R */
    913,
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
    /* ADJDYNALLOC */
    GPR, GPR, 
    /* CALL */
    CallTarget, 
    /* CALLR */
    GPR, 
    /* ADDC_F_I_HI */
    GPR, GPR, i32hi16, 
    /* ADDC_F_I_LO */
    GPR, GPR, i32lo16z, 
    /* ADDC_F_R */
    GPR, GPR, GPR, i32imm, 
    /* ADDC_I_HI */
    GPR, GPR, i32hi16, 
    /* ADDC_I_LO */
    GPR, GPR, i32lo16z, 
    /* ADDC_R */
    GPR, GPR, GPR, i32imm, 
    /* ADD_F_I_HI */
    GPR, GPR, i32hi16, 
    /* ADD_F_I_LO */
    GPR, GPR, i32lo16z, 
    /* ADD_F_R */
    GPR, GPR, GPR, i32imm, 
    /* ADD_I_HI */
    GPR, GPR, i32hi16, 
    /* ADD_I_LO */
    GPR, GPR, i32lo16z, 
    /* ADD_R */
    GPR, GPR, GPR, i32imm, 
    /* AND_F_I_HI */
    GPR, GPR, i32hi16and, 
    /* AND_F_I_LO */
    GPR, GPR, i32lo16and, 
    /* AND_F_R */
    GPR, GPR, GPR, i32imm, 
    /* AND_I_HI */
    GPR, GPR, i32hi16and, 
    /* AND_I_LO */
    GPR, GPR, i32lo16and, 
    /* AND_R */
    GPR, GPR, GPR, i32imm, 
    /* BRCC */
    BrTarget, CCOp, 
    /* BRIND_CC */
    GPR, CCOp, 
    /* BRIND_CCA */
    GPR, GPR, CCOp, 
    /* BRR */
    i16imm, CCOp, 
    /* BT */
    BrTarget, 
    /* JR */
    GPR, 
    /* LDADDR */
    GPR, i32lo21, 
    /* LDBs_RI */
    GPR, GPR, imm10, AluOp, 
    /* LDBs_RR */
    GPR, GPR, GPR, AluOp, 
    /* LDBz_RI */
    GPR, GPR, imm10, AluOp, 
    /* LDBz_RR */
    GPR, GPR, GPR, AluOp, 
    /* LDHs_RI */
    GPR, GPR, imm10, AluOp, 
    /* LDHs_RR */
    GPR, GPR, GPR, AluOp, 
    /* LDHz_RI */
    GPR, GPR, imm10, AluOp, 
    /* LDHz_RR */
    GPR, GPR, GPR, AluOp, 
    /* LDW_RI */
    GPR, GPR, i32lo16s, AluOp, 
    /* LDW_RR */
    GPR, GPR, GPR, AluOp, 
    /* LDWz_RR */
    GPR, GPR, GPR, AluOp, 
    /* LEADZ */
    GPR, GPR, 
    /* LOG0 */
    /* LOG1 */
    /* LOG2 */
    /* LOG3 */
    /* LOG4 */
    /* MOVHI */
    GPR, i32hi16, 
    /* NOP */
    /* OR_F_I_HI */
    GPR, GPR, i32hi16, 
    /* OR_F_I_LO */
    GPR, GPR, i32lo16z, 
    /* OR_F_R */
    GPR, GPR, GPR, i32imm, 
    /* OR_I_HI */
    GPR, GPR, i32hi16, 
    /* OR_I_LO */
    GPR, GPR, i32lo16z, 
    /* OR_R */
    GPR, GPR, GPR, i32imm, 
    /* POPC */
    GPR, GPR, 
    /* RET */
    /* SA_F_I */
    GPR, GPR, immShift, 
    /* SA_I */
    GPR, GPR, immShift, 
    /* SCC */
    GPR, CCOp, 
    /* SELECT */
    GPR, GPR, GPR, CCOp, 
    /* SFSUB_F_RI_HI */
    GPR, i32hi16, 
    /* SFSUB_F_RI_LO */
    GPR, i32lo16z, 
    /* SFSUB_F_RR */
    GPR, GPR, 
    /* SHL_F_R */
    GPR, GPR, GPR, i32imm, 
    /* SHL_R */
    GPR, GPR, GPR, i32imm, 
    /* SLI */
    GPR, i32lo21, 
    /* SL_F_I */
    GPR, GPR, immShift, 
    /* SL_I */
    GPR, GPR, immShift, 
    /* SRA_F_R */
    GPR, GPR, GPR, i32imm, 
    /* SRA_R */
    GPR, GPR, GPR, i32imm, 
    /* SRL_F_R */
    GPR, GPR, GPR, i32imm, 
    /* SRL_R */
    GPR, GPR, GPR, i32imm, 
    /* STADDR */
    GPR, i32lo21, 
    /* STB_RI */
    GPR, GPR, imm10, AluOp, 
    /* STB_RR */
    GPR, GPR, GPR, AluOp, 
    /* STH_RI */
    GPR, GPR, imm10, AluOp, 
    /* STH_RR */
    GPR, GPR, GPR, AluOp, 
    /* SUBB_F_I_HI */
    GPR, GPR, i32hi16, 
    /* SUBB_F_I_LO */
    GPR, GPR, i32lo16z, 
    /* SUBB_F_R */
    GPR, GPR, GPR, i32imm, 
    /* SUBB_I_HI */
    GPR, GPR, i32hi16, 
    /* SUBB_I_LO */
    GPR, GPR, i32lo16z, 
    /* SUBB_R */
    GPR, GPR, GPR, i32imm, 
    /* SUB_F_I_HI */
    GPR, GPR, i32hi16, 
    /* SUB_F_I_LO */
    GPR, GPR, i32lo16z, 
    /* SUB_F_R */
    GPR, GPR, GPR, i32imm, 
    /* SUB_I_HI */
    GPR, GPR, i32hi16, 
    /* SUB_I_LO */
    GPR, GPR, i32lo16z, 
    /* SUB_R */
    GPR, GPR, GPR, i32imm, 
    /* SW_RI */
    GPR, GPR, i32lo16s, AluOp, 
    /* SW_RR */
    GPR, GPR, GPR, AluOp, 
    /* TRAILZ */
    GPR, GPR, 
    /* XOR_F_I_HI */
    GPR, GPR, i32hi16, 
    /* XOR_F_I_LO */
    GPR, GPR, i32lo16z, 
    /* XOR_F_R */
    GPR, GPR, GPR, i32imm, 
    /* XOR_I_HI */
    GPR, GPR, i32hi16, 
    /* XOR_I_LO */
    GPR, GPR, i32lo16z, 
    /* XOR_R */
    GPR, GPR, GPR, i32imm, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

#ifdef GET_INSTRINFO_MEM_OPERAND_SIZE
#undef GET_INSTRINFO_MEM_OPERAND_SIZE
namespace llvm {
namespace Lanai {
LLVM_READONLY
static int getMemOperandSize(int OpType) {
  switch (OpType) {
  default: return 0;
  }
}
} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_MEM_OPERAND_SIZE

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
namespace llvm {
namespace Lanai {
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
} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
namespace llvm {
namespace Lanai {
LLVM_READONLY static int
getLogicalOperandType(uint16_t Opcode, uint16_t LogicalOpIdx) {
  return -1;
}
} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP

#ifdef GET_INSTRINFO_MC_HELPER_DECLS
#undef GET_INSTRINFO_MC_HELPER_DECLS

namespace llvm {
class MCInst;
class FeatureBitset;

namespace Lanai_MC {

void verifyInstructionPredicates(unsigned Opcode, const FeatureBitset &Features);

} // end namespace Lanai_MC
} // end namespace llvm

#endif // GET_INSTRINFO_MC_HELPER_DECLS

#ifdef GET_INSTRINFO_MC_HELPERS
#undef GET_INSTRINFO_MC_HELPERS

namespace llvm {
namespace Lanai_MC {

} // end namespace Lanai_MC
} // end namespace llvm

#endif // GET_GENISTRINFO_MC_HELPERS

#ifdef ENABLE_INSTR_PREDICATE_VERIFIER
#undef ENABLE_INSTR_PREDICATE_VERIFIER
#include <sstream>

namespace llvm {
namespace Lanai_MC {

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
    CEFBS_None, // ADJDYNALLOC = 249
    CEFBS_None, // CALL = 250
    CEFBS_None, // CALLR = 251
    CEFBS_None, // ADDC_F_I_HI = 252
    CEFBS_None, // ADDC_F_I_LO = 253
    CEFBS_None, // ADDC_F_R = 254
    CEFBS_None, // ADDC_I_HI = 255
    CEFBS_None, // ADDC_I_LO = 256
    CEFBS_None, // ADDC_R = 257
    CEFBS_None, // ADD_F_I_HI = 258
    CEFBS_None, // ADD_F_I_LO = 259
    CEFBS_None, // ADD_F_R = 260
    CEFBS_None, // ADD_I_HI = 261
    CEFBS_None, // ADD_I_LO = 262
    CEFBS_None, // ADD_R = 263
    CEFBS_None, // AND_F_I_HI = 264
    CEFBS_None, // AND_F_I_LO = 265
    CEFBS_None, // AND_F_R = 266
    CEFBS_None, // AND_I_HI = 267
    CEFBS_None, // AND_I_LO = 268
    CEFBS_None, // AND_R = 269
    CEFBS_None, // BRCC = 270
    CEFBS_None, // BRIND_CC = 271
    CEFBS_None, // BRIND_CCA = 272
    CEFBS_None, // BRR = 273
    CEFBS_None, // BT = 274
    CEFBS_None, // JR = 275
    CEFBS_None, // LDADDR = 276
    CEFBS_None, // LDBs_RI = 277
    CEFBS_None, // LDBs_RR = 278
    CEFBS_None, // LDBz_RI = 279
    CEFBS_None, // LDBz_RR = 280
    CEFBS_None, // LDHs_RI = 281
    CEFBS_None, // LDHs_RR = 282
    CEFBS_None, // LDHz_RI = 283
    CEFBS_None, // LDHz_RR = 284
    CEFBS_None, // LDW_RI = 285
    CEFBS_None, // LDW_RR = 286
    CEFBS_None, // LDWz_RR = 287
    CEFBS_None, // LEADZ = 288
    CEFBS_None, // LOG0 = 289
    CEFBS_None, // LOG1 = 290
    CEFBS_None, // LOG2 = 291
    CEFBS_None, // LOG3 = 292
    CEFBS_None, // LOG4 = 293
    CEFBS_None, // MOVHI = 294
    CEFBS_None, // NOP = 295
    CEFBS_None, // OR_F_I_HI = 296
    CEFBS_None, // OR_F_I_LO = 297
    CEFBS_None, // OR_F_R = 298
    CEFBS_None, // OR_I_HI = 299
    CEFBS_None, // OR_I_LO = 300
    CEFBS_None, // OR_R = 301
    CEFBS_None, // POPC = 302
    CEFBS_None, // RET = 303
    CEFBS_None, // SA_F_I = 304
    CEFBS_None, // SA_I = 305
    CEFBS_None, // SCC = 306
    CEFBS_None, // SELECT = 307
    CEFBS_None, // SFSUB_F_RI_HI = 308
    CEFBS_None, // SFSUB_F_RI_LO = 309
    CEFBS_None, // SFSUB_F_RR = 310
    CEFBS_None, // SHL_F_R = 311
    CEFBS_None, // SHL_R = 312
    CEFBS_None, // SLI = 313
    CEFBS_None, // SL_F_I = 314
    CEFBS_None, // SL_I = 315
    CEFBS_None, // SRA_F_R = 316
    CEFBS_None, // SRA_R = 317
    CEFBS_None, // SRL_F_R = 318
    CEFBS_None, // SRL_R = 319
    CEFBS_None, // STADDR = 320
    CEFBS_None, // STB_RI = 321
    CEFBS_None, // STB_RR = 322
    CEFBS_None, // STH_RI = 323
    CEFBS_None, // STH_RR = 324
    CEFBS_None, // SUBB_F_I_HI = 325
    CEFBS_None, // SUBB_F_I_LO = 326
    CEFBS_None, // SUBB_F_R = 327
    CEFBS_None, // SUBB_I_HI = 328
    CEFBS_None, // SUBB_I_LO = 329
    CEFBS_None, // SUBB_R = 330
    CEFBS_None, // SUB_F_I_HI = 331
    CEFBS_None, // SUB_F_I_LO = 332
    CEFBS_None, // SUB_F_R = 333
    CEFBS_None, // SUB_I_HI = 334
    CEFBS_None, // SUB_I_LO = 335
    CEFBS_None, // SUB_R = 336
    CEFBS_None, // SW_RI = 337
    CEFBS_None, // SW_RR = 338
    CEFBS_None, // TRAILZ = 339
    CEFBS_None, // XOR_F_I_HI = 340
    CEFBS_None, // XOR_F_I_LO = 341
    CEFBS_None, // XOR_F_R = 342
    CEFBS_None, // XOR_I_HI = 343
    CEFBS_None, // XOR_I_LO = 344
    CEFBS_None, // XOR_R = 345
  };

  assert(Opcode < 346);
  FeatureBitset AvailableFeatures = computeAvailableFeatures(Features);
  const FeatureBitset &RequiredFeatures = FeatureBitsets[RequiredFeaturesRefs[Opcode]];
  FeatureBitset MissingFeatures =
      (AvailableFeatures & RequiredFeatures) ^
      RequiredFeatures;
  if (MissingFeatures.any()) {
    std::ostringstream Msg;
    Msg << "Attempting to emit " << &LanaiInstrNameData[LanaiInstrNameIndices[Opcode]]
        << " instruction but the ";
    for (unsigned i = 0, e = MissingFeatures.size(); i != e; ++i)
      if (MissingFeatures.test(i))
        Msg << SubtargetFeatureNames[i] << " ";
    Msg << "predicate(s) are not met";
    report_fatal_error(Msg.str().c_str());
  }
#endif // NDEBUG
}
} // end namespace Lanai_MC
} // end namespace llvm
#endif // ENABLE_INSTR_PREDICATE_VERIFIER

#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace Lanai {

enum PostEncoderMethod {
	PostEncoderMethod_adjustPqBitsSpls
};

// splsIdempotent
LLVM_READONLY
int splsIdempotent(uint16_t Opcode) {
static const uint16_t splsIdempotentTable[][2] = {
  { Lanai::LDBs_RI, Lanai::LDBs_RI },
  { Lanai::LDBz_RI, Lanai::LDBz_RI },
  { Lanai::LDHs_RI, Lanai::LDHs_RI },
  { Lanai::LDHz_RI, Lanai::LDHz_RI },
  { Lanai::STB_RI, Lanai::STB_RI },
  { Lanai::STH_RI, Lanai::STH_RI },
}; // End of splsIdempotentTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 6;
  while (start < end) {
    mid = start + (end - start) / 2;
    if (Opcode == splsIdempotentTable[mid][0]) {
      break;
    }
    if (Opcode < splsIdempotentTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return splsIdempotentTable[mid][1];
}

} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRMAP_INFO

