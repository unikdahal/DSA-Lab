// 2)WAP to create an N degree tree using array.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }
    int degree;
    printf("Enter the degree of the tree: ");
    scanf("%d",&degree);
    int i=0;
    while(i<n){
        printf("%d ",arr[i]);
        for(int j=0;j<degree;j++){
            if(i+j+1<n){
                printf("%d ",arr[i+j+1]);
            }
        }
        printf("\n");
        i=i+degree;
    }
    return 0;
}
