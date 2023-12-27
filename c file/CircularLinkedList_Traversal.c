#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
void LinkedListTraversal( struct Node *head){
    struct Node*ptr = head;
    do{
        printf("%d\t", ptr -> data);
        ptr = ptr -> next;
    }
    
    while(ptr != head);
}

int main(){
    //setting the memory 
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;
    //malloc
    head = (struct Node*)malloc(sizeof(struct Node));
    second =  (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    //val setting
    head ->data = 6;
    head ->next = second;

    second -> data =9;
    second -> next = third;

    third -> data = 103;
    third ->next = fourth;

    fourth -> data = 6565;
    fourth ->next = NULL;

    //Traversal
    LinkedListTraversal(head);




    return 0;


}