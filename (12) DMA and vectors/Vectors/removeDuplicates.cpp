#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int> &nums) {
    int n = nums.size();
    int k = n; // considered  uniqe elements 



    return k;
}

int main() {

    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    int k = removeDuplicates(nums);

    for(int i=0; i<k ; i++) {
        cout << nums[i] << " ";
    }

}
