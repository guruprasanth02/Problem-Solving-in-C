#include <stdio.h>

int main() {
    int cost;
    int sell;
    int sum;
    printf("Enter the cost: \n");
    scanf("%d", &cost);
    printf("Enter the sell: \n");
    scanf("%d", &sell);
    if (sell > cost) {
        sum = sell - cost;
        printf("You can book your profit amount: %d\n", sum);
    }
    else if (cost > sell) {
        sum = cost - sell;
        printf("You incurred a loss of amount : %d\n", sum);
    }
    else {
        printf("You are in a no profit, no loss condition.\n");
    }
    return 0;

}
