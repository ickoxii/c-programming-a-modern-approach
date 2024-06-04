/**
 * Modify the repdigit.c program so that the use can enter more than
 * one number to be tested for repeated digits. The program should
 * terminate when a number thats less than or equal to 0 is entered.
 * */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;

int main() {
    Bool digit_seen[10] = {0};
    int digit;
    long int n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {

        while (n > 0) {
            digit = n % 10;
            if (digit_seen[digit])
                break;
            digit_seen[digit] = TRUE;
            n /= 10;
        }

        if (n > 0)
            printf("Repeated digit\n\n");
        else
            printf("No repeated digit\n\n");

        for(int i = 0; i < 10; ++i) {
            digit_seen[i] = FALSE;
        }

        printf("Enter a number: ");
        scanf("%ld", &n);
    }

    return 0;
}
