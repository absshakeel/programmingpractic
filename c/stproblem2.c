#include<stdio.h>
int main(){
    char c[] = "GATE2024";
    char *p = c;
    printf("%d",p);
    printf("%s",p + p[3] - p[1]);

return 0;
}
