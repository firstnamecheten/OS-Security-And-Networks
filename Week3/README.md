# Lab 3: Process Lifecycle in Linux and OS Interaction

## Contents
- Lab3.pdf(full report with screenshots and answers)
- task1_alive.c, task2_identity.c, task3_exit.c, task4_input.c, task5_control.c (C programs for Lab3 tasks)

## Overview
This lab shows how C programs run as processes in Linux.  
We learned about process IDs, exit codes, input/output, and how programs can branch.


## Tasks
- **Task 1:** Program runs 30 seconds with `sleep(1)`. Checked using `ps aux | grep task1`.  
- **Task 2:** Prints PID and PPID. Verified with `ps -p <PID>`.  
- **Task 3:** Returns exit codes (0 = success, 1 = failure). Checked with `echo $?`.  
- **Task 4:** Reads input with `scanf`, prints output with `printf`.  
- **Task 5:** Asks user to continue or exit. Runs 5s if continue, exits if not.


## How to Runn any C program is type these commands in terminal (i.e also called bash/shell)
- gcc taskX.c -o taskX     # compile the program 
- ./taskX                  # run the program

