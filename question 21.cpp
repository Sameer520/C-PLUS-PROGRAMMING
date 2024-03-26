#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountHolderName;
    double balance;

public:
    BankAccount(const std::string& name, double initialBalance) : accountHolderName(name), balance(initialBalance) {
        std::cout << "Account for " << accountHolderName << " created with initial balance: " << initialBalance << std::endl;
    }

    ~BankAccount() {
        std::cout << "Account for " << accountHolderName << " destroyed." << std::endl;
    }

    double getBalance() const {
        return balance;
    }

    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposited " << amount << " into the account. New balance: " << balance << std::endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn " << amount << " from the account. New balance: " << balance << std::endl;
        } else {
            std::cout << "Insufficient funds. Cannot withdraw " << amount << ". Current balance: " << balance << std::endl;
        }
    }
};

int main() {
    std::string userName;
    double initialBalance;

    std::cout << "Enter account holder's name: ";
    std::getline(std::cin, userName);

    std::cout << "Enter initial balance: ";
    std::cin >> initialBalance;

    BankAccount myAccount(userName, initialBalance);

    double depositAmount, withdrawAmount;

    std::cout << "Enter amount to deposit: ";
    std::cin >> depositAmount;
    myAccount.deposit(depositAmount);

    std::cout << "Enter amount to withdraw: ";
    std::cin >> withdrawAmount;
    myAccount.withdraw(withdrawAmount);


    return 0;
}
