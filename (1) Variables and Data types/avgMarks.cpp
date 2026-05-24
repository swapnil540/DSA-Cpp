#include<iostream>
using namespace std;

int main() {

    int sub_1 ,sub_2 ,sub_3;
    int avg;

    cout<<"Enter marks of following\n";
    
    cout<<"Sub_1: ";
    cin>>sub_1;

    cout<<"Sub_2: ";
    cin>>sub_2;

    cout<<"Sub_3: ";
    cin>>sub_3;

    avg = (sub_1 + sub_2 + sub_3)/ 3 ;
    cout<<"Avg = "<<avg;

}