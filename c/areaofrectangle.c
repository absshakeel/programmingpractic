#include<stdio.h>
int main(){
    double width,length,area;
    printf("Enter length:");
    scanf("%lf",&length);
    printf("Enter width:");
    scanf("%lf",&width);
    area = width * length;
    printf("Area is: %.2lf",area);
    return 0;
}
