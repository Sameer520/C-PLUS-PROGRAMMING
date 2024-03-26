#include <iostream>

int main() {
    int size;
    std::cout << "Enter the size of the dynamic array: ";
    std::cin >> size;

    int *dynamicArray = new int[size];

    std::cout << "Enter values for the dynamic array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> dynamicArray[i];
    }

    std::cout << "Values in the dynamic array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    delete[] dynamicArray;

    return 0;
}
