#include<iostream>
using namespace std;

void counter() { // static variable in a fnx created and initialiased once for the lifetime of the progaram
    static int count = 0; // This line will execute only once , whenever this fnx will call changes occurs in the created static variable
    count++;
    cout << "count : " << count << endl;
}

class Example { // static variable in a class created and initialised once and shared among all the objects of a class
    public:
    //static const int x = 0; // make it const for intialising in class
    static int x; // if we don't want to make it static just declare it in class and initialise out of the class using scope operator
};

int Example :: x = 0; // initialise out of the class without making const

int main() {
    counter(); // 1
    counter(); // 2 
    counter(); // 3

    Example eg1;
    Example eg2;
    Example eg3;

    cout << eg1.x++ << endl; // 0
    cout << eg2.x++ << endl; // 1
    cout << eg3.x++ << endl; // 2
    cout << eg1.x ; // 3

}
