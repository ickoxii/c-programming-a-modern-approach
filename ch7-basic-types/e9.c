/**
 * Write a program that translates an alphabetic phone number into
 * numeric form.
 * */

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter phone number: ");
    /** Assume letters are all uppercase */
    while ((ch = getchar()) != '\n') {
        if(isalpha(ch)) {
            switch(ch) {
                case 'A': case 'B': case 'C': ch = 50; break; /* 2 */
                case 'D': case 'E': case 'F': ch = 51; break; /* 3 */
                case 'G': case 'H': case 'I': ch = 52; break; /* 4 */
                case 'J': case 'K': case 'L': ch = 53; break; /* 5 */
                case 'M': case 'N': case 'O': ch = 54; break; /* 6 */
                case 'P': case 'R': case 'S': ch = 55; break; /* 7 */
                case 'T': case 'U': case 'V': ch = 56; break; /* 8 */
                case 'W': case 'X': case 'Y': ch = 57; break; /* 9 */
            }
        }
        putchar(ch);
    }
    putchar('\n');

    return 0;
}
