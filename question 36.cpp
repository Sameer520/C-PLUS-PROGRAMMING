#include <iostream>

int main() {
    const int maxSize = 100;
    int arr[maxSize];
    int size, position, newValue;

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

    std::cout << "Enter the position to insert the new element: ";
    std::cin >> position;

    if (position < 1 || position > size + 1) {
        std::cout << "Invalid position." << std::endl;
        return 1;
    }

    std::cout << "Enter the value to insert: ";
    std::cin >> newValue;

    for (int i = size; i >= position; --i) {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = newValue;

    ++size;

    std::cout << "Array after insertion:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
