#include<iostream>
using namespace std;

void checkOddOrEven(int n) { 

    if(!(n & 1)) {
        cout << "Even\n";
    }
    else {
        cout << "Odd\n";
    }
    
}

int main() {

    checkOddOrEven(5);

}