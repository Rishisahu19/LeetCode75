// Approach: Recursion
// class Solution
// {
// public:
//     int solve(int i, vector<int> &v)
//     {
//         if (i >= v.size())
//         {
//             return 0;
//         }
//         int include = 0;
//         int exclude = 0;
//         include = v[i] + solve(i + 2, v);
//         exclude = 0 + solve(i + 1, v);
//         return max(include, exclude);
//     }
//     int rob(vector<int> &nums) { return solve(0, nums); }
// };

// Approach: Recursion + Memoization
// class Solution
// {
// public:
//     int solve(int i, vector<int> &v, vector<int> &DP)
//     {
//         if (i >= v.size())
//         {
//             return 0;
//         }
//         if (DP[i] != -1)
//         {
//             return DP[i];
//         }
//         int include = 0;
//         int exclude = 0;
//         include = v[i] + solve(i + 2, v, DP);
//         exclude = 0 + solve(i + 1, v, DP);
//         return DP[i] = max(include, exclude);
//     }
//     int rob(vector<int> &nums)
//     {
//         int n = nums.size();
//         vector<int> DP(n + 1, -1);
//         return solve(0, nums, DP);
//     }
// };