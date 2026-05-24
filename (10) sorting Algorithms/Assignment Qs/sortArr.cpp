#include<iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}


void bubbleSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] < arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    print(arr, n);
}


void selectionSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int minIdx = i;
        for(int j=i+1; j<n; j++) {
            if(arr[minIdx] < arr[j]) {
                minIdx = j;
            }
        }

        swap(arr[minIdx], arr[i]);
    }

    print(arr, n);
}


void insertionSort(int arr[], int n) {
    for(int i=1; i<n; i++) {
        int curr = arr[i];
        int prevIdx = i-1;
        while(prevIdx >= 0 && arr[prevIdx] < curr) {
            swap(arr[prevIdx], arr[prevIdx + 1]);
            prevIdx--;
        }
    }

    print(arr, n);
}




int main() {
    int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n = sizeof(arr) / sizeof(int);

    //bubble
    // bubbleSort(arr, n);

    //selection
    // selectionSort(arr, n);

    // insertion
    insertionSort(arr, n);

    

}