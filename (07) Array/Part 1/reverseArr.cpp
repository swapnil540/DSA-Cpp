#include<iostream>
using namespace std;

void printArr(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

void reverseArr(int arr[] , int n) {
    int revArr[n]; // extra space

    for(int i=0; i<n; i++) {
        revArr[i] = arr[n-i-1];
    }

    // copy revArr elements to original arr
    for(int i=0; i<n; i++) {
        arr[i] = revArr[i];

    }

    printArr(arr, n);
}

int main() {
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);

    reverseArr(arr, n);

}