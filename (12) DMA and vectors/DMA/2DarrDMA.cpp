#include<iostream>
using namespace std;


int main() {
    int row, cols;

    cout << "enter rows: ";
    cin >> row;
    cout << "enter cols: ";
    cin >> cols;

    int* *mat = new int*[row]; // arr of int pointers

    for(int i=0; i<row; i++) {
        mat[i] = new int[cols]; // each pointer points to int 1D arr
    }

    // data store
    int x = 1;
    for(int i=0; i<row; i++) {
        for(int j=0; j<cols; j++) {
            mat[i][j] = x;
            x++;
            cout << mat[i][j] << " "; //  *(*(mat + i) + j)
        }
        cout << endl;
    }

    cout << mat[2][2] << " = " << *(*(mat + 2) + 2) << endl;

}