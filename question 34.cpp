#include <iostream>

int main() {
    int rows;

    std::cout << "Enter the number of rows (must be odd): ";
    std::cin >> rows;

    if (rows % 2 == 0) {
        std::cout << "Please enter an odd number for the rows." << std::endl;
        return 1;
    }

    for (int i = 0; i < rows / 2 + 1; ++i) {
        for (int space = 0; space < rows / 2 - i; ++space) {
            std::cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; ++j) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    for (int i = rows / 2 - 1; i >= 0; --i) {
        for (int space = 0; space < rows / 2 - i; ++space) {
            std::cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; ++j) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    return 0;
}
