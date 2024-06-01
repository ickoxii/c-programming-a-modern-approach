#include <stdio.h>

/* Exercise 5 but with user input */
int main() {
    int radius;

    printf("Enter the radius (int) of the sphere: ");
    scanf("%d", &radius);

    printf("Volume: %f\n", (4.0/3.0) * 3.14 * radius * radius * radius);  /* 4186.666 */

    return 0;
}
