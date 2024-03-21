
#include<stdio.h>
int main(){

    float basic_salary,dearness_allowence,house_rent,gross_salary;
    printf("basic_salary: ");
    scanf("%f",&basic_salary);

    //dearness_allowence =  basic_salary * 0.4  ;
    dearness_allowence =  (basic_salary *  40 ) /100  ;
    // house_rent =  basic_salary * 0.2  ;
    house_rent =   (basic_salary *  20 ) /100  ;
    gross_salary =   basic_salary + dearness_allowence + house_rent  ;
    printf("dearness_allowence %.2f \n",dearness_allowence);
    printf("House Rent %.2f \n",house_rent);
    printf("gross_salary %.2f",gross_salary);
    return 0;
}


