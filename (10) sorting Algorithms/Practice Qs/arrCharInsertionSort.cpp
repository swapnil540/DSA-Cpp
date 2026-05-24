#include<iostream>
using namespace std;

void print(char arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

void insertionSortDescend(char arr[], int n) {
    for(int i=1; i<n; i++) {
        char curr = arr[i];
        int prevIdx = i-1;
        while(prevIdx >= 0 && arr[prevIdx] < curr) { // Descending order
            swap(arr[prevIdx], arr[prevIdx + 1]);
            prevIdx--;

        }
    }

    print(arr, n);
}

void insertionSortAescend(char arr[], int n) {
    for(int i=1; i<n; i++) {
        char curr = arr[i];
        int prevIdx = i-1;
        while(prevIdx >= 0 && arr[prevIdx] > curr) { // Aescending order
            swap(arr[prevIdx], arr[prevIdx + 1]);
            prevIdx--;

        }
    }

    print(arr, n);
}

int main() {
    char arr[] = {'f', 'b', 'a', 'e', 'c', 'd'};
    int n = sizeof(arr);

    insertionSortDescend(arr, n);
    cout << endl;
    insertionSortAescend(arr, n);
}