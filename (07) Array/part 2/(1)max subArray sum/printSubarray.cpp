#include<iostream>
using namespace std;

void printSubArr(int *arr, int n) {

    for(int start=0; start < n; start++) { // finding index of starting and ending point
        for(int end=start; end < n; end++) {
            // cout << "(" << start << "," << end << ") ";

            // Printing subarrays from start to end idx
            for(int i=start; i<=end; i++) {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    printSubArr(arr, n);
}