//Check the following number prime or not by taking input from the user.
// n % i==0
//Write a program to print all prime numbers in a range.
#include<stdio.h>
int main(){
   int s,e;
   printf("Enter a range: (Ex : 20 50):");
   scanf("%d %d",&s,&e);

   for(int i=s;i<=e;i++){
        int isPrime=1;
        if(i<=1){
           isPrime = 0;
        }else{
            for(int j=2;j<= i / 2;j++){
                if(i % j == 0){
                    isPrime = 0;
                    break;
                }
            }
        }
        if(isPrime){
            printf("%d ",i);
        }

   }


}

