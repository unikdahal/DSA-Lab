//There is a linked list which contains records of person in its nodes, a node structure needs to created with Roll No, Name, CGPA, Branch Write a C program to perform the following operations.

// a)Each record (of an individual) can only be stored into the linked list as:
// New record insertion [101,AA,7.5,CSE]
// List contents (Example):

// [210, BB , 9.7 ,etc]
// [705, MM , 6.3, CSE]
// After insertion:

// List Contents (Example):

// [101, AA , 7.5 , CSE]
// [210, BB , 9.7 ,etc]
// [705, MM , 6.3, CSE]

// Hints: A new record is added to the linked list in the beginning of the list.

// B) There are certain whitelist (accepted ones) and blacklist (rejected ones) search needs to be implemented.
//List contents (Example):
// [101, AA , 7.5 , CSE]
// [210, BB , 9.7 ,etc]
// [705, MM , 6.3, CSE]


// Possible query : program.c whitelist[az]
// Output : etc
// Hints: Result (words) are within a to z and output should be unique words.

// Possible query : program.c whitelist[AF]
// Output : AA CSE BB (one time CSE only)
// Hints: Result (words) are within A to F and output should be unique words.

// Possible query : program.c whitelist[.]
// Output : 7.5 9.7 6.3
// Hints: Results(CGPA) are considere and output is the digit adjacent to the dot.

// Possible query : program.c whitelist[012]
// Output : 101 210
// Hints: The valid roll numbers are containing 0,1,2 and output should be unique roll numbers.


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    int roll;
    char name[20];
    float cgpa;
    char branch[20];
    struct node* next;
};



struct node* head=NULL;

void insertatbegin(){
    printf("\n Enter the data to be inserted at the beginning\n");
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the roll number");
    scanf("%d",&temp->roll);
    printf("Enter the name");
    scanf("%s",temp->name);
    printf("Enter the cgpa");
    scanf("%f",&temp->cgpa);
    printf("Enter the branch");
    scanf("%s",temp->branch);
    temp->next=NULL;
    struct node *ptr;
    if (head==NULL)
    {
        head=temp;
    }else{
        ptr=head;
        head=temp;
        temp->next=ptr;
    }
}
void insert(){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the roll number");
    scanf("%d",&temp->roll);
    printf("Enter the name");
    scanf("%s",temp->name);
    printf("Enter the cgpa");
    scanf("%f",&temp->cgpa);
    printf("Enter the branch");
    scanf("%s",temp->branch);
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

void traverse(){
    struct node *temp=head;

    while (temp->next!=NULL)
    {
        printf("%d ",temp->roll);
        printf("%s ",temp->name);
        printf("%f ",temp->cgpa);
        printf("%s \n",temp->branch);
        temp=temp->next;
    }
    printf("%d ",temp->roll);
    printf("%s ",temp->name);
    printf("%f ",temp->cgpa);
    printf("%s \n",temp->branch);

}

void whitelist(char *str){
    struct node *temp=head;
    int i=0,j;
    int arr[100];
    while (temp->next!=NULL)
    {
        if (str[0]=='.')
        {
            arr[i]=temp->cgpa;
            //check if the next element is already printed
            for(j=0;j<100;i++){
                if (arr[j]==temp->cgpa)
                {
                    break;
                }

            }
            if(j==100){
                printf("%f ",temp->cgpa);
            }
            i++;
        }else if(str[0]>='0' && str[0]<='2'){
            printf("%d ",temp->roll);
        }
        temp=temp->next;
    }
    if (str[0]=='.')
        {
            printf("%f ",temp->cgpa);
        }else if(str[0]>='0' && str[0]<='2'){
            printf("%d ",temp->roll);
        }
}


int main(){
    int n;
    printf("Enter the number of nodes");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        insert();
    }
    insertatbegin();
    traverse();
    char str[20];
    printf("Enter the string");
    scanf("%s",str);
    whitelist(str);
    return 0;
}
