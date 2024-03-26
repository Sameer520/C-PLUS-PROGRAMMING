#include <iostream>
class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double len, double wid) : length(len), width(wid) {
        std::cout << "Rectangle object created with length " << length << " and width " << width << std::endl;
    }

    ~Rectangle() {
        std::cout << "Rectangle object destroyed." << std::endl;
    }

    double calculateArea() {
        return length * width;
    }
};

int main() {
    double userLength, userWidth;

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> userLength;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> userWidth;

    Rectangle myRectangle(userLength, userWidth);

    double area = myRectangle.calculateArea();
    std::cout << "Area of the rectangle: " << area << std::endl;


    return 0;
}
