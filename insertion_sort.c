#include <stdio.h>

void printarray(int array[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void insertionSort(int array[], int n) {
    for (int i = 1; i < n; i++) {  // corrected loop condition
        int key = array[i];  // current element to be inserted
        int j = i - 1;

        // Move elements of array[0..i-1], that are greater than key, to one position ahead
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

int linearSearch(int array[], int n, int target) {
    printf("Linear Search\n");
    for (int i = 0; i < n; i++) {
        if (array[i] == target) {
            return i;  // return the index where the element is found
        }
    }
    return -1;  // return -1 if target is not found
}

int binarySearch(int array[], int n, int target) {
    printf("Binary Search\n");

    int low = 0, high = n - 1;
    int middle;

    while (low <= high) {
        middle = low + (high - low) / 2;  // calculate middle index
        
        if (array[middle] == target) {
            return middle;  // target found
        } else if (array[middle] < target) {
            low = middle + 1;  // search the right half
        } else {
            high = middle - 1;  // search the left half
        }
    }
    return -1;  // return -1 if target is not found
}

int recursiveBinarySearch(int array[], int low, int high, int target) {
    if (low > high) {
        return -1;  // base case: target not found
    }

    int middle = low + (high - low) / 2;  // calculate middle index

    if (array[middle] == target) {
        return middle;  // target found
    } else if (array[middle] < target) {
        return recursiveBinarySearch(array, middle + 1, high, target);  // search the right half
    } else {
        return recursiveBinarySearch(array, low, middle - 1, target);  // search the left half
    }
}

int main(void) {
    int array[] = {12, 13, 11, 22, 31, 3, 3};
    int n = sizeof(array) / sizeof(array[0]);

    printf("Original array: \n");
    printarray(array, n);

    insertionSort(array, n);

    printf("Sorted array: \n");
    printarray(array, n);

    int target = 22;

    int foundIndex = linearSearch(array, n, target);
    printf("Target found at index: %d (Linear Search)\n", foundIndex);

    int biIndex = binarySearch(array, n, target);
    printf("Target found at index: %d (Binary Search)\n", biIndex);

    int rec_result = recursiveBinarySearch(array, 0, n - 1, target);
    printf("Target found at index: %d (Recursive Binary Search)\n", rec_result);

    return 0;
}
