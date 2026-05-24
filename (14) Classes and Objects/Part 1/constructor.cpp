#include<iostream>
using namespace std;

class Car {
    string color; // properties
    string name;
    
    public: // Access modifier
    Car() { // constructor
        cout << "New car. \n";
    }

    //Methods
    void start() {
        cout << "car has started..\n";
    }

    void stop() {
        cout << "car has stopped\n";
    }
};

int main() {
    Car c1;
    Car c2;
    c1.start();
    c1.stop();
}