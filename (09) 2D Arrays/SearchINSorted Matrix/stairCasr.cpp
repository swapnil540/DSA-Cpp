#include<iostream>
using namespace std;

bool searchInSortedMat(int mat[][4], int n, int m, int key) {
    int i = 0, j = m-1; // i = row , j = col
    // cell => 0, m-1
    int cell = mat[i][j];

    while(i < n && j >= 0) { // O(n + m)
        if(cell == key) { // cell == key => found
            cout << "found at cell (" << i << ", " << j << ")\n";
            return true;
        }
        else if(cell < key) { // cell < key => down row++
            i++;
            cell = mat[i][j];
        }
        else { // cell > key => left col--
            j--;
            cell = mat[i][j];
        }
    }
    cout << "key not found.\n";
    return false; //  key not exists
    
}

int main() {
    int mat[4][4] = { {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50}};

   cout << searchInSortedMat(mat, 4, 4, 45); 

}