#include<stdio.h>
int main(){
    int total;
    printf("How many value you wanna store:");
    scanf("%d",&total);
    int list[total];
    int length = sizeof(list) / sizeof(list[0]);
    for(int i=0;i<length;i++){
        scanf("%d",&list[i]);
    }

    printf("The output is:\n");
    for(int i=0;i<length;i++){

        printf("%d \n",list[i] * (i+1));
    }

    /*
    float marks[3];
    scanf("%f %f %f",&marks[0],&marks[1],&marks[2]);
    printf("The Marks is : %.2f %.2f %.2f",marks[0],marks[1],marks[2]);
    */
    /*
    double list[] = {10.5,2.5,05,5,8,7.5,8,8};

    printf("%.2lf",list[0]);

  */

    /*
    int jekono[3];
    jekono[0] = 1;
    jekono[1] = 10;
    jekono[2] = 20;
    printf("the value is: %d %d %d",jekono[0],jekono[1],jekono[2]);
    */


return 0;

}
