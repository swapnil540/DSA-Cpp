// Print the number of all 7’s that are in the 2d array.

#include<iostream>
using namespace std;

int count7s(int mat[][3], int n, int m) {
    int freq = 0;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(mat[i][j] == 7) {
                freq++;
            }
        }
    }

    return freq;
}

int main() {
    int mat[2][3] = {{4, 7, 8}, {8, 8, 7}};

    cout << count7s(mat, 2, 3);

}