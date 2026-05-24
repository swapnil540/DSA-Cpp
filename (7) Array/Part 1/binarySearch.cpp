#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {

    int st = 0;
    int end = n-1;

    while(st <= end) {
       int mid = (st + end) / 2;

       if(arr[mid] == key) { // key found
        return mid;
       }
       else if(key > arr[mid]) { //2nd half
        st = mid + 1;
       }
       else {   // 1st half
        end = mid - 1;
       }

    }

    return -1; //  if no key exists in the array
}


int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);

   cout << binarySearch(arr, n, 12);
}