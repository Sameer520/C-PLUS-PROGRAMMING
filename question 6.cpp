#include <iostream>

int main() {
    char ch;

    std::cout << "Enter a character: ";
    std::cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            std::cout << "The character is a vowel." << std::endl;
        } else {
            std::cout << "The character is a consonant." << std::endl;
        }
    } else {
        std::cout << "Invalid input. Please enter an alphabetic character." << std::endl;
    }

    return 0;
}
