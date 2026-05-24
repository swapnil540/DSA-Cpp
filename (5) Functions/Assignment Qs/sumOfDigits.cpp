#include<iostream>
using namespace std;

int digitSum(int n) { 
    int digSum = 0;
    int num = n;

    while(n != 0) {
        int lastDig = n % 10;
        digSum += lastDig;
        n /= 10;
    }

    cout << "Digit sum of " << num << " is : " << digSum << endl;
}

int main() {
    digitSum(25856);
}
