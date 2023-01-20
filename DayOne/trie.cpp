#include<bits/stdc++.h>
using namespace std;

int subarraysDivByK(vector<int>& nums, int k) {
    int len = nums.size();
    int sum, counter = 0;
    for (int i = 0; i < len; i++) {
        sum = nums[i];
        for (int j = i; j < len; j++) {
            if (j != i) {
                sum += nums[j];
            }

            if (sum % k == 0) {
                counter++;
                //cout << "[" << i << "," << j << "]" << endl;
            }


        }

    }


    //cout << "counter is : " << counter << endl;
    return counter;
}


int main() {

    vector<int> vt = { 4,5,0,-2,-3,1 };
    int ans = subarraysDivByK(vt, 5);
    cout << ans << endl;


}