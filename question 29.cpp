#include <iostream>

bool isHarshad(int num) {
    int sum = 0;
    int temp = num;

    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    return (num % sum == 0);
}

bool isBuzz(int num) {
    return (num % 7 == 0 || num % 10 == 7);
}

int main() {
    int userNumber;
    std::cout << "Enter a number: ";
    std::cin >> userNumber;

    if (isHarshad(userNumber)) {
        std::cout << userNumber << " is a Harshad number." << std::endl;
    } else {
        std::cout << userNumber << " is not a Harshad number." << std::endl;
    }
    if (isBuzz(userNumber)) {
        std::cout << userNumber << " is a Buzz number." << std::endl;
    } else {
        std::cout << userNumber << " is not a Buzz number." << std::endl;
    }

    return 0;
}
