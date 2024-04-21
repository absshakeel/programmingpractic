#include<stdio.h>
void calculator(int,int);
int addition(int,int);
int substract(int,int);
int multiply(int,int);
int divide(int,int);

int main(){
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    calculator(n1,n2);
    return 0;
}
void calculator(int x, int y){
    printf("addition is : %d \n",addition(x,y));
    printf("Subtraction is : %d \n",substract(x,y));
    printf("multiply is : %d \n",multiply(x,y));
    printf("divide is : %d \n",divide(x,y));
}
int addition(int x, int y){
    return x + y;
}
int substract(int x, int y){
    return x - y;
}
int multiply(int x, int y){
    return x * y;
}
int divide(int x, int y){
    return x / y;
}
