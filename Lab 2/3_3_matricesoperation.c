//WAP which takes two matrices as input and do the folowing using separate user defined function
// 1. Transpose of a given matrix
// 2. Addition of two matrices
// 3. Subtraction of two matrices
// 4. Multiplication of two matrices

#include<stdio.h>

void transpose(int n,int m,int a[n][m]){
    printf("The transpose of the matrix is: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}
void add(int n,int m,int a[n][m],int b[n][m]){
    printf("The sum of the two matrices is: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}
void sub(int n,int m,int a[n][m],int b[n][m]){
    printf("The difference of the two matrices is: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]-b[i][j]);
        }
        printf("\n");
    }
}
void multiply(int n,int m,int a[n][m],int b[n][m]){
    printf("The product of the two matrices is: \n");
    int result[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            result[i][j]=0;
            for(int k=0;k<n;k++){
                result[i][j]+=a[i][k]*b[k][j];
            }

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int r1,c1,r2,c2;;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d",&r1,&c1);
    int arr1[r1][c1];
    printf("Enter the elements of first matrix: ");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d",&r2,&c2);
    // int arr2[r2][c2];
    // printf("Enter the elements of second matrix: ");
    // for(int i=0;i<r2;i++){
    //     for(int j=0;j<c2;j++){
    //         scanf("%d",&arr2[i][j]);
    //     }
    // }

    transpose(r1,c1,arr1);
    // transpose(r2,c2,arr2);
    // add(r1,c1,arr1,arr2);
    // sub(r1,c1,arr1,arr2);
    // multiply(r1,c1,arr1,arr2);

    return 0;

}
