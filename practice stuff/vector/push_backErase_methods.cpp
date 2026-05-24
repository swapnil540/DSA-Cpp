#include<iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    nums.push_back(nums[1]);
    nums.erase(nums.begin() + 1);

    
    
}

