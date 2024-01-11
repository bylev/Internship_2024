/*
 * 04_Pointers.c
 *
 *  Created on: Jan 10, 2024
 *      Author: Michelle Cámara
 */

#include <stdio.h>

int main(){
	int m=300; //Declare and initialize an integer value
	float fx = 300.60; //Declare and initialize a float value
	char cht = 'z'; // Declaring a char variable


	//Declaring pointers according to the data type
	int 	*p1;
	float   *p2;
	char 	*p3;

	//Saving address to the pointers
	p1		=		&m;
	p2		=		&fx;
	p3		=		&cht;


	// Printing values

	printf("m   = 		%d\n",  m);
	printf("fx  = 		%f\n", fx);
	printf("cht = 		%c\n", cht);

	//Address of the values using & operator.

	printf("Address of m:	%p\n",	&m);
	printf("Address of fx:	%p\n",	&fx);
	printf("Address of cht:	%p\n",	&cht);

	//Using & and * operator for address

	printf("Address of m: 	%d\n",	*(&m));
	printf("Address of fx: 	%f\n",	*(&fx));
	printf("Address of cht: %c\n",	*(&cht));

	// Using only pointer variable

	printf("Address of m:	%p\n", 	p1);
	printf("Address of fx:	%p\n", 	p2);
	printf("Address of cht:	%p\n", 	p3);

	//Using * to have the value of our pointer
	printf("Value of m: 	%d\n",	*p1);
	printf("Value of fx: 	%f\n",	*p2);
	printf("Value of cht: 	%c\n",	*p3);






}


