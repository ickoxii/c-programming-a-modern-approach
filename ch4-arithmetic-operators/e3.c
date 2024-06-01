/** 
 * Prompt the user for a two-digit number, then print the number
 * with its digits reversed.
 * */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int d, d1, d2;

    printf("Enter a 2 digit number: ");
    scanf("%d", &d);

    d1 = d / 10;
    d2 = d % 10;

    printf("Digits reversed: %d%d\n", d2, d1);

    return EXIT_SUCCESS;
}
