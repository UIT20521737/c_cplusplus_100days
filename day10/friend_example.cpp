#include <iostream>
using namespace std;

// Forward declaration of the GovernmentAuditor class is needed
// because BankAccount mentions it before it is fully defined.
class GovernmentAuditor; 

class BankAccount {
private:
    double balance; // This is private and normally cannot be accessed from outside

public:
    BankAccount(double initial_balance) : balance(initial_balance) {}

    // 1. Declare a FRIEND FUNCTION
    // This gives the standalone 'printBalance' function access to our private members.
    friend void printBalance(const BankAccount& account);

    // 2. Declare a FRIEND CLASS
    // This gives the 'GovernmentAuditor' class access to our private members.
    friend class GovernmentAuditor;
};

// --- Friend Function Definition ---
// This is a normal, standalone function, NOT a member of BankAccount.
// But because it's a 'friend', it can access 'account.balance'.
void printBalance(const BankAccount& account) {
    cout << "[Friend Function]: Account balance is $" << account.balance << endl;
}

// --- Friend Class Definition ---
class GovernmentAuditor {
public:
    // This method can access the private members of BankAccount
    // because GovernmentAuditor was declared as a friend.
    void checkAccount(const BankAccount& account) {
        cout << "[Friend Class]: Auditor is checking... Balance is $" << account.balance << endl;
    }
};


int main() {
    BankAccount my_account(1500.75);

    // Call the friend function
    printBalance(my_account);

    // Use the friend class
    GovernmentAuditor auditor;
    auditor.checkAccount(my_account);

    return 0;
}