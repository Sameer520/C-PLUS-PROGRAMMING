#include <iostream>
int main() {
    long int longValue = 123456789;
    float floatValue = static_cast<float>(longValue);
    std::cout << "Long Int: " << longValue << std::endl;
    std::cout << "Float: " << floatValue << std::endl;
    return 0;
}
