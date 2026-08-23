#include<iostream>
#include<vector>
using namespace std;

void printArr(vector<int> arr) {
    for(int i=0; i<arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

}

void changeArr(vector<int> &arr, int si, int n) {
    if(si >= n) {
        printArr(arr); // 1 2 3 4 5 
        return;
    }

    arr.push_back(si + 1);

    changeArr(arr, si+1, n); // recursive call
    arr[si] -= 2;
}



int main() {
    vector<int> arr;
    int n = 5;

    changeArr(arr, 0, n); 

    printArr(arr); // -1 0 1 2 3

}