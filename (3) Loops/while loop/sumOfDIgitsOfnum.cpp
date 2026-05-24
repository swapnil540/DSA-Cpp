//Print Sum of digits of a number

#include<iostream>
using namespace std;

int main() {
    int n, num, digitSum = 0;

    cout << "Enter a 4 digit num: ";
    cin >> n;

    num = n;
    int lastDigit ;

    while(num != 0) {

        lastDigit = num % 10;
        digitSum += lastDigit;
        num /= 10;

    }

    cout << "Sum of digits of " << n << " is: " << digitSum << endl;

    
}