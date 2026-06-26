#include<iostream>
using namespace std;

int SearchRotatedSortedArr(int arr[], int si, int ei, int target) { // O(logn) -> optimized qs
    if(si > ei) { // Base case
        return -1;
    }

    int mid = si + (ei-si) / 2;

    if(arr[mid] == target) {
        return mid;
    } 

    if(arr[si] <= arr[mid]) { // L1
        if(arr[si] <= target && target <= arr[mid] ) { // left half
            return SearchRotatedSortedArr(arr, si, mid-1, target);

        } 
        else { // right half
            return SearchRotatedSortedArr(arr,mid+1, ei, target);
        }
    }
    else { // L2
        if(arr[mid] <= target <= arr[ei]) { // right half
            return SearchRotatedSortedArr(arr, mid+1, ei, target);
        }
        else { // left half
            return SearchRotatedSortedArr(arr, si, mid-1, target);
        }
    }
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = 7;
    cout << SearchRotatedSortedArr(arr, 0, n-1, 0) << endl; // 4
}