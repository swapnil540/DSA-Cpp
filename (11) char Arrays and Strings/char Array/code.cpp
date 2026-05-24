#include<iostream>
#include <cstring>
using namespace std;

int main() {
    char arr[] = {'c', 'o', 'd', 'e','\0'}; // values can be changed by going on individual idx
    
    cout << arr << endl;
    // "Hello world" // string literals  can't change

    char work[] = "Code"; // doesn't need to specify null char
    

    cout << strlen(arr) << endl; // 4 excluding null character
    cout << sizeof(arr) << endl; // 5 including null character


    // char word[20];

    // cin >> word; // ignores characters after whitespaces

    // cout << "your word was: " << word << endl;

    char sentence[50];

    cin.getline(sentence, 50);

    cout << "Entered sentece: " << sentence << endl;



}