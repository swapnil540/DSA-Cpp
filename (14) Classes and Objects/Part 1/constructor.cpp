#include<iostream>
using namespace std;

class Car {
    string color; // properties -> these are  private by default
    string name;
    
    public: // Access modifier
    Car(string name, string color) { // parameterized constructor
        cout << "New car. \n";
        this->name = name; // use of this pointer
        this->color = color;
        
    }

    //Methods
    void start() {
        cout << "car has started..\n";
    }

    void stop() {
        cout << "car has stopped\n";
    }

    // getter
    void displayInfo() {
        cout << "Car name: " << name << "   Car color: " << color << endl; 
    }
};

int main() {
    Car c1("Defender", "white");
    Car c2("Dzire", "Blue");
    c1.start();
    c1.stop();

    c1.displayInfo();
    c2.displayInfo();
}