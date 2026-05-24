#include<iostream>
using namespace std;

int main() {
    int a, b;
    char choice;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter operation (+, -, *, /) : ";
    cin >> choice;

    switch(choice) {
        case '+': cout << "Sum = " << (a+b);
                break;
        case '-': cout << "Substraction = " << (a-b);
                break;
        case '*': cout << "Product = " << (a*b);
                break;
        case '/': cout << "Division = " << (a/b);
                break;
        default: cout << "Choose valid operation\n";
    }

}