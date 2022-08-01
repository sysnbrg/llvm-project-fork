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

namespace AVR {
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
    ADCWRdRr	= 247,
    ADDWRdRr	= 248,
    ADJCALLSTACKDOWN	= 249,
    ADJCALLSTACKUP	= 250,
    ANDIWRdK	= 251,
    ANDWRdRr	= 252,
    ASRBNRd	= 253,
    ASRWLoRd	= 254,
    ASRWNRd	= 255,
    ASRWRd	= 256,
    Asr16	= 257,
    Asr8	= 258,
    AtomicFence	= 259,
    AtomicLoad16	= 260,
    AtomicLoad8	= 261,
    AtomicLoadAdd16	= 262,
    AtomicLoadAdd8	= 263,
    AtomicLoadAnd16	= 264,
    AtomicLoadAnd8	= 265,
    AtomicLoadOr16	= 266,
    AtomicLoadOr8	= 267,
    AtomicLoadSub16	= 268,
    AtomicLoadSub8	= 269,
    AtomicLoadXor16	= 270,
    AtomicLoadXor8	= 271,
    AtomicStore16	= 272,
    AtomicStore8	= 273,
    COMWRd	= 274,
    CPCWRdRr	= 275,
    CPWRdRr	= 276,
    CopyR1	= 277,
    ELPMBRdZ	= 278,
    ELPMBRdZPi	= 279,
    ELPMWRdZ	= 280,
    ELPMWRdZPi	= 281,
    EORWRdRr	= 282,
    FRMIDX	= 283,
    INWRdA	= 284,
    LDDWRdPtrQ	= 285,
    LDDWRdYQ	= 286,
    LDIWRdK	= 287,
    LDSWRdK	= 288,
    LDWRdPtr	= 289,
    LDWRdPtrPd	= 290,
    LDWRdPtrPi	= 291,
    LPMWRdZ	= 292,
    LPMWRdZPi	= 293,
    LSLBNRd	= 294,
    LSLWHiRd	= 295,
    LSLWNRd	= 296,
    LSLWRd	= 297,
    LSRBNRd	= 298,
    LSRWLoRd	= 299,
    LSRWNRd	= 300,
    LSRWRd	= 301,
    Lsl16	= 302,
    Lsl8	= 303,
    Lsr16	= 304,
    Lsr8	= 305,
    NEGWRd	= 306,
    ORIWRdK	= 307,
    ORWRdRr	= 308,
    OUTWARr	= 309,
    POPWRd	= 310,
    PUSHWRr	= 311,
    ROLBRd	= 312,
    ROLWRd	= 313,
    RORBRd	= 314,
    RORWRd	= 315,
    Rol16	= 316,
    Rol8	= 317,
    Ror16	= 318,
    Ror8	= 319,
    SBCIWRdK	= 320,
    SBCWRdRr	= 321,
    SEXT	= 322,
    SPREAD	= 323,
    SPWRITE	= 324,
    STDSPQRr	= 325,
    STDWPtrQRr	= 326,
    STDWSPQRr	= 327,
    STSWKRr	= 328,
    STWPtrPdRr	= 329,
    STWPtrPiRr	= 330,
    STWPtrRr	= 331,
    SUBIWRdK	= 332,
    SUBWRdRr	= 333,
    Select16	= 334,
    Select8	= 335,
    ZEXT	= 336,
    ADCRdRr	= 337,
    ADDRdRr	= 338,
    ADIWRdK	= 339,
    ANDIRdK	= 340,
    ANDRdRr	= 341,
    ASRRd	= 342,
    BCLRs	= 343,
    BLD	= 344,
    BRBCsk	= 345,
    BRBSsk	= 346,
    BREAK	= 347,
    BREQk	= 348,
    BRGEk	= 349,
    BRLOk	= 350,
    BRLTk	= 351,
    BRMIk	= 352,
    BRNEk	= 353,
    BRPLk	= 354,
    BRSHk	= 355,
    BSETs	= 356,
    BST	= 357,
    CALLk	= 358,
    CBIAb	= 359,
    COMRd	= 360,
    CPCRdRr	= 361,
    CPIRdK	= 362,
    CPRdRr	= 363,
    CPSE	= 364,
    DECRd	= 365,
    DESK	= 366,
    EICALL	= 367,
    EIJMP	= 368,
    ELPM	= 369,
    ELPMRdZ	= 370,
    ELPMRdZPi	= 371,
    EORRdRr	= 372,
    FMUL	= 373,
    FMULS	= 374,
    FMULSU	= 375,
    ICALL	= 376,
    IJMP	= 377,
    INCRd	= 378,
    INRdA	= 379,
    JMPk	= 380,
    LACZRd	= 381,
    LASZRd	= 382,
    LATZRd	= 383,
    LDDRdPtrQ	= 384,
    LDIRdK	= 385,
    LDRdPtr	= 386,
    LDRdPtrPd	= 387,
    LDRdPtrPi	= 388,
    LDSRdK	= 389,
    LPM	= 390,
    LPMRdZ	= 391,
    LPMRdZPi	= 392,
    LSRRd	= 393,
    MOVRdRr	= 394,
    MOVWRdRr	= 395,
    MULRdRr	= 396,
    MULSRdRr	= 397,
    MULSURdRr	= 398,
    NEGRd	= 399,
    NOP	= 400,
    ORIRdK	= 401,
    ORRdRr	= 402,
    OUTARr	= 403,
    POPRd	= 404,
    PUSHRr	= 405,
    RCALLk	= 406,
    RET	= 407,
    RETI	= 408,
    RJMPk	= 409,
    RORRd	= 410,
    SBCIRdK	= 411,
    SBCRdRr	= 412,
    SBIAb	= 413,
    SBICAb	= 414,
    SBISAb	= 415,
    SBIWRdK	= 416,
    SBRCRrB	= 417,
    SBRSRrB	= 418,
    SLEEP	= 419,
    SPM	= 420,
    SPMZPi	= 421,
    STDPtrQRr	= 422,
    STPtrPdRr	= 423,
    STPtrPiRr	= 424,
    STPtrRr	= 425,
    STSKRr	= 426,
    SUBIRdK	= 427,
    SUBRdRr	= 428,
    SWAPRd	= 429,
    WDR	= 430,
    XCHZRd	= 431,
    INSTRUCTION_LIST_END = 432
  };

} // end namespace AVR
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace AVR {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // end namespace Sched
} // end namespace AVR
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { AVR::SREG, 0 };
static const MCPhysReg ImplicitList2[] = { AVR::SP, 0 };
static const MCPhysReg ImplicitList3[] = { AVR::SP, AVR::SREG, 0 };
static const MCPhysReg ImplicitList4[] = { AVR::R31R30, 0 };
static const MCPhysReg ImplicitList5[] = { AVR::R15, AVR::R14, AVR::R13, AVR::R12, AVR::R11, AVR::R10, AVR::R9, AVR::R8, AVR::R7, AVR::R6, AVR::R5, AVR::R4, AVR::R3, AVR::R2, AVR::R1, AVR::R0, 0 };
static const MCPhysReg ImplicitList6[] = { AVR::SP, AVR::R31R30, 0 };
static const MCPhysReg ImplicitList7[] = { AVR::R0, 0 };
static const MCPhysReg ImplicitList8[] = { AVR::R1, AVR::R0, AVR::SREG, 0 };
static const MCPhysReg ImplicitList9[] = { AVR::R31R30, AVR::R1, AVR::R0, 0 };
static const MCPhysReg ImplicitList10[] = { AVR::R1, AVR::R0, 0 };

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
static const MCOperandInfo OperandInfo46[] = { { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { AVR::DLDREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::DLDREGSRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { AVR::LD8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo50[] = { { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::PTRDISPREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::PTRREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::PTRDISPREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::PTRREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { AVR::PTRDISPREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { AVR::PTRREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::ZREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::LD8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::ZREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::LD8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { AVR::DLDREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::DLDREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_EARLY_CLOBBER }, { AVR::PTRDISPREGSRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::PTRDISPREGSRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { AVR::DLDREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_EARLY_CLOBBER }, { AVR::PTRDISPREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_EARLY_CLOBBER }, { AVR::PTRREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::PTRREGSRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(1) }, };
static const MCOperandInfo OperandInfo71[] = { { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::ZREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { AVR::DLDREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo76[] = { { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::GPRSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { AVR::GPRSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { AVR::GPRSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { AVR::PTRDISPREGSRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { AVR::GPRSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { AVR::PTRREGSRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_EARLY_CLOBBER }, { AVR::PTRREGSRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::DREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { AVR::IWREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::IWREGSRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { AVR::LD8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::LD8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { AVR::LD8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::ZREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { AVR::LD8loRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::LD8loRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_EARLY_CLOBBER }, { AVR::PTRDISPREGSRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::PTRREGSRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_EARLY_CLOBBER }, { AVR::PTRREGSRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::PTRREGSRegClassID, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(1) }, };
static const MCOperandInfo OperandInfo101[] = { { AVR::LD8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { AVR::LD8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { AVR::ZREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { AVR::PTRDISPREGSRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { AVR::PTRREGSRegClassID, 0, MCOI::OPERAND_UNKNOWN, MCOI_EARLY_CLOBBER }, { AVR::PTRREGSRegClassID, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(0) }, { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { AVR::PTRREGSRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { AVR::GPR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc AVRInsts[] = {
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
  { 247,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo46 },  // Inst #247 = ADCWRdRr
  { 248,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #248 = ADDWRdRr
  { 249,	2,	0,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo10 },  // Inst #249 = ADJCALLSTACKDOWN
  { 250,	2,	0,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList4, OperandInfo10 },  // Inst #250 = ADJCALLSTACKUP
  { 251,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #251 = ANDIWRdK
  { 252,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #252 = ANDWRdRr
  { 253,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #253 = ASRBNRd
  { 254,	2,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #254 = ASRWLoRd
  { 255,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo50 },  // Inst #255 = ASRWNRd
  { 256,	2,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #256 = ASRWRd
  { 257,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo51 },  // Inst #257 = Asr16
  { 258,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo52 },  // Inst #258 = Asr8
  { 259,	0,	0,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #259 = AtomicFence
  { 260,	2,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #260 = AtomicLoad16
  { 261,	2,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #261 = AtomicLoad8
  { 262,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #262 = AtomicLoadAdd16
  { 263,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #263 = AtomicLoadAdd8
  { 264,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #264 = AtomicLoadAnd16
  { 265,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #265 = AtomicLoadAnd8
  { 266,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #266 = AtomicLoadOr16
  { 267,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #267 = AtomicLoadOr8
  { 268,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #268 = AtomicLoadSub16
  { 269,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #269 = AtomicLoadSub8
  { 270,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #270 = AtomicLoadXor16
  { 271,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #271 = AtomicLoadXor8
  { 272,	2,	0,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #272 = AtomicStore16
  { 273,	2,	0,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #273 = AtomicStore8
  { 274,	2,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #274 = COMWRd
  { 275,	2,	0,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo59 },  // Inst #275 = CPCWRdRr
  { 276,	2,	0,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo59 },  // Inst #276 = CPWRdRr
  { 277,	1,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo60 },  // Inst #277 = CopyR1
  { 278,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo61 },  // Inst #278 = ELPMBRdZ
  { 279,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo61 },  // Inst #279 = ELPMBRdZPi
  { 280,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo62 },  // Inst #280 = ELPMWRdZ
  { 281,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo62 },  // Inst #281 = ELPMWRdZPi
  { 282,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #282 = EORWRdRr
  { 283,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo63 },  // Inst #283 = FRMIDX
  { 284,	2,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #284 = INWRdA
  { 285,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #285 = LDDWRdPtrQ
  { 286,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #286 = LDDWRdYQ
  { 287,	2,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #287 = LDIWRdK
  { 288,	2,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #288 = LDSWRdK
  { 289,	2,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #289 = LDWRdPtr
  { 290,	3,	2,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #290 = LDWRdPtrPd
  { 291,	3,	2,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #291 = LDWRdPtrPi
  { 292,	2,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo71 },  // Inst #292 = LPMWRdZ
  { 293,	2,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo71 },  // Inst #293 = LPMWRdZPi
  { 294,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #294 = LSLBNRd
  { 295,	2,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #295 = LSLWHiRd
  { 296,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo72 },  // Inst #296 = LSLWNRd
  { 297,	2,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #297 = LSLWRd
  { 298,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #298 = LSRBNRd
  { 299,	2,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #299 = LSRWLoRd
  { 300,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo72 },  // Inst #300 = LSRWNRd
  { 301,	2,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #301 = LSRWRd
  { 302,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo51 },  // Inst #302 = Lsl16
  { 303,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo52 },  // Inst #303 = Lsl8
  { 304,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo51 },  // Inst #304 = Lsr16
  { 305,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo52 },  // Inst #305 = Lsr8
  { 306,	2,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #306 = NEGWRd
  { 307,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #307 = ORIWRdK
  { 308,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #308 = ORWRdRr
  { 309,	2,	0,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo73 },  // Inst #309 = OUTWARr
  { 310,	1,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo74 },  // Inst #310 = POPWRd
  { 311,	1,	0,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo74 },  // Inst #311 = PUSHWRr
  { 312,	2,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo75 },  // Inst #312 = ROLBRd
  { 313,	2,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo49 },  // Inst #313 = ROLWRd
  { 314,	2,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo75 },  // Inst #314 = RORBRd
  { 315,	2,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo49 },  // Inst #315 = RORWRd
  { 316,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo51 },  // Inst #316 = Rol16
  { 317,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo52 },  // Inst #317 = Rol8
  { 318,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo51 },  // Inst #318 = Ror16
  { 319,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo52 },  // Inst #319 = Ror8
  { 320,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo47 },  // Inst #320 = SBCIWRdK
  { 321,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo46 },  // Inst #321 = SBCWRdRr
  { 322,	2,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo76 },  // Inst #322 = SEXT
  { 323,	2,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, nullptr, OperandInfo77 },  // Inst #323 = SPREAD
  { 324,	2,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList2, OperandInfo78 },  // Inst #324 = SPWRITE
  { 325,	3,	0,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList2, OperandInfo79 },  // Inst #325 = STDSPQRr
  { 326,	3,	0,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo80 },  // Inst #326 = STDWPtrQRr
  { 327,	3,	0,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList2, OperandInfo81 },  // Inst #327 = STDWSPQRr
  { 328,	2,	0,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo82 },  // Inst #328 = STSWKRr
  { 329,	4,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo83 },  // Inst #329 = STWPtrPdRr
  { 330,	4,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo83 },  // Inst #330 = STWPtrPiRr
  { 331,	2,	0,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #331 = STWPtrRr
  { 332,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #332 = SUBIWRdK
  { 333,	3,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #333 = SUBWRdRr
  { 334,	4,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo84 },  // Inst #334 = Select16
  { 335,	4,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo85 },  // Inst #335 = Select8
  { 336,	2,	1,	2,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo76 },  // Inst #336 = ZEXT
  { 337,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo86 },  // Inst #337 = ADCRdRr
  { 338,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo86 },  // Inst #338 = ADDRdRr
  { 339,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo87 },  // Inst #339 = ADIWRdK
  { 340,	3,	1,	2,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo88 },  // Inst #340 = ANDIRdK
  { 341,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo86 },  // Inst #341 = ANDRdRr
  { 342,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo75 },  // Inst #342 = ASRRd
  { 343,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo3 },  // Inst #343 = BCLRs
  { 344,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo89 },  // Inst #344 = BLD
  { 345,	2,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo90 },  // Inst #345 = BRBCsk
  { 346,	2,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo90 },  // Inst #346 = BRBSsk
  { 347,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #347 = BREAK
  { 348,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo2 },  // Inst #348 = BREQk
  { 349,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo2 },  // Inst #349 = BRGEk
  { 350,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo2 },  // Inst #350 = BRLOk
  { 351,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo2 },  // Inst #351 = BRLTk
  { 352,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo2 },  // Inst #352 = BRMIk
  { 353,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo2 },  // Inst #353 = BRNEk
  { 354,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo2 },  // Inst #354 = BRPLk
  { 355,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo2 },  // Inst #355 = BRSHk
  { 356,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo3 },  // Inst #356 = BSETs
  { 357,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo91 },  // Inst #357 = BST
  { 358,	1,	0,	4,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, nullptr, OperandInfo2 },  // Inst #358 = CALLk
  { 359,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo92 },  // Inst #359 = CBIAb
  { 360,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo75 },  // Inst #360 = COMRd
  { 361,	2,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo93 },  // Inst #361 = CPCRdRr
  { 362,	2,	0,	2,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo94 },  // Inst #362 = CPIRdK
  { 363,	2,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo93 },  // Inst #363 = CPRdRr
  { 364,	2,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo93 },  // Inst #364 = CPSE
  { 365,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo75 },  // Inst #365 = DECRd
  { 366,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList5, OperandInfo3 },  // Inst #366 = DESK
  { 367,	0,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList6, nullptr, nullptr },  // Inst #367 = EICALL
  { 368,	0,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, nullptr, nullptr },  // Inst #368 = EIJMP
  { 369,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, ImplicitList7, nullptr },  // Inst #369 = ELPM
  { 370,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo95 },  // Inst #370 = ELPMRdZ
  { 371,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo95 },  // Inst #371 = ELPMRdZPi
  { 372,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo86 },  // Inst #372 = EORRdRr
  { 373,	2,	0,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList8, OperandInfo96 },  // Inst #373 = FMUL
  { 374,	2,	0,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList8, OperandInfo96 },  // Inst #374 = FMULS
  { 375,	2,	0,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList8, OperandInfo96 },  // Inst #375 = FMULSU
  { 376,	0,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList6, nullptr, nullptr },  // Inst #376 = ICALL
  { 377,	0,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, nullptr, nullptr },  // Inst #377 = IJMP
  { 378,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo75 },  // Inst #378 = INCRd
  { 379,	2,	1,	2,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo97 },  // Inst #379 = INRdA
  { 380,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #380 = JMPk
  { 381,	2,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo95 },  // Inst #381 = LACZRd
  { 382,	2,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo95 },  // Inst #382 = LASZRd
  { 383,	2,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo95 },  // Inst #383 = LATZRd
  { 384,	3,	1,	2,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo98 },  // Inst #384 = LDDRdPtrQ
  { 385,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo94 },  // Inst #385 = LDIRdK
  { 386,	2,	1,	2,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo99 },  // Inst #386 = LDRdPtr
  { 387,	3,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo100 },  // Inst #387 = LDRdPtrPd
  { 388,	3,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo100 },  // Inst #388 = LDRdPtrPi
  { 389,	2,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo97 },  // Inst #389 = LDSRdK
  { 390,	0,	0,	2,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, ImplicitList7, nullptr },  // Inst #390 = LPM
  { 391,	2,	1,	2,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo95 },  // Inst #391 = LPMRdZ
  { 392,	2,	1,	2,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo95 },  // Inst #392 = LPMRdZPi
  { 393,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo75 },  // Inst #393 = LSRRd
  { 394,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo93 },  // Inst #394 = MOVRdRr
  { 395,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #395 = MOVWRdRr
  { 396,	2,	0,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList8, OperandInfo93 },  // Inst #396 = MULRdRr
  { 397,	2,	0,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList8, OperandInfo101 },  // Inst #397 = MULSRdRr
  { 398,	2,	0,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList8, OperandInfo96 },  // Inst #398 = MULSURdRr
  { 399,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo75 },  // Inst #399 = NEGRd
  { 400,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #400 = NOP
  { 401,	3,	1,	2,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo88 },  // Inst #401 = ORIRdK
  { 402,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo86 },  // Inst #402 = ORRdRr
  { 403,	2,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo102 },  // Inst #403 = OUTARr
  { 404,	1,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo60 },  // Inst #404 = POPRd
  { 405,	1,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo60 },  // Inst #405 = PUSHRr
  { 406,	1,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, nullptr, OperandInfo2 },  // Inst #406 = RCALLk
  { 407,	0,	0,	2,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #407 = RET
  { 408,	0,	0,	2,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #408 = RETI
  { 409,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #409 = RJMPk
  { 410,	2,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo75 },  // Inst #410 = RORRd
  { 411,	3,	1,	2,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo88 },  // Inst #411 = SBCIRdK
  { 412,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo86 },  // Inst #412 = SBCRdRr
  { 413,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo92 },  // Inst #413 = SBIAb
  { 414,	2,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo92 },  // Inst #414 = SBICAb
  { 415,	2,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo92 },  // Inst #415 = SBISAb
  { 416,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo87 },  // Inst #416 = SBIWRdK
  { 417,	2,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo91 },  // Inst #417 = SBRCRrB
  { 418,	2,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo91 },  // Inst #418 = SBRSRrB
  { 419,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #419 = SLEEP
  { 420,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList9, nullptr, nullptr },  // Inst #420 = SPM
  { 421,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList10, ImplicitList4, OperandInfo103 },  // Inst #421 = SPMZPi
  { 422,	3,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo104 },  // Inst #422 = STDPtrQRr
  { 423,	4,	1,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo105 },  // Inst #423 = STPtrPdRr
  { 424,	4,	1,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo105 },  // Inst #424 = STPtrPiRr
  { 425,	2,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo106 },  // Inst #425 = STPtrRr
  { 426,	2,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo102 },  // Inst #426 = STSKRr
  { 427,	3,	1,	2,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo88 },  // Inst #427 = SUBIRdK
  { 428,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo86 },  // Inst #428 = SUBRdRr
  { 429,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo75 },  // Inst #429 = SWAPRd
  { 430,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #430 = WDR
  { 431,	2,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo95 },  // Inst #431 = XCHZRd
};

extern const char AVRInstrNameData[] = {
  /* 0 */ 'G', '_', 'F', 'L', 'O', 'G', '1', '0', 0,
  /* 9 */ 'C', 'o', 'p', 'y', 'R', '1', 0,
  /* 16 */ 'G', '_', 'F', 'L', 'O', 'G', '2', 0,
  /* 24 */ 'G', '_', 'F', 'E', 'X', 'P', '2', 0,
  /* 32 */ 'A', 't', 'o', 'm', 'i', 'c', 'L', 'o', 'a', 'd', 'S', 'u', 'b', '1', '6', 0,
  /* 48 */ 'A', 't', 'o', 'm', 'i', 'c', 'L', 'o', 'a', 'd', '1', '6', 0,
  /* 61 */ 'A', 't', 'o', 'm', 'i', 'c', 'L', 'o', 'a', 'd', 'A', 'd', 'd', '1', '6', 0,
  /* 77 */ 'A', 't', 'o', 'm', 'i', 'c', 'L', 'o', 'a', 'd', 'A', 'n', 'd', '1', '6', 0,
  /* 93 */ 'A', 't', 'o', 'm', 'i', 'c', 'S', 't', 'o', 'r', 'e', '1', '6', 0,
  /* 107 */ 'R', 'o', 'l', '1', '6', 0,
  /* 113 */ 'L', 's', 'l', '1', '6', 0,
  /* 119 */ 'A', 't', 'o', 'm', 'i', 'c', 'L', 'o', 'a', 'd', 'O', 'r', '1', '6', 0,
  /* 134 */ 'R', 'o', 'r', '1', '6', 0,
  /* 140 */ 'A', 't', 'o', 'm', 'i', 'c', 'L', 'o', 'a', 'd', 'X', 'o', 'r', '1', '6', 0,
  /* 156 */ 'A', 's', 'r', '1', '6', 0,
  /* 162 */ 'L', 's', 'r', '1', '6', 0,
  /* 168 */ 'S', 'e', 'l', 'e', 'c', 't', '1', '6', 0,
  /* 177 */ 'A', 't', 'o', 'm', 'i', 'c', 'L', 'o', 'a', 'd', 'S', 'u', 'b', '8', 0,
  /* 192 */ 'A', 't', 'o', 'm', 'i', 'c', 'L', 'o', 'a', 'd', '8', 0,
  /* 204 */ 'A', 't', 'o', 'm', 'i', 'c', 'L', 'o', 'a', 'd', 'A', 'd', 'd', '8', 0,
  /* 219 */ 'A', 't', 'o', 'm', 'i', 'c', 'L', 'o', 'a', 'd', 'A', 'n', 'd', '8', 0,
  /* 234 */ 'A', 't', 'o', 'm', 'i', 'c', 'S', 't', 'o', 'r', 'e', '8', 0,
  /* 247 */ 'R', 'o', 'l', '8', 0,
  /* 252 */ 'L', 's', 'l', '8', 0,
  /* 257 */ 'A', 't', 'o', 'm', 'i', 'c', 'L', 'o', 'a', 'd', 'O', 'r', '8', 0,
  /* 271 */ 'R', 'o', 'r', '8', 0,
  /* 276 */ 'A', 't', 'o', 'm', 'i', 'c', 'L', 'o', 'a', 'd', 'X', 'o', 'r', '8', 0,
  /* 291 */ 'A', 's', 'r', '8', 0,
  /* 296 */ 'L', 's', 'r', '8', 0,
  /* 301 */ 'S', 'e', 'l', 'e', 'c', 't', '8', 0,
  /* 309 */ 'G', '_', 'F', 'M', 'A', 0,
  /* 315 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'M', 'A', 0,
  /* 328 */ 'I', 'N', 'R', 'd', 'A', 0,
  /* 334 */ 'I', 'N', 'W', 'R', 'd', 'A', 0,
  /* 341 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 348 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'S', 'U', 'B', 0,
  /* 362 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'S', 'U', 'B', 0,
  /* 379 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 385 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'S', 'U', 'B', 0,
  /* 401 */ 'S', 'B', 'R', 'C', 'R', 'r', 'B', 0,
  /* 409 */ 'S', 'B', 'R', 'S', 'R', 'r', 'B', 0,
  /* 417 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 429 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 439 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 457 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 465 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 486 */ 'G', '_', 'D', 'Y', 'N', '_', 'S', 'T', 'A', 'C', 'K', 'A', 'L', 'L', 'O', 'C', 0,
  /* 503 */ 'S', 'P', 'R', 'E', 'A', 'D', 0,
  /* 510 */ 'G', '_', 'F', 'M', 'A', 'D', 0,
  /* 517 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 536 */ 'G', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 547 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 566 */ 'G', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 577 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'L', 'O', 'A', 'D', 0,
  /* 592 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 599 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'F', 'A', 'D', 'D', 0,
  /* 616 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 623 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'S', 'E', 'Q', '_', 'F', 'A', 'D', 'D', 0,
  /* 644 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'A', 'D', 'D', 0,
  /* 658 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'A', 'D', 'D', 0,
  /* 675 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'A', 'D', 'D', 0,
  /* 691 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 697 */ 'G', '_', 'P', 'T', 'R', '_', 'A', 'D', 'D', 0,
  /* 707 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'D', 'D', 0,
  /* 723 */ 'B', 'L', 'D', 0,
  /* 727 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'N', 'A', 'N', 'D', 0,
  /* 744 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'A', 'N', 'D', 0,
  /* 760 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 766 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'N', 'D', 0,
  /* 782 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 795 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 804 */ 'G', '_', 'L', 'L', 'R', 'O', 'U', 'N', 'D', 0,
  /* 814 */ 'G', '_', 'L', 'R', 'O', 'U', 'N', 'D', 0,
  /* 823 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'R', 'O', 'U', 'N', 'D', 0,
  /* 841 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', '_', 'R', 'O', 'U', 'N', 'D', 0,
  /* 867 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 884 */ 'P', 'S', 'E', 'U', 'D', 'O', '_', 'P', 'R', 'O', 'B', 'E', 0,
  /* 897 */ 'G', '_', 'S', 'S', 'U', 'B', 'E', 0,
  /* 905 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 913 */ 'G', '_', 'F', 'E', 'N', 'C', 'E', 0,
  /* 921 */ 'A', 'R', 'I', 'T', 'H', '_', 'F', 'E', 'N', 'C', 'E', 0,
  /* 933 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 946 */ 'G', '_', 'S', 'A', 'D', 'D', 'E', 0,
  /* 954 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 962 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 977 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 992 */ 'G', '_', 'J', 'U', 'M', 'P', '_', 'T', 'A', 'B', 'L', 'E', 0,
  /* 1005 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 1012 */ 'G', '_', 'M', 'E', 'M', 'C', 'P', 'Y', '_', 'I', 'N', 'L', 'I', 'N', 'E', 0,
  /* 1028 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 1041 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 1057 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 1065 */ 'C', 'P', 'S', 'E', 0,
  /* 1070 */ 'G', '_', 'B', 'I', 'T', 'R', 'E', 'V', 'E', 'R', 'S', 'E', 0,
  /* 1083 */ 'S', 'P', 'W', 'R', 'I', 'T', 'E', 0,
  /* 1091 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1101 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1116 */ 'G', '_', 'M', 'E', 'M', 'M', 'O', 'V', 'E', 0,
  /* 1126 */ 'G', '_', 'F', 'R', 'E', 'E', 'Z', 'E', 0,
  /* 1135 */ 'G', '_', 'F', 'C', 'A', 'N', 'O', 'N', 'I', 'C', 'A', 'L', 'I', 'Z', 'E', 0,
  /* 1151 */ 'G', '_', 'C', 'T', 'L', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 1169 */ 'G', '_', 'C', 'T', 'T', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 1187 */ 'G', '_', 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 1202 */ 'D', 'B', 'G', '_', 'I', 'N', 'S', 'T', 'R', '_', 'R', 'E', 'F', 0,
  /* 1216 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 1223 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1238 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1252 */ 'G', '_', 'S', 'E', 'X', 'T', '_', 'I', 'N', 'R', 'E', 'G', 0,
  /* 1265 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 1279 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', 0,
  /* 1296 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'C', 'H', 'G', 0,
  /* 1313 */ 'G', '_', 'F', 'L', 'O', 'G', 0,
  /* 1320 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 1328 */ 'P', 'R', 'E', 'A', 'L', 'L', 'O', 'C', 'A', 'T', 'E', 'D', '_', 'A', 'R', 'G', 0,
  /* 1345 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 1353 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 1361 */ 'D', 'B', 'G', '_', 'P', 'H', 'I', 0,
  /* 1369 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 1378 */ 'R', 'E', 'T', 'I', 0,
  /* 1383 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 1392 */ 'G', '_', 'F', 'P', 'O', 'W', 'I', 0,
  /* 1400 */ 'B', 'R', 'E', 'A', 'K', 0,
  /* 1406 */ 'G', '_', 'P', 'T', 'R', 'M', 'A', 'S', 'K', 0,
  /* 1416 */ 'D', 'E', 'S', 'K', 0,
  /* 1421 */ 'S', 'U', 'B', 'I', 'R', 'd', 'K', 0,
  /* 1429 */ 'S', 'B', 'C', 'I', 'R', 'd', 'K', 0,
  /* 1437 */ 'L', 'D', 'I', 'R', 'd', 'K', 0,
  /* 1444 */ 'A', 'N', 'D', 'I', 'R', 'd', 'K', 0,
  /* 1452 */ 'C', 'P', 'I', 'R', 'd', 'K', 0,
  /* 1459 */ 'O', 'R', 'I', 'R', 'd', 'K', 0,
  /* 1466 */ 'L', 'D', 'S', 'R', 'd', 'K', 0,
  /* 1473 */ 'S', 'B', 'I', 'W', 'R', 'd', 'K', 0,
  /* 1481 */ 'S', 'U', 'B', 'I', 'W', 'R', 'd', 'K', 0,
  /* 1490 */ 'S', 'B', 'C', 'I', 'W', 'R', 'd', 'K', 0,
  /* 1499 */ 'A', 'D', 'I', 'W', 'R', 'd', 'K', 0,
  /* 1507 */ 'L', 'D', 'I', 'W', 'R', 'd', 'K', 0,
  /* 1515 */ 'A', 'N', 'D', 'I', 'W', 'R', 'd', 'K', 0,
  /* 1524 */ 'O', 'R', 'I', 'W', 'R', 'd', 'K', 0,
  /* 1532 */ 'L', 'D', 'S', 'W', 'R', 'd', 'K', 0,
  /* 1540 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1549 */ 'D', 'B', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1559 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1568 */ 'A', 'N', 'N', 'O', 'T', 'A', 'T', 'I', 'O', 'N', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1585 */ 'I', 'C', 'A', 'L', 'L', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'F', 'U', 'N', 'N', 'E', 'L', 0,
  /* 1605 */ 'G', '_', 'F', 'S', 'H', 'L', 0,
  /* 1612 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 1618 */ 'G', '_', 'F', 'C', 'E', 'I', 'L', 0,
  /* 1626 */ 'E', 'I', 'C', 'A', 'L', 'L', 0,
  /* 1633 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 1653 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'Y', 'P', 'E', 'D', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 1680 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 1701 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 1713 */ 'K', 'I', 'L', 'L', 0,
  /* 1718 */ 'G', '_', 'R', 'O', 'T', 'L', 0,
  /* 1725 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'F', 'M', 'U', 'L', 0,
  /* 1742 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 1749 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'S', 'E', 'Q', '_', 'F', 'M', 'U', 'L', 0,
  /* 1770 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'M', 'U', 'L', 0,
  /* 1784 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'M', 'U', 'L', 0,
  /* 1800 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 1806 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 1813 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'R', 'E', 'M', 0,
  /* 1827 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 1834 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 1841 */ 'G', '_', 'S', 'D', 'I', 'V', 'R', 'E', 'M', 0,
  /* 1851 */ 'G', '_', 'U', 'D', 'I', 'V', 'R', 'E', 'M', 0,
  /* 1861 */ 'E', 'L', 'P', 'M', 0,
  /* 1866 */ 'S', 'P', 'M', 0,
  /* 1870 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 1880 */ 'G', '_', 'F', 'M', 'I', 'N', 'I', 'M', 'U', 'M', 0,
  /* 1891 */ 'G', '_', 'F', 'M', 'A', 'X', 'I', 'M', 'U', 'M', 0,
  /* 1902 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', 0,
  /* 1912 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', 0,
  /* 1922 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'R', 'O', 'U', 'N', 'D', 'E', 'V', 'E', 'N', 0,
  /* 1944 */ 'G', '_', 'A', 'S', 'S', 'E', 'R', 'T', '_', 'A', 'L', 'I', 'G', 'N', 0,
  /* 1959 */ 'G', '_', 'F', 'C', 'O', 'P', 'Y', 'S', 'I', 'G', 'N', 0,
  /* 1971 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'F', 'M', 'I', 'N', 0,
  /* 1988 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'M', 'I', 'N', 0,
  /* 2005 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'S', 'M', 'I', 'N', 0,
  /* 2022 */ 'G', '_', 'S', 'M', 'I', 'N', 0,
  /* 2029 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'U', 'M', 'I', 'N', 0,
  /* 2046 */ 'G', '_', 'U', 'M', 'I', 'N', 0,
  /* 2053 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'I', 'N', 0,
  /* 2070 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'I', 'N', 0,
  /* 2086 */ 'G', '_', 'F', 'S', 'I', 'N', 0,
  /* 2093 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 2109 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 2126 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 2134 */ 'G', '_', 'U', 'S', 'U', 'B', 'O', 0,
  /* 2142 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 2150 */ 'G', '_', 'U', 'A', 'D', 'D', 'O', 0,
  /* 2158 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 2166 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 2174 */ 'G', '_', 'B', 'Z', 'E', 'R', 'O', 0,
  /* 2182 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 2191 */ 'G', '_', 'B', 'S', 'W', 'A', 'P', 0,
  /* 2199 */ 'S', 'L', 'E', 'E', 'P', 0,
  /* 2205 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 2214 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 2223 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 2230 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 2237 */ 'E', 'I', 'J', 'M', 'P', 0,
  /* 2243 */ 'N', 'O', 'P', 0,
  /* 2247 */ 'G', '_', 'C', 'T', 'P', 'O', 'P', 0,
  /* 2255 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 2268 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 2280 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 2295 */ 'P', 'R', 'E', 'A', 'L', 'L', 'O', 'C', 'A', 'T', 'E', 'D', '_', 'S', 'E', 'T', 'U', 'P', 0,
  /* 2314 */ 'G', '_', 'F', 'E', 'X', 'P', 0,
  /* 2321 */ 'L', 'D', 'D', 'W', 'R', 'd', 'Y', 'Q', 0,
  /* 2330 */ 'L', 'D', 'D', 'R', 'd', 'P', 't', 'r', 'Q', 0,
  /* 2340 */ 'L', 'D', 'D', 'W', 'R', 'd', 'P', 't', 'r', 'Q', 0,
  /* 2351 */ 'G', '_', 'B', 'R', 0,
  /* 2356 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', '_', 'B', 'R', 0,
  /* 2369 */ 'G', '_', 'B', 'L', 'O', 'C', 'K', '_', 'A', 'D', 'D', 'R', 0,
  /* 2382 */ 'W', 'D', 'R', 0,
  /* 2386 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 2411 */ 'G', '_', 'R', 'E', 'A', 'D', 'C', 'Y', 'C', 'L', 'E', 'C', 'O', 'U', 'N', 'T', 'E', 'R', 0,
  /* 2430 */ 'G', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'G', 'I', 'S', 'T', 'E', 'R', 0,
  /* 2446 */ 'G', '_', 'W', 'R', 'I', 'T', 'E', '_', 'R', 'E', 'G', 'I', 'S', 'T', 'E', 'R', 0,
  /* 2463 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 2470 */ 'G', '_', 'F', 'S', 'H', 'R', 0,
  /* 2477 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 2484 */ 'G', '_', 'F', 'F', 'L', 'O', 'O', 'R', 0,
  /* 2493 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 2508 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 2525 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'X', 'O', 'R', 0,
  /* 2541 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 2547 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'O', 'R', 0,
  /* 2563 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'O', 'R', 0,
  /* 2578 */ 'G', '_', 'O', 'R', 0,
  /* 2583 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'O', 'R', 0,
  /* 2598 */ 'G', '_', 'R', 'O', 'T', 'R', 0,
  /* 2605 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 2616 */ 'G', '_', 'F', 'A', 'B', 'S', 0,
  /* 2623 */ 'G', '_', 'A', 'B', 'S', 0,
  /* 2629 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 2646 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 2661 */ 'F', 'M', 'U', 'L', 'S', 0,
  /* 2667 */ 'G', '_', 'F', 'C', 'O', 'S', 0,
  /* 2674 */ 'G', '_', 'C', 'O', 'N', 'C', 'A', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', 'S', 0,
  /* 2691 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 2708 */ 'G', '_', 'I', 'S', '_', 'F', 'P', 'C', 'L', 'A', 'S', 'S', 0,
  /* 2721 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'W', 'I', 'T', 'H', '_', 'S', 'U', 'C', 'C', 'E', 'S', 'S', 0,
  /* 2751 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 2778 */ 'G', '_', 'S', 'S', 'U', 'B', 'S', 'A', 'T', 0,
  /* 2788 */ 'G', '_', 'U', 'S', 'U', 'B', 'S', 'A', 'T', 0,
  /* 2798 */ 'G', '_', 'S', 'A', 'D', 'D', 'S', 'A', 'T', 0,
  /* 2808 */ 'G', '_', 'U', 'A', 'D', 'D', 'S', 'A', 'T', 0,
  /* 2818 */ 'G', '_', 'S', 'S', 'H', 'L', 'S', 'A', 'T', 0,
  /* 2828 */ 'G', '_', 'U', 'S', 'H', 'L', 'S', 'A', 'T', 0,
  /* 2838 */ 'G', '_', 'S', 'M', 'U', 'L', 'F', 'I', 'X', 'S', 'A', 'T', 0,
  /* 2851 */ 'G', '_', 'U', 'M', 'U', 'L', 'F', 'I', 'X', 'S', 'A', 'T', 0,
  /* 2864 */ 'G', '_', 'S', 'D', 'I', 'V', 'F', 'I', 'X', 'S', 'A', 'T', 0,
  /* 2877 */ 'G', '_', 'U', 'D', 'I', 'V', 'F', 'I', 'X', 'S', 'A', 'T', 0,
  /* 2890 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 2900 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 2909 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 2922 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 2936 */ 'G', '_', 'M', 'E', 'M', 'S', 'E', 'T', 0,
  /* 2945 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 2969 */ 'G', '_', 'B', 'R', 'J', 'T', 0,
  /* 2976 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 2997 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 3017 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 3029 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 3040 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 3051 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 3062 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 3073 */ 'G', '_', 'F', 'R', 'I', 'N', 'T', 0,
  /* 3081 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'L', 'R', 'I', 'N', 'T', 0,
  /* 3099 */ 'G', '_', 'F', 'N', 'E', 'A', 'R', 'B', 'Y', 'I', 'N', 'T', 0,
  /* 3112 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 3122 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 3137 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 3146 */ 'G', '_', 'F', 'S', 'Q', 'R', 'T', 0,
  /* 3154 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'S', 'Q', 'R', 'T', 0,
  /* 3169 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 3179 */ 'G', '_', 'A', 'D', 'D', 'R', 'S', 'P', 'A', 'C', 'E', '_', 'C', 'A', 'S', 'T', 0,
  /* 3196 */ 'B', 'S', 'T', 0,
  /* 3200 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', '_', 'L', 'I', 'S', 'T', 0,
  /* 3215 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 3223 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 3230 */ 'G', '_', 'A', 'S', 'S', 'E', 'R', 'T', '_', 'S', 'E', 'X', 'T', 0,
  /* 3244 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 3253 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 3260 */ 'G', '_', 'A', 'S', 'S', 'E', 'R', 'T', '_', 'Z', 'E', 'X', 'T', 0,
  /* 3274 */ 'F', 'M', 'U', 'L', 'S', 'U', 0,
  /* 3281 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 3288 */ 'G', '_', 'S', 'T', 'R', 'I', 'C', 'T', '_', 'F', 'D', 'I', 'V', 0,
  /* 3302 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 3309 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 3316 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 3323 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'F', 'M', 'A', 'X', 0,
  /* 3340 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'M', 'A', 'X', 0,
  /* 3357 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'S', 'M', 'A', 'X', 0,
  /* 3374 */ 'G', '_', 'S', 'M', 'A', 'X', 0,
  /* 3381 */ 'G', '_', 'V', 'E', 'C', 'R', 'E', 'D', 'U', 'C', 'E', '_', 'U', 'M', 'A', 'X', 0,
  /* 3398 */ 'G', '_', 'U', 'M', 'A', 'X', 0,
  /* 3405 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'A', 'X', 0,
  /* 3422 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'A', 'X', 0,
  /* 3438 */ 'F', 'R', 'M', 'I', 'D', 'X', 0,
  /* 3445 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 3459 */ 'G', '_', 'S', 'B', 'F', 'X', 0,
  /* 3466 */ 'G', '_', 'U', 'B', 'F', 'X', 0,
  /* 3473 */ 'G', '_', 'S', 'M', 'U', 'L', 'F', 'I', 'X', 0,
  /* 3483 */ 'G', '_', 'U', 'M', 'U', 'L', 'F', 'I', 'X', 0,
  /* 3493 */ 'G', '_', 'S', 'D', 'I', 'V', 'F', 'I', 'X', 0,
  /* 3503 */ 'G', '_', 'U', 'D', 'I', 'V', 'F', 'I', 'X', 0,
  /* 3513 */ 'G', '_', 'M', 'E', 'M', 'C', 'P', 'Y', 0,
  /* 3522 */ 'C', 'O', 'P', 'Y', 0,
  /* 3527 */ 'G', '_', 'C', 'T', 'L', 'Z', 0,
  /* 3534 */ 'G', '_', 'C', 'T', 'T', 'Z', 0,
  /* 3541 */ 'E', 'L', 'P', 'M', 'B', 'R', 'd', 'Z', 0,
  /* 3550 */ 'E', 'L', 'P', 'M', 'R', 'd', 'Z', 0,
  /* 3558 */ 'E', 'L', 'P', 'M', 'W', 'R', 'd', 'Z', 0,
  /* 3567 */ 'S', 'B', 'I', 'C', 'A', 'b', 0,
  /* 3574 */ 'C', 'B', 'I', 'A', 'b', 0,
  /* 3580 */ 'S', 'B', 'I', 'A', 'b', 0,
  /* 3586 */ 'S', 'B', 'I', 'S', 'A', 'b', 0,
  /* 3593 */ 'L', 'D', 'R', 'd', 'P', 't', 'r', 'P', 'd', 0,
  /* 3603 */ 'L', 'D', 'W', 'R', 'd', 'P', 't', 'r', 'P', 'd', 0,
  /* 3614 */ 'R', 'O', 'L', 'B', 'R', 'd', 0,
  /* 3621 */ 'R', 'O', 'R', 'B', 'R', 'd', 0,
  /* 3628 */ 'D', 'E', 'C', 'R', 'd', 0,
  /* 3634 */ 'I', 'N', 'C', 'R', 'd', 0,
  /* 3640 */ 'N', 'E', 'G', 'R', 'd', 0,
  /* 3646 */ 'C', 'O', 'M', 'R', 'd', 0,
  /* 3652 */ 'L', 'S', 'L', 'B', 'N', 'R', 'd', 0,
  /* 3660 */ 'A', 'S', 'R', 'B', 'N', 'R', 'd', 0,
  /* 3668 */ 'L', 'S', 'R', 'B', 'N', 'R', 'd', 0,
  /* 3676 */ 'L', 'S', 'L', 'W', 'N', 'R', 'd', 0,
  /* 3684 */ 'A', 'S', 'R', 'W', 'N', 'R', 'd', 0,
  /* 3692 */ 'L', 'S', 'R', 'W', 'N', 'R', 'd', 0,
  /* 3700 */ 'S', 'W', 'A', 'P', 'R', 'd', 0,
  /* 3707 */ 'P', 'O', 'P', 'R', 'd', 0,
  /* 3713 */ 'R', 'O', 'R', 'R', 'd', 0,
  /* 3719 */ 'A', 'S', 'R', 'R', 'd', 0,
  /* 3725 */ 'L', 'S', 'R', 'R', 'd', 0,
  /* 3731 */ 'N', 'E', 'G', 'W', 'R', 'd', 0,
  /* 3738 */ 'R', 'O', 'L', 'W', 'R', 'd', 0,
  /* 3745 */ 'L', 'S', 'L', 'W', 'R', 'd', 0,
  /* 3752 */ 'C', 'O', 'M', 'W', 'R', 'd', 0,
  /* 3759 */ 'P', 'O', 'P', 'W', 'R', 'd', 0,
  /* 3766 */ 'R', 'O', 'R', 'W', 'R', 'd', 0,
  /* 3773 */ 'A', 'S', 'R', 'W', 'R', 'd', 0,
  /* 3780 */ 'L', 'S', 'R', 'W', 'R', 'd', 0,
  /* 3787 */ 'L', 'A', 'C', 'Z', 'R', 'd', 0,
  /* 3794 */ 'X', 'C', 'H', 'Z', 'R', 'd', 0,
  /* 3801 */ 'L', 'A', 'S', 'Z', 'R', 'd', 0,
  /* 3808 */ 'L', 'A', 'T', 'Z', 'R', 'd', 0,
  /* 3815 */ 'L', 'S', 'L', 'W', 'H', 'i', 'R', 'd', 0,
  /* 3824 */ 'A', 'S', 'R', 'W', 'L', 'o', 'R', 'd', 0,
  /* 3833 */ 'L', 'S', 'R', 'W', 'L', 'o', 'R', 'd', 0,
  /* 3842 */ 'A', 't', 'o', 'm', 'i', 'c', 'F', 'e', 'n', 'c', 'e', 0,
  /* 3854 */ 'S', 'P', 'M', 'Z', 'P', 'i', 0,
  /* 3861 */ 'E', 'L', 'P', 'M', 'B', 'R', 'd', 'Z', 'P', 'i', 0,
  /* 3872 */ 'E', 'L', 'P', 'M', 'R', 'd', 'Z', 'P', 'i', 0,
  /* 3882 */ 'E', 'L', 'P', 'M', 'W', 'R', 'd', 'Z', 'P', 'i', 0,
  /* 3893 */ 'L', 'D', 'R', 'd', 'P', 't', 'r', 'P', 'i', 0,
  /* 3903 */ 'L', 'D', 'W', 'R', 'd', 'P', 't', 'r', 'P', 'i', 0,
  /* 3914 */ 'B', 'R', 'G', 'E', 'k', 0,
  /* 3920 */ 'B', 'R', 'N', 'E', 'k', 0,
  /* 3926 */ 'B', 'R', 'S', 'H', 'k', 0,
  /* 3932 */ 'B', 'R', 'M', 'I', 'k', 0,
  /* 3938 */ 'R', 'C', 'A', 'L', 'L', 'k', 0,
  /* 3945 */ 'B', 'R', 'P', 'L', 'k', 0,
  /* 3951 */ 'B', 'R', 'L', 'O', 'k', 0,
  /* 3957 */ 'R', 'J', 'M', 'P', 'k', 0,
  /* 3963 */ 'B', 'R', 'E', 'Q', 'k', 0,
  /* 3969 */ 'B', 'R', 'L', 'T', 'k', 0,
  /* 3975 */ 'B', 'R', 'B', 'C', 's', 'k', 0,
  /* 3982 */ 'B', 'R', 'B', 'S', 's', 'k', 0,
  /* 3989 */ 'O', 'U', 'T', 'A', 'R', 'r', 0,
  /* 3996 */ 'O', 'U', 'T', 'W', 'A', 'R', 'r', 0,
  /* 4004 */ 'P', 'U', 'S', 'H', 'R', 'r', 0,
  /* 4011 */ 'S', 'T', 'S', 'K', 'R', 'r', 0,
  /* 4018 */ 'S', 'T', 'S', 'W', 'K', 'R', 'r', 0,
  /* 4026 */ 'S', 'T', 'D', 'S', 'P', 'Q', 'R', 'r', 0,
  /* 4035 */ 'S', 'T', 'D', 'W', 'S', 'P', 'Q', 'R', 'r', 0,
  /* 4045 */ 'S', 'T', 'D', 'P', 't', 'r', 'Q', 'R', 'r', 0,
  /* 4055 */ 'S', 'T', 'D', 'W', 'P', 't', 'r', 'Q', 'R', 'r', 0,
  /* 4066 */ 'P', 'U', 'S', 'H', 'W', 'R', 'r', 0,
  /* 4074 */ 'S', 'T', 'P', 't', 'r', 'P', 'd', 'R', 'r', 0,
  /* 4084 */ 'S', 'T', 'W', 'P', 't', 'r', 'P', 'd', 'R', 'r', 0,
  /* 4095 */ 'S', 'U', 'B', 'R', 'd', 'R', 'r', 0,
  /* 4103 */ 'S', 'B', 'C', 'R', 'd', 'R', 'r', 0,
  /* 4111 */ 'A', 'D', 'C', 'R', 'd', 'R', 'r', 0,
  /* 4119 */ 'C', 'P', 'C', 'R', 'd', 'R', 'r', 0,
  /* 4127 */ 'A', 'D', 'D', 'R', 'd', 'R', 'r', 0,
  /* 4135 */ 'A', 'N', 'D', 'R', 'd', 'R', 'r', 0,
  /* 4143 */ 'M', 'U', 'L', 'R', 'd', 'R', 'r', 0,
  /* 4151 */ 'C', 'P', 'R', 'd', 'R', 'r', 0,
  /* 4158 */ 'E', 'O', 'R', 'R', 'd', 'R', 'r', 0,
  /* 4166 */ 'M', 'U', 'L', 'S', 'R', 'd', 'R', 'r', 0,
  /* 4175 */ 'M', 'U', 'L', 'S', 'U', 'R', 'd', 'R', 'r', 0,
  /* 4185 */ 'M', 'O', 'V', 'R', 'd', 'R', 'r', 0,
  /* 4193 */ 'S', 'U', 'B', 'W', 'R', 'd', 'R', 'r', 0,
  /* 4202 */ 'S', 'B', 'C', 'W', 'R', 'd', 'R', 'r', 0,
  /* 4211 */ 'A', 'D', 'C', 'W', 'R', 'd', 'R', 'r', 0,
  /* 4220 */ 'C', 'P', 'C', 'W', 'R', 'd', 'R', 'r', 0,
  /* 4229 */ 'A', 'D', 'D', 'W', 'R', 'd', 'R', 'r', 0,
  /* 4238 */ 'A', 'N', 'D', 'W', 'R', 'd', 'R', 'r', 0,
  /* 4247 */ 'C', 'P', 'W', 'R', 'd', 'R', 'r', 0,
  /* 4255 */ 'E', 'O', 'R', 'W', 'R', 'd', 'R', 'r', 0,
  /* 4264 */ 'M', 'O', 'V', 'W', 'R', 'd', 'R', 'r', 0,
  /* 4273 */ 'S', 'T', 'P', 't', 'r', 'P', 'i', 'R', 'r', 0,
  /* 4283 */ 'S', 'T', 'W', 'P', 't', 'r', 'P', 'i', 'R', 'r', 0,
  /* 4294 */ 'S', 'T', 'P', 't', 'r', 'R', 'r', 0,
  /* 4302 */ 'S', 'T', 'W', 'P', 't', 'r', 'R', 'r', 0,
  /* 4311 */ 'L', 'D', 'R', 'd', 'P', 't', 'r', 0,
  /* 4319 */ 'L', 'D', 'W', 'R', 'd', 'P', 't', 'r', 0,
  /* 4328 */ 'B', 'C', 'L', 'R', 's', 0,
  /* 4334 */ 'B', 'S', 'E', 'T', 's', 0,
  0
};

extern const unsigned AVRInstrNameIndices[] = {
    1365U, 1870U, 2356U, 2093U, 1559U, 1540U, 1568U, 1713U, 
    1223U, 1238U, 1189U, 1265U, 2691U, 1091U, 3200U, 1202U, 
    1361U, 1549U, 933U, 3522U, 1005U, 3122U, 782U, 884U, 
    921U, 2182U, 1701U, 3051U, 867U, 2295U, 1328U, 3040U, 
    1028U, 2268U, 2255U, 2386U, 2922U, 2945U, 1633U, 1680U, 
    1653U, 1585U, 3230U, 3260U, 1944U, 691U, 379U, 1800U, 
    3302U, 3309U, 1827U, 1834U, 1841U, 1851U, 760U, 2578U, 
    2541U, 1187U, 1363U, 3445U, 1101U, 2890U, 2629U, 3137U, 
    2646U, 2493U, 465U, 2674U, 3062U, 2605U, 3169U, 1126U, 
    841U, 439U, 823U, 3081U, 1922U, 2411U, 592U, 536U, 
    566U, 577U, 517U, 547U, 1057U, 1041U, 2721U, 1279U, 
    1296U, 707U, 385U, 766U, 727U, 2583U, 2547U, 3422U, 
    2070U, 3405U, 2053U, 658U, 362U, 3340U, 1988U, 913U, 
    795U, 2909U, 417U, 2751U, 3244U, 457U, 3029U, 3017U, 
    3112U, 1320U, 3223U, 1252U, 3253U, 1612U, 2477U, 2463U, 
    1605U, 2470U, 2598U, 1718U, 2230U, 2223U, 2900U, 2150U, 
    954U, 2134U, 905U, 2142U, 946U, 2126U, 897U, 2166U, 
    2158U, 1353U, 1345U, 2808U, 2798U, 2788U, 2778U, 2828U, 
    2818U, 3473U, 3483U, 2838U, 2851U, 3493U, 3503U, 2864U, 
    2877U, 616U, 341U, 1742U, 309U, 510U, 3281U, 1806U, 
    3316U, 1392U, 2314U, 24U, 1313U, 16U, 0U, 1216U, 
    3215U, 429U, 1369U, 1383U, 2205U, 2214U, 2616U, 1959U, 
    2708U, 1135U, 1902U, 1912U, 962U, 977U, 1880U, 1891U, 
    697U, 1406U, 2022U, 3374U, 2046U, 3398U, 2623U, 814U, 
    804U, 2351U, 2969U, 2997U, 2976U, 2508U, 3534U, 1169U, 
    3527U, 1151U, 2247U, 2191U, 1070U, 1618U, 2667U, 2086U, 
    3146U, 2484U, 3073U, 3099U, 3179U, 2369U, 992U, 486U, 
    644U, 348U, 1770U, 3288U, 1813U, 315U, 3154U, 2430U, 
    2446U, 3513U, 1012U, 1116U, 2936U, 2174U, 623U, 1749U, 
    599U, 1725U, 3323U, 1971U, 675U, 1784U, 744U, 2563U, 
    2525U, 3357U, 2005U, 3381U, 2029U, 3459U, 3466U, 4211U, 
    4229U, 2109U, 2280U, 1515U, 4238U, 3660U, 3824U, 3684U, 
    3773U, 156U, 291U, 3842U, 48U, 192U, 61U, 204U, 
    77U, 219U, 119U, 257U, 32U, 177U, 140U, 276U, 
    93U, 234U, 3752U, 4220U, 4247U, 9U, 3541U, 3861U, 
    3558U, 3882U, 4255U, 3438U, 334U, 2340U, 2321U, 1507U, 
    1532U, 4319U, 3603U, 3903U, 3559U, 3883U, 3652U, 3815U, 
    3676U, 3745U, 3668U, 3833U, 3692U, 3780U, 113U, 252U, 
    162U, 296U, 3731U, 1524U, 4256U, 3996U, 3759U, 4066U, 
    3614U, 3738U, 3621U, 3766U, 107U, 247U, 134U, 271U, 
    1490U, 4202U, 3225U, 503U, 1083U, 4026U, 4055U, 4035U, 
    4018U, 4084U, 4283U, 4302U, 1481U, 4193U, 168U, 301U, 
    3255U, 4111U, 4127U, 1499U, 1444U, 4135U, 3719U, 4328U, 
    723U, 3975U, 3982U, 1400U, 3963U, 3914U, 3951U, 3969U, 
    3932U, 3920U, 3945U, 3926U, 4334U, 3196U, 3939U, 3574U, 
    3646U, 4119U, 1452U, 4151U, 1065U, 3628U, 1416U, 1626U, 
    2237U, 1861U, 3550U, 3872U, 4158U, 1737U, 2661U, 3274U, 
    1627U, 2238U, 3634U, 328U, 3958U, 3787U, 3801U, 3808U, 
    2330U, 1437U, 4311U, 3593U, 3893U, 1466U, 1862U, 3551U, 
    3873U, 3725U, 4185U, 4264U, 4143U, 4166U, 4175U, 3640U, 
    2243U, 1459U, 4159U, 3989U, 3707U, 4004U, 3938U, 2932U, 
    1378U, 3957U, 3713U, 1429U, 4103U, 3580U, 3567U, 3586U, 
    1473U, 401U, 409U, 2199U, 1866U, 3854U, 4045U, 4074U, 
    4273U, 4294U, 4011U, 1421U, 4095U, 3700U, 2382U, 3794U, 
};

static inline void InitAVRMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(AVRInsts, AVRInstrNameIndices, AVRInstrNameData, nullptr, nullptr, 432);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct AVRGenInstrInfo : public TargetInstrInfo {
  explicit AVRGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~AVRGenInstrInfo() override = default;

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
extern const MCInstrDesc AVRInsts[];
extern const unsigned AVRInstrNameIndices[];
extern const char AVRInstrNameData[];
AVRGenInstrInfo::AVRGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(AVRInsts, AVRInstrNameIndices, AVRInstrNameData, nullptr, nullptr, 432);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace AVR {
namespace OpName {
enum {
  OPERAND_LAST
};
} // end namespace OpName
} // end namespace AVR
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace AVR {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace AVR
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace AVR {
namespace OpTypes {
enum OperandType {
  LDDSTDPtrReg = 0,
  LDSTPtrReg = 1,
  brtarget_13 = 2,
  call_target = 3,
  f32imm = 4,
  f64imm = 5,
  i16imm = 6,
  i1imm = 7,
  i32imm = 8,
  i64imm = 9,
  i8imm = 10,
  imm16 = 11,
  imm_arith6 = 12,
  imm_com8 = 13,
  imm_ldi8 = 14,
  imm_port5 = 15,
  imm_port6 = 16,
  memri = 17,
  memspi = 18,
  ptype0 = 19,
  ptype1 = 20,
  ptype2 = 21,
  ptype3 = 22,
  ptype4 = 23,
  ptype5 = 24,
  rcalltarget_13 = 25,
  relbrtarget_7 = 26,
  type0 = 27,
  type1 = 28,
  type2 = 29,
  type3 = 30,
  type4 = 31,
  type5 = 32,
  untyped_imm_0 = 33,
  CCR = 34,
  DLDREGS = 35,
  DREGS = 36,
  DREGSLD8lo = 37,
  DREGSMOVW = 38,
  DREGSlo = 39,
  GPR8 = 40,
  GPR8lo = 41,
  GPRSP = 42,
  IWREGS = 43,
  LD8 = 44,
  LD8lo = 45,
  PTRDISPREGS = 46,
  PTRREGS = 47,
  ZREG = 48,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace AVR
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace AVR {
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
    /* ADCWRdRr */
    628,
    /* ADDWRdRr */
    631,
    /* ADJCALLSTACKDOWN */
    634,
    /* ADJCALLSTACKUP */
    636,
    /* ANDIWRdK */
    638,
    /* ANDWRdRr */
    641,
    /* ASRBNRd */
    644,
    /* ASRWLoRd */
    647,
    /* ASRWNRd */
    649,
    /* ASRWRd */
    652,
    /* Asr16 */
    654,
    /* Asr8 */
    657,
    /* AtomicFence */
    660,
    /* AtomicLoad16 */
    660,
    /* AtomicLoad8 */
    662,
    /* AtomicLoadAdd16 */
    664,
    /* AtomicLoadAdd8 */
    667,
    /* AtomicLoadAnd16 */
    670,
    /* AtomicLoadAnd8 */
    673,
    /* AtomicLoadOr16 */
    676,
    /* AtomicLoadOr8 */
    679,
    /* AtomicLoadSub16 */
    682,
    /* AtomicLoadSub8 */
    685,
    /* AtomicLoadXor16 */
    688,
    /* AtomicLoadXor8 */
    691,
    /* AtomicStore16 */
    694,
    /* AtomicStore8 */
    696,
    /* COMWRd */
    698,
    /* CPCWRdRr */
    700,
    /* CPWRdRr */
    702,
    /* CopyR1 */
    704,
    /* ELPMBRdZ */
    705,
    /* ELPMBRdZPi */
    708,
    /* ELPMWRdZ */
    711,
    /* ELPMWRdZPi */
    714,
    /* EORWRdRr */
    717,
    /* FRMIDX */
    720,
    /* INWRdA */
    723,
    /* LDDWRdPtrQ */
    725,
    /* LDDWRdYQ */
    728,
    /* LDIWRdK */
    731,
    /* LDSWRdK */
    733,
    /* LDWRdPtr */
    735,
    /* LDWRdPtrPd */
    737,
    /* LDWRdPtrPi */
    740,
    /* LPMWRdZ */
    743,
    /* LPMWRdZPi */
    745,
    /* LSLBNRd */
    747,
    /* LSLWHiRd */
    750,
    /* LSLWNRd */
    752,
    /* LSLWRd */
    755,
    /* LSRBNRd */
    757,
    /* LSRWLoRd */
    760,
    /* LSRWNRd */
    762,
    /* LSRWRd */
    765,
    /* Lsl16 */
    767,
    /* Lsl8 */
    770,
    /* Lsr16 */
    773,
    /* Lsr8 */
    776,
    /* NEGWRd */
    779,
    /* ORIWRdK */
    781,
    /* ORWRdRr */
    784,
    /* OUTWARr */
    787,
    /* POPWRd */
    789,
    /* PUSHWRr */
    790,
    /* ROLBRd */
    791,
    /* ROLWRd */
    793,
    /* RORBRd */
    795,
    /* RORWRd */
    797,
    /* Rol16 */
    799,
    /* Rol8 */
    802,
    /* Ror16 */
    805,
    /* Ror8 */
    808,
    /* SBCIWRdK */
    811,
    /* SBCWRdRr */
    814,
    /* SEXT */
    817,
    /* SPREAD */
    819,
    /* SPWRITE */
    821,
    /* STDSPQRr */
    823,
    /* STDWPtrQRr */
    826,
    /* STDWSPQRr */
    829,
    /* STSWKRr */
    832,
    /* STWPtrPdRr */
    834,
    /* STWPtrPiRr */
    838,
    /* STWPtrRr */
    842,
    /* SUBIWRdK */
    844,
    /* SUBWRdRr */
    847,
    /* Select16 */
    850,
    /* Select8 */
    854,
    /* ZEXT */
    858,
    /* ADCRdRr */
    860,
    /* ADDRdRr */
    863,
    /* ADIWRdK */
    866,
    /* ANDIRdK */
    869,
    /* ANDRdRr */
    872,
    /* ASRRd */
    875,
    /* BCLRs */
    877,
    /* BLD */
    878,
    /* BRBCsk */
    881,
    /* BRBSsk */
    883,
    /* BREAK */
    885,
    /* BREQk */
    885,
    /* BRGEk */
    886,
    /* BRLOk */
    887,
    /* BRLTk */
    888,
    /* BRMIk */
    889,
    /* BRNEk */
    890,
    /* BRPLk */
    891,
    /* BRSHk */
    892,
    /* BSETs */
    893,
    /* BST */
    894,
    /* CALLk */
    896,
    /* CBIAb */
    897,
    /* COMRd */
    899,
    /* CPCRdRr */
    901,
    /* CPIRdK */
    903,
    /* CPRdRr */
    905,
    /* CPSE */
    907,
    /* DECRd */
    909,
    /* DESK */
    911,
    /* EICALL */
    912,
    /* EIJMP */
    912,
    /* ELPM */
    912,
    /* ELPMRdZ */
    912,
    /* ELPMRdZPi */
    914,
    /* EORRdRr */
    916,
    /* FMUL */
    919,
    /* FMULS */
    921,
    /* FMULSU */
    923,
    /* ICALL */
    925,
    /* IJMP */
    925,
    /* INCRd */
    925,
    /* INRdA */
    927,
    /* JMPk */
    929,
    /* LACZRd */
    930,
    /* LASZRd */
    932,
    /* LATZRd */
    934,
    /* LDDRdPtrQ */
    936,
    /* LDIRdK */
    939,
    /* LDRdPtr */
    941,
    /* LDRdPtrPd */
    943,
    /* LDRdPtrPi */
    946,
    /* LDSRdK */
    949,
    /* LPM */
    951,
    /* LPMRdZ */
    951,
    /* LPMRdZPi */
    953,
    /* LSRRd */
    955,
    /* MOVRdRr */
    957,
    /* MOVWRdRr */
    959,
    /* MULRdRr */
    961,
    /* MULSRdRr */
    963,
    /* MULSURdRr */
    965,
    /* NEGRd */
    967,
    /* NOP */
    969,
    /* ORIRdK */
    969,
    /* ORRdRr */
    972,
    /* OUTARr */
    975,
    /* POPRd */
    977,
    /* PUSHRr */
    978,
    /* RCALLk */
    979,
    /* RET */
    980,
    /* RETI */
    980,
    /* RJMPk */
    980,
    /* RORRd */
    981,
    /* SBCIRdK */
    983,
    /* SBCRdRr */
    986,
    /* SBIAb */
    989,
    /* SBICAb */
    991,
    /* SBISAb */
    993,
    /* SBIWRdK */
    995,
    /* SBRCRrB */
    998,
    /* SBRSRrB */
    1000,
    /* SLEEP */
    1002,
    /* SPM */
    1002,
    /* SPMZPi */
    1002,
    /* STDPtrQRr */
    1003,
    /* STPtrPdRr */
    1006,
    /* STPtrPiRr */
    1010,
    /* STPtrRr */
    1014,
    /* STSKRr */
    1016,
    /* SUBIRdK */
    1018,
    /* SUBRdRr */
    1021,
    /* SWAPRd */
    1024,
    /* WDR */
    1026,
    /* XCHZRd */
    1026,
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
    /* ADCWRdRr */
    DREGS, DREGS, DREGS, 
    /* ADDWRdRr */
    DREGS, DREGS, DREGS, 
    /* ADJCALLSTACKDOWN */
    i16imm, i16imm, 
    /* ADJCALLSTACKUP */
    i16imm, i16imm, 
    /* ANDIWRdK */
    DLDREGS, DLDREGS, i16imm, 
    /* ANDWRdRr */
    DREGS, DREGS, DREGS, 
    /* ASRBNRd */
    LD8, GPR8, imm_ldi8, 
    /* ASRWLoRd */
    DREGS, DREGS, 
    /* ASRWNRd */
    DREGS, DREGS, imm16, 
    /* ASRWRd */
    DREGS, DREGS, 
    /* Asr16 */
    DREGS, DREGS, GPR8, 
    /* Asr8 */
    GPR8, GPR8, GPR8, 
    /* AtomicFence */
    /* AtomicLoad16 */
    DREGS, PTRDISPREGS, 
    /* AtomicLoad8 */
    GPR8, PTRREGS, 
    /* AtomicLoadAdd16 */
    DREGS, PTRDISPREGS, DREGS, 
    /* AtomicLoadAdd8 */
    GPR8, PTRREGS, GPR8, 
    /* AtomicLoadAnd16 */
    DREGS, PTRDISPREGS, DREGS, 
    /* AtomicLoadAnd8 */
    GPR8, PTRREGS, GPR8, 
    /* AtomicLoadOr16 */
    DREGS, PTRDISPREGS, DREGS, 
    /* AtomicLoadOr8 */
    GPR8, PTRREGS, GPR8, 
    /* AtomicLoadSub16 */
    DREGS, PTRDISPREGS, DREGS, 
    /* AtomicLoadSub8 */
    GPR8, PTRREGS, GPR8, 
    /* AtomicLoadXor16 */
    DREGS, PTRDISPREGS, DREGS, 
    /* AtomicLoadXor8 */
    GPR8, PTRREGS, GPR8, 
    /* AtomicStore16 */
    PTRDISPREGS, DREGS, 
    /* AtomicStore8 */
    PTRREGS, GPR8, 
    /* COMWRd */
    DREGS, DREGS, 
    /* CPCWRdRr */
    DREGS, DREGS, 
    /* CPWRdRr */
    DREGS, DREGS, 
    /* CopyR1 */
    GPR8, 
    /* ELPMBRdZ */
    GPR8, ZREG, LD8, 
    /* ELPMBRdZPi */
    GPR8, ZREG, LD8, 
    /* ELPMWRdZ */
    DREGS, ZREG, LD8, 
    /* ELPMWRdZPi */
    DREGS, ZREG, LD8, 
    /* EORWRdRr */
    DREGS, DREGS, DREGS, 
    /* FRMIDX */
    DLDREGS, DLDREGS, i16imm, 
    /* INWRdA */
    DREGS, imm_port6, 
    /* LDDWRdPtrQ */
    DREGS, PTRDISPREGS, i16imm, 
    /* LDDWRdYQ */
    DREGS, PTRDISPREGS, i16imm, 
    /* LDIWRdK */
    DLDREGS, i16imm, 
    /* LDSWRdK */
    DREGS, i16imm, 
    /* LDWRdPtr */
    DREGS, PTRDISPREGS, 
    /* LDWRdPtrPd */
    DREGS, PTRREGS, PTRREGS, 
    /* LDWRdPtrPi */
    DREGS, PTRREGS, PTRREGS, 
    /* LPMWRdZ */
    DREGS, ZREG, 
    /* LPMWRdZPi */
    DREGS, ZREG, 
    /* LSLBNRd */
    LD8, GPR8, imm_ldi8, 
    /* LSLWHiRd */
    DREGS, DREGS, 
    /* LSLWNRd */
    DLDREGS, DREGS, imm16, 
    /* LSLWRd */
    DREGS, DREGS, 
    /* LSRBNRd */
    LD8, GPR8, imm_ldi8, 
    /* LSRWLoRd */
    DREGS, DREGS, 
    /* LSRWNRd */
    DLDREGS, DREGS, imm16, 
    /* LSRWRd */
    DREGS, DREGS, 
    /* Lsl16 */
    DREGS, DREGS, GPR8, 
    /* Lsl8 */
    GPR8, GPR8, GPR8, 
    /* Lsr16 */
    DREGS, DREGS, GPR8, 
    /* Lsr8 */
    GPR8, GPR8, GPR8, 
    /* NEGWRd */
    DREGS, DREGS, 
    /* ORIWRdK */
    DLDREGS, DLDREGS, i16imm, 
    /* ORWRdRr */
    DREGS, DREGS, DREGS, 
    /* OUTWARr */
    imm_port6, DREGS, 
    /* POPWRd */
    DREGS, 
    /* PUSHWRr */
    DREGS, 
    /* ROLBRd */
    GPR8, GPR8, 
    /* ROLWRd */
    DREGS, DREGS, 
    /* RORBRd */
    GPR8, GPR8, 
    /* RORWRd */
    DREGS, DREGS, 
    /* Rol16 */
    DREGS, DREGS, GPR8, 
    /* Rol8 */
    GPR8, GPR8, GPR8, 
    /* Ror16 */
    DREGS, DREGS, GPR8, 
    /* Ror8 */
    GPR8, GPR8, GPR8, 
    /* SBCIWRdK */
    DLDREGS, DLDREGS, i16imm, 
    /* SBCWRdRr */
    DREGS, DREGS, DREGS, 
    /* SEXT */
    DREGS, GPR8, 
    /* SPREAD */
    DREGS, GPRSP, 
    /* SPWRITE */
    GPRSP, DREGS, 
    /* STDSPQRr */
    GPRSP, i16imm, GPR8, 
    /* STDWPtrQRr */
    PTRDISPREGS, i16imm, DREGS, 
    /* STDWSPQRr */
    GPRSP, i16imm, DREGS, 
    /* STSWKRr */
    i16imm, DREGS, 
    /* STWPtrPdRr */
    PTRREGS, PTRREGS, DREGS, i8imm, 
    /* STWPtrPiRr */
    PTRREGS, PTRREGS, DREGS, i8imm, 
    /* STWPtrRr */
    PTRDISPREGS, DREGS, 
    /* SUBIWRdK */
    DLDREGS, DLDREGS, i16imm, 
    /* SUBWRdRr */
    DREGS, DREGS, DREGS, 
    /* Select16 */
    DREGS, DREGS, DREGS, i8imm, 
    /* Select8 */
    GPR8, GPR8, GPR8, i8imm, 
    /* ZEXT */
    DREGS, GPR8, 
    /* ADCRdRr */
    GPR8, GPR8, GPR8, 
    /* ADDRdRr */
    GPR8, GPR8, GPR8, 
    /* ADIWRdK */
    IWREGS, IWREGS, imm_arith6, 
    /* ANDIRdK */
    LD8, LD8, imm_ldi8, 
    /* ANDRdRr */
    GPR8, GPR8, GPR8, 
    /* ASRRd */
    GPR8, GPR8, 
    /* BCLRs */
    i8imm, 
    /* BLD */
    GPR8, GPR8, i8imm, 
    /* BRBCsk */
    i8imm, relbrtarget_7, 
    /* BRBSsk */
    i8imm, relbrtarget_7, 
    /* BREAK */
    /* BREQk */
    relbrtarget_7, 
    /* BRGEk */
    relbrtarget_7, 
    /* BRLOk */
    relbrtarget_7, 
    /* BRLTk */
    relbrtarget_7, 
    /* BRMIk */
    relbrtarget_7, 
    /* BRNEk */
    relbrtarget_7, 
    /* BRPLk */
    relbrtarget_7, 
    /* BRSHk */
    relbrtarget_7, 
    /* BSETs */
    i8imm, 
    /* BST */
    GPR8, i8imm, 
    /* CALLk */
    call_target, 
    /* CBIAb */
    imm_port5, i8imm, 
    /* COMRd */
    GPR8, GPR8, 
    /* CPCRdRr */
    GPR8, GPR8, 
    /* CPIRdK */
    LD8, imm_ldi8, 
    /* CPRdRr */
    GPR8, GPR8, 
    /* CPSE */
    GPR8, GPR8, 
    /* DECRd */
    GPR8, GPR8, 
    /* DESK */
    i8imm, 
    /* EICALL */
    /* EIJMP */
    /* ELPM */
    /* ELPMRdZ */
    GPR8, ZREG, 
    /* ELPMRdZPi */
    GPR8, ZREG, 
    /* EORRdRr */
    GPR8, GPR8, GPR8, 
    /* FMUL */
    LD8lo, LD8lo, 
    /* FMULS */
    LD8lo, LD8lo, 
    /* FMULSU */
    LD8lo, LD8lo, 
    /* ICALL */
    /* IJMP */
    /* INCRd */
    GPR8, GPR8, 
    /* INRdA */
    GPR8, imm_port6, 
    /* JMPk */
    call_target, 
    /* LACZRd */
    GPR8, ZREG, 
    /* LASZRd */
    GPR8, ZREG, 
    /* LATZRd */
    GPR8, ZREG, 
    /* LDDRdPtrQ */
    GPR8, PTRDISPREGS, i16imm, 
    /* LDIRdK */
    LD8, imm_ldi8, 
    /* LDRdPtr */
    GPR8, PTRREGS, 
    /* LDRdPtrPd */
    GPR8, PTRREGS, PTRREGS, 
    /* LDRdPtrPi */
    GPR8, PTRREGS, PTRREGS, 
    /* LDSRdK */
    GPR8, imm16, 
    /* LPM */
    /* LPMRdZ */
    GPR8, ZREG, 
    /* LPMRdZPi */
    GPR8, ZREG, 
    /* LSRRd */
    GPR8, GPR8, 
    /* MOVRdRr */
    GPR8, GPR8, 
    /* MOVWRdRr */
    DREGS, DREGS, 
    /* MULRdRr */
    GPR8, GPR8, 
    /* MULSRdRr */
    LD8, LD8, 
    /* MULSURdRr */
    LD8lo, LD8lo, 
    /* NEGRd */
    GPR8, GPR8, 
    /* NOP */
    /* ORIRdK */
    LD8, LD8, imm_ldi8, 
    /* ORRdRr */
    GPR8, GPR8, GPR8, 
    /* OUTARr */
    imm_port6, GPR8, 
    /* POPRd */
    GPR8, 
    /* PUSHRr */
    GPR8, 
    /* RCALLk */
    rcalltarget_13, 
    /* RET */
    /* RETI */
    /* RJMPk */
    brtarget_13, 
    /* RORRd */
    GPR8, GPR8, 
    /* SBCIRdK */
    LD8, LD8, imm_ldi8, 
    /* SBCRdRr */
    GPR8, GPR8, GPR8, 
    /* SBIAb */
    imm_port5, i8imm, 
    /* SBICAb */
    imm_port5, i8imm, 
    /* SBISAb */
    imm_port5, i8imm, 
    /* SBIWRdK */
    IWREGS, IWREGS, imm_arith6, 
    /* SBRCRrB */
    GPR8, i8imm, 
    /* SBRSRrB */
    GPR8, i8imm, 
    /* SLEEP */
    /* SPM */
    /* SPMZPi */
    ZREG, 
    /* STDPtrQRr */
    PTRDISPREGS, i16imm, GPR8, 
    /* STPtrPdRr */
    PTRREGS, PTRREGS, GPR8, i8imm, 
    /* STPtrPiRr */
    PTRREGS, PTRREGS, GPR8, i8imm, 
    /* STPtrRr */
    PTRREGS, GPR8, 
    /* STSKRr */
    imm16, GPR8, 
    /* SUBIRdK */
    LD8, LD8, imm_ldi8, 
    /* SUBRdRr */
    GPR8, GPR8, GPR8, 
    /* SWAPRd */
    GPR8, GPR8, 
    /* WDR */
    /* XCHZRd */
    GPR8, ZREG, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace AVR
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

#ifdef GET_INSTRINFO_MEM_OPERAND_SIZE
#undef GET_INSTRINFO_MEM_OPERAND_SIZE
namespace llvm {
namespace AVR {
LLVM_READONLY
static int getMemOperandSize(int OpType) {
  switch (OpType) {
  default: return 0;
  }
}
} // end namespace AVR
} // end namespace llvm
#endif // GET_INSTRINFO_MEM_OPERAND_SIZE

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
namespace llvm {
namespace AVR {
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
} // end namespace AVR
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
namespace llvm {
namespace AVR {
LLVM_READONLY static int
getLogicalOperandType(uint16_t Opcode, uint16_t LogicalOpIdx) {
  return -1;
}
} // end namespace AVR
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP

#ifdef GET_INSTRINFO_MC_HELPER_DECLS
#undef GET_INSTRINFO_MC_HELPER_DECLS

namespace llvm {
class MCInst;
class FeatureBitset;

namespace AVR_MC {

void verifyInstructionPredicates(unsigned Opcode, const FeatureBitset &Features);

} // end namespace AVR_MC
} // end namespace llvm

#endif // GET_INSTRINFO_MC_HELPER_DECLS

#ifdef GET_INSTRINFO_MC_HELPERS
#undef GET_INSTRINFO_MC_HELPERS

namespace llvm {
namespace AVR_MC {

} // end namespace AVR_MC
} // end namespace llvm

#endif // GET_GENISTRINFO_MC_HELPERS

#ifdef ENABLE_INSTR_PREDICATE_VERIFIER
#undef ENABLE_INSTR_PREDICATE_VERIFIER
#include <sstream>

namespace llvm {
namespace AVR_MC {

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
  Feature_HasSRAMBit = 13,
  Feature_HasJMPCALLBit = 7,
  Feature_HasIJMPCALLBit = 6,
  Feature_HasEIJMPCALLBit = 3,
  Feature_HasADDSUBIWBit = 0,
  Feature_HasSmallStackBit = 14,
  Feature_HasMOVWBit = 10,
  Feature_HasLPMBit = 8,
  Feature_HasLPMXBit = 9,
  Feature_HasELPMBit = 4,
  Feature_HasELPMXBit = 5,
  Feature_HasSPMBit = 11,
  Feature_HasSPMXBit = 12,
  Feature_HasDESBit = 2,
  Feature_SupportsRMWBit = 17,
  Feature_SupportsMultiplicationBit = 16,
  Feature_HasBREAKBit = 1,
  Feature_HasTinyEncodingBit = 15,
};

#ifndef NDEBUG
static const char *SubtargetFeatureNames[] = {
  "Feature_HasADDSUBIW",
  "Feature_HasBREAK",
  "Feature_HasDES",
  "Feature_HasEIJMPCALL",
  "Feature_HasELPM",
  "Feature_HasELPMX",
  "Feature_HasIJMPCALL",
  "Feature_HasJMPCALL",
  "Feature_HasLPM",
  "Feature_HasLPMX",
  "Feature_HasMOVW",
  "Feature_HasSPM",
  "Feature_HasSPMX",
  "Feature_HasSRAM",
  "Feature_HasSmallStack",
  "Feature_HasTinyEncoding",
  "Feature_SupportsMultiplication",
  "Feature_SupportsRMW",
  nullptr
};

#endif // NDEBUG

FeatureBitset computeAvailableFeatures(const FeatureBitset &FB) {
  FeatureBitset Features;
  if (FB[AVR::FeatureSRAM])
    Features.set(Feature_HasSRAMBit);
  if (FB[AVR::FeatureJMPCALL])
    Features.set(Feature_HasJMPCALLBit);
  if (FB[AVR::FeatureIJMPCALL])
    Features.set(Feature_HasIJMPCALLBit);
  if (FB[AVR::FeatureEIJMPCALL])
    Features.set(Feature_HasEIJMPCALLBit);
  if (FB[AVR::FeatureADDSUBIW])
    Features.set(Feature_HasADDSUBIWBit);
  if (FB[AVR::FeatureSmallStack])
    Features.set(Feature_HasSmallStackBit);
  if (FB[AVR::FeatureMOVW])
    Features.set(Feature_HasMOVWBit);
  if (FB[AVR::FeatureLPM])
    Features.set(Feature_HasLPMBit);
  if (FB[AVR::FeatureLPMX])
    Features.set(Feature_HasLPMXBit);
  if (FB[AVR::FeatureELPM])
    Features.set(Feature_HasELPMBit);
  if (FB[AVR::FeatureELPMX])
    Features.set(Feature_HasELPMXBit);
  if (FB[AVR::FeatureSPM])
    Features.set(Feature_HasSPMBit);
  if (FB[AVR::FeatureSPMX])
    Features.set(Feature_HasSPMXBit);
  if (FB[AVR::FeatureDES])
    Features.set(Feature_HasDESBit);
  if (FB[AVR::FeatureRMW])
    Features.set(Feature_SupportsRMWBit);
  if (FB[AVR::FeatureMultiplication])
    Features.set(Feature_SupportsMultiplicationBit);
  if (FB[AVR::FeatureBREAK])
    Features.set(Feature_HasBREAKBit);
  if (FB[AVR::FeatureTinyEncoding])
    Features.set(Feature_HasTinyEncodingBit);
  return Features;
}

#ifndef NDEBUG
// Feature bitsets.
enum : uint8_t {
  CEFBS_None,
  CEFBS_HasADDSUBIW,
  CEFBS_HasBREAK,
  CEFBS_HasDES,
  CEFBS_HasEIJMPCALL,
  CEFBS_HasELPM,
  CEFBS_HasELPMX,
  CEFBS_HasIJMPCALL,
  CEFBS_HasJMPCALL,
  CEFBS_HasLPM,
  CEFBS_HasLPMX,
  CEFBS_HasMOVW,
  CEFBS_HasSPM,
  CEFBS_HasSPMX,
  CEFBS_HasSRAM,
  CEFBS_SupportsMultiplication,
  CEFBS_SupportsRMW,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // CEFBS_None
  {Feature_HasADDSUBIWBit, },
  {Feature_HasBREAKBit, },
  {Feature_HasDESBit, },
  {Feature_HasEIJMPCALLBit, },
  {Feature_HasELPMBit, },
  {Feature_HasELPMXBit, },
  {Feature_HasIJMPCALLBit, },
  {Feature_HasJMPCALLBit, },
  {Feature_HasLPMBit, },
  {Feature_HasLPMXBit, },
  {Feature_HasMOVWBit, },
  {Feature_HasSPMBit, },
  {Feature_HasSPMXBit, },
  {Feature_HasSRAMBit, },
  {Feature_SupportsMultiplicationBit, },
  {Feature_SupportsRMWBit, },
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
    CEFBS_None, // ADCWRdRr = 247
    CEFBS_None, // ADDWRdRr = 248
    CEFBS_None, // ADJCALLSTACKDOWN = 249
    CEFBS_None, // ADJCALLSTACKUP = 250
    CEFBS_None, // ANDIWRdK = 251
    CEFBS_None, // ANDWRdRr = 252
    CEFBS_None, // ASRBNRd = 253
    CEFBS_None, // ASRWLoRd = 254
    CEFBS_None, // ASRWNRd = 255
    CEFBS_None, // ASRWRd = 256
    CEFBS_None, // Asr16 = 257
    CEFBS_None, // Asr8 = 258
    CEFBS_None, // AtomicFence = 259
    CEFBS_None, // AtomicLoad16 = 260
    CEFBS_None, // AtomicLoad8 = 261
    CEFBS_None, // AtomicLoadAdd16 = 262
    CEFBS_None, // AtomicLoadAdd8 = 263
    CEFBS_None, // AtomicLoadAnd16 = 264
    CEFBS_None, // AtomicLoadAnd8 = 265
    CEFBS_None, // AtomicLoadOr16 = 266
    CEFBS_None, // AtomicLoadOr8 = 267
    CEFBS_None, // AtomicLoadSub16 = 268
    CEFBS_None, // AtomicLoadSub8 = 269
    CEFBS_None, // AtomicLoadXor16 = 270
    CEFBS_None, // AtomicLoadXor8 = 271
    CEFBS_None, // AtomicStore16 = 272
    CEFBS_None, // AtomicStore8 = 273
    CEFBS_None, // COMWRd = 274
    CEFBS_None, // CPCWRdRr = 275
    CEFBS_None, // CPWRdRr = 276
    CEFBS_None, // CopyR1 = 277
    CEFBS_HasELPMX, // ELPMBRdZ = 278
    CEFBS_HasELPMX, // ELPMBRdZPi = 279
    CEFBS_HasELPMX, // ELPMWRdZ = 280
    CEFBS_HasELPMX, // ELPMWRdZPi = 281
    CEFBS_None, // EORWRdRr = 282
    CEFBS_None, // FRMIDX = 283
    CEFBS_None, // INWRdA = 284
    CEFBS_HasSRAM, // LDDWRdPtrQ = 285
    CEFBS_HasSRAM, // LDDWRdYQ = 286
    CEFBS_None, // LDIWRdK = 287
    CEFBS_HasSRAM, // LDSWRdK = 288
    CEFBS_HasSRAM, // LDWRdPtr = 289
    CEFBS_HasSRAM, // LDWRdPtrPd = 290
    CEFBS_HasSRAM, // LDWRdPtrPi = 291
    CEFBS_HasLPMX, // LPMWRdZ = 292
    CEFBS_HasLPMX, // LPMWRdZPi = 293
    CEFBS_None, // LSLBNRd = 294
    CEFBS_None, // LSLWHiRd = 295
    CEFBS_None, // LSLWNRd = 296
    CEFBS_None, // LSLWRd = 297
    CEFBS_None, // LSRBNRd = 298
    CEFBS_None, // LSRWLoRd = 299
    CEFBS_None, // LSRWNRd = 300
    CEFBS_None, // LSRWRd = 301
    CEFBS_None, // Lsl16 = 302
    CEFBS_None, // Lsl8 = 303
    CEFBS_None, // Lsr16 = 304
    CEFBS_None, // Lsr8 = 305
    CEFBS_None, // NEGWRd = 306
    CEFBS_None, // ORIWRdK = 307
    CEFBS_None, // ORWRdRr = 308
    CEFBS_None, // OUTWARr = 309
    CEFBS_HasSRAM, // POPWRd = 310
    CEFBS_HasSRAM, // PUSHWRr = 311
    CEFBS_None, // ROLBRd = 312
    CEFBS_None, // ROLWRd = 313
    CEFBS_None, // RORBRd = 314
    CEFBS_None, // RORWRd = 315
    CEFBS_None, // Rol16 = 316
    CEFBS_None, // Rol8 = 317
    CEFBS_None, // Ror16 = 318
    CEFBS_None, // Ror8 = 319
    CEFBS_None, // SBCIWRdK = 320
    CEFBS_None, // SBCWRdRr = 321
    CEFBS_None, // SEXT = 322
    CEFBS_None, // SPREAD = 323
    CEFBS_None, // SPWRITE = 324
    CEFBS_None, // STDSPQRr = 325
    CEFBS_HasSRAM, // STDWPtrQRr = 326
    CEFBS_None, // STDWSPQRr = 327
    CEFBS_HasSRAM, // STSWKRr = 328
    CEFBS_HasSRAM, // STWPtrPdRr = 329
    CEFBS_HasSRAM, // STWPtrPiRr = 330
    CEFBS_HasSRAM, // STWPtrRr = 331
    CEFBS_None, // SUBIWRdK = 332
    CEFBS_None, // SUBWRdRr = 333
    CEFBS_None, // Select16 = 334
    CEFBS_None, // Select8 = 335
    CEFBS_None, // ZEXT = 336
    CEFBS_None, // ADCRdRr = 337
    CEFBS_None, // ADDRdRr = 338
    CEFBS_HasADDSUBIW, // ADIWRdK = 339
    CEFBS_None, // ANDIRdK = 340
    CEFBS_None, // ANDRdRr = 341
    CEFBS_None, // ASRRd = 342
    CEFBS_None, // BCLRs = 343
    CEFBS_None, // BLD = 344
    CEFBS_None, // BRBCsk = 345
    CEFBS_None, // BRBSsk = 346
    CEFBS_HasBREAK, // BREAK = 347
    CEFBS_None, // BREQk = 348
    CEFBS_None, // BRGEk = 349
    CEFBS_None, // BRLOk = 350
    CEFBS_None, // BRLTk = 351
    CEFBS_None, // BRMIk = 352
    CEFBS_None, // BRNEk = 353
    CEFBS_None, // BRPLk = 354
    CEFBS_None, // BRSHk = 355
    CEFBS_None, // BSETs = 356
    CEFBS_None, // BST = 357
    CEFBS_HasJMPCALL, // CALLk = 358
    CEFBS_None, // CBIAb = 359
    CEFBS_None, // COMRd = 360
    CEFBS_None, // CPCRdRr = 361
    CEFBS_None, // CPIRdK = 362
    CEFBS_None, // CPRdRr = 363
    CEFBS_None, // CPSE = 364
    CEFBS_None, // DECRd = 365
    CEFBS_HasDES, // DESK = 366
    CEFBS_HasEIJMPCALL, // EICALL = 367
    CEFBS_HasEIJMPCALL, // EIJMP = 368
    CEFBS_HasELPM, // ELPM = 369
    CEFBS_HasELPMX, // ELPMRdZ = 370
    CEFBS_HasELPMX, // ELPMRdZPi = 371
    CEFBS_None, // EORRdRr = 372
    CEFBS_SupportsMultiplication, // FMUL = 373
    CEFBS_SupportsMultiplication, // FMULS = 374
    CEFBS_SupportsMultiplication, // FMULSU = 375
    CEFBS_HasIJMPCALL, // ICALL = 376
    CEFBS_HasIJMPCALL, // IJMP = 377
    CEFBS_None, // INCRd = 378
    CEFBS_None, // INRdA = 379
    CEFBS_HasJMPCALL, // JMPk = 380
    CEFBS_SupportsRMW, // LACZRd = 381
    CEFBS_SupportsRMW, // LASZRd = 382
    CEFBS_SupportsRMW, // LATZRd = 383
    CEFBS_HasSRAM, // LDDRdPtrQ = 384
    CEFBS_None, // LDIRdK = 385
    CEFBS_HasSRAM, // LDRdPtr = 386
    CEFBS_HasSRAM, // LDRdPtrPd = 387
    CEFBS_HasSRAM, // LDRdPtrPi = 388
    CEFBS_HasSRAM, // LDSRdK = 389
    CEFBS_HasLPM, // LPM = 390
    CEFBS_HasLPMX, // LPMRdZ = 391
    CEFBS_HasLPMX, // LPMRdZPi = 392
    CEFBS_None, // LSRRd = 393
    CEFBS_None, // MOVRdRr = 394
    CEFBS_HasMOVW, // MOVWRdRr = 395
    CEFBS_SupportsMultiplication, // MULRdRr = 396
    CEFBS_SupportsMultiplication, // MULSRdRr = 397
    CEFBS_SupportsMultiplication, // MULSURdRr = 398
    CEFBS_None, // NEGRd = 399
    CEFBS_None, // NOP = 400
    CEFBS_None, // ORIRdK = 401
    CEFBS_None, // ORRdRr = 402
    CEFBS_None, // OUTARr = 403
    CEFBS_HasSRAM, // POPRd = 404
    CEFBS_HasSRAM, // PUSHRr = 405
    CEFBS_None, // RCALLk = 406
    CEFBS_None, // RET = 407
    CEFBS_None, // RETI = 408
    CEFBS_None, // RJMPk = 409
    CEFBS_None, // RORRd = 410
    CEFBS_None, // SBCIRdK = 411
    CEFBS_None, // SBCRdRr = 412
    CEFBS_None, // SBIAb = 413
    CEFBS_None, // SBICAb = 414
    CEFBS_None, // SBISAb = 415
    CEFBS_HasADDSUBIW, // SBIWRdK = 416
    CEFBS_None, // SBRCRrB = 417
    CEFBS_None, // SBRSRrB = 418
    CEFBS_None, // SLEEP = 419
    CEFBS_HasSPM, // SPM = 420
    CEFBS_HasSPMX, // SPMZPi = 421
    CEFBS_HasSRAM, // STDPtrQRr = 422
    CEFBS_HasSRAM, // STPtrPdRr = 423
    CEFBS_HasSRAM, // STPtrPiRr = 424
    CEFBS_HasSRAM, // STPtrRr = 425
    CEFBS_HasSRAM, // STSKRr = 426
    CEFBS_None, // SUBIRdK = 427
    CEFBS_None, // SUBRdRr = 428
    CEFBS_None, // SWAPRd = 429
    CEFBS_None, // WDR = 430
    CEFBS_SupportsRMW, // XCHZRd = 431
  };

  assert(Opcode < 432);
  FeatureBitset AvailableFeatures = computeAvailableFeatures(Features);
  const FeatureBitset &RequiredFeatures = FeatureBitsets[RequiredFeaturesRefs[Opcode]];
  FeatureBitset MissingFeatures =
      (AvailableFeatures & RequiredFeatures) ^
      RequiredFeatures;
  if (MissingFeatures.any()) {
    std::ostringstream Msg;
    Msg << "Attempting to emit " << &AVRInstrNameData[AVRInstrNameIndices[Opcode]]
        << " instruction but the ";
    for (unsigned i = 0, e = MissingFeatures.size(); i != e; ++i)
      if (MissingFeatures.test(i))
        Msg << SubtargetFeatureNames[i] << " ";
    Msg << "predicate(s) are not met";
    report_fatal_error(Msg.str().c_str());
  }
#endif // NDEBUG
}
} // end namespace AVR_MC
} // end namespace llvm
#endif // ENABLE_INSTR_PREDICATE_VERIFIER

