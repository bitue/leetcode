#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i, j;
    int co = 0;

    for (i, j = 0; i < m && j < n; ) {
        if (nums1[i] < nums2[j]) {
            nums1[co] = nums1[i];
            i++;
            co++;

        }
        else {
            nums1[co] = nums2[j];
            j++;
            co++;
        }

    }

    for (int w : nums1) {
        cout << w << endl;
    }









}

int main() {

    vector<int> vt = { 1,2,3,0,0,0 };
    vector<int> mt = { 2, 5, 6 };

    merge(vt, 3, mt, 3);


}