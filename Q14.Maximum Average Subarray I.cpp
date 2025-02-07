// Approach 1: Brute Force
// class Solution {
//     public:
//         double findMaxAverage(vector<int>& nums, int k) {
//             int n = nums.size();
//             if (k == 1) {
//                 return *max_element(nums.begin(), nums.end());
//             }
//             double Avg = 0;
//             double sum = 0;
//             double maxi = INT_MIN;
//             for (int i = 0; i < n - k + 1; i++) {
//                 sum = 0;
//                 for (int j = i; j < i + k; j++) {
//                     sum += nums[j];
//                 }
//                 Avg = (sum / k);
//                 maxi = max(maxi, Avg);
//             }
//             return maxi;
//         }
//     };
////////////////////////////////////////////////
// Approach 2: Using Sliding Window
// class Solution {
//     public:
//         double findMaxAverage(vector<int>& nums, int k) {
//             int n = nums.size();
//             int i = 0;
//             int j = 0;
//             double sum = 0;
//             double Avg = 0;
//             double maxi = INT_MIN;
//             while (j < n) {
//                 if (j - i + 1 < k) {
//                     sum += nums[j];
//                     j++;
//                 } else if (j - i + 1 == k) {
//                     sum += nums[j];
//                     Avg = sum / k;
//                     maxi = max(maxi, Avg);
//                     sum -= nums[i];
//                     i++;
//                     j++;
//                 }
//             }
//             return maxi;
//         }
//     };