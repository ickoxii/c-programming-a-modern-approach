/**
 * Airline tickets are assigned lengthy identifying numbers, such as
 * 47715497443. To be valid, the last digit of the number must match the
 * remainder when the other digits -- as a group -- are divided by 7.
 * (e.x. 4771549744 % 7 == 3).
 *
 * Write a program that checks whether or not an airline ticker number
 * is valid.
 * */

#include <stdio.h>

int main() {
    char prev = '0', next, ch;
    int remainder = 0;

    printf("Enter a number: ");
    while ((ch = getchar()) != '\n') {
        next = ch;
        remainder = ((remainder * 10) + (prev - '0')) % 7;
        prev = next;
    }

    if (remainder == next - '0') {
        printf("VALID\n");
    } else {
        printf("INVALID\n");
    }

    return 0;
}
