**Lab 2 – C Programming Basics**

♦ **Code Files**
- **hello.c** → Basic "Hello, World!" program. Demonstrates program structure with `#include`, `main()`, and `return`.
- **input.c** → Program with user input using `scanf` and `printf`. Reads an integer and displays it back.
- **formatted_output.c** → Program with multiple variables (`name`, `age`, `height`) and formatted output using specifiers.
- **return_value.c** → Program that prints a message and returns `0` (success) or `1` (error). Demonstrates exit status.
- **compilation_examples** → Commands showing the four GCC compilation stages: preprocessing, compiling, assembling, linking.

♦ **What They Do**
- **hello.c output** → Prints "Hello, World!" to the terminal.
- **input.c output** → Prompts user for a number and prints it back.
- **formatted_output.c output** → Prompts for name, age, height and prints formatted user info.
- **return_value.c output** → Shows how return values communicate success (`0`) or failure (`1`) to the OS, verified with `echo $?`.
- **compilation_examples** → Demonstrates how source code transforms into `.i`, `.s`, `.o`, and final executable.

♦ **Key Learning**
- C program structure: preprocessor directives, `main()` function, return values.
- GCC compilation process: **Preprocessing → Compilation → Assembling → Linking**.
- Exit status connects program results to the OS shell.
- Input/output in C uses `scanf` (stdin) and `printf` (stdout).
- C is a **compiled language**, producing machine code unlike interpreted languages.

