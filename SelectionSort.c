#include <stdio.h>

void SelectionSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;

        // Find the index of the minimum element in the unsorted part of the array
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }

        // Swap the found minimum element with the first element in the unsorted part
        int temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }
}

void Traversal(int array[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[6] = {12, 3, 3, 7, 8, 9};
    int n = 6;

    printf("Original array: ");
    Traversal(array, n);

    SelectionSort(array, n);

    printf("Sorted array: ");
    Traversal(array, n);

    return 0;
}
