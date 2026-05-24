#include<iostream>
using namespace std;

int main() {
    int n;

    while(true) { // infinite loop
        cout << "Enter a number: ";
        cin >> n;

        if(n % 10 == 0) {
            continue;
        }

        cout << "you entered : " << n << endl;
    }
}