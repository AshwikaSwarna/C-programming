#include <stdio.h>

int main() {
    float units, bill, surcharge;

    // Input the number of units
    printf("Enter electricity units consumed: ");
    scanf("%f", &units);

    // Calculate the bill based on unit consumption
    if (units <= 50) {
        bill = units * 0.50;
    } else if (units <= 150) {
        bill = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    // Add 20% surcharge
    surcharge = 0.20 * bill;
    bill += surcharge;

    // Output the total bill
    printf("Total Electricity Bill: %.2f\n", bill);

    return 0;
}