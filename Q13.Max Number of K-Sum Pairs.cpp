
// Approach 1: Using Two Pointer
// class Solution {
// public:
//     int maxOperations(vector<int>& nums, int k) {
//         sort(nums.begin(), nums.end());
//         int n = nums.size();
//         int i = 0;
//         int j = n - 1;
//         int cnt = 0;
//         while (i < j) {
//             if ((nums[i] + nums[j]) == k) {
//                 i += 1;
//                 j -= 1;
//                 cnt += 1;
//             } else if ((nums[i] + nums[j]) > k) {
//                 j -= 1;
//             } else {
//                 i += 1;
//             }
//         }
//         return cnt;
//     }
// };

////////////////////////////////////
// Approach 2: Using Hash Map

// class Solution {
// public:
//     int maxOperations(vector<int>& nums, int k) {
//         int n = nums.size();
//         int cnt = 0;
//         unordered_map<int, int> mp;
//         int x = 0;
//         for (int i = 0; i < n; i++) {
//             x = k - nums[i];
//             if (mp.find(x) != mp.end()) {
//                 cnt += 1;
//                 mp[x]--;
//                 if (mp[x] == 0) {
//                     mp.erase(x);
//                 }
//             } else {
//                 mp[nums[i]]++;
//             }
//         }
//         return cnt;
//     }
// };

//////////////////////////////////////////////
// Approach 3: Using Hash Map
// class Solution {
// public:
//     int maxOperations(vector<int>& nums, int k) {
//         int n = nums.size();
//         int cnt = 0;
//         unordered_map<int, int> mp;
//         int x = 0;
//         for (int i = 0; i < n; i++) {
//             x = k - nums[i];
//             if (mp[x] > 0) {
//                 cnt += 1;
//                 mp[x]--;
//             } else {
//                 mp[nums[i]]++;
//             }
//         }
//         return cnt;
//     }
// };