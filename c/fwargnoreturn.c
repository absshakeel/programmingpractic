#include<stdio.h>
int division(){
    int a = 10;
    int b = 2;
    int div = a / b;
    return div;
}
int main(){
    int result = division();
    printf("Division is : %d\n",result);
    return 0;
}
