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
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]!=0){
                count++;
            }
        }
    }

    int arr1[count][count]={0};
    int r1=0;
    printf("The matrix is : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf(" %d",arr[i][j]);
            if(arr[i][j]!=0){
                arr1[r1][0]=i;
                arr1[r1][1]=j;
                arr1[r1][2]=arr[i][j];
                r1++;
            }

        }
        printf("\n");

    }
    printf("\n The triplet matrix is :\n");

    for(int i=0;i<count;i++){
        for(int j=0;j<3;j++){
            printf(" %d",arr1[i][j]);
        }
        printf("\n");
    }

    int arr2[count][count]={0};
    printf("\n The transpose is \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<count;j++){
            printf("%d ",arr1[j][i]);
            arr2[i][j]=arr1[j][i];
        }
        printf("\n");
    }

    for(int i=0;i<count;i++){
        for(int j=0;j<count;j++){
            printf("%d",arr1[i][j]+arr2[i][j]);
        }
    }


    return 0;
}
