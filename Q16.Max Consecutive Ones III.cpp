// class Solution {
//     public:
//         int longestOnes(vector<int>& nums, int k) {
//             int j = 0;
//             int i = 0;
//             int n = nums.size();
//             int sum = 0;
//             int maxi = -1;
//             while (j < n) {
//                 sum += nums[j];
//                 if ((j - i + 1) - sum < k) {
//                     maxi = max(maxi, j - i + 1);
//                     j++;
//                 } else if ((j - i + 1) - sum == k) {
//                     maxi = max(maxi, j - i + 1);
//                     j++;
//                 } else {
//                     while ((j - i + 1) - sum > k) {
//                         sum -= nums[i];
//                         i++;
//                     }
//                     maxi = max(maxi, j - i + 1);
//                 }
//             }
//             return maxi;
                
//         }
//     };
    