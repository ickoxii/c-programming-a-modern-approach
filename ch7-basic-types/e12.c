/**
 * Write a program that prints the sizeof for various types
 * */

#include <stdio.h>

/* Run on apple mac m1 chip, using clang compiler */
int main() {
    printf("int:         %lu\n", (unsigned long) sizeof (int));         /* 4 */
    printf("short int:   %lu\n", (unsigned long) sizeof (short int));   /* 2 */
    printf("long int:    %lu\n", (unsigned long) sizeof (long int));    /* 8 */
    printf("float:       %lu\n", (unsigned long) sizeof (float));       /* 4 */
    printf("double:      %lu\n", (unsigned long) sizeof (double));      /* 8 */
    printf("long double: %lu\n", (unsigned long) sizeof (long double)); /* 8 */
    return 0;
}
