#include <stdio.h>
#include <stdlib.h>

struct MyArray {
    int total_size; //? memory to be reserved
    int used_size;  //* memory to be used
    int *ptr;       //! Points to the first element
};

void createArray(struct MyArray *a, int tsize, int usize) {
    a->total_size = tsize;
    a->used_size = usize; // * Use 'usize' for the number of elements, not 'tsize'.
    a->ptr = (int *)malloc(tsize * sizeof(int)); //! basically it gives the pointer by what it sends the element address in the " HEAP"
}

void setVal(struct MyArray *a) {
    for (int i = 0; i < a->used_size; i++) {
        printf("Enter Element %d: ", i ); //?  Added the element index and a colon.
        scanf("%d", &(a->ptr[i])); //*  Corrected the scanf statement.
    }
}

void show(struct MyArray *a) {
    for (int i = 0; i < a->used_size; i++) {
        printf("%d\n", (a->ptr)[i]);
    }
}

int main() {
    struct MyArray marks;
    createArray(&marks, 10, 2);
    printf("We are using the setVal now\n");
    setVal(&marks); 

    printf("We are using show now\n");
    show(&marks);
    return 0;
}
