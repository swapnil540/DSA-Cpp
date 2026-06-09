#include<iostream>
using namespace std;

int tilingProblem(int n) {

    if(n==0 || n==1) { // Base case
        return 1;
    }

    // work and recursive call
    //vertical placement
    int ans1 = tilingProblem(n-1);

    //Horizontal placement
    int ans2 = tilingProblem(n-2);

    return ans1 + ans2;
}

int  main() {
    int n = 5;
    cout << tilingProblem(n) << endl;
}