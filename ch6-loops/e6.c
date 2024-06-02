/**
 * Write a program that prompts the user to enter a number n, then
 * print all even squares between 1 and n.
 * */

#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for(int i = 1; i * i <= n; ++i) {
        int square = i * i;
        if (square % 2 == 0) {
            printf("%d\n", square);
        }
    }

    return 0;
}
