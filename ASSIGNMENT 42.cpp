#include <stdio.h>

int main() {
    int i, j, k = 10;

    for (i = 1; i <= 4; i++) {

        // Print spaces to shift left side so the right edge aligns
        for (j = 1; j < i; j++) {
            printf("   "); // shift each row left by 3 spaces
        }

        // Print numbers with fixed width
        for (j = i; j <= 4; j++) {
            printf("%3d", k--);
        }

        printf("\n");
    }

    return 0;
}

