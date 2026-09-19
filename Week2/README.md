# Lab 2: C Programming Basics

## Contents
- Lab2.pdf (full report with screenshots and answers)
- hello.c, hello1.c, hello2.c, hello3.c, hello4.c, hello5.c, hello6.c (C programs for lab tasks)

## Knowledge Check Answers
1. `#include` brings in library code (e.g., `<stdio.h>`).
2. Compilation stages:
   - Preprocessing → `.i`
   - Compiling → `.s`
   - Assembling → `.o`
   - Linking → executable
3. `return 0;` = success, non‑zero = error.
4. Program: asks user for integer and prints it back.
5. GCC commands:
   - Preprocess only: `gcc -E hello.c -o hello.i`
   - Assembly only: `gcc -S hello.i -o hello.s`
   - Object only: `gcc -c hello.s -o hello.o`
6. C is compiled → machine code before running. Interpreted languages run line‑by‑line.

## Lab Tasks
- Task 1: Hello World with return 0
- Task 2: Modified program with return 1
- Task 3: Program with user input
- Task 4: Compilation stages demonstrated
- Task 5: Program returning 50

## Notes
- Screenshots and detailed evidence are inside Lab2.pdf.
