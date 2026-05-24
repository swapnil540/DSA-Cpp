#include<iostream>
using namespace std;

int main() {
    int n = 4;

    //part 1
    for(int i=1; i<=n; i++) {
        
        //stars
        for(int j=1; j<=i; j++) {
            cout << "*";
        }

        //space
        for(int k=1; k<=n-i; k++) {
            cout << " ";
        }

        //space
          for(int k=1; k<=n-i; k++) {
            cout << " ";
        }

        //stars
        for(int j=1; j<=i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    //part 2
    for(int i=n; i>=1; i--) {
        
        //stars
        for(int j=1; j<=i; j++) {
            cout << "*";
        }

        //space
        for(int k=1; k<=n-i; k++) {
            cout << " ";
        }

        //space
          for(int k=1; k<=n-i; k++) {
            cout << " ";
        }

        //stars
        for(int j=1; j<=i; j++) {
            cout << "*";
        }

        cout << endl;
    }
}
