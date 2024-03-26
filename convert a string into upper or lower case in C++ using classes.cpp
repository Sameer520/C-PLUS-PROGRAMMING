#include <iostream>
#include <string>

class StringManipulator {
private:
    std::string str;

public:
    StringManipulator(std::string s) : str(s) {}

    void toUpperCase() {
        for (char &c : str) {
            if (std::islower(c)) {
                c = std::toupper(c);
            }
        }
    }

    void toLowerCase() {
        for (char &c : str) {
            if (std::isupper(c)) {
                c = std::tolower(c);
            }
        }
    }

    int countCapitalLetters() {
        int count = 0;
        for (char c : str) {
            if (std::isupper(c)) {
                count++;
            }
        }
        return count;
    }

    std::string getString() const {
        return str;
    }
};

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    StringManipulator sm(inputString);

    sm.toUpperCase();
    std::cout << "String in upper case: " << sm.getString() << std::endl;

    sm.toLowerCase();
    std::cout << "String in lower case: " << sm.getString() << std::endl;

    int capitalCount = sm.countCapitalLetters();
    std::cout << "Number of capital letters: " << capitalCount << std::endl;

    return 0;
}
