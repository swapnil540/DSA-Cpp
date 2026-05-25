#include<iostream>
using namespace std;

class Animal { // Base class
    public:
    string color;

    void eat() {
        cout << "eats..\n";
    }

    void breathe() {
        cout << "breathes..\n";
    }
};

class Fish : public Animal { // Derived class
    public:

    void swim() {
        cout << "swims..\n";
    }

};

int main() {
    Fish f1;
    f1.swim();
    f1.eat();
    f1.breathe();

}