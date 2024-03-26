#include <iostream>

void checkVotingEligibility(int age) {
    const int VOTING_AGE = 18;

    if (age >= VOTING_AGE) {
        std::cout << "You are eligible to vote." << std::endl;
    } else {
        int yearsLeft = VOTING_AGE - age;
        std::cout << "You are not eligible to vote. You need to wait for " << yearsLeft << " more years." << std::endl;
    }
}

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    checkVotingEligibility(age);

    return 0;
}
