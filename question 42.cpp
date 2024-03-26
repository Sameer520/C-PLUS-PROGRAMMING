#include <iostream>

int main() {
    int size1;
    std::cout << "Enter the size of the first array: ";
    std::cin >> size1;

    int array1[size1];
    std::cout << "Enter elements for the first array: ";
    for (int i = 0; i < size1; ++i) {
        std::cin >> array1[i];
    }

    int size2;
    std::cout << "Enter the size of the second array: ";
    std::cin >> size2;

    int array2[size2];
    std::cout << "Enter elements for the second array: ";
    for (int i = 0; i < size2; ++i) {
        std::cin >> array2[i];
    }

    int mergedArray[size1 + size2];
    for (int i = 0; i < size1; ++i) {
        mergedArray[i] = array1[i];
    }
    for (int i = 0; i < size2; ++i) {
        mergedArray[size1 + i] = array2[i];
    }

    std::cout << "Merged Array: ";
    for (int i = 0; i < size1 + size2; ++i) {
        std::cout << mergedArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
