
#include<stdio.h>
int main(){

    float meters,feet,inch,cm;
    printf("Input Distance in  Meters: ");
    scanf("%f",&meters);

    feet = meters * 3.21  ;
    inch =  meters * 39.37  ;
    cm =  meters * 100  ;
    printf(" feet: %.2f \n inch: %.2f \n cm: %.2f",feet,inch,cm);
    return 0;
}

