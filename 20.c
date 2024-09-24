x#include <stdio.h>

int main() {
    float basicSalary, grossSalary, HRA, DA;

    // Input basic salary
    printf("Enter basic salary of the employee: ");
    scanf("%f", &basicSalary);

    // Calculate HRA and DA based on the basic salary
    if (basicSalary <= 10000) {
        HRA = 0.20 * basicSalary;
        DA = 0.80 * basicSalary;
    } else if (basicSalary <= 20000) {
        HRA = 0.25 * basicSalary;
        DA = 0.90 * basicSalary;
    } else {
        HRA = 0.30 * basicSalary;
        DA = 0.95 * basicSalary;
    }

    // Calculate gross salary
    grossSalary = basicSalary + HRA + DA;

    // Output the gross salary
    printf("Gross Salary: %.2f\n", grossSalary);

    return 0;
}