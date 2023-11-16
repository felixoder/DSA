#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
//Case 1
struct Node *InsertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
//Case 2

struct Node *InsertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
   
    ptr->data = data;
    struct Node * p = head;
    while(p->next != NULL){
        p = p-> next;
    }
    p-> next = ptr ;
    ptr -> next = NULL;

    return head;
}
// Case 3
struct Node *InsertAtIndex(struct Node*head , int data , int index){
    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));

    struct Node * p = head ;
    int i = 0 ;
    while (i!= index -1)
    {
       p = p-> next;
       i++;
    }
    ptr ->data = data;
    ptr -> next =p -> next;
    p -> next = ptr;
    return head;

    
}
// Case 4
struct Node *InsertAfterNode(struct Node *head, struct Node*prevnode , int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
   
    ptr->data = data;
    ptr -> next = prevnode -> next;
    prevnode -> next = ptr;
   

    return head;
}
int main()
{
    // setting the memory
    struct Node *head;
    struct Node *second;
    struct Node *third;
    // malloc
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // val setting
    head->data = 6;
    head->next = second;

    second->data = 9;
    second->next = third;

    third->data = 10;
    third->next = NULL;

    // Traversal
    printf("Linked List Before Insertion Concepts\n");
    LinkedListTraversal(head);
    // head = InsertAtIndex(head,56 ,  1);
    //head = InsertAtEnd(head,56);
    head = InsertAfterNode(head , third , 45);32


    
    printf("Linked List After insertion at the end\n");
    LinkedListTraversal(head);

    return 0;
}