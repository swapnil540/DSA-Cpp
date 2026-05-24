#include<iostream>
using namespace std;

int main() {
    float P, R, T;

    // input P R T
    cout<<"Enter Principal amount: ";
    cin>>P;

    cout<<"Enter interest rate: ";
    cin>>R;
  
    

    cout<<"Enter payback time in years: ";
    cin>>T;

    // calculate simple interest
    float SI = (P*R*T)/100;

    // Print SI
    cout<<"Simple interest : "<<SI;

}