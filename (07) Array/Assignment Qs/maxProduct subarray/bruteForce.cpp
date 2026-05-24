#include<iostream>
using namespace std;

int maxSubArrProduct(int *arr, int n) {

    int maxProd = 0;
    int currProd = 1;

    for(int i=0; i<n; i++) {
        currProd *= arr[i];
        maxProd = max(currProd, maxProd);

        if(currProd < 0) {
            currProd = 1;
        }
    }

    return maxProd;
}

int main() {
    int arr[] = {-2, 0, -1};
    int n = sizeof(arr) / sizeof(int);

    cout << maxSubArrProduct(arr, n);

}