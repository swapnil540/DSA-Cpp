#include<iostream>
#include<climits>
using namespace std;

int maxSubArraySum(int *arr, int n) { // O(n)

    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++) {

        currSum += arr[i];
        maxSum = max(currSum, maxSum);

        if(currSum < 0) {
            currSum = 0;
        }

    }

    return maxSum;
}

int main() {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

   cout << maxSubArraySum(arr, n);
}