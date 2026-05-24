#include<iostream>
#include<string>
using namespace std;

int main() {
    string str = "helloworld";
    
    
    int n = str.length(); // dot operator used to access members of a class

    // for(int i=0; i<n; i++) {
    //     cout << str[i] << " ";
    // }

    // for(char ch: str) {
    //     cout << ch << " ";
    // }

    cout << str.substr(1,5) << endl;

    

}