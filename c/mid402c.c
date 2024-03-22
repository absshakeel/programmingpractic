#include<stdio.h>
int main(){
    int a = 1;
    while(a * a * a <150){
        printf("%4d",a * a * a);
        a++;
    }
    return 0;
    // output =   1   8  27  64 125
 }
