#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;
    int sum = 0;
    float avg;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }

    avg = (float)sum / (r * c);

    printf("Average of matrix elements = %.2f", avg);

    return 0;
}

