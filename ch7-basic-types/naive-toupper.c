#include <stdio.h>

int main() {
    char ch = 'b';

    if ('a' <= ch && ch <= 'z')
        ch = ch - 'a' + 'A';

    return 0;
}
