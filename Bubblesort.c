#include <stdio.h>

void BubbleSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int mai = 0;
        int temp;
        for (int j = 0; j < n - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                // Swap elements using a temporary variable
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                mai++;
            }
        }
        if (mai == 0) {
            break;
        }
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

    BubbleSort(array, n);

    printf("Sorted array: ");
    Traversal(array, n);

    return 0;
}
