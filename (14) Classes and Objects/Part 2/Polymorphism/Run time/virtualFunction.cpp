#include<iostream>
using namespace std;

class Parent {
    public:
    virtual void hello() {
        cout << "Parent hello \n";
    }
};

class Child : public Parent {
    public:
    void hello() {
        cout << "Child hello \n";
    }
};

int main() {
    Parent obj1;
    obj1.hello(); // parent class function will call

    Child obj2;
    obj2.hello(); // child class function will call

    Parent *ptr; // Parent class pointer points to the parent class objects

    ptr = &obj2; // now pointer pointing to the child class object obj2 -> Run time binding , because memory allocation happens at run time and ptr will also points to the child class object memory address during run time.

    ptr->hello(); // child class function will call -> Virtual function , runtime polymophism achieved
}