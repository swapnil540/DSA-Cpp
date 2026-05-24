#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> vec, int target) { // O(n^2)
    vector<int> result;

    for(int i=0; i<vec.size(); i++) {
        for(int j=i+1; j<vec.size(); j++) {
            int sum = vec[i] + vec[j];

            if(sum == target) {
                result.push_back(i);
                result.push_back(j);
                
                return result;

            }
        }
    }
}


int main() {
    vector<int> vec = {2, 7, 11, 15};
    vector<int> res = pairSum(vec, 22); // 1 3

    for(int idx: res) {
        cout << idx << " ";
    }
}
