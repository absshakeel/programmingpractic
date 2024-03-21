#include<stdio.h>
int main(){
    float x,y,z,avg;
   /* scanf("%f",&x);
    scanf("%f",&y);
    scanf("%f",&z);
    */
    scanf("%f %f %f",&x,&y,&z);
    avg = (x + y + z) / 3;
    printf("%.2f",avg);
    return 0;
}
