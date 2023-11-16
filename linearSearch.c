#include<stdio.h>
int linearSearch(int arr [], int target , int size){
    //!  Base  case 
    for (int  i = 0; i < size; i++)
    {
        if(arr[i]=target){
            printf("The number is found  at index no %d\n",arr[i]);
            return i;
        }
        
    }
    return -1;
    
}
int main(){
    int size = 5;
    int target = 2;
    int arr[100]={1,67,89,9,2};
    linearSearch( arr, target,size);

    return 0;
}