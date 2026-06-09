#include<iostream>
using namespace std;

int pow(int x, int n, int i) {
    if(i == n) { // Base case
        return x;
    }

    return x * pow(x, n, i+1); // work and inner fnx call
}

int main() {
    cout << pow(2, 10, 1) << endl;
}