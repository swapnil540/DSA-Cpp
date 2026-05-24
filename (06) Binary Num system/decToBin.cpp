#include<iostream>
using namespace std;

int decToBin(int decNum) {
    int n = decNum;
    int binNum = 0;
    int pow  = 1; // 10^0 10^1 10^2...

    while(n != 0) {
        int lastBit = n % 2;
        binNum = binNum + ( lastBit * pow);
        pow = pow * 10;
        n /= 2;
    }

    cout << binNum << endl;
}

int main() {
    decToBin(16); // 1
}