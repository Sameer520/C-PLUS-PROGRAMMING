#include <iostream>
int main() {
    int number;
    unsigned long long factorial = 1;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> number;
    if (number < 0) {
        std::cout << "Factorial is undefined for negative numbers." << std::endl;
    } else {
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        std::cout << "Factorial of " << number << " is: " << factorial << std::endl;
    }
    return 0;
}
