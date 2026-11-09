**Lab 4 – Data Types & Memory Segments**

♦ **Code Files**
- **file1.c** → Prints sizes of data types (`char`, `int`, `float`, `double`, `long`, `pointer`) using `sizeof()`.
- **file2.c** → Declares variables in Data, BSS, Stack, Heap, prints their addresses, and calculates the **address difference between stack and heap**.
- **file3.c** → Demonstrates **pointer and heap usage**: pointer lives on stack, points to heap memory, stores and prints a value.

♦ **What They Do**
- **file1.c output** → Shows how many bytes each data type uses on this system.
- **file2.c output** → Shows where each variable lives in memory (Data, BSS, Stack, Heap) and prints the distance between stack and heap addresses.
- **file3.c output** → Confirms correct pointer usage: stack pointer pointing to heap data, with stored value displayed.

♦ **Key Learning**
- Data types are contracts between compiler and OS.
- Memory is segmented: OS divides process memory into **Text, Data, BSS, Heap, Stack**.
- Stack addresses = high, Heap = mid, Data/BSS = low.
- Stack grows downward, heap grows upward.
- Pointers bridge stack and heap.
- Pointers live on stack but point to heap memory.
