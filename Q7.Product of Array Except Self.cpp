// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int mul = 1;
//         int n = nums.size();
//         vector<int> v(n, 0);
//         int ZeroCnt = 0;
//         for (int i = 0; i < n; i++) {
//             if (nums[i] != 0) {
//                 mul = mul * nums[i];
//             } else {
//                 ZeroCnt += 1;
//             }
//         }
//         for (int i = 0; i < n; i++) {
//             if (ZeroCnt == 0) {
//                 v[i] = (mul / nums[i]);
//             }
//             if (ZeroCnt == 1) {
//                 if (nums[i] == 0) {
//                     v[i] = mul;
//                 } else {
//                     v[i] = 0;
//                 }
//             }
//             if (ZeroCnt > 1) {
//                 v[i] = 0;
//             }
//         }

//         return v;
//     }
// };