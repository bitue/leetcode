#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {

    int len = prices.size();
    int buy, sell;
    int profit = 0;
    int all = 0;

    bool flag = false;

    for (int i = 0; i < len; i++) {
        if (i == 0 || flag) {
            sell = prices[i];
            buy = prices[i];
            profit = 0;
            flag = false;

        }

        buy = min(buy, prices[i]);
        sell = prices[i];
        profit = max(profit, sell - buy);
        if (profit > 0) {
            all += profit;
            flag = true;

        }


    }

    return all;


}

int main() {

    vector<int> vt = { 7,1,5,3,6,4 };
    int res = maxProfit(vt);
    cout << res << endl;

}