#include<iostream>
#include<vector>
using namespace std;
// Divide step -> TC: O(logn)
// Conquer step -> TC: O(n)
// merge sort -> TC O(nlogn)


void merge(int arr[], int si, int ei, int mid) { // we can either pass mid or calculate using si and ei values
    vector<int> temp;
    int i = si; // left start
    int j = mid+1; // right start

    while(i <= mid && j <= ei) { // copying smaller value into temp
        if(arr[i] < arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }
    // at some point either left part or right part idx reaches end , in that case copy the remaining element of either left or right part into temp 
    // any one of the below loop will run not both 
    while(i <= mid) { // for copying left half rem elements into temp at last
        temp.push_back(arr[i++]);
    }

    while(j <= ei) { // for copying right half rem elements into temp at last
        temp.push_back(arr[j++]);
    }

    // copy temp to original array
    for(int idx=si, x=0; idx<=ei; idx++) {
       arr[idx] = temp[x++];
    }


}

void mergeSort(int arr[], int si, int ei) {
    if(si >= ei) {
        return;
    }
    int mid = si + (ei - si) / 2;
    // Divide step
    mergeSort(arr, si, mid); // left half
    mergeSort(arr, mid+1, ei); // right half

    //  Conquer step
    merge(arr, si, ei, mid);

}

void printArr(int arr[], int ei) {
    for(int i=0; i<=ei; i++) {
        cout << arr[i] << " ";
    }
   cout << endl;

}

int main() {
    int arr[6] = {5, 8, 4, 2, 7, 1};
    int n = 6;
    mergeSort(arr, 0, n-1);
    printArr(arr, n-1);
}