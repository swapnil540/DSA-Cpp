#include<iostream>
using namespace std;

int main() {
    int income;
    float tax;

    cout<<"Enter your income (in Lakhs): ";
    cin>>income;

  

    if(income <= 5) {
        // cout << "0%";
        tax = 0;
    }
    else if(income <= 10) {
        // cout <<"20%";
        tax = 0.2 * income;
    }
    else {
        // cout <<"30%";
        tax = 0.3 * income;
    }

      cout <<"Tax = "<<(tax * 100000)<<endl;
}