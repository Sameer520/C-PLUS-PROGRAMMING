#include <iostream>

int main() {
    float num1, num2;
    std::cout << "Enter the first floating-point number: ";
    std::cin >> num1;
    std::cout << "Enter the second floating-point number: ";
    std::cin >> num2;

    std::cout << "Addition: " << num1 + num2 << std::endl;
    std::cout << "Subtraction: " << num1 - num2 << std::endl;
    std::cout << "Multiplication: " << num1 * num2 << std::endl;

    if (num2 != 0) {
        std::cout << "Division: " << num1 / num2 << std::endl;
    } else {
        std::cout << "Division by zero is undefined." << std::endl;
    }

    if (num2 != 0) {
        std::cout << "Modulo: " << (num1, num2) << std::endl;
    } else {
        std::cout << "Modulo by zero is undefined." << std::endl;
    }

    return 0;
}

