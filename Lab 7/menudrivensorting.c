//WAP to do all sorting algorithms in a menu driven loop

#include<stdio.h>
#include<stdlib.h>

void insertionsort(int arr[],int n){
    int i,j,key;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void merge(int arr[],int l,int m, int r){
    int n1=m-l+1;
    int n2=r-m;

    int arr1[n1],arr2[n2];

    for(int i=0;i<n1;i++){
        arr1[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        arr2[i]=arr[m+i+1];
    }
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            arr[l+k]=arr1[i];
            i++;
            k++;
        }else{
            arr[l+k]=arr2[j];
            k++;
            j++;

        }
    }
    while(i<n1){
        arr[l+k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[l+k]=arr2[j];
        k++;
        j++;
    }
}
void mergesort(int arr[],int l,int r){
    if(l<r){
        int m=l+(r-l)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

void radixsort(int arr[],int n){
    
}
void quicksort(int arr[],int n){

};
void heapsort(int arr[],int n){

};



void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}



int main(){

    int n;
    printf("Enter the number of elements of the array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int choice;

    do{
        printf("Enter the sorting algorithm to use");
        printf("1. Insertion Sort");
        printf("2. Radix Sort");
        printf("3. Merge Sort");
        printf("4. Quick Sort");
        printf("5. Heap Sort");
        printf("6. Exit");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                insertionsort(arr,n);
                display(arr,n);
                break;
            case 2:
                radixsort(arr,n);
                display(arr,n);
                break;
            case 3:
                mergesort(arr,0,n);
                display(arr,n);
                break;
            case 4:
                quicksort(arr,n);
                display(arr,n);
                break;
            case 5:
                heapsort(arr,n);
                display(arr,n);
                break;
            default:
                printf("Invalid choice");
                break;
        }
    }while(1);

    return 0;
}
