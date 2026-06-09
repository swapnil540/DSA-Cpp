#include<iostream>
#include<vector>
using namespace std;

vector<bool> map(26, false); // for tracking each char in string

void removeDuplicates(string str, string ans, int i) {

    if(str.size() == i) { // base case after traversing complete string,  return 
        cout << ans << endl;
        return;
    }


    // work
    int mapIdx = str[i] - 'a'; // current char idx in map vector
    if(!map[mapIdx]) { // not duplicate
        ans.push_back(str[i]);
        map[mapIdx] = true;
    }

    removeDuplicates(str, ans, i+1); // recursive fnx call for next character


}

int main() {
    string str = "appnnacollege";
    string ans ="";
    removeDuplicates(str, ans, 0);  // apncoleg
}