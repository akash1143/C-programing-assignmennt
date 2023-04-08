
#include <stdio.h>
#include <math.h>

double power(double x, int n) {
    return pow(x, n);
}

double add(double x, double n) {
    return x + n;
}

double subtract(double x, double n) {
    return x - n;
}

double multiply(double x, double n) {
    return x * n;
}

double divide(double x, double n) {
    return x / n;
}

int main() {
    double x, n, result;
    int choice;

    printf("Enter two numbers and an operation choice (1-5):\n");
    printf("Enter the first number: ");
    scanf("%lf", &x);
    printf("Enter the second number: ");
    scanf("%lf", &n);
    printf("Enter your choice of operation: \n1 - Power\n2 - Addition\n3 - Subtraction\n4 - Multiplication\n5 - Division\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = power(x, (int)n);
            printf("The result is: %lf", result);
            break;
        case 2:
            result = add(x, n);
            printf("The result is: %lf", result);
            break;
        case 3:
            result = subtract(x, n);
            printf("The result is: %lf", result);
            break;
        case 4:
            result = multiply(x, n);
            printf("The result is: %lf", result);
            break;
        case 5:
            result = divide(x, n);
            printf("The result is: %lf", result);
            break;
        default:
            printf("Invalid choice.");
            break;
    }

    return 0;
}
