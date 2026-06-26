#include<iostream>
#include<vector>
using namespace std;

//TC: O(nlogn)       SC: O(n)

int merge(int arr[], int si, int ei, int mid) {
    int invCount = 0;
    int i = si, j = mid + 1;
    vector<int> temp;

    while(i<=mid && j<=ei) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else { // arr[i] > arr[j] -> count inversion cndn (where i < j)
            temp.push_back(arr[j++]);
            invCount += (mid-i+1); // counting inversions
        }
    }

    while(i<=mid) {
        temp.push_back(arr[i++]);
    }

    while(j<=ei) {
        temp.push_back(arr[j++]);
    }

    for(int idx=si, x=0; idx<=ei; idx++) {
        arr[idx] = temp[x++];
    }

    return invCount;
}


int meregeSort(int arr[], int si, int ei) {
    int invCount = 0;
    if(si < ei) { // using (=) can cause infinite call condition for last left half call MS(arr,0,0) 
        int mid = (si + ei) / 2;

        invCount += meregeSort(arr, si, mid); // left half
        invCount += meregeSort(arr, mid+1, ei); // right half

        invCount += merge(arr, si, ei, mid);
    }

    return invCount;

}

int getInversionCount(int arr[], int n) {
    return meregeSort(arr, 0, n-1);
}


int  main() {
    int arr[] = {6, 3, 7, 5, 2, 4};
    int n = 6;
    cout << getInversionCount(arr, n) << endl; // 10

}