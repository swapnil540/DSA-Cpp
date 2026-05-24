// WAP where user can keep entering numbers till they enter a multiple of 10
#include<iostream>
using namespace std;

int main() {
    int n;

    while(true) {
        cout << "Enter a number: ";
        cin >> n;

        if(n % 10 == 0) {
            break;
        }

        cout << "you entered : " << n <<endl ;
    }
    cout << "out of loop \n";

}