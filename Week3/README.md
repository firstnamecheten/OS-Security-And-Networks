**Lab 3 – Investigating Process Lifecycles and OS Interaction**

♦ **Code Files**
- **task1_alive.c** → Runs for 30 seconds using a loop and `sleep()`. Demonstrates how long‑running processes behave and can be monitored while active.
- **task2_identity.c** → Prints the process ID (PID) and parent process ID (PPID). Shows how Linux assigns and tracks process identities.
- **task3_exit.c** → Accepts user input and returns exit codes. Positive input returns `0` (Success), negative input returns `1` (Failure). Demonstrates OS feedback via `$?`.
- **task4_input.c** → Reads a string from standard input (`stdin`) and prints it to standard output (`stdout`). Demonstrates basic I/O streams.
- **task5_control.c** → Prints PID, asks user if program should continue or exit. If user chooses Yes, program sleeps and exits with `0`. If No, program exits with `1`. Demonstrates conditional execution and termination.

♦ **What They Do**
- **task1_alive.c output** → Program runs in background for 30 seconds, can be monitored with `ps aux`.
- **task2_identity.c output** → Prints PID and PPID, verifies with `ps -p`.
- **task3_exit.c output** → Shows Success/Failure messages and exit codes (`0` or `1`).
- **task4_input.c output** → Prompts for name and prints greeting message.
- **task5_control.c output** → Shows PID, continues or exits based on user choice, with exit codes reflecting the decision.

♦ **Key Learning**
- OS manages processes with unique IDs (PID, PPID).
- Programs return exit codes to communicate success or failure.
- Standard I/O streams connect programs with the user.
- Conditional execution allows programs to branch and terminate differently.
- Linux tools (`ps`, `$?`) verify and monitor process behavior.
- unistd.h library is required for using system call functions like sleep(), getpid(), and getppid().
