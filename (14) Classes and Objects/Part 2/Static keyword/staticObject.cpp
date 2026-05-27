#include<iostream>
using namespace std;

class Example {
    public:
    Example() {
        cout << "constructor\n";

    }

    ~Example() {
        cout << "destructor\n";
    }
};

int main() {
    int a = 0;
    if(a == 0) { // normal object
        Example eg1; // firstly constructor calls ,once object goes out of scope destructor call and then code ending
    }

    cout << "code ending1..\n\n";

    if(a == 0) { // static object
       static Example eg1; // firstly constructor calls , then code ends and then destructor will call means static object destroys just before the full ending of code
    }

    cout << "code ending2..\n";
}