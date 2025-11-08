#include <stdio.h>

int sumEven(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++)
        sum += 2 * i;  // Even numbers are 2,4,6,...
    return sum;
}

int main() {
    printf("Sum of first 10 even natural numbers = %d\n", sumEven(10));
    return 0;
}

