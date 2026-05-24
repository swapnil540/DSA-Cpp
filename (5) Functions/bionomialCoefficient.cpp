#include<iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;

    for(int i=1; i<=n; i++) {
        fact *= i;
    }

    return fact;
}

int bionomialCoeff(int n, int r) {
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nsubrfact = factorial(n-r);

    return nfact / (rfact * nsubrfact); // bionomial coefficient
}

int main() {
    int n , r;

    cout << "Enter n and r: ";
    cin  >> n >> r;

    cout << "bionomial coefficient(nCr) of " << n << " & " << r << " is : " <<bionomialCoeff(n, r);
    cout << endl;
}