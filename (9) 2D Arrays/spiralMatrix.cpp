#include<iostream>
using namespace std;

void spiralMatrix(int matrix[][4], int n, int m) {
    int srow = 0, scol = 0;
    int erow = n-1, ecol = m-1;

    while(srow <= erow && scol <= ecol) {
        //top boundry
        for(int j=scol; j<=ecol; j++) { // srow is common
            cout << matrix[srow][j] << " ";

        }

        //right boundry
        for(int i=srow+1; i<=erow; i++) { // ecol is common
            cout << matrix[i][ecol] << " ";
        }

        //bottom boundry
        for(int j=ecol-1; j>=scol; j--) { // erow is common
            if(srow == erow) { // corner case1-> when matrix is odd at some point (top boundry == bottom boundry), do not print horizontal middle layer again because top boundry loop has already printed it.
                break;
            }
            cout << matrix[erow][j] << " ";
        }

        //left boundry
        for(int i=erow-1; i>=srow+1; i--) { // scol  is commom
            if(scol == ecol) { // corner case2-> when matrix is odd at some point (right boundry == left boundry), do not print vertical middle layer again because right boundry loop has already printed it.
                break;
            }
            cout << matrix[i][scol] << " ";
        }

        srow++; scol++;
        erow--; ecol--; 
    }


}

int main() {
    int matrix[4][4] = { {1, 2, 3, 4},
                         {5, 6, 7, 8},
                         {9, 10, 11, 12},
                         {13, 14, 15, 16}};

    int n = 4, m = 4;

    spiralMatrix(matrix, n, m);
} 