// Print sum of first n natural numbers
#include<iostream>
using namespace std;

int main() {
    int n, sum=0;

    cout << "Enter your n: ";
    cin >> n;

    for(int i=1; i<=n; i++) {
        sum = sum + i;
    }

    cout << "sum of first "<< n << " natural number is: "<< sum;

    
}