class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int co = 0;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat.size(); j++) {
                if (i == j) {
                    cout << mat[i][j] << endl;
                    co += mat[i][j];
                }
            }
        }
        int len = mat.size();

        if (len == 1) {
            return co;
        }

        for (int i = 0; i < mat.size(); i++) {
            co += mat[i][len - 1 - i];
            cout << mat[i][len - 1 - i] << endl;

        }

        if ((len) % 2 != 0) {
            co -= mat[len / 2][len / 2];

        }




        return co;

    }
};