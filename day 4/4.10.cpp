
#include <stdio.h>

float calculate_simple_interest(float principal, int time, int is_senior_citizen) {
    float rate_of_interest = is_senior_citizen ? 0.12 : 0.10;
    float simple_interest = (principal * rate_of_interest * time) / 100;
    return simple_interest;
}

int main() {
    float principal;
    int time, is_senior_citizen;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the time period in years: ");
    scanf("%d", &time);

    printf("Are you a senior citizen? (1 for yes, 0 for no): ");
    scanf("%d", &is_senior_citizen);

    float simple_interest = calculate_simple_interest(principal, time, is_senior_citizen);

    printf("Simple interest for principal amount %.2f and time period %d years is %.2f", principal, time, simple_interest);

    return 0;
}
