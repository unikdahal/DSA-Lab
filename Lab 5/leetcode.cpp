#include <iostream>
using namespace std;

int sum(int arr[],int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }

    return arr[0]+sum(arr+1,size-1);
}

bool search(int arr[],int size,int key){
    if(arr[0]==key){
        return true;
    }
    if(size==0){
        return false;
    }

    return search(arr+1,size-1,key);
}

int main(){
    int n=5;
    int arr[5]={2,4,6,9,13};
    int key;
    cin>>key;

    cout<<search(arr,n,key)<<endl;
}
