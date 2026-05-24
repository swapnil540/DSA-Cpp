#include<iostream>
#include <climits>
using namespace std;

int maxSubArraySum(int *arr, int n) { // O(n^2)

    int  maxSubSum = INT_MIN;

    for(int start=0; start < n; start++) { // finding index of starting and ending point
        int currSum = 0; //updating to 0 for nxt subArr sum
        
        for(int end=start; end < n; end++) {

            currSum += arr[end];
            
            maxSubSum = max(maxSubSum, currSum); // shrtkt for comparison
        }
        
    }

    return maxSubSum;
}

int main() {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    cout << maxSubArraySum(arr, n);
}