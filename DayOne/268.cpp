#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int co = 0;

    sort(nums.begin(), nums.end());
    for (int i : nums) {
        if (i == co) {
            co++;
        }
        return co;

    }
    return -1;


}


// int missingNumber(vector<int>& nums) {
//     int max_value = 0;
//     for (int i : nums) {
//         if (i > max_value) {
//             max_value = i;
//         }
//     }

//     int curr[max_value] = { 0 };
//     for (int i : nums) {
//         curr[i] ++;
//     }

//     for (int i = 0; i < max_value + 1; i++) {
//         if (curr[i] == 0) {
//             return i;
//         }

//     }
//     return 0;

// }

int main() {

    vector<int> vt = { 0, 2, 3 };
    int miss = missingNumber(vt);
    cout << miss << endl;

}