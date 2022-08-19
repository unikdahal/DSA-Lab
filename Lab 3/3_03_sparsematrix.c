

#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows and columns of the matrix");
    scanf("%d %d",&r,&c);
    int arr[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int count=0;


    int total=r*c;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==0){
                count++;
            }
        }
    }
    float percentage = (float)count*100/total;

    printf("%f",percentage);

    if(percentage<60 || percentage>75){
        printf("Not sparse");
    }else{
        printf("Sparse");
    }
    return 0;

}
