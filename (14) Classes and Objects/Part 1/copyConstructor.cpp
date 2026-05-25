#include<iostream>
using namespace std;

class Car {
    public:
    string name;
    string color;
    int *mileage;

    Car(string name, string color) {
        this->name = name;
        this->color = color;
        mileage = new int; //Dynamic memory allocation
        *mileage = 12;
    }

    Car(Car  &original) { // custom copy constructor -> if not created compiler automatically creates this
        name = original.name;
        color = original.color;
        mileage = new int; // deep copy -> copy of DAM into heap
        *mileage = *original.mileage;
    }

    ~Car() {
        cout << "deleting object..." << endl;
        if(mileage != NULL) {
            delete mileage;
            mileage = NULL;
        }

    }
};

int main() {
    Car c1("Fortuner", "Black"); // object 1

    Car c2(c1); // creating the object c2 using copy constructor, by copying the  properties of c1 

    cout << c2.name << endl; // Fortuner
    cout << c2.color << endl; // Black

    *c2.mileage = 10;
    cout << *c1.mileage << endl; // changes in c2's DAM will not reflect into c1's DAM because brand new copy of c1's DM is created.
    
}