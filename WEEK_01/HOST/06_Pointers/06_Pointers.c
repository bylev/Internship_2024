/*
 * 06_Pointers.c
 *
 *  Created on: Jan 10, 2024
 *      Author: princ
 */


#include <stdio.h>

#include <stdio.h>

int main() {
	// Variables
    int x;
    int y;
    int *p1;
    int *p2;

    x = 5;
    y = 6;
    p1 = &x;  // Initialize p1 with the address of x
    p2 = &y; //Initialize p2 with address of y

    if (*p1 > *p2) { //Comparing values.
        printf("%d is the maximum number. \n", *p1);
    } else {
        printf("%d is the maximum number. \n", *p2);
    }

    return 0;
}
