/*
 * structures.c
 *
 *  Created on: Jan 9, 2024
 *      Author: Michelle Cámara
 */

#include <stdio.h>

typedef struct registers{
	char a;
	char* p;
} REGISTRO; //Define the type of data.

int main(){
	REGISTRO Value1; //Declaring the variable type registers


	Value1.a=100; //Adding values
	Value1.p= &Value1.a; //Adding values

	printf("My value of a is: %d\n", Value1.a);
	printf("My address of a is: %p\n", Value1.p);


	getchar();
	return 0;
}


