/*
 * StorageClasses.c
 *
 *  Created on: Jan 5, 2024
 *      Author: Michelle Cámara
 */


#include <stdio.h>


extern void increment(); // Function declaration to use later


int main(void) {
    increment(); //increment b
    increment(); //increment b
    increment(); //increment b
    return 0;
}

void increment() {
    static int b = 3; //defining my static variable
    printf("Value of my static variable: %d \n", b); //print my actual variable
    b++; //increment 1
    getchar();
}


