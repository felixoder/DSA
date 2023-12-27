#include <stdio.h>
//--------------Function for the printing of Array -------------------------
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

//-----------Function for the partition -------------------------

int partition(int A[], int low, int high)
{
    int pivot = A[low]; // First Element of Array as Pivot
    int i = low + 1;    // iterate through front side
    int j = high;       // iterate from back side
    int temp;

    do
    {
        while (A[i] <= pivot && i <= high)
        {
            i++;
            // Increment
        }

        while (A[j] > pivot && j >= low)
        {
            j--;
            // Decrement
        }
        if (i < j)
        {
            // Do Swap
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }

    } while (i <= j);

    // When the position of i and j is found
    // Swap A[low] and A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;
}

//---------Quick Sort main Function----------------------------

void quickSort(int A[], int low, int high)
{
    int partitionIndex; // Index of  Pivot after Partition

    if (low < high)
    {
        partitionIndex = partition(A, low, high);

        quickSort(A, low, partitionIndex - 1);  // Sort Left sub Array
        quickSort(A, partitionIndex + 1, high); // Sort Right sub Array
    }
}

//-------Main Function -------------

int main()
{
    int A[] = {23, 4, 56, 1, 90, 2, 3, 12, 1, 0};

    int n = 10;
    printArray(A, n);

    quickSort(A, 0, n - 1);
    printArray(A, n);

    return 0;
}