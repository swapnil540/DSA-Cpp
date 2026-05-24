#include<iostream>
#include<cmath>
using namespace std;

void checkPrime(int n) {
    bool isPrime = true;

    

    for(int i=2; i<=sqrt(n); i++) {
        if(n % i == 0) {
            isPrime = false;
            break;
    
        }
        
    }

    if(n == 1) {
        cout << n << " is NOT prime number.";
    
    }
    else if(isPrime) {
        cout << n << " is prime number.";
    }
    else {
        cout << n << " is NOT prime number.";
    }

    cout << endl;

}

int main() {
    checkPrime(1);
    checkPrime(2);
    checkPrime(3);
    checkPrime(4);
    checkPrime(5);
    checkPrime(6);
    checkPrime(22);
}