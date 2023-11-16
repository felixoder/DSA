#include<stdio.h>
void display( int array[ ] , int size ){
    //*for loop for output 

    //? traversal  process 
    for (int i = 0; i < size; i++)
    {
        printf("%d  ",array[i]);
    }
    printf("\n");
    
}

int BinarySearch( int array[ ] , int size , int target ){
    int low , high , mid ; 
    low = 0 ; //? low is the first index of the array 
    high = size -1; //? high is the last index of the array 
    while(low<=high){
        //! when the low will be lesser or equals to high then ==>
        mid = (low + high) /2;   //! mid will be the middle value of high and low
        if(array[mid]==target){
            return mid;
        }
        if ( array[mid]< target){
            low = mid +1;

        }
        else{
            high = mid -1;
        }
    }
    return -1;
}
int main( ){
    int array[100];
    int size;  //? you can also denote size by size = sizeof(array)/sizeof(int)
    int target;//* The element you are trying to find 
    printf("Enter the size of the array==> \n");
    scanf("%d",&size);
    printf("Enter the Element of the array :==> \n");
    //! for loop for input of array element
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    display(array , size);
    printf("Enter the Element You want to find from the Array!\n", target);
    scanf("%d",&target);
    
    int SearchIndex = BinarySearch(array , size , target);
    printf("The element %d found on index no %d" , target , SearchIndex);
    



    return 0;
}