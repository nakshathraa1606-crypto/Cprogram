#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;
    int max;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    max = a[0][0];   // assume first element as max

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    printf("Maximum element in matrix = %d", max);

    return 0;
}
#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;
    int min;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    min = a[0][0];   // assume first element as min

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(a[i][j] < min) {
                min = a[i][j];
            }
        }
    }

    printf("Minimum element in matrix = %d", min);

    return 0;
}

