
#include <stdio.h>

int find_students(int total_users, int staff_users);
int find_total_users();
int find_staff_users();
int find_non_teaching_staff(int staff_users);

int main()
{
    int total_users = find_total_users();
    int staff_users = find_staff_users();
    int student_users = find_students(total_users, staff_users);
    int non_teaching_staff = find_non_teaching_staff(staff_users);
    int total = total_users + non_teaching_staff;

    printf("Number of student users: %d\n", student_users);
    printf("Number of non-teaching staff users: %d\n", non_teaching_staff);
    printf("Total number of users: %d\n", total);

    return 0;
}

int find_students(int total_users, int staff_users)
{
    return total_users - staff_users;
}

int find_total_users()
{
    int total_users;
    printf("Enter the total number of users: ");
    scanf("%d", &total_users);
    return total_users;
}

int find_staff_users()
{
    int staff_users;
    printf("Enter the number of staff users: ");
    scanf("%d", &staff_users);
    return staff_users;
}

int find_non_teaching_staff(int staff_users)
{
    return staff_users / 3;
}
