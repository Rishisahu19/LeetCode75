// class Solution {
// public:
//     bool increasingTriplet(vector<int>& nums) {
//         int n = nums.size();
//         int first = INT_MAX;
//         int second = INT_MAX;
        
//         for (int i = 0; i < n; i++) {
//             if (first > nums[i]) {
//                 first = nums[i];
//             } else if (second > nums[i] && first < nums[i]) {
//                 second = nums[i];
//             } else {
//                 if (first < second && second < nums[i]) {
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };
