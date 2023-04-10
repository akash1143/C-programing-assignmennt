#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int decimal = 0, octal = 0, i = 0;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    while (binary != 0) {
        decimal += (binary % 10) * pow(2, i);
        i++;
        binary /= 10;
    }
    i = 1;
    while (decimal != 0) {
        octal += (decimal % 8) * i;
        i *= 10;
        decimal /= 8;
    }
    printf("Decimal: %d\n", decimal);
    printf("Octal: %d\n", octal);

    return 0;
}
