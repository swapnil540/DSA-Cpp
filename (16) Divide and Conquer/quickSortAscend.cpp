#include<iostream>
using namespace std;

void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// int partition(int arr[], int si, int ei) {
//     int i = si - 1 ; // gives space to smaller elements than pivot 
//     int pivot = arr[ei];

//     for(int j=si; j<ei; j++) { 
//         if(arr[j] <= pivot) { // pivot = arr[ei]
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }

//     // now left half of arr is sorted so nxt big element than left half will be pivot element
//     i++;
//     swap(arr[i], pivot);

//     return i; // return pivotIdx i.e. i -> position of pivot is not ei , now it is change to the correct position where pivot should be.
// }

// void quickSort(int arr[], int si, int ei) {
//     if(si >= ei) { // base case
//         return;
//     }

//     int pivotIdx = partition(arr, si, ei); // finding new idx of pivot and reallocating smaller elements than pivot to it's left 
   
//     quickSort(arr, si, pivotIdx-1); // left part recursive call
//     quickSort(arr, pivotIdx+1, ei); // right part recursive call
// }

int partition(int arr[], int si, int ei) { // avg case -> O(n * logn) , worst case -> O(n^2)
    int i = si - 1;
    int pivot = arr[ei];

    for(int j=si; j<ei; j++) {
        if(arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    i++;
    swap(arr[i], arr[ei]);

    return i;
}

void quickSort(int arr[], int si, int ei) {
    if(si >= ei) {
        return;
    }

    int pivotIdx = partition(arr, si, ei);

    quickSort(arr, si, pivotIdx-1); // left half
    quickSort(arr, pivotIdx+1, ei); // right half
}




int main() {
    int arr[6] = {6, 3, 7, 5, 2, 4};
    int n = 6;
    quickSort(arr, 0, n-1);
    printArr(arr, n);
}
