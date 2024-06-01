 /**
  * Using the switch statement, write a program that converts a numerical
  * grade into a letter grade
  * */

#include <stdio.h>

int main() {
    int grade;

    printf("Enter a number grade: ");
    scanf("%3d", &grade);

    int div = grade / 10;

    switch (div) {
        case 10:    printf("A+\n");break;
        case 9:     printf("A\n"); break;
        case 8:     printf("B\n"); break;
        case 7:     printf("C\n"); break;
        case 6:     printf("D\n"); break;
        default:    printf("F\n"); break;
    }

    return 0;
}
