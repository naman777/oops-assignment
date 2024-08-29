#include <iostream>
using namespace std;
class BankAccount {
private:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    void setAccountDetails(string number, string holderName) {
        accountNumber = number;
        accountHolderName = holderName;
        balance = 0.0;
    }

    void deposit(double amount) {
        balance += amount; // balance = balance + amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void displayAccount() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    account.setAccountDetails("1234567890", "Naman");
    int depositAmount;
    cout << "Enter the amount to deposit: ";
    cin >> depositAmount;
    account.deposit(depositAmount);
    account.displayAccount();

    int withdrawAmount;
    cout << "Enter the amount to withdraw: ";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);
    account.displayAccount();

    return 0;
}