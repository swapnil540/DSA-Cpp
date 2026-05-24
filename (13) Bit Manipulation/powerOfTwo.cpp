#include<iostream>
using namespace std;

bool isPowerOf2(int num) {
    if(!(num & (num-1))) {
        return true;
    } else {
        return false;
    }
}

int main() {

    cout << isPowerOf2(8) <<endl; // 1
    cout << isPowerOf2(16) <<endl; // 1
    cout << isPowerOf2(18) <<endl; // 0
    cout << isPowerOf2(20) <<endl; // 0


}