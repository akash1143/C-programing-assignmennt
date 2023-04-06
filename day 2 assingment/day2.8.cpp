#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 2, 1, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int counts[n];
    for (int i = 0; i < n; i++) {
        counts[i] = 0;
    }

    
    for (int i = 0; i < n; i++) {
        counts[arr[i]]++;
    }

   
    printf("Element\tFrequency\n");
    for (int i = 0; i < n; i++) {
        if (counts[i] > 0) {
            printf("%d\t%d\n", i, counts[i]);
        }
    }

    return 0;
} 
