#include<iostream>
#include<vector>
using namespace std;

int binarySearch(int start, int end, int key, vector<int> nums) {
    int mid = (start + end) / 2;

    if(nums[mid] == key) { // Base case 1 -> If key found
        return mid;
    }

    if(start > end) { // Base case 2 -> If key not found
        return -1;
    }

    // work
    if(nums[mid] > key) { // key is in 1st half of arr
        end = mid - 1;
    } 
    else if(nums[mid] < key) { // key is in 2nd half of arr
        start = mid + 1;
    }

    // Recursive fnx call
    return binarySearch(start, end, key, nums);
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int key = 5;
    cout << binarySearch(0, nums.size()-1, key, nums) << endl; // 4
}