#include<stdio.h>
void sum(int a,int b){
    int sum;
    sum = a + b;
    printf("Sum is :%d",sum);
}
int main(){
    int a,b;
    printf("Enter 2 number:");
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}

