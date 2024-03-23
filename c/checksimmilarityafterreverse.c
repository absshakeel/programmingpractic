/*
A five-digit number is entered through the keyboard. Write a
 program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not.



 */

//65456
//65456
//78958
//85987
#include<stdio.h>
int main(){
    int n,digit,revNumber=0,orginalnumber;
    printf("Enter 5 digit Number: ");
    scanf("%d",&n);
    orginalnumber = n;
    if(n<10000 || n> 99999){
        printf("Invalid Number, please enter 5 digit number.");
        return 0;
    }
    while(n>0){
        //78958
        digit = n % 10;
        revNumber = revNumber * 10 + digit;//85987
        n = n / 10;
     }
    if(orginalnumber == revNumber){
        printf("original(%d) and reversed(%d) numbers are equal",orginalnumber,revNumber);
    }else{
        printf("original(%d) and reversed(%d) numbers are not equal",orginalnumber,revNumber);
    }

    return 0;
}

