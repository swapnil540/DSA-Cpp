#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector <vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for(int i=0; i<matrix.size(); i++) { //row
        for(int j=0; j<matrix[i].size(); j++) { // col
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;


    vector <vector<int>> matrix2 = {{1, 2, 3}, {4, 5}, {6}}; // not allowed in 2D array

    for(int i=0; i<matrix2.size(); i++) { //row
        for(int j=0; j<matrix2[i].size(); j++) { // col
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
}