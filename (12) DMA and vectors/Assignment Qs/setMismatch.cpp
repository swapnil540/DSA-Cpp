// leetcode 645
#include<iostream>
#include<vector>
using namespace std;

vector<int> findErrorNums(vector<int>& nums) { // O(n)
    vector<int> freq(nums.size()+1, 0);
    int repeating = 0, missing = 0;

    // tracking freq of each num in nums
    for(int num: nums) {
        freq[num]++;
    }

    //comparing freq of each num in nums with freq vector and finfing repeating and missing elem
    for(int i=1; i<freq.size(); i++) {
        if(freq[i] == 0) {
            missing = i;
        } else if(freq[i] > 1) {
            repeating = i;
        }
    }

    return {repeating, missing};
}

int main() {
    vector<int> nums = {8, 6, 4, 3, 7, 4, 1, 9, 10, 2};
    vector<int> result = findErrorNums(nums);

    for(int val: result) {
        cout << val << " ";
    }

}