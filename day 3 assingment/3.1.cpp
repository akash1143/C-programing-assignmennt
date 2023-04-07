
#include <stdio.h>
int main()
{
    int start, end, i, flag;

    printf("Enter the start value: ");
    scanf("%d", &start);

    printf("Enter the end value: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are: ", start, end);

    for (i = start; i <= end; i++)
    {
        flag = 0;

        for (int j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0 && i > 1)
            printf("%d ", i);
    }

    return 0;
}
