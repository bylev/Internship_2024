/*
 * 01.c
 *
 *  Created on: Jan 5, 2024
 *      Author: Michelle Cámara
 */

#include <stdio.h>

int main(void){
	int m=10,n,o; //Declaring integers of m=10, n, o.
	int *z=&m; //Saving m address to the pointer z.
	printf("Address saved on the pointer: %p\n",z); //Print the address of my pointer.
	printf("Value of m: %d\n", *z); //Value saved on my pointer. (Dereferencing)
	printf("Address of n: %p\n", &n); //Value of my address of n
	printf("Address of o: %p\n", &o); //Address of o
	printf("Address of z: %p\n", &z); //Address of z.

	getchar();
}


