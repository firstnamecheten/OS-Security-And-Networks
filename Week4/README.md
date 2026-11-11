# Lab 4: A Practical Approach to Understanding System Internals ( Data Types and OS Memory Management )

---

## Introduction

Data types form the foundation of programming and operating system interaction. Whenever a programmer declares a variable, the operating system allocates memory to store that data. Understanding how memory is allocated and managed is essential for writing efficient, secure, and reliable programs.

This lab explores data type sizes, process memory organization, memory segments, pointers, stack memory, and heap memory in Linux systems.

---

## Learning Objectives

- Understand how different data types occupy memory.
- Learn how the operating system allocates memory.
- Explore process memory segments.
- Understand the difference between stack and heap memory.
- Learn how pointers reference memory locations.
- Observe memory addresses of variables during execution.

---

## Files Included

- Lab4.pdf
- file1.c
- file2.c
- file3.c
- README.md

---

## Program 1 - Data Type Size Exploration

### Compile

```bash
gcc file1.c -o file1
```

### Run

```bash
./file1
```

### Expected Result

The program displays the size of various data types on the current system.

Example:

```text
char = 1 byte
int = 4 bytes
float = 4 bytes
double = 8 bytes
long = 8 bytes
pointer = 8 bytes
```

### Observation

The output confirms how a 64-bit Linux system allocates memory for different primitive data types.

---

## Program 2 - Memory Segment Address Mapping

### Compile

```bash
gcc file2.c -o file2
```

### Run

```bash
./file2
```

### Expected Result

The program displays the memory addresses of variables stored in different memory segments.

Example:

```text
Global Variable Address: 0x...
Static Variable Address: 0x...
Heap Variable Address: 0x...
Local Variable Address: 0x...
```

### Observation

The output demonstrates that:

- Stack variables occupy high memory addresses.
- Heap variables occupy lower memory addresses.
- Global and static variables are stored in dedicated data segments.

---

## Program 3 - Pointer and Heap Memory Allocation

### Compile

```bash
gcc file3.c -o file3
```

### Run

```bash
./file3
```

### Expected Result

The program displays:

```text
Pointer Address: 0x...
Heap Address: 0x...
Stored Value: 30
```

### Observation

The pointer variable itself is stored on the stack, while the memory allocated using malloc() is located in the heap.

---

## Process Memory Segments

| Segment | Purpose |
|----------|----------|
| Text | Stores executable program instructions |
| Data | Stores initialized global variables |
| BSS | Stores uninitialized global variables |
| Heap | Stores dynamically allocated memory |
| Stack | Stores local variables and function calls |

---

## Key Concepts Learned

- Data types determine how much memory the operating system allocates.
- Memory is divided into separate segments with different purposes.
- The stack grows automatically during function calls.
- The heap is used for dynamic memory allocation.
- Pointers store memory addresses.
- Virtual memory allows processes to execute independently and securely.

---

## Summary of Results

This lab demonstrated how Linux manages memory for programs. The experiments verified data type sizes, process memory segmentation, stack and heap allocation, and pointer behavior. The results showed that stack addresses are typically higher than heap addresses and that pointers can be used to access dynamically allocated memory.

---

## Quick Reference

| Command | Purpose |
|----------|----------|
| gcc file1.c -o file1 | Compile Program 1 |
| gcc file2.c -o file2 | Compile Program 2 |
| gcc file3.c -o file3 | Compile Program 3 |
| ./file1 | Run Program 1 |
| ./file2 | Run Program 2 |
| ./file3 | Run Program 3 |
| echo $? | Display exit status |
| malloc() | Allocate heap memory |
| free() | Release heap memory |
| sizeof() | Determine data type size |
