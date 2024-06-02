/**
 * Modify ch5 broker.c so that the user can enter more than one trade
 * and the program calculates the commission on each.
 * Terminate the program when the user enters 0 as the trade value.
 * */

#include <stdio.h>

int main() {
    float commission, value;

    printf("Enter value of trade: ");
    scanf("%f", &value);

    while (value > 0) {
        if (value < 2500.00)
            commission = 30.00 + 0.17 * value;
        else if (value < 6250.00)
            commission = 56.00 + 0.0066 * value;
        else if (value < 20000.00)
            commission = 76.00 + .0034 * value;
        else if (value < 50000.00)
            commission = 100.00 + .0022 * value;
        else if (value < 500000.00)
            commission = 155.00 + .0011 * value;
        else
            commission = 255.00 + .0009 * value;

        if (commission < 39.00)
            commission = 39.00;

        printf("Commission: %.2f\n", commission);

        /* Reprompt user */
        printf("Enter value of trade: ");
        scanf("%f", &value);
    }

    return 0;
}
