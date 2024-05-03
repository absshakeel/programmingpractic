

#include<stdio.h>
int myfun(){
    int i;
    if(i<5){
        printf("my function \n");
        i=i+1;
        return myfun();

    }
    return 0;

}
int main(){
    myfun();
    return 0;
}
