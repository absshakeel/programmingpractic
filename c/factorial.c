//Factorial
//n=7
//n*(n-1)*(n-2)*(n-3)
//7*6*5*4*3*2*1
#include<stdio.h>
int main(){
    int n,factorial=1;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        //factorial=factorial*i;
        factorial*=i;
    }
    printf("Factorial of %d is : %d",n,factorial);
}
