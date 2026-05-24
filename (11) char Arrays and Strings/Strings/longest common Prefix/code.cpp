#include<iostream>
#include<string>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string> strs) {
    int n = strs.size();
    int m = strs[0].size();

    string result;

        for(int i=0; i<m; i++) { // columns
            int j;
            for(j=0; j<n-1; j++) { // rows
                if(strs[j][i] == strs[j+1][i]) {
                    continue;
                } 
                else {
                    return result;
                }
            }
            result.push_back(strs[j][i]);   
        }

        return result;    
    

}

int main() {
    cout << longestCommonPrefix({"flower","flow","flight"});
}