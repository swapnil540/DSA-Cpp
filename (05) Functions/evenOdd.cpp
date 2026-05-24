#include<iostream>
using namespace std;

bool checkEven(int n) {
    if(n % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    bool isEven = checkEven(15);

    if(isEven) {
        cout << "Number is even";
    }
    else {
        cout << "Number is odd";
    }

    cout << "\n";

}