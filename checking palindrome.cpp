#include <iostream>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    std::cout << "Enter a number: ";
    std::cin >> num;

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        std::cout << originalNum << " is a palindrome." << std::endl;
    } else {
        std::cout << originalNum << " is not a palindrome." << std::endl;
    }

    return 0;
}
