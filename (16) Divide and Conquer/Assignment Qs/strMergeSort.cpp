#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printStrArr(vector<string> &strArr) {
    for(string str: strArr) {
        cout << str << " ";
    }
    cout << endl;
}

void merge(vector<string> &strArr, int si, int ei, int mid) {
    int i = si;
    int j = mid + 1;
    int k = 0;
    vector<string> temp; 

    while(i <= mid && j <= ei) {
        if(strArr[i][k] < strArr[j][k]) {
            temp.push_back(strArr[i++]);

        }
        else if(strArr[i][k] == strArr[j][k]) {
            k++;
        } else {
            temp.push_back(strArr[j++]);
        }
    }

    while(i <= mid) {
        temp.push_back(strArr[i++]);
    }

    while(j <= ei) {
        temp.push_back(strArr[j++]);
    }

    for(int idx=si, x=0; idx<=ei; idx++) {
        strArr[idx] = temp[x++];
    }
    

}

void mergeSort(vector<string> &strArr, int si, int ei) {
    if(si >= ei) {
        return;
    }

    int mid = (si + ei) / 2;
    
    mergeSort(strArr, si, mid); // left half
    mergeSort(strArr, mid+1, ei); // right half

    merge(strArr, si, ei, mid);
}

int main() {
    vector<string> strArr = {"sunny", "earth", "mars", "mercury","met", "sun"};
    int n = 6;
    mergeSort(strArr, 0, n-1);
    printStrArr(strArr);

}