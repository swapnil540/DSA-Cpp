#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string str1, string str2) { // O(n+m)
    if(str1.length() != str2.length()) {
        return false;
    }

    int count[26] = {0};

    for(char ch: str1) { // tracking freq each char of str1
        int pos = ch - 'a'; // current char position
        count[pos]++;
    }

    // traversing str2 and checking count for individual char in str2
    // also decreasing individual count for individual character in str2
    for(char ch: str2) {
        int pos = ch - 'a';
        if(count[pos] == 0) {
            return false;
        }

        count[pos]--;

    } 

    return true;


}

int main() {
    string str1 = "anagram";
    string str2 = "nakaram";

    cout << isAnagram(str1, str2);

    
}