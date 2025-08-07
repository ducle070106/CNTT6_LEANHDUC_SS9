#include <stdio.h>

int main() {

    int integer_array[] = {10, 25, 30, 45, 55, 60, 75, 80};
    int array_size = sizeof(integer_array) / sizeof(integer_array[0]);
    int user_input;
    int found_index = -1;
    printf("Please enter an integer to search for: ");
    scanf("%d", &user_input);
    for (int i = 0; i < array_size; i++) {
        if (integer_array[i] == user_input) {
            found_index = i;
            break;
        }
    }
    if (found_index != -1) {
        printf("The element is found at index: %d\n", found_index);
    } else {
        printf("The element does not exist in the array.\n");
    }
    return 0;
}