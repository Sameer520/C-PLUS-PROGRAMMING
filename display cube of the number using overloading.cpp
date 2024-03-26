#include<iostream>
using namespace std;

class CubeCalculator {
public:
    CubeCalculator() : endValue(0) {}

    CubeCalculator(int value) : endValue(value) {}

    void setEndValue(int value) {
        endValue = value;
    }

    void displayCube() {
        cout << "Cube of numbers up to " << endValue << ":" << endl;
        for (int i = 1; i <= endValue; ++i) {
            cout << "Cube of " << i << ": " << i * i * i << endl;
        }
    }

private:
    int endValue;
};

int main() {
    int userValue;

    cout << "Enter an integer to display the cube of numbers up to that value: ";
    cin >> userValue;

    CubeCalculator cubeCalc1(userValue);

    cubeCalc1.displayCube();
    CubeCalculator cubeCalc2;

    cubeCalc2.setEndValue(5);

    cubeCalc2.displayCube();

    return 0;
}
