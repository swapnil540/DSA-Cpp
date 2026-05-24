#include<iostream>
#include<climits>
using namespace std;

void maxProfit(int *prices, int n) { //  O(n)
    int bestBuy[100000]; // intializing with 100000 according to constraint on leetcode
    bestBuy[0] = INT_MAX;

    for(int i=1; i<n; i++)  {
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]);

    }

    int maxProfit = 0;

    for(int i=0; i<n; i++) {

        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);

    }

    cout << "maximum Profit = " << maxProfit << endl;

}

int main() {
    int prices[] = {7, 1, 5, 3, 2, 1};
    int n = sizeof(prices) / sizeof(int);

    maxProfit(prices, n);


}