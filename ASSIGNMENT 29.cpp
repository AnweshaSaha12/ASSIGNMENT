#include <stdio.h>

int main() {
    int u;
    float amount, totalAmount, surcharge;

    printf("Enter the total units consumed: ");
    scanf("%d", &u);

    switch (u / 50) {  
        case 0:  
            amount = u * 1.50;
            break;

        case 1: 
            amount = 50 * 1.50 + (u - 50) * 2.00;
            break;

        case 2:  
        case 3:  
            amount = 50 * 1.50 + 50 * 2.00 + (u - 100) * 3.00;
            break;

        default:  
            amount = 50 * 1.50 + 50 * 2.00 + 100 * 3.00 + (u - 200) * 4.00;
            break;
    }


    surcharge = 0.20 * amount;
    totalAmount = amount + surcharge;

    printf("Total Bill Amount        : Rs. %.2f\n", totalAmount);

    return 0;
}

