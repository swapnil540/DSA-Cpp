#include<iostream>
#include<vector>
using namespace std;

void allOccurences(vector<int> nums, int key, int i) {
    if(nums.size() == i) { // Base case
        return;
    }

    // work
    if(nums[i] == key) {
        cout << i << " " ; // print idx of occurences of key in nums
    }

    // recursive fnx call
    allOccurences(nums, key, i+1);

}

int main() {
    vector<int> nums = {3, 2, 4, 5, 6, 2, 7, 2, 2};

    allOccurences(nums, 2, 0); // 1 5 7 8
}