#include<iostream>
using namespace std;

int countSubstrings(string str, int firstCharIdx, int lastCharIdx, int count) {
    if(firstCharIdx == str.size()) { // Base case
        return count;
    }

    //work
    char fChar = str[firstCharIdx];
    char lChar = str[lastCharIdx];
    
    if(fChar == lChar) {
        count++;
    }

    if(lastCharIdx == str.size()) {
        firstCharIdx += 1;
        lastCharIdx = firstCharIdx-1; // decrease idx by 1 because in next fnx call it will increase , so it must consider the current char 

    }

    return countSubstrings(str, firstCharIdx, lastCharIdx+1, count);
    
}

int main() {
    string str = "abcab";
    int count = 0;
    cout << countSubstrings(str, 0, 0, count) << endl; // 7
}