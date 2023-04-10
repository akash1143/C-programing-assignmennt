
#include <stdio.h>

int main() {
    char my_string[] = "Hello! This is an example string with special characters: !@#$%^&*()";
    int i, count = 0;
    for (i = 0; my_string[i] != '\0'; i++) {
        if (!((my_string[i] >= 'a' && my_string[i] <= 'z') ||
              (my_string[i] >= 'A' && my_string[i] <= 'Z') ||
              (my_string[i] >= '0' && my_string[i] <= '9'))) {
            count++;
        }
    }
    printf("There are %d special characters in the string.\n", count);
    return 0;
}
