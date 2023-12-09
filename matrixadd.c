
#include <stdio.h>
#include <conio.h>

void main() {
    int a[3][3], b[3][3], c[3][3], i, j;

    printf("Enter first array: ");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nFirst array is: ");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter second array: ");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nThe second array is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%3d", b[i][j]);
        }
        printf("\n");
    }

    printf("\nThe adding matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%3d", c[i][j]);
        }
        printf("\n");
    }

    getch();
}

