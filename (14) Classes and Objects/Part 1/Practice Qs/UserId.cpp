#include<iostream>
using namespace std;

class User {
    private:
    int id;
    string password;

    public: 
    string username;

    User(int id) { // parameterized constructoe
        this->id = id; //
    }

    // setter
    void setPassword(string newPass) {
        password = newPass;

    }

    // Getter
    string getPassword() {
        return password; // private property can be accessible outside the class through public function called getter
    }

};

int main() {
    User user1(101); // object created -> constructor called

    user1.setPassword("s@231");
    user1.username = "swapnilmeshram";

    cout << "username: " << user1.username << endl;
    cout << "password: " << user1.getPassword() << endl;

}