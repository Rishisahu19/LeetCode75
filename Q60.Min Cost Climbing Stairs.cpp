// // Recursion
// class Solution1
// {
//     int solve(int n, vector<int> cost)
//     {
//         if (n == 0)
//         {
//             return cost[0];
//         }
//         if (n == 1)
//         {
//             return cost[1];
//         }
//         int ans = cost[n] + min(solve(n - 1, cost), solve(n - 2, cost));
//         return ans;
//     }

// public:
//     int minCostClimbingStairs(vector<int> &cost)
//     {
//         int n = cost.size();
//         return min(solve(n - 1, cost), solve(n - 2, cost));
//     }
// };
// // Memoization (Top-Down)
// class Solution2
// {
//     int solve(int n, vector<int> &cost, vector<int> &dp)
//     {
//         if (n == 0)
//         {
//             return cost[0];
//         }
//         if (n == 1)
//         {
//             return cost[1];
//         }
//         if (dp[n] != -1)
//         {
//             return dp[n];
//         }
//         int ans = cost[n] + min(solve(n - 1, cost, dp), solve(n - 2, cost, dp));
//         dp[n] = ans;
//         return dp[n];
//     }

// public:
//     int minCostClimbingStairs(vector<int> &cost)
//     {
//         int n = cost.size();
//         vector<int> dp(n + 1, -1);
//         return min(solve(n - 1, cost, dp), solve(n - 2, cost, dp));
//     }
// };
// // Tabulation (Bottom-Up)
// class Solution3
// {
// public:
//     int minCostClimbingStairs(vector<int> &cost)
//     {
//         int n = cost.size();
//         vector<int> dp(n + 1, -1);
//         dp[0] = cost[0];
//         dp[1] = cost[1];
//         for (int i = 2; i < n; i++)
//         {
//             dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
//         }
//         return min(dp[n - 1], dp[n - 2]);
//     }
// };

// // Recursion  (from 0)
// class Solution4
// {
//     int solve(int i, int n, vector<int> cost)
//     {
//         if (i == n)
//         {
//             return 0;
//         }
//         if (i > n)
//         {
//             return 0;
//         }

//         int ans = cost[i] + min(solve(i + 1, n, cost), solve(i + 2, n, cost));
//         return ans;
//     }

// public:
//     int minCostClimbingStairs(vector<int> &cost)
//     {
//         int n = cost.size();
//         return min(solve(0, n, cost), solve(1, n, cost));
//     }
// };
// // Memo (from 0)
// class Solution5
// {
//     int solve(int i, int n, vector<int> cost, vector<int> dp)
//     {
//         if (i == n)
//         {
//             return 0;
//         }
//         if (i > n)
//         {
//             return 0;
//         }

//         if (dp[i] != -1)
//         {
//             return dp[i];
//         }
//         int ans =
//             cost[i] + min(solve(i + 1, n, cost, dp), solve(i + 2, n, cost, dp));
//         dp[i] = ans;
//         return dp[i];
//     }

// public:
//     int minCostClimbingStairs(vector<int> &cost)
//     {
//         int n = cost.size();
//         vector<int> dp(n + 1, -1);
//         return min(solve(0, n, cost, dp), solve(1, n, cost, dp));
//     }
// };
// // Tabulation (Bottom-Up)
// class Solution
// {
// public:
//     int minCostClimbingStairs(vector<int> &cost)
//     {
//         int n = cost.size();
//         vector<int> dp(n + 1, -1);
//         dp[n] = 0;
//         dp[n - 1] = cost[n - 1];

//         for (int i = n - 2; i >= 0; i--)
//         {
//             dp[i] = cost[i] + min(dp[i + 1], dp[i + 2]);
//         }
//         return min(dp[0], dp[1]);
//     }
// };
