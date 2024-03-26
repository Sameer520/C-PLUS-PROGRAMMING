#include<iostream>
using namespace std;

float calculateSimpleInterest(float principal, float rateOfInterest) {
    return (principal * rateOfInterest) / 100;
}

int main() {
    float principal, rateOfInterest;
    char customerType;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the customer type (S for senior citizen, others for regular): ";
    cin >> customerType;

    if (toupper(customerType) == 'S') {
        rateOfInterest = 12.0;
    } else {
        rateOfInterest = 10.0;
    }

    float interest = calculateSimpleInterest(principal, rateOfInterest);
    cout << "Simple Interest: " << interest << endl;

    return 0;
}
