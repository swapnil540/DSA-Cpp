// Instagram user ex

#include<iostream>
using namespace std;

class User {
    int id;
    string username;
    string password;
    string bio;

    void deActivate() {
        cout << "Deleting Account." << endl;

    }

    void editBio(string newBio) {
        bio = newBio;
    }
};

int main() {
    User A; // object created
    cout << sizeof(A) << endl;

}