/* First Repeatating Element */
#include<stdio.h>
int i , j;

void RepeatatingElement(int array[ ], int size){
    if(size<2){
        printf("\n The Array is too small");
    }
    for ( i = 0; i < size; i++)
    {
        for ( j= 0; j < size; j++)
        {
            if(array[i]==array[j]){
                printf("The first Repeatating Array is %d ",i);
            }
        }
        
    }
    
}
int main(){
    int array[]={12,4,6,7,8,9,12};
    int size = sizeof(array)/sizeof(int);
    RepeatatingElement(array , size);
    
    
    return 0;
}
