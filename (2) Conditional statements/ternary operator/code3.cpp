#include<iostream>
using namespace std;

int main() {
    int largest;
    int a = 5, b =8;

    
    // largest of 2 numbers using ternary operator
    largest = a > b ? a : b;
    cout <<"largest = "<<largest<<endl;


    // Odd or even
    int num = 15;

    num % 2 == 0 ? cout <<"Even" : cout <<"Odd";
}