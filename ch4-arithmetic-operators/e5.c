/** Rewrite e4.c but without using arithmetic to split the digits */

#include <stdio.h>

int main() {
    int d1, d2, d3;

    printf("Enter a 3 digit number: ");
    scanf("%1d%1d%1d", &d1, &d2, &d3);
    printf("Digits reversed: %d%d%d\n", d3, d2, d1);

    return 0;
}
