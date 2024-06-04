/**
 * Modify the interest.c program so that it compounds interest monthly
 * instead of annually. The balance should still be printed at annual intervals.
 * */

#include <stdio.h>

#define NUM_RATES (sizeof(value)/sizeof(value[0]))
#define INITIAL_BALANCE 100.00

int main() {
    int i, low_rate, num_years, year;
    float value[5];

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");
    for(i = 0; i < NUM_RATES; ++i) {
        printf("%6d%%", low_rate+i);
        value[i] = INITIAL_BALANCE;
    }

    printf("\n");

    for(year = 1; year <= num_years; ++year) {
        for(int month = 0; month < 12; ++month) {
            for(i = 0; i < NUM_RATES; ++i) {
                value[i] += (low_rate+i) / 100.0 / 12 * value[i];
            }
        }
        printf("%3d    ", year);
        for(i = 0; i < NUM_RATES; ++i) {
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }

    return 0;
}
