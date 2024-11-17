#include <iostream>
#include <string>

class BankAccount {
private:
    std::string name;
    std::string accountNo;
    std::string accountType;
    double balanceAmt;

public:
    // Constructor
    BankAccount(std::string n, std::string accNo, std::string accType, double balance = 0.0)
        : name(n), accountNo(accNo), accountType(accType), balanceAmt(balance) {}

    // Method to assign values
    void assignValues(std::string n, std::string accNo, std::string accType, double balance) {
        name = n;
        accountNo = accNo;
        accountType = accType;
        balanceAmt = balance;
    }

    // Method to deposit amount
    void depositAmount(double amount) {
        if (amount > 0) {
            balanceAmt += amount;
            std::cout << "Deposited: " << amount << ". New balance: " << balanceAmt << ".\n";
        } else {
            std::cout << "Deposit amount must be positive.\n";
        }
    }

    // Method to withdraw amount
    void withdrawAmount(double amount) {
        if (amount > 0 && amount <= balanceAmt) {
            balanceAmt -= amount;
            std::cout << "Withdrew: " << amount << ". New balance: " << balanceAmt << ".\n";
        } else {
            std::cout << "Insufficient balance or invalid withdrawal amount.\n";
        }
    }

    // Method to display account details
    void display() const {
        std::cout << "Account Holder: " << name << "\n"
                  << "Account Number: " << accountNo << "\n"
                  << "Account Type: " << accountType << "\n"
                  << "Balance Amount: " << balanceAmt << "\n";
    }
};

int main() {
    BankAccount account("Alice", "123456789", "Savings");

    account.depositAmount(500);
    account.withdrawAmount(200);
    account.display();

    return 0;
}
