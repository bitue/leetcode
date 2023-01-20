#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {

    int buy = 0;
    int sell = 0;
    int s = 0;
    int profit = 0;
    bool flag = false;
    for (int i = 0; i < prices.size(); i++) {
        if (i == 0 || flag) {
            buy = prices[i];
            sell = prices[i];
            profit = max(profit, buy - sell);
            flag = false;

            //cout << buy << " " << sell << " " << profit << endl;
        }
        else {
            buy = min(buy, prices[i]);
            sell = prices[i];
            profit = max(profit, sell - buy);
            //cout << buy << " " << sell << " " << profit << endl;
            if (profit > 0) {
                s += profit;
                flag = true;
            }



        }
    }

    return s;


}


int main() {

}