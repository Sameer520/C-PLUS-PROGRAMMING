#include <iostream>

int countOccurrences(const int arr[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            ++count;
        }
    }
    return count;
}

int main() {
    const int size = 10;
    int myArray[size] = {1, 2, 3, 4, 2, 5, 2, 6, 2, 7};
    int targetValue = 2;

    int occurrences = countOccurrences(myArray, size, targetValue);

    std::cout << "The value " << targetValue << " occurs " << occurrences << " times in the array." << std::endl;

    return 0;
}
