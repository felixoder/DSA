#include<stdio.h>
void display(int arr[], int n){
    for (int i = 0; i < n; i++) 
    {
        printf("%d\n",arr[i]);
    }
    
}
int main(){
    int arr[100]={1,23,45,78};
    display(arr , 4);


    return 0;
}