#include<iostream>
using namespace std;

class A {
    string secret = "secret data"; // private member of class A
    friend class B;

};

class B { // becoms a friend of class A , can access private and protected members of class A, not vice versa
    public:
    void showSecret(A &obj) {
        cout << obj.secret << endl; // Accessing priavte member of class A
    }
};

int main() {
    A a1;
    B b1;
    b1.showSecret(a1);
}