/* Determines the length of a message */
/* This is a shortened version of the length.c program */

#include <stdio.h>

int main() {
    int len = 0;

    printf("Enter a message: ");
    while (getchar() != '\n')
        ++len;
    printf("Your message was %d character(s) long.\n", len);

    return 0;
}
