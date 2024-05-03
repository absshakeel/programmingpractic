
#include<stdio.h>
int myfun(int i){
    if(i<5){
        printf("my function \n");
        return myfun(i+1);
    }else{
        return 0;
    }
}
int main(){
    int i=0;
    myfun(i);

    return 0;
}
