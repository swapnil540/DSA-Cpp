#include<iostream>
#include<string>
using namespace std;

void permutations(string str, string ans) {
    int n = str.size();
    if(n == 0) {
        cout << ans << endl;
        return;
    }

    // Taking choices for each idx of ans from string str
    for(int i=0; i<str.size(); i++) {
        char ch = str[i];
        string nextStr = str.substr(0, i) + str.substr(i+1, n-i-1);
        permutations(nextStr, ans + ch); // ith char choice to add in permutation 
    }
}

int main() {
    string str = "abc";
    string ans = "";

    permutations(str, ans);

}