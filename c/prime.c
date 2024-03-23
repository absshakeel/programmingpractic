//Check the following number prime or not by taking input from the user.
// n % i==0
//Write a program to print all prime numbers in a range.
#include<stdio.h>
int main(){
    int n,isPrime = 1;
    scanf("%d",&n);

    if(n<=1){
        printf("%d is not a Prime Number.",n);
    }else{
        for(int i=2;i<= n / 2;i++){
            if(n % i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            printf("%d is a Prime Number.",n);
        }else{
            printf("%d is not a Prime Number.",n);
        }
    }
}
