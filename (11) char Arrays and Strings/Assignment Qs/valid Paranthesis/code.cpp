#include<iostream>
using namespace std;

bool isValid(string s) {
    int n = s.size();
        int idx = 0;

        while(idx < n) {
            if(s[idx] == '{' && s[idx+1] == '}') {
                s.erase(idx, 2); if(idx > 0) idx--;
            } else if(s[idx] == '[' && s[idx+1] == ']') {
                s.erase(idx, 2); if(idx > 0)  idx--;
            }  else if(s[idx] == '(' && s[idx+1] == ')') {
                s.erase(idx, 2); if(idx > 0)  idx--;
            } else {

                idx++;
            }


            cout << s << endl;

            if(s == "") {
                return true;
            }

        }
        return false;
}

int main() {
    string s = "{[()]}";
    cout << isValid(s);
}