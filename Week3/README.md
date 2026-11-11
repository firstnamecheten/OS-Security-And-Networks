# Lab 3: Investigating Process Lifecycles and OS Interaction

---

## Introduction

This lab explores the relationship between C programs and the Linux operating system. Instead of simply printing text, the programs interact with the Linux kernel to obtain process information, manage execution time, communicate status codes, and respond to user input.

---

## Learning Objectives

- Understand what a process is.
- Learn how to obtain PID and PPID.
- Understand process monitoring.
- Learn how exit codes communicate with the operating system.
- Practice working with stdin and stdout.
- Understand conditional execution.

---

## Task 1 - Long Running Process

Compile:

```bash
gcc task1_alive.c -o task1
```

Run:

```bash
./task1 &
```

Expected Result:

```text
I am starting...
I am finished.
```

The process remains active for approximately 30 seconds and can be inspected while running.

---

## Task 2 - Process Identity (PID and PPID)

Compile:

```bash
gcc task2_identity.c -o task2
```

Run:

```bash
./task2
```

Expected Result:

```text
My PID is: XXXX
My Parent PID is: XXXX
Sleeping for 20 seconds...
```

Shows that every process has a unique PID and a parent process. 【1-73711e】

---

## Task 3 - Exit Codes and OS Feedback

Compile:

```bash
gcc task3_exit.c -o task3
```

Run:

```bash
./task3
```

Check Exit Status:

```bash
echo $?
```

Expected Result:

```text
Success
```

Return value:

```text
0
```

or

```text
Failure
```

Return value:

```text
1
```

The operating system uses exit codes to determine success or failure. 【1-73711e】

---

## Task 4 - Standard I/O Streams

Compile:

```bash
gcc task4_input.c -o task4
```

Run:

```bash
./task4
```

Expected Result:

```text
Enter your name:
Hello, <name>! Welcome to OS Class.
```

Demonstrates the use of stdin and stdout through scanf() and printf(). 【1-73711e】

---

## Task 5 - Conditional Execution and Termination

Compile:

```bash
gcc task5_control.c -o task5
```

Run:

```bash
./task5
```

Expected Result:

```text
Current PID: XXXX
Do you want to continue? (1 for Yes, 0 for No):
```

If user enters:

```text
1
```

Result:

```text
Continuing...
```

Exit Code:

```text
0
```

If user enters:

```text
0
```

Result:

```text
Exiting...
```

Exit Code:

```text
1
```

---

## Summary of Results

This lab demonstrated that programs run as processes managed by the Linux kernel. Through practical exercises involving PIDs, exit codes, input/output streams, and conditional execution, the interaction between user programs and the operating system became clear. 【1-73711e】

---

## Quick Reference

| Command | Purpose |
|----------|----------|
| gcc file.c -o file | Compile program |
| ./file | Execute program |
| ps | Show running processes |
| ps aux | Detailed process list |
| echo $? | Show previous exit code |
| getpid() | Get process ID |
| getppid() | Get parent process ID |
| sleep() | Pause execution |
