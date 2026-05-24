#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 5};
    cout << vec.size() << endl;
    vector<int> vec2(10, -1);

    for(int num: vec2) {
        cout << num << " ";
    }

    

}