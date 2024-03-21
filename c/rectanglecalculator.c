#include<stdio.h>
int main(){
    float length,breadth,area;

    scanf("%f",&length);
    scanf("%f",&breadth);

    area = length * breadth;
    printf("%.2f",area);
    return 0;
}
