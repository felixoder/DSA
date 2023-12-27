//! The value of pointer in C

/*#include<stdio.h>
int main(){
    int x;
    x = 10;
    int *p;
    p = &x;
    printf("The value of x = %d\n", x);
    printf("The value of p = %x\n", p);
    printf("The value of &x = %x\n", p);
    printf("The value of *p = %d\n", *p);
    printf("The value of &p = %d\n", &p);


    return 0;

}

*/

//! Structure Using Dot(.) Operator

/*
#include<stdio.h>
struct student
{
    int roll_numbers;
    float marks;
    char gender;

};


int main(){
    struct student x;
    printf("\n Enter Your Roll Number");
    scanf("%d",&x.roll_numbers);
    printf("\n Enter marks");
    scanf("%f",&x.marks);
    printf("\n Enter gender(M/F)");
    scanf("%s",&x.gender);

    printf("\nYour roll number is %d",x.roll_numbers);
    printf("\nYour  marks is %f",x.marks);
    printf("\nYour  gender is %c",x.gender);
}

*/

#include<stdio.h>
struct student {
    int roll_number;
    float marks;
    char gender;
};
int main(){
    struct student *p , x;
    p = &x;
    printf("\n Enter Your Roll Number");
    scanf("%d",&p->roll_number);
    printf("\n Enter marks");
    scanf("%f",&p->marks);
    printf("\n Enter gender(M/F)");
    scanf("%s",&p->gender);

    printf("\nYour roll number is %d",p->roll_number);
    printf("\nYour  marks is %f",p->marks);
    printf("\nYour  gender is %c",p->gender);
    
    


}

