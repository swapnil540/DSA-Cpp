#include<iostream>
#include<string>
using namespace std;

  bool isPalindrome(string s) { // leetcode 125    O(n)
        //remove non-alphanumeirc character from string and convert it into small case
        for(int i=0; i<s.length(); i++) {
            if(s[i] >= 'a' && s[i] <= 'z') { 

            }
            else if(s[i] >= '0' && s[i] <= '9') { 

            }
            else if(s[i] >= 'A' && s[i] <='Z') { // capital to small case
                s[i] += 32;
            }
            else {
                cout << i << " ";
                s.erase(i, 1); // i -> char idx to remove,  1 -> only 1 char to remove after i
                i--; // length decreases by one when a non-alphanumeric character is remove
            }
        }

        //check characters from start to end parallely
        int st = 0 , end = s.length() - 1;

        while(st <= end) {
            if(s[st] != s[end]) {
                return false;
            }
            st++;
            end--;
        }

        return true;
    }


int main() {
    string s = "0P";
    cout << isPalindrome(s);
}