#include<iostream>
using namespace std;

int reverseNum(int n) {
    int num = n, reverseNum = 0;

    while(n != 0) {
        reverseNum *= 10;
        int lastDig = n % 10;
        reverseNum += lastDig;
        n /= 10;
    }

    return reverseNum;
}


int checkPalindrome(int N) {

   if(N == reverseNum(N)) {
    cout << N << " is a Palindrome Number.";
   }
   else {
    cout << N << " is NOT a Palindrome Number.";
   }

   cout << endl;
}

int main() {
    checkPalindrome(121);
}