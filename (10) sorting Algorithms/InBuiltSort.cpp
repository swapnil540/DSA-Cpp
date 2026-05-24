#include<iostream>
#include <algorithm> // for sort() function
using namespace std;

void print(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int arr2[] = {10, 20, 50, 80, 100, 5};
    int n = sizeof(arr) / sizeof(int);
    int n2 = sizeof(arr2) / sizeof(int);
    // Ascending in built sort funciton
    sort(arr, arr+n);
    print(arr, n);

    cout << endl;
    
    //Descending in built sort function
    sort(arr2, arr2+n2, greater<int>());
    print(arr2, n2);
}