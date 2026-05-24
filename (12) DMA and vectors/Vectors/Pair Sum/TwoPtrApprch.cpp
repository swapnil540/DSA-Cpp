#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> vec, int target) { // O(n) -> linear
    int st = 0, end = vec.size() - 1;
    vector<int> result;

    while(st < end) {
        int currSum = vec[st] + vec[end];

        if(currSum == target) {
            result.push_back(st);
            result.push_back(end);
            return result;

        }
        else if(currSum > target) {
            end--;
        }
        else {
            st++;
        }
    }
}

int main() {
    vector<int> vec = {2, 7, 11, 15};

    vector<int> res = pairSum(vec, 26); // 2 3

    for(int idx: res) {
        cout << idx << " ";
    }

}