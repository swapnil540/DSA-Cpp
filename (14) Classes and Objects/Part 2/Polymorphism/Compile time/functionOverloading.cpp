#include<iostream>
using namespace std;

class Print {
    public:
    // Implementing function overloading -> same name of functions in a class with different parameters
    void show(int id) {
        cout << "id = " << id << endl;

    }

    void show(string name) {
        cout << "name = " << name << endl;
    }
};

int main() {
    Print obj1;
    Print obj2;

    obj1.show("Swapnil");  // show function having string  type of parameters will called
    obj1.show(101); // show function having int  type of parameters will called

    obj2.show("Vaibhav");
    obj2.show(105);
}