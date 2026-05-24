#include<iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i=1; i<=n; i++) {

        //spaces
        for(int j=1; j<=n-i; j++) {
            cout << " ";
        }

        //part1 num
        for(int k=i; k>=1; k--) {
            cout << k ;
        }

        //part2 num
        for(int j=2; j<=i; j++) {
            cout << j;
        }

        cout << endl;

    }
}