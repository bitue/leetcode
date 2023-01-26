class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int len = arr.size();
        vector<int> res;
        for (int i : arr) {

            if (i == 0) {
                res.push_back(0);
                res.push_back(0);

            }
            else {
                res.push_back(i);

            }


        }

        for (int i = 0; i < arr.size(); i++) {
            arr[i] = res[i];
        }

    }
};