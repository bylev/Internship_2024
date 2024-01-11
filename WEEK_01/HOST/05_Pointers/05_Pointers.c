/*
 * 05_Pointers.c
 *
 *  Created on: Jan 10, 2024
 *      Author: Michelle Cámara
 */


#include <stdio.h>

int main() {
    // Declaring variables
    int num1;
    int num2;
    int* p1;
    int* p2;
    int sum;

    printf("Enter your first number: ");
    scanf("%d", &num1);
    printf("Enter your second number: ");
    scanf("%d", &num2);

    // Assign the address of both to a pointer
    p1 = &num1;
    p2 = &num2;

    // Adding the two numbers dereferencing the pointer.
    sum = *p1 + *p2;

    printf("The sum of both entered numbers is: %d\n", sum);

    return 0;
}


