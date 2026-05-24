// & operator

#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;

    float b = 20.5;
    float *ptr2 = &b; 

    cout << *ptr << endl;

    cout << &a << " = " << ptr << endl; // gives address of a
    cout << a << " = " << *ptr << endl; // gives value of a

    cout << &b << " = " << ptr2 << endl; // gives address of b
    cout << b << " = " << *ptr2 << endl; // gives value of b

    cout << sizeof(ptr) << "\n";
    cout << sizeof(ptr2) << "\n";
}