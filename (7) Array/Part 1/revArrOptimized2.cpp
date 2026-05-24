#include<iostream>
using namespace std;

void printArr(int arr[], int n) {

    // printing reverse arr
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

int revArr(int arr[], int n) {

    int start = 0;
    int end = n-1;

    while(start < end) {
        // swap
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printArr(arr, n);
    
}

int main() {
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);

    revArr(arr, n);
}