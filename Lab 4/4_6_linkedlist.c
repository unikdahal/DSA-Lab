// 6. Write a C program to create a linked list, then do the following operations usingamenu driven loop:
// a) Traverse the linked list and print the data.
// b) Find the sum of all nodes.
// c) Search an data element in the given linked list. d) Insert a node at front.
// e) Insert a node at last.
// f) Insert a node at any position.
// g) Delete a node at front.
// h) Delete a node at last.
// i) Delete a node at any position

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head=NULL;

void traverse(){
    struct node *temp=head;

    while (temp->next!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);


}

void insert2(){

    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data");
    scanf("%d",&temp->data);
    temp->next=NULL;
    struct node *ptr;
    if (head==NULL)
    {
        head=temp;
    }else{
        ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=temp;
    }





}

int main(){

    int ch;
    while (1)
    {
       printf("Single Linked List Operations : \n");
       printf("1. Traverse \n");
       printf("2. Sum\n");
       printf("3. Search\n");
       printf("4. Addatfront\n");
       printf("5 Addatlast\n");
       printf("6. Add at any position\n");
       printf("7. Delete at front\n");
       printf("8. Delete at last\n");
       printf("9. Delete at any position\n");
       printf("10. Quit\n");

       printf("Enter your choice:");
       scanf("%d",&ch);

       switch (ch)
       {
        case 1 :
            traverse();
            break;
        // case 2 :
        //     sum();
        //     break;
        // case 3 :
        //     search();
        //     break;
        // case 4 :
        //     insert1();
        //     break;
        case 5 :
            insert2();
            break;
        // case 6 :
        //     insert3();
        //     break;
        // case 7 :
        //     delete1();
        //     break;
        // case 8 :
        //     delete2();
        //     break;
        // case 9 :
        //     delete3();
        //     break;
        // case 10 :
        //     exit(1);
       default:
            printf("Invalid Input \n\n");
       }

    }





    return 0;
}
