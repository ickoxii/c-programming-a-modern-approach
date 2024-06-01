#include <stdio.h>

/* Write a program that asks the user to enter a dollar amount then
 * add a 5% tax */
typedef float Dollar;

int main() {
    Dollar amount;

    printf("Enter a dollar amount: ");
    scanf("%f", &amount);

    printf("Total after tax: $%.2f\n", amount * 1.05);

    return 0;
}
