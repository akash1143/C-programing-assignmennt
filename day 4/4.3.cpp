#include <stdio.h>

int main() {
    char name[50];
    int roll_number;
    int birth_day, birth_month, birth_year;
    int admission_day, admission_month, admission_year;
    int age_years;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter roll number: ");
    scanf("%d", &roll_number);

    printf("Enter date of birth (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &birth_day, &birth_month, &birth_year);

    printf("Enter admission date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &admission_day, &admission_month, &admission_year);
    age_years = admission_year - birth_year;
    if (admission_month < birth_month || (admission_month == birth_month && admission_day < birth_day)) {
        age_years--;
    }
    printf("\nStudent information:\n");
    printf("Name: %s\n", name);
    printf("Roll number: %d\n", roll_number);
    printf("Date of birth: %02d/%02d/%d\n", birth_day, birth_month, birth_year);
    printf("Admission date: %02d/%02d/%d\n", admission_day, admission_month, admission_year);
    printf("Age at time of admission: %d\n", age_years);

    return 0;
}
