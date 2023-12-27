#include<stdio.h>
#include<stdlib.h>
int stack[5]; int i=0;
int top=-1;
int value;


int choice;
 int PUSH(int value){
        if(top==5-1){
            printf("The stack is already full");
        }
        else{
            value=top+stack[top];
            printf("Inserted Successfully!");
        }

    }
int POP(){
    if(top==-1){
        printf("The stack is alreday empty");

    }
    else{
        value=top-stack[top];
        printf("Deleted successfully!");
    }
}
int DISPLAY(){
    if (top==-1){
        printf("The stack is already empty");

    }
    else{
        for(int i=0;i<=top;i++){
            printf("The values of the stack is :%d  ",stack[i]);
        }
    }
}

int main(){
   
    do{
        printf("\nEnter 1 to push operation");
        printf("\nEnter 2 to pop operation");
        printf("\nEnter 3 to display the items");
        printf("\nEnter 4 to exit");
    
    
    printf("Enter your choice~~");
    scanf("%d",&choice);
    switch(choice){
        case 1: 
            printf("Enter the value to push");
            scanf("%d",&value);
            PUSH(value);
            break;
        case 2: 
            POP();
            break;
        case 3:
            DISPLAY();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice");

    }
    }
    while(1);
}