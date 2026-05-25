#include<iostream>
using namespace std;

class Animal {
    public:
    string color;
    
    void eat() {
        cout << "eats.." << endl;
    }

    void breathe() {
        cout << "breathes..." << endl;
    }
    

};

class Fish : protected Animal { // Inherited from Animal class
    public:
    int fins;

    void swim() {
        eat(); // protected properties and methods can be accessed from inherited class 
        cout << "Fish Swimming.." << endl;
    }

};

int main() {
    Fish f1;
    f1.swim();
}