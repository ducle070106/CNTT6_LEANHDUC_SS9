#include <stdio.h>

int main() {

    int integer_array[] = {1, 5, 2, 3, 2, 3, 5, 1, 2};
    int array_size = sizeof(integer_array) / sizeof(integer_array[0]);
    int most_frequent_element;
    int max_count = 0;
    for (int i = 0; i < array_size; i++) {
        int current_element = integer_array[i];
        int current_count = 0;
        for (int j = 0; j < array_size; j++) {
            if (integer_array[j] == current_element) {
                current_count++;
            }
        }
        if (current_count > max_count) {
            max_count = current_count;
            most_frequent_element = current_element;
        }
    }
    printf("The most frequent element in the array is: %d\n", most_frequent_element);
    return 0;
}