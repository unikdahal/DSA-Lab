#include<stdio.h>
int main() {
    int m, n, i, j;
    printf("Enter size of 1st and 2nd : ");
    scanf("%d%d", &m, &n);
    int a[m], b[n], p[m+n-1];

    printf("Elements of 1st: \n");
    for(i = 0; i < m; i++){
       printf("Enter the coeff of x^%d : ", m-1-i);
       scanf("%d", &a[i]);
    }
    printf("\nElements of 2nd: \n");
    for(i = 0; i < n; i++){
       printf("Enter the coeff of x^%d : ", n-1-i);
       scanf("%d", &b[i]);
    }

    for(i = 0; i < (m+n-1); i++){
       p[i] = 0;
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            p[i+j] = p[i+j] + (a[i]*b[j]);
        }
    }

    printf("\nThe multiplication is: \n");
   for(i = 0; i < m+n-1; i++){
       if(i!=0)
        printf("+ ");
       printf("%dx^%d", p[i], m+n-2-i);
    }
    return 0;
}
