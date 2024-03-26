#include<iostream>
using namespace std;

class ReverseNumber {
public:
    ReverseNumber() : originalNumber(0) {}

    ReverseNumber(int num) : originalNumber(num) {}

    void setNumber(int num) {
        originalNumber = num;
    }

    void displayReverse() {
        int reversedNumber = 0;
        int temp = originalNumber;

        while (temp > 0) {
            int digit = temp % 10;
            reversedNumber = reversedNumber * 10 + digit;
            temp /= 10;
        }

        cout << "Reverse of " << originalNumber << " is: " << reversedNumber << endl;
    }

private:
    int originalNumber;
};

int main() {
    int userNumber;

    cout << "Enter an integer to display its reverse: ";
    cin >> userNumber;

    ReverseNumber numObject1(userNumber);

    cout << "Reverse for the first object:" << endl;
    numObject1.displayReverse();

    ReverseNumber numObject2;

    numObject2.setNumber(12345);

    cout << "\nReverse for the second object:" << endl;
    numObject2.displayReverse();

    return 0;
}
