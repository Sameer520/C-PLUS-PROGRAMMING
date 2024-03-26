#include <iostream>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    double temperature;
    char choice;

    std::cout << "Enter the temperature: ";
    std::cin >> temperature;

    std::cout << "Enter 'C' for Celsius to Fahrenheit conversion or 'F' for Fahrenheit to Celsius conversion: ";
    std::cin >> choice;

    if (choice == 'C' || choice == 'c') {
        double fahrenheit = celsiusToFahrenheit(temperature);
        std::cout << temperature << " degrees Celsius is equal to " << fahrenheit << " degrees Fahrenheit." << std::endl;
    } else if (choice == 'F' || choice == 'f') {
        double celsius = fahrenheitToCelsius(temperature);
        std::cout << temperature << " degrees Fahrenheit is equal to " << celsius << " degrees Celsius." << std::endl;
    } else {
        std::cout << "Invalid choice. Please enter 'C' or 'F'." << std::endl;
    }

    return 0;
}
