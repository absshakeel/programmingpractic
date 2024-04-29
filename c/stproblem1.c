#include<stdio.h>
#include<string.h>
//nothing will print
int main(){
    char p[20];
    char *s= "Hello";
    int length = strlen(s);
    for(int i = 0;i<length;i++){
        p[i] = s[length - i];
    }
    printf("%s",p);
    return 0;
}
