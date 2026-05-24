#include<iostream>
using namespace std;

int main() {
    int prev1=0, prev2=1, curr=0;
    int N;

    cout << "Enter a num: ";
    cin >> N;
    
    cout << "Fibonacci series: ";
    cout << prev1 << " " << prev2;

    int i  = 1;

    while(i <= N) {
        curr = prev1 + prev2;
        cout << " " << curr << " ";
        prev1 = prev2;
        prev2 = curr;
        i++;
    }

    
}