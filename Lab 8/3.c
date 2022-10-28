// 3 WAP to  traverse binary search tree;
// 	1 Inorder Traversal
// 	2. Preorder Traversal
// 	3. Post Order Traversal

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

void preorder(int i){
    if(arr[i]!=0){
        printf("%d ",arr[i]);
        preorder(2*i+1);
        preorder(2*i+2);
    }
}

void postorder(int i){
    if(arr[i]!=0){
        postorder(2*i+1);
        postorder(2*i+2);
        printf("%d ",arr[i]);
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
    printf("Inorder Traversal: ");
    traverse(0);
    printf("\nPreorder Traversal: ");
    preorder(0);
    printf("\nPostorder Traversal: ");
    postorder(0);
    return 0;
}

