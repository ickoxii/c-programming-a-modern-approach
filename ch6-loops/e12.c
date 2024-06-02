/**
 * Show how to replace a continue statement by an equivalent goto statement
 * */

#include <stdio.h>

int main() {
    for(int i = 0; i < 10; ++i) {
        if(i == 5) {
            printf("Skipping...\n");
            continue;
        } else {
            printf("%d\n", i);
        }
    }
    
    printf("\n*****\n\n");

    for(int i = 0; i < 10; ++i) {
        if(i == 5) {
            printf("Skipping...\n");
            goto done;
        } else {
            printf("%d\n", i);
        }
done:
    }

    return 0;
}
