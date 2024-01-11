/*
 * 08_Pointers.c
 *
 *  Created on: Jan 10, 2024
 *      Author: Michelle Cámara
 */

#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) { //Function to swap characters
    char temp = *x;
    *x = *y;
    *y = temp;
}

//Function to generate the Permutations of a string
void generatePermutations(char *str, int start, int end) {
    if (start == end) { //If we are in the array final, we print the permutation
        printf("%s  ", str);
    } else {
        for (int i = start; i <= end; i++) { //We shift the array and generate permutation
            swap((str + start), (str + i));
            generatePermutations(str, start + 1, end);
            swap((str + start), (str + i)); // backtrack
        }
    }
}


//Main String
int main() {
    char input[] = "abcd";
    int n = strlen(input);
    printf("The permutations of the string are : ");
    generatePermutations(input, 0, n - 1);
    printf("\n");

    return 0;
}



