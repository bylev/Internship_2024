/*
 * 03_Pointers.c
 *
 *  Created on: Jan 10, 2024
 *      Author: Michelle Cámara
 */

#include <stdio.h>

int main(){
	int* ab; //Declaring a pointer variable
	int m; //Declaring an integer variable

	m=29; //Assign the value 29

	printf("Value of m: %d\n", m);
	printf("Address of m: %p\n", &m);

	ab = &m; //Assign the address of m to ab

	printf("Address of pointer: %p\n", ab);
	printf("Value of my pointer: %d\n", *ab);

	*ab=7; //Assign the value 7 to the pointer ab

	printf("Address of m: %p\n",&m);
	return 0;

}

