#include <stdio.h>

int main() {
    int a[10][10], n, i, j;
    int sum1 = 0, sum2 = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);

            if(i == j)
                sum1 = sum1 + a[i][j];

            if(i + j == n - 1)
                sum2 = sum2 + a[i][j];
        }
    }

    printf("Sum of main diagonal = %d\n", sum1);
    printf("Sum of secondary diagonal = %d", sum2);

    return 0;
}

