#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int buy = 0;
    int sell = 0;
    int s = 0;
    int profit = 0;
    for (int i = 0; i < prices.size(); i++) {
        if (i == 0) {
            buy = prices[i];
            sell = prices[i];
            profit = max(profit, buy - sell);

            //cout << buy << " " << sell << " " << profit << endl;
        }
        else {
            buy = min(buy, prices[i]);
            sell = prices[i];
            profit = max(profit, sell - buy);
            //cout << buy << " " << sell << " " << profit << endl;


        }
    }

    return profit;
}


int main() {
    vector<int> vt = { 7,6,4,3,1 };
    int res = maxProfit(vt);
    cout << res << endl;
    return 0;
}