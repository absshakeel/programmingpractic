#include <stdio.h>
struct Employee {
    int empID;
    char name[50];
    float salary;
};

int main() {
    struct Employee employees[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].empID);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }
    int highestSalaryIndex = 0;
    for (int i = 1; i < 3; i++) {
        if (employees[i].salary > employees[highestSalaryIndex].salary) {
            highestSalaryIndex = i;
        }
    }
    printf("\nEmployee with the highest salary:\n");
    printf("Employee ID: %d\n", employees[highestSalaryIndex].empID);
    printf("Name: %s\n", employees[highestSalaryIndex].name);
    printf("Salary: %.2f\n", employees[highestSalaryIndex].salary);
    return 0;
}
