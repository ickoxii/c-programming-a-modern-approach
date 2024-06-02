/**
 * Write a program that asks the user to enter a fraction, then converts
 * the fraction to lowest terms.
 * */

#include <stdio.h>

int main() {
    int numerator, denominator;

    printf("Enter a fraction (a/b): ");
    scanf("%d /%d", &numerator, &denominator);

    /* Find GCD */
    int m = numerator, n = denominator, div;
    while (n > 0) {
        div = n;
        n = m % n;
        m = div;
    }

    numerator /= m;
    denominator /= m;

    printf("Lowest terms: %d/%d\n", numerator, denominator);

    return 0;
}
