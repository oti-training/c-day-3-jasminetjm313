/*
 * Day 3 Exercise 2: Pointers and Functions - Swap Implementation
 *
 * Implement the swap funct
 ion using pointers as described in tutorial Step 2.
 *
 * TODO: Complete the swap function:
 * - It should take two int pointers: int *a, int *b
 * - Swap the values they point to using a temporary variable
 * - In main, test with int x=1, y=2; swap(&x, &y); and print results
 *
 * Expected output:
 * Before swap: x=1, y=2
 * After swap: x=2, y=1
 */

#include <stdio.h>
#include "swap.h"

void swap(int *a, int *b) {
	//int *a_ptr;
	//int *b_ptr;
	//int *c_ptr;
	//a_ptr = &a;
	//b_ptr = &b;
	
	//*c_ptr = a;
	//*b_ptr = *c_ptr;
	//*a_ptr = *b_ptr;  
	
	int c = *a;	
	*a = *b;
	*b = c; 
	
    // TODO: Implement the swap logic here
    // Hint: Use a temporary variable to hold the value pointed to by one pointer, then assign the value from the other pointer, and finally assign the temporary value to the second pointer. Remember to dereference with *.

    // Placeholder
    printf("Swap function not implemented yet.\n");
}

int main() {
    printf("Exercise 2: Pointer Swap Function\n");

    int x = 1;
    int y = 2;
    //int *x_ptr;
    //int *y_ptr;
    //x_ptr = &x;
   // y_ptr = &y;

    printf("Before swap: x=%d, y=%d\n", x, y);

    // TODO: Call swap(&x, &y);
    
    //x,y = swap(&x, &y);
     swap(&x, &y);
        
    printf("After swap: x=%d, y=%d\n", x, y);

    // TODO: Add check if swap worked
    if (x == 2 && y == 1) {
        printf("Swap successful! ✓\n");
    } else {
        printf("Swap failed. Implement the function correctly.\n");
    }

    return 0;
}

