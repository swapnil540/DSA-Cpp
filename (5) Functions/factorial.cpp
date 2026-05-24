#include<iostream>
using namespace std;

int fact(int n) {
    int factorial = 1;

    for(int i=1; i<=n ; i++) {
        factorial *= i;
    }

    cout << "factorial(" << n << ") = " << factorial << endl;
    return factorial;
}

int main() {
     fact(0);
     fact(1);
     fact(2);
     fact(3);
     fact(4);
     fact(5);
     fact(6);
}