/** 
 * Write a program that determines the number of digits in a number.
 * Assume that a number has no more that four digits. Use if/else
 * statements to test the number.
 * */

#include <stdio.h>

int main() {
    int num, digits = 0;

    printf("Enter a number (up to 4 digits): ");
    scanf("%d", &num);

    if(num < 10)
        digits = 1;
    else if(num < 100)
        digits = 2;
    else if(num < 1000)
        digits = 3;
    else
        digits = 4;

    printf("Your number has %d digits\n", digits);

    return 0;
}
