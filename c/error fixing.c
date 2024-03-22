#include<stdio.h>
int main(){
    int i =0;
    for(i;i<5;i++){
        for(int j = 0;j<3;j++){
            if(i == 3){
                break;
            }
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
