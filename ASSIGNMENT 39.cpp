#include <stdio.h>
int main() {
    int n = 3;
    int a[3][3];
    int i, k = 0, l = 0;
    int val = 1;
    int last_row = n - 1, last_col = n - 1;

    while (k <= last_row && l <= last_col) {
        for (i = l; i <= last_col; ++i)
            a[k][i] = val++;
        k++;

        for (i = k; i <= last_row; ++i)
            a[i][last_col] = val++;
        last_col--;

        if (k <= last_row) {
            for (i = last_col; i >= l; --i)
                a[last_row][i] = val++;
            last_row--;
        }

        if (l <= last_col) {
            for (i = last_row; i >= k; --i)
                a[i][l] = val++;
            l++;
        }
    }

    for (i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}

