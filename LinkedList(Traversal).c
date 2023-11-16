#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
void LinkedListTraversal( struct Node *ptr){
    while(ptr!=NULL){
    printf("The Element is :%d\n",ptr->data);
    ptr = ptr->next;
    }
}

int main(){
    //setting the memory 
    struct Node*head;
    struct Node*second;
    struct Node*third;
    //malloc
    head = (struct Node*)malloc(sizeof(struct Node));
    second =  (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    //val setting
    head ->data = 6;
    head ->next = second;

    second -> data =9;
    second -> next = third;

    third -> data = 10;
    third ->next = NULL;

    //Traversal
    LinkedListTraversal(head);




    return 0;


}