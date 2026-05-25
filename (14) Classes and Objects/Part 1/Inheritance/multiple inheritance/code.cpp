#include<iostream>
using namespace std;

class Teacher { // Base class1
    public:
    int salary;
    string subject;


};

class Student { // Base class2
    public:
    int rollNo;
    float cgpa;
};

class TA : public Teacher, public Student { // Derived class
    public:
    string name;
   
};

int main() {
    TA ta1;
    ta1.name = "Swapnil";
    ta1.cgpa = 7.5;
    ta1.rollNo = 101;
    ta1.salary = 5000;
    ta1.subject = "DBMS";


    cout << ta1.name <<endl;
    cout << ta1.rollNo <<endl;
    cout << ta1.cgpa <<endl;
    cout << ta1.subject <<endl;
    cout << ta1.salary <<endl;
}