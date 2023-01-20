
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