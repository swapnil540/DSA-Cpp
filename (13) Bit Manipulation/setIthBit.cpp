#include<iostream>
using namespace std;

void setIthBit(int num, int i) {
    int bitMask = 1 << i;
    num = num | bitMask; // setting ith bit

    cout << num << endl;
}


int main() {
    setIthBit(6, 3); // 14
    setIthBit(8, 3); // 8

    cout << (9&1);

}