#include<stdio.h>
int main(){
    int terms;
    printf("Enter the number of terms");
    scanf("%d",&terms);

    int arr[terms-1];
    for(int i=0;i<terms;i++){
        printf("Enter the coefficient of %dth power term",i);
        scanf("%d",&arr[i]);
    }

    for(int i=terms-1;i>=0;i--){
        if(i!=0){
            printf("%dx^%i + ",arr[i],i);
        }else{
            printf("%dx^%d",arr[i],i);
        }
    }




}
