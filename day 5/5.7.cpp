
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b, n;
    
    printf("Enter the minimum number: ");
    scanf("%d", &a);
    
    printf("Enter the maximum number: ");
    scanf("%d", &b);
    
    printf("Enter the number of random numbers to generate: ");
    scanf("%d", &n);
    srand(time(NULL));
    int random_numbers[n];
    for (int i = 0; i < n; i++) {
        random_numbers[i] = rand() % (b - a + 1) + a;
    }
    printf("Random numbers: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", random_numbers[i]);
    }
    printf("\n");
    
    return 0;
}
