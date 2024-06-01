 /**
  * Write a program that prompts for wind velocity (in knots) and
  * displays the corresponding Beaufort scale
  * */

#include <stdio.h>

int main() {
    float velo;

    printf("Enter wind-speed in knots: ");
    scanf("%f", &velo);

    if(velo < 1)
        printf("Calm\n");
    else if(velo <= 3)
        printf("Light air\n");
    else if(velo <= 27)
        printf("Breeze\n");
    else if(velo <= 47)
        printf("Gale\n");
    else if(velo <= 63)
        printf("Storm\n");
    else
        printf("Hurricane\n");

    return 0;
}
