/**
 * Write a program that asks the user for a 24-hour time, then display
 * the time in 12-hour form
 * */

#include <stdio.h>

int main() {
    int hour, min;

    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d :%d", &hour, &min);

    printf("Equivalent 12-hour time: ");
    if (hour == 12)
        printf("%d:%2d PM\n", hour, min);
    else if (hour > 12)
        printf("%d:%2d PM\n", hour - 12, min);
    else
        printf("%d:%2d AM\n", hour, min);

    return 0;
}
