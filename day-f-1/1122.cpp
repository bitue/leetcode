class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> mp;
        map<int, int> mp2;

        for (int i : arr1) {
            mp[i]++;
        }
        // for(auto i : mp){

        //     cout<<i.first<<" "<<i.second<<endl;

        // }
        vector<int> vt;
        for (int i : arr2) {
            int curr = mp[i];
            while (curr--) {
                vt.push_back(i);
            }
            mp[i] = 0;
        }
        sort(arr1.begin(), arr1.end());
        for (int i : arr2) {
            mp[i]++;

        }

        for (int i : arr2) {
            mp2[i]++;
        }
        for (int i : arr1) {
            if (mp[i] && !mp2[i]) {
                vt.push_back(i);

            }
        }



        return  vt;



    }
};



