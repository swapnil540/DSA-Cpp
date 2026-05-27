#include<iostream>
using namespace std;

class Parent {
    public:
    Parent() {
        cout << "Parent class constructor \n";
    }

    ~Parent() {
        cout << "Parent class Destructor \n";
    }
};

class Child : public Parent {
    public:
    Child() {
        cout << "Child class constructor \n";
    }

    ~Child() {
        cout << "Child class Destructor \n";
    }
};

int main() {
    Child c1; // first Parent class constructor calls then child class constructor

}