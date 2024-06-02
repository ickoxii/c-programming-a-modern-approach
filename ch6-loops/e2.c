/**
 * Write a program that asks the user to enter two integers, then calculates
 * and displays their greatest common divisor (GCD)
 * */

#include <stdio.h>

int main() {
    int m, n;

    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);

    while (n > 0) {
        int divisor;
        divisor = n;
        n = m % n;
        m = divisor;
    }

    printf("GCD: %d\n", m);

    return 0;
}
