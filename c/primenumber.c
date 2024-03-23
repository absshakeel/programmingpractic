//prime number
//5 /1 = 5
//5 / 5 = 5
#include<stdio.h>
int main(){
    int n,x=0;
    scanf("%d",&n);
    for(int i=2;i<= n / 2;i++){
        if(n % i == 0){
            x=1;
            break;
        }
    }
    if(x==0){
        printf("%d is  a Prime Number \n",n);

    }else{
        printf("%d is not a Prime Number \n",n);
    }


}

