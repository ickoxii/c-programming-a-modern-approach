/**
 * Write a program that formats product information entered by the user.
 */

#include <stdio.h>

int main() {
    int product_num, day, month, year;
    float unit_price;

    /* Get user input */
    printf("Enter item number: ");
    scanf("%d", &product_num);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    /* Print summary */
    printf("Item\tUnit\tPurchase\n");
    printf("\tPrice\tDate\n");
    printf("%-d\t$%-6.2f\t%d/%d/%d\n", product_num, unit_price, month, day, year);

    return 0;
}
