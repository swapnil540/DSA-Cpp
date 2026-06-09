#include<iostream>
using namespace std;

int fibonacci(int n) {
    if(n==0 || n==1) { // Base case
        return n; // 0,1
    }
    // first left side fnx call completes its work then right side fnx call executes
    return fibonacci(n-1) + fibonacci(n-2); // both work and each inner fnx call is written here

}

int main() {
    cout << fibonacci(5) << endl; // 5
}