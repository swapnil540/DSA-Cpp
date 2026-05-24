#include<iostream>
using namespace std;

char nxtAlphaChar(char ch) {
    // returns next english alphabet character based on input
    if(ch == 'z') {
        return ch -= 25; // 'a'
    }
    else {
        return ++ch;
    }
}

int main() {
    cout << nxtAlphaChar('d');
}