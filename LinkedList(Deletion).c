#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
void Traversal(struct Node*ptr ){
    
    while(ptr !=NULL){
        printf("%d\t", ptr -> data);
        ptr = ptr -> next;
    }
}
//Case 1 : Deleting the First Node of the Linked list
//Logic : ==> make a pointer and Points it with the Head Node , make the next value of head as head , free the ptr
struct Node*DeleteTheFirst(struct Node*head ){
    struct Node*ptr = head;
    head = head -> next;
    free(ptr);
    return head;
}
//Case 2: Deleting the Last element from the Index of a Node
//Logic : ==> Points p on Head and q on the next value of head and iterate the value untill i < index -1 and if it is reached then Link the p -> next with q -> next and free q
struct Node*DeleteAtIndex(struct Node*head , int index){
    struct Node*p = head;
    struct Node*q = head -> next;
    for (int i = 0; i < index-1; i++)
    {
        p = p-> next;
        q = q-> next;
    }
    p -> next = q-> next;
    free(q);
    return head;
}
//Case 3: Deleting the last Element of the Linked List
//Logic : ==> Points p on Head and q on the next value of head and make progress the p and q untill the next value of q becomes NULL and if that make the value of p -> next as NULL and free q
struct Node*DeleteAtLast(struct Node*head ){
    struct Node*p = head;
    struct Node*q = head -> next;
    while(q->next !=NULL)
    {
        p = p-> next;
        q = q-> next;
    }
    p -> next = NULL;
    free(q);
    return head;
}
//Case 4: Deleting the index with a given value in a LL
struct Node*DeleteAtValue(struct Node*head , int value){
    struct Node*p = head;
    struct Node*q = head -> next;
    while(q -> data != value && q -> next != NULL)
    {
        p = p-> next;
        q = q-> next;
    }
    if( q-> data == value){
         p-> next = q -> next;
         free(q);

    }
    free(q);
    return head;
}
int main(){
    struct Node*head;
    struct Node*second;
    struct Node*third;
    head = (struct Node*)malloc(sizeof(struct Node));
    second= (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head -> data = 34;
    head -> next = second;

    second -> data = 12;
    second -> next = third ;

    third -> data = 768;
    third -> next = NULL;

    Traversal(head);
    printf("\n Before Deletion\n");
    //head = DeleteTheFirst(head);
    //head = DeleteTheBetween(head , 1);
    //head = DeleteAtLast(head);
    head = DeleteAtValue(head , 12);
    printf("\n After Deletion\n");
    Traversal(head);



    return 0;
}