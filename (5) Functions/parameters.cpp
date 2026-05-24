#include<iostream>
using namespace std;
                        // only second parameter can be default
int sum(int a, int b) { // a and b are parameters 
    int add = a + b;
    return add;
}

int main() {
   int s = sum(8, 2); // 2, 4 are arguments because they are fixed
   cout << "sum = "<< s;
}