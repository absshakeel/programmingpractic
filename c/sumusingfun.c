#include<stdio.h>



void mydetails(char name[], int roll){
    printf("Hello my name is %s and my roll is: %d \n",name,roll);
}


int main(){
    mydetails("shakeel",20);
    mydetails("abc",50);
    mydetails("fdsafdsa",12);
    mydetails("we",41);
    mydetails("a",5);



}
















/*
int myAge(){
    int a = 10;
    int b = 20;
    int sum;
    printf("This function will return  sum of 2 value: \n");
    printf("hello I am my age function\n");
    sum = a + b;
    return sum;
}

int main(){


    int result = myAge();
    printf("%d",result);
    return 0;
}

*/
