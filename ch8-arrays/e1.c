/**
 * Modify the repdigit.c program so that it shows the digits
 * that were repeated
 * */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;

int main() {
    Bool digit_seen[10] = {0};
    Bool is_dup[10] = {0};
    Bool has_dups = FALSE;
    int digit;
    long int n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if(digit_seen[digit]) {
            is_dup[digit] = TRUE;
            has_dups = TRUE;
        }
        digit_seen[digit] = TRUE;
        n /= 10;
    }

    if (has_dups) {
        printf("Repeated digit(s):");
        for(int i = 0; i < 10; ++i) {
            if(is_dup[i]) {
                printf(" %d", i);
            }
        }
        printf("\n\n");
    } else {
        printf("No repeated digit\n\n");
    }

    return 0;
}
