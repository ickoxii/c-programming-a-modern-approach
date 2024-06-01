/**
 * Write a program that accepts a date from the user in the form
 * mm/dd/yy then displays it in the form yymmdd
 * */

#include <stdio.h>

int main() {
    int month, day, year;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %.2d%.2d%.2d\n", year, month, day);

    return 0;
}
