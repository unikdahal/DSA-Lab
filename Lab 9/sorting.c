// 1. Write a C program to the following sorting operations on the give sequence in
// ascending order: 10, 75, 115, 51, 33, 12, 2, 12
// A) Bubble Sort
// B) Insertion Sort
// C) Selection Sort
// D) Radix Sort
// E) Heap Sort
// F) Quick Sort
// G) Merge Sort

#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}

void radixSort(int arr[], int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int exp=1;max/exp>0;exp*=10){
        int output[n];
        int count[10]={0};
        for(int i=0;i<n;i++){
            count[(arr[i]/exp)%10]++;
        }
        for(int i=1;i<10;i++){
            count[i]+=count[i-1];
        }
        for(int i=n-1;i>=0;i--){
            output[count[(arr[i]/exp)%10]-1]=arr[i];
            count[(arr[i]/exp)%10]--;
        }
        for(int i=0;i<n;i++){
            arr[i]=output[i];
        }
    }
}

void heapify(int arr[], int n, int i){
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && arr[l]>arr[largest]){
        largest=l;
    }
    if(r<n && arr[r]>arr[largest]){
        largest=r;
    }
    if(largest!=i){
        int temp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;
        heapify(arr,n,largest);
    }
}

void heapSort(int arr[], int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--){
        int temp=arr[0];
        arr[0]=arr[i];
        arr[i]=temp;
        heapify(arr,i,0);
    }
}

int partition(int arr[], int low, int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
    return i+1;
}

void quickSort(int arr[], int low, int high){
    if(low<high){
        int pi=partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}

void merge(int arr[], int l, int m, int r){
    int n1=m-l+1;
    int n2=r-m;
    int L[n1], R[n2];
    for(int i=0;i<n1;i++){
        L[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++){
        R[j]=arr[m+1+j];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[]={10,75,115,51,33,12,2,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    while(1){
        printf("1. Bubble Sort \n");
        printf("2. Insertion Sort \n");
        printf("3. Selection Sort \n");
        printf("4. Radix Sort \n");
        printf("5. Heap Sort \n");
        printf("6. Quick Sort \n");
        printf("7. Merge Sort \n");
        printf("8. Exit \n");
        printf("Enter your choice: \n");
        int ch;
        scanf("%d",&ch);
        switch(ch){
            case 1:
                bubbleSort(arr,n);
                printArray(arr,n);
                break;
            case 2:
                insertionSort(arr,n);
                printArray(arr,n);
                break;
            case 3:
                selectionSort(arr,n);
                printArray(arr,n);
                break;
            case 4:
                radixSort(arr,n);
                printArray(arr,n);
                break;
            case 5:
                heapSort(arr,n);
                printArray(arr,n);
                break;
            case 6:
                quickSort(arr,0,n-1);
                printArray(arr,n);
                break;
            case 7:
                mergeSort(arr,0,n-1);
                printArray(arr,n);
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid choice");
        }

    }
    return 0;
}
