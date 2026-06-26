#include<iostream>
#include<vector>
using namespace std;

int majorityElement(int arr[], int si, int n) { // O(nlogn) -> not optimized, moore's voting algo optimized O(n)
    int count = 0;
    int ans = arr[0];

    for(int i=0; i<n; i++) {

        if(ans == arr[i]) {
            count++;
        } else {
            ans = arr[i];
            count = 1;
        }

        if(count > n/2) {
            return ans;
        }

    }
    return ans;
}


void merge(int arr[], int si, int ei) {
    int mid = (si + ei) / 2;

    int i = si;
    int j = mid+1;
    vector<int> temp;

    while(i<=mid && j<=ei) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }

    while(i <= mid) {
        temp.push_back(arr[i++]);
    }

    while(j <= ei) {
        temp.push_back(arr[j++]);
    }

    for(int idx=si, x=0; idx<=ei; idx++) {
        arr[idx] = temp[x++];
    }
}


void mergeSort(int arr[], int si, int ei) {
    if(si >= ei) {
        return;
    }

    int mid = (si + ei) / 2;

    mergeSort(arr, si, mid); //left half
    mergeSort(arr, mid+1, ei); // right half

    merge(arr, si, ei);

}


int main() {
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int n = 7;
    mergeSort(arr, 0, n-1);

    cout << majorityElement(arr, 0, n) << endl; // 2


}