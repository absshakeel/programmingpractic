/*
If a five-digit number is input through the keyboard, write a program
 to calculate the sum of its digits.

 */
//65464
//46456
//65456
//65456
#include<stdio.h>
int main(){
    int n,sum=0,digit;
    printf("Enter 5 digit Number: ");
    scanf("%d",&n);
    if(n<10000 || n> 99999){
        printf("Invalid Number, please enter 5 digit number.");
        return 0;
    }
    while(n>0){
        digit = n % 10;
        sum+=digit;
        n = n / 10;
     }
    printf("Sum: %d",sum);

    return 0;
}
