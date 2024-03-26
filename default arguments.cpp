#include <iostream>

void displayMessage(std::string message = "Hello", int repeatCount = 1) {
    for (int i = 0; i < repeatCount; ++i) {
        std::cout << message << std::endl;
    }
}

int main() {
    std::cout << "Calling displayMessage with default arguments:" << std::endl;
    displayMessage();

    std::cout << "\nCalling displayMessage with a custom message:" << std::endl;
    displayMessage("Custom Message");

    std::cout << "\nCalling displayMessage with custom message and repeat count:" << std::endl;
    displayMessage("Custom Message", 3);

    return 0;
}
