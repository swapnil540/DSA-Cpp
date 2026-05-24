#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
     int lastIdx = digits.size() - 1;
        int count9 = 0;

        if(digits[lastIdx] < 9) {
            digits[lastIdx] += 1;
            return digits;
        }

        while(digits[lastIdx] == 9) {
            lastIdx--;
            digits.pop_back();
            count9++;
            
        }

        if(lastIdx == -1) {
            digits.push_back(1);
        } else {
            digits[lastIdx] += 1;
        }

        for(int i=0; i<count9; i++) {
            digits.push_back(0);
        }
        
        

        return digits;
}

int main() {
    vector<int> digits = {4, 9, 9};
    vector<int> result = plusOne(digits);

    for(int val: result) {
        cout << val;
    }


}