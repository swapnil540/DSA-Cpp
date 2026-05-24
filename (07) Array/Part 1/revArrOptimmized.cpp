#include<iostream>
using namespace std;

int revArr(int arr[], int n) {

    for(int i=0; i<n/2; i++) { // iteration on half array
        int temp = arr[i];     // storing starting index val to temp
        arr[i] = arr[n-i-1]; // assigning last val to respective starting idx 
        arr[n-i-1] = temp; // assigning start idx val to respective last idx
    }

    // printing reverse arr
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    
}

int main() {
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);

    revArr(arr, n);
}