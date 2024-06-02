/**
 * Write a program that prints a one-month calendar. The user specifies the
 * number of days in the month and the day of the week on which the month begins.
 * */

#include <stdio.h>

int main() {
    int num_days, start_day;

    printf("Enter number of days in month: ");
    scanf("%d", &num_days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);

    /* Print initial buffer */
    for(int i = 0; i < start_day - 1; ++i) {
        printf("   ");
    }

    /* Print days */
    int curr_day = start_day;
    for(int i = 1; i <= num_days; ++i, ++curr_day) {
        printf("%3d", i);
        if (curr_day == 7) {
            printf("\n");
            curr_day = 0;
        }
    }

    /* Print newline if we haven't already */
    if(curr_day == 0)
        printf("\n");

    return 0;
}
