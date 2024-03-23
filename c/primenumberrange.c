#include<stdio.h>
int main(){
    int n=3;
    int flag = 0;
    for(int i=2;i<n / 2;i++){
        if(n%i == 0){
            flag = 1;
        }
    }

    if(flag == 0){
        printf("%d prime number",n);
    }else{
        printf("%d Not a prime number",n);
    }
}
