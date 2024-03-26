#include <iostream>

int main() {
    int rows;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    for (int i = 0; i < rows; ++i) {
        int coefficient = 1;
        for (int space = 1; space <= rows - i; ++space) {
            std::cout << "  ";
        }

        for (int j = 0; j <= i; ++j) {
            if (j == 0 || i == 0)
                coefficient = 1;
            else
                coefficient = coefficient * (i - j + 1) / j;

            std::cout << coefficient << "   ";
        }
        std::cout << std::endl;
    }

    return 0;
}
