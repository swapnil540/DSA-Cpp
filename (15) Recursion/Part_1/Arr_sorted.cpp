#include<iostream>
using namespace std;

bool isSorted(int arr[], int n, int i) {
    if(i == n-1) { // Base case
        return true;
    }

    if(arr[i] > arr[i+1]) { // Work
        return false;
    }

    return isSorted(arr, n, i+1);
}

int main() {
    int arr1[] = {1, 2, 3, 3, 5}; // sorted : 1
    int arr2[] = {1, 2, 4, 3, 5}; // unsorted : 0
    cout << isSorted(arr1, 5, 0) << endl; // true
    cout << isSorted(arr2, 5, 0) << endl; // false
}

