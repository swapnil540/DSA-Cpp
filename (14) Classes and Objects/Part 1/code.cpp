#include <iostream>
using namespace std;

class Student {
    private:
    // Properties
    string name;
    float cgpa;

    public: // Access Modifier
    // Methods
    void getPercentage() {
        cout << (cgpa * 10) << endl;
    }

    //setters
    void setName(string nameVal) {
        name = nameVal;
    }

    void setCgpa(float cgpaVal) {
        cgpa = cgpaVal;
    }

    //getter
    string getName() {
        return name;
    }

    float getCgpa() {
        return cgpa;
    }
};

int main() {
    Student s1; // object -> properties of Student class comes into the s1 object
    s1.setName("Swapnil");
    s1.setCgpa(7.2);

    cout << s1.getName() << endl;
    cout << s1.getCgpa() << endl;

    s1.setName("Vaibhav"); // reseting name
    cout << s1.getName() << endl;

}