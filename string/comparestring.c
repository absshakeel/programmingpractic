
//1.  Write a program in C to compare two strings without using string library functions.

#include<stdio.h>
int main(){
    int comp = 1;
    char myname1[] = "abs";
    char myname2[] = "Shakeel";
    int length = sizeof(myname2)  / sizeof(myname2[0]);
    for(int i=0;i<length;i++){
        if(myname1[i] != myname2[i]){
            comp=0;
        }
    }
    if(comp){
        printf("string 1 & string 2 are  equal");
    }else{
    printf("string 1 & string 2 are  equal");
    }

}
