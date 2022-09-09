// . Write a C program to swap two consecutive nodes in a single linked list without
// using any additional pointers

#include<stdio.h>
#include<stdlib.h>

struct node{
    int n;
    struct node* next;
};

struct node* head = NULL, * temp, * newnode;
void create_node(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter number: ");
    scanf("%d", &newnode->n);
    newnode->next=NULL;
    if(head==NULL)
        head=temp=newnode;
    else{
        temp->next = newnode;
        temp = newnode;
    }
}
int main(){
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        create_node();
    }
    temp = head;
    while(temp!=NULL){
        printf("%d ", temp->n);
        temp = temp->next;
    }
    //swap consecutive node
    int p1,p2;
    printf("Enter position of node you want to swap");
    scanf("%d",&p1);
    p2=p1+1;



}



























