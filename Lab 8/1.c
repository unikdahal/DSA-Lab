// 1)WAP to create a binary search tree using array having the following operations:
// Insert a Node
// Traverse

#include<stdio.h>
#include<stdlib.h>

int arr[100];

void insert(int n){
    int i=0;
    while(arr[i]!=0){
        if(n<arr[i]){
            i=2*i+1;
        }else{
            i=2*i+2;
        }
    }
    arr[i]=n;
}
void traverse(int i){
    if(arr[i]!=0){
        traverse(2*i+1);
        printf("%d ",arr[i]);
        traverse(2*i+2);
    }
}
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        printf("Enter the element: ");
        scanf("%d",&x);
        insert(x);
    }
    traverse(0);
    return 0;
}
