// WAP to find the x^a and P where p is a prime number and gcd(x,p)=1

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


//Calculating GCD
int gcd(int x,int p){
    if(x==0){
        return p;
    }
    else if(p==0){
        return x;
    }else if(x>=p){
        gcd(x-p,p);
    }else{
        gcd(x,p-x);
    }
}



int main(){

    int x,a,p;
    printf("Enter the x");
    scanf("%d",&x);
    printf("Enter the a");
    scanf("%d",&a);
    scanf("Enter the p")
    scanf("%d",&p);

    //checking prime
    int count=0;
    for(int i=2;i<p/2;i++){
        if(p%i==0){
            count++;
        }
    }
    if(count>0){
        exit(0);
    }



    int gcd_value=gcd(x,p);
    if(gcd_value!=1){
        exit(0);
    }

    if(p>a){
        exitr(0);
    }

    int z=pow(x,a);
    int ans=z%p;

    printf("The answer is %d",ans);
    return 0;


}
printf("Enter the x a and p");

