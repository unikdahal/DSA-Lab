// WAP to swap two given nodes of a linked list

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

    int p1,p2;
    printf("Enter the positions of nodes you want to swap");
    scanf("%d %d",&p1,&p2);
    struct node *temp1, *temp2, *temp3, *temp4;
    temp1 = head;
    temp2 = head;
    temp3 = head;
    temp4 = head;
    for(int i=1; i<p1; i++){
        temp1 = temp1->next;
    }
    for(int i=1; i<p2; i++){
        temp2 = temp2->next;
    }
    for(int i=1; i<p1-1; i++){
        temp3 = temp3->next;
    }
    for(int i=1; i<p2-1; i++){
        temp4 = temp4->next;
    }
    temp3->next = temp2;
    temp4->next = temp1;
    temp = temp1->next;
    temp1->next = temp2->next;
    temp2->next = temp;
    temp = head;
    while(temp!=NULL){
        printf("%d ", temp->n);
        temp = temp->next;
    }
    return 0;
}
