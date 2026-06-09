#include<iostream>
#include<vector>
using namespace std;

int lastOccurence(vector<int> &nums, int target, int i) {
    if(i == -1) { //Base case
        return -1; // target not found
    }

    if(nums[i] == target) { // target
        return i;
    }

    return lastOccurence(nums, target, i-1); // each inner fnx call -> checking from end to start for  last occurence
}

int main() {
    vector<int> nums = {1, 2, 4, 3, 3, 5, 6 , 9, 9, 8};
    cout << lastOccurence(nums, 1, nums.size()-1) << endl; // 0
}