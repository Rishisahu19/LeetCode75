// Approach: Recursion
// class Solution
// {
// public:
//     int solve(string &s1, string &s2, int i, int j, int &n1, int &n2)
//     {
//         if (i == n1)
//         {
//             return 0;
//         }
//         if (j == n2)
//         {
//             return 0;
//         }
//         if (s1[i] == s2[j])
//         {
//             return 1 + solve(s1, s2, i + 1, j + 1, n1, n2);
//         }
//         else
//         {
//             return max(solve(s1, s2, i + 1, j, n1, n2), solve(s1, s2, i, j + 1, n1, n2));
//         }
//     }
//     int longestCommonSubsequence(string text1, string text2)
//     {
//         int i = 0;
//         int j = 0;
//         int n1 = text1.size();
//         int n2 = text2.size();
//         return solve(text1, text2, 0, 0, n1, n2);
//     }
// };
// Approach: Recursion + Memoization
// class Solution
// {
// public:
//     int solve_Memo(string &s1, string &s2, int i, int j, int &n1, int &n2,
//                    vector<vector<int>> &dp)
//     {
//         if (i == n1)
//         {
//             return 0;
//         }
//         if (j == n2)
//         {
//             return 0;
//         }
//         if (dp[i][j] != -1)
//         {
//             return dp[i][j];
//         }
//         if (s1[i] == s2[j])
//         {
//             dp[i][j] = 1 + solve_Memo(s1, s2, i + 1, j + 1, n1, n2, dp);
//             return dp[i][j];
//         }
//         else
//         {
//             dp[i][j] = max(solve_Memo(s1, s2, i + 1, j, n1, n2, dp),
//                            solve_Memo(s1, s2, i, j + 1, n1, n2, dp));
//             return dp[i][j];
//         }
//     }
//     int longestCommonSubsequence(string text1, string text2)
//     {
//         int i = 0;
//         int j = 0;
//         int n1 = text1.size();
//         int n2 = text2.size();
//         vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, -1));
//         return solve_Memo(text1, text2, 0, 0, n1, n2, dp);
//     }
// };