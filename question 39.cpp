#include <iostream>

int main() {
    const int maxSize = 100;
    int arr[maxSize];
    int size;
    double sum = 0.0, average;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0 || size > maxSize) {
        std::cout << "Invalid array size." << std::endl;
        return 1;
    }

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
        sum += arr[i];
    }

    average = sum / size;

    std::cout << "Average of array elements: " << average << std::endl;

    return 0;
}
