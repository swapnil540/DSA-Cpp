#include<iostream>
using namespace std;

bool containsDuplicate(int *arr, int n) { // O(n^2)
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n-1; j++) {
            if(arr[i] == arr[j]) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int arr[] = {1,1,1,3,3,4,3,2,4,2};
    int n= sizeof(arr) / sizeof(int);

    cout << containsDuplicate(arr, n);
}