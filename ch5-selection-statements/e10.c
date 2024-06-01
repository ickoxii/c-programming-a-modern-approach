 /**
  * e10:
  * Modify the upc program so that it checks whether a given UPC is valid
  * */
 /**
  * Computes a Universal Product Code check digit.
  *
  * The algorithm to calculate the check digit for a UPC bar code is as follows:
  *
  * 1. Add digits 1, 3, 5, 7, 9, 11
  * 2. Add digits 2, 4, 6, 8, 10
  * 3. Multiply the first sum by 3 and add to the second sum
  * 4. Subtract 1 from the total
  * 5. Mod the total by 10
  * 6. Subtract the remainder from 9
  * */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, c,
        first_sum, second_sum, total;

    printf("Enter the first digit of the UPC: ");
    scanf("%1d", &d);
    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
    printf("Enter the check digit: ");
    scanf("%1d", &c);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = first_sum * 3 + second_sum;

    if ((9 - ((total - 1) % 10)) == c)
        printf("VALID\n");
    else
        printf("INVALID\n");

    return EXIT_SUCCESS;
}
