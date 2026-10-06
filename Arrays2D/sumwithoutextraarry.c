#include <stdio.h>
int main () {

    printf("Enter Size of Matrix: ");
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int A[rows][cols], B[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d  ", A[i][j] + B[i][j]);
        }
        printf("\n");
    }

    return 0;
}