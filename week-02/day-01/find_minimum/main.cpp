#include <iostream>

// Create a function which takes an array (and its length) as a parameter
// and returns a pointer to its minimum value
int *Array(int numbers[], int size);

int main() {

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};
    int size = (sizeof(numbers) / sizeof(int));

    int *min = Array(numbers, size);
    std::cout << *min << std::endl;
    return 0;
}

int *Array(int numbers[], int size) {
    int *min = &numbers[0];

    for (int i = 0; i < size; ++i) {

        if (numbers[i] < *min) {

            min = &numbers[i];
        }
    }
    return min;
}