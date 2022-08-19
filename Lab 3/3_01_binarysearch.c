#include<stdio.h>


int BinarySearch(int arr[],int key, int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(key==arr[mid]){
            return mid;
        }else if(arr[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;

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

    int present=BinarySearch(arr,key,n);
    if(present==-1){
        printf("NOt present");
    }
    else{
        printf("%d is present in %d index",key,present+1);
    }
    return 0;
}
