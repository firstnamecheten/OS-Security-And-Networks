# Lab 3: Investigating Process Lifecycles and OS Interaction

## 📘 Overview
This lab explores how C programs interact with the Linux operating system as processes.  
We implemented five tasks to understand **process lifecycle, PID/PPID, exit codes, standard I/O, and conditional execution**.



## 🛠 Tasks Implemented

### Task 1: Long-Running Process
- **File:** `task1_alive.c`
- Runs for 30 seconds using a loop and `sleep(1)`.
- Verified using `ps aux | grep task1`.

### Task 2: Process Identity
- **File:** `task2_identity.c`
- Prints its **PID** (`getpid()`) and **PPID** (`getppid()`).
- Verified with `ps -p <PID> -o pid,ppid,cmd`.

### Task 3: Exit Codes
- **File:** `task3_exit.c`
- User enters a number:
  - Positive → returns `0` (Success).
  - Negative → returns `1` (Failure).
- Verified with `echo $?`.

### Task 4: Standard I/O Streams
- **File:** `task4_input.c`
- Reads a string from **stdin** using `scanf`.
- Prints greeting to **stdout** using `printf`.

### Task 5: Conditional Execution
- **File:** `task5_control.c`
- Prints PID at start.
- Asks user if they want to continue:
  - `1` → sleeps 5 seconds, returns `0`.
  - `0` → exits immediately, returns `1`.



## ⚙️ Compilation & Execution
```bash
# Compile
gcc taskX.c -o taskX

# Run
./taskX
