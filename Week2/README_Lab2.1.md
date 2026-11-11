# Lab 2.1: C Libraries, Linking, and ELF Executable Structure

---

## Introduction

This lab demonstrates how C programs use libraries during compilation and execution. The lab compares statically linked executables, which contain all required machine code inside the executable, with dynamically linked executables, which load shared libraries at runtime.

---

## Learning Objectives

- Understand the purpose of C standard libraries.
- Learn the difference between static and dynamic linking.
- Explore ELF executable structure.
- Learn how to inspect executable dependencies.
- Use Linux tools such as `ldd` and `readelf`.

---

## Source Code

### procinfo.c

Displays:

- Current Process ID (PID)
- Parent Process ID (PPID)
- Current Date and Time
- Executable Path

Functions used:

```c
getpid()
getppid()
time()
localtime()
printf()
readlink()
```

---

## Compile Static Executable

```bash
gcc -static procinfo.c -o procinfo_static
```

Run:

```bash
./procinfo_static
```

Expected Result:

```text
Process ID: xxxx
Parent Process ID: xxxx
Current Time: ...
Executable Path: ...
```

Static executable contains all required library code and can run without external shared libraries.

---

## Compile Dynamic Executable

```bash
gcc procinfo.c -o procinfo_dynamic
```

Run:

```bash
./procinfo_dynamic
```

Expected Result:

```text
Process ID: xxxx
Parent Process ID: xxxx
Current Time: ...
Executable Path: ...
```

Dynamic executable loads shared libraries such as libc.so.6 during runtime.

---

## Check Dynamic Dependencies

```bash
ldd procinfo_dynamic
```

Expected Result:

```text
libc.so.6
ld-linux
```

Shows shared libraries required by the executable.

---

## Inspect ELF Structure

```bash
readelf -h procinfo_dynamic
```

Displays ELF header information including:

- Architecture
- Entry point address
- ELF type
- Program headers
- Section headers

---

## Static vs Dynamic Linking

| Feature | Static Linking | Dynamic Linking |
|----------|----------|
| Executable Size | Large | Small |
| Library Dependency | No | Yes |
| Portability | Higher | Lower |
| Memory Usage | Higher | Lower |
| Update Shared Libraries | No | Yes |

---

## Key Learning

- Header files (`.h`) contain declarations.
- Libraries (`.a`, `.so`) contain executable machine code.
- Static linking creates self-contained executables.
- Dynamic linking uses shared libraries loaded at runtime.
- ELF executables can be inspected using Linux development tools.

---

## Quick Reference

| Command | Purpose |
|----------|----------|
| gcc procinfo.c -o procinfo_dynamic | Build dynamic executable |
| gcc -static procinfo.c -o procinfo_static | Build static executable |
| ./procinfo_dynamic | Run dynamic executable |
| ./procinfo_static | Run static executable |
| ldd file | Show library dependencies |
| readelf -h file | Show ELF header |
| ls -lh | Check file size |

---

## Summary of Results

The lab successfully demonstrated the use of C libraries, the differences between static and dynamic linking, and the structure of ELF executables. Static executables were larger because they contained all required library code, while dynamic executables were smaller and relied on shared libraries during execution.
