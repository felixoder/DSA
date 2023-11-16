// Push and pop operation of stack operation  ~ By Debayan Ghosh

#include<stdio.h>
#include<stdlib.h>
//declaring global variable
int stack[5]; //size of the stack is 5 {you can change it also}
int top=-1; //top or TOS meant by the highest index of the stack
int x; //the value to be pushed
void push(int x){
//the push operation
//base case
if(top==5-1){
    printf("\n The Stack is Full --- Stack Overflow");

}
else{
    top=top+1;
    stack[top]=x;
    printf("\n The Element %d is pushed Successfully!",x);
}
}
void pop(){
//the pop operation
//base case
if(top==-1){
    printf("\n The Stack is Empty --- Stack Underflow!");

}
else{
    top=top-1;
    printf("\n The Element %d is Deleted Successfully!",stack[top]);

}
}
void display(){
//to display the stack elements
//base case
if(top==-1){
    printf("\n The Stack is Empty --- Stack Underflow!");

}
else{
	int i;
    printf("\n The element of the stack is ~~");
    for( i=0;i<=top;i++){
        printf("%d    ",stack[i]);
    }
}
}
void main(){
    int choice;
do{
    printf("\n### This is Stack Operation ###");
    printf("\n Enter 1 to push elements");
    printf("\n Enter 2 to pop elements");
    printf("\n Enter 3 to display the  elements of the stack!");
    printf("\n Enter 4 to exit from the program");
    printf("\n Choose your choice!");
    scanf("%d",&choice);
    switch(choice){
case 1:
    printf("\n Enter the element to push ");
    scanf("%d",&x);
    push(x);
    break;
case 2:
    pop();
    break;
case 3:
    display();
    break;
case 4:
    exit(0);

}

}
while(1);
}

