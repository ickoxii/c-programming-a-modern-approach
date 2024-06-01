#include <stdio.h>

/* Floating point vs integer division */
int main() {
    int radius = 10;

    printf("Volume (double fraction): %f\n", (4.0/3.0) * 3.14 * radius * radius * radius);  /* 4186.666 */
    printf("Volume (int fraction): %f\n", (4/3) * 3.14 * radius * radius * radius);         /* 3140.000 */

    return 0;
}
