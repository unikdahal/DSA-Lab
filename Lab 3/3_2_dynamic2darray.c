//WAP to create store and print a 2D array of integers using dynamic memory allocation(stdlib.h).

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,m,i,j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&n,&m);
    int *a=(int*)malloc(n*m*sizeof(int));
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i*m+j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[i*m+j]);
        }
        printf("\n");
    }
    free(a);
    


}
