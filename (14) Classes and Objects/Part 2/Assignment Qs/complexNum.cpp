#include<iostream>
using namespace std;

class Complex {
    int real;
    int img;

    public:
    Complex(int r, int i) {
        real = r;
        img = i;
    }

    void show() {
        cout << real << " + " << img << "i \n";
    }

    // operator overload fnx
    void operator - (Complex &c2) { // overloading the - operator , it behave different for two objects
        int resReal = this->real - c2.real; // this refers to the c1 
        int resImg = this->img - c2.img;
        Complex c3(resReal, resImg);
        c3.show();
    }
};

int main() {
    Complex c1(10, 5);
    Complex c2(4, 1);

    c1.show();
    c2.show();

    c1 - c2; // calling operator overload fnx



}