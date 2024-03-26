#include <iostream>

void addMatrices(const int mat1[][3], const int mat2[][3], int result[][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void displayMatrix(const int matrix[][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    const int rows = 3;
    const int cols = 3;

    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int result[rows][cols];

    std::cout << "Enter elements of Matrix 1 (3x3):" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix1[i][j];
        }
    }

    std::cout << "Enter elements of Matrix 2 (3x3):" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix2[i][j];
        }
    }

    addMatrices(matrix1, matrix2, result, rows, cols);

    std::cout << "Matrix 1:" << std::endl;
    displayMatrix(matrix1, rows, cols);

    std::cout << "\nMatrix 2:" << std::endl;
    displayMatrix(matrix2, rows, cols);

    std::cout << "\nResultant Matrix:" << std::endl;
    displayMatrix(result, rows, cols);

    return 0;
}
