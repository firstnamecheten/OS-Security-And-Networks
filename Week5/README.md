# Week 5 - Auditing Text and Initialized Data Segments using GDB

## Introduction

This lab explores how executable programs are organized in memory. Modern operating systems separate machine instructions, read-only constants, and initialized variables into different memory segments. Using GDB (GNU Debugger), we inspect the .text, .rodata, .data, and .bss sections of an executable and verify how memory is allocated during program execution.

---

## Learning Objectives

- Understand the purpose of the .text memory segment.
- Understand the purpose of the .rodata memory segment.
- Understand the purpose of the .data memory segment.
- Learn how to compile programs with debugging symbols.
- Learn how to use GDB for debugging.
- Examine memory layouts and executable section mappings.
- Understand little-endian memory representation.
- Analyze ELF executable structures.
---

## Program Description

### demo2.c

The program demonstrates:

- Initialized global variables stored in .data
- Read-only string literals stored in .rodata
- Function instructions stored in .text
- Runtime memory address inspection

The program prints:

```text
Addresses:
Data (Global Initialized): ...
Text String (ROData): ...
Text Code (Function): ...
```

---

## Compile Program

### Compile with Debug Symbols

```bash
gcc -g demo2.c -o demo2
```

Expected Result:

A debug-enabled executable named:

```text
demo2
```

is generated.

---

## Running GDB

### Start GDB

```bash
gdb ./demo2
```

### Set Breakpoint

```bash
break 22
```

### Execute Program

```bash
run
```

Expected Result:

```text
Breakpoint 1 at ...
```

The program stops before completion allowing memory inspection.

---

## Mapping Memory Sections

### Display ELF Section Layout

```bash
info files
```

Expected Result:

Displays section ranges including:

```text
.text
.rodata
.data
.bss
```

Example observations:

```text
.text    -> Program Instructions
.rodata  -> Read-only constants
.data    -> Initialized variables
.bss     -> Uninitialized variables
```

---

## Memory Inspection

### Display Address of Global Variable

```bash
print &data_global_var
```

### Examine Variable Value

```bash
x/wx &data_global_var
```

Expected Result:

```text
0x12345678
```

The initialized value is stored correctly within the .data section.

---

### Display String Literal

```bash
print text_string_literal
```

### Display String Contents

```bash
x/s text_string_literal
```

Expected Result:

```text
Text_Segment_Verification
```

The string is stored in the .rodata section.

---

## Memory Sections Overview

| Section | Purpose |
|----------|----------|
| .text | Executable machine instructions |
| .rodata | Read-only constants and string literals |
| .data | Initialized global variables |
| .bss | Uninitialized global variables |

---

## Observations

- Function code was stored inside the .text section.
- String literals were stored inside the .rodata section.
- Initialized global variables were stored inside the .data section.
- The .data section occupied a lower address range than .bss.
- The executable followed the ELF64 format.
- GDB successfully mapped memory addresses to their corresponding sections.

---

## Summary of Results

This lab demonstrated how Linux organizes executable programs into separate memory regions. Using GDB, memory addresses were inspected and verified against ELF section boundaries. The results confirmed that executable instructions, read-only constants, and initialized variables are stored in different memory segments for security, performance, and memory management purposes. Additionally, the experiment verified little-endian byte ordering used by x86-64 systems.

---

## Quick Reference Commands

| Command | Purpose |
|----------|----------|
| gcc -g demo2.c -o demo2 | Compile with debugging symbols |
| gdb ./demo2 | Launch GDB |
| break 22 | Set breakpoint |
| run | Execute program |
| info files | Display ELF section layout |
| print &variable | Display variable address |
| x/wx address | Examine memory in hexadecimal |
| x/s address | Display string contents |
| continue | Resume execution |
| quit | Exit GDB |

