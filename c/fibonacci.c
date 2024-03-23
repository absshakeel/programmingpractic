//Print Fibonacci series up to a certain number by taking input from the user.
//0 1 1 2 3 5 8 13 21  34

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int n1 = 0, n2 = 1;
    int nextnumber = n1 + n2;
    printf("Fibonacci series: %d %d ",n1,n2);
    for(int i=3; i<= n;i++){
        printf("%d ",nextnumber);
        n1 = n2; // n1=1,n1=1, n1 = 2
        n2 = nextnumber; // n2 = 1,n2= 2, n2 = 3
        nextnumber = n1 + n2; // nn = 2, nn=3, nn=5
    }
    return 0;
    //Fibonacci series:0 1 1 2 3 5 8 13 21 34
}
