#include<iostream>
using namespace std;

int main() {
   int arr[3][4];
   int n = 3, m = 4;

   // input 2d array
   for(int i=0; i<n; i++) { // row times
    for(int j=0; j<m; j++) { // column times
        cout << "Enter arr[" << i << "][" << j << "] : ";
        cin >> arr[i][j];
    }
   }


   // output 2d array
   for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
        // cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << " ";
        cout << arr[i][j] << " ";
    }

    cout << endl;
   }


    
                            



}