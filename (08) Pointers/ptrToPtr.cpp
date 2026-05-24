#include<iostream>
using namespace std;

int main() {

    int a = 10;
    int *ptr = &a;
    int **pptr = &ptr;

    cout << &ptr << " = " << pptr << endl;

    int *ptr2 = NULL;
    cout << ptr2 << endl; // 0
    cout << *ptr2 << endl; // segmentation fault  

}