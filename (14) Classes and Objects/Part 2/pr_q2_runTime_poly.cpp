#include<iostream>
using namespace std;

class Base {
    public:
    virtual void show() {
        cout << "Base \n";
    }
};

class Derived : public Base {
    public:
    void show() override { // override keyword explicitly shows show function is overridden
        cout << "Derived \n";
    }
};

int main() {
    Base *ptr = new Derived(); // ptr of base class points to the object of derived class
    ptr->show(); // Derived class function will called because ptr points to object of derived class
    delete ptr; // deleting dynamically created memory
}