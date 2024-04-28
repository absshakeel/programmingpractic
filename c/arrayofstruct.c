#include <stdio.h>
int main()
{
    struct student{
        char name [40];
        int age;
        int id_number;
        float cgpa;
    };
    struct student arr[10];
    for(int i=0 ; i<2 ; i++)
    {
        scanf("%s %d %d %f",&arr[i].name,&arr[i].age,&arr[i].id_number,&arr[i].cgpa);
    }
    for(int i=0 ; i<2; i++)
    {
        printf("%s %d %d %f \n", arr[i].name,arr[i].age,arr[i].id_number,arr[i].cgpa);
    }
}
