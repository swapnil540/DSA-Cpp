#include<iostream>
#include<algorithm>
using namespace std;

bool containsDuplicate(int arr[], int n) {
    sort(arr, arr+n);

    for(int i=0; i<n-1; i++) {
        if(arr[i] == arr[i+1]) {
            return true;
        }
    }

    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    cout << containsDuplicate(arr, n);
}