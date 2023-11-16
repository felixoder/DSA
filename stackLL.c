// Stack Operation in c ---- Push and Pop 
#include<stdio.h>
#include<stdlib.h>
struct Stack
{
    int data;
    struct Stack*next;
};
struct Stack*createStack(int data){
    struct Stack*NewStack = (struct Stack*)malloc(sizeof(struct Stack));
    NewStack -> data = data;
    NewStack -> next = NULL;

    return NewStack;

}
void AppendStack(struct Stack*head , int data){
    struct Stack*NewStack = createStack(data);
    struct Stack*dummy = head;
    while(dummy -> next != NULL){
        dummy = dummy -> next;
    }
    dummy -> next = NewStack;
}
void Traversal(struct Stack*head){
    struct Stack*current = head;
    while (current != NULL)
    {
        printf("%d ", current -> data);
        current = current -> next;
    }
    printf("\n");
    
}
struct Stack*Push(struct Stack*head , int data){    
    struct Stack*dummy = (struct Stack*)malloc(sizeof(struct Stack));
    dummy -> data = data;
    
    if(head == NULL){
        return dummy;
    }
    dummy -> next = head;
    return dummy;
    free(dummy);

}
struct Stack*Pop(struct Stack*head){
    struct Stack*p = head;
    struct Stack*q = head -> next;
    if(head == NULL || head -> next == NULL){
        printf("\n No Node is present in the Linked List !\n");
        return 0;
    }
    while(q -> next != NULL){
        p = p-> next;
        q = q-> next;
    }
    p-> next = NULL;
    free(q);
    return head;

}
int main(){
    struct Stack*l1 = createStack(12);
    AppendStack(l1 , 2);
    AppendStack(l1 , 78);
    AppendStack(l1 , 23);
    AppendStack(l1 , 92);
    l1 = Pop(l1 );
    l1 = Pop(l1 );
    Traversal(l1);



    return 0;
}