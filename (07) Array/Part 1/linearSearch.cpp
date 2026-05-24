// linear search -> can be applied on sorted or unsorted arrays

#include<iostream>
using namespace std;

int linearSearch(int *arr, int n, int key) {
    
    for(int i=0; i<n; i++) {
        if(arr[i] == key) {
    
            return i;
        }
    }

    return -1; // if key doesn't exists in arr then return -1
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16}; // sorted arr
    int n = sizeof(arr) / sizeof(int);


    int idx = linearSearch(arr, n , 10); // starting idx address of arr is passed

    cout << idx << endl;


}