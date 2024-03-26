#include <iostream>

int main() {
    const int size = 3;

    int matrix[size][size];

    std::cout << "Enter elements of the matrix (" << size << "x" << size << "):" << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "Matrix:" << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    int sumDiagonal1 = 0;
    int sumDiagonal2 = 0;

    for (int i = 0; i < size; ++i) {
        sumDiagonal1 += matrix[i][i];
        sumDiagonal2 += matrix[i][size - 1 - i];
    }

    std::cout << "\nSum of the main diagonal: " << sumDiagonal1 << std::endl;
    std::cout << "Sum of the other diagonal: " << sumDiagonal2 << std::endl;

    return 0;
}

