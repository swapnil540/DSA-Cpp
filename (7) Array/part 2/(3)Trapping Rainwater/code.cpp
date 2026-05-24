#include<iostream>
#include<climits>
using namespace std;

int trappedRainWater(int *heights, int n) { // O(n)

    // calculating leftMax bar for each bar
    int leftMax[20000];
    leftMax[0] = heights[0];
    for(int i=1; i<n; i++) { 
        leftMax[i] = max(leftMax[i-1], heights[i-1]);

    }

 
    // calculating rightMax bar for each bar
    int rightMax[20000];
    rightMax[n-1] = heights[n-1];
    for(int i=n-2; i>=0; i--) {
        rightMax[i] = max(rightMax[i+1], heights[i+1]);

    }


    int trappedWater = 0;

    for(int i=0; i<n; i++) {
        // calculating trapped water for each bar by taking min of rightMax and leftMax and substracting bar height from min of rightMax and leftMax to get current trapped water
        int currWater = min(rightMax[i], leftMax[i]) - heights[i];

        // adding current trapped water into trapped water
       
         if(currWater > 0) { // to avoid adding -ve currwater
            trappedWater += currWater;
         }
    }

    return trappedWater;   

    
}

int main() {
    int heights[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(heights) / sizeof(int);

   cout << trappedRainWater(heights, n); 
}