//Print digits of a number in reverse

#include<iostream>
using namespace std;

int main() {
    int n, num;

    cout << "Enter a 4 digit num: ";
    cin >> n;

    num = n;
    int lastDigit ;

    while(num != 0) {

        lastDigit = num % 10;
        cout << lastDigit << " ";
        num /= 10;

    }
}