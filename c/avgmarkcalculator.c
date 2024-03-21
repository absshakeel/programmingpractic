#include<stdio.h>
int main(){


    /*
    float m1,m2,m3,m4,m5,total,avg;
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
    total = m1 + m2 + m3 + m4 + m5;
    avg =  total  / 5;
    printf("Total Marks: %d \n",totalmarks);
    printf("Average Marks: %.2f \n",avg);

    */
    float  avg;
    int totalsubject;
    int totalmarks = 0;
    printf("Number of subjects:");
    scanf("%d",&totalsubject);
    int marks[totalsubject];
    for(int i=1;i<=totalsubject;i++){
        printf("Enter subject %d mark :",i);
        scanf(" %d",&marks[i]);
        totalmarks+=marks[i];
        printf("\n");
    }
    avg =  totalmarks  / totalsubject;
    printf("Total Marks: %d \n",totalmarks);
    printf("Average Marks: %.2f \n",avg);

}
