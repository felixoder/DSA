#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node*left;
    struct node*right;

};


struct node*CreateNode(int data){
    struct node*n;
    n = (struct node*) malloc(sizeof(struct node));
    n -> data = data;
    n -> left = NULL;
    n -> right = NULL;
    

    return n;


}


int main(){
    //!  Constructing the root node
    // struct node*p;
    // p = (struct node*) malloc(sizeof(struct node));
    // p -> data = 2;
    // p -> left = NULL;
    // p -> right = NULL;

    //!  constructing the second node

    // struct node*p1;
    // p1 -> data = 1;

    // p1 = (struct node*) malloc(sizeof(struct node));
    // p1 -> left = NULL;
    // p1 -> right = NULL;

    //! constructing the third node
    
    // struct node*p2;
    // p2 -> data = 4;
    // p2 = (struct node*) malloc(sizeof(struct node));
    // p2 -> left = NULL;
    // p2 -> right = NULL;
    

   //! Linking the root node with left and right children

    // p -> left = p1;
    // p -> right = p2;


    //! Reconstruction  ---- Using Function
    
    struct node*p = CreateNode(2);
    struct node*p1 = CreateNode(1);
    struct node*p2 = CreateNode(4);

    p -> left = p1;
    p -> right = p2;



    



    return 0;
}