#include<stdio.h>
int main(){

    float celcius,fahrenheit;
    printf("Input Temperature in Celcius: ");
    scanf("%f",&celcius);

    fahrenheit = (celcius*9/5)+32;
    printf("%.2f",fahrenheit);
    return 0;
}

