class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int gco = 0;
        for (int i : nums) {
            int co = 0;
            while (i != 0) {
                i = i / 10;
                co++;
            }
            if (co % 2 == 0) {
                gco++;
            }
        }

        return gco;

    }
};