
#include <iostream>
using namespace std;

class BankAccount {
public:
    long long accountNumber;
    float balance;

    void accept() {
        cout << "Enter account number:10000000 and balance:01121212";
        cin >> accountNumber >> balance;
    }

    void display() {
        cout << "Account Number: " << accountNumber;
        cout << "\nBalance: " << balance;
    }
};

int main() {
    BankAccount b;
    b.accept();
    b.display();
    return 0;
}
