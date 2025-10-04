#include <stdio.h>

int main() {
    int i, j, s, e, isPrime;

    printf("Enter the starting number: ");
    scanf("%d", &s);
    printf("Enter the ending number: ");
    scanf("%d", &e);

    printf("Prime numbers between %d and %d are:\n", s, e);

    for (i = s; i <= e; i++) {
        if (i < 2) continue; 
        isPrime = 1; 

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}


