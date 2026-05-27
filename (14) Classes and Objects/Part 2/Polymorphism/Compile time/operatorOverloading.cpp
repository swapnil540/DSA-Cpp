#include<iostream>
using namespace std;

//Implenting operator overloading by adding the two complex numbers as objects

class Complex { // creating a class to represent complex no.
    int real;
    int img;

    public:
    Complex(int R, int I) {
        real = R;
        img = I;
    }

    void showNum() {
        cout << real << " + " << img << "i \n";
    }
    // Operator overloading for +
    Complex operator + (Complex &c2) {
        int resReal = this->real + c2.real; // this means current object i.e. c1 
        int resImg = this->img + c2.img;
        Complex c3(resReal, resImg); // creating the object of third complex number by passing the real and img part results of two objects c1 and c2
        return c3;
    }

    // Operator overloading for -
    Complex operator - (Complex &c2) {
        int resReal = this->real - c2.real; // this means current object i.e. c1 
        int resImg = this->img - c2.img;
        Complex c4(resReal, resImg); // creating the object of third complex number by passing the real and img part results of two objects c1 and c2
        return c4;
    }



};

int main() {
    Complex c1(1, 2);
    Complex c2(3, 4);

    c1.showNum();
    c2.showNum();

    Complex c3 = c1 + c2; // operator overloading function will call
    c3.showNum();

    Complex c4 = c1 - c2; // operator overloading function will call
    c4.showNum();
}