#include<iostream>
using namespace std;

int main() {
    float pencilCost, penCost, eraserCost;

    cout<<"Enter cost of\n";

    cout<<"Pencil: ";
    cin>>pencilCost;

    cout<<"Pen: ";
    cin>>penCost;

    cout<<"Eraser: ";
    cin>>eraserCost;

    float totalCost = pencilCost + penCost +  eraserCost;

    cout<<"Total cost excluding GST: "<<totalCost;


    cout<<"Total cost including GST: "<<(totalCost + (totalCost * 0.18));



}