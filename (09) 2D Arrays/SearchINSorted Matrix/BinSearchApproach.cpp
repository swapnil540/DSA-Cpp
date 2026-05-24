// using binary search
#include<iostream>
using namespace std;

int searchInSortedMat(int mat[][4], int n, int m, int key) {
    

    for(int i=0; i<n; i++) { // O(n * logm)
        int start = 0;
        int end = m-1;

        while(start <= end) {
            int mid = (start+end) / 2;
            
            if(mat[i][mid] == key) {
                cout << i << " " << mid;
                return 0;
            }
            else if(key > mat[i][mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    }

    cout << "-1";
}

int main() {
    int mat[4][4] = { {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50}};

    searchInSortedMat(mat, 4, 4, 33); // 3,1

}