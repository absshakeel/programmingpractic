// C programming Pointer
// Pointers (pointer variables) are special variables that are used to store addresses rather than values.
#include<stdio.h>

void test(int *xptr){
    *xptr = 50;
    printf("x is : %d \n",*xptr);
}
int main(){
    int x=10;
    int *ptr;
    ptr = &x;
    test(ptr);
    printf("X is = %d",x);

}

