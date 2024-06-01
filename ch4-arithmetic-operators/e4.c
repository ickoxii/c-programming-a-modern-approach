/**
 * Prompt the user to enter a 3 digit number and reverse the digits
 * */

#include <stdio.h>

int main() {
    int d, d1, d2, d3;

    printf("Enter a 3 digit number: ");
    scanf("%d", &d);

    d3 = d % 10;    /* Extract ones place */
    d /= 10;        /* Shift digits */
    d2 = d % 10;    /* Extract tens place */
    d /= 10;        /* Shift digits */
    d1 = d % 10;    /* Extract hundreds place */

    printf("Digits reversed: %d%d%d\n", d3, d2, d1);

    return 0;
}
