/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Option Parsing Definitions                                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/////////
// Prefixes

#ifdef PREFIX
#define COMMA ,
PREFIX(prefix_0, {nullptr})
PREFIX(prefix_2, {"-" COMMA nullptr})
PREFIX(prefix_1, {"--" COMMA nullptr})
#undef COMMA
#endif // PREFIX

/////////
// Groups

#ifdef OPTION

//////////
// Options

OPTION(prefix_0, &"<input>"[0], INPUT, Input, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_0, &"<unknown>"[0], UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--arch="[2], arch_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Specify the architecture, e.g. x86_64", nullptr, nullptr)
OPTION(prefix_1, &"--arch"[2], anonymous_0, Separate, INVALID, arch_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--bitwidth="[2], bitwidth_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Specify the bit width", nullptr, nullptr)
OPTION(prefix_1, &"--bitwidth"[2], anonymous_1, Separate, INVALID, bitwidth_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--endianness="[2], endianness_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Specify the endianness", nullptr, nullptr)
OPTION(prefix_1, &"--endianness"[2], anonymous_2, Separate, INVALID, endianness_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--exclude="[2], exclude_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Remove symbols which match the pattern. Can be specified multiple times", nullptr, nullptr)
OPTION(prefix_1, &"--exclude"[2], anonymous_3, Separate, INVALID, exclude_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--help"[2], help, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display this help", nullptr, nullptr)
OPTION(prefix_1, &"--hint-ifs-target="[2], hint_ifs_target_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "When --output-format is 'IFS', this flag will hint the expected target triple for IFS output", nullptr, nullptr)
OPTION(prefix_1, &"--hint-ifs-target"[2], anonymous_5, Separate, INVALID, hint_ifs_target_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"-h"[1], anonymous_4, Flag, INVALID, help, nullptr, 0, 0,
       "Alias for --help", nullptr, nullptr)
OPTION(prefix_1, &"--input-format="[2], input_format_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Specify the input file format", nullptr, nullptr)
OPTION(prefix_1, &"--input-format"[2], anonymous_7, Separate, INVALID, input_format_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--input="[2], input_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "input", nullptr, nullptr)
OPTION(prefix_1, &"--input"[2], anonymous_6, Separate, INVALID, input_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--output-elf="[2], output_elf_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Output path for ELF file", nullptr, nullptr)
OPTION(prefix_1, &"--output-elf"[2], anonymous_10, Separate, INVALID, output_elf_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--output-format="[2], output_format_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Specify the output file format **DEPRECATED**", nullptr, nullptr)
OPTION(prefix_1, &"--output-format"[2], anonymous_11, Separate, INVALID, output_format_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--output-ifs="[2], output_ifs_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Output path for IFS file", nullptr, nullptr)
OPTION(prefix_1, &"--output-ifs"[2], anonymous_12, Separate, INVALID, output_ifs_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--output-tbd="[2], output_tbd_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Output path for TBD file", nullptr, nullptr)
OPTION(prefix_1, &"--output-tbd"[2], anonymous_13, Separate, INVALID, output_tbd_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--output="[2], output_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Output file **DEPRECATED**", nullptr, nullptr)
OPTION(prefix_1, &"--output"[2], anonymous_8, Separate, INVALID, output_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"-o"[1], anonymous_9, Separate, INVALID, output_EQ, nullptr, 0, 0,
       "Alias for --output", nullptr, nullptr)
OPTION(prefix_1, &"--soname="[2], soname_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "name", nullptr, nullptr)
OPTION(prefix_1, &"--soname"[2], anonymous_14, Separate, INVALID, soname_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--strip-ifs-arch"[2], strip_ifs_arch, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Strip target architecture information away from IFS output", nullptr, nullptr)
OPTION(prefix_1, &"--strip-ifs-bitwidth"[2], strip_ifs_bitwidth, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Strip target bit width information away from IFS output", nullptr, nullptr)
OPTION(prefix_1, &"--strip-ifs-endianness"[2], strip_ifs_endianness, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Strip target endianness information away from IFS output", nullptr, nullptr)
OPTION(prefix_1, &"--strip-ifs-target"[2], strip_ifs_target, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Strip all target information away from IFS output", nullptr, nullptr)
OPTION(prefix_1, &"--strip-needed"[2], strip_needed, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Strip needed libs from output", nullptr, nullptr)
OPTION(prefix_1, &"--strip-size"[2], strip_size, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove object size from the output", nullptr, nullptr)
OPTION(prefix_1, &"--strip-undefined"[2], strip_undefined, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Strip undefined symbols from IFS output", nullptr, nullptr)
OPTION(prefix_1, &"--target="[2], target_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Specify the target triple, e.g. x86_64-linux-gnu", nullptr, nullptr)
OPTION(prefix_1, &"--target"[2], anonymous_15, Separate, INVALID, target_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--version"[2], version, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the version", nullptr, nullptr)
OPTION(prefix_2, &"-V"[1], anonymous_16, Flag, INVALID, version, nullptr, 0, 0,
       "Alias for --version", nullptr, nullptr)
OPTION(prefix_1, &"--write-if-changed"[2], write_if_changed, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Write the output file only if it is new or has changed", nullptr, nullptr)
#endif // OPTION

#ifdef SIMPLE_ENUM_VALUE_TABLE

struct SimpleEnumValue {
  const char *Name;
  unsigned Value;
};

struct SimpleEnumValueTable {
  const SimpleEnumValue *Table;
  unsigned Size;
};
static const SimpleEnumValueTable SimpleEnumValueTables[] = {};
static const unsigned SimpleEnumValueTablesSize = sizeof(SimpleEnumValueTables) / sizeof(SimpleEnumValueTable);
#endif // SIMPLE_ENUM_VALUE_TABLE


#ifdef OPTTABLE_ARG_INIT
//////////
// Option Values


#endif // OPTTABLE_ARG_INIT
