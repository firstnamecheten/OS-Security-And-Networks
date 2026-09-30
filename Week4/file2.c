#include <stdio.h>
#include <stdlib.h>

int global_var = 150; // Data segment (initialized global variable)->(value assigned)
int bss_var; // BSS/Data segment (uninitialized global variable)->(value not assigned))

int main() {
	int local_var = 30; // Stack (local variable,initialized, stack grows downward)
	static int local_static = 20; // Data segment (static initialized variable)

	int *heap_var = (int *)malloc(sizeof(int)); // Heap (dynamic allocation) -> reserves some heap space and returns its address.
        *heap_var = 500;    // stored value in heap memory
	printf(".......Variable Addresses.......\n\n");
	printf("Address of main(): %p (Text)\n", (void*)&main);    // fixed at low addresses,read-only (instructions only, no writes)
	printf("global_var: %p (Data/BSS)\n", (void*)&global_var);    // Data segment: initialized globals (value assigned)
	printf("bss_var: %p (Data/BSS)\n", (void*)&bss_var);          // BSS segment: unitialized globals (value not assigned)
	printf("local_var: %p (Stack)\n", (void*)&local_var);         // Stack grows downward from high address 
	printf("local_static: %p (Data/BSS)\n", (void*)&local_static); // Data segment: static initialized variable
	printf("heap_var ptr: %p (Stack - pointer)\n",(void*)&heap_var); // The pointer itself lives on the stack
	printf("*heap_var: %p (Heap - data)\n", (void*)heap_var);     // Heap segment: grows upwards from low low address
	long diff = (long)((char*)heap_var - (char*)&local_var);
	printf("Address difference between stack and heap: %ld bytes\n", diff); // proves stack is higher than heap numerically

	free(heap_var); // free() → tells the OS: “I’m done with this block, you can recycle it.”
	return 0; // this tells “The program is finished successfully, no errors.”
}

