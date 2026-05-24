#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char str[], int n) { // O(n)
    int start = 0;
    int end = n-1;

    while(start <= end) { 
        if(str[start++] != str[end--]) {
            cout << "not valid palindrome\n";
            return false;
        } 

        // start++; 
        // end--;
    }
    cout << "valid palindrome\n";
    return true;
}

int main() {
    char str[] = "racecar";

   cout <<  isPalindrome(str, strlen(str)) << endl;

}