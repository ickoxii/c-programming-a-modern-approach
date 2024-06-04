/**
 * Modify the repdigit.c program so that it prints a table showing
 * how many times each digit appears in the number.
 * */

#include <stdio.h>

#define SIZE (sizeof(digit_count) / sizeof(digit_count[0]))

int main() {
    int digit_count[10] = {0};
    int digit;
    long int n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        digit_count[digit] += 1;
        n /= 10;
    }

    printf("%-15s", "Digit:");
    for(int i = 0; i < 10; ++i) {
        printf("%-4d", i);
    }
    printf("\n");

    printf("%-15s", "Occurrences:");
    for(int i = 0; i < SIZE; ++i) {
        printf("%-4d", digit_count[i]);
    }
    printf("\n");

    return 0;
}
