#include <stdio.h>

int main() {
    int integer_array[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int array_size = sizeof(integer_array) / sizeof(integer_array[0]);
    int sum = 0;
    float average;
    for (int i = 0; i < array_size; i++) {
        sum += integer_array[i];
    }
    average = (float)sum / array_size;
    printf("The elements of the array are: ");
    for (int i = 0; i < array_size; i++) {
        printf("%d ", integer_array[i]);
    }
    printf("\n");
    printf("The sum of the elements is: %d\n", sum);
    printf("The average of the elements is: %.2f\n", average);
    return 0;
}