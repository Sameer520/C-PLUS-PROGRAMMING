#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

inline bool isPalindrome(const string& str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    return str == reversedStr;
}

int main() {
    string userInput;

    cout << "Enter a string: ";
    getline(cin, userInput);

    if (isPalindrome(userInput)) {
        cout << "The entered string is a palindrome." << endl;
    } else {
        cout << "The entered string is not a palindrome." << endl;
    }

    return 0;
}
