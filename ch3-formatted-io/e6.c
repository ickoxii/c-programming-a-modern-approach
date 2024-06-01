/**
 * Books are identified by an ISBN such as 0-393-30375-6.
 * The first digit specifies the language in which the book was written.
 * The second group of numbers specifies the publisher.
 * The third group of numbers is assigned by the publisher to identify the book.
 * The last number is a check number to verify the accuracy of the preceding
 * digits.
 */

#include <stdio.h>

int main() {
    int lang, publisher, book, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d", &lang, &publisher, &book, &check);

    printf("Language: %.1d\n", lang);
    printf("Publisher: %.3d\n", publisher);
    printf("Book: %.5d\n", book);
    printf("Check: %.1d\n", check);

    return 0;
}
