#include<iostream>
using namespace std;

int main() {
    int n = 7;

    // 1st Pyramid
    for(int i=1; i<=n; i++) {
        
        //spaces
        for(int j=1; j<=n-i; j++) {
            cout << " ";
        }

        //star
        for(int k=1; k<=2*i-1; k++) {
            cout << "*";
        }

        cout << endl;
    }

        // 2nd Pyramid
        for(int i=n; i>=1; i--) {
            
            //spaces
            for(int j=1; j<=n-i; j++) {
                cout << " ";
            }

            //star
            for(int k=1; k<=2*i-1; k++) {
                cout << "*";
            }
            cout << endl;
        }

}
