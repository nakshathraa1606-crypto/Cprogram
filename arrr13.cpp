#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;
    int sum, maxSum, row = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    maxSum = 0;

    for(i = 0; i < r; i++) {
        sum = 0;
        for(j = 0; j < c; j++) {
            sum = sum + a[i][j];
        }

        if(i == 0 || sum > maxSum) {
            maxSum = sum;
            row = i;
        }
    }

    printf("Row with maximum sum = Row %d\n", row + 1);
    printf("Maximum sum = %d", maxSum);

    return 0;
}

