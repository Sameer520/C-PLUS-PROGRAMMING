#include <iostream>

int main() {
    const int maxSize = 100;
    int arr[maxSize];
    int size, position;

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
    }

    std::cout << "Enter the position to delete the element: ";
    std::cin >> position;

    if (position < 1 || position > size) {
        std::cout << "Invalid position." << std::endl;
        return 1;
    }

    for (int i = position - 1; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    --size;

    std::cout << "Array after deletion:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
