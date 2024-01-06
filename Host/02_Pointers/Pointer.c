/*
 * Pointer.c
 *
 *  Created on: Jan 5, 2024
 *      Author: Michelle Cámara
 */


#include <stdio.h>


int main(){
	char a = 100; //New char variable.
	printf("Value of a: %d \n", a); //Print actual value of a 1.
	printf("Address of a: %p \n", &a); //Print the address of a. 2.
	char* p=&a;
	printf("Address of a: %p\n", p);
	char data= *p; //Read operation from the pointer (Dereferencing)
	printf("Data obtained: %d\n", data);
	*p= 0x41; //Updating new value of 65 in hexadecimal
	printf("New value updated: %d\n", a); //Printing the new value
	getchar();
}
