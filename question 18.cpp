#include <iostream>
#include <cmath>

int absoluteValue(int num) {
    return std::abs(num);
}

double absoluteValue(double num) {
    return std::fabs(num);
}

int main() {
    int intValue;
    double doubleValue;

    std::cout << "Enter an integer value: ";
    std::cin >> intValue;

    std::cout << "Enter a floating-point value: ";
    std::cin >> doubleValue;

    std::cout << "Absolute value of " << intValue << " (integer): " << absoluteValue(intValue) << std::endl;
    std::cout << "Absolute value of " << doubleValue << " (floating-point): " << absoluteValue(doubleValue) << std::endl;

    return 0;
}
