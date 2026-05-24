#include<iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> n;

    for(int x=2; x <= n-1; x++) {
        if(n % x == 0) { //x is a factor of n; x completely divides n; n is non-prime
            isPrime = false;
            break;
        }
        
    }

    if(isPrime) {
        cout << n << " is a prime number.\n";
    }
    else {
        cout << n << " is  NOT a prime  number.\n";
    }
   

   
}