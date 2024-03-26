#include <iostream>
#include <algorithm>

const int MAX_SIZE = 100;

void sortArray(int arr[MAX_SIZE], int size) {
    std::sort(arr, arr + size);
}

void sortArray(double arr[MAX_SIZE], int size) {
    std::sort(arr, arr + size);
}

int main() {
    int intSize, doubleSize;

    std::cout << "Enter the size of the integer array: ";
    std::cin >> intSize;
    int intArray[MAX_SIZE];
    std::cout << "Enter elements of the integer array:" << std::endl;
    for (int i = 0; i < intSize; ++i) {
        std::cin >> intArray[i];
    }

    std::cout << "Enter the size of the double array: ";
    std::cin >> doubleSize;
    double doubleArray[MAX_SIZE];
    std::cout << "Enter elements of the double array:" << std::endl;
    for (int i = 0; i < doubleSize; ++i) {
        std::cin >> doubleArray[i];
    }

    sortArray(intArray, intSize);
    sortArray(doubleArray, doubleSize);

    std::cout << "Sorted Integer Array: ";
    for (int i = 0; i < intSize; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Sorted Double Array: ";
    for (int i = 0; i < doubleSize; ++i) {
        std::cout << doubleArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
