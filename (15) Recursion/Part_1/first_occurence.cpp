#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int> &nums, int target, int i) {
    if(i == nums.size()) { //work
        return -1; // target not found
    }

    if(nums[i] == target) {
        return i;
    }

    return firstOccurence(nums, target, i+1); // each inner fnx call
}

int main() {
    vector<int> nums = {1, 2, 4, 3, 3, 5, 6 , 9, 9, 8};
    cout << firstOccurence(nums, 9, 0) << endl; // 7
}