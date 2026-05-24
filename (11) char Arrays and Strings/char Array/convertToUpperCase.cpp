#include<iostream>
#include<cstring>
using namespace std;

void toUpper(char str[]) {
    for(int i=0; i<strlen(str); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') { // upper
            str[i] -= 32;
        }
    }

    cout << str << endl;
}

void toLower(char str2[]) {
    for(int i=0; i<strlen(str2); i++) {
        if(str2[i] >= 'A' && str2[i] <= 'Z') { // lower
            str2[i] += 32;
        }
    }

    cout << str2 << endl;
}



int main() {
    char str[] = "ApPle is red.";
    toUpper(str);

    char str2[] = "dEFEndeR iS NiCE cAR.";
    toLower(str2);
}