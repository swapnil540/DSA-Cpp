#include<iostream>
using namespace std;
// Abstraction -> hiding unneccessary details and showing importants parts , two ways to achieve abstraction
// 1. Access Specifiers -> private , public , protected
// 2. Abstract class and Pure virtual function (abstract fnx)

// abstract class
class Shape {
    public:
    virtual void draw() = 0; // abstract fnx, pure virtual fnx

};

class Circle : public Shape {
    public:
    void draw() { // implementation of pure virtual fnx
        cout << "Drawing circle...\n";
    }
};


class Square : public Shape {
    public:
    void draw() { // implementation of pure virtual fnx
        cout << "Drawing square...\n";
    }
};


int main() {
    Circle cir1;
    cir1.draw();

    Square squ1;
    squ1.draw();

    // Shape s1; // can't make the object of abstract class
    // s1.draw(); // can't call the unimplemented(not defined) pure virtual function
}