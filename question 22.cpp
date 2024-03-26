#include <iostream>
#include <cmath>

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        ++count;
    }
    return count;
}

bool isNarcissistic(int num) {
    int originalNum = num;
    int numDigits = countDigits(num);
    int sum = 0;

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int userNumber;
    std::cout << "Enter a number: ";
    std::cin >> userNumber;

    if (isNarcissistic(userNumber)) {
        std::cout << userNumber << " is a narcissistic number." << std::endl;
    } else {
        std::cout << userNumber << " is not a narcissistic number." << std::endl;
    }

    return 0;
}
