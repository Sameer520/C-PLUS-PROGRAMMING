#include <iostream>
#include <cctype> 
bool isValidUsername(const std::string& username) {
    if (username.empty()) {
        std::cout << "Username cannot be empty." << std::endl;
        return false;
    }
    if (!isalpha(username[0])) {
        std::cout << "Username must start with an alphabet." << std::endl;
        return false;
    }
    for (char ch : username) {
        if (!isalnum(ch)) {
            std::cout << "Invalid character in the username. Only alphanumeric characters are allowed." << std::endl;
            return false;
        }
    }
    return true;
}
int main() {
    std::string username;
    std::cout << "Enter your username: ";
    std::getline(std::cin, username);
    if (isValidUsername(username)) {
        std::cout << "Username is valid." << std::endl;
    } else {
        std::cout << "Username is not valid." << std::endl;
    }
    return 0;
}
