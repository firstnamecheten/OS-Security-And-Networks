# Week 4 - A Practical Approach to Understanding System Internals ( Data Types and OS Memory Management )

---

## Introduction

This lab explores how the operating system allocates memory for different data types and how a process is organized into separate memory segments such as Text, Data, BSS, Heap, and Stack. 【2-08fb72】

---

## Learning Objectives

- Understand fundamental C data types.
- Learn how memory is allocated by the OS.
- Explore process memory segments.
- Understand stack and heap memory.
- Learn pointer usage.
- Analyze memory addresses.

---

## Lab 1 - Data Type Size Exploration

Compile:

```bash
gcc file1.c -o file1
```

Run:

```bash
./file1
```

Expected Result:

```text
char: 1 bytes
int: 4 bytes
float: 4 bytes
double: 8 bytes
long: 8 bytes
pointer: 8 bytes
```

Demonstrates data type sizes on a 64-bit Linux system. 【2-08fb72】

---

## Lab 2 - Memory Segment Address Mapping

Compile:

```bash
gcc file2.c -o file2
```

Run:

```bash
./file2
```

Expected Result:

```text
global_var: address
bss_var: address
local_var: address
local_static: address
heap_var ptr: address
*heap_var: address
```

Observ*tions:

- Stack addresses are high*
- Heap addresses are lower than s*ack addresses.
- Global and static*variables live in Data/BSS segment*. 【2-08fb72】

---

## Lab 3 - Poin*er*and Heap Allocation

*ompile:

```bash
gcc file3.c -o fi*e3
```

Run:

```bash
./file3
```
*Expected Result:

```text
Address *f pointer (STACK):
Address of data*(HEAP):
Value stored: 30
```

Demo*strates that the pointer variable *xists on the stack while the*dynamically allocated data resides*in the heap. 【2-08fb72】

---

## M*mory Segments

|*Segment | Purpose |
|----------|--*-------|
| Text | Program instruct*ons |
| Data | Initialized global *ariables |
| BSS | Uninitialized g*obal variables |
| Heap | Dynamica*ly allocated memory |
| Stack | Lo*al variables and function calls |
*Based on the process memory layout*discussed in the lab. *2-08fb72】

---

## Key*Concepts Learned*
- Data types determine*memory allocation.
- Stack memory*is managed automatically.
* Heap memory is managed manually u*ing allocation functions*
- Virtual memory isolates*processes.
- Pointers connect stac* variables to heap*memory.
- Operating systems manage*memory allocation and protection. *2-08fb72】

---

## Summary of Resu*ts

The lab successfully demonstra*ed data type sizes, process memory*segmentation, stack versus heap al*ocation, pointer behavior, and vir*ual memory organization. Experimen*s confirmed that stack addresses a*e numerically higher than heap add*esses and that pointers stored on *he stack can reference data locate* in heap*memory. *2-08fb72】

---

## Quick*Reference

| Command | Purpose |
|*---------|*---------|
| gcc file1*c -o file1 | Compile Lab*1 |
| gcc file2.c -o*file2 | Compile Lab 2 |
| gcc*file3.c -o file3 | Compile Lab*3 |
| ./file1*| Run Lab 1 |
| ./file2*| Run Lab 2 |
| ./file3*| Run Lab 3 |
| echo*$? | Check program exit status |
|*malloc() | Allocate heap memory |
* free() | Release heap memory |
|*sizeof() | Determine data type siz* |
