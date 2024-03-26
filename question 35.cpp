#include <iostream>

int main() {
    const int maxSize = 100;
    int arr[maxSize];
    int size;

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

    int start = 0;
    int end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        ++start;
        --end;
    }

    std::cout << "Reversed array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
