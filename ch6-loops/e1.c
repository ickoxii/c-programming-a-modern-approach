/**
 * Write a program that finds the largest in a series of numbers entered
 * by the user. Terminate when the user enters 0 or a negative number.
 * */

#include <stdio.h>

int main() {
    float num, max = 0;

    do {
        printf("Enter a number: ");
        scanf("%f", &num);
        if (num > max)
            max = num;
    } while (num > 0);

    printf("The largest number entered was %f\n", max);

    return 0;
}
