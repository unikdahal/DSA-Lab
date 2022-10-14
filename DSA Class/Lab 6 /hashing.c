//WAP to implement hashing to search an element from a given array and also implement linear probing in case of collision

#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    printf("Enter the number of elements of the array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int key;
    printf("Enter the element to search");
    scanf(" %d",&key);


    int hash[n];
    for(int i=0;i<n;i++){
        int rem=arr[i]%n;
        if(hash[rem]==0){
            hash[rem]=arr[i];
        }else{
            int j=rem+1;
            while(hash[j]!=0){
                j++;
            }
            hash[j]=arr[i];
        }
    }
