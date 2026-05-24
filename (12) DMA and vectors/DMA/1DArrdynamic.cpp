#include<iostream>
using namespace std;

int *ptr; // global scope variable

void func() {
    int size;
    cin >> size;

    ptr = new int[size]; // Dynamic Memory allocation using new Keyword
                              // ptr points to the starting idx of contigous memory allocated in heap

    for(int i=0; i<size; i++) {
        ptr[i] = i+1; // *(ptr + i) = i+1
        cout << ptr[i] << " ";
    }

    cout << endl << ptr[2]; // prints value at *(ptr + 2) that is at ptr[2] = 3

}


int main() {
    func();
    cout << endl << ptr[2] ; // allocated memory is not deleted yet from heap , that's why values in that memory can be acces anywhere
    delete[] ptr; // allocated memory in heap deleted

    cout << ptr[0]; // gives grabage value

    
}