#include<iostream>
using namespace std;
// Added some extra features by my own idea

class BankAccount {
    string accNum;
    double balance;

    public:
    BankAccount(string accNm, double bal) {
        accNum = accNm;
        balance = bal;

    }

    void deposit(int amount) {
        balance += amount;
        cout << amount << "rs. deposited successfully.\n";
    }

    void withdraw(int amount) {
        if(amount <= balance) {
            balance -=  amount;
            cout << amount << "rs. withdrawn successfully.\n";
        } else {
            cout << "No sufficient balance for " << amount << " withdrawl amount.\n";
        }
    }

    void getBalance() {
        cout << "Balance for acc no. " << accNum << " is : " << balance << "rs. \n";
    }


    
};

int main() {
    BankAccount Myaccount("5428", 500);
    Myaccount.getBalance(); //500
    Myaccount.deposit(500);
    Myaccount.getBalance(); //1000
    Myaccount.withdraw(400);
    Myaccount.getBalance(); // 700
    
    // cout << Myaccount.balance; // private member inaccessible out of class
}