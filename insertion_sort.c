#include <stdio.h>


void printarray ( int array[], int n ) {

    for (int i = 0; i < n; i++) {

        printf("%d ", array[i]);
        
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


int linearSearch(int array[], int n, int target) {

    printf( "linearSearch \n");

    for ( int i = 0; i < n; i++) {

        if (array[i] == target) {

            return i;
         }

    }

      return -1;

}

    int binarySearch(int array[], int n, int target) {

        int low , high , middle;

        low = 0 ;

        high = n-1;

        middle = low + (high - low ) / 2;

       while (low <= high) {
    // Calculate middle index
    int middle = low + (high - low) / 2;
    
    if (array[middle] == target) 
        return middle; // Index found

    if (array[middle] < target) {
        low = middle + 1;  // Move to the right half
    } else {
        high = middle - 1; // Move to the left half
    }
}


    

    }








int main (void) {

    int array[] = {12, 13, 11, 22, 31,3,3,};

    int n = sizeof(array) / sizeof(array[0]);

     printf( "original array: \n ");

     printarray (array, n);

     insetionSort(array, n);

     int target =3; 

     int foundIndex = linearSearch(array, n, target);

         printf( "target found after %d Tries \n" , foundIndex);

    int index =3; 


   int biIndex= binarySearch(array, n, target);

        printf( "target found after %d Tries \n ", biIndex);


}