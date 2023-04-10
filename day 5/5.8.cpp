#include <stdio.h>

int main()
{
    int arr[100], n, i, j, duplicate;

    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    printf("Enter the elements in the list:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate items in the list are: ");
    for(i=0; i<n; i++)
    {
        duplicate = 0;
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                duplicate = 1;
                break;
            }
        }
        if(duplicate)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\nNon-duplicate items in the list are: ");
    for(i=0; i<n; i++)
    {
        duplicate = 0;
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                duplicate = 1;
                break;
            }
        }
        if(!duplicate)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
