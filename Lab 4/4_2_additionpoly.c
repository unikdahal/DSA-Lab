#include <stdio.h>
int main(){
    int n,m;
    printf("Enter sizes of both polynomials: ");
    scanf("%d%d", &n,&m);
    int pol1[n], pol2[m];
    printf("Enter elements of 1st polynomial: ");

    for(int i=0; i<n; i++){
        scanf("%d", &pol1[i]);
    }
    printf("Enter elements of 2nd polynomial: ");
    for(int i=0; i<m; i++){
        scanf("%d", &pol2[i]);
    }
    int max=n;
    int min=m;
    if(m>max){
        max=m;
        min=n;
    }
    int k;
    int ans[max];
    if(n>m){
        for(int i=0; i<max; i++){
            ans[i]=pol1[i];
            k = 2;
        }
    }
    else{
       for(int i=0; i<max; i++){
            ans[i]=pol2[i];
            k = 1;
        }
    }

    for(int i=0; i<min; i++){
        if(k==1)
            ans[i]= ans[i]+pol1[i];
        else if(k==2)
            ans[i]= ans[i]+pol2[i];

    }

    printf("The sum is: ");
    for(int i=max-1; i>=0; i-- ){
        printf("%dx^%i ", ans[i], i);
        if(i!=0)
            printf("+ ");
    }
    return 0;

}
