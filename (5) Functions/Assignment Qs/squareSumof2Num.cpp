#include<iostream>
using namespace std;

int squareSumOf2Num(int a, int b) {
    // calculate (a+b)^2 = a^2 + b^2 + 2*(a*b)
    int val1 = a * a;
    int val2 = b *b;
    int val3 = 2 * (a * b);

    int result = val1 + val2 + val3;

    return result;
}

int main() {
   cout <<  squareSumOf2Num(2,3);
}