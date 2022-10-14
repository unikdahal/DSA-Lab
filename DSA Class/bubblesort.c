#include<stdio.h>
#include<stdlib.h>

int main(){

    int arr[]={1,2,3,1,0,-1,2,9,2};

    int n=9;


    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }




    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


}
