#include <iostream>
#include <cmath>

int main() {
    double floatingNumber;

    std::cout << "Enter a floating-point number: ";
    std::cin >> floatingNumber;

    int roundedFloor = static_cast<int>(std::floor(floatingNumber));
    int roundedCeil = static_cast<int>(std::ceil(floatingNumber));

    std::cout << "Original number: " << floatingNumber << std::endl;
    std::cout << "Rounded to the nearest integer using floor: " << roundedFloor << std::endl;
    std::cout << "Rounded to the nearest integer using ceil: " << roundedCeil << std::endl;

    return 0;
}
