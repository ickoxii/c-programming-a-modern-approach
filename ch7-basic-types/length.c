/* Determine the length of a message */

#include <stdio.h>

int main() {
    char ch;
    int len = 0;

    printf("Enter a message: ");
    ch = getchar();
    while (ch != '\n') {
        len++;
        ch = getchar();
    }


    printf("Your message was %d character%s long.\n", len, (len > 1) ? "s" : "");

    return 0;
}
