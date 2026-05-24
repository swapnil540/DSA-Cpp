#include<iostream>
using namespace std;

int diagonalSum(int mat[][5], int n) {
    
    int primDiagSum = 0, secDiagSum = 0;
     
    for(int i=0; i<n; i++) {
        //primary diagonal element
        primDiagSum += mat[i][i];

        if(i == n-i-1){ // condition for common element
            continue;
        }
        //secondry diagonal element
        secDiagSum += mat[i][n-i-1];
    }

    int diagSum = primDiagSum + secDiagSum;

    return diagSum; 
}

int main() {
    int mat[5][5] = { {1, 2, 3, 4, 5},
                    {6, 7, 8, 9, 10},
                    {11, 12, 13, 14, 15},
                    {16, 17, 18, 19, 20},
                    {21, 22, 23, 24, 25} };

    cout << diagonalSum(mat, 5);

    
}