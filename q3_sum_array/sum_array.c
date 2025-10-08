/*
 * Day 3 Exercise 3: Pointers and Arrays - Sum Implementation
 *
 * Implement the sum_array function using pointer arithmetic as described in tutorial Step 3.
 *
 * TODO: Complete the sum_array function:
 * - It should take an int array (or int *arr) and size
 * - Use pointer arithmetic to sum elements (no array indexing [])
 * - Return the sum
 * - In main, test with int nums[4] = {1,2,3,4}; printf("%d", sum_array(nums, 4)); // 10
 *
 * Expected output:
 * Sum of array: 10
 */

#include <stdio.h>
#include "sum_array.h"

int sum_array(int *arr, int size) {
    // TODO: Implement the sum using pointer arithmetic
    int sum =0;
    int *ptr = arr; //pointer points to array start , not &arr
    
    for (int i=0; i<size ; i++) {
    	sum = sum + *(ptr + i);
    	}
    	
    return sum;
    	
     //*(arr_ptr) = 1
     //*(arr_ptr + 1) = 2
     
      //Hint: Initialize a pointer to the start of the array, set sum to 0, loop over the size adding the dereferenced pointer value and incrementing the pointer.

    // Placeholder
    return 0;
}

int main() {
    printf("Exercise 3: Sum Array with Pointers\n");
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
    int nums[4] = {1, 2, 3, 4};

    // TODO: Call sum_array(nums, 4)
    

    int result = sum_array(nums, 4);

    printf("Sum of array: %d\n", result);

    if (result == 10) {
        printf("Sum correct! ✓\n");
    } else {
        printf("Sum incorrect. Implement the function correctly.\n");
    }

    return 0;
}

