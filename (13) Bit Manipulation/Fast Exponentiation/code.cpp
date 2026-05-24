#include<iostream>
using namespace std;

int FastExponentiation(int x, int n) { // O(logn)
    int ans = 1;

    while(n > 0) {
        int lastBit = n & 1;
        if(lastBit) {
            ans = ans * x;
        }
        x = x * x; // updating power of x
        n = n >> 1; // shifting bits to right for extracting each last bit until n = 0
    }

    return ans;
}

int main() {

    cout << FastExponentiation(7, 4); // 2401

}