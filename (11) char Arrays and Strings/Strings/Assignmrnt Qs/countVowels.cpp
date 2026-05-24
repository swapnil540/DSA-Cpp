#include<iostream>
#include<string>
using namespace std;

int countVowels(string s) {
    int count = 0;
    for(char ch: s) {
        if(ch == 'a' || ch == 'e' || 
            ch == 'i' || ch == 'o' || ch == 'u') {
                count++;
            }
    }

    return count;

}

int main() {
    string s = "hello";
    cout << countVowels(s) << endl; // 2
}