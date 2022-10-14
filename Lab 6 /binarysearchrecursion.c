#include<stdio.h>


int BinarySearch(int arr[],int key, int n,int start,int end){
    if(start>end){
        return -1;
    }
    int mid=start+(end-start)/2;
    if(key==arr[mid]){
        return mid;
    }else if(arr[mid]<key){
        return BinarySearch(arr,key,n,mid+1,end);
    }else{
        return BinarySearch(arr,key,n,start,mid-1);
    }

}


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

    int start=0;
    int end=n-1;

    int present=BinarySearch(arr,key,n,start,end);
    if(present==-1){
        printf("NOt present");
    }
    else{
        printf("%d is present in %d index",key,present+1);
    }
    return 0;
}
