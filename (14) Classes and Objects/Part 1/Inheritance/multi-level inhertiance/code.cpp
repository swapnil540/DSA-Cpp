#include<iostream>
using namespace std;

class Animal { // Base class
    public:

    void eat() {
        cout << "eats..\n";
    }

    void breathe() {
        cout << "breaths..\n";
    }
};

class Mammal : public Animal { // Derived class
    public:
    string bloodType = "warm";

};

class Dog : public Mammal { // Derived class
    public:
    void tailWag() {
        cout << "Dog wags its tales..\n";
    }
};

int main() {
    Dog d1;
    d1.eat();
    d1.breathe();
    cout << "Blood Type: " << d1.bloodType << endl;
    d1.tailWag();

}