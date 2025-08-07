#include <stdio.h>

int main() {

    int matrix[4][5] = {
        {10, 20, 30, 40, 50},
        {15, 25, 35, 45, 55},
        {12, 22, 32, 42, 52},
        {18, 28, 38, 48, 58}
    };
    int rows = 4;
    int cols = 5;
    int border_sum = 0;
    printf("The matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                border_sum += matrix[i][j];
            }
        }
    }
    printf("\nThe sum of the border elements is: %d\n", border_sum);

    return 0;
}