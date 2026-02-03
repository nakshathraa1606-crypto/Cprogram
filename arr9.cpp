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

    for(i = 0; i < r; i++) {
        max = a[i][0];   #include <stdio.h>

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

    for(j = 0; j < c; j++) {
        max = a[0][j];   // first element of each column
        for(i = 0; i < r; i++) {
            if(a[i][j] > max) {
                max = a[i][j];
            }
        }
        printf("Maximum of column %d = %d\n", j + 1, max);
    }

    return 0;
}

        for(j = 0; j < c; j++) {
            if(a[i][j] > max) {
                max = a[i][j];
            }
        }
        printf("Maximum of row %d = %d\n", i + 1, max);
    }

    return 0;
}

