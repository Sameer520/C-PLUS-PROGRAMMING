#include<iostream>
using namespace std;

class RightAngleTriangle {
public:
    RightAngleTriangle() : rows(0) {}

    RightAngleTriangle(int numRows) : rows(numRows) {}

    void setRows(int numRows) {
        rows = numRows;
    }

    void printPattern() {
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << i << " ";
            }
            cout << endl;
        }
    }

private:
    int rows;
};

int main() {
    int userRows;

    cout << "Enter the number of rows for the right-angled triangle: ";
    cin >> userRows;

    RightAngleTriangle triangle1(userRows);

    cout << "Pattern for the first object:" << endl;
    triangle1.printPattern();

    RightAngleTriangle triangle2;

    triangle2.setRows(4);

    cout << "\nPattern for the second object:" << endl;
    triangle2.printPattern();

    return 0;
}
