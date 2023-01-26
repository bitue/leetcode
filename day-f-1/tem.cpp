#include<bits/stdc++.h>
using namespace std;


vector<int> decompressRLElist(vector<int>& nums) {
    vector<int> vt;
    for (int i = 0; i < nums.size(); i += 2) {
        while (nums[i]--) {
            vt.push_back(nums[i + 1]);
        }

    }
    for (int i : vt) {
        cout << i << " ";
    }

    return vt;

}


int main() {

    vector<int> vt = { 1,2,3,4 };
    decompressRLElist(vt);


}