#include<iostream>
using namespace std;

int clearBitsInRange(int num, int i, int j) {
    int a = (~0) << (j+1);
    int b = (1<<i) - 1;
    int bitMask = a | b;

    return num & bitMask;
}

int main() {

    cout << clearBitsInRange(15, 1, 3) << endl; // 1
    cout << clearBitsInRange(40, 2, 5) << endl; // 0
    cout << clearBitsInRange(31, 1, 3) << endl; // 17
    
}