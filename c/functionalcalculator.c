#include<stdio.h>

int addition();
int substract();
int multiply();
int divide();
int squire();

int main(){

    int task;

    do{
        printf("\nSelect operation (Ex:2) :\n");
        printf("\n 1 Addition(+) \n 2 Subtraction(-) \n 3 Multiplication(X) \n 4 Division(/) \n 5 Square(^) \n 6 to ==END== \n");
        scanf("%d",&task);

        switch(task){
            case 1:
                addition();
                break;
             case 2:
                substract();
                break;
             case 3:
                multiply();
                break;
             case 4:
                divide();
                break;
             case 5:
                squire();
                break;
             case 6:
                printf("END \n");
                exit(0);
                break;
             default:
                printf("something went wrong!!!!! please try again");
                break;
        }

    }while(task != 6);
    return 0;
}

int addition(){
    int total_n;
    float s_number;
    float sum=0;
    printf("How many number you want to add:");
    scanf("%d",&total_n);
    printf("Enter the numbers: \n");
    for(int i=1;i<=total_n;i++){
        scanf("%f",&s_number);
        sum = sum + s_number;
    }
    printf("Sum is : %.2f \n",sum);
    printf("===========================\n");
    return 0;
}

int substract(){
    float n1,n2;
    float result;
    printf("1st Number:");
    scanf("%f",&n1);
    printf("2nd Number:");
    scanf("%f",&n2);
    result = n1 - n2;

    printf("Subtraction is : %.2f \n",result);
    printf("===========================\n");
    return 0;
}


int multiply(){
    float n1,n2;
    float result;
    printf("1st Number:");
    scanf("%f",&n1);
    printf("2nd Number:");
    scanf("%f",&n2);
    result = n1 * n2;

    printf("Multiplication is : %.2f \n",result);
    printf("===========================\n");
    return 0;
}
int divide(){
    float n1,n2;
    float result;
    printf("1st Number:");
    scanf("%f",&n1);
    printf("2nd Number:");
    scanf("%f",&n2);

    while(n2 == 0){
         printf("Divisor can't be 0\n");
         printf("2nd Number:");
         scanf("%f",&n2);
    }
    result = n1 / n2;

    printf("Division is : %.2f \n",result);
    printf("===========================\n");
    return 0;
}

int squire(){
    int n1;
    int result;
    printf("Enter Number:");
    scanf("%d",&n1);

    result = n1 * n1;

    printf("Square is : %d \n",result);
    printf("===========================\n");
    return 0;
}
