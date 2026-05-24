#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int N = 10;
    
    cout << "Prime Numbers between 2 to " << N << " are : \n";

    for(int i=2; i<=N; i++) {
        int curr = i; // current num to check for prime or not
        bool isPrime = true;
        for(int j=2; j<=N-1; j++) {
            if(curr == j) {
                continue;
            }
            if(curr % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) {
            cout << i << " ";
        }
    }
}