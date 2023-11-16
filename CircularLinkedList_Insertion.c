#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void LinkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }

    while (ptr != head);
}
struct Node *LinkedListInsertion(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head->next;
    while(p-> next != head){
        p = p -> next;
    }
    //At this point p points to the last node of this Circular Linked List
    p -> next = ptr;
    ptr -> next = head;
    head = ptr;
    return head;

}
struct Node* LinkedListInsertionAtAnyZone(struct Node* head, int data, struct Node* prevNode) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    // Check if prevNode is NULL or if it's the last node
    if (prevNode == NULL || prevNode->next == head) {
        // If prevNode is NULL or the last node, insert after head
        ptr->next = head->next;
        head->next = ptr;
    } else {
        // Insert after prevNode
        ptr->next = prevNode->next;
        prevNode->next = ptr;
    }

    return head;
}

int main()
{
    // setting the memory
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    // malloc
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // val setting
    head->data = 6;
    head->next = second;

    second->data = 9;
    second->next = third;

    third->data = 103;
    third->next = fourth;

    fourth->data = 6565;
    fourth->next = head;

    // Traversal
    printf("\nBefore\n");
    LinkedListTraversal(head);
    printf("\nAfter\n");
    head = LinkedListInsertionAtAnyZone(head, 80 , second);
    LinkedListTraversal(head);

    return 0;
}