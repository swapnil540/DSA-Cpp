#include<iostream>
using namespace std;

void printArr(int nums[], int n) { // nums is the pointer (starting idx address of arr) not the actual array
    // int n = sizeof(nums) / sizeof(int) ; // can't calculated here because pointer is pass not the full arr
    cout << sizeof(nums) << endl; // 4 size of integer pointer
    for(int i=0; i<n; i++) {
        cout << nums[i] << " ";
    }
}


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int) ;

    printArr(arr, n); // arr is passed by reference , starting idx address is passed

}