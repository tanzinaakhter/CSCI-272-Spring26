using namespace std;

class BankAccount {
private:
    double balance;
public:
    // Public methods for controlled access
    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        }
    }
};
