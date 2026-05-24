#include<iostream>
using namespace std;

int main() {
    int year;
    
    
    cout << "Enter year : ";
    cin >> year;

    if(year % 400 == 0) { // For century year (ending with 00)
        cout <<year << " is a leap year\n";

    }
    else if(year % 4 == 0) {// for non century years
        cout <<year << " is a leap year\n";
    }
    else {
        cout <<year << " is not a leap year\n";
    }
    
}