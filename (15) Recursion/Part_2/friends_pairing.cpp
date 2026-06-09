#include<iostream>
using namespace std;

int friendsPairing(int n) {

    if(n==1 || n==2) { //  base case
        return n;
    }

    // work and recursive fnx call

    // single 
    int ans1 = friendsPairing(n-1); // single friend then n-1 small problem passed again

    // pair
    int ans2 = (n-1) * friendsPairing(n-2); // n-1 possible choices , pair can be of 2 that's why n-2 small problem passed again

    return ans1 + ans2;
}

int main() {
    int n = 3;
    cout << friendsPairing(n) << endl; // 4 ways
}