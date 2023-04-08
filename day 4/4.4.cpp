
#include <stdio.h>

int main() {
    int limit, a, b, c, m, n;
    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Pythagorean Triples smaller than %d:\n", limit);
    for (n = 1; n < limit; n++) {
        for (m = n + 1; m < limit; m++) {
            a = m * m - n * n;
            b = 2 * m * n;
            c = m * m + n * n;
            if (c >= limit) {
                break;
            }
            printf("%d, %d, %d\n", a, b, c);
        }
    }

    return 0;
}
