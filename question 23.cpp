#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int publicationYear;

public:
    Book(const std::string& bookTitle, const std::string& bookAuthor, int year) 
        : title(bookTitle), author(bookAuthor), publicationYear(year) {
        std::cout << "Book \"" << title << "\" created. Author: " << author << ", Year: " << publicationYear << std::endl;
    }

    ~Book() {
        std::cout << "Book \"" << title << "\" destroyed." << std::endl;
    }

    void displayInfo() const {
        std::cout << "Title: " << title << "\nAuthor: " << author << "\nYear: " << publicationYear << std::endl;
    }
};

int main() {
    Book myBook("The Catcher in the Rye", "J.D. Salinger", 1951);

    myBook.displayInfo();


    return 0;
}
