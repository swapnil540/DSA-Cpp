#include<iostream>
using namespace std;


void changeB(int *ptrB) { // *ptrB recieves address of b 
    *ptrB = 50; // changes are made at address of b


}

void changeA(int a) {
    a = 20;

    cout << "After changing a in changeA fun, value of a in changeA fun : a = " << a << endl;
}

int main() {
    int a = 10;
    changeA(a); // pass by value
    cout << "After changing a in changeA fun, value of a in main fun : a = " << a << endl;

    int b = 20;
    cout << b << endl;
    changeB(&b); // pass by address
    cout << b << endl;



    
}