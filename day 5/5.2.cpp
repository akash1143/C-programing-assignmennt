
#include <stdio.h>

int main() {
    int lower, upper, i;
    printf("Enter the lower range:");
    scanf("%d", &lower);
    printf("Enter the upper range:");
    scanf("%d", &upper);

    int n = upper - lower + 1;
    typedef struct {int x, y;} tuple;
    tuple arr[n];
    
    for (i = 0; i < n; i++) {
        int num = lower + i;
        arr[i].x = num;
        arr[i].y = num * num;
    }

    printf("[");
    for (i = 0; i < n - 1; i++) {
        printf("(%d, %d), ", arr[i].x, arr[i].y);
    }
    printf("(%d, %d)]", arr[n-1].x, arr[n-1].y);

    return 0;
}
