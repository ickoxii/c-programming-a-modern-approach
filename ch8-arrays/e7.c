/**
 * Write a "B1FF" filter that reads a message entered by the user and
 * translates it into B1FF-speak. Your program should take in a message,
 * convert to all upper case, substitute digits for certain letters,
 * then append a shitload of exclamation marks.
 * */

#include <stdio.h>
#include <ctype.h>

#define BUFF_SIZE 256

int main() {
    char msg[BUFF_SIZE] = {0};
    unsigned short size = 0;

    printf("Enter a message: ");

    char ch = '\0';;
    while ((ch = getchar()) != '\n' && size < BUFF_SIZE) {
        msg[size++] = toupper(ch);
    }



    printf("%s\n", msg);

    return 0;
}
