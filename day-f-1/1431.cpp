#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        vector<bool> vt;
        int max = 0;
        for (int i : candies) {
            if (i > max) {
                max = i;
            }
        }
        for (int i : candies) {
            if (i + extraCandies >= max) {
                vt.push_back(true);
            }
            else {
                vt.push_back(false);

            }
        }

        return vt;

    }
};

int main() {

}