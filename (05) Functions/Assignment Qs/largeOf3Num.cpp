#include<iostream>
using namespace std;

int largeOf3Nums(int a, int b, int c) {
    
    if(a>b && a>c) {
        return a;
    }
    else if(b > c) {
        return b;
    }
    else {
        return c;
    }
}

int main() {
    cout << largeOf3Nums(50, 20, 10) << endl;
}