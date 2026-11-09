#include <stdio.h>
#include <stdlib.h>

int main() {
	int *forheap; // Declare pointer (lives on STACK)
	forheap = (int *)malloc(sizeof(int)); //Allocate memory on HEAP first!
	*forheap = 30; // store value to allocated memory// Print addresses
	printf("Address of pointer (STACK): %p\n", (void*)&forheap);  // The pointer variable is stored on the stack
	printf("Address of data (HEAP): %p\n", (void*)forheap);  // The memory block allocated by malloc lives in the heap
	printf("Value stored: %d\n", *forheap);   // The actual integer value (30) is stored in the heap memory
	free(forheap); // Free heap memory (return it to OS). Important: prevents memory leaks, tells OS we’re done with this block
	return 0;
}

