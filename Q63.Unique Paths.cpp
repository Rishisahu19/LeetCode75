// Approach: Recursion
// class Solution
// {
// public:
//     bool check(int i, int j, int n, int m)
//     {
//         if (i >= 0 and i < n and j >= 0 and j < m)
//         {
//             return true;
//         }
//         return false;
//     }
//     int solve(int i, int j, int n, int m)
//     {
//         if (i == n - 1 and j == m - 1)
//         {
//             return 1;
//         }
//         int r = 0;
//         int d = 0;
//         if (check(i, j + 1, n, m))
//         {
//             r = solve(i, j + 1, n, m);
//         }
//         if (check(i + 1, j, n, m))
//         {
//             d = solve(i + 1, j, n, m);
//         }
//         return r + d;
//     }
//     int uniquePaths(int m, int n)
//     {
//         int ans = solve(0, 0, m, n);
//         return ans;
//     }
// };
// Approach: Recursion + Memoization
// class Solution
// {
// public:
//     bool check(int i, int j, int n, int m)
//     {
//         if (i >= 0 and i < n and j >= 0 and j < m)
//         {
//             return true;
//         }
//         return false;
//     }
//     int solve(int i, int j, int n, int m, vector<vector<int>> &Dp)
//     {
//         if (i == n - 1 and j == m - 1)
//         {
//             return 1;
//         }
//         if (Dp[i][j] != -1)
//         {
//             return Dp[i][j];
//         }
//         int r = 0;
//         int d = 0;
//         if (check(i, j + 1, n, m))
//         {
//             r = solve(i, j + 1, n, m, Dp);
//         }
//         if (check(i + 1, j, n, m))
//         {
//             d = solve(i + 1, j, n, m, Dp);
//         }
//         Dp[i][j] = r + d;
//         return Dp[i][j];
//     }
//     int uniquePaths(int m, int n)
//     {
//         vector<vector<int>> Dp(n, vector<int>(m, -1));
//         int ans = solve(0, 0, n, m, Dp);
//         return ans;
//     }
// };