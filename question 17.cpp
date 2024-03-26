#include <iostream>
#include <cmath>

long long power(int base, int exponent) {
    return static_cast<long long>(std::pow(base, exponent));
}

double power(double base, double exponent) {
    return std::pow(base, exponent);
}

int main() {
    int intBase, intExponent;
    double doubleBase, doubleExponent;

    std::cout << "Enter the base for integer power: ";
    std::cin >> intBase;
    std::cout << "Enter the exponent for integer power: ";
    std::cin >> intExponent;

    std::cout << "Enter the base for floating-point power: ";
    std::cin >> doubleBase;
    std::cout << "Enter the exponent for floating-point power: ";
    std::cin >> doubleExponent;

    std::cout << "Power of " << intBase << " to the " << intExponent << " (integer): " << power(intBase, intExponent) << std::endl;
    std::cout << "Power of " << doubleBase << " to the " << doubleExponent << " (floating-point): " << power(doubleBase, doubleExponent) << std::endl;

    return 0;
}
