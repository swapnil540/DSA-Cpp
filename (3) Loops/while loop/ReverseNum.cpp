// Reverse a given number and print the result
#include<iostream>
using namespace std;

int main() {
    int n, lastDig, reverseNum = 0;

    cout << "Enter a number: ";
    cin >> n;

    while(n != 0) {
        reverseNum *= 10;
        lastDig = n % 10;
        reverseNum += lastDig;
        n /= 10;
    }

    cout << "Reverse = "<< reverseNum << endl;
}