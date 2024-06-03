/**
 * Use typedef to create types Int8, Int16, and Int32 so that
 * they represent 8-bit, 16-bit, and 32-bit types on your machine.
 * */

#include <stdio.h>

typedef short int Int8;
typedef int Int16;
typedef long int Int32;

int main() {
    printf("Int8:  %lu\n", (unsigned long) sizeof (Int8));
    printf("Int16: %lu\n", (unsigned long) sizeof (Int16));
    printf("Int32: %lu\n", (unsigned long) sizeof (Int32));

    return 0;
}
