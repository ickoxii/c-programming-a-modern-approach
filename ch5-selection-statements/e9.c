 /**
  * Write a program that prompts for a users taxable income and displays
  * the tax due.
  * */

#include <stdio.h>

int main() {
    float taxable, tax;

    printf("Enter your taxable income: ");
    scanf("%f", &taxable);

    if (taxable <= 750.00)
        tax = 0.01 * taxable;
    else if (taxable <= 2250)
        tax = 7.50 + 0.02 * (taxable - 750.00);
    else if (taxable <= 3750)
        tax = 37.50 + 0.03 * (taxable - 2250.00);
    else if (taxable <= 5250)
        tax = 82.50 + 0.04 * (taxable - 3750.00);
    else if (taxable <= 7000)
        tax = 142.50 + 0.05 * (taxable - 5250.00);
    else
        tax = 230.00 + 0.06 * (taxable - 7000.00);

    printf("Tax due: $%.2f\n", tax);

    return 0;
}
