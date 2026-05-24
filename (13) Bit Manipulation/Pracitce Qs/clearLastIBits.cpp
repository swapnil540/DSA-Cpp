#include<iostream>
using namespace std;

void clearLastIBits(int num, int i) {
    int bitMask = (~0) << i;
    num = num & bitMask;

    cout << num << endl;
}

int main() {
    clearLastIBits(15, 2); // 12
}