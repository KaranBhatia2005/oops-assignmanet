#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;
    static int totalTransactions;

public:
    BankAccount(string accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    static int getTotalTransactions() {
        return totalTransactions;
    }

    void deposit(double amount) {
        balance += amount;
        totalTransactions++;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            totalTransactions++;
        } else {
            cout << "Insufficient funds." << endl;
        }
    }

    void display() {
        cout << "Account Number: " << accountNumber << ", Balance: " << balance << endl;
    }
};

int BankAccount::totalTransactions = 0;

int main() {
    BankAccount account1("123456789", 1000);
    BankAccount account2("7814745821", 500);

    account1.deposit(200);
    account2.withdraw(100);

    account1.display();
    account2.display();

    cout << "Total Transactions: " << BankAccount::getTotalTransactions() << endl;

    return 0;
}
