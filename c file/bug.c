#include<stdio.h>
#include<stdlib.h>

int choice,value=0;
int stack[5]; int i; int top=-1;
int main(){
	do{ 
		printf("### Stack Operation ###\n");
		printf("\n Enter 1 to push element");
		printf("\n Enter 2 to pop element");
		printf("\n Enter 3 to display the stack");
		printf("\n Enter 4 to exist from the program");
	}
	while(1);
	switch(choice){
		case 1:
			PUSH(value);
			break;
		case 2:
			POP();
			break;
		case 3:
			DISPLAY();
		case 4:
			EXIST(0);
		default:
			printf("invalid choice !");			
	}
	void PUSH( int x){
		if(top==5-1){
			printf("\nThe stack is already full");
		}
		else{
			value=top+stack[top];
			printf("\nInserted Successfully!");
		}
	}
	void POP(){
		if(top==-1){
			printf("\nThe stack is already empty");
		}
		else{
			value=top-stack[top];
			printf("\ndeleted Successfully!");
		}
	}
	void DISPLAY(){
		if(top==-1){
			printf("\nThe stack is already empty");
		}
		else{
			printf("\nThe stack is \n");
			for(i=0;i<=top;i++){
				printf("the stack is %d  ",stack[i]);
			}
			
		}
	}
	

}