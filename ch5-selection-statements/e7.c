 /**
  * Modify broker.c with the following changes:
  *
  * 1. Ask user to enter number of shares and price per share.
  * 2. Add statements that compute commission charged by a rival broker.
  *     * $33 plus $0.03 per share for fewer than 2000 shares
  *     * $33 plus $0.02 per share for 2000 shares or more
  * 3. Display the rivals commission as well as the commission of the original broker.
  * */

#include <stdio.h>

int main() {
    float commission, rival_commission, price_per_share, value;
    int num_shares;

    printf("Enter number of shares: ");
    scanf("%d", &num_shares);
    printf("Enter price per share: ");
    scanf("%f", &price_per_share);

    value = num_shares * price_per_share;

    /* Original broker */
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

    /* Rival broker */
    if (num_shares < 2000)
        rival_commission = 33.00 + 0.03 * num_shares;
    else
        rival_commission = 33.00 + 0.02 * num_shares;

    printf("Commission: $%.2f\n", commission);
    printf("Rival commission: $%.2f\n", rival_commission);

    return 0;
}
