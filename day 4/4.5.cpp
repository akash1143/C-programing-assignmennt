
#include<stdio.h>
#include<stdlib.h>

struct employee {
    int eno;
    char ename[20];
    float salary;
};

int main() {
    int n, i, max_index = 0;
    float max_salary = 0;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct employee employees[n];

    for(i=0; i<n; i++) {
        printf("\nEnter the details of employee %d: ", i+1);
        printf("\nEmployee Number: ");
        scanf("%d", &employees[i].eno);
        printf("Employee Name: ");
        scanf("%s", employees[i].ename);
        printf("Employee Salary: ");
        scanf("%f", &employees[i].salary);

        if(employees[i].salary > max_salary) {
            max_salary = employees[i].salary;
            max_index = i;
        }
    }

    printf("\nDetails of employee with highest salary:");
    printf("\nEmployee Number: %d", employees[max_index].eno);
    printf("\nEmployee Name: %s", employees[max_index].ename);
    printf("\nEmployee Salary: %.2f", employees[max_index].salary);

    return 0;
}
