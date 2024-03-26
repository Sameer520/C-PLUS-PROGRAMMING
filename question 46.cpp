#include <iostream>

void multiplyMatrices(const int mat1[][2], const int mat2[][3], int result[][3], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
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
    const int rows1 = 3;
    const int cols1 = 2;
    const int rows2 = 2;
    const int cols2 = 3;

    int matrix1[rows1][cols1];
    int matrix2[rows2][cols2];
    int result[rows1][cols2];

    std::cout << "Enter elements of Matrix 1 (3x2):" << std::endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            std::cin >> matrix1[i][j];
        }
    }

    std::cout << "Enter elements of Matrix 2 (2x3):" << std::endl;
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            std::cin >> matrix2[i][j];
        }
    }

    if (cols1 != rows2) {
        std::cout << "Matrix multiplication is not possible due to invalid dimensions." << std::endl;
        return 1;
    }

    multiplyMatrices(matrix1, matrix2, result, rows1, cols1, cols2);

    std::cout << "Matrix 1:" << std::endl;
    displayMatrix(matrix1, rows1, cols1);

    std::cout << "\nMatrix 2:" << std::endl;
    
    displayMatrix(matrix2, rows2, cols2);

    std::cout << "\nResultant Matrix:" << std::endl;
    displayMatrix(result, rows1, cols2);

    return 0;
}


