#include<iostream>
using namespace std;

void sayHello() {
    cout << "Hello :)\n"; // defining function
}

void assistant() {
    sayHello(); // calling
    cout << "work done!\n";
}

int main() {
    assistant(); // function calling
}