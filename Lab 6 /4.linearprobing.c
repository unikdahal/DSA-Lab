// Write a C program to employ Linear Probing to avoid collisions in a Hash-basedsearching. Use Hash Table Size: 07; Elements are: 76, 40, 48,5,55

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
                if(j==n){
                    j=0;
                }
                if(j==rem){
                    printf("No more space in hash table");
                    exit(0);
                }
            }
            hash[j]=arr[i];
        }
    }

    int rem=key%n;
    if(hash[rem]==key){
        printf("Present");
    }else{
        int j=rem+1;
        while(hash[j]!=key){
            j++;
            if(j==n){
                j=0;
            }
            if(j==rem){
                printf("Not present");
                exit(0);
            }
        }
        printf("Present");
    }

    return 0;

}
