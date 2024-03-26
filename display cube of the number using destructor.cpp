#include<iostream>
using namespace std;

class CubeCalculator {
public:
    CubeCalculator(int endValue) : endValue(endValue) {}

    void displayCube() {
        cout << "Cube of numbers up to " << endValue << ":" << endl;
        for (int i = 1; i <= endValue; ++i) {
            cout << "Cube of " << i << ": " << i * i * i << endl;
        }
    }

    ~CubeCalculator() {
    }

private:
    int endValue;
};

int main() {
    int userValue;

    cout << "Enter an integer to display the cube of numbers up to that value: ";
    cin >> userValue;

    CubeCalculator cubeCalc(userValue);

    cubeCalc.displayCube();

    return 0;
}
