#include <iostream>
char booleanToChar(bool value) {
    return value ? '1' : '0';
}
int main() {
    bool myBool = true;
    char myChar = booleanToChar(myBool);
    std::cout << "Boolean: " << myBool << std::endl;
    std::cout << "Char: " << myChar << std::endl;
    return 0;
}


