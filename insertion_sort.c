#include <stdio.h>


void printarray ( int array[], int n ) {

    for (int i = 1; i < n; i++) {

        printf("%d", array[i]);
        
        }

    printf("\n");

}

int main (void) {

    int array[] = {12, 13, 11, 22, 31,3,3,};

    int n = sizeof(array) / sizeof(array[0]);

     printf( "original array: \n ");

     printarray (array, n);

}