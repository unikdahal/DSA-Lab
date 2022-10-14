//Wap to implement linear search using recursive function
#include<stdio.h>



int linearsearch(int arr[],int n,int i,int key)
{
    if(i==n){
        return 0;
    }

    if(arr[i]==key){
        return 1;
    }

    linearsearch(arr,n,i+1,key);

}




int main(){

    int arr[]={1,2,3,4,5,6,7,8,9};
    int key;
    scanf("%d",&key);

    int k=linearsearch(arr,9,0,key);

    if(k){
        printf("Element is present");
    }else{
        printf("Element is absent");
    }

    return 0;

}
