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
PREFIX(prefix_3, {"--" COMMA "-" COMMA nullptr})
#undef COMMA
#endif // PREFIX

/////////
// Groups

#ifdef OPTION

//////////
// Options

OPTION(prefix_0, &"<input>"[0], INPUT, Input, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_0, &"<unknown>"[0], UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--garbage-collection"[2], garbage_collection, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do garbage collection for debug info(default)", nullptr, nullptr)
OPTION(prefix_1, &"--help"[2], help, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Prints this help output", nullptr, nullptr)
OPTION(prefix_2, &"-h"[1], h, Flag, INVALID, help, nullptr, 0, 0,
       "Alias for --help", nullptr, nullptr)
OPTION(prefix_2, &"-j"[1], anonymous_1, Separate, INVALID, threads, nullptr, 0, 0,
       "Alias for --num-threads", nullptr, nullptr)
OPTION(prefix_1, &"--no-garbage-collection"[2], no_garbage_collection, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Don`t do garbage collection for debug info", nullptr, nullptr)
OPTION(prefix_1, &"--no-odr-deduplication"[2], no_odr_deduplication, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Don`t do ODR deduplication for debug types", nullptr, nullptr)
OPTION(prefix_1, &"--no-odr"[2], no_odr, Flag, INVALID, no_odr_deduplication, nullptr, 0, 0,
       "Alias for --no-odr-deduplication", nullptr, nullptr)
OPTION(prefix_1, &"--no-separate-debug-file"[2], no_separate_debug_file, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Create single output file, containing debug tables(default)", nullptr, nullptr)
OPTION(prefix_3, &"--num-threads"[2], threads, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Number of available threads for multi-threaded execution. Defaults to the number of cores on the current machine", "<threads>", nullptr)
OPTION(prefix_1, &"--odr-deduplication"[2], odr_deduplication, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do ODR deduplication for debug types(default)", nullptr, nullptr)
OPTION(prefix_1, &"--odr"[2], odr, Flag, INVALID, odr_deduplication, nullptr, 0, 0,
       "Alias for --odr-deduplication", nullptr, nullptr)
OPTION(prefix_1, &"--separate-debug-file"[2], separate_debug_file, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Create two output files: file w/o debug tables and file with debug tables", nullptr, nullptr)
OPTION(prefix_3, &"--tombstone="[2], anonymous_0, Joined, INVALID, tombstone, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, &"--tombstone"[2], tombstone, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Tombstone value used as a marker of invalid address(default: universal)\n    =bfd - Zero for all addresses and [1,1] for DWARF v4 (or less) address ranges and exec\n    =maxpc - Minus 1 for all addresses and minus 2 for DWARF v4 (or less) address ranges\n    =exec - Match with address ranges of executable sections\n    =universal - Both: bfd and maxpc", "[bfd,maxpc,exec,universal]", nullptr)
OPTION(prefix_1, &"--verbose"[2], verbose, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Enable verbose logging", nullptr, nullptr)
OPTION(prefix_1, &"--verify"[2], verify, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Run the DWARF verifier on the resulting debug info", nullptr, nullptr)
OPTION(prefix_1, &"--version"[2], version, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print the version and exit", nullptr, nullptr)
OPTION(prefix_2, &"-V"[1], V, Flag, INVALID, version, nullptr, 0, 0,
       "Alias for --version", nullptr, nullptr)
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
