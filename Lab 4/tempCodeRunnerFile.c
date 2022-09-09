#include<stdio.h>
int main(){
    int terms;
    printf("Enter the number of terms");
    scanf("%d",&terms);

    int arr[terms-1];
    for(int i=0;i<terms;i++){