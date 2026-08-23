#include<iostream>
#include<string>
using namespace std;

void findSubSets(string str, string subSets) {
    if(str.size() == 0) {
        cout << subSets << "\n";
        return;
    }

    char ch = str[0];

    // yes choice
    findSubSets(str.substr(1,str.size()-1), subSets+ch);
    // no choice
    findSubSets(str.substr(1,str.size()-1), subSets); // not adding ch in no choice

}

int main() {
    string str = "abc";
    string subSets = "";

    findSubSets(str, subSets); // 8 subsets including empty one of size zero
}