#include<stdio.h>
#include<stdlib.h>

int size=0;
struct node{
	int data;
	struct node* next;
};

typedef struct node node1;
node1* start=NULL;

//For Insertion......

void ins_beg(){
	size++;
	node1* new1=(node1*)malloc(sizeof(node1));
	printf("Enter Data to insert:\n  >>");
	scanf("%d",&new1->data);
	if(start==NULL){
		new1->next=NULL;
	}
	else{
		new1->next=start;
	}
	start=new1;
	printf("Successfully Inserted_\n");
}

void ins_end(){
	size++;
	node1* new1=(node1*)malloc(sizeof(node1));
	printf("Enter Data to insert:\n  >>");
	scanf("%d",&new1->data);
	new1->next=NULL;
	if(start==NULL){
		new1->next=start;
		start=new1;
		
	}
	else{
		node1* p=start;
		while(p->next != NULL){
			p=p->next;
		}
		p->next=new1;

	}
	printf("Successfully Inserted_\n");
}
void ins_pos(){
	int k;
	node1* s;
	node1* p=start;
	printf("Position to insert:\n  >>");
	scanf("%d",&k);
    if(size<k){
		char t;
		printf("Not that much element present in Linked list....\n");
		printf("__So Do you want to insert element after last most index: \n");
		printf("YES = y\nNO = n\n..........");
		scanf(" %c",&t);
		if(t=='y' || t=='Y'){
			ins_end();
		}
		return;
        }
	node1* new1=(node1*)malloc(sizeof(node1));
	printf("Enter Data to insert:\n  >>");
	scanf("%d",&new1->data);
	new1->next=NULL;
    size++;
	if(start==NULL){
		printf("No element present...\nso data stored in 1st position\n");
		start=new1;
		start->next=NULL;
	}
	else{
		for(int i=1;i<=k-2;i++){
			p=p->next;
		}
		s=p->next;
		p->next=new1;
		p=p->next;
		p->next=s;
	}
	printf("Successfully Inserted_\n");
}

//For Deletetion......

void del_beg(){
	if(start==NULL){
		printf("<<No element found to delete_\n");
	}
	else{
		node1* del=start;
		start=start->next;
		printf("<>Element_1  Successfully Deleted\n");
		size--;
		free(del);
	}
}

void del_end(){
	if(start==NULL){
		printf("<<No element found to delete_\n");
	}
	else{
		int u=size;
		size--;
		node1* del;
    	node1* s=start;
    	for(int i=1;i<=size-1;i++){
       		s=s->next;
    	}
		del=s->next;
    	s->next=NULL;
		printf("<>Element%d Successfully Deleterd \n",u);	
		free(del);
	}
}

void del_pos(){
	int k;
	node1* del;
	node1* p=start;
	printf("Position to Delete:\n  >>");
	scanf("%d",&k);
    if(size<k){
        printf("<<Position is empty/already Deleted...\n\n");
    }
	else if(k==1){
			del_beg();
		}
	else if(size==2){
		if(k==2){
			del_end();
		}
	}
	else{
		size--;
		for(int i=2;i<=k-1;i++){
			p=p->next;
		}
		del=p->next;
		p->next=del->next;
		free(del);
		printf("<> Element%d Successfully Deleterd\n",k);
	}
}

void display(){
	node1* d=start;
	for(int i=0;i<=size-1;i++){
		printf("Data_%d= %d\n",i+1,d->data);
		if(d->next==NULL){
			return;
		}
		else{
			d=d->next;
		}
	}
}

int main(){
	int choice,x,o,c;
	do{
		printf("=====Enter your Choice=====\n");
		printf("Press 1=Insert Element \t Press 2=Delete Element\n");
		printf("Press 3=Display Element\t Press 4=Size of Linked list \n Press 5=Exit:\n  >>");	
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("\n\n\t\t\t=====Enter Choice=====\n");
				printf("\t\t  Press 1=Insert in Beginning \t  Press 2=Insert in the end\n\t\t  Press 3=Insert in particular Position:\n\t\t    >>");
				scanf("%d",&c);
				switch(c){
					case 1:
						ins_beg();
						break;
					case 2:
						ins_end();
						break;
					case 3:
						ins_pos();
						break;
					default:
				printf("Invalid Choice.....Try again!\n");
				}
				break;

			case 2:
				printf("\n\n\t\t\t=====Enter Choice=====\n");
				printf("\t\t  Press 1=Delete from Beginning \t  Press 2=Delete from the end\n\t\t  Press 3=Delete from particular Position:\n\t\t  >>");
				scanf("%d",&x);
				switch(x){
					case 1:
						del_beg();
						break;
					case 2:
						del_end();
						break;
					case 3:
						del_pos();
						break;
					default:
				printf("Invalid Choice.....Try again!\n");
				}
				break;

			case 3:
				display();
				break;
			case 4:
				printf("<_>Element Present in linked list: %d\n\n",size);
				break;
			case 5:
				exit(0);
			default:
				printf("Invalid Choice.....Try again!\n");
		}
		printf("Enter 0 to continue......");
		scanf("%d",&o);
		printf("\n\n");
	}while(o==0);
	return 0;
}