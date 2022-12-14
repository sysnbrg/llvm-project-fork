// RUN: llvm-mc -triple=aarch64 -show-encoding -mattr=+sme < %s \
// RUN:        | FileCheck %s --check-prefixes=CHECK-ENCODING,CHECK-INST
// RUN: not llvm-mc -triple=aarch64 -show-encoding < %s 2>&1 \
// RUN:        | FileCheck %s --check-prefix=CHECK-ERROR
// RUN: llvm-mc -triple=aarch64 -filetype=obj -mattr=+sme < %s \
// RUN:        | llvm-objdump -d --mattr=+sme - | FileCheck %s --check-prefix=CHECK-INST
// RUN: llvm-mc -triple=aarch64 -filetype=obj -mattr=+sme < %s \
// RUN:   | llvm-objdump -d --mattr=-sme - | FileCheck %s --check-prefix=CHECK-UNKNOWN
// Disassemble encoding and check the re-encoding (-show-encoding) matches.
// RUN: llvm-mc -triple=aarch64 -show-encoding -mattr=+sme < %s \
// RUN:        | sed '/.text/d' | sed 's/.*encoding: //g' \
// RUN:        | llvm-mc -triple=aarch64 -mattr=+sme -disassemble -show-encoding \
// RUN:        | FileCheck %s --check-prefixes=CHECK-ENCODING,CHECK-INST

bfmopa  za0.s, p0/m, p0/m, z0.h, z0.h
// CHECK-INST: bfmopa  za0.s, p0/m, p0/m, z0.h, z0.h
// CHECK-ENCODING: [0x00,0x00,0x80,0x81]
// CHECK-ERROR: instruction requires: sme
// CHECK-UNKNOWN: 81800000 <unknown>

bfmopa  za1.s, p5/m, p2/m, z10.h, z21.h
// CHECK-INST: bfmopa  za1.s, p5/m, p2/m, z10.h, z21.h
// CHECK-ENCODING: [0x41,0x55,0x95,0x81]
// CHECK-ERROR: instruction requires: sme
// CHECK-UNKNOWN: 81955541 <unknown>

bfmopa  za3.s, p3/m, p7/m, z13.h, z8.h
// CHECK-INST: bfmopa  za3.s, p3/m, p7/m, z13.h, z8.h
// CHECK-ENCODING: [0xa3,0xed,0x88,0x81]
// CHECK-ERROR: instruction requires: sme
// CHECK-UNKNOWN: 8188eda3 <unknown>

bfmopa  za3.s, p7/m, p7/m, z31.h, z31.h
// CHECK-INST: bfmopa  za3.s, p7/m, p7/m, z31.h, z31.h
// CHECK-ENCODING: [0xe3,0xff,0x9f,0x81]
// CHECK-ERROR: instruction requires: sme
// CHECK-UNKNOWN: 819fffe3 <unknown>

bfmopa  za1.s, p3/m, p0/m, z17.h, z16.h
// CHECK-INST: bfmopa  za1.s, p3/m, p0/m, z17.h, z16.h
// CHECK-ENCODING: [0x21,0x0e,0x90,0x81]
// CHECK-ERROR: instruction requires: sme
// CHECK-UNKNOWN: 81900e21 <unknown>

bfmopa  za1.s, p1/m, p4/m, z1.h, z30.h
// CHECK-INST: bfmopa  za1.s, p1/m, p4/m, z1.h, z30.h
// CHECK-ENCODING: [0x21,0x84,0x9e,0x81]
// CHECK-ERROR: instruction requires: sme
// CHECK-UNKNOWN: 819e8421 <unknown>

bfmopa  za0.s, p5/m, p2/m, z19.h, z20.h
// CHECK-INST: bfmopa  za0.s, p5/m, p2/m, z19.h, z20.h
// CHECK-ENCODING: [0x60,0x56,0x94,0x81]
// CHECK-ERROR: instruction requires: sme
// CHECK-UNKNOWN: 81945660 <unknown>

bfmopa  za0.s, p6/m, p0/m, z12.h, z2.h
// CHECK-INST: bfmopa  za0.s, p6/m, p0/m, z12.h, z2.h
// CHECK-ENCODING: [0x80,0x19,0x82,0x81]
// CHECK-ERROR: instruction requires: sme
// CHECK-UNKNOWN: 81821980 <unknown>

bfmopa  za1.s, p2/m, p6/m, z1.h, z26.h
// CHECK-INST: bfmopa  za1.s, p2/m, p6/m, z1.h, z26.h
// CHECK-ENCODING: [0x21,0xc8,0x9a,0x81]
// CHECK-ERROR: instruction requires: sme
// CHECK-UNKNOWN: 819ac821 <unknown>

bfmopa  za1.s, p2/m, p0/m, z22.h, z30.h
// CHECK-INST: bfmopa  za1.s, p2/m, p0/m, z22.h, z30.h
// CHECK-ENCODING: [0xc1,0x0a,0x9e,0x81]
// CHECK-ERROR: instruction requires: sme
// CHECK-UNKNOWN: 819e0ac1 <unknown>

bfmopa  za2.s, p5/m, p7/m, z9.h, z1.h
// CHECK-INST: bfmopa  za2.s, p5/m, p7/m, z9.h, z1.h
// CHECK-ENCODING: [0x22,0xf5,0x81,0x81]
// CHECK-ERROR: instruction requires: sme
// CHECK-UNKNOWN: 8181f522 <unknown>

bfmopa  za3.s, p2/m, p5/m, z12.h, z11.h
// CHECK-INST: bfmopa  za3.s, p2/m, p5/m, z12.h, z11.h
// CHECK-ENCODING: [0x83,0xa9,0x8b,0x81]
// CHECK-ERROR: instruction requires: sme
// CHECK-UNKNOWN: 818ba983 <unknown>

