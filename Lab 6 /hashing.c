// . Write a C program to implement folding, division and mid-square techniques tosearch an item using a Hash Table of size 11. Where the given array elements are:
// 20, 76, -5, 101, 63, 11, 86, 34, 54, 60

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 11

int hash(int key, int i)
{
    return (key + i) % SIZE;
}

int main()
{
    int arr[] = {20, 76, -5, 101, 63, 11, 86, 34, 54, 60};
    int key, i, j, k, index, flag = 0;
    int hashTable[SIZE] = {0};

    printf("Enter the key to search: ");
    scanf("%d", &key);

    // Folding
    i = 0;
    while (i < 10)
    {
        j = arr[i];
        k = 0;
        index = 0;
        while (j > 0)
        {
            index += j % 10 * pow(10, k);
            j /= 10;
            k++;
        }
        index = index % SIZE;
        if (hashTable[index] == 0)
        {
            hashTable[index] = arr[i];
            i++;
        }
        else
        {
            i++;
            continue;
        }
    }

    printf("Folding: ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", hashTable[i]);
    }
    printf("

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
