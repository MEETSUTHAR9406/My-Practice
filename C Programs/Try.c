#include <stdio.h>

int matrixA(int rows, int cols, int a[rows][cols]) {
    printf("\nEnter values for Matrix A:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix A is:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%4d ", a[i][j]);
        }
        printf("\n");
    }
}

int transpose(int rows, int cols, int a[rows][cols], int tp[cols][rows]) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            tp[j][i] = a[i][j];
        }
    }

    printf("Transpose matrix is:\n");
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            printf("%4d ", tp[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int rows, cols;

    printf("Enter the values of rows X cols: ");
    scanf("%d %d", &rows, &cols);

    // printf("Enter the values of row2 X col2: ");
    // scanf("%d %d", &row2, &col2);

    int a[rows][cols];
    // int b[row2][col2];
    int tp[cols][rows];

    matrixA(rows, cols, a);
    // matrixB(row2, col2, b);
    transpose(rows, cols, a, tp);

    return 0;
}