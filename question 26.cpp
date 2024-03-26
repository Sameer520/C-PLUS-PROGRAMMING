#include <iostream>

int countElements(const std::string& str) {
    return str.length();
}

int main() {
    std::string userInput;
    std::cout << "Enter a string: ";
    std::getline(std::cin, userInput);

    int elementCount = countElements(userInput);
    std::cout << "Number of elements in the string: " << elementCount << std::endl;

    return 0;
}
