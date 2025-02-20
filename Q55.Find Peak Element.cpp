// Approach 1: Brute force
// class Solution
// {
// public:
//     int findPeakElement(vector<int> &nums)
//     {
//         int n = nums.size();
//         for (int i = 0; i < n; i++)
//         {
//             if ((i == 0 || nums[i - 1] < nums[i]) &&
//                 (i == n - 1 || nums[i] > nums[i + 1]))
//             {
//                 return i;
//             }
//         }

//         return n - 1;
//     }
// };

// Approach 2: Max Element Index
// class Solution
// {
// public:
//     int findPeakElement(vector<int> &nums)
//     {
//         int maxi = INT_MIN;
//         int idx = 0;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (maxi < nums[i])
//             {
//                 maxi = nums[i];
//                 idx = i;
//             }
//         }
//         return idx;
//     }
// };
