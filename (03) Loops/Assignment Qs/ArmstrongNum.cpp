#include<iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number : ";
    cin >> num;

    int n = num , cubeSum = 0;

    while(n != 0) {
        int lastDig = n % 10;
        int cubeOfLastDig = lastDig * lastDig * lastDig;
        cubeSum += cubeOfLastDig;
        n /= 10;
    }

    if(cubeSum == num) {
        cout << num << " is an Armstrong number.";
    }
    else {
        cout << num << " is NOT an Armstrong number.";
    }

    cout << endl;
}