#include <stdio.h>

int main() {
    int two_d_array[3][4] = {
        {10, 50, 30, 25},
        {40, 85, 60, 70},
        {95, 20, 15, 80}
    };
    int max_element = two_d_array[0][0];
    printf("The 2D array is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d ", two_d_array[i][j]);
            if (two_d_array[i][j] > max_element) {
                max_element = two_d_array[i][j];
            }
        }
        printf("\n");
    }
    printf("\nThe largest element in the array is: %d\n", max_element);
    return 0;
}