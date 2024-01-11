/*
 * 10_Pointers.c
 *
 *  Created on: Jan 10, 2024
 *      Author: Michelle Cámara
 */

#include <stdio.h>

// Function to calculate the length of a string
int calculateStringLength(char *str) {
    int length = 0; // Initialize the length variable

    // Loop until the end of the string
    while (*str != '\0') {
        length++; // Increment length for each character
        str++;    // Move the pointer to the next character
    }

    return length;
}

int main() {
    char inputString[100]; // Declaring an array to store the input string

    // Input a string from the user
    printf("Input a string: ");
    scanf("%s", inputString);

    // Call the function to calculate the length of the string
    int length = calculateStringLength(inputString);

    // Print the length of the given string
    printf("The length of the given string %s is: %d\n", inputString, length);

    return 0;
}

