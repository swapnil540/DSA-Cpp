#include<iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

void insertionSort(int arr[], int n) {
    for(int i=1; i<n; i++) {
        int curr = arr[i];
        int prevIdx = i-1;
        while(prevIdx >= 0 && arr[prevIdx] > curr) {
            swap(arr[prevIdx], arr[prevIdx+1]);
            prevIdx--;
        }
    }

    print(arr, n);
}

int main() {
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);

    insertionSort(arr, n);
    cout << endl;
}