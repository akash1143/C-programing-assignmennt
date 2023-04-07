
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int freq[256] = {0};
    int i, maxFreq = 0;
    char maxChar;

    printf("Enter any string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        freq[str[i]]++;
    }

    for(i=0; i<256; i++)
    {
        if(freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            maxChar = i;
        }
    }

    printf("Highest frequency character: '%c' (ASCII Value = %d)\n", maxChar, maxChar);
    printf("Frequency: %d\n", maxFreq);

    return 0;
}
