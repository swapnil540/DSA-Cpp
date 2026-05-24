#include<iostream>
using namespace std;

int updateIthBit(int num, int i, int val) {
    int bitMask = 1<<i;

    if(val == 1) {
        return num | bitMask;
    } else {
        return num & (~bitMask);
    }

}


void updateIthBit2(int num, int i, int val) {
    num = num & ~(1<<i); // clear ith Bit

    num = num | (val<<i);

    cout << num << endl;
}

int main() {
    cout << updateIthBit(7, 2, 0) << endl; // 3
    cout << updateIthBit(7, 3, 1) << endl; // 15

    updateIthBit2(7, 2, 0) ;
    updateIthBit2(7, 3, 1) ;
}