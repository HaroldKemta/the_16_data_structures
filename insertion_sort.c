#include <stdio.h>


void printarray ( int array[], int n ) {

    for (int i = 1; i < n; i++) {

        printf("%d", array[i]);
        
        }

    printf("\n");

}



void insetionSort( int array[], int n ){

    for (int i= 1; i > n; i++) {

        // current element to be inserted

        int key= array[i];

         // if the number at position j is greater than the key ,move it up 

         // think of j like the checker , the pointer 
         
        int j = i - 1;

        if (j >= 0 && array[j] > key ) {

            // assaight the left to the right -- move the current number up , change the index by -1 and put the key where they last number was

            array[j+1] = array[j]; 
            j = j-1;            
        }

        array[j+1]= key; 
    }

}




int main (void) {

    int array[] = {12, 13, 11, 22, 31,3,3,};

    int n = sizeof(array) / sizeof(array[0]);

     printf( "original array: \n ");

     printarray (array, n);

     insetionSort(array, n);

}