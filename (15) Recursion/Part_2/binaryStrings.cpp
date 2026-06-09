#include<iostream>
using namespace std;

void binaryStrings(int n, int lastPlace, string ans) {
    if(n == 0) { // base case
        cout << ans << endl;
        return;
    }

    // work and inner fnx call

    if(lastPlace != 1) { // lastplace 0 -> can add 0 or 1 at next place
        binaryStrings(n-1, 0, ans+'0');
        binaryStrings(n-1, 1, ans+'1');
    } else { // lastplace 1 -> can add only 0, because adding 1 can create consecutive 1s problem
        binaryStrings(n-1, 0, ans + '0');
    }
}

int main() {
    string ans = "";
    binaryStrings(3, 0, ans);

}