/*
 * 09_Pointers.c
 *
 *  Created on: Jan 10, 2024
 *      Author: Michelle Cámara
 */



#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n; // Declare a pointer 'arr' and a variable 'n' to store the number of elements

    // Input the total number of elements (1 to 100)
    printf("Input total number of elements (1 to 100): ");
    scanf("%d", &n);

    // Allocate memory for an array of integers based on user input
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation is successful
    if (arr == NULL) {
        printf("Memory allocation failed. Exiting.");
        return 1; // Exit with an error code
    }

    // Input elements from the user
    for (int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Find the largest element in the array
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Print the largest element
    printf("The Largest element is: %.2f\n", (float)max); // %.2f for 2 decimal places

    // Allocate the memory
    free(arr);

    return 0; // Exit successfully
}
