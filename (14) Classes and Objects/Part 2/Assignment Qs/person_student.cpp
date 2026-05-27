#include<iostream>
using namespace std;

class Person {
    public:
    string name;
    int age;

    Person(string nm, int ag) {
        name = nm;
        age = ag;
    }

};

class Student : public Person {
    public:
    string studentId;
    Student(string name, int age, string id) : Person(name, age) {
        // calling parent class parameterized  constructor from child class by passing the parameters in constructor to initialise parent class memebrs for child class
        studentId = id;

    } 

    void displayStudentInfo() {
        cout << "name : " << this->name << endl;
        cout << "age : " << this->age << endl;
        cout << "studentID : " << this->studentId << endl;
    }
};

int main() {
    Student student("Alice", 20, "S12345");
    student.displayStudentInfo();
}