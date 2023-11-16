// Memory Set up in Linked List 
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
int main(){
    struct Node * head ;
    struct Node * second ;
    struct Node * third ;
    //Allocate the memory for nodes in the Linked List in the heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    //Link the First and Second Node
    head ->data = 7;
    head->next = second;
    //Link the Second and third Node
    second->data = 10;
    second ->next = third;
    //Terminate the list in the Third node and the next pointer of the third LL should go to the NULL zone
    third -> data = 12;
    third -> next = NULL;


    return 0;
}