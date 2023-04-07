
#include <stdio.h>

int main()
{
    char str[100];
    int sum = 0, i = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin); 

    while (str[i] != '\0')
    {
        sum += (int)str[i]; 
        i++;
    }

    printf("Sum of ASCII values of all characters in the string: %d\n", sum);

    return 0;
}
