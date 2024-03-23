
//prime number
//5 /1 = 5
//5 / 5 = 5

#include<stdio.h>

int primechecker(int a){
        for(int i=2;i<= a / 2;i++){
            if(a % i == 0){

              return 0;

            }

        }
        return 1;
}
int main(){
    int n,x;
    scanf("%d",&n);

    for(int a=2;a<=n;a++){
        if(primechecker(a)){
                 printf("%d ",a);

        }
    }





}

