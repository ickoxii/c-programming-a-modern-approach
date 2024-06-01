#include <stdio.h>

/* Exercise 7 but with PI as a macro */

#ifndef PI
#define PI 3.14159265359
#endif

int main() {
    int radius;

    printf("Enter the radius (int) of the sphere: ");
    scanf("%d", &radius);

    printf("Volume: %f\n", (4.0/3.0) * PI * radius * radius * radius);

    return 0;
}
