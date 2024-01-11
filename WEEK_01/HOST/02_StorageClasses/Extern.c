/*
 * Extern.c
 *
 *  Created on: Jan 5, 2024
 *      Author: Michelle Cámara
 */

#include <stdio.h>
#include "variable.h"

extern int var; //Calling my external variable

int main(){
	var++; //Adding 1 to var.
	printf("Var value is: %d\n", var); //Printing my variable var.

	return 0;
}
