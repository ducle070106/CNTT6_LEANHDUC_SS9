#include <stdio.h>

int main() {

    int integer_array[] = {10, 20, 30, 40, 50};
    int array_size = sizeof(integer_array) / sizeof(integer_array[0]);
    printf("Array elements (in reverse):\n");
    for (int i = array_size - 1; i >= 0; i--) {
        printf("Element at index %d: %d\n", i, integer_array[i]);
    }
    return 0;
}