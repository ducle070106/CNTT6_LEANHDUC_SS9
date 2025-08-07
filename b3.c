#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;

    printf("Please enter an integer for the size of the square matrix: ");
    scanf("%d", &size);
    if (size <= 0) {
        printf("Invalid size. Please enter a positive integer.\n");
        return 1;
    }
    int (*matrix)[size] = malloc(size * sizeof(*matrix));
    if (matrix == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    int value = 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = value++;
        }
    }
    printf("\nThe square matrix is:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
    free(matrix);
    return 0;
}