#include<iostream>
using namespace std;

int main() {
    int prev1 = 0, prev2 = 1, i = 1, curr = 0;
        int n = 4;

        while(i <= (n-1)) {
            curr = prev1 + prev2;
            prev1 = prev2;
            prev2 = curr;
        }

        cout << curr;
}