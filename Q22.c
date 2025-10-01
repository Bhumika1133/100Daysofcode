#include <stdio.h>

int main() {
    int cp, sp;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%d %d", &cp, &sp);

    if (sp > cp) {
        int profit = sp - cp;
        int profit_percent = (profit * 100) / cp;
        printf("Profit %d%%\n", profit_percent);
    } else if (cp > sp) {
        int loss = cp - sp;
        int loss_percent = (loss * 100) / cp;
        printf("Loss %d%%\n", loss_percent);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
