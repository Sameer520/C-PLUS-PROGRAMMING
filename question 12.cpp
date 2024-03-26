#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "The numbers are " << ((num1 == num2) ? "equal." : "not equal.") << std::endl;

    return 0;
}
