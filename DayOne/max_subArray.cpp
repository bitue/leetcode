#include<bits/stdc++.h>
using namespace std;

int find_max(int a, int b, int c) {
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}

int maxSubArray(vector<int>& nums) {
    int prev_max = nums[0], new_sum = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        int prev = new_sum;
        new_sum += nums[i];
        if (nums[i] > new_sum) {
            new_sum = nums[i];
        }

        prev_max = find_max(prev_max, nums[i], new_sum);
    }
    return prev_max;
}

int main()
{
    vector<int> arr = { -2,1,-3,4,-1,2,1,-5,4 };

    int ans = maxSubArray(arr);
    cout << ans;

    return 0;
}