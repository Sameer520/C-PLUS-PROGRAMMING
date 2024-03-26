#include <iostream>

class A {
public:
    int a;

    A() {
        std::cout << "Enter the value of a: ";
        std::cin >> a;
    }
};

class B {
public:
    int b;

    B() {
        std::cout << "Enter the value of b: ";
        std::cin >> b;
    }
};

class C : public A, public B {
public:
    int c;

    C() {
        std::cout << "Enter the value of c: ";
        std::cin >> c;
    }

    void displayValues() {
        std::cout << "Values: a=" << a << ", b=" << b << ", c=" << c << "\n";
    }
};

int main() {
    C objC;

    objC.displayValues();

    return 0;
}

