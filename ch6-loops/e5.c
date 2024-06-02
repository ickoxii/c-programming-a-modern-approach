/**
 * Write a program that reverses the digits of a number
 * */

#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int reverse = 0;

    do {
        reverse *= 10;
        int digit = n % 10;
        n /= 10;
        reverse += digit;
    } while (n > 0);

    printf("Reversed: %d\n", reverse);

    return 0;
}
