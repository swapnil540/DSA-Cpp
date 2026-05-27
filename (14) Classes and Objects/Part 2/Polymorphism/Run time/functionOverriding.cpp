#include<iostream>
using namespace std;

// Function overriding -> parent and child class both contains the same functions with same signature.
// signature -> combination of return type, name, parameter types, parameter list of a functio.
class Parent {
    public:
    void show() {
        cout << "Parent class show function \n";
    }

};

class Child : public Parent { // Through inheritance parent class show function is available to the child class
    public:
    void show() {
        cout << "Child class show function \n ";
    }

};

int main() {
    Child c1;
    c1.show(); // child class show function will called -> parent class function is overridden by child class function
}