
#include <stdio.h>

struct Student {
    int roll_no;
    char stud_name[50];
    int mark1, mark2, mark3;
    int total_marks;
    float avg_marks;
};

int main() {
    int i, j, num_students;

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    struct Student students[num_students];

    for(i = 0; i < num_students; i++) {
        printf("\nEnter the roll number, name, and marks of student %d: ", i+1);
        scanf("%d %s %d %d %d", &students[i].roll_no, students[i].stud_name, &students[i].mark1, &students[i].mark2, &students[i].mark3);

        students[i].total_marks = students[i].mark1 + students[i].mark2 + students[i].mark3;
        students[i].avg_marks = (float)students[i].total_marks / 3;
    }

    for(i = 0; i < num_students - 1; i++) {
        for(j = i + 1; j < num_students; j++) {
            if(students[i].total_marks < students[j].total_marks) {
                struct Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("\nStudent Records Sorted by Total Marks (in Descending Order):\n");
    printf("\nRoll No.\tName\t\tTotal Marks\tAverage Marks\n");

    for(i = 0; i < num_students; i++) {
        printf("%d\t\t%s\t\t%d\t\t%.2f\n", students[i].roll_no, students[i].stud_name, students[i].total_marks, students[i].avg_marks);
    }

    return 0;
}
