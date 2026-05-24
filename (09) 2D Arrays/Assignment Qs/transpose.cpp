#include<iostream>
using namespace std;

void transposeMat(int mat[][3], int n, int m) {
    int tranMat[m][n];

    for(int i=0; i<n; i++) { // O(n*m)
        for(int j=0; j<m; j++) {
            tranMat[j][i] = mat[i][j];
        }
    }

    // printing  matrix
    cout << "MATRIX \n";
    for(int i=0; i<n; i++) { // O(n*m)
        for(int j=0; j<m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;



    // printing Transpose of matrix
    cout << "TRANSPOSE OF MATRIX \n";
    for(int j=0; j<m; j++) { // O(n*m)
        for(int i=0; i<n; i++) {
            cout << tranMat[j][i] << " ";
        }
        cout << endl;
    }
    
}

int main() {
    int mat[2][3] = { {3, 1, 2},
                       {4,5, 6} };

    transposeMat(mat, 2, 3);

    
}