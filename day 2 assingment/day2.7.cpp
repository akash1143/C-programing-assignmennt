#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int reversed_arr[n];

    for (int i = n-1, j = 0; i >= 0; i--, j++) {
        reversed_arr[j] = arr[i];
    }

    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", reversed_arr[i]);
    }

    return 0;
}
