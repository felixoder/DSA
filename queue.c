#include<stdio.h>
#include<stdlib.h>
int queue[5];
int rear=-1;
int front=-1;
int x;
void enqueue(int x){
	//enqueue operation
	//base case
	if(rear==5-1){
		printf("\n The Queue is Full !----Queue Overflow");
	}
	else if(front==-1&&rear==-1){
		rear=rear+1;
		queue[rear]=x;
		printf("\n The Element %d is inserted syccessfully!",x);
		front++;
	}
	
	else{
			rear=rear+1;
			queue[rear]=x;
			
		printf("\n The Element %d is inserted syccessfully!",queue[rear]);
		
	}
}
void dequeue(){
	//dequeue operation
	//base case
	if(front==-1){
		printf("\n The Queue is Empty!---Queue Underflow");
	}
	else if(front<rear){
		printf("\n The element %d is Deleted from the Queue!",queue[front]);
		front++;
		
	}
	else{
		
		printf("\n The element %d is Deleted from the Queue!",queue[front]);
		front = rear = -1;
	}
}
void display(){
	//display operation
	//base case 
	if(front == -1){
		printf("\n The Queue is Empty !----Queue Underflow!");
	}
	else{
		int i;
		for(i=front;i<=rear;i++){
			printf("%d    ",queue[i]);
		}
	}
}
void main(){
	int choice;
	do{
		printf("\n ### Queue Operation! ###");
		printf("\n Enter 1 to Enqueue!");
		printf("\n Enter 2 to Dequeue!");
		printf("\n Enter 3 to Display the Queue!");
		printf("\n Enter 4 to Exit!");
		//Selection Of the Choice
		printf("\n Enter your Choice!");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("\n Enter the Element to Push");
				scanf("%d",&x);
				enqueue(x);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("\n INVALID COICE!");
			
		}
	
		
	}
	while(1);
}
